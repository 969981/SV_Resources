/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02166c4c; name: FUN_02166c4c
 */


undefined1  [16] FUN_02166c4c(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = (float)(uint)(param_3 - *param_1) / (float)(uint)(*param_2 - *param_1);
  fVar5 = (float)*(undefined8 *)(param_1 + 8);
  fVar11 = (float)*(undefined8 *)(param_2 + 8);
  fVar3 = (float)*(undefined8 *)(param_1 + 4);
  fVar8 = fVar3 - (float)*(undefined8 *)(param_2 + 4);
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar9 = fVar4 - (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_1 + 6) - (float)*(undefined8 *)(param_2 + 6);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar7 = (float)*(undefined8 *)(param_1 + 10);
  auVar2._4_4_ = fVar4 + fVar1 * (fVar6 + fVar1 * (((fVar6 * -2.0 - fVar12) - fVar9 * 3.0) +
                                                  fVar1 * (fVar6 + fVar12 + fVar9 + fVar9)));
  auVar2._0_4_ = fVar3 + fVar1 * (fVar5 + fVar1 * (((fVar5 * -2.0 - fVar11) - fVar8 * 3.0) +
                                                  fVar1 * (fVar5 + fVar11 + fVar8 + fVar8)));
  auVar2._8_4_ = (float)*(undefined8 *)(param_1 + 6) +
                 fVar1 * (fVar7 + fVar1 * (((fVar7 * -2.0 - (float)*(undefined8 *)(param_2 + 10)) -
                                           fVar10 * 3.0) +
                                          fVar1 * (fVar7 + (float)*(undefined8 *)(param_2 + 10) +
                                                  fVar10 + fVar10)));
  auVar2._12_4_ = 0;
  return auVar2;
}


