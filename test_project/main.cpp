#include<iostream>
#include "Person.h"
#include "absl/strings/string_view.h"
#include "absl/memory/memory.h"

int main(){
  Person::Data data("Greg");

  // Person::Mapper mapper;
  // mapper.print(data);

  absl::string_view view(data.name);
  auto num = absl::make_unique<int>(89);

  std::cout << *num;
}