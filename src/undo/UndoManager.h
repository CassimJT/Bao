#pragma once

#include "core/enums/GameType.h"
#include "core/model/GameState.h"
#include "core/value_objects/Move.h"

#include <QObject>
#include <QString>
#include <QVector>

namespace Bawo {

class UndoManager : public QObject {
    Q_OBJECT
public:
    UndoManager(QObject *parent = nullptr);

    void recordMove(const Move &move);
    void recordState(const GameState &state);
    bool undoLastMove(GameState &state);
    void clear();
    QVector<Move> moves() const;
    GameType undoGameType() const;
signals:
    void undoAvailable(bool available);
    void undoApplied(const Move &move, const GameState &state);

private:
    QVector<Move> m_moves;
    QVector<GameState> m_states;
    GameType m_gameType;
};

}
