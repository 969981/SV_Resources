/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01569c64; name: FUN_01569c64
 */


void FUN_01569c64(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x248) == '\0') {
    *(undefined4 *)(param_1 + 0x24c) = param_2;
    *(undefined1 *)(param_1 + 0x248) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x24c) = param_2;
  return;
}


