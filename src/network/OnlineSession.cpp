#include "network/OnlineSession.h"

namespace Bawo {

OnlineSession::OnlineSession() = default;
bool OnlineSession::connectToHost(const QString &address) {
    Q_UNUSED(address); return false;
}
bool OnlineSession::connectToServer(const QString &serverUrl) {
    Q_UNUSED(serverUrl); return false;
}

}
