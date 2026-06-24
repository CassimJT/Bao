#include "undo/UndoManager.h"

namespace Bawo {

UndoManager::UndoManager(QObject *parent)
    : QObject(parent),
      m_gameType(GameType::House)
{
}

void UndoManager::recordMove(const Move &move) {
    Q_UNUSED(move);
}
void UndoManager::recordState(const GameState &state) {
    Q_UNUSED(state);
}
bool UndoManager::undoLastMove(GameState &state) {
    Q_UNUSED(state); return false;
}
void UndoManager::clear() {
}
QVector<Move> UndoManager::moves() const {
    return m_moves;
}
GameType UndoManager::undoGameType() const {
    return m_gameType;
}
}
