#pragma once

#include "core/enums/GamePhase.h"
#include "core/enums/GameType.h"
#include "core/enums/MatchState.h"
#include "core/model/Board.h"

namespace Bawo {

class GameState {
public:
    GameState();

    Board &board();
    const Board &board() const;
    int currentPlayer() const;
    int moveCount() const;
    MatchState matchState() const;
    GamePhase phase() const;
    GameType gameType() const;
    int winner() const;
    bool isGameOver() const;
    int houseSeeds(int player) const;
    int trapSeeds(int player) const;
    int reserveSeeds(int player) const;

    void setPhase(GamePhase phase);
    void setCurrentPlayer(int player);
    void setGameType(GameType gameType);
    void setWinner(int winner);
    void incrementMoveCount();
    bool buildHouse(int player, int count);
    bool buildTrap(int player, int count);

private:
    Board m_board;
    int m_currentPlayer;
    int m_moveCount;
    MatchState m_matchState;
    GamePhase m_phase;
    GameType m_gameType;
    int m_winner;
    int m_houseSeedCount[2];
    int m_trapSeedCount[2];
    int m_reserveSeedCount[2];
};

}
