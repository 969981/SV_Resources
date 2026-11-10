/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a4424; name: FUN_031a4424
 */


undefined8 FUN_031a4424(long param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  byte bVar6;
  float *pfVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  uint *puVar15;
  byte *pbVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  
  puVar13 = (undefined8 *)(param_1 + (long)param_2 * 0x18);
  uVar8 = 0x80040200;
  if (*(byte *)((long)puVar13 + 0xc) - 1 < 10) {
    iVar12 = *(int *)(param_1 + 0x304);
    bVar6 = *(byte *)((long)puVar13 + 0xd);
    uVar18 = (ulong)bVar6;
    puVar15 = (uint *)*puVar13;
    lVar14 = (long)*(int *)(puVar13 + 1);
    switch((uint)*(byte *)((long)puVar13 + 0xc)) {
    case 1:
      if ((0 < iVar12) && (bVar6 != 0)) {
        iVar17 = 0;
        do {
          if (uVar18 - 1 < 7) {
            lVar19 = 0;
          }
          else {
            puVar11 = param_3;
            lVar20 = 7;
            do {
              lVar19 = lVar20;
              pcVar1 = (char *)((long)puVar15 + lVar19);
              *puVar11 = (uint)(byte)pcVar1[-7];
              puVar11[1] = (uint)(byte)pcVar1[-6];
              puVar11[2] = (uint)(byte)pcVar1[-5];
              puVar11[3] = (uint)(byte)pcVar1[-4];
              puVar11[4] = (uint)(byte)pcVar1[-3];
              puVar11[5] = (uint)(byte)pcVar1[-2];
              puVar11[6] = (uint)(byte)pcVar1[-1];
              param_3 = puVar11 + 8;
              puVar11[7] = (int)*pcVar1;
              puVar11 = param_3;
              lVar20 = lVar19 + 8;
            } while ((lVar19 + 8) - (uVar18 & 0xf8) != 7);
            lVar19 = lVar19 + 1;
          }
          if ((bVar6 & 7) != 0) {
            puVar11 = param_3;
            uVar21 = uVar18 & 7;
            do {
              pcVar1 = (char *)((long)puVar15 + lVar19);
              lVar19 = lVar19 + 1;
              param_3 = puVar11 + 1;
              *puVar11 = (int)*pcVar1;
              uVar21 = uVar21 - 1;
              puVar11 = param_3;
            } while (uVar21 != 0);
          }
          iVar17 = iVar17 + 1;
          puVar15 = (uint *)((long)puVar15 + lVar14);
        } while (iVar17 != iVar12);
      }
      break;
    case 2:
      if ((0 < iVar12) && (bVar6 != 0)) {
        iVar17 = 0;
        do {
          if (uVar18 - 1 < 7) {
            lVar19 = 0;
          }
          else {
            puVar11 = param_3;
            lVar20 = 7;
            do {
              lVar19 = lVar20;
              pbVar16 = (byte *)((long)puVar15 + lVar19);
              *puVar11 = (uint)pbVar16[-7];
              puVar11[1] = (uint)pbVar16[-6];
              puVar11[2] = (uint)pbVar16[-5];
              puVar11[3] = (uint)pbVar16[-4];
              puVar11[4] = (uint)pbVar16[-3];
              puVar11[5] = (uint)pbVar16[-2];
              puVar11[6] = (uint)pbVar16[-1];
              param_3 = puVar11 + 8;
              puVar11[7] = (uint)*pbVar16;
              puVar11 = param_3;
              lVar20 = lVar19 + 8;
            } while ((lVar19 + 8) - (uVar18 & 0xf8) != 7);
            lVar19 = lVar19 + 1;
          }
          if ((bVar6 & 7) != 0) {
            puVar11 = param_3;
            uVar21 = uVar18 & 7;
            do {
              pbVar16 = (byte *)((long)puVar15 + lVar19);
              lVar19 = lVar19 + 1;
              param_3 = puVar11 + 1;
              *puVar11 = (uint)*pbVar16;
              uVar21 = uVar21 - 1;
              puVar11 = param_3;
            } while (uVar21 != 0);
          }
          iVar17 = iVar17 + 1;
          puVar15 = (uint *)((long)puVar15 + lVar14);
        } while (iVar17 != iVar12);
      }
      break;
    case 3:
      if ((0 < iVar12) && (bVar6 != 0)) {
        iVar17 = 0;
        puVar11 = puVar15 + 2;
        do {
          if (uVar18 - 1 < 7) {
            lVar20 = 0;
          }
          else {
            lVar20 = 0;
            puVar9 = param_3;
            puVar10 = puVar11;
            do {
              *puVar9 = (int)(short)puVar10[-2];
              puVar9[1] = (int)*(short *)((long)puVar10 + -6);
              puVar9[2] = (int)(short)puVar10[-1];
              puVar9[3] = (int)*(short *)((long)puVar10 + -2);
              puVar9[4] = (int)(short)*puVar10;
              puVar9[5] = (int)*(short *)((long)puVar10 + 2);
              puVar9[6] = (int)(short)puVar10[1];
              param_3 = puVar9 + 8;
              lVar20 = lVar20 + -8;
              puVar9[7] = (int)*(short *)((long)puVar10 + 6);
              puVar10 = puVar10 + 4;
              puVar9 = param_3;
            } while (-lVar20 != (uVar18 & 0xf8));
            lVar20 = -lVar20;
          }
          if ((bVar6 & 7) != 0) {
            lVar20 = lVar20 << 1;
            puVar10 = param_3;
            uVar21 = uVar18 & 7;
            do {
              uVar21 = uVar21 - 1;
              param_3 = puVar10 + 1;
              *puVar10 = (int)*(short *)((long)puVar15 + lVar20);
              lVar20 = lVar20 + 2;
              puVar10 = param_3;
            } while (uVar21 != 0);
          }
          iVar17 = iVar17 + 1;
          puVar15 = (uint *)((long)puVar15 + lVar14);
          puVar11 = (uint *)((long)puVar11 + lVar14);
        } while (iVar17 != iVar12);
      }
      break;
    case 4:
      if ((0 < iVar12) && (bVar6 != 0)) {
        iVar17 = 0;
        puVar11 = puVar15 + 2;
        do {
          if (uVar18 - 1 < 7) {
            lVar20 = 0;
          }
          else {
            lVar20 = 0;
            puVar9 = param_3;
            puVar10 = puVar11;
            do {
              *puVar9 = (uint)(ushort)puVar10[-2];
              puVar9[1] = (uint)*(ushort *)((long)puVar10 + -6);
              puVar9[2] = (uint)(ushort)puVar10[-1];
              puVar9[3] = (uint)*(ushort *)((long)puVar10 + -2);
              puVar9[4] = (uint)(ushort)*puVar10;
              puVar9[5] = (uint)*(ushort *)((long)puVar10 + 2);
              puVar9[6] = (uint)(ushort)puVar10[1];
              param_3 = puVar9 + 8;
              lVar20 = lVar20 + -8;
              puVar9[7] = (uint)*(ushort *)((long)puVar10 + 6);
              puVar10 = puVar10 + 4;
              puVar9 = param_3;
            } while (-lVar20 != (uVar18 & 0xf8));
            lVar20 = -lVar20;
          }
          if ((bVar6 & 7) != 0) {
            lVar20 = lVar20 << 1;
            puVar10 = param_3;
            uVar21 = uVar18 & 7;
            do {
              uVar21 = uVar21 - 1;
              param_3 = puVar10 + 1;
              *puVar10 = (uint)*(ushort *)((long)puVar15 + lVar20);
              lVar20 = lVar20 + 2;
              puVar10 = param_3;
            } while (uVar21 != 0);
          }
          iVar17 = iVar17 + 1;
          puVar15 = (uint *)((long)puVar15 + lVar14);
          puVar11 = (uint *)((long)puVar11 + lVar14);
        } while (iVar17 != iVar12);
      }
      break;
    case 5:
      if ((0 < iVar12) && (bVar6 != 0)) {
        iVar17 = 0;
        do {
          if (uVar18 - 1 < 7) {
            lVar19 = 0;
          }
          else {
            lVar20 = 0;
            lVar19 = 0;
            do {
              puVar2 = (undefined4 *)((long)puVar15 + lVar20);
              puVar3 = (undefined4 *)((long)param_3 + lVar20);
              lVar20 = lVar20 + 0x20;
              *puVar3 = *puVar2;
              puVar3[1] = puVar2[1];
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[4] = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[6] = puVar2[6];
              lVar19 = lVar19 + -8;
              puVar3[7] = puVar2[7];
            } while (-lVar19 != (uVar18 & 0xf8));
            param_3 = (uint *)((long)param_3 + lVar20);
            lVar19 = -lVar19;
          }
          if ((bVar6 & 7) != 0) {
            lVar19 = lVar19 << 2;
            puVar11 = param_3;
            uVar21 = uVar18 & 7;
            do {
              uVar21 = uVar21 - 1;
              param_3 = puVar11 + 1;
              *puVar11 = *(uint *)((long)puVar15 + lVar19);
              lVar19 = lVar19 + 4;
              puVar11 = param_3;
            } while (uVar21 != 0);
          }
          iVar17 = iVar17 + 1;
          puVar15 = (uint *)((long)puVar15 + lVar14);
        } while (iVar17 != iVar12);
      }
      break;
    case 6:
      if ((0 < iVar12) && (bVar6 != 0)) {
        iVar17 = 0;
        do {
          if (uVar18 - 1 < 7) {
            lVar19 = 0;
          }
          else {
            lVar20 = 0;
            lVar19 = 0;
            do {
              puVar2 = (undefined4 *)((long)puVar15 + lVar20);
              puVar3 = (undefined4 *)((long)param_3 + lVar20);
              lVar20 = lVar20 + 0x20;
              *puVar3 = *puVar2;
              puVar3[1] = puVar2[1];
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[4] = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[6] = puVar2[6];
              lVar19 = lVar19 + -8;
              puVar3[7] = puVar2[7];
            } while (-lVar19 != (uVar18 & 0xf8));
            param_3 = (uint *)((long)param_3 + lVar20);
            lVar19 = -lVar19;
          }
          if ((bVar6 & 7) != 0) {
            lVar19 = lVar19 << 2;
            puVar11 = param_3;
            uVar21 = uVar18 & 7;
            do {
              uVar21 = uVar21 - 1;
              param_3 = puVar11 + 1;
              *puVar11 = *(uint *)((long)puVar15 + lVar19);
              lVar19 = lVar19 + 4;
              puVar11 = param_3;
            } while (uVar21 != 0);
          }
          iVar17 = iVar17 + 1;
          puVar15 = (uint *)((long)puVar15 + lVar14);
        } while (iVar17 != iVar12);
      }
      break;
    case 7:
      if (0 < iVar12) {
        do {
          uVar5 = *puVar15;
          puVar15 = (uint *)((long)puVar15 + lVar14);
          *param_3 = uVar5 & 0xff;
          param_3[1] = uVar5 >> 8 & 0xff;
          param_3[2] = uVar5 >> 0x10 & 0xff;
          param_3[3] = uVar5 >> 0x18;
          iVar12 = iVar12 + -1;
          param_3 = param_3 + 4;
        } while (iVar12 != 0);
      }
      break;
    case 8:
      if (0 < iVar12) {
        pbVar16 = (byte *)((long)puVar15 + 3);
        do {
          *param_3 = (uint)pbVar16[-3];
          param_3[1] = (uint)pbVar16[-2];
          param_3[2] = (uint)pbVar16[-1];
          bVar6 = *pbVar16;
          iVar12 = iVar12 + -1;
          pbVar16 = pbVar16 + lVar14;
          param_3[3] = (uint)bVar6;
          param_3 = param_3 + 4;
        } while (iVar12 != 0);
      }
      break;
    case 9:
      goto switchD_031a446c_caseD_9;
    case 10:
      if ((0 < iVar12) && (bVar6 != 0)) {
        iVar17 = 0;
        do {
          if (uVar18 - 1 < 3) {
            lVar19 = 0;
          }
          else {
            lVar20 = 0;
            lVar19 = 0;
            do {
              pfVar7 = (float *)((long)puVar15 + lVar20);
              piVar4 = (int *)((long)param_3 + lVar20);
              *piVar4 = (int)*pfVar7;
              piVar4[1] = (int)pfVar7[1];
              lVar19 = lVar19 + -4;
              piVar4[2] = (int)pfVar7[2];
              lVar20 = lVar20 + 0x10;
              piVar4[3] = (int)pfVar7[3];
            } while (-lVar19 != (uVar18 & 0xfc));
            param_3 = (uint *)((long)param_3 + lVar20);
            lVar19 = -lVar19;
          }
          if ((bVar6 & 3) != 0) {
            lVar19 = lVar19 << 2;
            puVar11 = param_3;
            uVar21 = uVar18 & 3;
            do {
              pfVar7 = (float *)((long)puVar15 + lVar19);
              uVar21 = uVar21 - 1;
              lVar19 = lVar19 + 4;
              param_3 = puVar11 + 1;
              *puVar11 = (int)*pfVar7;
              puVar11 = param_3;
            } while (uVar21 != 0);
          }
          iVar17 = iVar17 + 1;
          puVar15 = (uint *)((long)puVar15 + lVar14);
        } while (iVar17 != iVar12);
      }
    }
    uVar8 = 0;
  }
switchD_031a446c_caseD_9:
  return uVar8;
}


