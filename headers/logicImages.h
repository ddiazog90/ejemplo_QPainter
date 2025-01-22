#ifndef LOGICIMAGES_H
#define LOGICIMAGES_H
#include <headers/imageLienzo.h>

class logicImages{
private:
    path ruta="D:/tempfiles/fondos";
    imageLienzo *il=nullptr;
public:
    logicImages();
    vector<string> loadImages();
};

#endif // LOGICIMAGES_H
