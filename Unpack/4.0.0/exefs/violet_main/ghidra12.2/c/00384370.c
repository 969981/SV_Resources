/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00384370; name: FUN_00384370
 */


void FUN_00384370(long param_1,long *param_2)

{
  uint *puVar1;
  short *psVar2;
  short *psVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  undefined4 uVar21;
  uint uVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  undefined2 *puVar29;
  ushort uVar30;
  int iVar31;
  ulong uVar32;
  ushort uVar33;
  int iVar34;
  long lVar35;
  ushort *puVar36;
  int *piVar37;
  ushort *puVar38;
  int iVar39;
  uint uVar40;
  ushort auStack_20 [5];
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  short local_4;
  short local_2;
  
  lVar23 = *(long *)param_2[2];
  uVar40 = *(uint *)(param_2[2] + 0x14);
  puVar1 = (uint *)(param_1 + 0x14b4);
  lVar18 = *param_2;
  *(undefined8 *)puVar1 = DAT_03cb5620;
  if ((int)uVar40 < 1) {
    uVar22 = 0;
    uVar20 = 0xffffffff;
  }
  else {
    uVar27 = 0;
    uVar20 = 0xffffffff;
    puVar29 = (undefined2 *)(lVar18 + 2);
    do {
      while (puVar29[-1] != 0) {
        lVar17 = (long)*(int *)(param_1 + 0x14b4) + 1;
        *(int *)(param_1 + 0x14b4) = (int)lVar17;
        *(int *)(param_1 + lVar17 * 4 + 0xbc0) = (int)uVar27;
        uVar20 = uVar27 & 0xffffffff;
        *(undefined1 *)(param_1 + 0x14bc + uVar27) = 0;
        uVar27 = uVar27 + 1;
        puVar29 = puVar29 + 2;
        if (uVar40 == uVar27) goto LAB_003843fc;
      }
      *puVar29 = 0;
      uVar27 = uVar27 + 1;
      puVar29 = puVar29 + 2;
    } while (uVar40 != uVar27);
LAB_003843fc:
    uVar19 = (uint)uVar20;
    uVar22 = *puVar1;
    if (1 < (int)uVar22) goto LAB_003844e0;
  }
  if (lVar23 == 0) {
    do {
      uVar28 = (uint)uVar20;
      uVar19 = uVar28;
      if ((int)uVar28 < 2) {
        uVar19 = uVar28 + 1;
      }
      uVar20 = (ulong)uVar19;
      *(int *)(param_1 + 0x14b4) = (int)((long)(int)uVar22 + 1);
      uVar7 = 0;
      if ((int)uVar28 < 2) {
        uVar7 = uVar28 + 1;
      }
      *(uint *)(param_1 + ((long)(int)uVar22 + 1) * 4 + 0xbc0) = uVar7;
      *(undefined2 *)(lVar18 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2)) =
           1;
      *(undefined1 *)(param_1 + (int)uVar7 + 0x14bc) = 0;
      uVar22 = *(uint *)(param_1 + 0x14b4);
      *(long *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + -1;
    } while ((int)uVar22 < 2);
  }
  else {
    do {
      uVar28 = (uint)uVar20;
      uVar19 = uVar28;
      if ((int)uVar28 < 2) {
        uVar19 = uVar28 + 1;
      }
      uVar20 = (ulong)uVar19;
      *(int *)(param_1 + 0x14b4) = (int)((long)(int)uVar22 + 1);
      uVar7 = 0;
      if ((int)uVar28 < 2) {
        uVar7 = uVar28 + 1;
      }
      *(uint *)(param_1 + ((long)(int)uVar22 + 1) * 4 + 0xbc0) = uVar7;
      uVar27 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
      *(undefined2 *)(lVar18 + uVar27) = 1;
      *(undefined1 *)(param_1 + (int)uVar7 + 0x14bc) = 0;
      *(long *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + -1;
      *(ulong *)(param_1 + 0x1720) =
           *(long *)(param_1 + 0x1720) - (ulong)*(ushort *)(lVar23 + uVar27 + 2);
      uVar22 = *(uint *)(param_1 + 0x14b4);
    } while ((int)uVar22 < 2);
  }
LAB_003844e0:
  uVar20 = (ulong)(uVar22 >> 1);
  *(uint *)(param_2 + 1) = uVar19;
  do {
    iVar31 = *(int *)(param_1 + uVar20 * 4 + 0xbc0);
    uVar28 = (int)uVar20 * 2;
    uVar27 = uVar20;
    if ((int)uVar28 <= (int)uVar22) {
      uVar27 = uVar20 & 0xffffffff;
      do {
        iVar39 = (int)uVar27;
        if ((int)uVar28 < (int)uVar22) {
          uVar32 = (ulong)(int)uVar28;
          lVar23 = (long)*(int *)(param_1 + 0xbc0 + (uVar32 | 1) * 4);
          lVar17 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar28 * 4);
          uVar30 = *(ushort *)(lVar18 + lVar23 * 4);
          uVar33 = *(ushort *)(lVar18 + lVar17 * 4);
          if (uVar30 < uVar33) {
LAB_0038456c:
            uVar27 = (ulong)uVar28 | 1;
            uVar32 = uVar32 | 1;
          }
          else {
            if (uVar30 != uVar33) goto LAB_0038457c;
            uVar27 = (ulong)uVar28;
            if (*(byte *)(param_1 + 0x14bc + lVar23) <= *(byte *)(param_1 + 0x14bc + lVar17))
            goto LAB_0038456c;
          }
        }
        else {
LAB_0038457c:
          uVar32 = (ulong)(int)uVar28;
          uVar27 = (ulong)uVar28;
        }
        uVar22 = *(uint *)(param_1 + uVar32 * 4 + 0xbc0);
        uVar33 = *(ushort *)
                  (lVar18 + (-(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar22 << 2));
        uVar30 = *(ushort *)(lVar18 + (long)iVar31 * 4);
        if ((uVar30 < uVar33) ||
           ((uVar30 == uVar33 &&
            (*(byte *)(param_1 + iVar31 + 0x14bc) <= *(byte *)(param_1 + (int)uVar22 + 0x14bc)))))
        break;
        *(uint *)(param_1 + (long)iVar39 * 4 + 0xbc0) = uVar22;
        uVar22 = *(uint *)(param_1 + 0x14b4);
        uVar28 = (int)uVar27 * 2;
        iVar39 = (int)uVar27;
      } while ((int)uVar28 <= (int)uVar22);
      uVar27 = (ulong)iVar39;
    }
    *(int *)(param_1 + uVar27 * 4 + 0xbc0) = iVar31;
    if ((long)uVar20 < 2) {
      iVar31 = *(int *)(param_1 + 0x14b4);
      lVar23 = (long)(int)uVar40;
      do {
        iVar15 = iVar31 + -1;
        iVar39 = *(int *)(param_1 + 0xbc4);
        *(int *)(param_1 + 0x14b4) = iVar15;
        iVar8 = *(int *)(param_1 + (long)iVar31 * 4 + 0xbc0);
        *(int *)(param_1 + 0xbc4) = iVar8;
        if (iVar31 < 3) {
          lVar17 = 1;
        }
        else {
          uVar40 = 2;
          uVar22 = 1;
          do {
            uVar28 = uVar40;
            if ((int)uVar40 < iVar15) {
              uVar20 = (ulong)(int)uVar40;
              lVar17 = (long)*(int *)(param_1 + 0xbc0 + (uVar20 | 1) * 4);
              lVar35 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar40 * 4);
              uVar30 = *(ushort *)(lVar18 + lVar17 * 4);
              uVar33 = *(ushort *)(lVar18 + lVar35 * 4);
              if (uVar30 < uVar33) {
LAB_003846c4:
                uVar20 = uVar20 | 1;
                uVar28 = uVar40 | 1;
              }
              else {
                if (uVar30 != uVar33) goto LAB_003846d4;
                if (*(byte *)(param_1 + 0x14bc + lVar17) <= *(byte *)(param_1 + 0x14bc + lVar35))
                goto LAB_003846c4;
              }
            }
            else {
LAB_003846d4:
              uVar20 = (ulong)(int)uVar40;
            }
            uVar40 = *(uint *)(param_1 + uVar20 * 4 + 0xbc0);
            uVar33 = *(ushort *)
                      (lVar18 + (-(ulong)(uVar40 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar40 << 2)
                      );
            uVar30 = *(ushort *)(lVar18 + (long)iVar8 * 4);
            if ((uVar30 < uVar33) ||
               ((uVar30 == uVar33 &&
                (*(byte *)(param_1 + iVar8 + 0x14bc) <= *(byte *)(param_1 + (int)uVar40 + 0x14bc))))
               ) break;
            *(uint *)(param_1 + (long)(int)uVar22 * 4 + 0xbc0) = uVar40;
            iVar15 = *(int *)(param_1 + 0x14b4);
            uVar40 = uVar28 * 2;
            uVar22 = uVar28;
          } while ((int)uVar40 <= iVar15);
          lVar17 = (long)(int)uVar22;
        }
        lVar35 = param_1 + 0xbc0;
        *(int *)(lVar35 + lVar17 * 4) = iVar8;
        lVar17 = (long)*(int *)(param_1 + 0x14b8) + -1;
        iVar31 = *(int *)(param_1 + 0xbc4);
        *(int *)(param_1 + 0x14b8) = (int)lVar17;
        *(int *)(lVar35 + lVar17 * 4) = iVar39;
        lVar17 = (long)*(int *)(param_1 + 0x14b8) + -1;
        *(int *)(param_1 + 0x14b8) = (int)lVar17;
        *(int *)(lVar35 + lVar17 * 4) = iVar31;
        psVar2 = (short *)(lVar18 + (long)iVar39 * 4);
        psVar3 = (short *)(lVar18 + (long)iVar31 * 4);
        puVar38 = (ushort *)(lVar18 + lVar23 * 4);
        *puVar38 = *psVar3 + *psVar2;
        lVar17 = param_1 + 0x14bc;
        bVar9 = *(byte *)(lVar17 + iVar39);
        bVar10 = *(byte *)(lVar17 + iVar31);
        if (bVar10 <= bVar9) {
          bVar10 = bVar9;
        }
        pbVar4 = (byte *)(lVar17 + lVar23);
        *pbVar4 = bVar10 + 1;
        uVar21 = (undefined4)lVar23;
        psVar3[1] = (short)lVar23;
        psVar2[1] = (short)lVar23;
        iVar31 = *(int *)(param_1 + 0x14b4);
        lVar23 = lVar23 + 1;
        *(undefined4 *)(param_1 + 0xbc4) = uVar21;
        if (iVar31 < 2) {
          lVar17 = 1;
        }
        else {
          uVar40 = 2;
          uVar22 = 1;
          do {
            uVar28 = uVar40;
            if ((int)uVar40 < iVar31) {
              uVar20 = (ulong)(int)uVar40;
              lVar35 = (long)*(int *)(param_1 + 0xbc0 + (uVar20 | 1) * 4);
              lVar17 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar40 * 4);
              uVar30 = *(ushort *)(lVar18 + lVar35 * 4);
              uVar33 = *(ushort *)(lVar18 + lVar17 * 4);
              if (uVar30 < uVar33) {
LAB_0038481c:
                uVar20 = uVar20 | 1;
                uVar28 = uVar40 | 1;
              }
              else {
                if (uVar30 != uVar33) goto LAB_0038482c;
                if (*(byte *)(param_1 + 0x14bc + lVar35) <= *(byte *)(param_1 + 0x14bc + lVar17))
                goto LAB_0038481c;
              }
            }
            else {
LAB_0038482c:
              uVar20 = (ulong)(int)uVar40;
            }
            uVar40 = *(uint *)(param_1 + uVar20 * 4 + 0xbc0);
            uVar33 = *(ushort *)
                      (lVar18 + (-(ulong)(uVar40 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar40 << 2)
                      );
            uVar30 = *puVar38;
            if ((uVar30 < uVar33) ||
               ((uVar30 == uVar33 && (*pbVar4 <= *(byte *)(param_1 + (int)uVar40 + 0x14bc)))))
            break;
            *(uint *)(param_1 + (long)(int)uVar22 * 4 + 0xbc0) = uVar40;
            iVar31 = *(int *)(param_1 + 0x14b4);
            uVar40 = uVar28 * 2;
            uVar22 = uVar28;
          } while ((int)uVar40 <= iVar31);
          lVar17 = (long)(int)uVar22;
        }
        *(undefined4 *)(param_1 + lVar17 * 4 + 0xbc0) = uVar21;
        iVar31 = *(int *)(param_1 + 0x14b4);
        if (iVar31 < 2) {
          lVar23 = (long)*(int *)(param_1 + 0x14b8) + -1;
          *(int *)(param_1 + 0x14b8) = (int)lVar23;
          *(undefined4 *)(param_1 + 0xbc0 + lVar23 * 4) = *(undefined4 *)(param_1 + 0xbc4);
          plVar24 = (long *)param_2[2];
          lVar35 = *param_2;
          iVar31 = (int)param_2[1];
          lVar23 = *plVar24;
          lVar17 = plVar24[1];
          iVar39 = (int)plVar24[2];
          iVar8 = (int)plVar24[3];
          lVar25 = (long)iVar8;
          *(undefined8 *)(param_1 + 3000) = 0;
          *(undefined8 *)(param_1 + 0xbb0) = 0;
          *(undefined8 *)(param_1 + 0xba8) = 0;
          *(undefined8 *)(param_1 + 0xba0) = 0;
          *(undefined2 *)
           (lVar35 + (long)*(int *)(param_1 + 0xbc0 + (long)*(int *)(param_1 + 0x14b8) * 4) * 4 + 2)
               = 0;
          iVar15 = *(int *)(param_1 + 0x14b8);
          if (iVar15 < 0x23c) {
            iVar26 = 0;
            if (lVar23 == 0) {
              iVar34 = iVar15 + -0x23c;
              piVar37 = (int *)(param_1 + (long)iVar15 * 4 + 0xbc4);
              do {
                iVar15 = *piVar37;
                lVar23 = lVar35 + (long)iVar15 * 4;
                uVar30 = *(ushort *)(lVar35 + (ulong)*(ushort *)(lVar23 + 2) * 4 + 2);
                if ((int)(uint)uVar30 < iVar8) {
                  iVar12 = uVar30 + 1;
                }
                else {
                  iVar26 = iVar26 + 1;
                  iVar12 = iVar8;
                }
                *(short *)(lVar23 + 2) = (short)iVar12;
                if (iVar15 <= iVar31) {
                  lVar23 = param_1 + (long)iVar12 * 2;
                  *(short *)(lVar23 + 0xba0) = *(short *)(lVar23 + 0xba0) + 1;
                  if (iVar15 < iVar39) {
                    iVar16 = 0;
                  }
                  else {
                    iVar16 = *(int *)(lVar17 + (long)(iVar15 - iVar39) * 4);
                  }
                  *(ulong *)(param_1 + 0x1718) =
                       *(long *)(param_1 + 0x1718) +
                       (ulong)*(ushort *)(lVar35 + (long)iVar15 * 4) *
                       (ulong)(uint)(iVar16 + iVar12);
                }
                bVar13 = iVar34 != -1;
                iVar34 = iVar34 + 1;
                piVar37 = piVar37 + 1;
              } while (bVar13);
            }
            else {
              iVar34 = iVar15 + -0x23c;
              piVar37 = (int *)(param_1 + (long)iVar15 * 4 + 0xbc4);
              do {
                iVar15 = *piVar37;
                lVar14 = lVar35 + (long)iVar15 * 4;
                uVar30 = *(ushort *)(lVar35 + (ulong)*(ushort *)(lVar14 + 2) * 4 + 2);
                if ((int)(uint)uVar30 < iVar8) {
                  iVar12 = uVar30 + 1;
                }
                else {
                  iVar26 = iVar26 + 1;
                  iVar12 = iVar8;
                }
                *(short *)(lVar14 + 2) = (short)iVar12;
                if (iVar15 <= iVar31) {
                  lVar14 = param_1 + (long)iVar12 * 2;
                  *(short *)(lVar14 + 0xba0) = *(short *)(lVar14 + 0xba0) + 1;
                  if (iVar15 < iVar39) {
                    iVar16 = 0;
                  }
                  else {
                    iVar16 = *(int *)(lVar17 + (long)(iVar15 - iVar39) * 4);
                  }
                  lVar14 = (long)iVar15 * 4;
                  uVar20 = (ulong)*(ushort *)(lVar35 + lVar14);
                  *(ulong *)(param_1 + 0x1718) =
                       *(long *)(param_1 + 0x1718) + uVar20 * (uint)(iVar16 + iVar12);
                  *(ulong *)(param_1 + 0x1720) =
                       *(long *)(param_1 + 0x1720) +
                       (iVar16 + (uint)*(ushort *)(lVar23 + lVar14 + 2)) * uVar20;
                }
                bVar13 = iVar34 != -1;
                iVar34 = iVar34 + 1;
                piVar37 = piVar37 + 1;
              } while (bVar13);
            }
            if (iVar26 != 0) {
              puVar38 = (ushort *)(param_1 + lVar25 * 2 + 0xba0);
              do {
                puVar36 = puVar38;
                lVar23 = (lVar25 << 0x20) + 0x100000000;
                do {
                  puVar36 = puVar36 + -1;
                  lVar23 = lVar23 + -0x100000000;
                } while (*puVar36 == 0);
                *puVar36 = *puVar36 - 1;
                lVar23 = param_1 + (lVar23 >> 0x1f);
                *(short *)(lVar23 + 0xba0) = *(short *)(lVar23 + 0xba0) + 2;
                uVar30 = *puVar38;
                uVar33 = uVar30 - 1;
                iVar39 = iVar26 + -2;
                *puVar38 = uVar33;
                bVar13 = 1 < iVar26;
                iVar26 = iVar39;
              } while (iVar39 != 0 && bVar13);
              if (iVar8 != 0) {
                iVar39 = 0x23d;
                if (uVar30 != 1) goto LAB_00384aa0;
                while (lVar25 = lVar25 + -1, (int)lVar25 != 0) {
                  uVar33 = *(ushort *)(param_1 + lVar25 * 2 + 0xba0);
                  if (uVar33 != 0) {
LAB_00384aa0:
                    uVar40 = (uint)uVar33;
                    do {
                      piVar37 = (int *)(param_1 + 0xbbc + (long)iVar39 * 4);
                      do {
                        iVar8 = *piVar37;
                        iVar39 = iVar39 + -1;
                        piVar37 = piVar37 + -1;
                      } while (iVar31 < iVar8);
                      puVar38 = (ushort *)(lVar35 + (long)iVar8 * 4 + 2);
                      uVar30 = *puVar38;
                      if ((uint)lVar25 != (uint)uVar30) {
                        *(ulong *)(param_1 + 0x1718) =
                             *(long *)(param_1 + 0x1718) +
                             (lVar25 - (ulong)uVar30) * (ulong)*(ushort *)(lVar35 + (long)iVar8 * 4)
                        ;
                        *puVar38 = (ushort)lVar25;
                      }
                      uVar40 = uVar40 - 1;
                    } while (uVar40 != 0);
                  }
                }
              }
            }
          }
          auStack_20[1] = *(short *)(param_1 + 0xba0) * 2;
          auStack_20[2] = (auStack_20[1] + *(short *)(param_1 + 0xba2)) * 2;
          auStack_20[3] = (auStack_20[2] + *(short *)(param_1 + 0xba4)) * 2;
          auStack_20[4] = (auStack_20[3] + *(short *)(param_1 + 0xba6)) * 2;
          local_16 = (auStack_20[4] + *(short *)(param_1 + 0xba8)) * 2;
          local_14 = (local_16 + *(short *)(param_1 + 0xbaa)) * 2;
          local_12 = (local_14 + *(short *)(param_1 + 0xbac)) * 2;
          local_10 = (local_12 + *(short *)(param_1 + 0xbae)) * 2;
          local_e = (local_10 + *(short *)(param_1 + 0xbb0)) * 2;
          local_c = (local_e + *(short *)(param_1 + 0xbb2)) * 2;
          local_a = (local_c + *(short *)(param_1 + 0xbb4)) * 2;
          local_8 = (local_a + *(short *)(param_1 + 0xbb6)) * 2;
          local_6 = (*(short *)(param_1 + 3000) + local_8) * 2;
          local_4 = (*(short *)(param_1 + 0xbba) + local_6) * 2;
          local_2 = (local_4 + *(short *)(param_1 + 0xbbc)) * 2;
          if (-1 < (int)uVar19) {
            uVar20 = 0;
            do {
              uVar30 = *(ushort *)(lVar18 + uVar20 * 4 + 2);
              uVar27 = (ulong)uVar30;
              if (uVar27 != 0) {
                uVar22 = (uint)auStack_20[uVar27];
                auStack_20[uVar27] = auStack_20[uVar27] + 1;
                uVar33 = uVar30 & 3;
                uVar40 = uVar30 & 3;
                if (uVar30 - 1 < 3) {
                  uVar28 = 0;
                }
                else {
                  uVar28 = 0;
                  iVar31 = -(uVar30 & 0xfffc);
                  do {
                    uVar7 = uVar22 & 1;
                    uVar5 = uVar22 & 2;
                    uVar6 = uVar22 >> 2;
                    uVar11 = uVar22 >> 3;
                    uVar22 = uVar22 >> 4;
                    uVar28 = uVar11 & 1 |
                             (uVar5 | (uVar28 & 0x1fffffff | uVar7) << 2 | uVar6 & 1) << 1;
                    uVar30 = (ushort)uVar28;
                    uVar28 = uVar28 << 1;
                    iVar31 = iVar31 + 4;
                  } while (iVar31 != 0);
                }
                if (uVar33 != 0) {
                  do {
                    uVar7 = uVar22 & 1;
                    uVar22 = uVar22 >> 1;
                    uVar28 = uVar28 | uVar7;
                    uVar30 = (ushort)uVar28;
                    uVar28 = uVar28 << 1;
                    uVar40 = uVar40 - 1;
                  } while (uVar40 != 0);
                }
                *(ushort *)(lVar18 + uVar20 * 4) = uVar30;
              }
              uVar20 = uVar20 + 1;
            } while (uVar20 != uVar19 + 1);
          }
          return;
        }
      } while( true );
    }
    uVar22 = *puVar1;
    uVar20 = uVar20 - 1;
  } while( true );
}


