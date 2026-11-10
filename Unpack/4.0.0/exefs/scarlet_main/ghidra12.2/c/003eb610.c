/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003eb610; name: FUN_003eb610
 */


long FUN_003eb610(void)

{
  long lVar1;
  
  lVar1 = FUN_00452ce0(0x18,"external/openssl/crypto/bn/bn_lib.c",0xf6);
  if (lVar1 == 0) {
    FUN_004806c0(3,0x71,0x41,"external/openssl/crypto/bn/bn_lib.c",0xf7);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 9;
  return lVar1;
}


