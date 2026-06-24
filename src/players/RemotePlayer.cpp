#include "players/RemotePlayer.h"

namespace Bawo {

RemotePlayer::RemotePlayer()
    : m_networkSession(nullptr),
      m_latencyMs(0)
{
}

RemotePlayer::RemotePlayer(QString id, QString name, QString connectionId)
    : Player(std::move(id), std::move(name), PlayerType::Remote),
      m_connectionId(std::move(connectionId)),
      m_networkSession(nullptr),
      m_latencyMs(0)
{
}

void RemotePlayer::sendMove(const Move &move) {
    Q_UNUSED(move);
}
void RemotePlayer::connectSession(NetworkSession *networkSession) {
    m_networkSession = networkSession;
}
}
