#ifndef FRIDGE_H
#define FRIDGE_H

#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>
#include <algorithm>
#include "json.hpp"
#include "Storage.h"
#include "Ingredient.h"

class Fridge : public Storage {
public:
    void addIngredient(const Ingredient& ingredient) override;

    void expiringSoon() const;
};

#endif
