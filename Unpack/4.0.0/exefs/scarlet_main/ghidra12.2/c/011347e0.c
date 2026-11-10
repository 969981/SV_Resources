/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011347e0; name: FUN_011347e0
 */


void FUN_011347e0(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  *param_1 = &DAT_045d1dc8;
  param_1[4] = &PTR_LAB_045d1e00;
  FUN_01134a5c(param_1 + 0x1e,param_1[0x24]);
  lVar5 = param_1[0x1e];
  param_1[0x1e] = 0;
  if (lVar5 != 0) {
    lVar4 = param_1[0x1f];
    plVar1 = (long *)param_1[0x20];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar1,lVar5,lVar4 << 3,8);
    }
  }
  plVar1 = (long *)param_1[0x17];
  while (plVar1 != (long *)0x0) {
    plVar7 = (long *)*plVar1;
    if ((long *)plVar1[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[5] + 0x20))();
    }
    plVar6 = (long *)param_1[0x18];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x38,8);
      plVar1 = plVar7;
    }
    else {
      FUN_00c48fe8(plVar6,plVar1,0x38,8);
      plVar1 = plVar7;
    }
  }
  lVar5 = param_1[0x11];
  param_1[0x11] = 0;
  if (lVar5 != 0) {
    lVar4 = param_1[0x12];
    plVar1 = (long *)param_1[0x13];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar1,lVar5,lVar4 << 3,8);
    }
  }
  lVar5 = param_1[10];
  if (lVar5 != 0) {
    lVar4 = param_1[0xb];
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
      lVar4 = param_1[10];
    }
    lVar3 = param_1[0xc];
    plVar1 = (long *)param_1[0xd];
    param_1[0xb] = lVar5;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar3 - lVar4,8);
    }
    else {
      FUN_00c48fe8(plVar1,lVar4,lVar3 - lVar4,8);
    }
  }
  if ((long *)param_1[9] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011349b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[9] + 0x20))();
  return;
}


