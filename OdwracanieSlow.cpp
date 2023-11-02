#include <iostream>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <algorithm>
#include <vector>

auto reversedWords(std::string &string) -> std::string;

auto main() -> int{
    auto sentence = std::string("Tutaj jest przykladowe zdanie");
    fmt::print("{}", reversedWords(sentence));
}

auto reversedWords(std::string &string) -> std::string{
    auto temp = std::string("");
    auto word = std::string("");


    for(int i = string.size()-1; i >= 0; i--){
        if(string[i] != ' ' && string[i] != '\t' && string[i] != '\n'){
            temp += string[i];
        } else {
        std::ranges::reverse(temp);
        temp += string[i];
        word += temp;
        temp.erase();
        }
    }

    std::ranges::reverse(temp);
    word += temp;

    return word;
}
