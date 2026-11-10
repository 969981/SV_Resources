/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0200b034; name: FUN_0200b034
 */


void FUN_0200b034(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined2 *)(*(long *)(param_1 + 0x78) + 0x4ac) = 0x101;
  }
  return;
}


