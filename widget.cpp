#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , is_playing(0) // 初始化is_playing成员变量
{
    ui->setupUi(this);
    resize(700,507);
    myplayer = new QMediaPlayer(this);
    // Qt5中不需要QAudioOutput，直接设置音量
    mywidget = new QVideoWidget(ui->label);
    myplayer->setVideoOutput(mywidget);
    mywidget->resize(ui->label->size());
    setWindowIcon(QIcon(":/new/prefix1/img/video.png"));
    setWindowTitle("我的播放器");
    ui->Voice->setRange(0, 100);
    ui->Voice->setValue(50);
    myplayer->setVolume(50); // Qt5中直接设置播放器音量
    ui->comboBox->setCurrentText("1X");
    ui->Begin->setEnabled(false);

    connect(myplayer, &QMediaPlayer::durationChanged, this, [=](qint64 dur){
        ui->Slide->setRange(0, (int)dur);
        ui->TTime->setText(QString("%1:%2").arg(dur/60000, 2, 10, QChar('0')).arg(dur/1000%60, 2, 10, QChar('0')));
    });
    connect(myplayer, &QMediaPlayer::positionChanged, this, [=](qint64 pos){
        ui->Time->setText(QString("%1:%2").arg(pos/60000, 2, 10, QChar('0')).arg(pos/1000%60, 2, 10, QChar('0')));
    });

    // 连接滑块的sliderMoved信号，避免播放时因positionChanged导致的干扰
    connect(ui->Slide, &QSlider::sliderMoved, this, [=](int value){
        myplayer->setPosition(value);
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    mywidget->resize(ui->label->size());
    QWidget::paintEvent(event); // 调用基类实现
}

void Widget::on_Open_clicked()
{
    QString myresource;
    myresource = QFileDialog::getOpenFileName(this, tr("选择视频或音频"), "C:\\Users\\31312\\Desktop",
                                              tr("All Files(*.*);;Mp4 Files(*.mp4);;Mp3 Files(*.mp3);;"));
    // Qt5使用setMedia而非setSource
    myplayer->setMedia(QUrl::fromLocalFile(myresource));
    ui->Begin->setEnabled(true);
}

void Widget::on_Begin_clicked()
{
    if(is_playing == 0){
        myplayer->play();
        ui->Begin->setStyleSheet("QPushButton#Begin{border-image:url(:/new/prefix1/img/stop.png);}");
        is_playing = 1;
    }
    else{
        myplayer->pause();
        ui->Begin->setStyleSheet("QPushButton#Begin{border-image:url(:/new/prefix1/img/play.png);}");
        is_playing = 0;
    }
}

void Widget::on_Voice_valueChanged(int value)
{
    myplayer->setVolume(value); // Qt5中直接设置播放器音量
}

void Widget::on_Backward_clicked()
{
    qint64 currentpos = myplayer->position();
    myplayer->setPosition(qMax(0LL, currentpos - 5000)); // 防止负值
}

void Widget::on_Forward_clicked()
{
    qint64 currentpos = myplayer->position();
    qint64 duration = myplayer->duration();
    myplayer->setPosition(qMin(duration, currentpos + 5000)); // 防止超过总时长
}

void Widget::on_Slide_valueChanged(int value)
{
    // 仅在用户拖动滑块时响应，避免与positionChanged信号冲突
    if(ui->Slide->isSliderDown()) {
        myplayer->setPosition(value);
    }
}

void Widget::on_comboBox_currentTextChanged(const QString &arg1)
{
    if(arg1 == "1X"){
        myplayer->setPlaybackRate(1.0);
    }
    else if(arg1 == "0.75X"){
        myplayer->setPlaybackRate(0.75);
    }
    else if(arg1 == "1.5X"){
        myplayer->setPlaybackRate(1.5);
    }
    else if(arg1 == "2X"){
        myplayer->setPlaybackRate(2.0);
    }
}
