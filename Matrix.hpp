#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

namespace zich 
{
    class Matrix 
    {
    private:

        int rows, cols;
        int size;
        vector<double> data;

    public:

        int get_rows()const
        {
            return rows;
        }
        int get_cols()const
        {
            return cols;
        }

        double get_data_at(const int i ) const
        {
            return data.at((unsigned long)i);
        }

        Matrix(vector<double> data, const int row, const int col);
        Matrix();
        ~Matrix();

        //Add
        Matrix operator+(const Matrix& other) const; 
        Matrix& operator+=(const Matrix& other);      
        Matrix operator+() const;                   

        // Sub
        Matrix operator-(const Matrix& other) const;  
        Matrix& operator-=(const Matrix& other);      
        Matrix operator-() const;         

        // Inc and dec
        Matrix& operator++();    
        Matrix operator++(const int);  
        Matrix& operator--();    
        Matrix operator--(const int);   


        // Mult
        Matrix operator*(const Matrix& other) const;                  
        Matrix& operator*=(const Matrix& other);                      
        Matrix operator*(const double scalar) const;                        
        Matrix& operator*=(const double scalar);                            
        friend Matrix operator*(const double scalar, const Matrix& other);             

        //Compare
        bool operator>(const Matrix& other) const;   
        bool operator>=(const Matrix& other) const;  
        bool operator<(const Matrix& other) const;   
        bool operator<=(const Matrix& other) const;  
        bool operator==(const Matrix& other) const;  
        bool operator!=(const Matrix& other) const;  


        // Input and Output
        friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
        friend std::istream& operator>>(std::istream& is, Matrix& matrix);
    };
}  