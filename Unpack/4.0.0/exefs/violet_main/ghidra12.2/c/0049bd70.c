/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049bd70; name: FUN_0049bd70
 */


long FUN_0049bd70(char *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [32];
  
  pcVar3 = strchr(param_1,0x2f);
  if ((pcVar3 != (char *)0x0) &&
     (lVar4 = FUN_0045abd0(param_1,"external/openssl/crypto/x509v3/v3_utl.c",0x405), lVar4 != 0)) {
    pcVar3[lVar4 - (long)param_1] = '\0';
    iVar1 = FUN_0049bb70(auStack_50,lVar4);
    if (iVar1 == 0) {
      lVar5 = 0;
    }
    else {
      iVar2 = FUN_0049bb70(auStack_50 + iVar1,pcVar3 + (lVar4 - (long)param_1) + 1);
      FUN_00452f80(lVar4,"external/openssl/crypto/x509v3/v3_utl.c",0x412);
      lVar4 = 0;
      if (iVar2 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (iVar1 == iVar2) {
          lVar5 = FUN_003e4ff0();
          if ((lVar5 != 0) && (iVar1 = thunk_FUN_003df070(lVar5,auStack_50,iVar1 << 1), iVar1 != 0))
          {
            return lVar5;
          }
          lVar4 = 0;
        }
      }
    }
    FUN_00452f80(lVar4,"external/openssl/crypto/x509v3/v3_utl.c",0x421);
    thunk_FUN_003df2e0(lVar5);
  }
  return 0;
}


