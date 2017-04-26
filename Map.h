#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Map
{
  map<string,int>mapa;
  public:
    void put(string key, int value);
    int get(string key);
};


#endif // MAP_H
