#include "SpaService.h"
#include "CustomService.h"
#include <iostream>

int main(){
    CustomService customService("Personalized therapeutic massage", 75, 1400, "3:00 PM","new");
    CustomService customService2("Personalized therapeutic massage", 60, 1200, "4:00 PM", "returning");   

    std::cout << "Service: " << customService.getService() << std::endl;
    std::cout << "Duration: " << customService.getDuration() << " minutes\n";
    std::cout << "Base Price: " << customService.finalPrice() << std::endl;
    std::cout << "Time: " << customService.getTime() << std::endl;
    std::cout << "Client Type: " << customService.getStatus() << std::endl;


    if(customService.getDuration() > 60){
        std::cout << "Note: Duration exceeds 60 minutes. Surcharge applied: $200 \n";
    }
    
    std::cout << "Final price: " << customService.finalPrice() << std::endl;
    std::cout << "Booking Confirmed\n";

    std::cout << "=========================================\n";

    std::cout << "Service: " << customService2.getService() << std::endl;
    std::cout << "Duration: " << customService2.getDuration() << " minutes\n";
    std::cout << "Base Price: " << customService2.finalPrice() << std::endl;
    std::cout << "Time: " << customService2.getTime();
    std::cout << "Client Type: " << customService2.getStatus();
    
    if(customService2.getStatus() == "returning"){
        std::cout << "Note: Returning client discount applied: 10%\n";
    }

    std::cout << "Final Price: " << customService2.finalPrice() << std::endl;
    std::cout << "Booking Confirmed\n";

    return 0;
}