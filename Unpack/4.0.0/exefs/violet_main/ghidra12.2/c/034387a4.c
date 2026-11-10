/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034387a4; name: FUN_034387a4
 */


undefined8 FUN_034387a4(long param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_40;
  float local_3c;
  float fStack_38;
  undefined8 local_30;
  float local_28;
  
  pfVar2 = *(float **)(param_1 + 0x10);
  if (pfVar2 == (float *)0x0) {
    local_30 = 0;
    local_28 = 0.0;
    local_40 = *param_3;
    local_3c = param_3[1];
    fStack_38 = param_3[2];
    local_50 = *param_2 - local_40;
    fStack_4c = param_2[1] - local_3c;
    local_48 = param_2[2] - fStack_38;
    uVar1 = FUN_0341a340(*(undefined8 *)(param_1 + 0x18),&local_40,&local_50,&local_30);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    auVar8 = NEON_fmov(0x3f800000,4);
    fVar3 = *(float *)((ulong)&local_30 | 4);
    param_5[2] = local_28;
    param_5[3] = auVar8._12_4_;
    *param_5 = (float)local_30;
    param_5[1] = fVar3;
  }
  else {
    fVar3 = *param_4;
    fVar4 = param_4[1];
    fVar7 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar5 = pfVar2[2];
    fVar6 = pfVar2[3];
    fVar6 = (fVar6 * fVar7 - fVar3) * fVar7 + fVar9 * (fVar6 * fVar9 - fVar4) +
            fVar5 * (fVar6 * fVar5 - param_4[2]);
    fVar6 = fVar6 + fVar6;
    auVar8 = NEON_fmov(0x3f800000,4);
    param_5[2] = param_4[2] + fVar5 * fVar6;
    param_5[3] = auVar8._12_4_;
    *param_5 = fVar3 + fVar7 * fVar6;
    param_5[1] = fVar4 + fVar9 * fVar6;
  }
  return 1;
}


