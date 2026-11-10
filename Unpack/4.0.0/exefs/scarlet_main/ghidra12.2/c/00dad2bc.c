/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dad2bc; name: FUN_00dad2bc
 */


void FUN_00dad2bc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  lVar5 = *(long *)(param_1 + 0x70);
  if (lVar5 != 0) {
    plVar1 = *(long **)(param_1 + 0x88);
    lVar4 = *(long *)(param_1 + 0x80) << 3;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,1);
    }
    else {
      FUN_00c48fe8(plVar1,lVar5,lVar4,1);
    }
  }
  plVar1 = (long *)*(long *)(param_1 + 0x38);
  while (plVar1 != (long *)0x0) {
    plVar7 = (long *)*plVar1;
    if ((long *)plVar1[10] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[10] + 0x20))();
    }
    if ((long *)plVar1[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[5] + 0x20))();
    }
    plVar6 = *(long **)(param_1 + 0x40);
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar1,0x58,8);
      plVar1 = plVar7;
    }
    else {
      FUN_00c48fe8(plVar6,plVar1,0x58,8);
      plVar1 = plVar7;
    }
  }
  lVar5 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar5 == 0) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x10) << 3;
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00dad3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar4,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar5,lVar4,8);
  return;
}


