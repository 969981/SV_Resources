/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e0040; name: FUN_003e0040
 */


long FUN_003e0040(void)

{
  long lVar1;
  
  lVar1 = FUN_00452ce0(0x28,"external/openssl/crypto/asn1/a_object.c",0x156);
  if (lVar1 == 0) {
    FUN_004806c0(0xd,0x7b,0x41,"external/openssl/crypto/asn1/a_object.c",0x158);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x20) = 1;
  return lVar1;
}


