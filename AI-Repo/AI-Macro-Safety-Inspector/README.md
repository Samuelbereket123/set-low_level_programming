# AI Macro Safety Inspector & Conditional Code Generator

**Author:** Samuel Bereket  
**Task:** Managing C Preprocessor Pitfalls Using AI Co-Pilots  
**Directory Location:** `AI-Repo/AI-Macro-Safety-Inspector/`

---

## 📂 Directory Structure

* **`unsafe_macro.h`**: Initial, flawed macro demonstrating raw text-substitution vulnerabilities (Operator Precedence failures and double-evaluation side effects).
* **`math_utils.h`**: The robust, production-ready framework generated with AI instructions. It features:
    1. Standard `#ifndef` header double-inclusion guards.
    2. A conditional compilation toggle (`MATH_DEBUG`) mapping runtime inputs/outputs to `stderr`.
    3. A macro safety fallback swapping to a type-safe `static inline` function on non-GNU/Clang standard compilers.
* **`README.md`**: Directory overview and structural layout mapping.

---

## 🛠️ Compilation and Behavior Guide

### Production Mode (Silent, Safe Inline Execution)
When compiled normally or through standard optimization paths without explicitly enabling flags, it executes cleanly with no console spam:
```c
#include "math_utils.h"
int result = MULTIPLY(2 + 3, 4 + 5); // Correctly evaluates to 45 via proper separation containment
