/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024eca8; name: FUN_0024eca8
 */


void FUN_0024eca8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x70);
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (plVar1 == (long *)(param_1 + 0x50)) {
                    /* WARNING: Could not recover jumptable at 0x0024ecd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0024ecc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


