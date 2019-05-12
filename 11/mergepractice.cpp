void merge(int data[ ], size_t n1, size_t n2)   
// Precondition: The first n1 elements of data are sorted, and the    
// next n2 elements of data are sorted (from smallest to largest).   
// Postcondition: The n1+n2 elements of data are now completely sorted.
{
  size_t copied1, copied2, copied;
  copied1 = 0;
  copied2 = 0;
  copied = 0;

  int* temp;
  temp = new int[n1 + n2];

  while(copied1 < n1 && copied2 < n2)
  {
    if (data[copied1] < data[copied2])
      temp[copied++] = temp[copied1];
    else
      temp[copied++] = temp[copied2];
  }

  while (copied1 < n1)
  {
    temp[copied++] = temp[copied1];
  }
  while (copied2 < n2)
  {
    temp[copied++] = temp[copied2];
  }
  for(size_t i = 0; i < n1 + n2 ; ++i)
  {
  data[i] = temp[i];
  }
  delete[] temp;
}
