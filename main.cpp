// Unit 8 Assigment,Austin Montez
// 12-1-2019
#include <iostream>
#include <cmath>
#include <string>
#include "Input_Validation_Extended.h"
using namespace std;

class Income // Income for both residents
{
  protected:
    double payCheckJob1;
    double payCheck1_Job1;
    double payCheck2_Job2;
    double refundCheck;
    double totalIncome;
  public:
    Income(double pcj1, double pc1j1, double pc2j2, double rc, double t) : payCheckJob1(pcj1), payCheck1_Job1(pc1j1), payCheck2_Job2(pc2j2), refundCheck(rc), totalIncome(t) { }

    void showIncome() // Show Total Income
    {
      cout << "\nTotal Income for both Residents: \n" << "\n" << "PayCheck Job 1: $" << payCheckJob1 << "\n" << "PayCheck1 Job 1: $" << payCheck1_Job1 << "\n" << "PayCheck2 Job2: $" << payCheck2_Job2 << "\n" << "RefundCheck: $" << refundCheck << "\n" << "Total: $" << totalIncome << endl << endl;
    }
};
class Cost
{
  protected:
    double rent, electric, water, savings, entertainment, clothes, shoes, vending, creditCard, carPMT, carInsurance, carMaintenance, gas, food, dining, cleaning, personal, charity, petCare, cellPhone, internet, streaming, amazon, total, whatsleft;
  public:
    Cost(double r, double e, double w, double s, double ent, double c, double sh, double v, double cc, double cPMT, double ci, double cm, double g, double f, double d, double cl, double pe, double ch, double pc, double cp, double i, double st, double a, double t, double wl) : rent(r), electric(e), water(w), savings(s), entertainment(ent), clothes(c), shoes(sh), vending(v), creditCard(cc), carPMT(cPMT), carInsurance(ci), carMaintenance(cm), gas(g), food(f), dining(d), cleaning(cl), personal(pe), charity(ch), petCare(pc), cellPhone(cp), internet(i), streaming(st), amazon(a), total(t), whatsleft(wl) { }
    /*=============================================================================*/// Sets and gets for all the variables in Expenses
    void setRent(double r) {rent = r;}
    double getRent()const {return rent;}

    void setElectric(double e) {electric = e;}
    double getElectric()const {return electric;}

    void setWater(double w) {water = w;}
    double getWater()const {return water;}

    void setSavings(double s) {savings = s;}
    double getSavings()const {return savings;}

    void setEntertainment(double ent) {entertainment = ent;}
    double getEntertainment()const {return entertainment;}

    void setClothes(double c) {clothes = c;}
    double getClothes()const {return clothes;}

    void setShoes(double sh) {shoes = sh;}
    double getShoes()const {return shoes;}

    void setVending(double v) {vending = v;}
    double getVending()const {return vending;}

    void setCreditCard(double cc) {creditCard = cc;}
    double getCreditCard()const {return creditCard;}

    void setCarPMT(double cPMT) {carPMT = cPMT;}
    double getCarPMT()const {return carPMT;}

    void setCarInsurance(double ci) {carInsurance = ci;}
    double getCarInsurance()const {return carInsurance;}

    void setCarMaintenance(double cm) {carMaintenance = cm;}
    double getCarMaintenance()const {return carMaintenance;}

    void setGas(double g) {gas = g;}
    double getGas()const {return gas;}

    void setFood(double f) {food = f;}
    double getFood()const {return food;}

    void setDining(double d) {dining = d;}
    double getDining()const {return dining;}

    void setCleaning(double cl) {cleaning = cl;}
    double getCleaning()const {return cleaning;}

    void setPersonal(double p) {personal = p;}
    double getPersonal()const {return personal;}

    void setCharity(double ch) {charity = ch;}
    double getCharity()const {return charity;}

    void setPetCare(double pc) {petCare = pc;}
    double getPetCare()const {return petCare;}

    void setCellPhone(double cp) {cellPhone = cp;}
    double getCellPhone()const {return cellPhone;}

    void setInternet(double i) {internet = i;}
    double getInternet()const {return internet;}

    void setStreaming(double st) {streaming = st;}
    double getStreaming()const {return streaming;}

    void setAmazon(double a) {amazon = a;}
    double getAmazon()const {return amazon;}

    void setTotal(double t) {total = t;}
    double getTotal()const {return total;}

    void setWhatsleft(double wl) {whatsleft = wl;}
    double getWhatsleft()const {return whatsleft;}

    void showCost()
    {
      cout << "\nTotal Expenses: \n" << "\nRent: " << "$" << rent << "\nElectric: " << "$" << getElectric() << "\nWater: " << "$" << getWater() << "\nSavings: " << "$" << getSavings() << "\nEntertainment :" << "$" << getEntertainment() << "\nClothes: " << "$" << getClothes() << "\nShoes: " << "$" << getShoes() << "\nVending: " << "$" << getVending() << "\nCredit Card Payments: " << "$" << getCreditCard() << "\nCar Payment: " << "$" << getCarPMT() << "\nCar Maintenance: " << "$" << getCarMaintenance() << "\nGas: " << "$" << getGas() << "\nGroceries: " << "$" << getFood() << "\nDining Out: " << "$" << getDining() << "\nHouse Cleaning Supplies: " << "$" << getCleaning() << "\nPersonal Care: " << "$" << getPersonal() << "\nCharity: " << "$" << getCharity() << "\nPet Care: " << "$" << getPetCare() << "\nCell Phone: " << "$" << getCellPhone() << "\nInternet: " << "$" << getInternet() << "\nStreaming Services: " << "$" << getStreaming() << "\nAmazon: " << getAmazon() << "\n\nTotal: " << "$" << getTotal() << "\nWhats left:" << "$" << getWhatsleft() << endl;
    }
};
/*======================================================*/
class Resident1 : public Cost
{
  private: // For Resident 1
    double rent1, electric1, water1, savings1, entertainment1, clothes1, shoes1, vending1, creditCard1, carPMT1, carInsurance1, carMaintenance1, gas1, food1, dining1, cleaning1, personal1, charity1, petCare1, cellPhone1, internet1, streaming1, amazon1, total1, whatsleft1; 
  public:
  Resident1(double r, double e, double w, double s, double ent, double c, double sh, double v, double cc, double cPMT, double ci, double cm, double g, double f, double d, double cl, double pe, double ch, double pc, double cp, double i, double st, double a, double t, double wl) : Cost(r,e,w,s,ent,c,sh,v,cc,cPMT,ci,cm,g,f,d,cl,pe,ch,pc,cp,i,st,a,t,wl){};
  // Calculations
  /*==========================================================================*/
  double calculateRent()
  {
    return ((rent / 100) * 60); // = $540
  }
  double calculateElectric()
  {
    return ((electric / 100) * 60); // = $60
  }
  double calculateWater()
  {
    return ((water / 100) * 60); // = $33
  }
  double calculateSavings()
  {
    return ((savings / 100) * 60); // = $300
  }
  double calculateEntertainment()
  {
    return ((entertainment / 100) * 60); // = $30
  }
  double calculateClothes()
  {
    return ((clothes / 100) * 60); // = $50
  }
  double calculateShoes()
  {
    return ((shoes / 100) * 60); // = $12.50
  }
  double calculateVending()
  {
    return ((vending / 100) * 60); // = $10.80
  }
  double calculateCreditCard()
  {
    return ((creditCard / 100) * 60);
  }
  double calculateCarPMT()
  {
    return ((carPMT / 100) * 60);
  }
  double calculateCarInsurance()
  {
    return ((carInsurance / 100) * 60);
  }
  double calculateCarMaintenance()
  {
    return ((carMaintenance / 100) * 60);
  }
  double calculateGas()
  {
    return ((gas / 100) * 60);
  }
  double calculateFood()
  {
    return ((food / 100) * 60);
  }
  double calculateDining()
  {
    return ((dining / 100) * 60);
  }
  double calculateCleaning()
  {
    return ((cleaning / 100) * 60);
  }
  double calculatePersonal()
  {
    return ((personal / 100) * 60);
  }
  double calculateCharity()
  {
    return ((charity / 100) * 60);
  }
  double calculatePetCare()
  {
    return ((petCare / 100) * 60);
  }
  double calculateCellPhone()
  {
    return ((cellPhone / 100) * 60);
  }
  double calculateInternet()
  {
    return ((internet / 100) * 60);
  }
  double calculateStreaming()
  {
    return ((streaming / 100) * 60);
  }
  double calculateAmazon()
  {
    return ((amazon / 100) * 60);
  }
  double calculateTotal()
  {
    return (calculateRent() + calculateElectric() + calculateWater() + calculateSavings() + calculateEntertainment() + calculateClothes() + calculateShoes() + calculateVending() + calculateCreditCard() + calculateCarPMT() + calculateCarInsurance() + calculateCarMaintenance() + calculateGas() + calculateFood() + calculateDining() + calculateCleaning() + calculatePersonal() + calculateCharity() + calculatePetCare() + calculateCellPhone() + calculateInternet() + calculateStreaming() + calculateAmazon());
  }
  double calculateWhatsLeft()
  {
    return (7498.33 - calculateTotal());
  }
  void showResident1() // Expenses for Resident 1
  {
    cout << "\n\nCost for the first Resident:\n" << "\nRent: "  << "$" << calculateRent() << "\nElectric: " << "$" << calculateElectric() << "\nWater: "<< "$" << calculateWater() << "\nSavings: " << "$" << calculateSavings() << "\nEntertainment: " << "$" << calculateEntertainment() << "\nClothes: " << "$" << calculateClothes() << "\nShoes: " << "$" << calculateShoes() << "\nVending: " << "$" << calculateVending() << "\nCredit Card Payments: " << "$" << calculateCreditCard() << "\nCar Payment: " << "$" << calculateCarPMT() << "\nCar Insurance: " << "$" << calculateCarInsurance() << "\nCar Maintenance: " << "$" << calculateCarMaintenance() << "\nGas: " << "$" << calculateGas() << "\nGroceries: " << "$" << calculateFood() << "\nDining Out: " << "$" << calculateDining() << "\nHouse Cleaning: " << "$" << calculateCleaning() << "\nPersonal Care: " << "$" << calculatePersonal() << "\nCharity: " << "$" << calculateCharity() << "\nPet Care: " << "$" << calculatePetCare() << "\nCell Phone: " << "$" << calculateCellPhone() << "\nInternet: " << "$" << calculateInternet() << "\nStreaming Services: " << "$" << calculateStreaming() << "\nAmazon: " << "$" << calculateAmazon() << "\n\nTotal: " << "$" << calculateTotal() << endl;
  }
};
/*==================================================================*/
class Resident2 : public Cost
{
  private: // For Resident 2
    double rent2, electric2, water2, savings2, entertainment2, clothes2, shoes2, vending2, creditCard2, carPMT2, carInsurance2, carMaintenance2, gas2, food2, dining2, cleaning2, personal2, charity2, petCare2, cellPhone2, internet2, streaming2, amazon2, total2, whatsleft2;
  public:
  Resident2(double r, double e, double w, double s, double ent, double c, double sh, double v, double cc, double cPMT, double ci, double cm, double g, double f, double d, double cl, double pe, double ch, double pc, double cp, double i, double st, double a, double t, double wl) : Cost(r,e,w,s,ent,c,sh,v,cc,cPMT,ci,cm,g,f,d,cl,pe,ch,pc,cp,i,st,a,t,wl){};
  // Calculations
  /*==========================================================================*/
  double calculateRent()
  {
    return ((rent / 100) * 40); 
  }
  double calculateElectric()
  {
    return ((electric / 100) * 40);
  }
  double calculateWater()
  {
    return ((water / 100) * 40);
  }
  double calculateSavings()
  {
    return ((savings / 100) * 40);
  }
  double calculateEntertainment()
  {
    return ((entertainment / 100) * 40);
  }
  double calculateClothes()
  {
    return ((clothes / 100) * 40);
  }
  double calculateShoes()
  {
    return ((shoes / 100) * 40);
  }
  double calculateVending()
  {
    return ((vending / 100) * 40);
  }
  double calculateCreditCard()
  {
    return ((creditCard / 100) * 40);
  }
  double calculateCarPMT()
  {
    return ((carPMT / 100) * 40);
  }
  double calculateCarInsurance()
  {
    return ((carInsurance / 100) * 40);
  }
  double calculateCarMaintenance()
  {
    return ((carMaintenance / 100) * 40);
  }
  double calculateGas()
  {
    return ((gas / 100) * 40);
  }
  double calculateFood()
  {
    return ((food / 100) * 40);
  }
  double calculateDining()
  {
    return ((dining / 100) * 40);
  }
  double calculateCleaning()
  {
    return ((cleaning / 100) * 40);
  }
  double calculatePersonal()
  {
    return ((personal / 100) * 40);
  }
  double calculateCharity()
  {
    return ((charity / 100) * 40);
  }
  double calculatePetCare()
  {
    return ((petCare / 100) * 40);
  }
  double calculateCellPhone()
  {
    return ((cellPhone / 100) * 40);
  }
  double calculateInternet()
  {
    return ((internet / 100) * 40);
  }
  double calculateStreaming()
  {
    return ((streaming / 100) * 40);
  }
  double calculateAmazon()
  {
    return ((amazon / 100) * 40);
  }
  double calculateTotal()
  {
    return (calculateRent() + calculateElectric() + calculateWater() + calculateSavings() + calculateEntertainment() + calculateClothes() + calculateShoes() + calculateVending() + calculateCreditCard() + calculateCarPMT() + calculateCarInsurance() + calculateCarMaintenance() + calculateGas() + calculateFood() + calculateDining() + calculateCleaning() + calculatePersonal() + calculateCharity() + calculatePetCare() + calculateCellPhone() + calculateInternet() + calculateStreaming() + calculateAmazon());
  }
  void showResident2() // Expenses for Resident 2
  {
    cout << "\n\nCost for the second Resident:\n" << "\nRent: " << "$" << calculateRent() << "\nElectric: " << "$" << calculateElectric() << "\nWater: " << "$" << calculateWater() << "\nSavings: " << "$" << calculateSavings() << "\nEntertainment: " << "$" << calculateEntertainment() << "\nClothes: " << "$" << calculateClothes() << "\nShoes: " << "$" << calculateShoes() << "\nVending: " << "$" << calculateVending() << "\nCredit Card Payments: " << "$" << calculateCreditCard() << "\nCar Payment: " << "$" << calculateCarPMT() << "\nCar Insurance: " << "$" << calculateCarInsurance() << "\nCar Maintenance: " << "$" << calculateCarMaintenance() << "\nGas: " << "$" << calculateGas() << "\nGroceries: " << "$" << calculateFood() << "\nDining Out: " << "$" << calculateDining() << "\nHouse Cleaning: " << "$" << calculateCleaning() << "\nPersonal Care: " << "$" << calculatePersonal() << "\nCharity: " << "$" << calculateCharity() << "\nPet Care: " << "$" << calculatePetCare() << "\nCell Phone: " << "$" << calculateCellPhone() << "\nInternet: " << "$" << calculateInternet() << "\nStreaming Services: " << "$" << calculateStreaming() << "\nAmazon: " << "$" << calculateAmazon() << "\n\nTotal: " << "$" << calculateTotal() << endl;
  }
};
int main() 
{
  Income I(6250.00,500.00,650.00,83.33,7498.33);
  I.showIncome();

  Cost C(900,100,55,500,50,83.33,12.5,18,200,315,88,25,90,100,105,12,50,100,100,100,90,35,90,3218.83,4273.5);
  C.showCost();

  Resident1 R1(900,100,55,500,50,83.33,12.5,18,200,315,88,25,90,100,105,12,50,100,100,100,90,35,90,3218.83,4273.5);
  R1.showResident1();

  Resident2 R2(900,100,55,500,50,83.33,12.5,18,200,315,88,25,90,100,105,12,50,100,100,100,90,35,90,3218.83,4279.5);
  R2.showResident2();

  double newRent, newElectric, newWater, newSavings, newEntertainment, newClothes, newShoes, newVending, newCreditCard, newCarPMT, newCarInsurance, newCarMaintenance, newGas, newFood, newDining, newCleaning, newPersonal, newCharity, newPetCare, newCellPhone, newInternet, newStreaming, newAmazon;

  cout << "\nWhat is the cost for Rent?"  << endl << "$";
  newRent = validateDouble(newRent);
  C.setRent(newRent);
  R1.setRent(newRent);
  R2.setRent(newRent);

  cout << "\nWhat is the cost for Electricity?" << endl << "$";
  newElectric = validateDouble(newElectric);
  C.setElectric(newElectric);
  R1.setElectric(newElectric);
  R2.setElectric(newElectric);

  cout << "\nWhat is the cost for Water?" << endl << "$";
  newWater = validateDouble(newWater);
  C.setWater(newWater);
  R1.setWater(newWater);
  R2.setWater(newWater);

  cout << "\nHow much are you putting into savings?" << endl << "$";
  newSavings = validateDouble(newSavings);
  C.setSavings(newSavings);
  R1.setSavings(newSavings);
  R2.setSavings(newSavings);

  cout << "\nHow much are you spending on Entertainment?" << endl << "$";
  newEntertainment = validateDouble(newEntertainment);
  C.setEntertainment(newEntertainment);
  R1.setEntertainment(newEntertainment);
  R2.setEntertainment(newEntertainment);

  cout << "\nHow much are you spending on clothes?" << endl << "$";
  newClothes = validateDouble(newClothes);
  C.setClothes(newClothes);
  R1.setClothes(newClothes);
  R2.setClothes(newClothes);
  
  cout << "\nHow much are you spending on shoes?" << endl << "$";
  newShoes = validateDouble(newShoes);
  C.setShoes(newShoes);
  R1.setShoes(newShoes);
  R2.setShoes(newShoes);

  cout << "\nHow much are you spending on vending?" << endl << "$";
  newVending = validateDouble(newVending);
  C.setVending(newVending);
  R1.setVending(newVending);
  R2.setVending(newVending);

  cout << "\nHow much are you spending on your credit card payments?" << endl << "$";
  newCreditCard = validateDouble(newCreditCard);
  C.setCreditCard(newCreditCard);
  R1.setCreditCard(newCreditCard);
  R2.setCreditCard(newCreditCard);

  cout << "\nHow much are you spending on you car payments?" << endl << "$";
  newCarPMT = validateDouble(newCarPMT);
  C.setCarPMT(newCarPMT);
  R1.setCarPMT(newCarPMT);
  R2.setCarPMT(newCarPMT);

  cout << "\nHow much are you spending on car maintenance?" << endl << "$";
  newCarMaintenance = validateDouble(newCarMaintenance);
  C.setCarMaintenance(newCarMaintenance);
  R1.setCarMaintenance(newCarMaintenance);
  R2.setCarMaintenance(newCarMaintenance);

  cout << "\nHow much are you spending on gas?" << endl << "$";
  newGas = validateDouble(newGas);
  C.setGas(newGas);
  R1.setGas(newGas);
  R2.setGas(newGas);

  cout << "\nHow much are you spending on groceries?" << endl << "$";
  newFood = validateDouble(newFood);
  C.setFood(newFood);
  R1.setFood(newFood);
  R2.setFood(newFood);

  cout << "\nHow much are you spending on dining out?" << endl << "$";
  newDining = validateDouble(newDining);
  C.setDining(newDining);
  R1.setDining(newDining);
  R2.setDining(newDining);

  cout << "\nHow much are you spending on cleaning supplies?" << endl << "$";
  newCleaning = validateDouble(newCleaning);
  C.setCleaning(newCleaning);
  R1.setCleaning(newCleaning);
  R2.setCleaning(newCleaning);

  cout << "\nHow much are you spending on personal care?" << endl << "$";
  newPersonal = validateDouble(newPersonal);
  C.setPersonal(newPersonal);
  R1.setPersonal(newPersonal);
  R2.setPersonal(newPersonal);

  cout << "\nHow much are you donating to charity?" << endl << "$";
  newCharity = validateDouble(newCharity);
  C.setCharity(newCharity);
  R1.setCharity(newCharity);
  R2.setCharity(newCharity);

  cout << "\nHow much are you spending on pet care?" << endl << "$";
  newPetCare = validateDouble(newPetCare);
  C.setPetCare(newPetCare);
  R1.setPetCare(newPetCare);
  R2.setPetCare(newPetCare);

  cout << "\nHow much are you spending on you cell phone bill?" << endl << "$";
  newCellPhone = validateDouble(newCellPhone);
  C.setCellPhone(newCellPhone);
  R1.setCellPhone(newCellPhone);
  R2.setCellPhone(newCellPhone);

  cout << "\nHow much are you spending on internet?" << endl << "$";
  newInternet = validateDouble(newInternet);
  C.setInternet(newInternet);
  R1.setInternet(newInternet);
  R2.setInternet(newInternet);

  cout << "\nHow much are you spending on amazon?" << endl << "$";
  newAmazon = validateDouble(newAmazon);
  C.setAmazon(newAmazon);
  R1.setAmazon(newAmazon);
  R2.setAmazon(newAmazon);

  double calculateNewTotal = (newRent + newElectric + newWater + newSavings + newEntertainment + newClothes + newShoes + newVending + newCreditCard + newCarPMT + newCarInsurance + newCarMaintenance + newGas + newFood + newDining + newCleaning + newPersonal + newCharity + newPetCare + newCellPhone + newInternet + newStreaming + newAmazon);

  cout << "\nYour new total is: " << endl << "$" << calculateNewTotal;
  
  C.showCost();
  R1.showResident1();
  R2.showResident2();

  return 0;
}