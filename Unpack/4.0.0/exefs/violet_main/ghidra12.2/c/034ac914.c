/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ac914; name: FUN_034ac914
 */


void FUN_034ac914(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  MutexType *pMVar8;
  ulong uVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_047e6f28;
  if (*(int *)(param_2 + 0x10) == 0) {
    return;
  }
  uVar9 = 0;
LAB_034ac948:
  plVar1 = (long *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10);
  lVar7 = *(long *)(param_2 + 8);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  uVar3 = *(uint *)(lVar7 + uVar9 * 8);
  if (uVar3 != 0) {
    lVar10 = *(long *)puVar5;
    if (*(char *)(lVar7 + uVar9 * 8 + 5) == '\0') {
      pMVar8 = (MutexType *)(lVar10 + 0x268);
      nn::os::LockMutex(pMVar8);
      uVar2 = *(uint *)(lVar10 + 0x290);
      if (uVar2 == 0) goto LAB_034aca0c;
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar3 / uVar2;
      }
      for (lVar7 = *(long *)(*(long *)(lVar10 + 0x288) + (ulong)(uVar3 - uVar4 * uVar2) * 8);
          lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
        if (*(uint *)(lVar7 + 0x10) == uVar3) goto LAB_034aca14;
      }
    }
    else {
      pMVar8 = (MutexType *)(lVar10 + 0x230);
      nn::os::LockMutex(pMVar8);
      uVar2 = *(uint *)(lVar10 + 600);
      if (uVar2 == 0) {
LAB_034aca0c:
        lVar7 = 0;
      }
      else {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        for (lVar7 = *(long *)(*(long *)(lVar10 + 0x250) + (ulong)(uVar3 - uVar4 * uVar2) * 8);
            lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
          if (*(uint *)(lVar7 + 0x10) == uVar3) goto LAB_034aca14;
        }
      }
    }
    goto LAB_034aca20;
  }
  plVar6 = (long *)*plVar1;
  *plVar1 = 0;
  goto joined_r0x034aca30;
LAB_034aca14:
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
LAB_034aca20:
  nn::os::UnlockMutex(pMVar8);
  plVar6 = (long *)*plVar1;
  *plVar1 = lVar7;
joined_r0x034aca30:
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  *(undefined2 *)(plVar1 + 1) = 0;
  uVar9 = uVar9 + 1;
  if (*(uint *)(param_2 + 0x10) <= uVar9) {
    return;
  }
  goto LAB_034ac948;
}


