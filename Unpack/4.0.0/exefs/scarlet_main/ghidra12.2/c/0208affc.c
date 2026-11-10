/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0208affc; name: FUN_0208affc
 */


void FUN_0208affc(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x78) + 0x544) = 1;
  }
  return;
}


