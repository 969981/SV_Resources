/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347fe30; name: FUN_0347fe30
 */


int FUN_0347fe30(undefined8 *param_1)

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
  nn::os::LockMutex((MutexType *)(lVar7 + 0x268));
  iVar4 = *(int *)((long)param_1 + 0x14) + -1;
  *(int *)((long)param_1 + 0x14) = iVar4;
  if (iVar4 != 0) goto LAB_0347ff20;
  lVar11 = *(long *)puVar6;
  pMVar1 = (MutexType *)(lVar11 + 0x268);
  uVar2 = *(uint *)(param_1 + 2);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(lVar11 + 0x290);
  if (uVar3 == 0) {
LAB_0347fef0:
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar2 / uVar3;
    }
    plVar10 = (long *)(*(long *)(lVar11 + 0x288) + (ulong)(uVar2 - uVar5 * uVar3) * 8);
    lVar8 = *plVar10;
    if (lVar8 == 0) goto LAB_0347fef0;
    if (*(uint *)(lVar8 + 0x10) != uVar2) {
      do {
        lVar9 = lVar8;
        lVar8 = *(long *)(lVar9 + 8);
        if (lVar8 == 0) goto LAB_0347fee0;
      } while (*(uint *)(lVar8 + 0x10) != uVar2);
      plVar10 = (long *)(lVar9 + 8);
    }
    *plVar10 = *(long *)(lVar8 + 8);
    *(int *)(lVar11 + 0x298) = *(int *)(lVar11 + 0x298) + -1;
LAB_0347fee0:
    nn::os::UnlockMutex(pMVar1);
    if (param_1 == (undefined8 *)0x0) goto LAB_0347ff20;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2,param_1);
LAB_0347ff20:
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x268));
  return iVar4;
}


