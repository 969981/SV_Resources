/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116cc38; name: FUN_0116cc38
 */


void FUN_0116cc38(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)param_1[0x14];
  *param_1 = (long)(PTR_DAT_047e3168 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)*plVar4;
    if ((long *)plVar4[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[5] + 0x20))();
    }
    plVar5 = (long *)param_1[0x15];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar5,plVar4,0x38,8);
    }
    while (plVar3 != (long *)0x0) {
      plVar4 = (long *)*plVar3;
      if ((long *)plVar3[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[5] + 0x20))();
      }
      plVar5 = (long *)param_1[0x15];
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar3,0x38,8);
        plVar3 = plVar4;
      }
      else {
        FUN_00c48fe8(plVar5,plVar3,0x38,8);
        plVar3 = plVar4;
      }
    }
  }
  lVar2 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar2 != 0) {
    FUN_0116ceb0(param_1 + 0xf);
  }
  plVar4 = (long *)param_1[7];
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)*plVar4;
    if ((long *)plVar4[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[5] + 0x20))();
    }
    plVar5 = (long *)param_1[8];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar5,plVar4,0x38,8);
    }
    while (plVar3 != (long *)0x0) {
      plVar4 = (long *)*plVar3;
      if ((long *)plVar3[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar3[5] + 0x20))();
      }
      plVar5 = (long *)param_1[8];
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar3,0x38,8);
        plVar3 = plVar4;
      }
      else {
        FUN_00c48fe8(plVar5,plVar3,0x38,8);
        plVar3 = plVar4;
      }
    }
  }
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_0116ceb0(param_1 + 2);
  return;
}


