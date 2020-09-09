//here l and r index of string
// string is permuted from a[l] to a[r]
//permutation stores all the permuted strings

vector<string>permutation;
void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r){ 
        cout<<a<<endl;
	permutation.push_back(a);
    }
    else
    {  
        for (int i = l; i <= r; i++)  
        {  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  
