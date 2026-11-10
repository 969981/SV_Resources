/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c4fec; name: FUN_033c4fec
 */


void FUN_033c4fec(long param_1,long param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (param_2 != 0) {
    fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x34),0x41c00000);
    if (fVar2 <= -96.0) {
      fVar2 = -96.0;
    }
    fVar2 = exp2f(fVar2 * 0.1660964);
    if (*(float *)(param_1 + 0x40) != fVar2) {
      *(float *)(param_1 + 0x40) = fVar2;
      *(float *)(param_1 + 0x44) = fVar2;
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x48),0x41c00000);
    if (fVar2 <= -96.0) {
      fVar2 = -96.0;
    }
    fVar2 = exp2f(fVar2 * 0.1660964);
    if (*(float *)(param_1 + 0x80) != fVar2) {
      *(float *)(param_1 + 0x80) = fVar2;
      *(float *)(param_1 + 0x84) = fVar2;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x1c),0x41c00000);
    if (fVar2 <= -96.0) {
      fVar2 = -96.0;
    }
    fVar2 = exp2f(fVar2 * 0.1660964);
    if (*(float *)(param_1 + 0x9c) != fVar2) {
      *(float *)(param_1 + 0x9c) = fVar2;
      *(float *)(param_1 + 0xa0) = fVar2;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    fVar2 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x14),0x41c00000);
    if (fVar2 <= -96.0) {
      fVar2 = -96.0;
    }
    fVar2 = exp2f(fVar2 * 0.1660964);
    if (*(float *)(param_1 + 0xa8) != fVar2) {
      *(float *)(param_1 + 0xa8) = fVar2;
      *(float *)(param_1 + 0xac) = fVar2;
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 < 0xe10) {
      if (iVar1 < -0xe0f) {
        iVar1 = -0xe10;
      }
    }
    else {
      iVar1 = 0xe10;
    }
    fVar2 = exp2f((float)iVar1 * 0.00083333335);
    if (*(float *)(param_1 + 0x34) != fVar2) {
      *(float *)(param_1 + 0x34) = fVar2;
      *(float *)(param_1 + 0x38) = fVar2;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    iVar1 = *(int *)(param_2 + 0x44);
    if (iVar1 < 0xe10) {
      if (iVar1 < -0xe0f) {
        iVar1 = -0xe10;
      }
    }
    else {
      iVar1 = 0xe10;
    }
    fVar2 = exp2f((float)iVar1 * 0.00083333335);
    if (*(float *)(param_1 + 0x74) != fVar2) {
      *(float *)(param_1 + 0x74) = fVar2;
      *(float *)(param_1 + 0x78) = fVar2;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    fVar2 = *(float *)(param_2 + 0x38);
    if (*(float *)(param_1 + 0x4c) != fVar2) {
      *(float *)(param_1 + 0x4c) = fVar2;
      *(float *)(param_1 + 0x50) = fVar2;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    fVar2 = *(float *)(param_2 + 0x4c);
    if (*(float *)(param_1 + 0x8c) != fVar2) {
      *(float *)(param_1 + 0x8c) = fVar2;
      *(float *)(param_1 + 0x90) = fVar2;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    fVar2 = *(float *)(param_2 + 0x20);
    if (0.0 <= fVar2) {
      fVar3 = 100.0;
      if (fVar2 <= 100.0) {
        fVar3 = fVar2;
      }
    }
    else {
      fVar3 = 0.0;
    }
    if (*(float *)(param_1 + 0xb4) != fVar3) {
      *(float *)(param_1 + 0xb4) = fVar3;
      *(float *)(param_1 + 0xb8) = fVar3;
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  return;
}


