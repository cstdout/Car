#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <cstdint>
#include <iostream>
class Vehicle
{
protected:
    std::string _manufacturer;
    std::string _model;
    uint32_t _price;
    uint32_t _weight;
    uint32_t _year;
public:
    Vehicle();
    Vehicle(const std::string&,
            const std::string&,
            uint32_t=0,
            uint32_t=0,
            uint32_t=0);
    ~Vehicle();
    void setManufacturer(const std::string& manufacturer);
    void setModel(const std::string& model);
    void setPrice(uint32_t price);
    void setWeight(uint32_t weight);
    void setYear(uint32_t year);

    std::string& getManufacturer() const;
    std::string& getModel() const;
    uint32_t getPrice() const;
    uint32_t getWeight() const;
    uint32_t getYear() const;

    friend std::ostream& operator<<(std::ostream& out, const Vehicle& v);
    friend std::istream& operator>>(std::istream& in, Vehicle& v);

};

#endif // VEHICLE_H
