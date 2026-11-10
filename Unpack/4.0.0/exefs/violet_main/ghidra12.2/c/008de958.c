/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008de958; name: FUN_008de958
 */


void FUN_008de958(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 int param_5,int param_6)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong uStack_28;
  undefined8 local_20;
  ulong uStack_18;
  
  fVar5 = (float)param_1;
  if (param_5 == 0) {
    local_20 = *param_4;
    fVar6 = *(float *)(param_4 + 1);
    pfVar1 = (float *)param_4[6];
    pfVar4 = *(float **)(pfVar1 + 0xc);
    local_30 = *(undefined8 *)pfVar1;
    fVar10 = pfVar1[2];
    fVar14 = (float)*param_4;
    fVar9 = (float)((ulong)*param_4 >> 0x20);
    fVar7 = pfVar4[2] - (float)param_4[1];
    local_50 = CONCAT44((pfVar4[1] - fVar9) * 0.5,(*pfVar4 - fVar14) * 0.5);
    auVar17 = NEON_fmov(0x3e800000,4);
    local_40 = CONCAT44(((pfVar1[1] - fVar9) +
                        (pfVar1[1] - (float)((ulong)*(undefined8 *)pfVar4 >> 0x20))) * auVar17._4_4_
                        ,((*pfVar1 - fVar14) + (*pfVar1 - (float)*(undefined8 *)pfVar4)) *
                         auVar17._0_4_);
    fVar14 = ((pfVar1[2] - (float)param_4[1]) + (pfVar1[2] - (float)*(undefined8 *)(pfVar4 + 2))) *
             auVar17._8_4_;
LAB_008debb4:
    fVar7 = fVar7 * 0.5;
    fVar9 = *(float *)(param_4 + 2);
    fVar13 = *(float *)((long)param_4 + 0x14);
    fVar15 = *(float *)(param_4 + 3);
    fVar16 = *(float *)((long)param_4 + 0x1c);
  }
  else {
    if (param_6 + -1 == param_5) {
      pfVar1 = (float *)param_4[7];
      pauVar2 = *(undefined1 (**) [16])(pfVar1 + 0xe);
      local_20 = CONCAT44(pfVar1[1],(int)*(undefined8 *)pfVar1);
      fVar6 = pfVar1[2];
      local_30 = *param_4;
      fVar10 = *(float *)(param_4 + 1);
      fVar5 = (float)*param_4;
      fVar7 = (float)((ulong)*param_4 >> 0x20);
      local_40 = CONCAT44((fVar7 - *(float *)(*pauVar2 + 4)) * 0.5,
                          (fVar5 - *(float *)*pauVar2) * 0.5);
      fVar14 = ((float)param_4[1] - *(float *)(*pauVar2 + 8)) * 0.5;
      auVar17 = *pauVar2;
      auVar12 = NEON_fmov(0xbe800000,4);
      local_50 = CONCAT44(((pfVar1[1] - fVar7) + (pfVar1[1] - auVar17._4_4_)) * auVar12._4_4_,
                          ((*pfVar1 - fVar5) + (*pfVar1 - auVar17._0_4_)) * auVar12._0_4_);
      fVar7 = ((pfVar1[2] - (float)param_4[1]) + (pfVar1[2] - auVar17._8_4_)) * auVar12._8_4_;
      uVar18 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * 0.0 +
                        (float)((ulong)param_4[2] >> 0x20),
                        (float)*(undefined8 *)(pfVar1 + 4) * 0.0 + (float)param_4[2]);
      uVar11 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20) * 0.0 +
                        (float)((ulong)param_4[3] >> 0x20),
                        (float)*(undefined8 *)(pfVar1 + 6) * 0.0 + (float)param_4[3]);
      param_1 = 0x3f800000;
      goto LAB_008debd0;
    }
    pfVar1 = (float *)param_4[6];
    if (param_6 + -2 != param_5) {
      local_20 = *param_4;
      fVar6 = *(float *)(param_4 + 1);
      local_30 = *(undefined8 *)pfVar1;
      fVar10 = pfVar1[2];
      uVar18 = *(undefined8 *)param_4[7];
      local_40 = CONCAT44((pfVar1[1] - (float)((ulong)uVar18 >> 0x20)) * 0.5,
                          (*pfVar1 - (float)uVar18) * 0.5);
      fVar14 = (pfVar1[2] - (float)((undefined8 *)param_4[7])[1]) * 0.5;
      auVar17 = **(undefined1 (**) [16])(pfVar1 + 0xc);
      fVar7 = auVar17._8_4_ - (float)param_4[1];
      local_50 = CONCAT44((auVar17._4_4_ - (float)((ulong)*param_4 >> 0x20)) * 0.5,
                          (auVar17._0_4_ - (float)*param_4) * 0.5);
      goto LAB_008debb4;
    }
    puVar3 = *(undefined8 **)(pfVar1 + 0xe);
    pfVar4 = (float *)puVar3[7];
    local_20 = CONCAT44(*(undefined4 *)((long)puVar3 + 4),(int)*puVar3);
    fVar6 = *(float *)(puVar3 + 1);
    local_30 = CONCAT44(pfVar1[1],(int)*(undefined8 *)pfVar1);
    fVar10 = pfVar1[2];
    local_40 = CONCAT44(((float)((ulong)*(undefined8 *)pfVar1 >> 0x20) - pfVar4[1]) * 0.5,
                        ((float)*(undefined8 *)pfVar1 - *pfVar4) * 0.5);
    fVar14 = ((float)*(undefined8 *)(pfVar1 + 2) - pfVar4[2]) * 0.5;
    fVar7 = (float)*puVar3;
    fVar9 = (float)((ulong)*puVar3 >> 0x20);
    auVar17 = NEON_fmov(0xbe800000,4);
    local_50 = CONCAT44(((fVar9 - pfVar1[1]) +
                        (fVar9 - (float)((ulong)*(undefined8 *)pfVar4 >> 0x20))) * auVar17._4_4_,
                        ((fVar7 - *pfVar1) + (fVar7 - (float)*(undefined8 *)pfVar4)) * auVar17._0_4_
                       );
    fVar7 = (((float)puVar3[1] - pfVar1[2]) +
            ((float)puVar3[1] - (float)*(undefined8 *)(pfVar4 + 2))) * auVar17._8_4_;
    fVar9 = *(float *)(puVar3 + 2);
    fVar13 = *(float *)((long)puVar3 + 0x14);
    fVar15 = *(float *)(puVar3 + 3);
    fVar16 = *(float *)((long)puVar3 + 0x1c);
  }
  fVar8 = 1.0 - fVar5;
  uVar18 = CONCAT44(fVar13 * fVar8 + pfVar1[5] * fVar5,fVar9 * fVar8 + pfVar1[4] * fVar5);
  uVar11 = CONCAT44(fVar16 * fVar8 + pfVar1[7] * fVar5,fVar15 * fVar8 + pfVar1[6] * fVar5);
LAB_008debd0:
  uStack_18 = (ulong)(uint)fVar6;
  uStack_28 = (ulong)(uint)fVar10;
  uStack_38 = (ulong)(uint)fVar14;
  uStack_48 = (ulong)(uint)fVar7;
  param_3[1] = uVar11;
  *param_3 = uVar18;
  FUN_008d46b0(param_1,param_2,&local_20,&local_40,&local_30,&local_50);
  return;
}


