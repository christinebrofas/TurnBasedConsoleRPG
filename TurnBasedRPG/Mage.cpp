#include "Mage.h"
#include "ActionResult.h"
#include <string>

Mage::Mage(std::string name)
    : Player{ std::move(name), 90 }
{
}

ActionResult Mage::useSkill()
{

    Player::useSkill(); 
    return  ActionResult{ ActionResult::Type::Damage, 40 };
}
