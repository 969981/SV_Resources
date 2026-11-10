/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fc220; name: FUN_002fc220
 */


void FUN_002fc220(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002fc234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


