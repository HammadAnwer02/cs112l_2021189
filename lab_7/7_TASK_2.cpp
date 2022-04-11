#include <iostream>

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
            validInput(input, n);
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

// int& matrixType::operator()(int i, int j) {
//     return mat[i][j];
// }
// int matrixType::operator()(int i, int j) const {
//     return mat[i][j];
// }



matrixType matrixType::operator+ (matrixType m1) {
    matrixType temp(rows, cols);
 
    if (rows == m1.rows && cols == m1.cols) {
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
                // temp.mat[i][j] = mat[i][j] + m1.mat[i][j];
                temp(i, j) = mat[i][j] + m1(i, j);
            }
            
        }
        
    return temp;
    }
    else 
    {
        cout << "Invalid Operation!" << endl;
        exit(1);
    }
}

matrixType matrixType::operator- (matrixType m1) {
    matrixType temp(rows, cols);
 
    if (rows == m1.rows && cols == m1.cols) {
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
            //    temp.mat[i][j] = mat[i][j] - m1.mat[i][j];
                temp(i, j) = mat[i][j] - m1(i, j);
            }
            
        }

        
    return temp;
    }
    else
    {
        cout << "Invalid Operation";
        exit(1);
    }
}


matrixType matrixType::operator*(matrixType m1) {
    matrixType temp(rows, m1.cols);

    if (rows == m1.cols) {
        for (size_t i = 0; i < rows; i++)
        {
            for (size_t j = 0; j < cols; j++)
            {
                for (size_t k = 0; k < cols; k++)
                {
                    temp(i, j) += mat[i][k] * m1(k, i);
                }
            }
            
        }
    }
    else 
    {
        cout << "Invalid operation!"  << endl;
        exit(1);
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
    cout << "Enter array elements: ";
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
            cout << m1 + m2 << endl;
            break;
        case 2:
            cout << m1 - m2 << endl;
            break;
        case 3:
            cout << m1 * m2 << endl;
            break;
        case 4:
            cout << "\nThe first matrix:\n\n" << m1 << endl;
            cout << "\nThe second matrix:\n\n" << m2 << endl;
            break;
        case 5:
            break;
        default:
            break;
        }

    }

    cout << m1 + m2 << endl;
    cout << m1 - m2 << endl;
    cout << m1 * m2 << endl;

    return 0;
}
