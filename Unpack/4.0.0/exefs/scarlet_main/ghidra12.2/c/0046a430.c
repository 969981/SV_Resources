/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0046a430; name: FUN_0046a430
 */


long * FUN_0046a430(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00452ce0(0x28,"external/openssl/crypto/rsa/rsa_mp.c",0x24);
  if (plVar1 == (long *)0x0) {
    FUN_004806c0(4,0xa6,0x41,"external/openssl/crypto/rsa/rsa_mp.c",0x25);
    return (long *)0x0;
  }
  lVar2 = FUN_003eb610();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_003eb610();
    plVar1[1] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_003eb610();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_003eb610();
        plVar1[3] = lVar2;
        if (lVar2 != 0) {
          return plVar1;
        }
      }
    }
  }
  FUN_003eb520(*plVar1);
  FUN_003eb520(plVar1[1]);
  FUN_003eb520(plVar1[2]);
  FUN_003eb520(plVar1[3]);
  FUN_00452f80(plVar1,"external/openssl/crypto/rsa/rsa_mp.c",0x38);
  return (long *)0x0;
}


