/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d8da8; name: FUN_007d8da8
 */


void FUN_007d8da8(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x780) = 0;
  if (*(int *)(param_1 + 0x784) == 0) {
    *(undefined4 *)(param_1 + 0x784) = param_2;
    return;
  }
  return;
}


