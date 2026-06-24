#include "core/value_objects/Move.h"

namespace Bawo {

Move::Move()
    : m_pitIndex(-1), m_direction(Direction::Left), m_timestamp(0), m_isSpecialMove(false)
{
}

Move::Move(int pitIndex, Direction direction, qint64 timestamp, bool isSpecialMove)
    : m_pitIndex(pitIndex), m_direction(direction), m_timestamp(timestamp), m_isSpecialMove(isSpecialMove)
{
}

int Move::pitIndex() const {
    return m_pitIndex;
}
Direction Move::direction() const {
    return m_direction;
}
qint64 Move::timestamp() const {
    return m_timestamp;
}
bool Move::isSpecialMove() const {
    return m_isSpecialMove;
}

}
