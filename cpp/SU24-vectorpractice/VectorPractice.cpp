
#include "VectorPractice.hpp"

int createSteve()
{
  Passenger Steve;
  Steve.setSeatNum(30);
  int steveNum = Steve.getSeatNum();
  return steveNum;
}

int createDarryl()
{
  Passenger Darryl(10);
  int dNum = Darryl.getSeatNum();
  return dNum;
}

