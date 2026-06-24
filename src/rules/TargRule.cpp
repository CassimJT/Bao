#include "rules/TargRule.h"

namespace Bawo {

TargRule::TargRule() = default;
bool TargRule::isTarg(const Pit &pit, int player, const Board &board) const {
    Q_UNUSED(pit);
    Q_UNUSED(player);
    Q_UNUSED(board);
    return false;
}
QVector<int> TargRule::findTargs(const GameState &state, int player) const {
    Q_UNUSED(state);
    Q_UNUSED(player);
    return {};
}

}
