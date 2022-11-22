#ifndef C_FINAL_PROJECT_PHOENIX_H
#define C_FINAL_PROJECT_PHOENIX_H

#include <string>
#include "Pet.h"

using namespace std;

class Phoenix : public Pet {

private:
    int fireEnergy;

public:
    Phoenix(string,string);
    void addFireEnergy(int);
    void setFireEnergy(int);
    int getFireEnergy();
    void addSpecialEnergy(int);
    void setSpecialEnergy(int);
    int getSpecialEnergy();
};


#endif //C_FINAL_PROJECT_PHOENIX_H
