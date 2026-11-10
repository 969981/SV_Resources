/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034da11c; name: FUN_034da11c
 */


int FUN_034da11c(undefined8 *param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  puVar6 = PTR_DAT_047e6f28;
  lVar7 = *(long *)PTR_DAT_047e6f28;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x70));
  iVar4 = *(int *)((long)param_1 + 0x14) + -1;
  *(int *)((long)param_1 + 0x14) = iVar4;
  if (iVar4 != 0) goto LAB_034da20c;
  lVar11 = *(long *)puVar6;
  pMVar1 = (MutexType *)(lVar11 + 0x70);
  uVar2 = *(uint *)(param_1 + 2);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(lVar11 + 0x98);
  if (uVar3 == 0) {
LAB_034da1dc:
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar2 / uVar3;
    }
    plVar10 = (long *)(*(long *)(lVar11 + 0x90) + (ulong)(uVar2 - uVar5 * uVar3) * 8);
    lVar8 = *plVar10;
    if (lVar8 == 0) goto LAB_034da1dc;
    if (*(uint *)(lVar8 + 0x10) != uVar2) {
      do {
        lVar9 = lVar8;
        lVar8 = *(long *)(lVar9 + 8);
        if (lVar8 == 0) goto LAB_034da1cc;
      } while (*(uint *)(lVar8 + 0x10) != uVar2);
      plVar10 = (long *)(lVar9 + 8);
    }
    *plVar10 = *(long *)(lVar8 + 8);
    *(int *)(lVar11 + 0xa0) = *(int *)(lVar11 + 0xa0) + -1;
LAB_034da1cc:
    nn::os::UnlockMutex(pMVar1);
    if (param_1 == (undefined8 *)0x0) goto LAB_034da20c;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2,param_1);
LAB_034da20c:
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x70));
  return iVar4;
}


