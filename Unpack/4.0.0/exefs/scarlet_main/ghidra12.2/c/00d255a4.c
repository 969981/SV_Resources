/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d255a4; name: FUN_00d255a4
 */


void FUN_00d255a4(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    lVar4 = param_1[0xf];
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar1 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = param_1[0xe];
    }
    lVar3 = param_1[0x10];
    plVar1 = (long *)param_1[0x11];
    param_1[0xf] = lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar3 - lVar4,8);
        goto LAB_00d25640;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar3 - lVar4,8);
  }
LAB_00d25640:
  lVar5 = param_1[7];
  if (lVar5 != 0) {
    lVar4 = param_1[8];
    if (lVar4 == lVar5) {
      lVar4 = lVar5;
    }
    else {
      do {
        plVar1 = (long *)(lVar4 + -8);
        lVar4 = lVar4 + -0x20;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
        }
      } while (lVar5 != lVar4);
      lVar4 = param_1[7];
    }
    lVar3 = param_1[9];
    plVar1 = (long *)param_1[10];
    param_1[8] = lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar3 - lVar4,8);
        goto LAB_00d256c8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar3 - lVar4,8);
  }
LAB_00d256c8:
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
      plVar1 = (long *)(lVar4 + -8);
      lVar4 = lVar4 + -0x20;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    } while (lVar5 != lVar4);
    lVar4 = *param_1;
  }
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar4,lVar5 - lVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00d25768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5 - lVar4,8);
  return;
}


