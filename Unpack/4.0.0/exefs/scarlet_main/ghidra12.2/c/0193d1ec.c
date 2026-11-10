/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193d1ec; name: FUN_0193d1ec
 */


void FUN_0193d1ec(long param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xd0) != '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  FUN_01e81578(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x48) = 2;
  FUN_0174a3b8(param_1);
  return;
}


