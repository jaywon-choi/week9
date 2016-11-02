#pragma once
#include<ostream>
#include<vector>

class VectorND
{
public:
	int n;
	std::vector<int> elements;
	
	VectorND()
	{
		std::vector<int> temp(n, 0);
		this->elements = temp;
	}

	VectorND(std::vector<int> input)
	{
		this->n = input.size();
		this->elements = input;
	}

	VectorND operator+(const VectorND& input)
	{
		std::vector<int> vec;
		
		for (int i = 0; i < this->n; i++)
		{
			vec.push_back(this->elements.at(i) + input.elements.at(i));
		}
		
		VectorND result;
		result.n = vec.size();
		result.elements = vec;
		
		return result;
	}

	int operator*(const VectorND& input)
	{
		int dot_product = 0;
		
		for (int i = 0; i < this->n; i++)
		{
			dot_product += this->elements.at(i)*input.elements.at(i);
		}
		
		return dot_product;
	}

};

std::ostream& operator<<(std::ostream& os, const VectorND& input)
{
	for (int i = 0; i < input.n; i++)
	{
		os << input.elements.at(i) << " ";
	}
	os << std::endl;

	return os;
}