/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6fd4c; name: FUN_01e6fd4c
 */


undefined1 FUN_01e6fd4c(long param_1)

{
  if (*(long *)(param_1 + 0x40) == 0) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 1);
}


