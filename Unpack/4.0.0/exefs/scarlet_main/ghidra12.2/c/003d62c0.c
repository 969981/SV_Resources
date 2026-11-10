/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d62c0; name: FUN_003d62c0
 */


undefined ** FUN_003d62c0(ushort param_1)

{
  if (param_1 < 0x602) {
    if (param_1 < 0x401) {
      if (param_1 < 0x301) {
        if (param_1 == 0x201) {
          return &PTR_s_rsa_pkcs1_sha1_044a1ab8;
        }
        if (param_1 == 0x202) {
          return (undefined **)&DAT_044a1b80;
        }
        if (param_1 == 0x203) {
          return (undefined **)&DAT_044a1900;
        }
      }
      else {
        if (param_1 == 0x301) {
          return &PTR_s_rsa_pkcs1_sha224_044a1a90;
        }
        if (param_1 == 0x302) {
          return (undefined **)&DAT_044a1b58;
        }
        if (param_1 == 0x303) {
          return (undefined **)&DAT_044a18d8;
        }
      }
    }
    else if (param_1 < 0x501) {
      if (param_1 == 0x401) {
        return &PTR_s_rsa_pkcs1_sha256_044a1a18;
      }
      if (param_1 == 0x402) {
        return (undefined **)&DAT_044a1ae0;
      }
      if (param_1 == 0x403) {
        return &PTR_s_ecdsa_secp256r1_sha256_044a1810;
      }
    }
    else if (param_1 < 0x503) {
      if (param_1 == 0x501) {
        return &PTR_s_rsa_pkcs1_sha384_044a1a40;
      }
      if (param_1 == 0x502) {
        return (undefined **)&DAT_044a1b08;
      }
    }
    else {
      if (param_1 == 0x503) {
        return &PTR_s_ecdsa_secp384r1_sha384_044a1838;
      }
      if (param_1 == 0x601) {
        return &PTR_s_rsa_pkcs1_sha512_044a1a68;
      }
    }
  }
  else if (param_1 < 0xeded) {
    switch(param_1) {
    case 0x804:
      return &PTR_s_rsa_pss_rsae_sha256_044a1928;
    case 0x805:
      return &PTR_s_rsa_pss_rsae_sha384_044a1950;
    case 0x806:
      return &PTR_s_rsa_pss_rsae_sha512_044a1978;
    case 0x807:
      return &PTR_s_ed25519_044a1888;
    case 0x808:
      return &PTR_s_ed448_044a18b0;
    case 0x809:
      return &PTR_s_rsa_pss_pss_sha256_044a19a0;
    case 0x80a:
      return &PTR_s_rsa_pss_pss_sha384_044a19c8;
    case 0x80b:
      return &PTR_s_rsa_pss_pss_sha512_044a19f0;
    }
    if (param_1 == 0x602) {
      return (undefined **)&DAT_044a1b30;
    }
    if (param_1 == 0x603) {
      return &PTR_s_ecdsa_secp521r1_sha512_044a1860;
    }
  }
  else {
    if (param_1 == 0xeded) {
      return (undefined **)&DAT_044a1bf8;
    }
    if (param_1 == 0xeeee) {
      return (undefined **)&DAT_044a1ba8;
    }
    if (param_1 == 0xefef) {
      return (undefined **)&DAT_044a1bd0;
    }
  }
  return (undefined **)0x0;
}


