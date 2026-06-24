#pragma once

#include "core/enums/PlayerType.h"
#include "core/value_objects/Move.h"

#include <QObject>
#include <QString>

namespace Bawo {

class GameState;

class Player : public QObject {
    Q_OBJECT
public:
    Player(QObject *parent = nullptr);
    Player(QString id, QString displayName, PlayerType type, QObject *parent = nullptr);
    virtual ~Player();

    QString id() const;
    QString name() const;
    PlayerType type() const;
    int purchasedSpecialMoves() const;
    bool useSpecialMove();
    void addSpecialMove();

    virtual void startTurn(const GameState &state);
signals:
    void moveReady(const Move &move);
    void errorOccurred(const QString &error);
    void disconnected();

private:
    QString m_id;
    QString m_name;
    PlayerType m_type;
    int m_purchasedSpecialMoves;
};

}
