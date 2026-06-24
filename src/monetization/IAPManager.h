#pragma once

#include "core/enums/PurchaseType.h"

#include <QString>
#include <QVector>

namespace Bawo {

class IAPManager {
public:
    IAPManager();

    bool purchaseSpecialMove();
    bool purchaseSeedStyle(const QString &styleId);
    bool purchaseBoardStyle(const QString &styleId);
    void restorePurchases();
    bool watchAdForMove();
    bool watchAdForSeedStyle();
    bool watchAdForBoardStyle();

    void purchaseCompleted(PurchaseType purchaseType);
    void purchaseFailed(const QString &message);
    void adRewarded(PurchaseType purchaseType);
};

}
