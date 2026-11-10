/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347d9fc; name: FUN_0347d9fc
 */


void FUN_0347d9fc(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  MutexType *pMVar5;
  long lVar6;
  
  *param_1 = 0;
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar4 + (ulong)param_3 * 8 + 4);
  if (uVar1 == 0) {
    lVar4 = 0;
    goto LAB_0347dae8;
  }
  lVar6 = *(long *)PTR_DAT_047e6f28;
  if ((*(byte *)(lVar4 + (ulong)param_3 * 8 + 9) & 1) == 0) {
    pMVar5 = (MutexType *)(lVar6 + 0x268);
    nn::os::LockMutex(pMVar5);
    uVar2 = *(uint *)(lVar6 + 0x290);
    if (uVar2 == 0) {
LAB_0347dacc:
      lVar4 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar4 = *(long *)(*(long *)(lVar6 + 0x288) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
        if (*(uint *)(lVar4 + 0x10) == uVar1) goto LAB_0347dad4;
      }
    }
  }
  else {
    pMVar5 = (MutexType *)(lVar6 + 0x230);
    nn::os::LockMutex(pMVar5);
    uVar2 = *(uint *)(lVar6 + 600);
    if (uVar2 == 0) goto LAB_0347dacc;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    for (lVar4 = *(long *)(*(long *)(lVar6 + 0x250) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
        lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
      if (*(uint *)(lVar4 + 0x10) == uVar1) goto LAB_0347dad4;
    }
  }
LAB_0347dae0:
  nn::os::UnlockMutex(pMVar5);
LAB_0347dae8:
  *param_1 = lVar4;
  return;
LAB_0347dad4:
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  goto LAB_0347dae0;
}


