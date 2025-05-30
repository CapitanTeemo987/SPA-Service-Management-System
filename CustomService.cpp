#include "CustomService.h"

CustomService::CustomService() : SpaService(){
    status = "new";
}

CustomService::CustomService(std::string service, int duration, float basePrice, std::string time, std::string status) : SpaService(service, duration, basePrice, time){
    this->status = status;
}

std::string CustomService::getStatus(){
    return status;
}

float CustomService::finalPrice(){
    return SpaService::finalPrice();
}

float CustomService::finalPrice(int duration){
    float price = basePrice;

    if(duration > 60){
        price += 200;
    }
    if (status == "returning"){
        price *= 0.9; 
    }
    else{
        return price;
    }
}