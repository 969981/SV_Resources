/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ed55e0; name: FUN_00ed55e0
 */


void FUN_00ed55e0(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 0x20))();
  }
  lVar5 = param_1[7];
  if (lVar5 != 0) {
    lVar4 = param_1[8];
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar2 = (long *)(lVar4 + -0x10);
        lVar4 = lVar4 + -0x30;
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = param_1[7];
    }
    lVar1 = param_1[9];
    plVar2 = (long *)param_1[10];
    param_1[8] = lVar5;
    uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if ((uVar3 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar2,lVar4,lVar1 - lVar4,8);
        goto LAB_00ed5604;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar1 - lVar4,8);
  }
LAB_00ed5604:
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar4 = param_1[1];
  if (lVar4 == lVar5) {
    lVar4 = lVar5;
  }
  else {
    do {
      lVar4 = lVar4 + -0x70;
      FUN_01118d3c(param_1 + 3,lVar4);
    } while (lVar5 != lVar4);
    lVar4 = *param_1;
  }
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = lVar5;
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if ((uVar3 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar2,lVar4,lVar1 - lVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00ed5684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar1 - lVar4,8);
  return;
}


