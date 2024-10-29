// operator precedence
#include<bits/stdc++.h>
using namespace std;

int main(){
	cout << 7/2.0 << endl;
	cout << 7/2 << endl;
	cout << 7/2*3;
	cout <<"\n"<<3*7/2;
	//not same result of 7th and 8th because order and associavity precedence 
    /*
    In C++, operator precedence determines the order in which operators are evaluated in expressions, while associativity determines the order in which operators of the same precedence level are evaluated. Here’s a summary of operator precedence and associativity:

### Operator Precedence and Associativity in C++

1. **Postfix Operators**
   - Operators: `()`, `[]`, `->`, `.`, `++`, `--`
   - Associativity: Left to Right

2. **Unary Operators**
   - Operators: `++`, `--` (prefix), `+`, `-`, `!`, `~`, `*` (dereference), `&` (address of), `sizeof`
   - Associativity: Right to Left

3. **Multiplicative Operators**
   - Operators: `*`, `/`, `%`
   - Associativity: Left to Right

4. **Additive Operators**
   - Operators: `+`, `-`
   - Associativity: Left to Right

5. **Shift Operators**
   - Operators: `<<`, `>>`
   - Associativity: Left to Right

6. **Relational Operators**
   - Operators: `<`, `>`, `<=`, `>=`
   - Associativity: Left to Right

7. **Equality Operators**
   - Operators: `==`, `!=`
   - Associativity: Left to Right

8. **Bitwise AND**
   - Operators: `&`
   - Associativity: Left to Right

9. **Bitwise XOR**
   - Operators: `^`
   - Associativity: Left to Right

10. **Bitwise OR**
    - Operators: `|`
    - Associativity: Left to Right

11. **Logical AND**
    - Operators: `&&`
    - Associativity: Left to Right

12. **Logical OR**
    - Operators: `||`
    - Associativity: Left to Right

13. **Conditional Operator**
    - Operator: `? :`
    - Associativity: Right to Left

14. **Assignment Operators**
    - Operators: `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `^=`, `|=`
    - Associativity: Right to Left

15. **Comma Operator**
    - Operator: `,`
    - Associativity: Left to Right

### Example

In an expression like `a + b * c`, the multiplication will be performed first due to higher precedence, resulting in `a + (b * c)`. If you had `a = 5, b = 3, c = 2`, it would be evaluated as `5 + (3 * 2)`, resulting in `11`.

### Summary

- Higher precedence means an operator is applied first.
- Associativity determines the order of evaluation for operators of the same precedence level.

If you have any specific examples or questions about a certain operator, feel free to ask!     
    */

}
