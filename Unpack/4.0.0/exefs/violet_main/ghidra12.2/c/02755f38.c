/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02755f38; name: FUN_02755f38
 */


void FUN_02755f38(long param_1)

{
  if (*(long **)(param_1 + 0x48) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02755f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x40))();
  return;
}


