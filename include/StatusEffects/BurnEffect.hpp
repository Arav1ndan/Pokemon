#pragma once
#include "IStatusEffect.hpp"

namespace N_Pokemon
{
    namespace N_StatusEffects
    {
        class BurnEffect : public IStatusEffect
        {
            private:
            int turnLeft;
            public:
            void applyEffect(Pokemon *target) override;
            std::string getEffectName() override;
            bool turnEndEffect(Pokemon *target) override;
            void clearEffect(Pokemon *target) override; 
        }
    }
    
} // namespace N_Pokemon
