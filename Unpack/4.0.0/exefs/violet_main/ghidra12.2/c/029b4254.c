/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b4254; name: FUN_029b4254
 */


void FUN_029b4254(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar4 = plVar5;
  if ((long *)param_1[1] != plVar5) {
    plVar4 = (long *)param_1[1] + -2;
    if ((long *)*plVar4 != (long *)0x0) {
      (**(code **)(*(long *)*plVar4 + 0x20))();
    }
    while (plVar4 != plVar5) {
      plVar4 = plVar4 + -2;
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x20))();
      }
    }
    plVar4 = (long *)*param_1;
  }
  param_1[1] = plVar5;
  lVar1 = param_1[2];
  plVar5 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x029b42c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,lVar1 - (long)plVar4,8);
    return;
  }
  FUN_00c48fe8(plVar5,plVar4,lVar1 - (long)plVar4,8);
  return;
}


