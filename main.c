#include "complete_header.h"

int main(void)
{
    initPort();
    initADC();
    initPWM();

    while(1)
    {
        volatile int systemStaus, temperature;
        uint16_t temp;
        systemStaus = check();
        
        if(systemStaus)
        {
            temp = readADC(5);
            _delay_ms(200);
            temperature = PWMGenerate(temp);
        }
        else
        {
            OCR1A =0;
        }
    }
}