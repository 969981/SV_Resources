/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d807c; name: FUN_030d807c
 */


void FUN_030d807c(long param_1,int *param_2)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  
  lVar25 = *(long *)(param_1 + 0x18);
  lVar20 = *(long *)(*(long *)(param_1 + 0x20) + (long)*param_2 * 8);
  lVar10 = *(long *)(*(long *)(lVar25 + 0x38) + (long)*param_2 * 0x100);
  if (*(char *)(lVar10 + 0x30) == '\x01') {
    uVar8 = *(undefined8 *)(lVar10 + 0x20);
  }
  else {
    uVar8 = FUN_0307d71c();
    lVar25 = *(long *)(param_1 + 0x18);
  }
  FUN_03099a80(uVar8,lVar25,0);
  *(undefined4 *)(lVar20 + 0xa0) = 0;
  if ((-1 < (int)*(uint *)(lVar20 + 0xa4)) && (*(long *)(lVar20 + 0x98) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(lVar20 + 0x98),(ulong)*(uint *)(lVar20 + 0xa4) << 2);
  }
  *(undefined8 *)(lVar20 + 0x98) = 0;
  *(undefined4 *)(lVar20 + 0xa4) = 0x80000000;
  *(undefined4 *)(lVar20 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(lVar20 + 0xb4)) && (*(long *)(lVar20 + 0xa8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(lVar20 + 0xa8),(ulong)*(uint *)(lVar20 + 0xb4) << 2);
  }
  *(undefined8 *)(lVar20 + 0xa8) = 0;
  *(undefined4 *)(lVar20 + 0xb4) = 0x80000000;
  iVar13 = *(int *)PTR_DAT_047e4f38;
  lVar25 = tpidr_el0;
  lVar20 = *(long *)(lVar25 + 0x1000b8);
  if (lVar20 == 0) {
    lVar20 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar20;
  }
  if (*(long *)(lVar20 + (long)iVar13 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  puVar6 = PTR_PTR_047d1a50;
  lVar20 = (long)*param_2;
  lVar25 = *(long *)(*(long *)(param_1 + 0x18) + 0x38) + lVar20 * 0x100;
  iVar13 = *(int *)(lVar25 + 0xb8);
  if (iVar13 != 0) {
    lVar25 = *(long *)(lVar25 + 0xb0);
    lVar20 = lVar25 + (long)iVar13 * 8;
    lVar26 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
    do {
      iVar13 = *(int *)(*(long *)(lVar10 + 0x20) + 0x17c);
      lVar11 = *(long *)(lVar26 + (long)*(int *)(lVar25 + 4) * 0x18);
      lVar21 = *(long *)(lVar11 + 0x20);
      if (*(int *)(lVar11 + 0x18) == iVar13) {
        if (lVar21 != 0) {
          lVar11 = *(long *)(*(long *)(param_1 + 0x20) + (long)*(int *)(lVar11 + 0x1c) * 8);
          if (*(int *)(lVar21 + 0x28) != 0) {
            lVar23 = (long)*(int *)(lVar21 + 0x28) << 4;
            puVar24 = (undefined4 *)(*(long *)(lVar21 + 0x20) + 8);
            do {
              local_68[0] = *puVar24;
              iVar13 = *(int *)(lVar11 + 0xb0);
              lVar14 = (long)iVar13;
              if ((int)(*(uint *)(lVar11 + 0xb4) & 0x7fffffff) <= iVar13) {
                FUN_03078498(lVar11 + 0xa8,puVar6,lVar14 + 1);
                iVar13 = *(int *)(lVar11 + 0xb0);
              }
              *(undefined4 *)(*(long *)(lVar11 + 0xa8) + (long)iVar13 * 4) = local_68[0];
              *(int *)(lVar11 + 0xb0) = (int)(lVar14 + 1);
              FUN_030d9db8(lVar11 + 0xb8,local_68);
              lVar23 = lVar23 + -0x10;
              puVar24 = puVar24 + 4;
            } while (lVar23 != 0);
          }
          iVar3 = *(int *)(lVar21 + 0x68);
          iVar4 = *(int *)(lVar11 + 0x100);
          puVar22 = *(undefined8 **)(lVar21 + 0x60);
          iVar13 = iVar4 + iVar3;
          if ((int)(*(uint *)(lVar11 + 0x104) & 0x7fffffff) < iVar13) {
            FUN_02ebb550((long *)(lVar11 + 0xf8),puVar6,(long)iVar13);
          }
          if (iVar3 != 0) {
            puVar15 = (undefined8 *)(*(long *)(lVar11 + 0xf8) + (long)iVar4 * 0x20);
            uVar16 = (long)iVar3 * 0x20 - 0x20;
            uVar1 = ((uint)(uVar16 >> 5) & 0x7ffffff) + 1;
            puVar12 = puVar22;
            if ((uVar1 & 3) != 0) {
              lVar21 = -((ulong)uVar1 & 3);
              puVar17 = puVar15;
              do {
                uVar8 = puVar12[3];
                puVar15 = puVar17 + 4;
                bVar7 = lVar21 != -1;
                lVar21 = lVar21 + 1;
                puVar17[1] = puVar12[1];
                puVar17[3] = uVar8;
                uVar8 = *puVar12;
                puVar17[2] = puVar12[2];
                *puVar17 = uVar8;
                puVar12 = puVar12 + 4;
                puVar17 = puVar15;
              } while (bVar7);
            }
            if (0x5f < uVar16) {
              do {
                uVar8 = puVar12[3];
                puVar15[1] = puVar12[1];
                puVar15[3] = uVar8;
                uVar8 = *puVar12;
                puVar15[2] = puVar12[2];
                *puVar15 = uVar8;
                uVar8 = puVar12[5];
                puVar15[7] = puVar12[7];
                puVar15[5] = uVar8;
                uVar8 = puVar12[4];
                puVar15[6] = puVar12[6];
                puVar15[4] = uVar8;
                uVar18 = puVar12[9];
                puVar15[0xb] = puVar12[0xb];
                uVar8 = puVar12[10];
                uVar19 = puVar12[8];
                puVar15[9] = uVar18;
                puVar15[10] = uVar8;
                puVar15[8] = uVar19;
                uVar8 = puVar12[0xc];
                uVar18 = puVar12[0xd];
                puVar17 = puVar12 + 0xe;
                uVar19 = puVar12[0xf];
                puVar12 = puVar12 + 0x10;
                puVar15[0xe] = *puVar17;
                puVar15[0xf] = uVar19;
                puVar15[0xc] = uVar8;
                puVar15[0xd] = uVar18;
                puVar15 = puVar15 + 0x10;
              } while (puVar12 != puVar22 + (long)iVar3 * 4);
            }
          }
          goto LAB_030d855c;
        }
      }
      else if (lVar21 != 0 && *(int *)(lVar11 + 0x1c) == iVar13) {
        lVar11 = *(long *)(*(long *)(param_1 + 0x20) + (long)*(int *)(lVar11 + 0x18) * 8);
        if (*(int *)(lVar21 + 0x28) != 0) {
          puVar24 = *(undefined4 **)(lVar21 + 0x20);
          lVar23 = (long)*(int *)(lVar21 + 0x28) << 4;
          do {
            local_70[0] = *puVar24;
            iVar13 = *(int *)(lVar11 + 0xb0);
            lVar14 = (long)iVar13;
            if ((int)(*(uint *)(lVar11 + 0xb4) & 0x7fffffff) <= iVar13) {
              FUN_03078498(lVar11 + 0xa8,puVar6,lVar14 + 1);
              iVar13 = *(int *)(lVar11 + 0xb0);
            }
            *(undefined4 *)(*(long *)(lVar11 + 0xa8) + (long)iVar13 * 4) = local_70[0];
            *(int *)(lVar11 + 0xb0) = (int)(lVar14 + 1);
            FUN_030d9db8(lVar11 + 0xb8,local_70);
            puVar24 = puVar24 + 4;
            lVar23 = lVar23 + -0x10;
          } while (lVar23 != 0);
        }
        iVar3 = *(int *)(lVar21 + 0x58);
        iVar4 = *(int *)(lVar11 + 0x100);
        puVar22 = *(undefined8 **)(lVar21 + 0x50);
        iVar13 = iVar4 + iVar3;
        if ((int)(*(uint *)(lVar11 + 0x104) & 0x7fffffff) < iVar13) {
          FUN_02ebb550((long *)(lVar11 + 0xf8),puVar6,(long)iVar13);
        }
        if (iVar3 != 0) {
          puVar15 = (undefined8 *)(*(long *)(lVar11 + 0xf8) + (long)iVar4 * 0x20);
          uVar16 = (long)iVar3 * 0x20 - 0x20;
          uVar1 = ((uint)(uVar16 >> 5) & 0x7ffffff) + 1;
          puVar12 = puVar22;
          if ((uVar1 & 3) != 0) {
            lVar21 = -((ulong)uVar1 & 3);
            puVar17 = puVar15;
            do {
              uVar8 = puVar12[3];
              puVar15 = puVar17 + 4;
              bVar7 = lVar21 != -1;
              lVar21 = lVar21 + 1;
              puVar17[1] = puVar12[1];
              puVar17[3] = uVar8;
              uVar8 = *puVar12;
              puVar17[2] = puVar12[2];
              *puVar17 = uVar8;
              puVar12 = puVar12 + 4;
              puVar17 = puVar15;
            } while (bVar7);
          }
          if (0x5f < uVar16) {
            do {
              uVar8 = puVar12[3];
              puVar15[1] = puVar12[1];
              puVar15[3] = uVar8;
              uVar8 = *puVar12;
              puVar15[2] = puVar12[2];
              *puVar15 = uVar8;
              uVar8 = puVar12[5];
              puVar15[7] = puVar12[7];
              puVar15[5] = uVar8;
              uVar8 = puVar12[4];
              puVar15[6] = puVar12[6];
              puVar15[4] = uVar8;
              uVar18 = puVar12[9];
              puVar15[0xb] = puVar12[0xb];
              uVar8 = puVar12[10];
              uVar19 = puVar12[8];
              puVar15[9] = uVar18;
              puVar15[10] = uVar8;
              puVar15[8] = uVar19;
              uVar8 = puVar12[0xc];
              uVar18 = puVar12[0xd];
              puVar17 = puVar12 + 0xe;
              uVar19 = puVar12[0xf];
              puVar12 = puVar12 + 0x10;
              puVar15[0xe] = *puVar17;
              puVar15[0xf] = uVar19;
              puVar15[0xc] = uVar8;
              puVar15[0xd] = uVar18;
              puVar15 = puVar15 + 0x10;
            } while (puVar12 != puVar22 + (long)iVar3 * 4);
          }
        }
LAB_030d855c:
        *(int *)(lVar11 + 0x100) = iVar13;
      }
      lVar25 = lVar25 + 8;
    } while (lVar25 != lVar20);
    lVar20 = (long)*param_2;
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x20) + lVar20 * 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar20 * 8) = 0;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar2 = plVar9 + 2;
    do {
      lVar25 = *plVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar25 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  if (*(int *)(param_1 + 0x30) == *param_2) {
    *(undefined1 *)(param_1 + 0x34) = 3;
  }
  return;
}


