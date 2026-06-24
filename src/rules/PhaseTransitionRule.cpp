#include "rules/PhaseTransitionRule.h"

namespace Bawo {

PhaseTransitionRule::PhaseTransitionRule() = default;
GamePhase PhaseTransitionRule::evaluate(const GameState &state) const {
    Q_UNUSED(state); return GamePhase::Setup;
}
bool PhaseTransitionRule::canEnterTrapPhase(const GameState &state) const {
    Q_UNUSED(state); return false;
}
bool PhaseTransitionRule::canEnterDefensePhase(const GameState &state) const {
    Q_UNUSED(state); return false;
}
bool PhaseTransitionRule::canEnterMatchPhase(const GameState &state) const {
    Q_UNUSED(state); return false;
}
QVector<GamePhase> PhaseTransitionRule::getValidPhases(GameType gameType) const {
    Q_UNUSED(gameType); return {};
}

}
