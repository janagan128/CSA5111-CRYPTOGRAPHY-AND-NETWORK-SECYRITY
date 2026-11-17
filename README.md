# CSA5111 – Cryptography and Network Security (40 C Programs)

This repository contains 40 beginner-friendly lab programs mapped to the supplied question list.

## Run in GitHub Codespaces
1. Open this repository on GitHub.
2. Select **Code → Codespaces → Create codespace on main**.
3. In the terminal, run:
   `make`
4. Run a compiled program, for example:
   `./01_caesar`

Compile one program manually:
`gcc programs/01_caesar.c -o 01_caesar -lm`

## OpenSSL examples
Programs 17, 19 and 33 use OpenSSL. In the Codespace terminal install headers if needed:
`sudo apt update && sudo apt install -y libssl-dev`
Compile them individually:
- `gcc programs/17_des_decrypt.c -o 17_des_decrypt -lcrypto -Wno-deprecated-declarations`
- `gcc programs/19_aes_cbc.c -o 19_aes_cbc -lcrypto`
- `gcc programs/33_des_encrypt_decrypt.c -o 33_des_encrypt_decrypt -lcrypto -Wno-deprecated-declarations`

## Notes
- These are educational lab examples, not production cryptography.
- DES, S-DES, Caesar, affine, textbook RSA, and raw CBC-MAC are for learning only; do not use them to protect real information.
- The frequency-analysis programs produce approximate candidates. A simple letter-frequency mapping cannot reliably solve every substitution cipher.
- The Playfair and Hill examples use the worksheet's stated conventions. Playfair filler removal may need manual review.
- For question 18, the program prints the DES PC-1/PC-2 key schedule and the two 28-bit halves.
- For question 29, with permutation ignored, the capacity lanes remain zero because absorbed message blocks affect only the rate portion.
