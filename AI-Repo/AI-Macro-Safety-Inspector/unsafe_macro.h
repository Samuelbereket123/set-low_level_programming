/**
 * @file unsafe_macro.h
 * @author Samuel Bereket
 * @brief Initial, flawed implementation of an arithmetic macro.
 * * CRITICAL FLAWS:
 * 1. Lack of argument parentheses causes operator precedence breakdown.
 * e.g., MULTIPLY(2 + 3, 4 + 5) expands to 2 + 3 * 4 + 5 = 19 (Expected: 45)
 * 2. Lack of surrounding parentheses breaks when used in larger expressions.
 * 3. Vulnerable to side effects if arguments like x++ are passed.
 */

#ifndef UNSAFE_MACRO_H
#define UNSAFE_MACRO_H

#define MULTIPLY(a, b) a * b

#endif // UNSAFE_MACRO_H
