/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168126c; name: FUN_0168126c
 */


undefined8 FUN_0168126c(long param_1,uint param_2)

{
  if (param_2 < *(byte *)(param_1 + 0xa6)) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 8);
  }
  return 0;
}


