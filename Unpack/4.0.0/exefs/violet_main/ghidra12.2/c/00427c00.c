/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00427c00; name: FUN_00427c00
 */


void FUN_00427c00(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  
  iVar10 = *param_2;
  iVar11 = *param_3;
  *param_1 = iVar10 - iVar11;
  iVar12 = param_2[1];
  iVar13 = param_3[1];
  param_1[1] = iVar12 - iVar13;
  iVar14 = param_2[2];
  iVar15 = param_3[2];
  param_1[2] = iVar14 - iVar15;
  iVar16 = param_2[3];
  iVar17 = param_3[3];
  param_1[3] = iVar16 - iVar17;
  iVar18 = param_2[4];
  iVar19 = param_3[4];
  param_1[4] = iVar18 - iVar19;
  iVar20 = param_2[5];
  iVar21 = param_3[5];
  param_1[5] = iVar20 - iVar21;
  iVar22 = param_2[6];
  iVar23 = param_3[6];
  param_1[6] = iVar22 - iVar23;
  iVar24 = param_2[7];
  iVar25 = param_3[7];
  param_1[7] = iVar24 - iVar25;
  iVar26 = param_2[8];
  iVar27 = param_3[8];
  param_1[8] = iVar26 - iVar27;
  iVar28 = param_2[9];
  iVar29 = param_3[9];
  param_1[9] = iVar28 - iVar29;
  iVar30 = param_2[10];
  iVar31 = param_3[10];
  param_1[10] = iVar30 - iVar31;
  iVar32 = param_2[0xb];
  iVar33 = param_3[0xb];
  param_1[0xb] = iVar32 - iVar33;
  iVar34 = param_2[0xc];
  iVar35 = param_3[0xc];
  param_1[0xc] = iVar34 - iVar35;
  iVar36 = param_2[0xd];
  iVar37 = param_3[0xd];
  param_1[0xd] = iVar36 - iVar37;
  iVar38 = param_2[0xe];
  iVar39 = param_3[0xe];
  uVar1 = (iVar36 - iVar37) + 0x1ffffffe;
  uVar2 = (iVar34 - iVar35) + 0x1ffffffe;
  uVar3 = (iVar32 - iVar33) + 0x1ffffffe;
  uVar4 = (iVar30 - iVar31) + 0x1ffffffe;
  uVar5 = (iVar28 - iVar29) + 0x1ffffffe;
  param_1[0xe] = iVar38 - iVar39;
  iVar28 = param_2[0xf];
  iVar29 = param_3[0xf];
  uVar6 = (iVar24 - iVar25) + 0x1ffffffe;
  uVar7 = (iVar22 - iVar23) + 0x1ffffffe;
  param_1[10] = (uVar4 & 0xfffffff) + (uVar5 >> 0x1c);
  param_1[0xb] = (uVar3 & 0xfffffff) + (uVar4 >> 0x1c);
  uVar4 = (iVar20 - iVar21) + 0x1ffffffe;
  param_1[0xc] = (uVar2 & 0xfffffff) + (uVar3 >> 0x1c);
  param_1[0xd] = (uVar1 & 0xfffffff) + (uVar2 >> 0x1c);
  uVar2 = (iVar18 - iVar19) + 0x1ffffffe;
  uVar3 = (iVar16 - iVar17) + 0x1ffffffe;
  param_1[6] = (uVar7 & 0xfffffff) + (uVar4 >> 0x1c);
  param_1[7] = (uVar6 & 0xfffffff) + (uVar7 >> 0x1c);
  uVar7 = (iVar38 - iVar39) + 0x1ffffffe;
  uVar8 = (iVar14 - iVar15) + 0x1ffffffe;
  uVar9 = (iVar12 - iVar13) + 0x1ffffffe;
  param_1[2] = (uVar8 & 0xfffffff) + (uVar9 >> 0x1c);
  param_1[3] = (uVar3 & 0xfffffff) + (uVar8 >> 0x1c);
  param_1[4] = (uVar2 & 0xfffffff) + (uVar3 >> 0x1c);
  param_1[5] = (uVar4 & 0xfffffff) + (uVar2 >> 0x1c);
  uVar2 = (iVar10 - iVar11) + 0x1ffffffe;
  uVar3 = (iVar28 - iVar29) + 0x1ffffffe;
  uVar8 = uVar3 >> 0x1c;
  uVar4 = (iVar26 - iVar27) + uVar8 + 0x1ffffffc;
  param_1[0xe] = (uVar7 & 0xfffffff) + (uVar1 >> 0x1c);
  param_1[0xf] = (uVar3 & 0xfffffff) + (uVar7 >> 0x1c);
  param_1[8] = (uVar4 & 0xfffffff) + (uVar6 >> 0x1c);
  param_1[9] = (uVar5 & 0xfffffff) + (uVar4 >> 0x1c);
  *param_1 = uVar8 + (uVar2 & 0xfffffff);
  param_1[1] = (uVar9 & 0xfffffff) + (uVar2 >> 0x1c);
  return;
}


