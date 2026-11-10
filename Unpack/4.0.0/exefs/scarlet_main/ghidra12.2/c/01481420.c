/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01481420; name: FUN_01481420
 */


undefined4 FUN_01481420(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0xc) != '\0') && (*(int *)(param_1 + 8) == param_2)) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x14) != '\0') && (*(int *)(param_1 + 0x10) == param_2)) {
    return 1;
  }
  if ((*(char *)(param_1 + 0x1c) != '\0') && (*(int *)(param_1 + 0x18) == param_2)) {
    return 2;
  }
  if ((*(char *)(param_1 + 0x24) != '\0') && (*(int *)(param_1 + 0x20) == param_2)) {
    return 3;
  }
  if ((*(char *)(param_1 + 0x2c) != '\0') && (*(int *)(param_1 + 0x28) == param_2)) {
    return 4;
  }
  if ((*(char *)(param_1 + 0x34) != '\0') && (*(int *)(param_1 + 0x30) == param_2)) {
    return 5;
  }
  if ((*(char *)(param_1 + 0x3c) != '\0') && (*(int *)(param_1 + 0x38) == param_2)) {
    return 6;
  }
  if ((*(char *)(param_1 + 0x44) != '\0') && (*(int *)(param_1 + 0x40) == param_2)) {
    return 7;
  }
  if ((*(char *)(param_1 + 0x4c) != '\0') && (*(int *)(param_1 + 0x48) == param_2)) {
    return 8;
  }
  if (*(char *)(param_1 + 0x54) == '\0') {
    return 10;
  }
  uVar1 = 9;
  if (*(int *)(param_1 + 0x50) != param_2) {
    uVar1 = 10;
  }
  return uVar1;
}


