/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b4e14; name: FUN_007b4e14
 */


void FUN_007b4e14(long param_1)

{
  FUN_0079b800();
  if (*(char *)(param_1 + 0x1232) != '\0') {
    FUN_0079d698(param_1);
    *(char *)(param_1 + 0x1232) = '\0';
  }
  return;
}


