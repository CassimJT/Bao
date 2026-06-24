#pragma once

#include "core/enums/Direction.h"

#include <QtGlobal>

namespace Bawo {

class Move {
public:
    Move();
    Move(int pitIndex, Direction direction, qint64 timestamp, bool isSpecialMove);

    int pitIndex() const;
    Direction direction() const;
    qint64 timestamp() const;
    bool isSpecialMove() const;

private:
    int m_pitIndex;
    Direction m_direction;
    qint64 m_timestamp;
    bool m_isSpecialMove;
};

}
