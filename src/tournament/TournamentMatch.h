#pragma once

#include "core/enums/MatchState.h"
#include "core/enums/GameType.h"
#include "core/value_objects/MoveResult.h"
#include "match/MatchController.h"
#include "tournament/Team.h"

#include <QObject>
#include <QString>

namespace Bawo {

class TournamentMatch : public QObject {
    Q_OBJECT
public:
    TournamentMatch(QObject *parent = nullptr);

    void start();
    MoveResult result() const;
    Team *winner() const;
    Team teamA() const;
    Team teamB() const;
    GameType gameType() const;
signals:
    void matchCompleted(Bawo::Team *winner);

private:
    MatchController *m_match;
    Team m_teamA;
    Team m_teamB;
    Team *m_winner;
    GameType m_gameType;
};

}
