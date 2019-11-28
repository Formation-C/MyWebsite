#ifndef ABSTRACTCATEGORY_H
#define ABSTRACTCATEGORY_H

#include <iostream>

class AbstractCategory
{
    public:
        AbstractCategory();
        AbstractCategory(std::string _name);
        virtual ~AbstractCategory();

        std::string name;

        virtual void turnOnOff() = 0;

    protected:

    private:
};

#endif // ABSTRACTCATEGORY_H
