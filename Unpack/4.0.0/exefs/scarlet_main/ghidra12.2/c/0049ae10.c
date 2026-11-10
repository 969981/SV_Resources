/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049ae10; name: FUN_0049ae10
 */


undefined4 FUN_0049ae10(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  char *__s;
  size_t sVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  lVar2 = FUN_003e1230(param_2,0);
  if ((lVar2 == 0) || (__s = (char *)FUN_0049ab10(lVar2), __s == (char *)0x0)) {
    FUN_004806c0(0x22,0x78,0x41,"external/openssl/crypto/x509v3/v3_utl.c",0xbe);
    FUN_003eb520(lVar2);
    return 0;
  }
  FUN_003eb520(lVar2);
  sVar3 = strlen(__s);
  uVar1 = FUN_0049a850(param_1,__s,sVar3,param_3);
  FUN_00452f80(__s,"external/openssl/crypto/x509v3/v3_utl.c",0x103);
  return uVar1;
}


