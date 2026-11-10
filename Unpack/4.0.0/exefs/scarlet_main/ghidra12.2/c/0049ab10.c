/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049ab10; name: FUN_0049ab10
 */


long FUN_0049ab10(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  char *__s;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  
  iVar1 = FUN_003eb2b0();
  if (iVar1 < 0x80) {
    lVar2 = FUN_003fb490(param_1);
    return lVar2;
  }
  __s = (char *)FUN_003fb2f0(param_1);
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
    lVar2 = sVar3 + 3;
    lVar4 = FUN_00452c30(lVar2,"external/openssl/crypto/x509v3/v3_utl.c",0x94);
    if (lVar4 != 0) {
      if (*__s == '-') {
        FUN_0045ad70(lVar4,&DAT_03c6fa65,lVar2);
        pcVar5 = __s + 1;
      }
      else {
        FUN_0045ad70(lVar4,&DAT_03c54952,lVar2);
        pcVar5 = __s;
      }
      FUN_0045ade0(lVar4,pcVar5,lVar2);
      FUN_00452f80(__s,"external/openssl/crypto/x509v3/v3_utl.c",0xa3);
      return lVar4;
    }
    FUN_004806c0(0x22,0xa7,0x41,"external/openssl/crypto/x509v3/v3_utl.c",0x96);
    FUN_00452f80(__s,"external/openssl/crypto/x509v3/v3_utl.c",0x97);
  }
  return 0;
}


