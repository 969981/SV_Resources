/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0047d290; name: FUN_0047d290
 */


undefined8 FUN_0047d290(long param_1,char *param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined1 auStack_54 [20];
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == (char *)0x0) {
    return 0;
  }
  lVar3 = FUN_0042bbc0();
  if (lVar3 == 0) {
    return 0;
  }
  iVar2 = FUN_003eb2b0(param_1);
  uVar1 = iVar2 + 0xe;
  if (-1 < (int)(iVar2 + 7U)) {
    uVar1 = iVar2 + 7U;
  }
  lVar4 = FUN_00452c30((long)((ulong)uVar1 << 0x20) >> 0x23,"external/openssl/crypto/srp/srp_lib.c",
                       0x85);
  if (lVar4 != 0) {
    uVar5 = FUN_0043c280();
    iVar2 = FUN_0042bc40(lVar3,uVar5,0);
    if (iVar2 != 0) {
      sVar6 = strlen(param_2);
      iVar2 = FUN_0042bd60(lVar3,param_2,sVar6);
      if ((iVar2 != 0) && (iVar2 = FUN_0042bd60(lVar3,&DAT_03c9c9c5,1), iVar2 != 0)) {
        sVar6 = strlen(param_3);
        iVar2 = FUN_0042bd60(lVar3,param_3,sVar6);
        if ((iVar2 != 0) && (iVar2 = FUN_0042be20(lVar3,auStack_54,0), iVar2 != 0)) {
          uVar5 = FUN_0043c280();
          iVar2 = FUN_0042bc40(lVar3,uVar5,0);
          if ((iVar2 != 0) && (iVar2 = FUN_003ebe40(param_1,lVar4), -1 < iVar2)) {
            iVar2 = FUN_003eb2b0(param_1);
            uVar1 = iVar2 + 0xe;
            if (-1 < (int)(iVar2 + 7U)) {
              uVar1 = iVar2 + 7U;
            }
            iVar2 = FUN_0042bd60(lVar3,lVar4,(long)((ulong)uVar1 << 0x20) >> 0x23);
            if (((iVar2 != 0) && (iVar2 = FUN_0042bd60(lVar3,auStack_54,0x14), iVar2 != 0)) &&
               (iVar2 = FUN_0042be20(lVar3,auStack_54,0), iVar2 != 0)) {
              uVar5 = FUN_003eba50(auStack_54,0x14,0);
              goto LAB_0047d414;
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_0047d414:
  FUN_00452f80(lVar4,"external/openssl/crypto/srp/srp_lib.c",0x9b);
  FUN_0042bbe0(lVar3);
  return uVar5;
}


