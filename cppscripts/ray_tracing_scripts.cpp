#include <iostream>
#include <fstream>
#include <vec3.h>

int main() {
    int nx = 200;
    int ny = 100;
    std::ofstream myfile;
    myfile.open("testppm.ppm");
    myfile << "P3\n" << nx << " "<< ny << "\n255\n";
    for (int j = ny-1; j >=0; j--){
        for (int i = 0; i <nx; i++){
            float r = float(i) / float(nx);
            float g = float(j) / float(ny);
            float b = 0.2;
            int ir = int(255 * r);
            int ig = int(255 * g);
            int ib = int(255 * b);
            myfile << ir << " " << ig << " " << ib << "\n";
        }
    }
    
    myfile.close();
    return 0;
}