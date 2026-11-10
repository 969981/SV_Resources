/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c8e52c; name: FUN_01c8e52c
 */


void FUN_01c8e52c(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  FUN_01ed9328(param_1 + 8);
  return;
}


