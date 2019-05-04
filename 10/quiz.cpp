
class heap
{
 public:
        ....
        void push(const Item& entry); // add
        Item& pop(); // remove the highest
 private:
        Item data[CAPACITY];
        size_type used;
}

void push(const Item& entry)
{
  data[used++] = entry;
  size_t i = used - 1;
  while(i != 0 && data[i] < data[parent(i)])
  {
    swap(data[i], data[parent(i)]);
    i = (i - 1)/2;
  }
}

Item& pop()
{

}
