#include "monetization/StyleManager.h"

namespace Bawo {

StyleManager::StyleManager() = default;
QVector<SeedStyle> StyleManager::seedStyles() const {
    return m_seedStyles;
}
QVector<BoardStyle> StyleManager::boardStyles() const {
    return m_boardStyles;
}
SeedStyle StyleManager::currentSeedStyle() const {
    return m_currentSeedStyle;
}
BoardStyle StyleManager::currentBoardStyle() const {
    return m_currentBoardStyle;
}
void StyleManager::setSeedStyle(const QString &styleId) {
    Q_UNUSED(styleId);
}
void StyleManager::setBoardStyle(const QString &styleId) {
    Q_UNUSED(styleId);
}

}
