/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010cc26c; name: FUN_010cc26c
 */


void FUN_010cc26c(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)*(long *)(param_1 + 0xb8);
  while (plVar1 != (long *)0x0) {
    plVar5 = (long *)*plVar1;
    if ((long *)plVar1[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[5] + 0x20))();
    }
    plVar4 = *(long **)(param_1 + 0xc0);
    uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar1,0x50,0x10);
      plVar1 = plVar5;
    }
    else {
      FUN_00c48fe8(plVar4,plVar1,0x50,0x10);
      plVar1 = plVar5;
    }
  }
  FUN_029b99a4(param_1 + 0x88);
  plVar1 = (long *)*(long *)(param_1 + 0x50);
  while (plVar1 != (long *)0x0) {
    plVar5 = (long *)*plVar1;
    if ((long *)plVar1[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[5] + 0x20))();
    }
    plVar4 = *(long **)(param_1 + 0x58);
    uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
    if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar1,0x40,8);
      plVar1 = plVar5;
    }
    else {
      FUN_00c48fe8(plVar4,plVar1,0x40,8);
      plVar1 = plVar5;
    }
  }
  FUN_029b9a44(param_1 + 0x20);
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010cc3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


