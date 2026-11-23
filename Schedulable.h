#ifndef SCHEDULABLE_H
#define SCHEDULABLE_H

#include <string>

namespace planning {

    class Schedulable {
        protected:

            int id;

        public:

            Schedulable();

            Schedulable(int i);

            Schedulable(const Schedulable& s);

            virtual ~Schedulable();

            void setId(int i);
            int getId() const;

            virtual string toString() const = 0;
            virtual string tuple() const = 0;
    };

}
#endif