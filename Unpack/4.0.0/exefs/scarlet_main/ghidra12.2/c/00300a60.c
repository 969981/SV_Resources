/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00300a60; name: FUN_00300a60
 */


undefined8 FUN_00300a60(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (undefined8 *)0x0) {
    return 2;
  }
  uVar1 = 2;
  if (((param_3 != 0) && (param_2 != 0)) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00300a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return uVar1;
    }
    uVar1 = 6;
  }
  return uVar1;
}


