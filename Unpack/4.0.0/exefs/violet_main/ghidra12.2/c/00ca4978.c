/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ca4978; name: FUN_00ca4978
 */


bool FUN_00ca4978(undefined8 *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_120 [56];
  float fStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_026fe220(local_120);
  fVar7 = (*(float *)(param_1 + 2) + (float)*param_1) * 0.5;
  fVar8 = (*(float *)((long)param_1 + 0x14) + (float)((ulong)*param_1 >> 0x20)) * 0.5;
  fVar9 = (*(float *)(param_1 + 3) + (float)param_1[1]) * 0.5;
  bVar1 = false;
  fVar2 = *(float *)(param_1 + 2) - fVar7;
  fVar5 = *(float *)((long)param_1 + 0x14) - fVar8;
  fVar6 = *(float *)(param_1 + 3) - fVar9;
  auVar3._0_4_ = (float)local_e0 * fVar7 + (float)uStack_d0 * fVar8 + (float)local_c0 * fVar9 +
                 (float)uStack_b0 +
                 (float)local_60 * fVar2 + (float)uStack_50 * fVar5 + (float)local_40 * fVar6;
  auVar3._4_4_ = (float)((ulong)local_e0 >> 0x20) * fVar7 +
                 (float)((ulong)uStack_d0 >> 0x20) * fVar8 +
                 (float)((ulong)local_c0 >> 0x20) * fVar9 + (float)((ulong)uStack_b0 >> 0x20) +
                 (float)((ulong)local_60 >> 0x20) * fVar2 +
                 (float)((ulong)uStack_50 >> 0x20) * fVar5 +
                 (float)((ulong)local_40 >> 0x20) * fVar6;
  auVar3._8_4_ = (float)uStack_d8 * fVar7 + (float)uStack_c8 * fVar8 + (float)uStack_b8 * fVar9 +
                 fStack_a8 +
                 (float)uStack_58 * fVar2 + (float)uStack_48 * fVar5 + (float)uStack_38 * fVar6;
  auVar3._12_4_ =
       (float)((ulong)uStack_d8 >> 0x20) * fVar7 + (float)((ulong)uStack_c8 >> 0x20) * fVar8 +
       (float)((ulong)uStack_b8 >> 0x20) * fVar9 + 0.0 +
       (float)((ulong)uStack_58 >> 0x20) * fVar2 + (float)((ulong)uStack_48 >> 0x20) * fVar5 +
       (float)((ulong)uStack_38 >> 0x20) * fVar6;
  auVar4._4_4_ = local_120._52_4_ +
                 local_120._4_4_ * fVar7 + local_120._20_4_ * fVar8 + local_120._36_4_ * fVar9 +
                 (float)((ulong)local_a0 >> 0x20) * fVar2 +
                 (float)((ulong)uStack_90 >> 0x20) * fVar5 +
                 (float)((ulong)local_80 >> 0x20) * fVar6;
  auVar4._0_4_ = local_120._48_4_ +
                 local_120._0_4_ * fVar7 + local_120._16_4_ * fVar8 + local_120._32_4_ * fVar9 +
                 (float)local_a0 * fVar2 + (float)uStack_90 * fVar5 + (float)local_80 * fVar6;
  auVar4._8_4_ = fStack_e8 +
                 local_120._8_4_ * fVar7 + local_120._24_4_ * fVar8 + local_120._40_4_ * fVar9 +
                 (float)uStack_98 * fVar2 + (float)uStack_88 * fVar5 + (float)uStack_78 * fVar6;
  auVar4._12_4_ =
       local_120._12_4_ * fVar7 + local_120._28_4_ * fVar8 + local_120._44_4_ * fVar9 + 0.0 +
       (float)((ulong)uStack_98 >> 0x20) * fVar2 + (float)((ulong)uStack_88 >> 0x20) * fVar5 +
       (float)((ulong)uStack_78 >> 0x20) * fVar6;
  auVar4 = NEON_fmin(auVar4,auVar3,4);
  if ((0.0 <= auVar4._0_4_) && (0.0 <= auVar4._4_4_)) {
    bVar1 = 0.0 <= auVar4._8_4_;
  }
  return bVar1;
}


