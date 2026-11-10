/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123e15c; name: FUN_0123e15c
 */


undefined1 FUN_0123e15c(long param_1,byte param_2)

{
  if (param_2 < *(byte *)(param_1 + 0x1b)) {
    return *(undefined1 *)(param_1 + (ulong)param_2 + 0x10);
  }
  return 10;
}


