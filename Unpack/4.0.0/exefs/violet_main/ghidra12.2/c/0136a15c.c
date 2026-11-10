/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0136a15c; name: FUN_0136a15c
 */


undefined8 FUN_0136a15c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x50);
  uVar2 = *(ulong *)(param_1 + 0x58);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0 &&
      (uVar2 == 0 || (uVar2 & 1) == 0 && UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return 1;
  }
  plVar1 = (long *)(param_1 + ((long)uVar2 >> 1));
  if ((uVar2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0136a1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x60);
  return uVar3;
}


