//cell.cpp
// the cell class defines 1 block in our grid
#include"cell.h"
#include<iostream>

using namespace std;

Cell::Cell(int x, int y)
{
	m_width = x;
	m_depth = y;
	cout << "Cell Constructor called, width = " << m_width << ", depth = " << m_depth << "." << endl;
}