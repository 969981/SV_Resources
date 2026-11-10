/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a3f30; name: FUN_017a3f30
 */


void FUN_017a3f30(float param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined4 param_5)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_4 + 0x1b8) != 0) {
    *(undefined4 *)(param_4 + 0x1b8) = 0;
    *(undefined1 *)(param_4 + 0x1dc) = 0;
    *(undefined4 *)(param_4 + 0x1d8) = 0;
  }
  fVar1 = *(float *)(param_4 + 0x1d4);
  if (fVar1 < *(float *)(param_4 + 0x1a0)) {
    if (param_1 < 0.0) {
      return;
    }
    fVar2 = *(float *)(param_4 + 0x1a4);
  }
  else {
    fVar2 = *(float *)(param_4 + 0x1a4);
    if (fVar1 <= fVar2) goto LAB_017a3f54;
  }
  if ((0.0 < param_1) && (fVar2 < fVar1)) {
    return;
  }
LAB_017a3f54:
  *(undefined4 *)(param_4 + 0x1c0) = param_5;
  *(float *)(param_4 + 0x1d8) = param_1;
  *(undefined4 *)(param_4 + 0x1d0) = param_2;
  *(undefined4 *)(param_4 + 0x1cc) = param_3;
  *(undefined8 *)(param_4 + 0x1b8) = 4;
  return;
}


