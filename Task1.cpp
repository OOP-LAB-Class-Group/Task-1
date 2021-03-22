// 2018556502 Muhammed Ali ARICI
// 2019556461 Mahmut Can Ã‡INGI
// 2020556061 Emre ULUSOY

#include <iostream>
#include <limits>
#define PI 3.14
using namespace std;

// Base Class
class area_cl {
  public:
  double height,width;
};
// Sub Class 1
class rectangle : public area_cl {
  public:
  double area(double h,double w) {
    return h * w;
  }
};
// Sub Class 2
class cylinder : public area_cl {
  public:
  double area(double h,double w) {
    return 2 * PI * h * w;
  }
};

int main(void) {
  area_cl object;
  rectangle rec_obj;
  cylinder cly_obj;
  double area_rectangle,area_cylinder;
  while (1) {
    cout << "What are the dimensions? (Heigth and Width)" << endl;
    cin >> object.height >> object.width;
    if (cin.fail()) {
      cout << "You have entered characters, please enter numbers." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else {
      area_rectangle = rec_obj.rectangle::area(object.height,object.width);
      area_cylinder = cly_obj.cylinder::area(object.height,object.width);
      cout << "Cylinder's area is:" << area_cylinder << endl;
      cout << "Renctangle's area is:" << area_rectangle << endl;
      break;
    }
  }
}