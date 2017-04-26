#include "Map.h"

void Map::put(string key, int value)
{
  mapa[key]=value;
}

int Map::get(string key)
{
  return mapa[key];
}
