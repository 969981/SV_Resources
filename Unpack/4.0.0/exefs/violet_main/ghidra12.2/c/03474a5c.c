/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03474a5c; name: FUN_03474a5c
 */


void FUN_03474a5c(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  MutexType *pMVar6;
  long lVar7;
  
  plVar4 = (long *)*param_2;
  *param_2 = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  lVar5 = *(long *)(param_1 + 0xf8);
  if (lVar5 == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar5 + 4);
  if (uVar1 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_047e6f28;
  if (*(char *)(lVar5 + 9) == '\0') {
    pMVar6 = (MutexType *)(lVar7 + 0x268);
    nn::os::LockMutex(pMVar6);
    uVar2 = *(uint *)(lVar7 + 0x290);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar5 = *(long *)(*(long *)(lVar7 + 0x288) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        if (*(uint *)(lVar5 + 0x10) == uVar1) goto LAB_03474b3c;
      }
      goto LAB_03474b48;
    }
  }
  else {
    pMVar6 = (MutexType *)(lVar7 + 0x230);
    nn::os::LockMutex(pMVar6);
    uVar2 = *(uint *)(lVar7 + 600);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar5 = *(long *)(*(long *)(lVar7 + 0x250) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        if (*(uint *)(lVar5 + 0x10) == uVar1) goto LAB_03474b3c;
      }
      goto LAB_03474b48;
    }
  }
  lVar5 = 0;
LAB_03474b48:
  nn::os::UnlockMutex(pMVar6);
  plVar4 = (long *)*param_2;
  *param_2 = lVar5;
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03474b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))();
  return;
LAB_03474b3c:
  *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
  goto LAB_03474b48;
}


