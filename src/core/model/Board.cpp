#include "core/model/Board.h"

namespace Bawo {

Board::Board()
    : m_territoryCount(0)
{
}

Pit &Board::pit(int index) {
    Q_UNUSED(index); static Pit emptyPit; return emptyPit;
}
int Board::pitCount() const {
    return 0;
}
void Board::reset(const QVector<int> &layout) {
    Q_UNUSED(layout);
}
int Board::totalSeeds(int player) const {
    Q_UNUSED(player); return 0;
}
QVector<int> Board::frontLinePits(int player) const {
    Q_UNUSED(player); return {};
}
QVector<int> Board::innerLinePits(int player) const {
    Q_UNUSED(player); return {};
}
Pit &Board::reservePit(int player) {
    Q_UNUSED(player); static Pit emptyPit; return emptyPit;
}

}
