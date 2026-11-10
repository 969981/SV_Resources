/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008753d4; name: FUN_008753d4
 */


void FUN_008753d4(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x008753f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd8))();
  return;
}


