#include "vehicle.h"
Vehicle::Vehicle()
{
}
Vehicle::Vehicle(const std::string& manufacturer,
                 const std::string& model,
                 uint32_t price,
                 uint32_t weight,
                 uint32_t year) : _manufacturer(manufacturer), _model(model), _price(price), _weight(weight), _year(year)
{
}
void Vehicle::setYear(uint32_t year)
{
    _year = year;
}
void Vehicle::setModel(const std::string &model)
{
    _model = model;
}
void Vehicle::setPrice(uint32_t price)
{
    _price = price;
}
void Vehicle::setWeight(uint32_t weight)
{
    _weight = weight;
}
void Vehicle::setManufacturer(const std::string &manufacturer)
{
    _manufacturer = manufacturer;
}


uint32_t Vehicle::getYear() const
{
    return _year;
}
std::string& Vehicle::getModel() const
{
    std::string* s = new std::string(_model);
    return *s;
}
uint32_t Vehicle::getPrice() const
{
    return _price;
}
uint32_t Vehicle::getWeight() const
{
    return _weight;
}
std::string& Vehicle::getManufacturer() const
{
    std::string* s = new std::string(_manufacturer);
    return *s;
}

std::ostream& operator<<(std::ostream& out, const Vehicle& v)
{
    out << v._manufacturer << ' ' << v._model << ' ' << v._weight << ' ' << v._year << ' ' << v._price;
    return out;
}
std::istream& operator>>(std::istream& in, Vehicle& v)
{
    in >> v._manufacturer >>  v._model >> v._weight >> v._year >> v._price;
    return in;
}

Vehicle::~Vehicle()
{
}
