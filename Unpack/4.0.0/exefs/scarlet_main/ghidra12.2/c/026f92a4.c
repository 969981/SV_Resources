/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f92a4; name: FUN_026f92a4
 */


void FUN_026f92a4(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  
  fVar1 = param_1._0_4_ - param_3._0_4_;
  fVar2 = param_1._4_4_ - param_3._4_4_;
  fVar3 = param_1._8_4_ - param_3._8_4_;
  fVar4 = param_2._0_4_ - param_3._0_4_;
  fVar5 = param_2._4_4_ - param_3._4_4_;
  fVar6 = param_2._8_4_ - param_3._8_4_;
  uVar7 = (ulong)(uint)fVar6;
  uVar8 = (ulong)(uint)fVar3;
  param_4[0xd] = uVar7;
  param_4[0xc] = CONCAT44(fVar5,fVar1);
  param_4[0xf] = CONCAT44(param_2._12_4_ - param_3._12_4_,fVar6);
  param_4[0xe] = CONCAT44(fVar5,fVar4);
  param_4[5] = uVar8;
  param_4[4] = CONCAT44(fVar5,fVar1);
  param_4[7] = uVar8;
  param_4[6] = CONCAT44(fVar5,fVar4);
  param_4[1] = CONCAT44(param_1._12_4_ - param_3._12_4_,fVar3);
  *param_4 = CONCAT44(fVar2,fVar1);
  param_4[3] = uVar8;
  param_4[2] = CONCAT44(fVar2,fVar4);
  param_4[9] = uVar7;
  param_4[8] = CONCAT44(fVar2,fVar1);
  param_4[0xb] = uVar7;
  param_4[10] = CONCAT44(fVar2,fVar4);
  return;
}


