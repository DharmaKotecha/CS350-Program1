#include "VendingMachine.h"
#include <iostream>

VendingMachine::VendingMachine(std::string machineName)
: m_machineName(machineName) {}

void VendingMachine::stockItem(Item item)
{
    m_items[item.getName()] = item;
}

bool VendingMachine::selectItem(std::string itemName)
{
    if (m_items.find(itemName) == m_items.end()) {
        std::cout << "Item not found" << std::endl;
        return false;
}
    else {
        return true;
        }
}

std::string VendingMachine::getName()
{
    return m_machineName;
}

void VendingMachine::getItem(std::string itemName, float money)
{
    if (selectItem(itemName)) {
        if (money >= m_items[itemName].getCost()) {
            std::cout << "Dispensing " << itemName << std::endl;
            m_items[itemName].decreaseQuantity();
        }
        else {
            std::cout << "Not enough money" << std::endl;
        }
    }
}

void VendingMachine::showItems()
{
    std::cout << "Available items:" << std::endl;
    for (const auto& item : m_items) {
        std::cout << item.first << " - " << item.second.getCost() << std::endl;
    }
}
