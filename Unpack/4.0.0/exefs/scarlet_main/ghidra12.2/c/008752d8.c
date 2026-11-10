/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008752d8; name: FUN_008752d8
 */


undefined8 FUN_008752d8(undefined8 *param_1,long *param_2)

{
  if (param_1[5] != 0) {
    FUN_0087ca00(param_1[5],param_1[3]);
    if (param_1[5] != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    param_1[5] = 0;
  }
  if (param_1[0x7f] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[0x7f] = 0;
  }
  if (param_1[0x80] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[0x80] = 0;
  }
  if (param_1[0x81] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[0x81] = 0;
  }
  if ((*(char *)(param_1 + 0x82) != '\0') && (param_1[0x83] != 0)) {
    FUN_00879568(param_1[0x83],param_2);
    if (param_1[0x83] != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    param_1[0x83] = 0;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


