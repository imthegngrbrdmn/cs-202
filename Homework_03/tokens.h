#ifndef TOKENS_H
#define TOKENS_H

#include <vector>
#include <string>
#include <utility>

bool LineToTokens(const std::string& line, std::vector<std::string>& tokens);
bool ReadLine(std::istream& is, std::vector<std::string>& tokens, std::vector<std::pair<int, int>>& linecols);
void PrintTokens(std::ostream& os, const std::vector<std::string>& tokens, const std::vector<std::pair<int, int>>& linecols);

#endif
