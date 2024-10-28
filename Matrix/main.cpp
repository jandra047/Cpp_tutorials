#include <vector>
#include <iostream>

class Matrix
{
public:
	Matrix(int N_rows, int N_columns)
	{
		_rows = N_rows;
		_cols = N_columns;

		for (int i = 0; i < _rows; i++)
		{
			std::vector<double> vector;
			
			for (int j = 0; j < _cols; j++)
			{
				vector.push_back(0);
			}
			
			data.push_back(vector);
		}
	};
	
	void print()
	{
		for (int i = 0; i < _rows; i++)
		{
			for (int j = 0; j < _cols; j++)
			{
				std::cout << data[i][j] << " ";
			}
			std::cout << "\n";
			
		}
	}

	// members
	std::vector< std::vector<double> > data;
	int _rows;
	int _cols;
	
};

// Defining the "<<" operator to be able to do std::cout << mtx
std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {

	for (int i = 0; i < matrix._rows; i++)
	{
		for (int j = 0; j < matrix._cols; j++)
		{
			os << matrix.data[i][j] << " ";
		}
		os << "\n";

	}
	return os;
}

int main()
{
	
	Matrix mtx(2,3);
	mtx.data[0][2] = 9;

	std::cout << mtx << "\n";

	mtx.print();

	return 0;
}