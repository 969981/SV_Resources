/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003deb80; name: FUN_003deb80
 */


undefined8
FUN_003deb80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined4 *param_6)

{
  if (param_6 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_6;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_6[1];
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = (int)*(undefined8 *)(param_6 + 2);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_6 + 6);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_6 + 4);
  }
  return 1;
}


