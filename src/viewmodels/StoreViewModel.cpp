#include "viewmodels/StoreViewModel.h"

namespace Bawo {

StoreViewModel::StoreViewModel()
    : m_iapManager(nullptr),
      m_styleManager(nullptr)
{
}

void StoreViewModel::purchaseSeedStyle(const QString &styleId) {
    Q_UNUSED(styleId);
}
void StoreViewModel::purchaseBoardStyle(const QString &styleId) {
    Q_UNUSED(styleId);
}
void StoreViewModel::watchAdForMove() {
}
QVariantList StoreViewModel::seedStyles() const {
    return {};
}
QVariantList StoreViewModel::boardStyles() const {
    return {};
}
void StoreViewModel::purchaseSuccessful() {

}
void StoreViewModel::purchaseFailed(const QString &message) {
    Q_UNUSED(message);
}
void StoreViewModel::adCompleted() {

}

}
