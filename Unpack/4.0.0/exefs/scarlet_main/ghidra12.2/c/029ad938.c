/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ad938; name: FUN_029ad938
 */


void FUN_029ad938(long param_1)

{
  if (*(char *)(param_1 + 600) != '\0') {
    FUN_029ad980(param_1 + 0x128);
    if (*(char *)(param_1 + 0x259) != '\0') {
      FUN_029ad9dc(param_1 + 0x128);
      return;
    }
  }
  return;
}


