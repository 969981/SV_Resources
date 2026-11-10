/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00300a20; name: FUN_00300a20
 */


undefined8 FUN_00300a20(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    return 2;
  }
  uVar1 = 2;
  if ((param_3 != 0) && (*param_1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00300a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar1 = 6;
  }
  return uVar1;
}


