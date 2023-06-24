#include "trainBoard.h"

int main()
{

vector <Train> vec
{
    Train("Volgograd", 1, 12, 10),
    Train("Moskva", 3, 13, 15),
    Train("St Petersburg", 2, 14, 30),
    Train("Vladivostok", 4, 15, 48),
    Train("Volgograd", 5, 18, 59)
};

Trains trains(vec);
Trains sortTrains();
trains.out();
    return 0;
}
