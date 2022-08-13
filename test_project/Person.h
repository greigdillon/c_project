#ifndef PERSON_H
#define PERSON_H
#pragma once

#include <string>
#include <iostream>

namespace Person {

    class Data{
        public:
          Data(std::string name);
          std::string name;                                        
    };

    class Mapper{
        public:
          void print(Data &data);
    };

}

#endif