#include <iostream>
#include "Cube.h"
#include "Circle.h"
#include "Pyramid.h"
#include "Square.h"



#define choose2D_OR_3D \
cout << "\nPlease choose one of the following: \n"\
 << "1) 2D Shapes\n"\
 << "2) 3D Shapes\n";




#define choose2DShape \
cout << "Please choose one of the 2D shapes:\n"\
<< "1: Circle\n"\
<< "2: Square\n";


#define ChooseCircleOptions \
cout << "Please enter one the following options: \n"\
<< "1: Set Radius\n"\
<< "2: Get Area: \n"\
 << "3: Set Color\n";

#define ChooseSquareOptions \
cout << "Please enter one the following options: \n"\
 << "1: Set length\n"\
 << "2: Get Area \n"\
 << "3: Set Color\n";

#define ChooseCubeOptions \
cout << "Please enter one the following options: \n"\
 << "1: Set length\n"\
 << "2: Get Area \n"\
 << "3: Get Volume \n";\
 
#define ChoosePyramidOptions \
cout << "Please enter one of the following: \n"\
<< "1: Set Base\n"\
<< "2: Set Height\n"\
<< "3: Get Area\n"\
<< "4: Get Volume\n";\



#define choose3DShape \
    cout << "Please choose one of the 3D shapes: \n"\
    << "1: Pyramid\n"\
    << "2: Cube\n";\

#define read(type, var) type var; cin >> var;


using namespace std;

int main()
{

    choose2D_OR_3D
    read(int, option)
    while(option == 1 || option == 2)
    {
        switch (option)
        {
        case 1:
            choose2DShape
            read(int, two_d)

            switch(two_d)
            {
                case 1:
                {
                Circle c1;
                ChooseCircleOptions
                read(int, cir)
                while (cir == 1 || cir == 2 || cir == 3)
                {

                switch(cir)
                {
                    case 1:
                    cout << "Enter the radius: ";
                    read(double, r)
                    c1.setRadius(r);
                    break;
                    case 2:
                    cout << c1.area() << endl;
                    break;
                    case 3:
                    cout << "Enter the color: ";
                    read(string, c)
                    c1.setColor(c);
                    break; 
                }
                ChooseCircleOptions
                cin >> cir;
                }
                break;
                }
                case 2:
                {
                Square s1;
                ChooseCircleOptions
                read(int, sq)
                while(sq == 1 || sq == 2 || sq == 3)
                {

                switch(sq)
                {
                    case 1:
                    cout << "Enter the Length: ";
                    read(double, l)
                    s1.setSide(l);
                    break;
                    case 2:
                    cout << s1.area() << endl;
                    break;
                    case 3:
                    cout << "Enter the color: ";
                    read(string, c)
                    s1.setColor(c);
                    break;
                }
                ChooseSquareOptions
                cin >> sq;
                }
            
            break;
            }
            

        
        default:
            break;
        }
        case 2:
            choose3DShape
            read(int, three_d)
            switch(three_d)
            {
                case 1:
                {
                    Pyramid p1;
                    ChoosePyramidOptions
                    read(int, pyr)
                    while(pyr == 1 || pyr == 2 || pyr == 3 || pyr == 4)
                    {

                    switch(pyr)
                    {
                        case 1:
                        cout << "Enter Base: ";
                        read(double, b)
                        p1.setBase(b);
                        break;
                        case 2:
                        cout << "Enter Height: ";
                        read(double, h)
                        p1.setHeight(h);
                        break;
                        case 3:
                        cout << "Area: " << p1.area() << endl;
                        break;
                        case 4: 
                        cout << "Volume: " << p1.volume() << endl;
                        break;

                    }
                    ChoosePyramidOptions
                    cin >> pyr;
                    }
                }
                case 2:
                {
                    Cube cb;
                    ChooseCubeOptions
                    read(int, cube)
                    while(cube == 1 || cube == 2 || cube == 3)
                    {

                    switch (cube)
                    {
                    case 1:
                        cout << "Enter Length: ";
                        read(double, l)
                        cb.setLength(l);
                        break;
                        case 2:
                        cout << "Area: " << cb.area() << endl;
                        break;
                        case 3:
                        cout << "Volume: " << cb.volume() << endl;
                        break;
                    default:
                        break;
                    }
                    ChooseCubeOptions
                    cin >> cube;
                    }

                }
                
            }
    }

choose2D_OR_3D
cin >> option;
}
}