template <class Item>
class heap
{
 public:
        heap () { used = 0;}
        void push(const Item& entry); // add
        Item& pop(); // remove the highest
        size_t parent (size_t k) const { return (k-1)/2;}
        size_t l_child (size_t k) const { return 2*k+1;}
        size_t r_child (size_t k) const { return 2*k+2;}
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
  if(used == 1)
  used--;
  else
  {
    data[0] = data[used--];
    used--;
    size_t i = 0;
    while(i != used && data[i] < data[l_child(i)] && data[i] < data[r_child(i)])
    {
      if(data[i] < data[l_child(i)])
      {
        swap(data[i] , data[l_child(i)]);
        i = 2*i + 1;
      }
      else
      {
        swap(data[i] , data[r_child(i)]);
        i = 2*i + 2;
      }
    }
  }
}
