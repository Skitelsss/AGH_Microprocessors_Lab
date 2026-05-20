#include "led.h"
#include "keyboard.h"

void Delay(int iDelayInMs)
{
    int iLoopCounter;
    iDelayInMs = iDelayInMs * 12000;

    for(iLoopCounter = 0; iLoopCounter <= iDelayInMs; iLoopCounter++){}
}

int main(void)
{
    KeyBoardInit();
    LedInit();

    while(1)
    {
        switch(eKeyboardRead())
        {
            case BUTTON_1:
                LedStepRight();
                break;

            case BUTTON_2:
                LedStepLeft();
                break;

            default:
                break;
        }

        Delay(100);
    }
}

//komentarz jako zmiana do gita

