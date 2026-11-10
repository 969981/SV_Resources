/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03479488; name: FUN_03479488
 */


int FUN_03479488(undefined8 *param_1)

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
  nn::os::LockMutex((MutexType *)(lVar7 + 0x1f8));
  iVar4 = *(int *)((long)param_1 + 0x14) + -1;
  *(int *)((long)param_1 + 0x14) = iVar4;
  if (iVar4 != 0) goto LAB_03479578;
  lVar11 = *(long *)puVar6;
  pMVar1 = (MutexType *)(lVar11 + 0x1f8);
  uVar2 = *(uint *)(param_1 + 2);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(lVar11 + 0x220);
  if (uVar3 == 0) {
LAB_03479548:
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar2 / uVar3;
    }
    plVar10 = (long *)(*(long *)(lVar11 + 0x218) + (ulong)(uVar2 - uVar5 * uVar3) * 8);
    lVar8 = *plVar10;
    if (lVar8 == 0) goto LAB_03479548;
    if (*(uint *)(lVar8 + 0x10) != uVar2) {
      do {
        lVar9 = lVar8;
        lVar8 = *(long *)(lVar9 + 8);
        if (lVar8 == 0) goto LAB_03479538;
      } while (*(uint *)(lVar8 + 0x10) != uVar2);
      plVar10 = (long *)(lVar9 + 8);
    }
    *plVar10 = *(long *)(lVar8 + 8);
    *(int *)(lVar11 + 0x228) = *(int *)(lVar11 + 0x228) + -1;
LAB_03479538:
    nn::os::UnlockMutex(pMVar1);
    if (param_1 == (undefined8 *)0x0) goto LAB_03479578;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(1,param_1);
LAB_03479578:
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x1f8));
  return iVar4;
}


