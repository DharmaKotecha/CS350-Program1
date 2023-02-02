#ifndef VENDING MACHINE_H
#define VENDING MACHINE_H

#include <string>
#include <unordered_map>
#include "Item.h"


class Vending Machine
{
    public:
        Vending Machine();
        virtual ~Vending Machine();
        VendingMachine (std::string machineName);
        void stockItem (Item item);
        bool selectItem (std::string itemName);
        std::string getName();
        void getItem (std::string itemName, float money);
        void showItems();


    protected:

    private:
            std::string m_machineName;
            std::unordered_map < std::string, Item > m_items;

};

#endif // VENDING MACHINE_H
