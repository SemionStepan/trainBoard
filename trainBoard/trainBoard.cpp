#include "trainBoard.h"

void Train::out()
{
    std::cout << "[" << _destinationName << "] {" << _trainNumber << "} " << _departureHour << ':' << _departureMinute << endl;
}

int Train::getTrainNumber()
{
    return _trainNumber;
}

int Train::getDepartureHour()
{
    return _departureHour;
}

int Train::getDepartureMinute()
{
    return _departureMinute;
}

void Trains::out()
{
    for(auto train : _trains)
    {
        train.out();
    }
}

void Trains::sortTrains()
{
    sort(_trains.begin(), _trains.end(),
        [](Train &a, Train &b)
        {
            if(b.getTrainNumber() == a.getTrainNumber())
            {
                if(b.getDepartureMinute() > a.getDepartureMinute())
                {
                    return b.getDepartureMinute() > a.getDepartureMinute();
                }
                return b.getDepartureHour() > a.getDepartureHour();
            }
            return b.getTrainNumber() > a.getTrainNumber();
         }
         );
}

void Trains::selectedOut()
{
/*    switch () Здесь свитч, который выбирает ввод с клавиатуры, cin
    {
        case 1: первый поезд
            _trains. первыйПоезд.Вывод
            break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        default:
            std::cout << "Вы выбрали неверный номер" << endl;
            break;
}
*/    }
