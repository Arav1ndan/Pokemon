#include "../../../include/StatusEffects/ParalyzedEffect.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/StatusEffects/IStatusEffectType.hpp"
#include <iostream>

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        void ParalyzedEffect::applyEffect(Pokemon* target)
        {
            std::cout << target->name << " is paralyzed! It may not be able to move!\n";

            turnsLeft = rand() % 3 + 1;
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
                std::cout << target->name << " is paralyzed! It can't move!\n";
                return false; 
            }

    
            std::cout << target->name << " shakes off the paralysis momentarily and can move!\n";
            return true; 
        }

        void ParalyzedEffect::clearEffect(Pokemon* target)
        {
            std::cout << target->name << " is no longer paralyzed!\n";
            target->clearEffect();
        }
    }
}