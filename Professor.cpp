#include "Professor.h"
using namespace std;

namespace planning {

    Professor::Professor(){
        setId(0);
        setLastName("default");
        setFirstName("default");
    }

    Professor::Professor(int i, const string& ln, const string& fn){
        setId(i);
        setLastName(ln);
        setFirstName(fn);
    }

    Professor::Professor(const Professor& p){
        setId(p.id);
        setLastName(p.lastName);
        setFirstName(p.firstName);
    }

    Professor::~Professor() {}

    void Professor::setLastName(const string& ln) { 
        lastName = ln; 
    }

    void Professor::setFirstName(const string& fn) { 
        firstName = fn; 
    }

    string Professor::getLastName() const { 
        return lastName; 
    }
    
    string Professor::getFirstName() const { 
        return firstName; 
    }

    string Professor::toString() const {
        return lastName + " " + firstName;
    }

    string Professor::tuple() const {
        return to_string(id) + ";" + lastName + ";" + firstName;
    }

    Professor& Professor::operator=(const Professor& p) {
        setId(p.getId());
        lastName = p.lastName;
        firstName = p.firstName;
        return *this;
    }

    ostream& operator<<(ostream& s, const Professor& p) {
        s << p.toString();
        return s;
    }

}