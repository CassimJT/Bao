#pragma once

#include "core/enums/GameType.h"
#include "core/model/GameState.h"

namespace Bawo {

class PhaseTransitionRule {
public:
    PhaseTransitionRule();

    GamePhase evaluate(const GameState &state) const;
    bool canEnterTrapPhase(const GameState &state) const;
    bool canEnterDefensePhase(const GameState &state) const;
    bool canEnterMatchPhase(const GameState &state) const;
    QVector<GamePhase> getValidPhases(GameType gameType) const;
};

}
