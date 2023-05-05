
#define N_CONSTANT 10

void writeIndex(int *int_array, int array_length) {
  // #pragma omp target teams distribute parallel for map(tofrom:int_array[0:N_CONSTANT])
  int new_len;
  #pragma omp target map(from:new_len)
{
  new_len=10;
}
  for (int _index = 0; _index < new_len; ++_index)
    int_array[_index] = _index;
}

int main() {
  int hostArray[N_CONSTANT];
  for (int i = 0; i < N_CONSTANT; ++i)
    hostArray[i] = 0;

  writeIndex(hostArray,N_CONSTANT);

  int errors = 0;
  for(int i = 0; i < N_CONSTANT; ++i)
    if(hostArray[i] != i)
      errors++;

  if(errors)
    return 1;
  return 0;
}
