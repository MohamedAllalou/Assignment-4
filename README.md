# Assignment-4
University Registration Management system with cool debug log to test for memory leaks

Program Description
-------------------
Students can enroll into ythe universty. They may register into various course offerings. The courses must fit into their schedules. THey can be deregistered from courses. They can be expelled from the university. Grades are stored in a student record. Students may not register in courses they have taken and passed. Courses currently enrolled have a grade of I. Alot of rules and stuff but basically it manages a university at a very basic level

Notes
-----
The main.cpp driver program is not fully integrated into the database manager object. As thus, so far you can only register a student into the university. As with the majority of our school projects, we were not graded at all on our main driver program, so thats why we did not finish integrating it as the professor probably used test cases.

Nonetheless, the real gem of this is the debug log (press 7 on the main menu). You can clear it, register a student, then print it and see the engine at work. Additionally, you can run the program and read the logged events from our pre-set test cases. This greatly helped us to avoid memory leakage and dangling pointers in our programs lifetime.
