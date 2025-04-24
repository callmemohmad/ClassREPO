#include <iostream>
using namespace std;
class Car {
    protected:
                bool TurnSwitch;
                bool ElectricySystem;
                bool IsBrakeOk;
                bool EnoughFeul;
                bool SecurityStatus;
                bool Temperture;
                bool Ok;
                bool PressGassPedal;
                virtual bool Start(TurnSwitch){
                    if (ElectricySystem && IsBrakeOk && EnoughFeul && SecurityStatus && Temperture)
                         return Car Started;
                }
                bool GearBoxNotNeutral;
                bool Move;
                virtual bool Move(PressGassPedal){
                    if (GearBoxNotNeutral && PressGassPedal)
                            return Move; 
                            
                }
}
class Prid : Car {
    protected:
    bool DoWeArriveAlive; //Usually not
        void Start() override {
        if (Car::Start() && DoWeArriveAlive)    
            return Just God can save you
            
        }
        bool StillAlive;
        bool Move(PressGassPedal) override{
            if ( Car::Start && StillAlive)
                return Move;
        }
         
}                

class Toyota : Car{
    protected:
        bool PressBrake;
        bool EssentialElectricy;
        bool FeulQuality;
        bool BiometricalSecurity;
        bool GearInPark;
        void Start() override {
        if (Car::Start() && PressBrake && EssentialElectricy && FeulQuality && BiometricalSecurity && GearInPark)
            return Car Started;
        }
        bool TurboEnabled;
        bool WheelPressure;
        bool EngineTemperature;
        bool Move(PressGassPedal) override{
            if ( Car::Start && TurboEnabled && WheelPressure && EngineTemperature )
                return Move;
        }    
        
}            

int main()
{
    C.Car;
    C.Start();
    C.Move();
    
    P.Prid;
    P.Start();
    P.Move();
    
    B.Benz;
    B.Start();
    B.Move();
}
