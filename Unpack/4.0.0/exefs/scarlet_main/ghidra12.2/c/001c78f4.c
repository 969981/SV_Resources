/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c78f4; name: FUN_001c78f4
 */


undefined4 FUN_001c78f4(long *param_1,long *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar9 = *param_1;
  lVar8 = param_1[0xa6];
  *param_2 = 0;
  if (lVar8 == 0) {
    return 6;
  }
  nnosLockMutex(*(undefined8 *)(lVar8 + 0x18));
  iVar2 = *(int *)(lVar8 + 0x20);
  nnosUnlockMutex(*(undefined8 *)(lVar8 + 0x18));
  if (iVar2 != 0) {
    lVar8 = param_1[0xa6];
    FUN_001c8db4(param_1,*(undefined4 *)(lVar8 + 0x34),*(undefined8 *)(lVar8 + 0x38));
    *(undefined8 *)(lVar8 + 0x38) = 0;
    if (param_1[0xa4] != 0) {
      FUN_001c7744(param_1 + 0xa2);
      *param_2 = param_1[0xa4];
      return 0;
    }
    bVar4 = (*(uint *)((long)param_1 + 0x3fc) & 0x20) != 0;
    pcVar1 = "host";
    if (bVar4) {
      pcVar1 = "proxy";
    }
    uVar7 = 5;
    if (!bVar4) {
      uVar7 = 6;
    }
    FUN_001db9c8(*param_1,"Could not resolve %s: %s",pcVar1,param_1[0xa2]);
    FUN_001c7744(param_1 + 0xa2);
    return uVar7;
  }
  auVar10 = FUN_001e0dfc();
  uVar5 = FUN_001e0e28(auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(lVar9 + 0x1008),
                       *(undefined8 *)(lVar9 + 0x1010));
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  if (*(int *)(lVar8 + 8) == 0) {
    uVar6 = 1;
  }
  else {
    uVar3 = *(int *)(lVar8 + 8) << (*(long *)(lVar8 + 0x10) <= (long)(ulong)uVar5);
    uVar6 = 0xfa;
    if (uVar3 < 0xfb) {
      uVar6 = uVar3;
    }
    if (uVar3 < 0xfb && (long)(ulong)uVar5 < *(long *)(lVar8 + 0x10)) goto LAB_001c7a10;
  }
  *(uint *)(lVar8 + 8) = uVar6;
LAB_001c7a10:
  *(ulong *)(lVar8 + 0x10) = (ulong)(uVar6 + uVar5);
  FUN_001cea34(*param_1,uVar6,1);
  return 0;
}


