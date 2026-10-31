# Cryptography and Network Security – 15 C Practical Programs

This repository contains 15 separate C programs for classical cryptography practical exercises.

## Program list

1. Caesar cipher
2. Monoalphabetic substitution cipher
3. Playfair encryption (MONARCHY keyword)
4. Polyalphabetic substitution / Vigenere cipher
5. Affine Caesar cipher
6. Affine cipher frequency clue (B→E and U→T)
7. Simple substitution frequency analysis with user-provided mapping
8. Keyword-based monoalphabetic cipher (CIPHER)
9. PT-109 Playfair decryption demonstration
10. Playfair encryption using the given matrix
11. Playfair key-space calculation
12. Hill cipher encryption and decryption
13. Hill cipher known-plaintext key recovery
14. One-time-pad Vigenere example
15. Additive cipher frequency attack (top 10 shifts)

## Compile and run

With GCC on Windows:
```bash
gcc 01_caesar_cipher.c -o program.exe
program.exe
```

With GCC on Linux/macOS:
```bash
gcc 01_caesar_cipher.c -o program
./program
```
Replace the source filename to run another program. Program 11 uses `log2l`; compile it with the math library on Linux/macOS:
```bash
gcc 11_playfair_key_count.c -o program -lm
```

## Notes
- These are educational implementations of classical ciphers, not secure modern encryption.
- Program 7 reports letter frequencies and applies a mapping entered by the user; general monoalphabetic substitution is not reliably solved by a tiny frequency-only program.
- Program 9 uses the commonly cited key phrase `ROYAL NEW ZEALAND NAVY`; verify the exact key phrase and ciphertext transcription against your course handout.
- Program 11's effective-key estimate uses the simplified convention of dividing 25! by 25.
- Program 12 uses the key matrix [[9,4],[5,7]], strips spaces/punctuation, and pads an odd number of letters with X.
- Program 13 demonstrates key recovery from an invertible known-plaintext matrix.
- Program 15 ranks all 26 additive shifts with a simple English letter-frequency score; the ranking is approximate.
