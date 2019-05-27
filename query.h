#pragma once

#include <iostream>
#include <istream>
#include <string>
#include <cassert>
#include <vector>
#include <map>


#include "responses.h"
#include "bus_manager.h"



/*
 * query.h
 *
 *  Created on: 6.10.2018
 *      Author: Halja
 */

enum class QueryType {
  NewBus,
  BusesForStop,
  StopsForBus,
  AllBuses
};


struct Query {
  QueryType type;
  string bus;
  string stop;
  vector<string> stops;
};


istream& operator >> (istream& is, Query& q);

