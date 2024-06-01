#include <iostream>
#include <string>

struct adress {
    std::string city;
    std::string street;
    int numHome;
    int numRoom;
    int postCode;
};

void conclusion(adress& x) {
    std::cout << "Город: " << x.city << std::endl;
    std::cout << "Улица: " << x.street << std::endl;
    std::cout << "Номер дома: " << x.numHome << std::endl;
    std::cout << "Номер квартиры: " << x.numRoom << std::endl;
    std::cout << "Индекс: " << x.postCode << std::endl;
    std::cout << std::endl;
}



int main() {
    setlocale(LC_ALL, "Russian");

    adress town1 = { "Москва", "Арбат", 12, 8, 123456 };
    adress town2 = { "Ижевск", "Пушкина", 59, 143, 953769 };
    
    conclusion(town1);
    conclusion(town2);
    
    return 0;
}