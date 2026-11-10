/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0274c798; name: FUN_0274c798
 */


void FUN_0274c798(long param_1)

{
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0274c7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e1f80)();
  return;
}


