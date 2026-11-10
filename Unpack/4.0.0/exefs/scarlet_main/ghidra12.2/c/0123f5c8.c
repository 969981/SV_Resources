/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123f5c8; name: FUN_0123f5c8
 */


undefined1 FUN_0123f5c8(long param_1,byte param_2)

{
  if (param_2 < 4) {
    return *(undefined1 *)(param_1 + (ulong)param_2 * 0x98 + 0x9e);
  }
  return 0;
}


