/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01582544; name: FUN_01582544
 */


bool FUN_01582544(long param_1,uint param_2)

{
  if ((int)param_2 < 0xe) {
    return *(int *)(param_1 + (ulong)param_2 * 4 + 0xa8) != 0;
  }
  return false;
}


