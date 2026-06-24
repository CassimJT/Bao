#include "monetization/AdsManager.h"

namespace Bawo {

AdsManager::AdsManager(QObject *parent)
    : QObject(parent)
{
}
void AdsManager::showInterstitialAd() {
}
void AdsManager::showRewardedAd() {
}
bool AdsManager::isAdReady() const {
    return false;
}
}
