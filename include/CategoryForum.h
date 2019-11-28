#ifndef CATEGORYFORUM_H
#define CATEGORYFORUM_H

#include <AbstractCategory.h>
#include <Thread.h>

namespace Forum {

    class Category : public AbstractCategory
    {
        public:
            Category();
            virtual ~Category();

            void getThreads();
            void hasThread(Thread _thread);

        protected:

        private:
    };

}
#endif // CATEGORYFORUM_H
