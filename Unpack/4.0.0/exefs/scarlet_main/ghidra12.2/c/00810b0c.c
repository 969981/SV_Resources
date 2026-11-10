/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00810b0c; name: FUN_00810b0c
 */


void FUN_00810b0c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_00810b24(param_1,param_1 + 8);
    return;
  }
  FUN_00810b24(param_1,*(undefined8 *)(param_1 + 0x20));
  return;
}


