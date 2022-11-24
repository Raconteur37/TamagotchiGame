#ifndef PROJECT_2_C_PET_H
#define PROJECT_2_C_PET_H

using namespace std;

class Pet {
public:
    Pet();
    virtual ~Pet();
    void setName(string);
    void setStrength(double);
    void setCore(double);
    void setLuck(double);
    void setEnergy(double);
    void addStrength(double);
    void addCore(double);
    void addLuck(double);
    void addEnergy(double);
    string getName();
    double getStrength();
    double getCore();
    double getLuck();
    double getEnergy();
    string getType();
    virtual void setSpecialEnergy(int);
    virtual int getSpecialEnergy();
    virtual void addSpecialEnergy(int);




protected:
    string name;
    string type;
    double strength;
    double core;
    double luck;
    double energy;


};



#endif //PROJECT_2_C_PET_H
