/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008809a0; name: FUN_008809a0
 */


undefined8 FUN_008809a0(int *param_1,float *param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  float fVar2;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  uVar1 = 0x80260201;
  if (((param_1 != (int *)0x0) && (param_2 != (float *)0x0)) && (param_3 != 0)) {
    if (*param_1 == 0x2011000) {
      param_2[3] = (float)param_1[2];
      param_2[4] = (float)param_1[3];
      param_2[5] = (float)param_1[4];
      *param_2 = 1.0;
      param_2[1] = -(float)param_1[5];
      param_2[2] = -(float)param_1[6];
      return 0;
    }
    if (*param_1 != 0x1011000) {
      return 0x80260202;
    }
    if (((12.0 < (float)param_1[4]) || ((float)param_1[4] < 0.1)) ||
       ((fVar2 = (float)param_1[3] / (float)param_4, 0.5 <= fVar2 ||
        (fVar2 <= 0.0 || param_1[2] == 0)))) {
      param_2[0] = 1.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 1.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      return 0;
    }
    uVar1 = FUN_008805f0(fVar2,param_1[5],&local_38);
    if ((int)uVar1 == 0) {
      fVar2 = 1.0 / local_38;
      *param_2 = local_38;
      param_2[1] = fStack_34 * -fVar2;
      param_2[2] = local_30 * -fVar2;
      param_2[3] = local_2c * fVar2;
      param_2[4] = local_28 * fVar2;
      param_2[5] = local_24 * fVar2;
      return uVar1;
    }
  }
  return uVar1;
}


