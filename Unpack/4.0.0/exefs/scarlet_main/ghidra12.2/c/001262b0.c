/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001262b0; name: FUN_001262b0
 */


undefined8 FUN_001262b0(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  char *pcVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long lVar28;
  
  puVar27 = *(undefined8 **)(param_1 + 0x20);
  uVar6 = *(uint *)(param_1 + 0xc0);
  if ((uVar6 & 0xc) == 0) {
    *(undefined4 *)(puVar27 + 5) = 0;
    return 0;
  }
  lVar28 = *(long *)(*(long *)*puVar27 + 0x18);
  puVar27[4] = param_2 + 4;
  iVar13 = *(int *)(param_1 + 0xbc) + -1;
  *(int *)(param_1 + 0xbc) = iVar13;
  uVar4 = (uint)(iVar13 == 0) & uVar6 >> 3;
  if (uVar4 == 1) {
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb8);
  }
  else if ((uVar6 >> 2 & 1) == 0) {
    return 1;
  }
  if ((*(ushort *)((long)puVar27 + 0x3e) >> 6 & 1) != 0) {
    *(ushort *)((long)puVar27 + 0x3e) = *(ushort *)((long)puVar27 + 0x3e) & 0xffbf;
    return 1;
  }
  if ((*(uint *)(puVar27[4] + -4) & 0xff0000) != 0 ||
      ((&DAT_03cb602b)[(ulong)*(uint *)(puVar27[4] + -4) & 0x7f] & 0x20) == 0) {
    *(undefined8 *)(param_1 + 0x10) = puVar27[1];
  }
  if (uVar4 != 0) {
    FUN_00127080(param_1,3,0xffffffff,0,0);
  }
  if (((uVar6 >> 2 & 1) == 0) || (*(int *)PTR_DAT_047cb848 == 0)) goto LAB_001266f4;
  uVar6 = *(uint *)(param_1 + 0xb4);
  if (*(int *)(lVar28 + 0x18) <= (int)uVar6) {
    uVar6 = 0;
  }
  lVar12 = *(long *)(lVar28 + 0x58);
  iVar13 = (int)((ulong)((param_2 + 4) - *(long *)(lVar28 + 0x40)) >> 2);
  uVar9 = iVar13 - 1;
  if ((int)uVar6 < (int)uVar9) {
    if (lVar12 != 0) {
      if ((int)(uVar9 - uVar6) < 0x40) {
        lVar20 = (long)(int)uVar6 - (long)(int)uVar9;
        pcVar24 = (char *)((int)uVar6 + lVar12);
        iVar15 = 0;
        do {
          pcVar24 = pcVar24 + 1;
          if (*pcVar24 == -0x80) goto LAB_00126418;
          iVar15 = iVar15 + *pcVar24;
          bVar11 = lVar20 != -1;
          lVar20 = lVar20 + 1;
        } while (bVar11);
        if (iVar15 != 0) goto LAB_001265ec;
      }
      else {
LAB_00126418:
        uVar8 = *(uint *)(lVar28 + 0x28);
        if ((uVar8 == 0) || (piVar17 = *(int **)(lVar28 + 0x60), (int)uVar6 < *piVar17)) {
          piVar14 = (int *)(lVar28 + 0x2c);
          iVar15 = -1;
        }
        else {
          uVar23 = uVar6 >> 7;
          uVar5 = uVar8;
          if ((int)uVar8 <= (int)uVar23) {
            uVar5 = uVar23;
          }
          piVar14 = piVar17 + (ulong)uVar23 * 2;
          do {
            uVar25 = uVar23;
            uVar10 = uVar5;
            if (uVar5 == uVar25) break;
            iVar15 = *piVar14;
            piVar14 = piVar14 + 2;
            uVar23 = uVar25 + 1;
            uVar10 = uVar25;
          } while (iVar15 <= (int)uVar6);
          piVar14 = piVar17 + (long)(int)(uVar10 - 1) * 2 + 1;
          iVar15 = piVar17[(long)(int)(uVar10 - 1) * 2];
        }
        iVar16 = *piVar14;
        if (iVar15 < (int)uVar6) {
          uVar18 = (ulong)iVar15;
          uVar22 = ~uVar18;
          uVar21 = (ulong)(uVar6 - iVar15) & 3;
          if ((uVar6 - iVar15 & 3) != 0) {
            uVar26 = uVar18;
            do {
              uVar18 = uVar26 + 1;
              iVar16 = iVar16 + *(char *)(lVar12 + 1 + uVar26);
              uVar21 = uVar21 - 1;
              uVar26 = uVar18;
            } while (uVar21 != 0);
          }
          if (2 < uVar22 + (long)(int)uVar6) {
            lVar20 = (long)(int)uVar6 - uVar18;
            pcVar24 = (char *)(uVar18 + lVar12 + 2);
            do {
              pbVar3 = (byte *)(pcVar24 + -1);
              cVar7 = *pcVar24;
              pcVar1 = pcVar24 + 1;
              pcVar2 = pcVar24 + 2;
              pcVar24 = pcVar24 + 4;
              iVar16 = iVar16 + (uint)*pbVar3 + (int)cVar7 + (int)*pcVar1 + (int)*pcVar2;
              lVar20 = lVar20 + -4;
            } while (lVar20 != 0);
          }
        }
        if ((uVar8 == 0) || (piVar17 = *(int **)(lVar28 + 0x60), iVar13 <= *piVar17)) {
          piVar14 = (int *)(lVar28 + 0x2c);
          iVar15 = -1;
        }
        else {
          uVar6 = uVar9 >> 7;
          if ((int)uVar8 <= (int)uVar6) {
            uVar8 = uVar6;
          }
          piVar14 = piVar17 + (ulong)uVar6 * 2;
          do {
            uVar23 = uVar6;
            uVar5 = uVar8;
            if (uVar8 == uVar23) break;
            iVar15 = *piVar14;
            piVar14 = piVar14 + 2;
            uVar6 = uVar23 + 1;
            uVar5 = uVar23;
          } while (iVar15 < iVar13);
          piVar14 = piVar17 + (long)(int)(uVar5 - 1) * 2 + 1;
          iVar15 = piVar17[(long)(int)(uVar5 - 1) * 2];
        }
        iVar19 = *piVar14;
        if (iVar15 < (int)uVar9) {
          uVar18 = (ulong)iVar15;
          uVar21 = ~uVar18;
          if ((uVar9 - iVar15 & 3) != 0) {
            lVar20 = -((ulong)(uVar9 - iVar15) & 3);
            uVar22 = uVar18;
            do {
              uVar18 = uVar22 + 1;
              iVar19 = iVar19 + *(char *)(lVar12 + 1 + uVar22);
              bVar11 = lVar20 != -1;
              lVar20 = lVar20 + 1;
              uVar22 = uVar18;
            } while (bVar11);
          }
          if (2 < uVar21 + (long)(int)uVar9) {
            lVar20 = uVar18 - (long)(int)uVar9;
            pcVar24 = (char *)(uVar18 + lVar12 + 2);
            do {
              pbVar3 = (byte *)(pcVar24 + -1);
              cVar7 = *pcVar24;
              pcVar1 = pcVar24 + 1;
              pcVar2 = pcVar24 + 2;
              pcVar24 = pcVar24 + 4;
              iVar19 = iVar19 + (uint)*pbVar3 + (int)cVar7 + (int)*pcVar1 + (int)*pcVar2;
              lVar20 = lVar20 + 4;
            } while (lVar20 != 0);
          }
        }
        if (iVar16 != iVar19) goto LAB_001265e8;
      }
    }
  }
  else {
LAB_001265e8:
    if (lVar12 == 0) {
      iVar13 = -1;
    }
    else {
LAB_001265ec:
      uVar6 = *(uint *)(lVar28 + 0x28);
      if ((uVar6 == 0) || (piVar17 = *(int **)(lVar28 + 0x60), iVar13 <= *piVar17)) {
        piVar14 = (int *)(lVar28 + 0x2c);
        iVar15 = -1;
      }
      else {
        uVar8 = uVar9 >> 7;
        if ((int)uVar6 <= (int)uVar8) {
          uVar6 = uVar8;
        }
        piVar14 = piVar17 + (ulong)uVar8 * 2;
        do {
          uVar23 = uVar8;
          uVar5 = uVar6;
          if (uVar6 == uVar23) break;
          iVar15 = *piVar14;
          piVar14 = piVar14 + 2;
          uVar8 = uVar23 + 1;
          uVar5 = uVar23;
        } while (iVar15 < iVar13);
        piVar14 = piVar17 + (long)(int)(uVar5 - 1) * 2 + 1;
        iVar15 = piVar17[(long)(int)(uVar5 - 1) * 2];
      }
      iVar13 = *piVar14;
      if (iVar15 < (int)uVar9) {
        uVar18 = (ulong)iVar15;
        uVar21 = ~uVar18;
        if ((uVar9 - iVar15 & 3) != 0) {
          lVar28 = -((ulong)(uVar9 - iVar15) & 3);
          uVar22 = uVar18;
          do {
            uVar18 = uVar22 + 1;
            iVar13 = iVar13 + *(char *)(lVar12 + 1 + uVar22);
            bVar11 = lVar28 != -1;
            lVar28 = lVar28 + 1;
            uVar22 = uVar18;
          } while (bVar11);
        }
        if (2 < uVar21 + (long)(int)uVar9) {
          lVar28 = uVar18 - (long)(int)uVar9;
          pcVar24 = (char *)(uVar18 + lVar12 + 2);
          do {
            pbVar3 = (byte *)(pcVar24 + -1);
            cVar7 = *pcVar24;
            pcVar1 = pcVar24 + 1;
            pcVar2 = pcVar24 + 2;
            pcVar24 = pcVar24 + 4;
            iVar13 = iVar13 + (uint)*pbVar3 + (int)cVar7 + (int)*pcVar1 + (int)*pcVar2;
            lVar28 = lVar28 + 4;
          } while (lVar28 != 0);
        }
      }
    }
    FUN_00127080(param_1,2,iVar13,0,0);
  }
  *(uint *)(param_1 + 0xb4) = uVar9;
LAB_001266f4:
  if (*(char *)(param_1 + 10) != '\x01') {
    return 1;
  }
  if (uVar4 != 0) {
    *(undefined4 *)(param_1 + 0xbc) = 1;
  }
  puVar27[4] = puVar27[4] + -4;
  *(ushort *)((long)puVar27 + 0x3e) = *(ushort *)((long)puVar27 + 0x3e) | 0x40;
                    /* WARNING: Subroutine does not return */
  FUN_00126bd0(param_1,1);
}


