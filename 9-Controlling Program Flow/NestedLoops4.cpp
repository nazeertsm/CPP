#include <iostream>
#include <iomanip>

int main()
{

    // Setw on numbers before you print them
    const size_t ROWS{12};
    const size_t COLS{3};

    std::cout << std::endl;
    std::cout << "Tabular data visualization with nested do while loops : " << std::endl;

    size_t row = 0;
    size_t col = 0;

    do
    { // row

        do
        {
            std::cout << "( row " << std::setw(2) << row << ",col " << std::setw(2) << col << ")   ";
            ++col;
        } while (col < COLS);

        std::cout << std::endl;
        col = 0; // Reset col to 0 to allow printing from col 0 . col is in main
                 // function local scope now.
        ++row;
    } while (row < ROWS);

    return 0;
}