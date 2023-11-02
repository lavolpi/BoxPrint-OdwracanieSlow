#include <iostream>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <algorithm>
#include <vector>

auto BoxPrint(std::vector<std::string>, char s = '*') -> void;

auto main() -> int {

    auto vec = std::vector<std::string>{"Slowo", "Jakies", "Tam", "I", "Jeszcze", "Jedno", "aaaaaaaaaaaaaaaaa"};

    BoxPrint(vec, '<');
    return 0;
}



auto BoxPrint(std::vector<std::string> tablica, char s) -> void{

    auto length = tablica[0].size();
    for (std::string string : tablica){
        if (string.length() > length){
            length = string.length();
        }
    }


    for (int i = 0; i < length+2; i++){
        fmt::print("{}", s);
    }

    fmt::println("");

    for(int i = 0; i < tablica.size(); i++){
        fmt::print("{}", s);
        auto spacje = length - tablica[i].size();
        fmt::print("{}", tablica[i]);

        for (int j = 0; j <spacje; j++){
            fmt::print(" ");
        }
        fmt::print("{}", s);
        fmt::println("");
    }




    for (int i = 0; i < length+2; i++){
        fmt::print("{}", s);
    }
}
