/*
 * Copyright (C) 2009 Martin Willi
 * Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the Licenseor (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be usefulbut
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <crypto/crypto_tester.h>

/**
 * SHA-1 test vectors from "The Secure Hash Algorithm Validation System (SHAVS)"
 */
hasher_test_vector_t sha1_1 = {
	.alg = HASH_SHA1, .len = 1,
	.data	= "\x5e",
	.hash	= "\x5e\x6f\x80\xa3\x4a\x97\x98\xca\xfc\x6a\x5d\xb9\x6c\xc5\x7b\xa4"
			  "\xc4\xdb\x59\xc2"
};

hasher_test_vector_t sha1_2 = {
	.alg = HASH_SHA1, .len = 16,
	.data	= "\x9a\x7d\xfd\xf1\xec\xea\xd0\x6e\xd6\x46\xaa\x55\xfe\x75\x71\x46",
	.hash	= "\x82\xab\xff\x66\x05\xdb\xe1\xc1\x7d\xef\x12\xa3\x94\xfa\x22\xa8"
			  "\x2b\x54\x4a\x35"
};

hasher_test_vector_t sha1_3 = {
	.alg = HASH_SHA1, .len = 163,
	.data	= "\xf7\x8f\x92\x14\x1b\xcd\x17\x0a\xe8\x9b\x4f\xba\x15\xa1\xd5\x9f"
			  "\x3f\xd8\x4d\x22\x3c\x92\x51\xbd\xac\xbb\xae\x61\xd0\x5e\xd1\x15"
			  "\xa0\x6a\x7c\xe1\x17\xb7\xbe\xea\xd2\x44\x21\xde\xd9\xc3\x25\x92"
			  "\xbd\x57\xed\xea\xe3\x9c\x39\xfa\x1f\xe8\x94\x6a\x84\xd0\xcf\x1f"
			  "\x7b\xee\xad\x17\x13\xe2\xe0\x95\x98\x97\x34\x7f\x67\xc8\x0b\x04"
			  "\x00\xc2\x09\x81\x5d\x6b\x10\xa6\x83\x83\x6f\xd5\x56\x2a\x56\xca"
			  "\xb1\xa2\x8e\x81\xb6\x57\x66\x54\x63\x1c\xf1\x65\x66\xb8\x6e\x3b"
			  "\x33\xa1\x08\xb0\x53\x07\xc0\x0a\xff\x14\xa7\x68\xed\x73\x50\x60"
			  "\x6a\x0f\x85\xe6\xa9\x1d\x39\x6f\x5b\x5c\xbe\x57\x7f\x9b\x38\x80"
			  "\x7c\x7d\x52\x3d\x6d\x79\x2f\x6e\xbc\x24\xa4\xec\xf2\xb3\xa4\x27"
			  "\xcd\xbb\xfb",
	.hash	= "\xcb\x00\x82\xc8\xf1\x97\xd2\x60\x99\x1b\xa6\xa4\x60\xe7\x6e\x20"
			  "\x2b\xad\x27\xb3"
};

hasher_test_vector_t sha1_4 = {
	.alg = HASH_SHA1, .len = 62,
	.data	= "12345678901234567890123456789012345678901234567890123456789012",
	.hash	= "\xd8\xd0\x73\xb3\x83\x15\x66\x17\xc5\xca\xdf\x17\xf6\x15\x96\xa3"
			  "\x84\x0a\xfd\x8b"
};
