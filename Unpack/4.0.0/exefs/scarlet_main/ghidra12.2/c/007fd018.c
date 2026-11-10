/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fd018; name: FUN_007fd018
 */


void FUN_007fd018(long *param_1)

{
  if (param_1[0x274] != 0) {
    (**(code **)(*param_1 + 600))(param_1);
    param_1[0x274] = 0;
  }
  if (param_1[0x275] != 0) {
    (**(code **)(*param_1 + 0x248))(param_1);
    param_1[0x275] = 0;
  }
  param_1[0xee] = 0;
  return;
}


