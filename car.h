#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class Car : public Vehicle
{
private:
    uint32_t _seats;
    uint32_t _enginePower;
public:
    Car(uint32_t seats,
        uint32_t enginePower,
        const std::string& manufacturer,
        const std::string& model,
        uint32_t price,
        uint32_t weight,
        uint32_t year);

    void setSeats(uint32_t seats);
    void setEnginePower(uint32_t power);

    uint32_t getSeats() const;
    uint32_t getEnginePower() const;

    friend std::ostream& operator<<(std::ostream& out, const Car& v);
    friend std::istream& operator>>(std::istream& in, Car& v);
};

#endif // CAR_H
