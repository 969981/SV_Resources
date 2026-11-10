/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03474b84; name: FUN_03474b84
 */


void FUN_03474b84(long param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  MutexType *pMVar8;
  
  *param_3 = 0xffffffff;
  lVar5 = *(long *)(param_1 + 0xf8);
  if (lVar5 == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar5 + 4);
  lVar6 = *(long *)PTR_DAT_047e6f28;
  if (*(char *)(lVar5 + 9) == '\0') {
    pMVar8 = (MutexType *)(lVar6 + 0x268);
    nn::os::LockMutex(pMVar8);
    uVar2 = *(uint *)(lVar6 + 0x290);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (plVar7 = *(long **)(*(long *)(lVar6 + 0x288) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
        if (*(uint *)(plVar7 + 2) == uVar1) goto LAB_03474c50;
      }
      goto LAB_03474c5c;
    }
  }
  else {
    pMVar8 = (MutexType *)(lVar6 + 0x230);
    nn::os::LockMutex(pMVar8);
    uVar2 = *(uint *)(lVar6 + 600);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (plVar7 = *(long **)(*(long *)(lVar6 + 0x250) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
        if (*(uint *)(plVar7 + 2) == uVar1) goto LAB_03474c50;
      }
      goto LAB_03474c5c;
    }
  }
  plVar7 = (long *)0x0;
LAB_03474c5c:
  nn::os::UnlockMutex(pMVar8);
  if (plVar7 == (long *)0x0) {
    return;
  }
  if (param_2 < *(uint *)(plVar7 + 9)) {
    uVar4 = *(undefined4 *)(plVar7[8] + (ulong)param_2 * 4);
  }
  else {
    uVar4 = 0;
  }
  *param_3 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x03474cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7);
  return;
LAB_03474c50:
  *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
  goto LAB_03474c5c;
}


