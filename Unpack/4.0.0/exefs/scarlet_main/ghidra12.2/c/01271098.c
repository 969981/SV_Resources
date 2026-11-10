/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01271098; name: FUN_01271098
 */


void FUN_01271098(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x240) == '\0') {
    *(undefined4 *)(param_1 + 0x244) = param_2;
    *(undefined1 *)(param_1 + 0x240) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x244) = param_2;
  return;
}


