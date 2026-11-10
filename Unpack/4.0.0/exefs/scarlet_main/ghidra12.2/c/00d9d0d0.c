/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d9d0d0; name: FUN_00d9d0d0
 */


void FUN_00d9d0d0(undefined8 param_1,long param_2)

{
  uint uVar1;
  float fVar2;
  
  if (*(int *)(param_2 + 0x38) != 0) {
    uVar1 = *(uint *)(param_2 + 0x4c);
    if (((uVar1 & 0xfffffffd) == 1) && ((uVar1 == 1 || (uVar1 == 3)))) {
      fVar2 = *(float *)(param_2 + 0x50) - (float)param_1;
      *(float *)(param_2 + 0x50) = fVar2;
      if (fVar2 <= 0.0) {
        if (uVar1 == 1) {
          uVar1 = 2;
          *(undefined4 *)(param_2 + 0x4c) = 2;
          *(float *)(param_2 + 0x54) = fVar2 + *(float *)(param_2 + 0x54);
        }
        else if (uVar1 == 3) {
          uVar1 = 4;
          *(undefined4 *)(param_2 + 0x4c) = 4;
        }
        *(undefined4 *)(param_2 + 0x50) = 0;
      }
    }
    if ((uVar1 == 2) &&
       (fVar2 = *(float *)(param_2 + 0x54) - (float)param_1, *(float *)(param_2 + 0x54) = fVar2,
       fVar2 <= 0.0)) {
      FUN_00d9d890(param_2);
    }
    FUN_00d9d46c(param_1,param_2);
    FUN_00d9d1e0(param_1,param_2);
  }
  if (((*(char *)(param_2 + 0x59) == '\0') &&
      ((*(char *)(param_2 + 0x58) == '\0' || (*(char *)(param_2 + 0x61) != '\0')))) ||
     (*(long *)(param_2 + 0x30) == 0)) {
    return;
  }
  FUN_00d9dcc0();
  return;
}


