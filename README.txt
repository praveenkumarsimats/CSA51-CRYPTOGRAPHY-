CRYPTography C PROGRAMS (Questions 16-40)
========================================
Each numbered .c file corresponds to the same-numbered question in the assignment.
Compile a file with:
    gcc -std=c11 -Wall -Wextra 16_frequency_substitution.c -o program
    ./program

Notes:
- These are educational demonstrations, not production cryptography.
- DES examples (17, 18, 33) focus on the DES key schedule / structure; DES is obsolete.
- Mode demonstrations use a small reversible toy block cipher where noted, so the mode
  behavior can be observed without external libraries. Do NOT use toy ciphers for security.
- Frequency-analysis programs use English letter-frequency scoring and are heuristic;
  monoalphabetic substitution cracking may need more advanced n-gram scoring for best results.
- Q29 follows the question's instruction to ignore permutation and tracks zero/nonzero lanes.
- Q30 and Q31 demonstrate the stated CBC-MAC and CMAC principles.
