# C++ Operators and Their Usage

## Aim
To understand the role of operators in C++, explore their categories such as bitwise, assignment, and miscellaneous operators, and also study how operator precedence affects the evaluation of expressions.

---

## Bitwise Operators
Bitwise operators work directly on the binary representation of numbers. They are commonly used in low-level programming, masks, and hardware control.

- `&` (AND) → Keeps the bit if it is present in both operands.  
- `|` (OR) → Keeps the bit if it is present in at least one operand.  
- `^` (XOR) → Keeps the bit if it appears in only one operand (exclusive).  
- `~` (NOT) → Flips every bit (one’s complement).  
- `<<` (Left Shift) → Shifts bits to the left, filling with zeros.  
- `>>` (Right Shift) → Shifts bits to the right, discarding excess bits.

**Example:**  
If `A = 60 (111100)` and `B = 13 (1101)`, then  
- `A & B = 12`  
- `A | B = 61`  
- `A ^ B = 49`  
- `A << 2 = 240`  
- `A >> 2 = 15`  

---

## Assignment Operators
Assignment operators are used to assign values to variables and perform operations at the same time.

- `=` → Simple assignment  
- `+=` → Add and assign  
- `-=` → Subtract and assign  
- `*=` → Multiply and assign  
- `/=` → Divide and assign  
- `%=` → Modulus and assign  
- `<<=` → Left shift and assign  
- `>>=` → Right shift and assign  
- `&=`, `^=`, `|=` → Perform bitwise operations and assign the result  

**Example:**  
If `C = 10`, then `C += 5` makes `C = 15`.  

---

## Miscellaneous Operators
C++ has several other operators that serve specialized purposes:

- `sizeof` → Returns the size of a variable or type (e.g., `sizeof(int)` = 4).  
- `?:` → Ternary operator, acts like a compact if-else.  
- `,` → Evaluates multiple expressions and returns the last one.  
- `.` and `->` → Access members of structures, classes, and pointers.  
- Type casting → Converts one data type to another (`int(2.9)` = `2`).  
- `&` → Address-of operator, gives the memory location of a variable.  
- `*` → Pointer dereference, accesses the value at a given address.  

---

## Operator Precedence
Operator precedence determines the order in which expressions are evaluated. Associativity resolves ties when multiple operators have the same precedence.

Some key rules:  
- **Highest precedence** → `()` function calls, `[]` array subscripts  
- **Unary operators** (`++`, `--`, `!`, `~`, `+`, `-`)  
- **Multiplicative** (`*`, `/`, `%`) before additive (`+`, `-`)  
- **Shift operators** (`<<`, `>>`)  
- **Relational operators** (`<`, `>`, `<=`, `>=`)  
- **Equality operators** (`==`, `!=`)  
- **Bitwise AND, XOR, OR** (`&`, `^`, `|`)  
- **Logical AND, OR** (`&&`, `||`)  
- **Conditional operator** (`?:`)  
- **Assignment operators** (`=`, `+=`, `-=`, etc.) have **right-to-left** associativity  
- **Comma operator** has the lowest precedence  

**Example:**  
```cpp
int x = 10 + 2 * 3;   // Multiplication runs first → x = 16
