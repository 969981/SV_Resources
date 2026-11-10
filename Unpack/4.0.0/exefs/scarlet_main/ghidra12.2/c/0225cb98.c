/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0225cb98; name: FUN_0225cb98
 */


void FUN_0225cb98(undefined8 *param_1)

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
  plVar4 = (long *)param_1[1];
  if (plVar4 == plVar5) {
    plVar4 = plVar5;
  }
  else {
    do {
      plVar4 = plVar4 + -1;
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x20))();
      }
    } while (plVar5 != plVar4);
    plVar4 = (long *)*param_1;
  }
  param_1[1] = plVar5;
  lVar1 = param_1[2];
  plVar5 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar5,plVar4,lVar1 - (long)plVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0225cc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,lVar1 - (long)plVar4,8);
  return;
}


