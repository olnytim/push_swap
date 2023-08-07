# 🌟 Push_Swap Project README 🌟

Welcome to the **Push_Swap** project! 🚀

![42 School](https://img.shields.io/badge/42%20School-Project-brightgreen)

## 📝 Table of Contents
- [📋 Introduction](#-introduction)
- [🔧 Requirements](#-requirements)
- [🛠️ Installation](#️-installation)
- [🎮 Usage](#-usage)
- [📚 Rules](#-rules)
- [📈 Algorithm](#-algorithm)
- [🏆 Tips](#-tips)
- [🤝 Contributing](#-contributing)
- [📜 License](#-license)

## 📋 Introduction
**Push_Swap** is a sorting algorithm project at 42 School. The goal is to sort a stack of integers using a limited set of instructions while minimizing the number of moves. The project challenges your algorithmic thinking and problem-solving skills.

## 🔧 Requirements
- Mac OS, Linux, or Windows
- C compiler (e.g., GCC)
- Make

## 🛠️ Installation
1. Clone the repository: `git clone git@github.com:olnytim/push_swap.git`
2. Navigate to the project directory: `cd push_swap`
3. Compile the project: `make`
4. Compile the bonus-checker: `make bonus`

## 🎮 Usage
After compiling, you will have two executables: `push_swap` and `checker`.

To generate a sorted list of instructions for a given stack:

```./push_swap [list of integers]```

To check if the instructions correctly sort the stack:

```./push_swap [list of integers] | ./checker [list of integers]```


## 📚 Rules
- The project uses two stacks, A and B.
- Available instructions: `sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`.
- `sa`: swap the top elements of stack A.
- `sb`: swap the top elements of stack B.
- `ss`: `sa` and `sb` combined.
- `pa`: push the top element from stack B to stack A.
- `pb`: push the top element from stack A to stack B.
- `ra`: rotate stack A (move top element to the bottom).
- `rb`: rotate stack B (move top element to the bottom).
- `rr`: `ra` and `rb` combined.
- `rra`: reverse rotate stack A (move bottom element to the top).
- `rrb`: reverse rotate stack B (move bottom element to the top).
- `rrr`: `rra` and `rrb` combined.

## 📈 Algorithm
The project's main challenge is to find an efficient sorting algorithm using the given instructions. Various sorting algorithms can be implemented, such as insertion sort, quicksort, or merge sort, combined with optimization techniques.

## 🏆 Tips
- Analyze the given instructions and stack operations carefully.
- Consider edge cases and optimize your algorithm to minimize the number of moves.

## 🤝 Contributing
Contributions are welcome! Feel free to open an issue or submit a pull request.

## 📜 License
This project is licensed under the [MIT License](LICENSE).

Happy sorting! 🧠💡
