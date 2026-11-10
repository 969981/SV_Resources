/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00798904; name: FUN_00798904
 */


void FUN_00798904(long *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x1e8))(param_1);
  if (param_1[3] != 0) {
    (**(code **)(*param_1 + 0x208))(param_1);
    param_1[3] = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


