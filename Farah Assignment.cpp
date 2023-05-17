#include <iostream>
#include <algorithm>
class CoffeeShop(){
 private:
     string name;
    struct <MenuItem> menu  ={string name , string type , int price};
     string order [];
     int totalcost;
     int cheapestItemPrice;
     int price;
     queue<int> orderQueue;

 public:
     CoffeeShop(){};
    void addOrder(string name){
        orders.push_back();
        totalcost += price;
        orderQueue.push(orders.size()-1);


    }
    void fulfillOrder(){
        if (orders.length > 0){
    return "The item is ready!";
        }
        else(){return "all orders have been fulfilled!";}
    }
   array listOrders(){
    return orders;
    else (
          return [];)
    }

    int dueAMount(){
    return totalcost;
    }

    string cheapestItem(){
        if (price < cheapestItemPrice){
            cheapestItemPrice = price;
        }
    }

    string drinksOnly(){
    for (item : menu){
        if (item.== drinks){
            drinks.push_back(item.name);
        }
    } return drinks;
    }

    string foodOnly(){
    for (item : menu){
        if (item.== food){
            food.push_back(item.name);
        }
    } return food;
    }

    void sortFIFO(){ <order> sortedorders;
    while(!orderQueue.empty()){
        int index = orderQueue.front();
        orderQueue.pop;
        sortedorders.push_back(orders[index]);
    } orders = sortedorders;
    }
};

using namespace std;

int main()
{
   CoffeeShop shop;
   shop.addOrder('bobba tea' , 'tea' , 70);
   shop.addOrder('green tea' , 'tea' , 90);
   shop.addOrder('fruit tea' , 'tea' , 30);

   cout << "total cost for you order is" << shop.dueAMount << endl;
   cout << "the cheapest item is" << shop.cheapestItem << endl;

   shop.sortFIFO();


    return 0;
}
