/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c5234; name: FUN_033c5234
 */


void FUN_033c5234(float *param_1,long param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 == 0) {
    return;
  }
  param_1[0xe4] = 8.0;
  if (*(int *)(param_2 + 0xc) == 1) {
    fVar3 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0xe6));
    fVar3 = exp2f(fVar3 * 0.083333336 + -5.75);
    fVar3 = fVar3 * 440.0;
LAB_033c52bc:
    fVar4 = 8.0;
    param_1[0xe4] = fVar3;
    if (8.0 <= fVar3) goto LAB_033c52d4;
  }
  else {
    if (*(int *)(param_2 + 0xc) == 0) {
      fVar3 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x10),0x469c4000);
      if (fVar3 <= 8.0) {
        fVar3 = 8.0;
      }
      goto LAB_033c52bc;
    }
    fVar3 = 8.0;
LAB_033c52d4:
    if (fVar3 < param_1[4]) goto LAB_033c52ec;
    fVar4 = param_1[4] + -1.0;
  }
  param_1[0xe4] = fVar4;
LAB_033c52ec:
  *(bool *)((long)param_1 + 0x15) = *(int *)(param_2 + 8) == 0;
  *(bool *)(param_1 + 0x15) = (*(int *)(param_2 + 0x28) == 3) != (*(char *)(param_2 + 0x2c) != '\0')
  ;
  *(bool *)(param_1 + 0x25) = (*(int *)(param_2 + 0x3c) == 3) != (*(char *)(param_2 + 0x40) != '\0')
  ;
  param_1[10] = *(float *)(param_2 + 0x28);
  param_1[0x1a] = *(float *)(param_2 + 0x3c);
  fVar3 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x1c),0x41c00000);
  if (fVar3 <= -96.0) {
    fVar3 = -96.0;
  }
  fVar3 = exp2f(fVar3 * 0.1660964);
  if (param_1[0x27] != fVar3) {
    param_1[0x27] = fVar3;
    if (param_3 == 0) {
      param_1[0x28] = fVar3;
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar3 - param_1[0x28]) / (float)param_3;
    }
    param_1[0x26] = fVar3;
  }
  fVar3 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x14),0x41c00000);
  if (fVar3 <= -96.0) {
    fVar3 = -96.0;
  }
  fVar3 = exp2f(fVar3 * 0.1660964);
  if (param_1[0x2a] != fVar3) {
    param_1[0x2a] = fVar3;
    if (param_3 == 0) {
      param_1[0x2b] = fVar3;
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar3 - param_1[0x2b]) / (float)param_3;
    }
    param_1[0x29] = fVar3;
  }
  iVar2 = 4;
  if (*(char *)(param_1 + 5) == '\0') {
    iVar2 = 1;
  }
  param_3 = iVar2 * param_3;
  fVar3 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x34),0x41c00000);
  if (fVar3 <= -96.0) {
    fVar3 = -96.0;
  }
  fVar3 = exp2f(fVar3 * 0.1660964);
  if (param_1[0x10] != fVar3) {
    param_1[0x10] = fVar3;
    if (param_3 == 0) {
      param_1[0x11] = fVar3;
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar3 - param_1[0x11]) / (float)param_3;
    }
    param_1[0xf] = fVar3;
  }
  fVar3 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x48),0x41c00000);
  if (fVar3 <= -96.0) {
    fVar3 = -96.0;
  }
  fVar3 = exp2f(fVar3 * 0.1660964);
  if (param_1[0x20] != fVar3) {
    param_1[0x20] = fVar3;
    if (param_3 == 0) {
      param_1[0x21] = fVar3;
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar3 - param_1[0x21]) / (float)param_3;
    }
    param_1[0x1f] = fVar3;
  }
  iVar2 = *(int *)(param_2 + 0x30);
  if (iVar2 < 0xe10) {
    if (iVar2 < -0xe0f) {
      iVar2 = -0xe10;
    }
  }
  else {
    iVar2 = 0xe10;
  }
  fVar3 = exp2f((float)iVar2 * 0.00083333335);
  if (param_1[0xd] != fVar3) {
    param_1[0xd] = fVar3;
    if (param_3 == 0) {
      param_1[0xe] = fVar3;
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar3 - param_1[0xe]) / (float)param_3;
    }
    param_1[0xc] = fVar3;
  }
  iVar2 = *(int *)(param_2 + 0x44);
  if (iVar2 < 0xe10) {
    if (iVar2 < -0xe0f) {
      iVar2 = -0xe10;
    }
  }
  else {
    iVar2 = 0xe10;
  }
  fVar3 = exp2f((float)iVar2 * 0.00083333335);
  if (param_1[0x1d] != fVar3) {
    param_1[0x1d] = fVar3;
    if (param_3 == 0) {
      param_1[0x1e] = fVar3;
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar3 - param_1[0x1e]) / (float)param_3;
    }
    param_1[0x1c] = fVar3;
  }
  fVar3 = *(float *)(param_2 + 0x38);
  if (param_1[0x13] != fVar3) {
    param_1[0x13] = fVar3;
    if (param_3 == 0) {
      param_1[0x14] = fVar3;
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar3 - param_1[0x14]) / (float)param_3;
    }
    param_1[0x12] = fVar3;
  }
  fVar3 = *(float *)(param_2 + 0x4c);
  if (param_1[0x23] != fVar3) {
    param_1[0x23] = fVar3;
    if (param_3 == 0) {
      param_1[0x24] = fVar3;
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar3 - param_1[0x24]) / (float)param_3;
    }
    param_1[0x22] = fVar3;
  }
  fVar3 = *(float *)(param_2 + 0x20);
  if (0.0 <= fVar3) {
    fVar4 = 100.0;
    if (fVar3 <= 100.0) {
      fVar4 = fVar3;
    }
  }
  else {
    fVar4 = 0.0;
  }
  if (param_1[0x2d] != fVar4) {
    param_1[0x2d] = fVar4;
    if (param_3 == 0) {
      param_1[0x2e] = fVar4;
      fVar3 = 0.0;
    }
    else {
      fVar3 = (fVar4 - param_1[0x2e]) / (float)param_3;
    }
    param_1[0x2c] = fVar3;
  }
  fVar3 = *(float *)(param_2 + 0x18);
  if (fVar3 != param_1[0x9c]) {
    param_1[0x9c] = fVar3;
    if (2 < (int)fVar3 - 1U) {
      fVar3 = 0.0;
    }
    fVar5 = *param_1;
    plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0xe8) + 0x10))();
    fVar4 = (float)(**(code **)(*plVar1 + 0xe0))();
    param_1[0xa0] = fVar4;
    param_1[0xe0] = fVar3;
    if (fVar3 == 4.2039e-45) {
      param_1[0xc4] = 0.0;
      param_1[0xc5] = 0.0;
      param_1[0xc0] = 0.63741463;
      param_1[0xc1] = 0.63741463;
      param_1[0xc2] = 0.63741463;
      param_1[0xc3] = 0.63741463;
      param_1[0xc6] = 0.0;
      param_1[199] = -0.3373453;
      param_1[0xcc] = 0.0;
      param_1[0xcd] = -0.3373453;
      param_1[0xce] = -0.108207285;
      param_1[0xcf] = -0.03670226;
      param_1[0xd0] = -1.1480863;
      param_1[0xd1] = -0.94870037;
      param_1[0xd2] = -0.863181;
      param_1[0xd3] = -0.8140605;
      param_1[0xd4] = 0.51157457;
      param_1[0xd5] = 0.6506824;
      param_1[0xd6] = 0.67456084;
      param_1[0xd7] = 0.66331327;
      param_1[0xd8] = 1.2719209;
      param_1[0xd9] = 1.3185973;
      param_1[0xda] = 1.2966111;
      param_1[0xdb] = 1.2546815;
      param_1[200] = 0.0;
      param_1[0xc9] = 0.0;
      param_1[0xdc] = -0.29918557;
      param_1[0xdd] = -0.3805404;
      param_1[0xca] = -0.3373453;
      param_1[0xcb] = -0.108207285;
      param_1[0xde] = -0.39450526;
      param_1[0xdf] = -0.3879273;
    }
    else if (fVar3 == 2.8026e-45) {
      param_1[0xb7] = 0.049999952;
      param_1[0xb8] = -0.995;
    }
    else if (fVar3 == 1.4013e-45) {
      memset(param_1 + 0xa4,0,0x48);
      param_1[0xa3] = -251.32742 / (float)(int)fVar5 + 1.0;
    }
  }
  return;
}


