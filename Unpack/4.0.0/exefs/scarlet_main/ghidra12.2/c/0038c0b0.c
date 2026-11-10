/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038c0b0; name: FUN_0038c0b0
 */


undefined8 FUN_0038c0b0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (long *)0x0) {
    return 2;
  }
  uVar1 = 2;
  if ((param_2 != (undefined8 *)0x0) && (*param_1 != 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    if (*(code **)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0038c0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)*param_1)(param_1);
      return uVar1;
    }
    uVar1 = 6;
  }
  return uVar1;
}


