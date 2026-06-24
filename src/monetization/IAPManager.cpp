#include "monetization/IAPManager.h"

namespace Bawo {

IAPManager::IAPManager() = default;
bool IAPManager::purchaseSpecialMove() {
    return false;
}
bool IAPManager::purchaseSeedStyle(const QString &styleId) {
    Q_UNUSED(styleId); return false;
}
bool IAPManager::purchaseBoardStyle(const QString &styleId) {
    Q_UNUSED(styleId); return false;
}
void IAPManager::restorePurchases() {

}
bool IAPManager::watchAdForMove() {
    return false;
}
bool IAPManager::watchAdForSeedStyle() {
    return false;
}
bool IAPManager::watchAdForBoardStyle() {
    return false;
}
void IAPManager::purchaseCompleted(PurchaseType purchaseType) {
    Q_UNUSED(purchaseType);
}
void IAPManager::purchaseFailed(const QString &message) {
    Q_UNUSED(message);
}
void IAPManager::adRewarded(PurchaseType purchaseType) {
    Q_UNUSED(purchaseType);
}

}
