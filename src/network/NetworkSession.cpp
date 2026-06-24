#include "network/NetworkSession.h"

namespace Bawo {

NetworkSession::NetworkSession(QObject *parent)
    : QObject(parent),
      m_connected(false),
      m_isLAN(false)
{
}

NetworkSession::~NetworkSession() = default;
bool NetworkSession::connectToHost(const QString &address) {
    Q_UNUSED(address); return false;
}
void NetworkSession::disconnectFromHost() {
}
void NetworkSession::send(const QByteArray &data) {
    Q_UNUSED(data);
}
QString NetworkSession::sessionId() const {
    return m_sessionId;
}
}
