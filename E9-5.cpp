//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: HW E9.5

//To have a class rectangle with a constructor to construct a rectangle with a
//given height and width, members get_perimeter and get_area

class Rectangle{
private:
  double width;
  double height;
public:
  Rectangle(double input_w, double input_h);
  double get_perimeter();
  double get_area();
  void resize(double factor);
};

Rectangle::Rectangle(double input_w, double input_h){
  width = input_w;
  height = input_h;
}

double Rectangle::get_perimeter(){
  return (2 * width) + (2 * height);
}

double Rectangle::get_area(){
  return width * height;
}

void Rectangle::resize(double factor){
  width *= factor;
  height *= factor;
}
