/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c8e250; name: FUN_00c8e250
 */


void FUN_00c8e250(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != lVar4) {
    param_1[2] = lVar1 + -0x10;
    lVar3 = lVar1 + -0x10;
    if (*(long **)(lVar1 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + -0x10) + 0x20))();
      lVar3 = param_1[2];
    }
    while (lVar3 != lVar4) {
      param_1[2] = lVar3 + -0x10;
      plVar5 = (long *)(lVar3 + -0x10);
      lVar3 = lVar3 + -0x10;
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x20))();
        lVar3 = param_1[2];
      }
    }
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar5 = *(long **)param_1[4];
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c8e304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar1 - lVar4,8);
    return;
  }
  FUN_00c48fe8(plVar5,lVar4,lVar1 - lVar4,8);
  return;
}


