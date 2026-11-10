/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f49ca8; name: FUN_02f49ca8
 */


void FUN_02f49ca8(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  MutexType *pMVar8;
  long lVar9;
  
  pMVar8 = *(MutexType **)(*param_1 + 0x48);
  nn::os::LockMutex(pMVar8);
  lVar9 = *param_1;
  uVar1 = *(uint *)(lVar9 + 0x24);
  if (0 < (int)uVar1) {
    lVar6 = param_1[1];
    uVar3 = (int)lVar6 * -0x61c8864f;
    uVar2 = (int)((ulong)lVar6 >> 0x20) * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar3 = (uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar1;
    uVar4 = (ulong)uVar3;
    lVar7 = *(long *)(*(long *)(lVar9 + 0x18) + uVar4 * 0x10);
    while (lVar7 != -1) {
      if (lVar7 == lVar6) goto LAB_02f49d64;
      uVar3 = (int)uVar4 + 1U & uVar1;
      uVar4 = (ulong)uVar3;
      lVar7 = *(long *)(*(long *)(lVar9 + 0x18) + uVar4 * 0x10);
    }
  }
  uVar3 = uVar1 + 1;
LAB_02f49d64:
  if ((int)uVar3 <= (int)uVar1) {
    FUN_02ef6198();
    lVar9 = *param_1;
  }
  iVar5 = *(int *)(lVar9 + 0x30);
  lVar7 = (long)iVar5;
  if ((int)(*(uint *)(lVar9 + 0x34) & 0x7fffffff) <= iVar5) {
    FUN_02f49fa8(lVar9 + 0x28,lVar7 + 1);
    iVar5 = *(int *)(lVar9 + 0x30);
  }
  *(long **)(*(long *)(lVar9 + 0x28) + (long)iVar5 * 8) = param_1;
  *(int *)(lVar9 + 0x30) = (int)(lVar7 + 1);
  nn::os::UnlockMutex(pMVar8);
  lVar9 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_1[1] + 0x18) * 0x200 +
                      0x48))();
  FUN_02f49ee8(lVar9,param_1,FUN_02f49b6c,0);
  FUN_02f4a18c(lVar9 + 8,param_1,FUN_02f49ca8,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


