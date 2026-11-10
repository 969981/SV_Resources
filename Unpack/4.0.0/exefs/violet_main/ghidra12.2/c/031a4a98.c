/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a4a98; name: FUN_031a4a98
 */


undefined8 FUN_031a4a98(long param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  byte bVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  uint *puVar11;
  undefined1 *puVar12;
  int iVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  
  puVar9 = (undefined8 *)(param_1 + (long)param_2 * 0x18);
  uVar6 = 0x80040200;
  if (*(byte *)((long)puVar9 + 0xc) - 1 < 10) {
    iVar8 = *(int *)(param_1 + 0x304);
    bVar5 = *(byte *)((long)puVar9 + 0xd);
    uVar14 = (ulong)bVar5;
    puVar11 = (uint *)*puVar9;
    lVar10 = (long)*(int *)(puVar9 + 1);
    switch((uint)*(byte *)((long)puVar9 + 0xc)) {
    case 1:
      if ((0 < iVar8) && (bVar5 != 0)) {
        iVar13 = 0;
        do {
          if (uVar14 - 1 < 7) {
            lVar16 = 0;
          }
          else {
            lVar17 = 7;
            do {
              lVar16 = lVar17;
              puVar12 = (undefined1 *)((long)puVar11 + lVar16);
              puVar12[-7] = (char)*param_3;
              puVar12[-6] = (char)param_3[1];
              puVar12[-5] = (char)param_3[2];
              puVar12[-4] = (char)param_3[3];
              puVar12[-3] = (char)param_3[4];
              puVar12[-2] = (char)param_3[5];
              puVar12[-1] = (char)param_3[6];
              piVar7 = param_3 + 7;
              param_3 = param_3 + 8;
              *puVar12 = (char)*piVar7;
              lVar17 = lVar16 + 8;
            } while ((lVar16 + 8) - (uVar14 & 0xf8) != 7);
            lVar16 = lVar16 + 1;
          }
          if ((bVar5 & 7) != 0) {
            piVar7 = param_3;
            uVar18 = uVar14 & 7;
            do {
              param_3 = piVar7 + 1;
              uVar18 = uVar18 - 1;
              *(char *)((long)puVar11 + lVar16) = (char)*piVar7;
              lVar16 = lVar16 + 1;
              piVar7 = param_3;
            } while (uVar18 != 0);
          }
          iVar13 = iVar13 + 1;
          puVar11 = (uint *)((long)puVar11 + lVar10);
        } while (iVar13 != iVar8);
      }
      break;
    case 2:
      if ((0 < iVar8) && (bVar5 != 0)) {
        iVar13 = 0;
        do {
          if (uVar14 - 1 < 7) {
            lVar16 = 0;
          }
          else {
            lVar17 = 7;
            do {
              lVar16 = lVar17;
              puVar12 = (undefined1 *)((long)puVar11 + lVar16);
              puVar12[-7] = (char)*param_3;
              puVar12[-6] = (char)param_3[1];
              puVar12[-5] = (char)param_3[2];
              puVar12[-4] = (char)param_3[3];
              puVar12[-3] = (char)param_3[4];
              puVar12[-2] = (char)param_3[5];
              puVar12[-1] = (char)param_3[6];
              piVar7 = param_3 + 7;
              param_3 = param_3 + 8;
              *puVar12 = (char)*piVar7;
              lVar17 = lVar16 + 8;
            } while ((lVar16 + 8) - (uVar14 & 0xf8) != 7);
            lVar16 = lVar16 + 1;
          }
          if ((bVar5 & 7) != 0) {
            piVar7 = param_3;
            uVar18 = uVar14 & 7;
            do {
              param_3 = piVar7 + 1;
              uVar18 = uVar18 - 1;
              *(char *)((long)puVar11 + lVar16) = (char)*piVar7;
              lVar16 = lVar16 + 1;
              piVar7 = param_3;
            } while (uVar18 != 0);
          }
          iVar13 = iVar13 + 1;
          puVar11 = (uint *)((long)puVar11 + lVar10);
        } while (iVar13 != iVar8);
      }
      break;
    case 3:
      if ((0 < iVar8) && (bVar5 != 0)) {
        iVar13 = 0;
        puVar15 = puVar11 + 2;
        do {
          if (uVar14 - 1 < 7) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            puVar19 = puVar15;
            do {
              *(short *)(puVar19 + -2) = (short)*param_3;
              *(short *)((long)puVar19 + -6) = (short)param_3[1];
              *(short *)(puVar19 + -1) = (short)param_3[2];
              *(short *)((long)puVar19 + -2) = (short)param_3[3];
              *(short *)puVar19 = (short)param_3[4];
              *(short *)((long)puVar19 + 2) = (short)param_3[5];
              *(short *)(puVar19 + 1) = (short)param_3[6];
              piVar7 = param_3 + 7;
              param_3 = param_3 + 8;
              lVar17 = lVar17 + -8;
              *(short *)((long)puVar19 + 6) = (short)*piVar7;
              puVar19 = puVar19 + 4;
            } while (-lVar17 != (uVar14 & 0xf8));
            lVar17 = -lVar17;
          }
          if ((bVar5 & 7) != 0) {
            lVar17 = lVar17 << 1;
            piVar7 = param_3;
            uVar18 = uVar14 & 7;
            do {
              param_3 = piVar7 + 1;
              uVar18 = uVar18 - 1;
              *(short *)((long)puVar11 + lVar17) = (short)*piVar7;
              lVar17 = lVar17 + 2;
              piVar7 = param_3;
            } while (uVar18 != 0);
          }
          iVar13 = iVar13 + 1;
          puVar11 = (uint *)((long)puVar11 + lVar10);
          puVar15 = (uint *)((long)puVar15 + lVar10);
        } while (iVar13 != iVar8);
      }
      break;
    case 4:
      if ((0 < iVar8) && (bVar5 != 0)) {
        iVar13 = 0;
        puVar15 = puVar11 + 2;
        do {
          if (uVar14 - 1 < 7) {
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            puVar19 = puVar15;
            do {
              *(short *)(puVar19 + -2) = (short)*param_3;
              *(short *)((long)puVar19 + -6) = (short)param_3[1];
              *(short *)(puVar19 + -1) = (short)param_3[2];
              *(short *)((long)puVar19 + -2) = (short)param_3[3];
              *(short *)puVar19 = (short)param_3[4];
              *(short *)((long)puVar19 + 2) = (short)param_3[5];
              *(short *)(puVar19 + 1) = (short)param_3[6];
              piVar7 = param_3 + 7;
              param_3 = param_3 + 8;
              lVar17 = lVar17 + -8;
              *(short *)((long)puVar19 + 6) = (short)*piVar7;
              puVar19 = puVar19 + 4;
            } while (-lVar17 != (uVar14 & 0xf8));
            lVar17 = -lVar17;
          }
          if ((bVar5 & 7) != 0) {
            lVar17 = lVar17 << 1;
            piVar7 = param_3;
            uVar18 = uVar14 & 7;
            do {
              param_3 = piVar7 + 1;
              uVar18 = uVar18 - 1;
              *(short *)((long)puVar11 + lVar17) = (short)*piVar7;
              lVar17 = lVar17 + 2;
              piVar7 = param_3;
            } while (uVar18 != 0);
          }
          iVar13 = iVar13 + 1;
          puVar11 = (uint *)((long)puVar11 + lVar10);
          puVar15 = (uint *)((long)puVar15 + lVar10);
        } while (iVar13 != iVar8);
      }
      break;
    case 5:
      if ((0 < iVar8) && (bVar5 != 0)) {
        iVar13 = 0;
        do {
          if (uVar14 - 1 < 7) {
            lVar16 = 0;
          }
          else {
            lVar17 = 0;
            lVar16 = 0;
            do {
              puVar2 = (undefined4 *)((long)param_3 + lVar17);
              puVar3 = (undefined4 *)((long)puVar11 + lVar17);
              lVar17 = lVar17 + 0x20;
              *puVar3 = *puVar2;
              puVar3[1] = puVar2[1];
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[4] = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[6] = puVar2[6];
              lVar16 = lVar16 + -8;
              puVar3[7] = puVar2[7];
            } while (-lVar16 != (uVar14 & 0xf8));
            param_3 = (int *)((long)param_3 + lVar17);
            lVar16 = -lVar16;
          }
          if ((bVar5 & 7) != 0) {
            lVar16 = lVar16 << 2;
            piVar7 = param_3;
            uVar18 = uVar14 & 7;
            do {
              param_3 = piVar7 + 1;
              uVar18 = uVar18 - 1;
              *(int *)((long)puVar11 + lVar16) = *piVar7;
              lVar16 = lVar16 + 4;
              piVar7 = param_3;
            } while (uVar18 != 0);
          }
          iVar13 = iVar13 + 1;
          puVar11 = (uint *)((long)puVar11 + lVar10);
        } while (iVar13 != iVar8);
      }
      break;
    case 6:
      if ((0 < iVar8) && (bVar5 != 0)) {
        iVar13 = 0;
        do {
          if (uVar14 - 1 < 7) {
            lVar16 = 0;
          }
          else {
            lVar17 = 0;
            lVar16 = 0;
            do {
              puVar2 = (undefined4 *)((long)param_3 + lVar17);
              puVar3 = (undefined4 *)((long)puVar11 + lVar17);
              lVar17 = lVar17 + 0x20;
              *puVar3 = *puVar2;
              puVar3[1] = puVar2[1];
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[4] = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[6] = puVar2[6];
              lVar16 = lVar16 + -8;
              puVar3[7] = puVar2[7];
            } while (-lVar16 != (uVar14 & 0xf8));
            param_3 = (int *)((long)param_3 + lVar17);
            lVar16 = -lVar16;
          }
          if ((bVar5 & 7) != 0) {
            lVar16 = lVar16 << 2;
            piVar7 = param_3;
            uVar18 = uVar14 & 7;
            do {
              param_3 = piVar7 + 1;
              uVar18 = uVar18 - 1;
              *(int *)((long)puVar11 + lVar16) = *piVar7;
              lVar16 = lVar16 + 4;
              piVar7 = param_3;
            } while (uVar18 != 0);
          }
          iVar13 = iVar13 + 1;
          puVar11 = (uint *)((long)puVar11 + lVar10);
        } while (iVar13 != iVar8);
      }
      break;
    case 7:
      if (0 < iVar8) {
        do {
          iVar13 = *param_3;
          puVar19 = (uint *)(param_3 + 1);
          puVar15 = (uint *)(param_3 + 2);
          pbVar1 = (byte *)(param_3 + 3);
          param_3 = param_3 + 4;
          *puVar11 = iVar13 << 0x18 | (*puVar19 & 0xff) << 0x10 | (*puVar15 & 0xff) << 8 |
                     (uint)*pbVar1;
          puVar11 = (uint *)((long)puVar11 + lVar10);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      break;
    case 8:
      if (0 < iVar8) {
        puVar12 = (undefined1 *)((long)puVar11 + 3);
        do {
          puVar12[-3] = (char)*param_3;
          puVar12[-2] = (char)param_3[1];
          puVar12[-1] = (char)param_3[2];
          piVar7 = param_3 + 3;
          iVar8 = iVar8 + -1;
          param_3 = param_3 + 4;
          *puVar12 = (char)*piVar7;
          puVar12 = puVar12 + lVar10;
        } while (iVar8 != 0);
      }
      break;
    case 9:
      goto switchD_031a4ae0_caseD_9;
    case 10:
      if ((0 < iVar8) && (bVar5 != 0)) {
        iVar13 = 0;
        do {
          if (uVar14 - 1 < 3) {
            lVar16 = 0;
          }
          else {
            lVar17 = 0;
            lVar16 = 0;
            do {
              piVar7 = (int *)((long)param_3 + lVar17);
              pfVar4 = (float *)((long)puVar11 + lVar17);
              *pfVar4 = (float)*piVar7;
              pfVar4[1] = (float)piVar7[1];
              lVar16 = lVar16 + -4;
              pfVar4[2] = (float)piVar7[2];
              lVar17 = lVar17 + 0x10;
              pfVar4[3] = (float)piVar7[3];
            } while (-lVar16 != (uVar14 & 0xfc));
            param_3 = (int *)((long)param_3 + lVar17);
            lVar16 = -lVar16;
          }
          if ((bVar5 & 3) != 0) {
            lVar16 = lVar16 << 2;
            piVar7 = param_3;
            uVar18 = uVar14 & 3;
            do {
              param_3 = piVar7 + 1;
              uVar18 = uVar18 - 1;
              *(float *)((long)puVar11 + lVar16) = (float)*piVar7;
              lVar16 = lVar16 + 4;
              piVar7 = param_3;
            } while (uVar18 != 0);
          }
          iVar13 = iVar13 + 1;
          puVar11 = (uint *)((long)puVar11 + lVar10);
        } while (iVar13 != iVar8);
      }
    }
    uVar6 = 0;
  }
switchD_031a4ae0_caseD_9:
  return uVar6;
}


