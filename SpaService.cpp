#include "SpaService.h"

SpaService::SpaService(){
    service = "";
    duration = 0;
    basePrice = 0.0;
    time = "";
}

SpaService::SpaService(std::string service, int duration, float basePrice, std::string time){
    this->service = service;
    this->duration = duration;
    this->basePrice = basePrice;
    this->time = time;
}

std::string SpaService::getService(){
    return service;
}

int SpaService::getDuration(){
    return duration;
}

std::string SpaService::getTime(){
    return time;
}

float SpaService::finalPrice(){
    return basePrice;

}
float SpaService::finalPrice(int duration){
    if(duration > 60){
        return basePrice + 200;
    }
    else{
        return basePrice;
    }
}


