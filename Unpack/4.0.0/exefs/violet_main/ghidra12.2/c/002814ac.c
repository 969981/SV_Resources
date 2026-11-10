/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002814ac; name: FUN_002814ac
 */


ulong * FUN_002814ac(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 == param_1) {
    return param_1;
  }
  if ((*param_2 & 1) == 0) {
    FUN_00281920(param_1,param_2 + 1,*param_2 >> 1);
    return param_1;
  }
  if ((*param_1 & 1) == 0) {
    puVar1 = param_1 + 1;
LAB_002814fc:
    uVar2 = *param_1 >> 1;
    puVar1 = puVar1 + uVar2 * 0x12 + -1;
    lVar3 = uVar2 + 1;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      uVar2 = *puVar1;
      puVar1 = puVar1 + -0x12;
                    /* try { // try from 00281520 to 00281523 has its CatchHandler @ 002815ac */
      FUN_00343d90(uVar2);
    }
    if ((*param_1 & 1) == 0) goto LAB_00281544;
  }
  else {
    puVar1 = (ulong *)param_1[1];
    if (puVar1 != (ulong *)0x0) goto LAB_002814fc;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
LAB_00281544:
  *param_1 = *param_2;
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  uVar4 = param_2[4];
  uVar2 = param_2[3];
  uVar6 = param_2[6];
  uVar5 = param_2[5];
  uVar8 = param_2[8];
  uVar7 = param_2[7];
  uVar9 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar9;
  param_1[8] = uVar8;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[3] = uVar2;
  uVar4 = param_2[0xc];
  uVar2 = param_2[0xb];
  uVar6 = param_2[0xe];
  uVar5 = param_2[0xd];
  uVar8 = param_2[0x10];
  uVar7 = param_2[0xf];
  uVar9 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar9;
  param_1[0x10] = uVar8;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar4;
  param_1[0xb] = uVar2;
  *param_2 = 0;
  return param_1;
}


