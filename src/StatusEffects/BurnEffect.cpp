#include "../../include/StatusEffects/BurnEffect.hpp"
#include "../../include/Pokemon/Pokemon.hpp"
#include "../../include/StatusEffects/IStatusEffect.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        void BurnEffect :: applyEffect (Pokemon* target)
        {
            std::cout << target->name << " is burning! it may not be able to move!\n";

            turnLeft = rand() % 3 + 1;
        }
         std::string ParalyzedEffect::getEffectName()
        {
            return "Paralyzed";
        }
          bool ParalyzedEffect::turnEndEffect(Pokemon* target)
        {
            if (turnsLeft <= 0) {
                clearEffect(target);
                return true;
            }
            turnsLeft--;
            int paralysis_chance = rand() % 4; 
            if (paralysis_chance == 0)
            {
                std::cout << target->name << " is burning! It can't move!\n";
                return false; 
            }
            std::cout << target->name << " shakes off the fire momentarily and can move!\n";
            return true; /
            void ParalyzedEffect::clearEffect(Pokemon* target)
        {
            std::cout << target->name << " is no longer Burning..!\n";
            target->clearEffect();
        }

        }
    }
}