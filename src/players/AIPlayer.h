#pragma once

#include "core/enums/AIDifficulty.h"
#include "players/Player.h"
#include "players/ai/BoardEvaluator.h"

namespace Bawo {

class AIPlayer : public Player {
    Q_OBJECT
public:
    AIPlayer();
    AIPlayer(QString id, QString name, AIDifficulty difficulty);

    void setDifficulty(AIDifficulty difficulty);
    int evaluateBoard(const GameState &state) const;
    void calculateMove(const GameState &state);
    int minimax(const GameState &state, int depth, bool isMaximizing) const;
signals:
    void thinkingStarted();
    void thinkingFinished();

private:
    AIDifficulty m_difficulty;
    BoardEvaluator *m_evaluator;
};

}
