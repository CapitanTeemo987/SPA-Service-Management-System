#ifndef CUSTOMSERVICE_H
#define CUSTOMSERVICE_H

#include "SpaService.h"

class CustomService : public SpaService{
    private: 
        std::string status;

    public:
        CustomService();
        CustomService(std::string, int, float,std::string, std::string);

        std::string getStatus();

        virtual float finalPrice() override;
        virtual float finalPrice(int) override;


};

#endif