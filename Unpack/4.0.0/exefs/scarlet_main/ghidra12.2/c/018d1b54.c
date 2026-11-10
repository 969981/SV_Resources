/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d1b54; name: FUN_018d1b54
 */


void FUN_018d1b54(long param_1)

{
  if (*(int *)(param_1 + 0x49c) == 0) {
    FUN_018d1ba8(param_1 + 0x470);
    *(undefined1 *)(param_1 + 0x3f0) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x49c) == 1) {
      FUN_018d1c44(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x3f1) = 1;
  }
  return;
}


