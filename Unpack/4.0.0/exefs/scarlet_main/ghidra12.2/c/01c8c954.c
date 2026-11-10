/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c8c954; name: FUN_01c8c954
 */


void FUN_01c8c954(long param_1)

{
  FUN_01c8cfcc(param_1 + 0x60);
  if (*(char *)(param_1 + 0x58) != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  FUN_0186e214(param_1 + 0x50);
  return;
}


