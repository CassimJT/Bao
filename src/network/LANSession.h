#pragma once

#include "network/NetworkSession.h"

#include <QVector>

namespace Bawo {

class LANSession : public NetworkSession {
public:
    LANSession();

    bool connectToHost(const QString &address) override;
    QVector<QString> discoverPeers() const;
    bool connectBluetooth(const QString &address);
};

}
