/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e3ff0; name: FUN_008e3ff0
 */


void FUN_008e3ff0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,float *param_4,
                 int param_5,int param_6)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 local_50;
  undefined8 uStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  fVar5 = (float)param_1;
  if (param_5 == 0) {
    pfVar1 = *(float **)(param_4 + 0x16);
    local_20 = *(undefined8 *)param_4;
    local_18 = *(undefined8 *)(param_4 + 2);
    pfVar3 = *(float **)(pfVar1 + 0x16);
    local_28 = *(undefined8 *)(pfVar1 + 2);
    local_30 = *(undefined8 *)pfVar1;
    uStack_48 = CONCAT44((pfVar3[3] - param_4[3]) * 0.5,(pfVar3[2] - param_4[2]) * 0.5);
    local_50 = CONCAT44((pfVar3[1] - param_4[1]) * 0.5,(*pfVar3 - *param_4) * 0.5);
    auVar11 = NEON_fmov(0x3e800000,4);
    local_40 = ((*pfVar1 - *param_4) + (*pfVar1 - (float)*(undefined8 *)pfVar3)) * auVar11._0_4_;
    fStack_3c = ((pfVar1[1] - param_4[1]) +
                (pfVar1[1] - (float)((ulong)*(undefined8 *)pfVar3 >> 0x20))) * auVar11._4_4_;
    fStack_38 = ((pfVar1[2] - param_4[2]) + (pfVar1[2] - (float)*(undefined8 *)(pfVar3 + 2))) *
                auVar11._8_4_;
    fStack_34 = ((pfVar1[3] - param_4[3]) +
                (pfVar1[3] - (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20))) * auVar11._12_4_;
LAB_008e41ac:
    fVar6 = param_4[8];
    fVar7 = param_4[9];
    fVar8 = param_4[10];
    fVar12 = param_4[0xb];
  }
  else {
    if (param_6 + -1 == param_5) {
      pfVar1 = *(float **)(param_4 + 0x18);
      local_18 = *(undefined8 *)(pfVar1 + 2);
      pauVar2 = *(undefined1 (**) [16])(pfVar1 + 0x18);
      local_20 = *(undefined8 *)pfVar1;
      local_30 = *(undefined8 *)param_4;
      local_28 = *(undefined8 *)(param_4 + 2);
      fVar5 = (float)*(undefined8 *)param_4;
      fVar6 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
      fVar7 = (float)*(undefined8 *)(param_4 + 2);
      fVar8 = (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
      local_40 = (fVar5 - *(float *)*pauVar2) * 0.5;
      fStack_3c = (fVar6 - *(float *)(*pauVar2 + 4)) * 0.5;
      fStack_38 = (fVar7 - *(float *)(*pauVar2 + 8)) * 0.5;
      fStack_34 = (fVar8 - *(float *)(*pauVar2 + 0xc)) * 0.5;
      auVar11 = *pauVar2;
      auVar10 = NEON_fmov(0xbe800000,4);
      local_50 = CONCAT44(((pfVar1[1] - fVar6) + (pfVar1[1] - auVar11._4_4_)) * auVar10._4_4_,
                          ((*pfVar1 - fVar5) + (*pfVar1 - auVar11._0_4_)) * auVar10._0_4_);
      uStack_48 = CONCAT44(((pfVar1[3] - fVar8) + (pfVar1[3] - auVar11._12_4_)) * auVar10._12_4_,
                           ((pfVar1[2] - fVar7) + (pfVar1[2] - auVar11._8_4_)) * auVar10._8_4_);
      auVar11._0_4_ = (float)*(undefined8 *)(pfVar1 + 8) * 0.0 + param_4[8];
      auVar11._4_4_ = (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * 0.0 + param_4[9];
      auVar11._8_4_ = (float)*(undefined8 *)(pfVar1 + 10) * 0.0 + param_4[10];
      auVar11._12_4_ = (float)((ulong)*(undefined8 *)(pfVar1 + 10) >> 0x20) * 0.0 + param_4[0xb];
      param_1 = 0x3f800000;
      goto LAB_008e41c8;
    }
    pfVar1 = *(float **)(param_4 + 0x16);
    if (param_6 + -2 != param_5) {
      local_20 = *(undefined8 *)param_4;
      local_18 = *(undefined8 *)(param_4 + 2);
      pfVar3 = *(float **)(pfVar1 + 0x16);
      pfVar4 = *(float **)(param_4 + 0x18);
      local_28 = *(undefined8 *)(pfVar1 + 2);
      local_30 = *(undefined8 *)pfVar1;
      local_40 = (*pfVar1 - *pfVar4) * 0.5;
      fStack_3c = (pfVar1[1] - pfVar4[1]) * 0.5;
      fStack_38 = (pfVar1[2] - pfVar4[2]) * 0.5;
      fStack_34 = (pfVar1[3] - pfVar4[3]) * 0.5;
      uStack_48 = CONCAT44((pfVar3[3] - (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20)) * 0.5,
                           (pfVar3[2] - (float)*(undefined8 *)(param_4 + 2)) * 0.5);
      local_50 = CONCAT44((pfVar3[1] - (float)((ulong)*(undefined8 *)param_4 >> 0x20)) * 0.5,
                          (*pfVar3 - (float)*(undefined8 *)param_4) * 0.5);
      goto LAB_008e41ac;
    }
    pfVar3 = *(float **)(pfVar1 + 0x18);
    local_18 = *(undefined8 *)(pfVar3 + 2);
    pfVar4 = *(float **)(pfVar3 + 0x18);
    local_20 = *(undefined8 *)pfVar3;
    local_28 = *(undefined8 *)(pfVar1 + 2);
    local_30 = *(undefined8 *)pfVar1;
    local_40 = (*pfVar1 - *pfVar4) * 0.5;
    fStack_3c = (pfVar1[1] - pfVar4[1]) * 0.5;
    fStack_38 = (pfVar1[2] - pfVar4[2]) * 0.5;
    fStack_34 = (pfVar1[3] - pfVar4[3]) * 0.5;
    auVar11 = NEON_fmov(0xbe800000,4);
    uStack_48 = CONCAT44(((pfVar3[3] - pfVar1[3]) +
                         (pfVar3[3] - (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20))) *
                         auVar11._12_4_,
                         ((pfVar3[2] - pfVar1[2]) + (pfVar3[2] - (float)*(undefined8 *)(pfVar4 + 2))
                         ) * auVar11._8_4_);
    local_50 = CONCAT44(((pfVar3[1] - pfVar1[1]) +
                        (pfVar3[1] - (float)((ulong)*(undefined8 *)pfVar4 >> 0x20))) * auVar11._4_4_
                        ,((*pfVar3 - *pfVar1) + (*pfVar3 - (float)*(undefined8 *)pfVar4)) *
                         auVar11._0_4_);
    fVar6 = pfVar3[8];
    fVar7 = pfVar3[9];
    fVar8 = pfVar3[10];
    fVar12 = pfVar3[0xb];
  }
  fVar9 = 1.0 - fVar5;
  auVar11._0_4_ = fVar6 * fVar9 + pfVar1[8] * fVar5;
  auVar11._4_4_ = fVar7 * fVar9 + pfVar1[9] * fVar5;
  auVar11._8_4_ = fVar8 * fVar9 + pfVar1[10] * fVar5;
  auVar11._12_4_ = fVar12 * fVar9 + pfVar1[0xb] * fVar5;
LAB_008e41c8:
  param_3[1] = auVar11._8_8_;
  *param_3 = auVar11._0_8_;
  FUN_008d46b0(param_1,param_2,&local_20,&local_40,&local_30,&local_50);
  return;
}


