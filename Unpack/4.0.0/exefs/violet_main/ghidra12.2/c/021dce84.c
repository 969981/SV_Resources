/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021dce84; name: FUN_021dce84
 */


void FUN_021dce84(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + (long)param_2 * 0x20 + 0x120);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x021dce9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return;
}


