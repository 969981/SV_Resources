/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e9dd4; name: FUN_011e9dd4
 */


void FUN_011e9dd4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  FUN_0108aea4(param_1 + 0x150,*(undefined8 *)(param_1 + 0x180));
  lVar3 = *(long *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (lVar3 != 0) {
    FUN_02712690(param_1 + 0x158);
  }
  plVar1 = (long *)*(long *)(param_1 + 0x118);
  while (plVar1 != (long *)0x0) {
    plVar5 = (long *)*plVar1;
    if ((long *)plVar1[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[5] + 0x20))();
    }
    plVar4 = *(long **)(param_1 + 0x120);
    uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar1,0x40,0x10);
      plVar1 = plVar5;
    }
    else {
      FUN_00c48fe8(plVar4,plVar1,0x40,0x10);
      plVar1 = plVar5;
    }
  }
  lVar3 = *(long *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (lVar3 != 0) {
    FUN_02712718(param_1 + 0xf0);
  }
  plVar1 = (long *)*(long *)(param_1 + 0xb0);
  while (plVar1 != (long *)0x0) {
    plVar5 = (long *)*plVar1;
    if ((long *)plVar1[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[5] + 0x20))();
    }
    plVar4 = *(long **)(param_1 + 0xb8);
    uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar1,0x38,8);
      plVar1 = plVar5;
    }
    else {
      FUN_00c48fe8(plVar4,plVar1,0x38,8);
      plVar1 = plVar5;
    }
  }
  lVar3 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lVar3 != 0) {
    FUN_027127a0(param_1 + 0x88);
  }
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
  }
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011e9ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  return;
}


