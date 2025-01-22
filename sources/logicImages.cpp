#include <headers/logicImages.h>

logicImages::logicImages(){
    imageLienzo imgl(ruta);
    cout<<"Ruta en logica:"<<ruta<<endl;
    il=&imgl;//cargando en el puntero el objeto
}
vector<string> logicImages::loadImages(){
    vector<string>images;
    il->searchImages(images);
    //images.push_back("fondo");
    return images;
}
