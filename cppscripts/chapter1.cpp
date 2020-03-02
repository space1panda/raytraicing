#include <iostream>
using namespace std;

struct Vector3D
{
    float x, y, z;

    Vector3D() = default;
    Vector3D(float a, float b, float c)
    {
        x = a;
        y = b;
        z = c;
    }

    float& operator [](int i)
    {
        return ((&x)[i]);
    }

    const float& operator [](int i) const
    {
        return ((&x)[i]);
    }
};

/**int main()
{
    Vector3D test = Vector3D(5,10,15);
    cout<<"Compiled\n";
    printf("%d", test.x);
    return 0;
}**/