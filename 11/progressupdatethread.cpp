#include "progressupdatethread.h"

// ProgressUpdateThread 类的构造函数，初始化成员变量
ProgressUpdateThread::ProgressUpdateThread(QMediaPlayer *player, QObject *parent)
    : QThread(parent), m_player(player)
{
}

// 重写 QThread 的 run 方法，线程启动后将执行此方法
void ProgressUpdateThread::run()
{
    // 当播放器处于播放状态时，不断更新播放位置并发出信号
    while (m_player->state() == QMediaPlayer::PlayingState) {
        qint64 position = m_player->position();
        // 发出 positionChanged 信号，携带当前播放位置的信息
        emit positionChanged(position);
        // 线程休眠 100 毫秒，避免频繁更新
        msleep(100);
    }
}
