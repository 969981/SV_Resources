/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048bb70; name: FUN_0048bb70
 */


undefined8 FUN_0048bb70(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00452ce0(0x28,"external/openssl/crypto/x509/x_name.c",0x5c);
  if (plVar1 == (long *)0x0) {
    FUN_004806c0(0xd,0xab,0x41,"external/openssl/crypto/x509/x_name.c",0x69);
    return 0;
  }
  lVar2 = FUN_0047dcc0();
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_003f3110();
    plVar1[2] = lVar2;
    if (lVar2 != 0) {
      *(undefined4 *)(plVar1 + 1) = 1;
      *param_1 = (long)plVar1;
      return 1;
    }
  }
  FUN_004806c0(0xd,0xab,0x41,"external/openssl/crypto/x509/x_name.c",0x69);
  FUN_0047db00(*plVar1);
  FUN_00452f80(plVar1,"external/openssl/crypto/x509/x_name.c",0x6c);
  return 0;
}


