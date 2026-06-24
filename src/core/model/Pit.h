#pragma once

namespace Bawo {

class Pit {
public:
    Pit();
    explicit Pit(int seedCount);

    int seedCount() const;
    void addSeeds(int seedCount);
    void removeSeeds(int seedCount);
    int removeAllSeeds();
    bool isEmpty() const;
    bool isTarg() const;
    bool isHouse() const;
    bool isTrap() const;
    void setHouse(bool isHouse);
    void setTrap(bool isTrap);

private:
    int m_seedCount;
    bool m_isHouse;
    bool m_isTrap;
    bool m_isReserve;
};

}
