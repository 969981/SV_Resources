/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c14b60; name: FUN_00c14b60
 */


long * FUN_00c14b60(long *param_1)

{
  if ((int)param_1[6] == 1) {
    FUN_00bb1344(param_1 + 5);
    if ((int)param_1[6] == 1) {
      (**(code **)(*param_1 + 0x58))(param_1);
      *(undefined4 *)(param_1 + 6) = 2;
    }
    FUN_00bb14b8(param_1 + 5);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1 + 7;
}


