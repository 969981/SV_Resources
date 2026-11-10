/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5d3f0; name: FUN_01e5d3f0
 */


void FUN_01e5d3f0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar1 = param_1[3];
  lVar4 = param_1[4];
  lVar2 = param_1[5];
  lVar5 = param_1[6];
  lVar13 = param_1[2];
  lVar3 = *param_1;
  lVar6 = param_1[1];
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar9 = param_1[7];
  lVar12 = param_2[5];
  lVar7 = param_2[6];
  lVar11 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = lVar11;
  param_1[5] = lVar12;
  param_1[6] = lVar7;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(int *)(param_1 + 7) = (int)param_2[7];
  lVar12 = *param_2;
  if (lVar12 == 0) goto LAB_01e5d4bc;
  lVar7 = param_2[2];
  plVar8 = (long *)param_2[3];
  param_2[1] = lVar12;
  uVar10 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if ((uVar10 & 1) == 0) {
LAB_01e5d498:
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,lVar7 - lVar12,1);
  }
  else {
    lVar11 = FUN_00c4e600();
    if (*(int *)(lVar11 + 0x12c8) < 1) goto LAB_01e5d498;
    FUN_00c48fe8(plVar8,lVar12,lVar7 - lVar12,1);
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
LAB_01e5d4bc:
  param_2[5] = lVar2;
  param_2[6] = lVar5;
  param_2[2] = lVar13;
  param_2[3] = lVar1;
  param_2[4] = lVar4;
  *(int *)(param_2 + 7) = (int)lVar9;
  *param_2 = lVar3;
  param_2[1] = lVar6;
  return;
}


