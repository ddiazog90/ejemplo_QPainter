#include <headers/imageLienzo.h>

imageLienzo::imageLienzo(path& r):ruta(r){
    cout<<"Ruta:"<<r<<endl;
    };
//consultar las imagenes del directorio
void imageLienzo::searchImages(vector<string>&images){
    path rutaTemp="D:/tempfiles/fondos";
    try{
        for(const auto& file:directory_iterator(rutaTemp)){
            if(!file.is_directory()){
                cout<<file.path()<<endl;
                images.push_back(file.path().filename().string());
            }
        }
    }catch(filesystem_error &e){
        cerr<<"Error al listar los archivos del directorio"<<endl;
    }
}
