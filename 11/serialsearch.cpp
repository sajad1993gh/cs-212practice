// serial searching - worst case O(n) - Average n + 1 /2
size_t i = 0;
bool found = false;

while (i<n && !found)
{
  if(a[i] == target)
    found = true;
  else
    ++i;
}

if (found == true)
  return i;
else
  return -1;
