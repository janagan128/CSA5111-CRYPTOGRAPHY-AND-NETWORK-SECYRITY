CC=gcc
CFLAGS=-std=c11 -Wall -Wextra -O2 -Wno-unused-function
PLAIN=$(filter-out programs/17_des_decrypt.c programs/19_aes_cbc.c programs/33_des_encrypt_decrypt.c,$(wildcard programs/*.c))
all:
	@for f in $(PLAIN); do n=$$(basename $$f .c); echo "Building $$n"; $(CC) $(CFLAGS) $$f -lm -o $$n || exit 1; done
	@echo "Core programs built. OpenSSL programs: run 'make openssl'."
openssl:
	$(CC) $(CFLAGS) programs/17_des_decrypt.c -lcrypto -o 17_des_decrypt
	$(CC) $(CFLAGS) programs/19_aes_cbc.c -lcrypto -o 19_aes_cbc
	$(CC) $(CFLAGS) programs/33_des_encrypt_decrypt.c -lcrypto -o 33_des_encrypt_decrypt
clean:
	rm -f 0[1-9]_* 1[0-9]_* 2[0-9]_* 3[0-9]_* 40_*
