/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0042a790; name: FUN_0042a790
 */


void FUN_0042a790(uint *param_1,int *param_2,int *param_3)

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
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  uVar1 = *param_3 + *param_2;
  *param_1 = uVar1;
  uVar2 = param_3[1] + param_2[1];
  param_1[1] = uVar2;
  uVar3 = param_3[2] + param_2[2];
  param_1[2] = uVar3;
  uVar4 = param_3[3] + param_2[3];
  param_1[3] = uVar4;
  uVar5 = param_3[4] + param_2[4];
  param_1[4] = uVar5;
  uVar6 = param_3[5] + param_2[5];
  param_1[5] = uVar6;
  uVar7 = param_3[6] + param_2[6];
  param_1[6] = uVar7;
  uVar8 = param_3[7] + param_2[7];
  param_1[7] = uVar8;
  iVar15 = param_2[8];
  iVar16 = param_3[8];
  param_1[8] = iVar16 + iVar15;
  uVar9 = param_3[9] + param_2[9];
  param_1[9] = uVar9;
  uVar10 = param_3[10] + param_2[10];
  param_1[10] = uVar10;
  uVar11 = param_3[0xb] + param_2[0xb];
  param_1[0xb] = uVar11;
  uVar12 = param_3[0xc] + param_2[0xc];
  param_1[0xc] = uVar12;
  uVar13 = param_3[0xd] + param_2[0xd];
  param_1[0xd] = uVar13;
  uVar14 = param_3[0xe] + param_2[0xe];
  param_1[0xe] = uVar14;
  iVar17 = param_2[0xf];
  iVar18 = param_3[0xf];
  param_1[0xc] = (uVar12 & 0xfffffff) + (uVar11 >> 0x1c);
  param_1[0xd] = (uVar13 & 0xfffffff) + (uVar12 >> 0x1c);
  param_1[10] = (uVar10 & 0xfffffff) + (uVar9 >> 0x1c);
  param_1[0xb] = (uVar11 & 0xfffffff) + (uVar10 >> 0x1c);
  param_1[6] = (uVar7 & 0xfffffff) + (uVar6 >> 0x1c);
  param_1[7] = (uVar8 & 0xfffffff) + (uVar7 >> 0x1c);
  param_1[2] = (uVar3 & 0xfffffff) + (uVar2 >> 0x1c);
  param_1[3] = (uVar4 & 0xfffffff) + (uVar3 >> 0x1c);
  uVar7 = (uint)(iVar18 + iVar17) >> 0x1c;
  param_1[0xe] = (uVar14 & 0xfffffff) + (uVar13 >> 0x1c);
  param_1[0xf] = (iVar18 + iVar17 & 0xfffffffU) + (uVar14 >> 0x1c);
  uVar3 = uVar7 + iVar16 + iVar15;
  param_1[8] = (uVar3 & 0xfffffff) + (uVar8 >> 0x1c);
  param_1[9] = (uVar9 & 0xfffffff) + (uVar3 >> 0x1c);
  param_1[4] = (uVar5 & 0xfffffff) + (uVar4 >> 0x1c);
  param_1[5] = (uVar6 & 0xfffffff) + (uVar5 >> 0x1c);
  *param_1 = uVar7 + (uVar1 & 0xfffffff);
  param_1[1] = (uVar2 & 0xfffffff) + (uVar1 >> 0x1c);
  return;
}


