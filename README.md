# TwoSum C Program

## Overview

The **TwoSum** program is a simple yet efficient implementation of the classic Two Sum problem in C. It takes an array of integers and a target sum as input, then finds and returns the indices of the two numbers that add up to the target. If no such numbers exist, it informs the user accordingly.

## Features

- **Dynamic Memory Allocation**: Utilizes `malloc` to handle input sizes dynamically.
- **Input Validation**: Ensures that user inputs are valid and handles errors gracefully.
- **Output**: Provides clear feedback to the user about the results.

## Getting Started

### Prerequisites

- A C compiler (like `gcc`) to compile the code.
- Basic knowledge of C programming.

### Installation

1. **Clone the repository** (or create a new file):
   ```bash
   git clone https:/github.com/nerrison/TwoSum.git
   cd TwoSum
   ```

2. **Compile the code**:
   ```bash
   gcc -o TwoSum TwoSum.c
   ```

3. **Run the program**:
   ```bash
   ./TwoSum
   ```

### Usage

1. The program will prompt you to enter the number of elements in the array.
2. Next, enter the elements of the array, one by one.
3. Finally, input the target sum.
4. The program will output the indices of the two numbers that add up to the target, or inform you if no such numbers exist.

### Example

```plaintext
Enter the number of elements in the array:
5
Enter the elements of the array:
2
7
11
15
Enter the target number:
9
Indices of the numbers that sum to 9: 0 and 1
```

## Code Structure

- **TwoSum Function**: Contains the logic to find two indices.
- **Main Function**: Handles user interaction and input validation.

## Contributions

Feel free to fork the repository and make improvements! If you have any suggestions or encounter any issues, please create an issue.

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Acknowledgments

- Inspired by common algorithms and problems found in coding interviews.
- Thanks to the C community for ongoing support and resources.

---