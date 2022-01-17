#include "Animal.hpp"

Animal::~Animal() {}

Cockroach::Cockroach() {
	legs = 6;
	species = "Cockroach";
}
int Cockroach::getLegs() {
	return legs;
}
string Cockroach::getSpecies() {
	return species;
}
Cockroach::~Cockroach() {
	legs = 0;
	species = "";
}

Eagle::Eagle() {
	legs = 2;
	species = "Eagle";
}
int Eagle::getLegs() {
	return legs;
}
string Eagle::getSpecies() {
	return species;
}
Eagle::~Eagle() {
	legs = 0;
	species = "";
}

Tarantula::Tarantula() {
	legs = 8;
	species = "Tarantula";
}
int Tarantula::getLegs() {
	return legs;
}
string Tarantula::getSpecies() {
	return species;
}
Tarantula::~Tarantula() {
	legs = 0;
	species = "";
}

