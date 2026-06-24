#pragma once

#include "core/model/Pit.h"

#include <QVector>

namespace Bawo {

class Board {
public:
    Board();

    Pit &pit(int index);
    int pitCount() const;
    void reset(const QVector<int> &layout);
    int totalSeeds(int player) const;
    QVector<int> frontLinePits(int player) const;
    QVector<int> innerLinePits(int player) const;
    Pit &reservePit(int player);

private:
    QVector<Pit> m_pits;
    int m_territoryCount;
};

}
