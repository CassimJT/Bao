#pragma once

#include <QByteArray>
#include <QObject>
#include <QString>

namespace Bawo {

class NetworkSession : public QObject {
    Q_OBJECT
public:
    NetworkSession(QObject *parent = nullptr);
    virtual ~NetworkSession();

    virtual bool connectToHost(const QString &address);
    virtual void disconnectFromHost();
    virtual void send(const QByteArray &data);
    QString sessionId() const;
signals:
    void connected();
    void disconnected();
    void dataReceived(const QByteArray &data);
    void errorOccurred(const QString &error);

protected:
    QString m_sessionId;
    bool m_connected;
    bool m_isLAN;
};

}
