#include <iostream>
#include <iomanip>

int main(){

    //Setw on numbers before you print them
	const size_t ROWS {12}; 
	const size_t COLS {3};


    
	std::cout << "Tabular data visualization with nested for loops : " << std::endl;
	
	
	for (size_t row{0} ; row < ROWS ; ++ row){
        
		for (size_t col{0} ; col < COLS ; ++col){
			std::cout  << "( row "  <<  std::setw(2) << row << ",col " << std::setw(2) <<  col << ")  ";
		}
        std::cout << std::endl;
    }
    

   
    return 0;
}