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
    void addSpecialEnergy(int) override;
    void setSpecialEnergy(int) override;
    int getSpecialEnergy() override;

};


#endif //C_FINAL_PROJECT_PHOENIX_H
