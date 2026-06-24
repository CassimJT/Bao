#include "network/LANSession.h"

namespace Bawo {

LANSession::LANSession() = default;
bool LANSession::connectToHost(const QString &address) {
    Q_UNUSED(address); return false;
}
QVector<QString> LANSession::discoverPeers() const {
    return {};
}
bool LANSession::connectBluetooth(const QString &address) {
    Q_UNUSED(address); return false;
}

}
