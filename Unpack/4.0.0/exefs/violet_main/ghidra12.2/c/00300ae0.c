/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00300ae0; name: FUN_00300ae0
 */


void FUN_00300ae0(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00300aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


