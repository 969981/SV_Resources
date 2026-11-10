/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dd4c58; name: FUN_00dd4c58
 */


uint FUN_00dd4c58(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x1c9) == '\0') {
    return param_2;
  }
  if ((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_00dd4cb0;
  if ((param_2 >> 5 & 1) != 0) {
    FUN_00dd4ce8(param_1);
  }
  if ((param_2 & 3) == 0) {
    if ((*(byte *)(param_1 + 0x1c4) & 5) != 0) goto LAB_00dd4cd0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c4) = 7;
LAB_00dd4cd0:
    FUN_00dd6124(param_1);
  }
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x40));
LAB_00dd4cb0:
  if (*(char *)(param_1 + 0x1c8) != '\0') {
    param_2 = param_2 | 3;
    *(undefined1 *)(param_1 + 0x1c8) = 0;
  }
  return param_2;
}


