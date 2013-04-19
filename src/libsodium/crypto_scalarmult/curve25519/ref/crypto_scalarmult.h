#ifndef crypto_scalarmult_H
#define crypto_scalarmult_H

#include "crypto_scalarmult_curve25519.h"

#define crypto_scalarmult_curve25519_implementation_name \
    crypto_scalarmult_curve25519_ref_implementation_name

#define crypto_scalarmult crypto_scalarmult_curve25519_ref
#define crypto_scalarmult_base crypto_scalarmult_curve25519_ref_base

#endif
