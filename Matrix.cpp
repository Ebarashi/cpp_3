#include <iostream>
#include <vector>
#include "Matrix.hpp"

using namespace std;
namespace zich
{
    Matrix::Matrix(vector<double> data, const int row, const int col)
    {
        if (row <= 0 || col <= 0)
        {
            throw runtime_error("negative values");
        }
        if (data.size() != row * col)
        {
            throw runtime_error("the size of the matrix not matches");
        }

        this->data = data;
        this->rows = row;
        this->cols = col;
        this->size = row * col;
    }

     Matrix::Matrix()
    {
    }

    Matrix::~Matrix()
    {
    }

    Matrix Matrix::operator+(const Matrix &mat) const
    {
       return *this;
    }
    Matrix Matrix::operator+() const
    {
     return *this;
    }
   
    Matrix &Matrix::operator++()
    {
        return *this;
    }
    Matrix Matrix::operator++(const int num)
    {
        return *this;

    }
    Matrix &Matrix::operator+=(const Matrix &mat)
    {
        return *this;
    }
    Matrix Matrix::operator-(const Matrix &mat) const
    {
      return *this;
    }

    Matrix Matrix::operator-() const 
    {
       return *this;
    }

    Matrix &Matrix::operator--()
    {
        return *this;
    }
    Matrix Matrix::operator--(const int num)
    {
       return *this;
    }
    Matrix &Matrix::operator-=(const Matrix &mat)
    {
        return *this;
    }
  
    Matrix Matrix::operator*(const Matrix &mat) const
    {
      return *this;
    }
    Matrix &Matrix::operator*=(const Matrix &mat)
    {
        return *this;
    }

    Matrix Matrix::operator*(const double scalar) const
    {
     return *this;
    }
    Matrix &Matrix::operator*=(const double scalar)
    {
        return *this;
    }
    
    bool Matrix::operator>(const Matrix &mat) const
    {
       return false;
    }
    
    bool Matrix::operator>=(const Matrix &mat) const
    {
        return false;
    }
    
    bool Matrix::operator<(const Matrix &mat) const
    {
     return false;
    }
    
    bool Matrix::operator<=(const Matrix &mat) const
    {
      return false;

    }
    
    bool Matrix::operator==(const Matrix &mat) const
    {
        return false;
    }
    
    bool Matrix::operator!=( const Matrix &mat) const 
    {
        return false;
    }
    
    ostream &operator<<(ostream &out, const Matrix &mat)
    {
        return out;
    }

    istream &operator>>(istream &input, Matrix &mat)
    {
        return input;
    }

    Matrix operator*(const double scalar, const Matrix &mat)
    {
        return mat;
    }
}