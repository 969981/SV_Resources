/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fbec0; name: FUN_003fbec0
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_003fbec0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  uint local_14;
  
  local_14 = 0;
  uVar2 = FUN_003fbff0(param_1,&local_14);
  uVar1 = local_14;
  if ((int)uVar2 != 0) {
    if ((local_14 >> 3 & 1) != 0) {
      FUN_004806c0(5,0x79,0x78,"external/openssl/crypto/dh/dh_check.c",0x51);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_004806c0(5,0x79,0x77,"external/openssl/crypto/dh/dh_check.c",0x53);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_004806c0(5,0x79,0x74,"external/openssl/crypto/dh/dh_check.c",0x55);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_004806c0(5,0x79,0x73,"external/openssl/crypto/dh/dh_check.c",0x57);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004806c0(5,0x79,0x79,"external/openssl/crypto/dh/dh_check.c",0x59);
    }
    if ((uVar1 & 1) != 0) {
      FUN_004806c0(5,0x79,0x75,"external/openssl/crypto/dh/dh_check.c",0x5b);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004806c0(5,0x79,0x76,"external/openssl/crypto/dh/dh_check.c",0x5d);
    }
    uVar2 = (ulong)(uVar1 == 0);
  }
  return uVar2;
}


