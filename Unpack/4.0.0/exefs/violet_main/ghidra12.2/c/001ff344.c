/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ff344; name: FUN_001ff344
 */


void FUN_001ff344(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x001ff36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001ff360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


