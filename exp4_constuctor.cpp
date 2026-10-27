```cpp
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    // Constructor with default values
    Rectangle() : length(1.0), width(1.0) {}

    // Constructor with custom values
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Destructor
    ~Rectangle()
    {
        cout << "Rectangle object destroyed." << endl;
    }

    // Getter method for length
    double getLength() const
    {
        return length;
    }

    // Getter method for width
    double getWidth() const
    {
        return width;
    }

    // Setter method for length
    void setLength(double len)
    {
        length = len;
    }

    // Setter method for width
    void setWidth(double wid)
    {
        width = wid;
    }

    // Calculate area
    double calculateArea() const
    {
        return length * width;
    }

    // Calculate perimeter
    double calculatePerimeter() const
    {
        return 2 * (length + width);
    }
};

int main()
{
    // Create a rectangle with custom values
    Rectangle rect(4.0, 40.0);

    // Display properties
    cout << "Rectangle properties:" << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    return 0;
}
```
