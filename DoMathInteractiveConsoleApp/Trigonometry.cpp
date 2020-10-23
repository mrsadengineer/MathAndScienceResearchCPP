


#include <cmath>
#include <iostream>

#define PI 3.14159265
void solveForAngleThetaOfARightTriangle();
int main() {

	std::cout << "test from trig cpp" << std::endl;

	//double param, result;
	//param = 60.0;
	//result = cos(param * PI / 180.0);
	//printf("The cosine of %f degrees is %f.\n", param, result);
	//return 0;


	solveForAngleThetaOfARightTriangle();

}


void solveForAngleThetaOfARightTriangle() {


	double param, result;
	param = 0.6;
	result = asin(param) * 180.0 / PI;
	printf("The arc sine of %f is %f degrees.\n", param, result);


	double param2, result2;
	param2 = 0.8;
	result2 = acos(param2) * 180.0 / PI;

	std::cout << asin(param2) << std::endl;
	printf("The arc cosine of %f is %f degrees.\n", param2, result2);
	//return 0;

};
