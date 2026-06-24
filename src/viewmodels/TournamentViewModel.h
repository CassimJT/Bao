#pragma once

#include "tournament/TournamentController.h"

#include <QObject>
#include <QVariant>

namespace Bawo {

class TournamentViewModel : public QObject {
    Q_OBJECT
public:
    TournamentViewModel(QObject *parent = nullptr);

    void startTournament(GameType gameType);
    void joinTournament(const QString &teamName);
    QVariant currentBracket() const;
    QVariant leaderboard() const;
    GameType tournamentGameType() const;
signals:
    void tournamentUpdated();
    void roundChanged();
    void leaderboardChanged();

private:
    TournamentController *m_controller;
};

}
