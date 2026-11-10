/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0010b340; name: FUN_0010b340
 */


void FUN_0010b340(long param_1,int param_2,short *param_3,int param_4,long param_5,int param_6)

{
  char *pcVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_130 [16];
  int local_f0 [8];
  int local_d0 [8];
  int local_b0 [8];
  int local_90 [8];
  int local_70 [8];
  int local_50 [8];
  
  lVar11 = 0;
  do {
    piVar3 = (int *)(&UNK_03cb2820 + lVar11 + (long)param_4 * 0x100);
    if ((((((param_3[0x10] == 0 && param_3[8] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      iVar13 = piVar3[-0x38] * (int)*param_3 >> 0xb;
      *(int *)((long)local_130 + lVar11) = iVar13;
      iVar15 = iVar13;
      iVar16 = iVar13;
      iVar9 = iVar13;
      iVar10 = iVar13;
      iVar17 = iVar13;
      iVar8 = iVar13;
    }
    else {
      iVar10 = piVar3[-0x38] * (int)*param_3 >> 0xb;
      iVar16 = piVar3[-0x28] * (int)param_3[0x10] >> 0xb;
      iVar9 = piVar3[-0x18] * (int)param_3[0x20] >> 0xb;
      iVar5 = piVar3[-8] * (int)param_3[0x30] >> 0xb;
      iVar6 = piVar3[-0x30] * (int)param_3[8] >> 0xb;
      iVar15 = piVar3[-0x20] * (int)param_3[0x18] >> 0xb;
      iVar8 = iVar9 + iVar10;
      iVar10 = iVar10 - iVar9;
      iVar9 = iVar5 + iVar16;
      iVar7 = piVar3[-0x10] * (int)param_3[0x28] >> 0xb;
      iVar13 = *piVar3 * (int)param_3[0x38] >> 0xb;
      iVar4 = iVar7 + iVar15;
      iVar7 = iVar7 - iVar15;
      iVar15 = iVar13 + iVar6;
      iVar6 = iVar6 - iVar13;
      iVar13 = iVar9 + iVar8;
      iVar8 = iVar8 - iVar9;
      iVar17 = iVar15 + iVar4;
      iVar9 = ((iVar16 - iVar5) * 0xb50 >> 0xb) - iVar9;
      iVar16 = iVar9 + iVar10;
      iVar10 = iVar10 - iVar9;
      iVar5 = (iVar6 + iVar7) * 0xec8 >> 0xb;
      iVar9 = ((iVar7 * -0x14e8 >> 0xb) - iVar17) + iVar5;
      iVar7 = ((iVar15 - iVar4) * 0xb50 >> 0xb) - iVar9;
      iVar4 = iVar7 + ((iVar6 * 0x8a9 >> 0xb) - iVar5);
      *(int *)((long)local_130 + lVar11) = iVar17 + iVar13;
      iVar13 = iVar13 - iVar17;
      iVar15 = iVar9 + iVar16;
      iVar16 = iVar16 - iVar9;
      iVar9 = iVar7 + iVar10;
      iVar10 = iVar10 - iVar7;
      iVar17 = iVar4 + iVar8;
      iVar8 = iVar8 - iVar4;
    }
    lVar2 = lVar11 + 4;
    *(int *)((long)local_50 + lVar11) = iVar13;
    param_3 = param_3 + 1;
    *(int *)((long)local_130 + lVar11 + 0x20) = iVar15;
    *(int *)((long)local_70 + lVar11) = iVar16;
    *(int *)((long)local_f0 + lVar11) = iVar9;
    *(int *)((long)local_90 + lVar11) = iVar10;
    *(int *)((long)local_b0 + lVar11) = iVar17;
    *(int *)((long)local_d0 + lVar11) = iVar8;
    lVar11 = lVar2;
  } while ((int)lVar2 != 0x20);
  pcVar12 = (char *)(param_1 + 3);
  pcVar14 = (char *)(param_5 + 3);
  lVar11 = 0;
  do {
    lVar2 = lVar11 + 0x20;
    iVar4 = *(int *)((long)local_130 + lVar11 + 0x10);
    iVar6 = *(int *)((long)local_130 + lVar11 + 0x14);
    iVar9 = *(int *)((long)local_130 + lVar11 + 8);
    iVar8 = *(int *)((long)local_130 + lVar11 + 0xc);
    iVar7 = *(int *)((long)local_130 + lVar11 + 4);
    iVar15 = iVar4 + *(int *)((long)local_130 + lVar11);
    iVar5 = *(int *)((long)local_130 + lVar11 + 0x18);
    iVar10 = *(int *)((long)local_130 + lVar11 + 0x1c);
    iVar13 = iVar5 + iVar9;
    iVar4 = *(int *)((long)local_130 + lVar11) - iVar4;
    iVar17 = iVar8 + iVar6;
    iVar6 = iVar6 - iVar8;
    iVar16 = iVar10 + iVar7;
    iVar7 = iVar7 - iVar10;
    iVar10 = iVar16 + iVar17;
    iVar8 = iVar13 + iVar15 + 0x7f;
    pcVar12[-3] = pcVar14[-3] + (char)((uint)(iVar8 + iVar10) >> 8);
    iVar5 = ((iVar9 - iVar5) * 0xb50 >> 0xb) - iVar13;
    iVar9 = iVar5 + iVar4 + 0x7f;
    iVar4 = (iVar4 - iVar5) + 0x7f;
    iVar15 = (iVar15 - iVar13) + 0x7f;
    iVar5 = (iVar7 + iVar6) * 0xec8 >> 0xb;
    iVar13 = ((iVar6 * -0x14e8 >> 0xb) - iVar10) + iVar5;
    pcVar12[4] = pcVar14[4] + (char)((uint)(iVar8 - iVar10) >> 8);
    pcVar12[-2] = pcVar14[-2] + (char)((uint)(iVar9 + iVar13) >> 8);
    iVar8 = ((iVar16 - iVar17) * 0xb50 >> 0xb) - iVar13;
    pcVar12[3] = pcVar14[3] + (char)((uint)(iVar9 - iVar13) >> 8);
    pcVar12[-1] = pcVar14[-1] + (char)((uint)(iVar4 + iVar8) >> 8);
    pcVar12[2] = pcVar14[2] + (char)((uint)(iVar4 - iVar8) >> 8);
    iVar8 = iVar8 + ((iVar7 * 0x8a9 >> 0xb) - iVar5);
    *pcVar12 = *pcVar14 + (char)((uint)(iVar15 - iVar8) >> 8);
    pcVar1 = pcVar14 + 1;
    pcVar14 = pcVar14 + param_6;
    pcVar12[1] = *pcVar1 + (char)((uint)(iVar15 + iVar8) >> 8);
    pcVar12 = pcVar12 + param_2;
    lVar11 = lVar2;
  } while ((int)lVar2 != 0x100);
  return;
}


