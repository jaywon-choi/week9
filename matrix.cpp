#include<iostream>
#include"VectorND.h"
#include"MatrixMN.h"

int main()
{
	std::vector<int> temp1(5, 1);
	std::vector<int> temp2(5, 2);
	std::vector<int> temp3(5, 3);

	VectorND vec1(temp1);
	VectorND vec2(temp2);
	VectorND vec3(temp3);

	std::vector<VectorND> vec4;
	vec4.push_back(vec1);
	vec4.push_back(vec2);
	vec4.push_back(vec3);

	MatrixMN m(vec4);
	VectorND vec5;
	vec5 = m*vec2;
	std::cout << "Vector u" << std::endl;
	std::cout << vec2;

	std::cout << "Matrix M x N" << std::endl;
	std::cout << m;

	std::cout << "Result : " << std::endl;
	std::cout << vec5;
	return 0;
}