/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292cf30; name: FUN_0292cf30
 */


void FUN_0292cf30(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0124c070();
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    *param_3 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0292cf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3,param_2);
  return;
}


