# RC4-enryption-library
RC4 Encryption Library in C

Use 'make' to generate the library and run './test'

ARC4 is a stream cipher that generates a psuedorandom stream of bits and XORs it with the plaintext.

The vulnerabilities of this cipher include when the beginning of the output keystring isnt discarded and when nonrandom or similar keys are used.

This iteration tosses the first 500 million bits to offset this insecurity.