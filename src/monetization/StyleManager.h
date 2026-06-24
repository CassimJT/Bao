#pragma once

#include "monetization/BoardStyle.h"
#include "monetization/SeedStyle.h"

#include <QVector>

namespace Bawo {

class StyleManager {
public:
    StyleManager();

    QVector<SeedStyle> seedStyles() const;
    QVector<BoardStyle> boardStyles() const;
    SeedStyle currentSeedStyle() const;
    BoardStyle currentBoardStyle() const;

    void setSeedStyle(const QString &styleId);
    void setBoardStyle(const QString &styleId);

private:
    QVector<SeedStyle> m_seedStyles;
    QVector<BoardStyle> m_boardStyles;
    SeedStyle m_currentSeedStyle;
    BoardStyle m_currentBoardStyle;
};

}
