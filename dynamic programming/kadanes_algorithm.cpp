//time complexity - O(n)
//maximum subarray sum
void max_subarray_sum(int array[],int n){
  int best = 0, sum = 0;
  for (int k = 0; k < n; k++){
    sum = max(array[k],sum+array[k]);
    best = max(best,sum);
  }	
  cout << best << "\n";
}
