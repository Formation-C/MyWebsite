#ifndef ABSTRACTCATEGORY_H
#define ABSTRACTCATEGORY_H

#include <iostream>

class AbstractCategory
{
    public:
        AbstractCategory();
        virtual ~AbstractCategory();

        std::string name;

        virtual void turnOnOff() = 0;

    protected:

    private:
};

#endif // ABSTRACTCATEGORY_H
