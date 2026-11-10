/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01139754; name: FUN_01139754
 */


void FUN_01139754(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)*(long *)(param_1 + 0x188);
  while (plVar1 != (long *)0x0) {
    plVar5 = (long *)*plVar1;
    if ((code *)plVar1[4] != (code *)0x0) {
      (*(code *)plVar1[4])(plVar1 + 6);
    }
    plVar4 = *(long **)(param_1 + 400);
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
  lVar3 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (lVar3 != 0) {
    FUN_0216f4fc(param_1 + 0x160);
  }
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x20))();
  }
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x20))();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x98);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0xb0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x011397cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x30);
  return;
}


