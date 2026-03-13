#pragma once
struct ActionResult
{
    enum class Type { Damage, Heal, Charge };
    Type   type{ Type::Damage };
    int    value{ 0 };
};