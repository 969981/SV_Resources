/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002feb40; name: FUN_002feb40
 */


void FUN_002feb40(undefined8 *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 == (undefined8 *)0x0) || (iVar1 = FUN_0038dac0(param_1 + 1), iVar1 == 0)) ||
      ((undefined8 *)*param_1 == (undefined8 *)0x0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)*param_1, UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002feb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


