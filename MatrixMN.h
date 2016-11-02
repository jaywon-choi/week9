#pragma once
#include "VectorND.h"

class MatrixMN
{
public:
	int num_row, num_col;
	std::vector<VectorND> matrix_elements;

	MatrixMN(std::vector<VectorND> input)
	{
		this->num_row = input.size();
		this->num_col = input.at(0).n;
		this->matrix_elements = input;
	}

	VectorND operator*(const VectorND& rhs)
	{
		std::vector<int> vec;
		for (int i = 0; i < this->num_row; i++)
		{
			vec.push_back(this->matrix_elements.at(i)*rhs);
		}
		
		VectorND dot_product;
		dot_product.n = vec.size();
		dot_product.elements = vec;
		return dot_product;
	}
};

std::ostream& operator<<(std::ostream& os, const MatrixMN& input)
{
	for (int i = 0; i < input.num_row; i++)
	{
		os << input.matrix_elements.at(i) << std::endl;
	}
	os << std::endl;
	return os;
}