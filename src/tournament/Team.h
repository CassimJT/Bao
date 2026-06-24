#pragma once

#include "players/Player.h"

#include <QString>
#include <QVector>

namespace Bawo {

class Team {
public:
    Team();

    QString id() const;
    QString name() const;
    QVector<Player *> players() const;
    int points() const;

    void setName(const QString &name);
    void addPlayer(Player *player);
    void addPoints(int points);

private:
    QString m_id;
    QString m_name;
    QVector<Player *> m_players;
    int m_points;
};

}
