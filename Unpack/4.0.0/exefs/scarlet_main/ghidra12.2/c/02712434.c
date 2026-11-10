/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02712434; name: FUN_02712434
 */


void FUN_02712434(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)param_1[6];
  while (plVar1 != (long *)0x0) {
    plVar5 = (long *)*plVar1;
    if ((long *)plVar1[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[5] + 0x20))();
    }
    plVar4 = (long *)param_1[7];
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
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_011ea9e8(param_1 + 1);
  return;
}


