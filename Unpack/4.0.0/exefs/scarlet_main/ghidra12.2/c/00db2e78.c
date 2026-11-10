/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db2e78; name: FUN_00db2e78
 */


void FUN_00db2e78(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar3 = param_1[1];
  lVar5 = param_1[2];
  while (lVar5 != lVar3) {
    param_1[2] = lVar5 + -0x220;
    if (*(long **)(lVar5 + -0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + -0x20) + 0x20))();
    }
    if (*(long **)(lVar5 + -0x40) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + -0x40) + 0x20))();
    }
    if (*(long **)(lVar5 + -0x60) != (long *)0x0) {
      (**(code **)(**(long **)(lVar5 + -0x60) + 0x20))();
    }
    FUN_00db2234(lVar5 + -0x220);
    lVar5 = param_1[2];
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar5 = param_1[3];
  plVar4 = *(long **)param_1[4];
  uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00db2f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar5 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar4,lVar3,lVar5 - lVar3,8);
  return;
}


