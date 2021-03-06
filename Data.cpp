#include "Data.h"
#include <vector>
#include <stdlib.h>
#include <math.h>


using namespace std;

#define PI 3.14159

Data::Data(double radius, int n_cities) : radius_(radius), n_cities_(n_cities) {
	vector<vector<double> > tab_cities;
	for (int i=0; i<n_cities; i++) {
		double theta = ((double) rand() / (RAND_MAX)) * 2 * PI;
		double x = radius * cos(theta);
		double y = radius * sin(theta);
		double tmp[] = {x, y};
		vector<double> line(tmp, tmp+2);
		tab_cities.push_back(line);
	}
	tab_cities_ = tab_cities;
}

double Data::getRadius() const {
	return radius_; 
}

int Data::getNcities() const {
	return n_cities_;
}

vector<vector<double> > Data::getTabCities() const {
	return tab_cities_;
}
