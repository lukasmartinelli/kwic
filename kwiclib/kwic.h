#ifndef KWIC_H_
#define KWIC_H_

#include "word.h"
#include <set>
#include <vector>

void rotateLines(std::istream &is, std::ostream &os);
std::set<std::vector<Word>> rotateWords(std::vector<Word> words);

#endif
