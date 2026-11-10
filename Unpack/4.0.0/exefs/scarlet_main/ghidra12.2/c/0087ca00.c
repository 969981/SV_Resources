/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087ca00; name: FUN_0087ca00
 */


void FUN_0087ca00(long *param_1,long *param_2)

{
  FUN_0087d720(param_1 + 5);
  if (param_1[4] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[4] = 0;
  }
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[3] = 0;
  }
  FUN_0087cd84(param_1 + 0x4d,param_2);
  FUN_0087cf10(param_1 + 0x329,param_2);
  FUN_0087cf10(param_1 + 0x377,param_2);
  FUN_0087cf10(param_1 + 0x3c5,param_2);
  FUN_0087cf10(param_1 + 0x413,param_2);
  *(undefined1 *)(param_1 + 0x461) = 0;
  return;
}


