#include "core/value_objects/MoveResult.h"

namespace Bawo {

MoveResult::MoveResult()
    : m_success(false),
      m_captureOccurred(false),
      m_extraTurnAwarded(false),
      m_phaseTransition(GamePhase::Setup)
{
}

bool MoveResult::success() const {
    return m_success;
}
QString MoveResult::errorMessage() const {
    return m_errorMessage;
}
bool MoveResult::captureOccurred() const {
    return m_captureOccurred;
}
bool MoveResult::extraTurnAwarded() const {
    return m_extraTurnAwarded;
}
QVector<int> MoveResult::affectedPits() const {
    return m_affectedPits;
}
GamePhase MoveResult::phaseTransition() const {
    return m_phaseTransition;
}
void MoveResult::setSuccess(bool success) {
    m_success = success;
}
void MoveResult::setErrorMessage(const QString &errorMessage) {
    m_errorMessage = errorMessage;
}
void MoveResult::setCaptureOccurred(bool captureOccurred) {
    m_captureOccurred = captureOccurred;
}
void MoveResult::setExtraTurnAwarded(bool extraTurnAwarded) {
    m_extraTurnAwarded = extraTurnAwarded;
}
void MoveResult::setAffectedPits(const QVector<int> &affectedPits) {
    m_affectedPits = affectedPits;
}
void MoveResult::setPhaseTransition(GamePhase phaseTransition) {
    m_phaseTransition = phaseTransition;
}

}
