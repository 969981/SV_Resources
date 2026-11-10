/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c3a98; name: FUN_008c3a98
 */


void FUN_008c3a98(long param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort uVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ushort *puVar16;
  long lVar17;
  ushort *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  ulong uVar23;
  
  uVar5 = *(uint *)(param_1 + 0xc0);
  if (uVar5 != 0) {
    uVar8 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0xa0);
      puVar16 = (ushort *)(lVar11 + (ulong)uVar8 * 0xa0);
      uVar15 = (ulong)uVar8;
      if (((*puVar16 != 0) && (puVar18 = (ushort *)(lVar11 + uVar15 * 0xa0 + 0x10), *puVar18 != 0))
         && (0.0 < *(float *)(param_1 + 0x18))) {
        lVar11 = lVar11 + uVar15 * 0xa0;
        uVar23 = 0;
        lVar19 = (long)(int)uVar8;
        plVar1 = (long *)(lVar11 + 0x18);
        do {
          lVar20 = *(long *)(*(long *)(lVar11 + 8) + uVar23 * 8);
          if (*(short *)(lVar20 + 4) != 0 && (*(byte *)(lVar20 + 1) & 1) == 0) {
            plVar21 = *(long **)(*(long *)(*(long *)(param_1 + 0xa8) + uVar15 * 0x30 + 0x18) +
                                uVar23 * 8);
            uVar5 = (**(code **)(*plVar21 + 0x38))(plVar21);
            if (uVar5 != 0) {
              uVar22 = 0;
              do {
                iVar6 = (**(code **)(*plVar21 + 0x40))(plVar21,uVar22);
                uVar7 = (ulong)*(ushort *)(lVar20 + 2);
                puVar9 = (ushort *)(*(long *)(param_1 + 0xa0) + lVar19 * 0xa0 + 0x10);
                if (*(ushort *)(lVar20 + 2) < *puVar9) {
                  iVar6 = iVar6 * 2 + 2;
                  lVar13 = uVar7 << 4;
                  do {
                    lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + lVar19 * 0x30 + 0x10) + lVar13;
                    lVar17 = *(long *)(lVar2 + 8);
                    if (lVar17 != 0) {
                      iVar14 = *(int *)(lVar2 + 4);
                      *param_4 = *param_4 + iVar6;
                      *param_5 = *param_5 + iVar6;
                      iVar3 = *(int *)(lVar17 + 8);
                      if (iVar3 == 1) {
                        iVar14 = iVar14 + 2;
                        *param_4 = *param_4 + iVar14;
                        iVar14 = *param_5 + iVar14 * 2 + 4;
                      }
                      else {
                        if (iVar3 != 0) goto LAB_008c3c1c;
                        *param_4 = *param_4 + 8;
                        iVar14 = *param_5 + 0xe;
                      }
                      *param_5 = iVar14;
                    }
LAB_008c3c1c:
                    uVar7 = uVar7 + 1;
                    lVar13 = lVar13 + 0x10;
                  } while (uVar7 < *puVar9);
                }
                uVar22 = uVar22 + 1;
              } while (uVar22 != uVar5);
            }
            if (uVar23 == 0) {
              uVar7 = (ulong)*(ushort *)(lVar20 + 2);
              puVar9 = (ushort *)(*(long *)(param_1 + 0xa0) + lVar19 * 0xa0 + 0x10);
              if (*(ushort *)(lVar20 + 2) < *puVar9) {
                lVar13 = uVar7 << 4;
                do {
                  lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + lVar19 * 0x30 + 0x10) + lVar13;
                  lVar17 = *(long *)(lVar2 + 8);
                  if (lVar17 != 0) {
                    iVar6 = *(int *)(lVar17 + 4);
                    if (iVar6 == 2) {
                      *param_4 = *param_4 + 4;
                      iVar6 = *param_5 + 4;
                    }
                    else {
                      if (iVar6 != 1) goto LAB_008c3ccc;
                      iVar6 = *(int *)(lVar2 + 4) * 2 + 4;
                      *param_4 = *param_4 + iVar6;
                      iVar6 = *param_5 + iVar6 * 2;
                    }
                    *param_5 = iVar6;
                  }
LAB_008c3ccc:
                  uVar7 = uVar7 + 1;
                  lVar13 = lVar13 + 0x10;
                } while (uVar7 < *puVar9);
              }
            }
            iVar6 = (**(code **)(*plVar21 + 0x48))(plVar21);
            *param_2 = *param_2 + iVar6;
            uVar7 = (ulong)*(ushort *)(lVar20 + 2);
            uVar10 = *puVar18;
            if (*(ushort *)(lVar20 + 2) < uVar10) {
              if (uVar5 < 2) {
                do {
                  if (**(char **)(*plVar1 + uVar7 * 8) == '\0') {
                    *param_3 = *param_3 + iVar6 * 3;
                    uVar10 = *puVar18;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < uVar10);
              }
              else {
                do {
                  pcVar12 = *(char **)(*plVar1 + uVar7 * 8);
                  cVar4 = *pcVar12;
                  if (cVar4 == '\0') {
                    *param_3 = *param_3 + iVar6 * 3;
                  }
                  else if ((cVar4 == '\x01') && (*(int *)(pcVar12 + 8) != 0)) {
                    *param_5 = *param_5 + 2;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < *puVar18);
              }
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < *puVar16);
        uVar5 = *(uint *)(param_1 + 0xc0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
  }
  return;
}


