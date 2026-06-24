#pragma once

#include "core/enums/TournamentState.h"
#include "core/enums/GameType.h"
#include "tournament/TournamentBracket.h"
#include "tournament/TournamentRules.h"

#include <QMap>
#include <QObject>

namespace Bawo {

class TournamentController : public QObject {
    Q_OBJECT
public:
    TournamentController(QObject *parent = nullptr);

    TournamentState state() const;
    void createTournament(const QVector<Team> &teams, GameType gameType);
    void startTournament();
    void advanceRound();
    void finishTournament();
    void registerMatch(TournamentMatch *match);
    QMap<QString, int> currentLeaderboard() const;
    GameType tournamentGameType() const;
signals:
    void tournamentCreated();
    void tournamentStarted();
    void roundAdvanced();
    void tournamentFinished();
    void leaderboardUpdated();

private:
    TournamentState m_state;
    QVector<TournamentMatch *> m_matches;
    QVector<Team> m_teams;
    int m_currentRound;
    TournamentBracket *m_bracket;
    GameType m_tournamentGameType;
};

}
