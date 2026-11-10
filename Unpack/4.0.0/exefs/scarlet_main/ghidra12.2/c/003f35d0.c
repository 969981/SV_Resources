/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f35d0; name: FUN_003f35d0
 */


long * FUN_003f35d0(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00452c30(0x90,"external/openssl/crypto/cmac/cmac.c",0x32);
  if (plVar1 == (long *)0x0) {
    FUN_004806c0(0xf,0x78,0x41,"external/openssl/crypto/cmac/cmac.c",0x33);
    return (long *)0x0;
  }
  lVar2 = FUN_00439de0();
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    FUN_00452f80(plVar1,"external/openssl/crypto/cmac/cmac.c",0x38);
    return (long *)0x0;
  }
  *(undefined4 *)(plVar1 + 0x11) = 0xffffffff;
  return plVar1;
}


