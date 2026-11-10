/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c323c4; name: FUN_02c323c4
 */


void FUN_02c323c4(long *param_1)

{
  if (*(long *)(*param_1 + 0x40) != 0) {
    FUN_01e83db8();
  }
  if (*(long *)(param_1[1] + 0x40) == 0) {
    return;
  }
  FUN_01e83db8();
  return;
}


