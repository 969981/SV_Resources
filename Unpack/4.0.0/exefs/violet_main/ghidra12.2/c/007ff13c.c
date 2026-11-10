/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ff13c; name: FUN_007ff13c
 */


void FUN_007ff13c(long param_1)

{
  FUN_0079b800();
  FUN_007fefb4(param_1);
  FUN_007ff16c(param_1);
                    /* WARNING: Could not recover jumptable at 0x007ff168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1318) + 0x20))();
  return;
}


