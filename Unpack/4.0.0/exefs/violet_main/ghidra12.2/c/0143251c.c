/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143251c; name: FUN_0143251c
 */


undefined1  [16] FUN_0143251c(undefined8 param_1,float *param_2,float *param_3)

{
  undefined *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_PTR_047d9248;
  fVar4 = *param_2;
  fVar6 = *param_3;
  fVar2 = (float)(**(code **)PTR_PTR_047d9248)();
  fVar7 = param_3[1];
  auVar3._0_4_ = fVar4 + (fVar6 - fVar4) * fVar2;
  fVar6 = param_2[1];
  fVar2 = (float)(**(code **)puVar1)(param_1);
  fVar8 = param_3[2];
  fVar5 = param_2[2];
  fVar4 = (float)(**(code **)puVar1)(param_1);
  auVar3._4_4_ = fVar6 + (fVar7 - fVar6) * fVar2;
  auVar3._8_4_ = fVar5 + (fVar8 - fVar5) * fVar4;
  auVar3._12_4_ = 0;
  return auVar3;
}


