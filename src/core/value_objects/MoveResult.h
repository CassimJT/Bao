#pragma once

#include "core/enums/GamePhase.h"

#include <QString>
#include <QVector>

namespace Bawo {

class MoveResult {
public:
    MoveResult();

    bool success() const;
    QString errorMessage() const;
    bool captureOccurred() const;
    bool extraTurnAwarded() const;
    QVector<int> affectedPits() const;
    GamePhase phaseTransition() const;

    void setSuccess(bool success);
    void setErrorMessage(const QString &errorMessage);
    void setCaptureOccurred(bool captureOccurred);
    void setExtraTurnAwarded(bool extraTurnAwarded);
    void setAffectedPits(const QVector<int> &affectedPits);
    void setPhaseTransition(GamePhase phaseTransition);

private:
    bool m_success;
    QString m_errorMessage;
    bool m_captureOccurred;
    bool m_extraTurnAwarded;
    QVector<int> m_affectedPits;
    GamePhase m_phaseTransition;
};

}
