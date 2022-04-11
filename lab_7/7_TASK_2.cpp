#include <iostream>
#include <limits>
#include <Windows.h>

using namespace std;

#define CreateTwoMatrices \
    int rows, cols;\
    cout << "Enter number of rows and cols for first matrix: ";\
    cin >>rows >> cols;\
    matrixType m1(rows, cols);\
    cout << "Enter the number of rows and cols for the second matrix: ";\
    cin >> rows >> cols;\
    matrixType m2(rows, cols);\

#define printMenu \
cout << "Please choose one of the options: \n"\
    << "Enter 1 to add the matrixes\n"\
    << "Enter 2 to subtract the matrices\n"\
    << "Enter 3 to multiply the matrices\n"\
    << "Enter 4 to output the matrices\n"\
    << "Enter 5 to input two different matrices\n"\
    << "Enter -1 to exit\n";\


void validInput(istream& input, int& n)
{
    while (1)
    {
        if (input >> n)
        {
            return;
        }
        else
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid Input! Please enter an integer value: ";
        }
    }
}


class matrixType
{
    friend std::ostream &operator<<(std::ostream &, const matrixType &);
    friend std::istream &operator>>(std::istream &, matrixType &);

private:
    int** mat;
    int rows;
    int cols;
public:
    matrixType(int, int);
    ~matrixType();
    int& operator()(int, int);
    int operator()(int, int) const;
    void changeMatrix(int, int);
    matrixType operator + (matrixType);
    matrixType operator - (matrixType);
    matrixType operator * (matrixType);

};




matrixType::matrixType(int _rows = 0, int _cols = 0)
{
    rows = _rows;
    cols = _cols;
        mat = new int* [rows];
        for (int i = 0; i < rows; i++) {
            mat[i] = new int [cols];
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                mat[i][j] = 0;
            }
        }

}


void matrixType::changeMatrix (int _rows, int _cols)
{
    rows = _rows;
    cols = _cols;
    int **temp = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        temp[i] = new int [cols];  
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j  = 0; j  < cols; j++)
        {
            temp[i][j] = 0;
        }
        
    }
    delete [] mat;
    mat = temp;
    
}

int& matrixType::operator()(int i, int j) {
    return mat[i][j];
}
int matrixType::operator()(int i, int j) const {
    return mat[i][j];
}



matrixType matrixType::operator+ (matrixType m1) {
    matrixType temp(rows, cols);

    if (rows == m1.rows && cols == m1.cols) {
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
                temp(i, j) = mat[i][j] + m1(i, j);
            }

        }

    return temp;
    }
    else 
    {

        throw invalid_argument{"Invalid Operation! Rows and Colomns should be same"};
    }
}

matrixType matrixType::operator- (matrixType m1) {
    matrixType temp(rows, cols);

    if (rows == m1.rows && cols == m1.cols) {
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
                temp(i, j) = mat[i][j] - m1(i, j);
            }

        }


    return temp;
    }
    else
    {
        throw invalid_argument{"Invalid Operation! Rows and Colomns should be same"};
    }
}


matrixType matrixType::operator*(matrixType m1) {
    matrixType temp(rows, m1.cols);

    if (cols == m1.rows) {
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < m1.cols; j++)
            {
                for (size_t k = 0; k < cols; k++)
                {
                    temp(i, j) += mat[i][k] * m1(k, j);
                }
            }

        }
    }
    else 
    {
       throw invalid_argument{"Invalid Operation! Columns of first matrix and rows of second matrix should be same"};
    }
        return temp;
}



matrixType::~matrixType()
{
}

std::ostream &operator<<(std::ostream &output, const matrixType &m1)
{
    for (int i = 0; i < m1.rows; i++)
    {
        for (int j = 0; j < m1.cols; j++)
        {
            int temp = m1.mat[i][j];
            output << temp << " ";
        }
        output << std::endl;
    }
    return output;
}
std::istream &operator>>(std::istream &input, matrixType &m1)
{
    cout << "Enter Matrix elements: ";
    for (int i = 0; i < m1.rows; i++)
    {
        for (int j = 0; j < m1.cols; j++)
        {
            int temp;
            input >> temp;
            m1(i, j) = temp;
        }
    }
    return input;
}


int main(int argc, char const *argv[])
{
    
    CreateTwoMatrices
    cin >> m1;
    cin >> m2;

    printMenu

    int option;
    validInput(cin, option);

    while(option != -1) 
    {
        switch (option)
        {
        case 1:
        try{
            cout << m1 + m2 << endl;
        }
        catch (invalid_argument& ex)
        {
            cout << ex.what() << endl;
        }
            break;
        case 2:
        try
        {
            
            cout << m1 - m2 << endl;
        }
        catch(invalid_argument& ex)
        {
            cout << ex.what() << endl;
        }
        
            break;
        case 3:
        try 
        {
            cout << m1 * m2 << endl;
        }
        catch (invalid_argument& ex)
        {
            cout << ex.what() << endl;
        }
     
            break;
        case 4:
            cout << "\nThe first matrix:\n\n" << m1 << endl;
            cout << "\nThe second matrix:\n\n" << m2 << endl;
            break;
        case 5:{
            cout << "Enter the new number of rows and cols for the first matrix: ";
            cin >> rows >> cols;
            m1.changeMatrix(rows, cols);
            cout << "Enter the new number of rows and cols for the second matrix: ";
            cin >> rows >> cols;
            m2.changeMatrix(rows, cols);
            cin >> m1;
            cin >> m2;
        }
            break;
        default:
            break;
        }

        system("pause");
        printMenu
        validInput(cin, option);

    }
    cout << "Exiting Program";
    for (int i = 0; i < 5; i++) {
        cout << " .";
        Sleep(500);
    }
    return 0;
}
