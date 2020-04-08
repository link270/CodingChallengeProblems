#include <iostream>
#include <vector>

int main(){
    int n, t;    
	std::cin>>n;   
	std::vector<int> array(n);   

	for(int i=0;i<n;i++){          
		std::cin>>t;    
		if(t==4){
            array[i] = 1; 
        }

		if(t==8){
            array[i] = 2;
        }  

		if(t==15){
            array[i] = 3;
        }

		if(t==16){
            array[i] = 4;
        }

		if(t==23){
            array[i] = 5;
            
        }

		if(t==42){
            array[i] = 6;
        }    
	}

	std::vector<int> current(7);    
	current[0] = n;
	for(int i=0;i<n;i++)    
	{        
		if(current[array[i]-1]>0)        
		{            
			++current[array[i]];        
		    --current[array[i]-1];     
	    }    
	}

	std::cout << (n - 6 * current[6]);
}