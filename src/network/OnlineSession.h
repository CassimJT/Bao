#pragma once

#include "network/NetworkSession.h"

namespace Bawo {

class OnlineSession : public NetworkSession {
public:
    OnlineSession();

    bool connectToHost(const QString &address) override;
    bool connectToServer(const QString &serverUrl);
};

}
