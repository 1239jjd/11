#ifndef WIDGET_H
#define WIDGET_H

#include<QWidget>
#include<QMediaPlayer>
#include<QVideoWidget>
#include<QFileDialog>
#include<QAudioOutput>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void paintEvent(QPaintEvent *event);

private slots:
    void on_Open_clicked();

    void on_Begin_clicked();

    void on_Voice_valueChanged(int value);

    void on_Backward_clicked();

    void on_Forward_clicked();

    void on_Slide_valueChanged(int value);

    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::Widget *ui;
    QMediaPlayer * myplayer =nullptr;
    QVideoWidget * mywidget =nullptr;
    QAudioOutput *audiooutput =nullptr;
    int is_playing=0;
};
#endif // WIDGET_H
