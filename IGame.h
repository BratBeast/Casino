#pragma once

#include <QString>
#include <QVariant>

struct GameResult
{
    QVariant primaryValue;

    bool isWin = false;

    double moneyDelta = 0.0;
};

class IGame
{
public:
    virtual ~IGame() {}

    virtual GameResult playOnce() = 0; // = 0 означає "чисто віртуальний"
    
    virtual QString getGameName() const = 0;
};