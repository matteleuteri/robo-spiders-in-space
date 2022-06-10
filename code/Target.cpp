#include "headers/Target.h"

Target::Target()
{}

void Target::checkIfHit(Animator *animator, int64_t t)
{
    if(std::abs(animator->gridCol - x) < 50 && std::abs(animator->gridRow - y) < 50)
    {
        x = 100;
        y = 100;
        (animator->scoreValue)++;
        animator->showScore(t);
    }
}