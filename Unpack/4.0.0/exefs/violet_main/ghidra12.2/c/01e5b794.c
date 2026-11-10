/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5b794; name: FUN_01e5b794
 */


void FUN_01e5b794(undefined8 param_1,float *param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  auVar4 = NEON_fmov(0x3f800000,4);
  uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20) * fVar8 +
                   *(float *)(param_3 + 100) * fVar2 +
                   (float)((ulong)*(undefined8 *)(param_3 + 0x70) >> 0x20) * fVar3 +
                   auVar4._4_4_ * (float)((ulong)*(undefined8 *)(param_3 + 0x80) >> 0x20),
                   (float)*(undefined8 *)(param_3 + 0x50) * fVar8 +
                   *(float *)(param_3 + 0x60) * fVar2 +
                   (float)*(undefined8 *)(param_3 + 0x70) * fVar3 +
                   auVar4._0_4_ * (float)*(undefined8 *)(param_3 + 0x80));
  fVar7 = (float)*(undefined8 *)(param_3 + 0x58) * fVar8 + *(float *)(param_3 + 0x68) * fVar2 +
          (float)*(undefined8 *)(param_3 + 0x78) * fVar3 +
          auVar4._8_4_ * (float)*(undefined8 *)(param_3 + 0x88);
  fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20) * fVar8 +
          *(float *)(param_3 + 0x6c) * fVar2 +
          (float)((ulong)*(undefined8 *)(param_3 + 0x78) >> 0x20) * fVar3 +
          auVar4._12_4_ * (float)((ulong)*(undefined8 *)(param_3 + 0x88) >> 0x20);
  tanf(*(float *)(param_3 + 0x1c) * 0.5);
  auVar1._8_4_ = fVar7;
  auVar1._0_8_ = uVar6;
  auVar4._8_4_ = fVar7;
  auVar4._0_8_ = uVar6;
  auVar4._12_4_ = fVar8;
  auVar1._12_4_ = fVar8;
  auVar4 = NEON_ext(auVar4,auVar1,8,1);
  auVar5._8_4_ = auVar4._0_4_;
  auVar5._0_8_ = uVar6;
  auVar5._12_4_ = 0;
  FUN_01e5cba0(auVar5,param_2[3]);
  return;
}


