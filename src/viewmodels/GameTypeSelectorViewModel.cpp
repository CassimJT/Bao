#include "viewmodels/GameTypeSelectorViewModel.h"

namespace Bawo {

GameTypeSelectorViewModel::GameTypeSelectorViewModel()
    : m_selectedType(GameType::House)
{
}

void GameTypeSelectorViewModel::selectGameType(GameType gameType) {
    Q_UNUSED(gameType);
}
GameType GameTypeSelectorViewModel::selectedGameType() const {
    return m_selectedType;
}
QString GameTypeSelectorViewModel::getRuleDescription(GameType gameType) const {
    Q_UNUSED(gameType); return {};
}
QString GameTypeSelectorViewModel::getPhaseDescription(GameType gameType) const {
    Q_UNUSED(gameType); return {};
}
void GameTypeSelectorViewModel::gameTypeSelected(GameType gameType) {
    Q_UNUSED(gameType);
}

}
