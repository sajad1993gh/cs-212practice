void insertionsort(int data[], size_t n)
{
  size_t i,j;
  int next;
  for(i = 1; i<n ; i++)
  {
    next = data[i];
    j = i;
    while( j>0 ; next<data[j-1])
    {
      data[j] = data[j-1];
      --j;
    }
    data[j] = next;
  }
}
