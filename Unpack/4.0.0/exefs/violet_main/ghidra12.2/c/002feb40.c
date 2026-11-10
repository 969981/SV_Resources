/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


