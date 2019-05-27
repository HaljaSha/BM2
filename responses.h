#pragma once

#include <iostream>
#include <string>
#include <cassert>
#include <vector>
#include <map>
using namespace std;

/*
struct BusesForStopResponse;
struct StopsForBusResponse;
struct AllBusesResponse;
*/

struct BusesForStopResponse {
  vector<string> buses;
};

struct StopsForBusResponse {
  string bus;
  vector<pair<string, vector<string>>> stops_for_buses;
};

struct AllBusesResponse {
  map<string, vector<string>> buses_to_stops;
};

ostream& operator << (ostream& os, const BusesForStopResponse& r);

ostream& operator << (ostream& os, const StopsForBusResponse& r);

ostream& operator << (ostream& os, const AllBusesResponse& r);
