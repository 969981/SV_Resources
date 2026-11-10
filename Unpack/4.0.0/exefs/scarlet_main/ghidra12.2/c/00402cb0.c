/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00402cb0; name: FUN_00402cb0
 */


long FUN_00402cb0(long *param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    FUN_004806c0(0x25,0x6c,0x43,"external/openssl/crypto/dso/dso_lib.c",0xb2);
    return 0;
  }
  if (*(code **)(*param_1 + 0x18) == (code *)0x0) {
    FUN_004806c0(0x25,0x6c,0x6c,"external/openssl/crypto/dso/dso_lib.c",0xb6);
    return 0;
  }
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    FUN_004806c0(0x25,0x6c,0x6a,"external/openssl/crypto/dso/dso_lib.c",0xba);
    return 0;
  }
  return lVar1;
}


