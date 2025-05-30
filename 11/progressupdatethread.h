#ifndef PROGRESSUPDATETHREAD_H
#define PROGRESSUPDATETHREAD_H

#include <QThread>
#include <QMediaPlayer>

// 定义一个继承自 QThread 的 ProgressUpdateThread 类，用于更新播放进度
class ProgressUpdateThread : public QThread
{
    Q_OBJECT
public:
    // 构造函数，接收一个 QMediaPlayer 指针和一个可选的父对象指针
    explicit ProgressUpdateThread(QMediaPlayer *player, QObject *parent = nullptr);

signals:
    // 定义一个信号，当播放位置改变时发出，携带当前播放位置的信息
    void positionChanged(qint64 position);

protected:
    // 重写 QThread 的 run 方法，线程启动后将执行此方法
    void run() override;

private:
    // 指向 QMediaPlayer 对象的指针，用于获取播放位置
    QMediaPlayer *m_player;
};

#endif // PROGRESSUPDATETHREAD_H
