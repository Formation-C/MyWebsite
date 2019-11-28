#ifndef CATEGORYFORUM_H
#define CATEGORYFORUM_H

#include <iostream>
#include <vector>

#include <AbstractCategory.h>
#include <Thread.h>

namespace Forum {

    class Category : public AbstractCategory
    {
        public:
            Category();
            virtual ~Category();

            void turnOnOff();
            void getThreads();
            void hasThread(Thread _thread);

            static std::vector<Category*> objects;

//            std::vector<Thread*> getThreads();

        protected:

        private:
    };

}
#endif // CATEGORYFORUM_H
