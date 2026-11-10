/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03504200; name: FUN_03504200
 */


void FUN_03504200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5,float *param_6,uint param_7,undefined4 param_8,uint param_9,
                 void *param_10)

{
  int iVar1;
  float fVar2;
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  
  fVar2 = param_5[4];
  fVar3 = param_5[5];
  fVar8 = param_6[4];
  fVar9 = param_6[5];
  fVar12 = param_5[8] - param_6[8];
  fVar6 = *param_5;
  fVar5 = param_5[1];
  fVar11 = *param_6;
  fVar10 = param_6[1];
  fVar17 = param_5[7] - param_6[7];
  fVar14 = param_6[2];
  fVar15 = param_6[3];
  fVar4 = param_5[2];
  fVar7 = param_5[3];
  fVar16 = param_5[6] - param_6[6];
  fVar18 = fVar11 * fVar9 - fVar15 * fVar14;
  fVar19 = fVar15 * fVar10 - fVar11 * fVar8;
  local_68 = fVar8 * fVar2 + fVar3 * fVar9 + fVar7 * fVar15;
  fStack_74 = fVar8 * fVar5 + fVar4 * fVar9 + fVar6 * fVar15;
  fVar13 = fVar14 * fVar8 - fVar10 * fVar9;
  fStack_64 = fVar14 * fVar3 + fVar2 * fVar10 + fVar7 * fVar11;
  local_70 = fVar14 * fVar4 + fVar5 * fVar10 + fVar6 * fVar11;
  local_5c = fVar16 * fVar15 + fVar8 * fVar17 + fVar9 * fVar12;
  fStack_58 = fVar16 * fVar11 + fVar10 * fVar17 + fVar14 * fVar12;
  fStack_6c = fVar13 * fVar7 + fVar2 * fVar18 + fVar3 * fVar19;
  local_78 = fVar13 * fVar6 + fVar5 * fVar18 + fVar4 * fVar19;
  local_60 = fVar16 * fVar13 + fVar18 * fVar17 + fVar19 * fVar12;
  iVar1 = ((param_9 & 0xff) + 3 & 0x1fc) * (param_7 & 0xff);
  if (iVar1 != 0) {
    memset(param_10,0,(ulong)(uint)(iVar1 * 4));
  }
  FUN_03503d68(param_1,param_2,param_3,param_4,&local_78,param_10,param_7,param_8,param_9);
  return;
}


