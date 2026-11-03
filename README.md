# Semester 1 C++ Practical Programs (sem1-cpp-exp)

This repository contains C++ practical lab experiments along with test cases and outputs focusing on edge-case scenarios for each program.

## Experiments Index

| Ex. No | Experiment Name | Focus Area & Concepts | Output File |
|:------:|:----------------|:----------------------|:------------|
| **1** | [Exp1_University_Management](Exp1_University_Management/) | Encapsulation, Constructors, Destructors | [Docx](Exp1_University_Management/university_management_output_and_testcases.docx) |
| **2** | [Exp2_Runtime_Polymorphism](Exp2_Runtime_Polymorphism/) | Abstract Classes, Pure Virtual Functions, Dynamic Binding | [Docx](Exp2_Runtime_Polymorphism/runtime_polymorphism_output_and_testcases.docx) |
| **3** | [Exp3_Matrix_Operator_Overloading](Exp3_Matrix_Operator_Overloading/) | Operator Overloading (`+`, `*`, `[]`, `<<`), Assertions | [Docx](Exp3_Matrix_Operator_Overloading/matrix_operator_overloading_output_and_testcases.docx) |
| **4** | [Exp4_Stack_Queue_Templates](Exp4_Stack_Queue_Templates/) | Class Templates, Custom vs STL Benchmarking | [Docx](Exp4_Stack_Queue_Templates/stack_queue_templates_output_and_testcases.docx) |
| **5** | [Exp5_Student_Grade_Analyzer](Exp5_Student_Grade_Analyzer/) | STL Algorithms (`sort`, `transform`, `find_if`, `accumulate`), Lambdas | [Docx](Exp5_Student_Grade_Analyzer/student_grade_analyzer_output_and_testcases.docx) |
| **6** | [Exp6_Smart_Pointers_RAII](Exp6_Smart_Pointers_RAII/) | RAII Pattern, `unique_ptr`, `shared_ptr`, Reference Counting | [Docx](Exp6_Smart_Pointers_RAII/smart_pointer_output_and_testcases.docx) |
| **7** | [Exp7_Bank_Account_Exceptions](Exp7_Bank_Account_Exceptions/) | Custom Exception Hierarchy, Exception Safety | [Docx](Exp7_Bank_Account_Exceptions/bank_account_exceptions_output_and_testcases.docx) |
| **8** | [Exp8_Move_Semantics_String](Exp8_Move_Semantics_String/) | Move Semantics, Move Constructor/Assignment, Perfect Forwarding | [Docx](Exp8_Move_Semantics_String/move_semantics_string_output_and_testcases.docx) |
| **9** | [Exp9_Design_Patterns_Notification](Exp9_Design_Patterns_Notification/) | Singleton, Factory, and Observer Design Patterns | [Docx](Exp9_Design_Patterns_Notification/notification_patterns_output_and_testcases.docx) |

## Edge Cases Tested (3 per experiment)

1. **University Management**: Negative roll numbers, maximum 32-bit signed integer boundary (`2147483647`), zero roll number with special/hyphenated names.
2. **Runtime Polymorphism**: Degenerate shapes with zero dimensions, fractional sub-unit measurements, large asymmetric proportions.
3. **Matrix Operator Overloading**: Null matrix multiplication (all zeroes), additive inverse matrices yielding zero sum, diagonal matrices with negative entries.
4. **Stack & Queue Templates**: Minimum boundary workload (1 element), medium boundary workload (5000 elements), maximum capacity limit (10000 elements).
5. **Student Grade Analyzer**: All marks below threshold (testing conditional branch for scores > 80), polar extremes (100 and 0), exact grade threshold (90 for Grade A).
6. **Smart Pointers RAII**: Zero usage (immediate RAII acquisition and destruction), single owner isolated lifecycle, high shared ownership count (6 owners).
7. **Bank Account Exceptions**: Zero deposit boundary check (`InvalidAmountException`), balance exact exhaustion followed by overdraft (`InsufficientFundsException`), negative withdrawal amount validation.
8. **Move Semantics & Perfect Forwarding**: Minimal single-character string, long complex payload with high iterations (350,000 runs), punctuation and symbols.
9. **Design Patterns Notification**: Zero subscribers event dispatch, unsupported subscriber type rejection by Factory, multi-channel broadcast (SMS + Email).
