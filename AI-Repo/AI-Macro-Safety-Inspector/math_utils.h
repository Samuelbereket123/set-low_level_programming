/**
 * @file math_utils.h
 * @author Samuel Bereket
 * @brief Robust, conditionally compiled math utilities framework.
 * * Meets three distinct structural requirements:
 * 1. Standard #ifndef / #define header double-inclusion guards.
 * 2. Conditional MATH_DEBUG switch (1 = print inputs/outputs to stderr, 0/undefined = silent).
 * 3. Type-safe inline function fallback mechanism for non-GCC/Clang compilers.
 */

#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <stdio.h>

// Requirement 2: Conditional MATH_DEBUG Mode Configuration
#if defined(MATH_DEBUG) && MATH_DEBUG == 1

    /* Debug Mode Enabled: Uses GCC Statement Expressions to evaluate 
       arguments exactly once into local variables, logging properties to stderr */
    #define MULTIPLY(a, b) ({ \
        __typeof__(a) _a = (a); \
        __typeof__(b) _b = (b); \
        __typeof__(a) _res = _a * _b; \
        fprintf(stderr, "[DEBUG] Preprocessor Multiplying: %d * %d = %d\n", (int)_a, (int)_b, (int)_res); \
        _res; \
    })

#else

    // Requirement 3: Fallback Mechanism (Production Mode / Compiler Agnostic)
    #if defined(__GNUC__) || defined(__clang__)
        
        /* Safe Production Macro: Uses GCC Statement Expressions to protect 
           against precedence issues and double-evaluation side effects. */
        #define MULTIPLY(a, b) ({ \
            __typeof__(a) _a = (a); \
            __typeof__(b) _b = (b); \
            _a * _b; \
        })
        
    #else
        
        /* Standard ISO C Fallback: Safe inline function to enforce scope 
           and type safety if GNU extensions are completely unavailable. */
        static inline int MULTIPLY(int a, int b) { \
            return a * b; \
        }
        
    #endif // Compiler check

#endif // MATH_DEBUG

#endif // MATH_UTILS_H
