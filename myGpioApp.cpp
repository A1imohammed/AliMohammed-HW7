#include <iostream>
#include <unistd.h>
#include "myGpio.h"

int main() {
    // GPIO60 is connected to p9.12 (output)
    // GPIO46 is connected to p8.16 (input)

    MYGPIO led(60);      // Output pin
    MYGPIO button(46);   // Input pin

    led.setDirection(1);     // Set as output
    button.setDirection(0);  // Set as input

  
    std::cout << "Turning LED ON (GPIO60)" << std::endl;
    led.setValue(1);
    std::cout << "LED value: " << led.getValue() << std::endl;

    sleep(3);  

    
    std::cout << "Turning LED OFF (GPIO60)" << std::endl;
    led.setValue(0);
    std::cout << "LED value: " << led.getValue() << std::endl;

   
    std::cout << "Reading button input (GPIO46): " << button.getValue() << std::endl;

    return 0;
}
