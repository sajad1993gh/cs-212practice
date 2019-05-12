// selectionsort
for(i = 0; i < n - 1 ; i++)
{
  min = i;
  for(j = i + 1; j < n ; j++)
  {
    if (a[j] < a[min])
    min = j;
  }
  swap(a[min], a[j]);
  }
}
