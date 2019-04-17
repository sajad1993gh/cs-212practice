

void MinHeap::Add(int k)
  {
    if (sizeHeap == capacity)
      {
        cout << "\nOverflow: Could not Add\n";
        return;
      }
      sizeHeap++;
      int i = sizeHeap - 1;
      heapArray[i] = k;

      while (i != 0 && heapArray[parent(i)] > heapArray[i])
      {
        swap(&heapArray[i], &heapArray[parent(i)]);
        i = parent(i);
      }
    }


void MinHeap::Remove(int i)
  {
    keyDec(i, INT_MIN); //Decreasing the key number
    extractMin(); //calling the extract min for extracting the root of the Min heap
  }

void MinHeap::heapiFy(int i)
  {
    int leftChild = leftTree(i);
    int rightChild = rightTree(i);
    int smallest = i;
    if (leftChild < heap_size && harr[leftChild] < heapArray[i])

smallest = leftChild;

if (r < heap_size && heapArray[rightChild] < heapArray[smallest])

smallest = rightChild;

if (smallest != i)

{

swap(&heapArray[i], &heapArray[smallest]);

heapiFy(smallest);

}

}
