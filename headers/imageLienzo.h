#ifndef IMAGELIENZO_H
#define IMAGELIENZO_H
#include <iostream>
#include <filesystem>
using namespace std;
using namespace filesystem;
class imageLienzo{
private:
    path ruta;
public:
    imageLienzo(path&);
    void searchImages(vector<string>&);
};

#endif // IMAGELIENZO_H
