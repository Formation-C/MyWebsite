#ifndef CATEGORYFORUM_H
#define CATEGORYFORUM_H

#include <iostream>
#include <vector>

#include <AbstractCategory.h>

class Thread;

namespace Forum {

    class Category : public AbstractCategory
    {
        public:
            Category(std::string _name);
            virtual ~Category();

            void turnOnOff();
            void hasThread(Thread _thread);
            std::string getName() { return name; };

            static std::vector<Category*> objects;

            std::vector<Thread*> getThreads();

        protected:

        private:
    };

}
#endif // CATEGORYFORUM_H

#include <Thread.h>
