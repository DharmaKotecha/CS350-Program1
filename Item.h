#ifndef ITEM_H
#define ITEM_H


class Item
{
    public:
        Item();
        virtual ~Item();
        Item (std::string name, int quantity, float cost);
        std::string getName();
        int getQuantity();
        void decreaseQuantity();
        float getCost();

    protected:

    private:
};

#endif // ITEM_H
