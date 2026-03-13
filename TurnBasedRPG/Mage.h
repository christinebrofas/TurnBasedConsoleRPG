#pragma once

#include "Player.h"


class Mage : public Player
{
public:
    explicit Mage(std::string name);
 
    ActionResult useSkill() override;
};
