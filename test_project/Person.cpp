#include "Person.h"

Person::Data::Data(std::string name) : name(name){

}

void Person::Mapper::print(Data &data) {
  std::cout << data.name << "\n";
}
