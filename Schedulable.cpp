#include "Schedulable.h"
using namespace std;

namespace planning {

    Schedulable::Schedulable(){
        cout<<"constructeur par defaut (mere)"<<endl;
        setId(0);
    }

    Schedulable::Schedulable(int i){
        cout << "constructeur d'initialisation (mere)" << endl;
        setId(i);
    }

    Schedulable::Schedulable(const Schedulable& s){
        cout<<"constructeur d'initialisation (mere)"<<endl;
        setId(s.id);
    }

    Schedulable::~Schedulable() {
        cout<<">>> destructeur (mere) <<<"<<endl;
    }

    void Schedulable::setId(int i) { 
        id = i; 
    }

    int Schedulable::getId() const {
        return id; 
    }

}