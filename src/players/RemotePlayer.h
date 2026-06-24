#pragma once

#include "players/Player.h"

namespace Bawo {

class NetworkSession;

class RemotePlayer : public Player {
    Q_OBJECT
public:
    RemotePlayer();
    RemotePlayer(QString id, QString name, QString connectionId);

    void sendMove(const Move &move);
    void connectSession(NetworkSession *networkSession);
signals:
    void latencyChanged(int latencyMs);
    void connectionLost();

private:
    QString m_connectionId;
    NetworkSession *m_networkSession;
    int m_latencyMs;
};

}
