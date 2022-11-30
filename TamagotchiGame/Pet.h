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
    void setOwner(string);
    void setType(string);
    void setStatus(string);
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
    string getOwner();
    string getStatus();
    virtual void setSpecialEnergy(int);
    virtual int getSpecialEnergy();
    virtual void addSpecialEnergy(int);
    void toString();




protected:
    string name;
    string type;
    string owner;
    double strength;
    double core;
    double luck;
    double energy;
    string status;


};



#endif //PROJECT_2_C_PET_H
