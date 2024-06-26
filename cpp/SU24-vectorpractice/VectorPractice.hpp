#include <vector>
#include <string>
#include <algorithm>
#pragma once
class Passenger
{
private:
  int seatNumber;
  std::string name;
  char rowLetter;

public:
  Passenger(int num = 0)
  {
    seatNumber = num;
  }
  void setSeatNum(int number)
  {
    seatNumber = number;
  }

  int getSeatNum()
  {
    return seatNumber;
  }
};

class Plane
{
private:
  std::vector<Passenger> myPlane;

public:
  void addPassenger(Passenger p)
  {
    myPlane.push_back(p);
  }

  const std::vector<Passenger>::iterator findPassengerIndex(const Passenger p)
  {
    auto pIndex = std::find(myPlane.begin(), myPlane.end(),p);
    if (pIndex != myPlane.end())
    {
      return pIndex; //returns contents of pointer
    }
  }

  const bool isinPlane(const Passenger p)
  {
    if (findPassengerIndex(p) != myPlane.end())
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};
