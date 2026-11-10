/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010b010; name: FUN_0010b010
 */


void FUN_0010b010(uint *param_1,int param_2,short *param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_120 [16];
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  int local_60 [8];
  int local_40 [8];
  
  lVar16 = 0;
  do {
    piVar3 = (int *)(&UNK_03cb37c0 + lVar16 + (long)param_4 * 0x100);
    if ((((((param_3[0x10] == 0 && param_3[8] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      iVar17 = piVar3[-0x20] * (int)*param_3 >> 0xb;
      *(int *)((long)local_120 + lVar16) = iVar17;
      iVar18 = iVar17;
      iVar19 = iVar17;
      iVar13 = iVar17;
      iVar14 = iVar17;
      iVar15 = iVar17;
      iVar12 = iVar17;
    }
    else {
      iVar14 = piVar3[-0x20] * (int)*param_3 >> 0xb;
      iVar19 = piVar3[-0x10] * (int)param_3[0x10] >> 0xb;
      iVar13 = *piVar3 * (int)param_3[0x20] >> 0xb;
      iVar9 = piVar3[0x10] * (int)param_3[0x30] >> 0xb;
      iVar10 = piVar3[-0x18] * (int)param_3[8] >> 0xb;
      iVar18 = piVar3[-8] * (int)param_3[0x18] >> 0xb;
      iVar12 = iVar13 + iVar14;
      iVar14 = iVar14 - iVar13;
      iVar13 = iVar9 + iVar19;
      iVar11 = piVar3[8] * (int)param_3[0x28] >> 0xb;
      iVar17 = piVar3[0x18] * (int)param_3[0x38] >> 0xb;
      iVar2 = iVar11 + iVar18;
      iVar11 = iVar11 - iVar18;
      iVar18 = iVar17 + iVar10;
      iVar10 = iVar10 - iVar17;
      iVar17 = iVar13 + iVar12;
      iVar12 = iVar12 - iVar13;
      iVar15 = iVar18 + iVar2;
      iVar13 = ((iVar19 - iVar9) * 0xb50 >> 0xb) - iVar13;
      iVar19 = iVar13 + iVar14;
      iVar14 = iVar14 - iVar13;
      iVar9 = (iVar10 + iVar11) * 0xec8 >> 0xb;
      iVar13 = iVar9 + ((iVar11 * -0x14e8 >> 0xb) - iVar15);
      iVar11 = ((iVar18 - iVar2) * 0xb50 >> 0xb) - iVar13;
      iVar2 = iVar11 + ((iVar10 * 0x8a9 >> 0xb) - iVar9);
      *(int *)((long)local_120 + lVar16) = iVar15 + iVar17;
      iVar17 = iVar17 - iVar15;
      iVar18 = iVar13 + iVar19;
      iVar19 = iVar19 - iVar13;
      iVar13 = iVar11 + iVar14;
      iVar14 = iVar14 - iVar11;
      iVar15 = iVar2 + iVar12;
      iVar12 = iVar12 - iVar2;
    }
    lVar1 = lVar16 + 4;
    *(int *)((long)local_40 + lVar16) = iVar17;
    param_3 = param_3 + 1;
    *(int *)((long)local_120 + lVar16 + 0x20) = iVar18;
    *(int *)((long)local_60 + lVar16) = iVar19;
    *(int *)((long)local_e0 + lVar16) = iVar13;
    *(int *)((long)local_80 + lVar16) = iVar14;
    *(int *)((long)local_a0 + lVar16) = iVar15;
    *(int *)((long)local_c0 + lVar16) = iVar12;
    lVar16 = lVar1;
  } while ((int)lVar1 != 0x20);
  lVar16 = 0;
  do {
    lVar1 = lVar16 + 0x20;
    iVar9 = *(int *)((long)local_120 + lVar16 + 0x10);
    iVar10 = *(int *)((long)local_120 + lVar16 + 0x14);
    iVar11 = *(int *)((long)local_120 + lVar16 + 4);
    iVar12 = iVar9 + *(int *)((long)local_120 + lVar16);
    iVar19 = *(int *)((long)local_120 + lVar16 + 8);
    iVar18 = *(int *)((long)local_120 + lVar16 + 0xc);
    iVar9 = *(int *)((long)local_120 + lVar16) - iVar9;
    iVar14 = *(int *)((long)local_120 + lVar16 + 0x18);
    iVar17 = *(int *)((long)local_120 + lVar16 + 0x1c);
    iVar13 = iVar14 + iVar19;
    iVar2 = iVar18 + iVar10;
    iVar10 = iVar10 - iVar18;
    iVar18 = iVar17 + iVar11;
    iVar11 = iVar11 - iVar17;
    iVar17 = iVar18 + iVar2;
    iVar15 = iVar13 + iVar12;
    iVar12 = iVar12 - iVar13;
    iVar13 = ((iVar19 - iVar14) * 0xb50 >> 0xb) - iVar13;
    iVar19 = iVar13 + iVar9;
    iVar9 = iVar9 - iVar13;
    iVar14 = (iVar11 + iVar10) * 0xec8 >> 0xb;
    iVar13 = iVar14 + ((iVar10 * -0x14e8 >> 0xb) - iVar17);
    iVar18 = ((iVar18 - iVar2) * 0xb50 >> 0xb) - iVar13;
    iVar2 = iVar18 + ((iVar11 * 0x8a9 >> 0xb) - iVar14);
    uVar5 = (iVar13 + iVar19) * 0x100 + 0x7f00U & 0xff0000 | iVar15 + iVar17 + 0x7fU >> 8 & 0xff;
    uVar6 = (iVar9 - iVar18) * 0x100 + 0x7f00U & 0xff0000 | iVar12 + iVar2 + 0x7fU >> 8 & 0xff;
    uVar7 = (iVar12 - iVar2) * 0x100 + 0x7f00U & 0xff0000 | iVar9 + iVar18 + 0x7fU >> 8 & 0xff;
    uVar8 = (iVar15 - iVar17) * 0x100 + 0x7f00U & 0xff0000 | (iVar19 - iVar13) + 0x7fU >> 8 & 0xff;
    uVar5 = uVar5 | uVar5 << 8;
    uVar7 = uVar7 | uVar7 << 8;
    uVar8 = uVar8 | uVar8 << 8;
    uVar6 = uVar6 | uVar6 << 8;
    puVar4 = (uint *)((long)param_1 + (long)param_2);
    param_1[2] = uVar6;
    param_1[3] = uVar8;
    *param_1 = uVar5;
    param_1[1] = uVar7;
    param_1 = (uint *)((long)param_1 + (long)(param_2 << 1));
    *puVar4 = uVar5;
    puVar4[1] = uVar7;
    puVar4[2] = uVar6;
    puVar4[3] = uVar8;
    lVar16 = lVar1;
  } while ((int)lVar1 != 0x100);
  return;
}


