#ifndef CATEGORYCALENDAR_H
#define CATEGORYCALENDAR_H

#include <AbstractCategory.h>
#include <Event.h>

namespace Calendar{

    class Category : public AbstractCategory
    {
        public:
            Category();
            virtual ~Category();

            void getEvents();
            void hasEvent(Event _event);

        protected:

        private:
    };

}
#endif // CATEGORYCALENDAR_H
