/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012531e0; name: FUN_012531e0
 */


uint FUN_012531e0(long param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) != 0) {
    if (*(char *)(param_1 + 0xd) == param_2) {
      uVar1 = (uint)(*(int *)(param_1 + 8) == 0);
    }
    else {
      uVar1 = 0;
    }
  }
  if (((*(char *)(param_1 + 0x14) != '\0') && (*(char *)(param_1 + 0x15) == param_2)) &&
     (*(int *)(param_1 + 0x10) == 0)) {
    uVar1 = uVar1 + 1;
  }
  if (((*(char *)(param_1 + 0x1c) != '\0') && (*(char *)(param_1 + 0x1d) == param_2)) &&
     (*(int *)(param_1 + 0x18) == 0)) {
    uVar1 = uVar1 + 1;
  }
  if (((*(char *)(param_1 + 0x24) != '\0') && (*(char *)(param_1 + 0x25) == param_2)) &&
     (*(int *)(param_1 + 0x20) == 0)) {
    uVar1 = uVar1 + 1;
  }
  if (((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(param_1 + 0x2d) == param_2)) &&
     (*(int *)(param_1 + 0x28) == 0)) {
    uVar1 = uVar1 + 1;
  }
  if (((*(char *)(param_1 + 0x34) != '\0') && (*(char *)(param_1 + 0x35) == param_2)) &&
     (*(int *)(param_1 + 0x30) == 0)) {
    uVar1 = uVar1 + 1;
  }
  if (((*(char *)(param_1 + 0x3c) != '\0') && (*(char *)(param_1 + 0x3d) == param_2)) &&
     (*(int *)(param_1 + 0x38) == 0)) {
    uVar1 = uVar1 + 1;
  }
  if (((*(char *)(param_1 + 0x44) != '\0') && (*(char *)(param_1 + 0x45) == param_2)) &&
     (*(int *)(param_1 + 0x40) == 0)) {
    uVar1 = uVar1 + 1;
  }
  if (((*(char *)(param_1 + 0x4c) != '\0') && (*(char *)(param_1 + 0x4d) == param_2)) &&
     (*(int *)(param_1 + 0x48) == 0)) {
    uVar1 = uVar1 + 1;
  }
  if (((*(char *)(param_1 + 0x54) != '\0') && (*(char *)(param_1 + 0x55) == param_2)) &&
     (*(int *)(param_1 + 0x50) == 0)) {
    uVar1 = uVar1 + 1;
  }
  if (((*(char *)(param_1 + 0x5c) != '\0') && (*(char *)(param_1 + 0x5d) == param_2)) &&
     (*(int *)(param_1 + 0x58) == 0)) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


