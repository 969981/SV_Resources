/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a0d28; name: FUN_028a0d28
 */


void FUN_028a0d28(undefined1 *param_1,char *param_2)

{
  param_1[8] = 0;
  if (*param_2 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
    param_1[8] = 1;
  }
  param_1[0x10] = 0;
  if (param_2[8] != '\0') {
    FUN_00cbd7c0(param_1 + 0x14,param_2 + 0xc);
    param_1[0x10] = 1;
  }
  param_1[0x28] = 0;
  if (param_2[0x20] != '\0') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
    param_1[0x28] = 1;
  }
  param_1[0x38] = 0;
  if (param_2[0x30] != '\0') {
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x34);
    param_1[0x38] = 1;
  }
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x3c);
  param_1[0x4c] = 0;
  if (param_2[0x44] != '\0') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    param_1[0x4c] = 1;
  }
  *param_1 = 1;
  return;
}


