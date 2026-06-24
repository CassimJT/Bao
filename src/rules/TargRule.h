#pragma once

#include "core/model/Board.h"
#include "core/model/GameState.h"

namespace Bawo {

class TargRule {
public:
    TargRule();

    bool isTarg(const Pit &pit, int player, const Board &board) const;
    QVector<int> findTargs(const GameState &state, int player) const;
};

}
