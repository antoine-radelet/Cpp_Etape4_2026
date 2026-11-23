#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <string>
#include "Schedulable.h"

namespace planning {

    class Professor : public Schedulable {
        private:

            string lastName;

            string firstName;

        public:
            
            Professor();

            Professor(int i, const std::string& ln, const std::string& fn);

            Professor(const Professor& p);

            ~Professor();

            void setLastName(const std::string& ln);
            void setFirstName(const std::string& fn);
            string getLastName() const;
            string getFirstName() const;

            string toString() const override;
            string tuple() const override;

            Professor& operator=(const Professor& p);
            friend ostream& operator<<(ostream& s, const Professor& p);
    };

}
#endif