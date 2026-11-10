/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010ace0; name: FUN_0010ace0
 */


void FUN_0010ace0(long param_1,int param_2,short *param_3,long param_4)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_120 [16];
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  int local_60 [8];
  int local_40 [8];
  
  lVar12 = 0;
  do {
    piVar3 = (int *)(param_4 + 0xe0 + lVar12);
    if ((((((param_3[0x10] == 0 && param_3[8] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      iVar14 = piVar3[-0x38] * (int)*param_3 >> 0xb;
      *(int *)((long)local_120 + lVar12) = iVar14;
      iVar15 = iVar14;
      iVar16 = iVar14;
      iVar9 = iVar14;
      iVar10 = iVar14;
      iVar11 = iVar14;
      iVar8 = iVar14;
    }
    else {
      iVar10 = piVar3[-0x38] * (int)*param_3 >> 0xb;
      iVar16 = piVar3[-0x28] * (int)param_3[0x10] >> 0xb;
      iVar9 = piVar3[-0x18] * (int)param_3[0x20] >> 0xb;
      iVar4 = piVar3[-8] * (int)param_3[0x30] >> 0xb;
      iVar5 = piVar3[-0x30] * (int)param_3[8] >> 0xb;
      iVar15 = piVar3[-0x20] * (int)param_3[0x18] >> 0xb;
      iVar8 = iVar9 + iVar10;
      iVar10 = iVar10 - iVar9;
      iVar9 = iVar4 + iVar16;
      iVar6 = piVar3[-0x10] * (int)param_3[0x28] >> 0xb;
      iVar14 = *piVar3 * (int)param_3[0x38] >> 0xb;
      iVar2 = iVar6 + iVar15;
      iVar6 = iVar6 - iVar15;
      iVar15 = iVar14 + iVar5;
      iVar5 = iVar5 - iVar14;
      iVar14 = iVar9 + iVar8;
      iVar8 = iVar8 - iVar9;
      iVar11 = iVar15 + iVar2;
      iVar9 = ((iVar16 - iVar4) * 0xb50 >> 0xb) - iVar9;
      iVar16 = iVar9 + iVar10;
      iVar10 = iVar10 - iVar9;
      iVar4 = (iVar5 + iVar6) * 0xec8 >> 0xb;
      iVar9 = ((iVar6 * -0x14e8 >> 0xb) - iVar11) + iVar4;
      iVar6 = ((iVar15 - iVar2) * 0xb50 >> 0xb) - iVar9;
      iVar2 = iVar6 + ((iVar5 * 0x8a9 >> 0xb) - iVar4);
      *(int *)((long)local_120 + lVar12) = iVar11 + iVar14;
      iVar14 = iVar14 - iVar11;
      iVar15 = iVar9 + iVar16;
      iVar16 = iVar16 - iVar9;
      iVar9 = iVar6 + iVar10;
      iVar10 = iVar10 - iVar6;
      iVar11 = iVar2 + iVar8;
      iVar8 = iVar8 - iVar2;
    }
    lVar1 = lVar12 + 4;
    *(int *)((long)local_40 + lVar12) = iVar14;
    param_3 = param_3 + 1;
    *(int *)((long)local_120 + lVar12 + 0x20) = iVar15;
    *(int *)((long)local_60 + lVar12) = iVar16;
    *(int *)((long)local_e0 + lVar12) = iVar9;
    *(int *)((long)local_80 + lVar12) = iVar10;
    *(int *)((long)local_a0 + lVar12) = iVar11;
    *(int *)((long)local_c0 + lVar12) = iVar8;
    lVar12 = lVar1;
  } while ((int)lVar1 != 0x20);
  puVar13 = (undefined1 *)(param_1 + 3);
  lVar12 = 0;
  do {
    lVar1 = lVar12 + 0x20;
    iVar4 = *(int *)((long)local_120 + lVar12 + 0x10);
    iVar16 = *(int *)((long)local_120 + lVar12 + 0x14);
    iVar5 = *(int *)((long)local_120 + lVar12 + 4);
    iVar2 = iVar4 + *(int *)((long)local_120 + lVar12);
    iVar4 = *(int *)((long)local_120 + lVar12) - iVar4;
    iVar8 = *(int *)((long)local_120 + lVar12 + 8);
    iVar14 = *(int *)((long)local_120 + lVar12 + 0xc);
    iVar11 = *(int *)((long)local_120 + lVar12 + 0x18);
    iVar10 = *(int *)((long)local_120 + lVar12 + 0x1c);
    iVar15 = iVar11 + iVar8;
    iVar9 = iVar14 + iVar16;
    iVar16 = iVar16 - iVar14;
    iVar14 = iVar10 + iVar5;
    iVar5 = iVar5 - iVar10;
    iVar6 = ((iVar8 - iVar11) * 0xb50 >> 0xb) - iVar15;
    iVar11 = iVar14 + iVar9;
    iVar10 = (iVar5 + iVar16) * 0xec8 >> 0xb;
    iVar8 = iVar15 + iVar2 + 0x7f;
    iVar16 = ((iVar16 * -0x14e8 >> 0xb) - iVar11) + iVar10;
    iVar7 = ((iVar14 - iVar9) * 0xb50 >> 0xb) - iVar16;
    puVar13[4] = (char)((uint)(iVar8 - iVar11) >> 8);
    iVar9 = iVar6 + iVar4 + 0x7f;
    puVar13[-3] = (char)((uint)(iVar8 + iVar11) >> 8);
    iVar8 = (iVar4 - iVar6) + 0x7f;
    iVar14 = iVar7 + ((iVar5 * 0x8a9 >> 0xb) - iVar10);
    puVar13[3] = (char)((uint)(iVar9 - iVar16) >> 8);
    puVar13[2] = (char)((uint)(iVar8 - iVar7) >> 8);
    iVar2 = (iVar2 - iVar15) + 0x7f;
    puVar13[-1] = (char)((uint)(iVar8 + iVar7) >> 8);
    puVar13[-2] = (char)((uint)(iVar9 + iVar16) >> 8);
    puVar13[1] = (char)((uint)(iVar2 + iVar14) >> 8);
    *puVar13 = (char)((uint)(iVar2 - iVar14) >> 8);
    puVar13 = puVar13 + param_2;
    lVar12 = lVar1;
  } while ((int)lVar1 != 0x100);
  return;
}


