/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188bc48; name: FUN_0188bc48
 */


undefined1 FUN_0188bc48(long param_1)

{
  if (*(byte *)(param_1 + 0x3a) == 0) {
    return 6;
  }
  return *(undefined1 *)(param_1 + (ulong)(*(byte *)(param_1 + 0x3a) - 1) + 0x1c);
}


