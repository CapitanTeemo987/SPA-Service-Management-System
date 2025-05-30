#ifndef SPA_H
#define SPA_H
#include <string>

class SpaService{
    protected:
        std::string service;
        int duration; 
        float basePrice;
        std::string time; 

    public: 
        //constructors 
        SpaService();
        SpaService(std::string, int, float, std::string);
        
        //getters
        std::string getService();
        int getDuration();
        std::string getTime();

        virtual float finalPrice();
        virtual float finalPrice(int); //overloaded
};


#endif