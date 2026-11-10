/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0c268; name: FUN_00e0c268
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e0c268(long param_1,long *param_2,undefined4 param_3)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  ulong *extraout_x1;
  ulong *extraout_x1_00;
  ulong *extraout_x1_01;
  char *pcVar12;
  ulong *extraout_x1_02;
  undefined8 uVar13;
  long *plVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  code *pcVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  char *pcVar23;
  long lVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  long lVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined8 local_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  long *local_70 [2];
  
  FUN_00e0e61c(local_100);
  uVar9 = (**(code **)(**(long **)(param_1 + 0x58) + 0x70))();
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x1d8);
  }
  FUN_00cb42bc(local_70,local_100,uVar9,uVar13,0);
  FUN_00e0e6ec(local_100);
  plVar10 = (long *)(**(code **)(*local_70[0] + 0x40))(local_70[0],PTR_DAT_047ddc18);
  plVar11 = *(long **)(param_1 + 0x48);
  plVar14 = (long *)*param_2;
  if (plVar11 != plVar14) {
    if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
      plVar14 = plVar14 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = *plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar11 = *(long **)(param_1 + 0x48);
      plVar14 = (long *)*param_2;
    }
    *(long **)(param_1 + 0x48) = plVar14;
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar14 = plVar11 + 2;
      do {
        lVar20 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar20 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))();
      }
    }
  }
  puVar7 = PTR_DAT_047ddc28;
  if (plVar10 != (long *)0x0) {
    puVar15 = (ulong *)PTR_DAT_047e3300;
    while (uVar21 = *puVar15, ((uint)uVar21 >> 3 & 1) == 0) {
      if (((uVar21 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
      goto LAB_00e0c390;
    }
    if (puVar15 != (ulong *)0x0) {
      pcVar23 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar21 & 7) + 2];
      goto LAB_00e0c394;
    }
LAB_00e0c390:
    pcVar23 = (char *)0x0;
LAB_00e0c394:
    if (0 < (int)plVar10[1]) {
      lVar20 = 0;
      while( true ) {
        lVar24 = *plVar10;
        plVar14 = *(long **)(lVar24 + lVar20 * 0x18 + 0x10);
        if (plVar14 == (long *)0x0) break;
        puVar16 = (undefined8 *)*plVar14;
        if (puVar16 == (undefined8 *)0x0) {
          puVar16 = (undefined8 *)puVar7;
          do {
            puVar15 = (ulong *)puVar7;
            if (((uint)*puVar16 >> 0xb & 1) != 0) {
              uVar3 = (uint)*puVar16 & 0x7ff;
              pcVar17 = (code *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar3) +
                                                     POPCOUNT((char)(uVar3 >> 8))) + 2];
              if (pcVar17 != (code *)0x0) goto LAB_00e0c3d4;
              break;
            }
            puVar16 = (undefined8 *)puVar16[1];
          } while (puVar16 != (undefined8 *)0x0);
        }
        else {
          pcVar17 = (code *)*puVar16;
LAB_00e0c3d4:
          (*pcVar17)();
          puVar15 = extraout_x1;
          if (extraout_x1 == (ulong *)0x0) break;
        }
        do {
          uVar21 = *puVar15;
          if (((uint)uVar21 >> 3 & 1) != 0) {
            pcVar12 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar21 & 7) + 2];
            goto LAB_00e0c400;
          }
        } while (((uVar21 & 1) == 0) &&
                (puVar1 = puVar15 + 1, puVar15 = (ulong *)*puVar1, (ulong *)*puVar1 != (ulong *)0x0)
                );
LAB_00e0c410:
        lVar20 = lVar20 + 1;
        if ((int)plVar10[1] <= lVar20) goto LAB_00e0c714;
      }
      pcVar12 = (char *)(*(ulong *)(lVar24 + lVar20 * 0x18 + 8) & 0xfffffffffffffffe);
LAB_00e0c400:
      if ((pcVar12 == (char *)0x0) || (iVar8 = strcmp(pcVar23,pcVar12), iVar8 != 0))
      goto LAB_00e0c410;
      plVar14 = *(long **)(*plVar10 + lVar20 * 0x18 + 0x10);
      if (plVar14 == (long *)0x0) goto LAB_00e0c714;
      if (plVar14[1] != 0) {
        plVar11 = plVar14 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      bVar5 = false;
      puVar15 = (ulong *)PTR_DAT_047e3300;
      plVar11 = (long *)PTR_PTR_047d1bb0;
LAB_00e0c4bc:
      plVar22 = plVar14;
      lVar38 = plVar22[0x13];
      lVar19 = plVar22[0x12];
      lVar24 = plVar22[0x15];
      lVar20 = plVar22[0x14];
      iVar8 = -(uint)((float)lVar19 <= (float)lVar20);
      iVar39 = -(uint)((float)((ulong)lVar19 >> 0x20) <= (float)((ulong)lVar20 >> 0x20));
      iVar40 = -(uint)((float)lVar38 <= (float)lVar24);
      if (CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar8 >> 0x18) &
                   (byte)((uint)iVar40 >> 0x18),
                   CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar8 >> 0x10) &
                            (byte)((uint)iVar40 >> 0x10),
                            CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar8 >> 8) &
                                     (byte)((uint)iVar40 >> 8),
                                     (byte)iVar39 & (byte)iVar8 & (byte)iVar40))) == 0) {
LAB_00e0c68c:
        plVar22[0x13] = -0x4bffffff4c000000;
        plVar22[0x12] = -0x4bffffff4c000000;
        plVar22[0x15] = 0x3400000034000000;
        plVar22[0x14] = 0x3400000034000000;
      }
      else {
        uVar13 = ((undefined8 *)*plVar11)[1];
        uVar9 = *(undefined8 *)*plVar11;
        bVar25 = (byte)((ulong)uVar9 >> 8);
        bVar26 = (byte)((ulong)uVar9 >> 0x10);
        bVar27 = (byte)((ulong)uVar9 >> 0x18);
        iVar8 = CONCAT13(bVar27 & (byte)((ulong)lVar19 >> 0x18),
                         CONCAT12(bVar26 & (byte)((ulong)lVar19 >> 0x10),
                                  CONCAT11(bVar25 & (byte)((ulong)lVar19 >> 8),
                                           (byte)uVar9 & (byte)lVar19)));
        bVar28 = (byte)((ulong)uVar9 >> 0x20);
        bVar29 = (byte)((ulong)uVar9 >> 0x28);
        bVar30 = (byte)((ulong)uVar9 >> 0x30);
        bVar31 = (byte)((ulong)uVar9 >> 0x38);
        bVar32 = (byte)((ulong)uVar13 >> 8);
        bVar33 = (byte)((ulong)uVar13 >> 0x10);
        bVar34 = (byte)((ulong)uVar13 >> 0x18);
        iVar35 = -(uint)(iVar8 == (int)uVar9);
        iVar40 = (int)((ulong)uVar9 >> 0x20);
        iVar36 = -(uint)((int)(CONCAT17(bVar31 & (byte)((ulong)lVar19 >> 0x38),
                                        CONCAT16(bVar30 & (byte)((ulong)lVar19 >> 0x30),
                                                 CONCAT15(bVar29 & (byte)((ulong)lVar19 >> 0x28),
                                                          CONCAT14(bVar28 & (byte)((ulong)lVar19 >>
                                                                                  0x20),iVar8)))) >>
                              0x20) == iVar40);
        iVar37 = -(uint)(CONCAT13(bVar34 & (byte)((ulong)lVar38 >> 0x18),
                                  CONCAT12(bVar33 & (byte)((ulong)lVar38 >> 0x10),
                                           CONCAT11(bVar32 & (byte)((ulong)lVar38 >> 8),
                                                    (byte)uVar13 & (byte)lVar38))) == (int)uVar13);
        iVar8 = CONCAT13((byte)((ulong)lVar20 >> 0x18) & bVar27,
                         CONCAT12((byte)((ulong)lVar20 >> 0x10) & bVar26,
                                  CONCAT11((byte)((ulong)lVar20 >> 8) & bVar25,
                                           (byte)lVar20 & (byte)uVar9)));
        iVar39 = -(uint)(iVar8 == (int)uVar9);
        iVar8 = -(uint)((int)(CONCAT17((byte)((ulong)lVar20 >> 0x38) & bVar31,
                                       CONCAT16((byte)((ulong)lVar20 >> 0x30) & bVar30,
                                                CONCAT15((byte)((ulong)lVar20 >> 0x28) & bVar29,
                                                         CONCAT14((byte)((ulong)lVar20 >> 0x20) &
                                                                  bVar28,iVar8)))) >> 0x20) ==
                       iVar40);
        iVar40 = -(uint)(CONCAT13((byte)((ulong)lVar24 >> 0x18) & bVar34,
                                  CONCAT12((byte)((ulong)lVar24 >> 0x10) & bVar33,
                                           CONCAT11((byte)((ulong)lVar24 >> 8) & bVar32,
                                                    (byte)lVar24 & (byte)uVar13))) == (int)uVar13);
        if (CONCAT13(~(byte)((uint)iVar36 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18) &
                     ~(byte)((uint)iVar37 >> 0x18),
                     CONCAT12(~(byte)((uint)iVar36 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10) &
                              ~(byte)((uint)iVar37 >> 0x10),
                              CONCAT11(~(byte)((uint)iVar36 >> 8) & ~(byte)((uint)iVar35 >> 8) &
                                       ~(byte)((uint)iVar37 >> 8),
                                       ~(byte)iVar36 & ~(byte)iVar35 & ~(byte)iVar37))) == 0 ||
            CONCAT13(~(byte)((uint)iVar8 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18) &
                     ~(byte)((uint)iVar40 >> 0x18),
                     CONCAT12(~(byte)((uint)iVar8 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10) &
                              ~(byte)((uint)iVar40 >> 0x10),
                              CONCAT11(~(byte)((uint)iVar8 >> 8) & ~(byte)((uint)iVar39 >> 8) &
                                       ~(byte)((uint)iVar40 >> 8),
                                       ~(byte)iVar8 & ~(byte)iVar39 & ~(byte)iVar40))) == 0)
        goto LAB_00e0c68c;
      }
      iVar8 = *(int *)(param_1 + 0x98);
      lVar20 = (long)iVar8;
      if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar8) {
        FUN_029fbf34((long *)(param_1 + 0x90),PTR_PTR_047d1a50,lVar20 + 1);
        iVar8 = *(int *)(param_1 + 0x98);
        puVar15 = (ulong *)PTR_DAT_047e3300;
      }
      *(long **)(*(long *)(param_1 + 0x90) + (long)iVar8 * 8) = plVar22;
      if (plVar22[1] != 0) {
        plVar14 = plVar22 + 2;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = *plVar14 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(int *)(param_1 + 0x98) = (int)(lVar20 + 1);
      if ((!bVar5) && (0 < (int)plVar22[10])) {
        bVar5 = true;
      }
      while (uVar21 = *puVar15, ((uint)uVar21 >> 3 & 1) == 0) {
        if (((uVar21 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
        goto LAB_00e0c590;
      }
      if (puVar15 != (ulong *)0x0) {
        pcVar23 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar21 & 7) + 2];
        goto LAB_00e0c594;
      }
LAB_00e0c590:
      pcVar23 = (char *)0x0;
LAB_00e0c594:
      iVar8 = (int)plVar10[1];
      uVar18 = (long)iVar8 & ((long)iVar8 >> 0x3f ^ 0xffffffffffffffffU);
      uVar21 = 0;
      lVar20 = 0x10;
      do {
        if (uVar18 == uVar21) goto LAB_00e0c5c8;
        uVar21 = uVar21 + 1;
        puVar16 = (undefined8 *)(*plVar10 + lVar20);
        lVar20 = lVar20 + 0x18;
      } while ((long *)*puVar16 != plVar22);
      uVar18 = uVar21 & 0xffffffff;
LAB_00e0c5c8:
      if ((int)uVar18 < iVar8) {
        lVar20 = (long)(int)uVar18;
        do {
          lVar24 = *plVar10;
          plVar14 = *(long **)(lVar24 + lVar20 * 0x18 + 0x10);
          if (plVar14 == (long *)0x0) {
LAB_00e0c610:
            pcVar12 = (char *)(*(ulong *)(lVar24 + lVar20 * 0x18 + 8) & 0xfffffffffffffffe);
LAB_00e0c61c:
            if ((pcVar12 != (char *)0x0) && (iVar8 = strcmp(pcVar23,pcVar12), iVar8 == 0))
            goto LAB_00e0c69c;
          }
          else {
            puVar16 = (undefined8 *)*plVar14;
            if (puVar16 == (undefined8 *)0x0) {
              puVar16 = (undefined8 *)PTR_DAT_047ddc28;
              do {
                puVar15 = (ulong *)PTR_DAT_047ddc28;
                if (((uint)*puVar16 >> 0xb & 1) != 0) {
                  uVar3 = (uint)*puVar16 & 0x7ff;
                  pcVar17 = (code *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar3) +
                                                         POPCOUNT((char)(uVar3 >> 8))) + 2];
                  if (pcVar17 != (code *)0x0) goto LAB_00e0c5f0;
                  break;
                }
                puVar16 = (undefined8 *)puVar16[1];
              } while (puVar16 != (undefined8 *)0x0);
            }
            else {
              pcVar17 = (code *)*puVar16;
LAB_00e0c5f0:
              (*pcVar17)();
              puVar15 = extraout_x1_00;
              if (extraout_x1_00 == (ulong *)0x0) goto LAB_00e0c610;
            }
            do {
              uVar21 = *puVar15;
              if (((uint)uVar21 >> 3 & 1) != 0) {
                pcVar12 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar21 & 7) + 2];
                goto LAB_00e0c61c;
              }
            } while (((uVar21 & 1) == 0) &&
                    (puVar1 = puVar15 + 1, puVar15 = (ulong *)*puVar1,
                    (ulong *)*puVar1 != (ulong *)0x0));
          }
          lVar20 = lVar20 + 1;
          if ((int)plVar10[1] <= lVar20) break;
        } while( true );
      }
      goto LAB_00e0c80c;
    }
LAB_00e0c714:
    bVar5 = false;
    goto LAB_00e0c718;
  }
  FUN_00e0e61c(local_100);
  uVar9 = (**(code **)(**(long **)(param_1 + 0x58) + 0x70))();
  if (*(long *)(param_1 + 0x58) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x1d8);
  }
  plVar14 = (long *)FUN_00e0e878(local_100,uVar9,uVar13);
  FUN_00e0e6ec(local_100);
  if (plVar14 == (long *)0x0) {
    uVar9 = 0;
    goto LAB_00e0d094;
  }
  lVar24 = plVar14[0x13];
  lVar20 = plVar14[0x12];
  lVar38 = plVar14[0x15];
  lVar19 = plVar14[0x14];
  uVar13 = (*(undefined8 **)PTR_PTR_047d1bb0)[1];
  uVar9 = **(undefined8 **)PTR_PTR_047d1bb0;
  bVar25 = (byte)((ulong)uVar9 >> 8);
  bVar26 = (byte)((ulong)uVar9 >> 0x10);
  bVar27 = (byte)((ulong)uVar9 >> 0x18);
  bVar28 = (byte)((ulong)uVar9 >> 0x20);
  bVar29 = (byte)((ulong)uVar9 >> 0x28);
  bVar30 = (byte)((ulong)uVar9 >> 0x30);
  bVar31 = (byte)((ulong)uVar9 >> 0x38);
  bVar32 = (byte)((ulong)uVar13 >> 8);
  bVar33 = (byte)((ulong)uVar13 >> 0x10);
  bVar34 = (byte)((ulong)uVar13 >> 0x18);
  iVar41 = -(uint)(CONCAT13(bVar27 & (byte)((ulong)lVar20 >> 0x18),
                            CONCAT12(bVar26 & (byte)((ulong)lVar20 >> 0x10),
                                     CONCAT11(bVar25 & (byte)((ulong)lVar20 >> 8),
                                              (byte)uVar9 & (byte)lVar20))) == (int)uVar9);
  iVar39 = (int)((ulong)uVar9 >> 0x20);
  iVar42 = -(uint)(CONCAT13(bVar31 & (byte)((ulong)lVar20 >> 0x38),
                            CONCAT12(bVar30 & (byte)((ulong)lVar20 >> 0x30),
                                     CONCAT11(bVar29 & (byte)((ulong)lVar20 >> 0x28),
                                              bVar28 & (byte)((ulong)lVar20 >> 0x20)))) == iVar39);
  iVar43 = -(uint)(CONCAT13(bVar34 & (byte)((ulong)lVar24 >> 0x18),
                            CONCAT12(bVar33 & (byte)((ulong)lVar24 >> 0x10),
                                     CONCAT11(bVar32 & (byte)((ulong)lVar24 >> 8),
                                              (byte)uVar13 & (byte)lVar24))) == (int)uVar13);
  iVar8 = -(uint)(CONCAT13((byte)((ulong)lVar19 >> 0x18) & bVar27,
                           CONCAT12((byte)((ulong)lVar19 >> 0x10) & bVar26,
                                    CONCAT11((byte)((ulong)lVar19 >> 8) & bVar25,
                                             (byte)lVar19 & (byte)uVar9))) == (int)uVar9);
  iVar39 = -(uint)(CONCAT13((byte)((ulong)lVar19 >> 0x38) & bVar31,
                            CONCAT12((byte)((ulong)lVar19 >> 0x30) & bVar30,
                                     CONCAT11((byte)((ulong)lVar19 >> 0x28) & bVar29,
                                              (byte)((ulong)lVar19 >> 0x20) & bVar28))) == iVar39);
  iVar40 = -(uint)(CONCAT13((byte)((ulong)lVar38 >> 0x18) & bVar34,
                            CONCAT12((byte)((ulong)lVar38 >> 0x10) & bVar33,
                                     CONCAT11((byte)((ulong)lVar38 >> 8) & bVar32,
                                              (byte)lVar38 & (byte)uVar13))) == (int)uVar13);
  iVar35 = -(uint)((float)lVar20 <= (float)lVar19);
  iVar36 = -(uint)((float)((ulong)lVar20 >> 0x20) <= (float)((ulong)lVar19 >> 0x20));
  iVar37 = -(uint)((float)lVar24 <= (float)lVar38);
  if ((CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                (byte)((uint)iVar37 >> 0x18),
                CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                         (byte)((uint)iVar37 >> 0x10),
                         CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar35 >> 8) &
                                  (byte)((uint)iVar37 >> 8),
                                  (byte)iVar36 & (byte)iVar35 & (byte)iVar37))) == 0 ||
      CONCAT13(~(byte)((uint)iVar42 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18) &
               ~(byte)((uint)iVar43 >> 0x18),
               CONCAT12(~(byte)((uint)iVar42 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10) &
                        ~(byte)((uint)iVar43 >> 0x10),
                        CONCAT11(~(byte)((uint)iVar42 >> 8) & ~(byte)((uint)iVar41 >> 8) &
                                 ~(byte)((uint)iVar43 >> 8),
                                 ~(byte)iVar42 & ~(byte)iVar41 & ~(byte)iVar43))) == 0) ||
      CONCAT13(~(byte)((uint)iVar39 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18) &
               ~(byte)((uint)iVar40 >> 0x18),
               CONCAT12(~(byte)((uint)iVar39 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10) &
                        ~(byte)((uint)iVar40 >> 0x10),
                        CONCAT11(~(byte)((uint)iVar39 >> 8) & ~(byte)((uint)iVar8 >> 8) &
                                 ~(byte)((uint)iVar40 >> 8),
                                 ~(byte)iVar39 & ~(byte)iVar8 & ~(byte)iVar40))) == 0) {
    plVar14[0x13] = -0x4bffffff4c000000;
    plVar14[0x12] = -0x4bffffff4c000000;
    plVar14[0x15] = 0x3400000034000000;
    plVar14[0x14] = 0x3400000034000000;
  }
  if (plVar14[1] != 0) {
    plVar10 = plVar14 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  iVar8 = *(int *)(param_1 + 0x98);
  lVar20 = (long)iVar8;
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar8) {
    FUN_029fbf34(param_1 + 0x90,PTR_PTR_047d1a50,lVar20 + 1);
    iVar8 = *(int *)(param_1 + 0x98);
  }
  *(long **)(*(long *)(param_1 + 0x90) + (long)iVar8 * 8) = plVar14;
  *(int *)(param_1 + 0x98) = (int)(lVar20 + 1);
  if (plVar14[1] != 0) {
    plVar10 = plVar14 + 2;
    do {
      lVar20 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  puVar7 = PTR_DAT_047d1a08;
  local_100[0] = 0x88;
  plVar14 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_100,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar14,"hkaiDirectedGraphExplicitCost");
  }
  FUN_00e0e7cc(plVar14);
  iVar8 = *(int *)(param_1 + 0xb8);
  lVar20 = (long)iVar8;
  if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) <= iVar8) {
    FUN_029fc110((long *)(param_1 + 0xb0),PTR_PTR_047d1a50,lVar20 + 1);
    iVar8 = *(int *)(param_1 + 0xb8);
  }
  *(long **)(*(long *)(param_1 + 0xb0) + (long)iVar8 * 8) = plVar14;
  if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
    plVar10 = plVar14 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(int *)(param_1 + 0xb8) = (int)(lVar20 + 1);
  FUN_00e0e80c(local_100);
  uStack_e8 = _UNK_03cabe68;
  local_f0 = _DAT_03cabe60;
  FUN_00e0ef3c(**(undefined8 **)(param_1 + 0x90),**(undefined8 **)(param_1 + 0xb0),local_100);
  if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
    plVar10 = plVar14 + 2;
    do {
      lVar20 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  FUN_00db2500(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x1e0) = param_3;
  goto LAB_00e0d020;
LAB_00e0c69c:
  plVar14 = *(long **)(*plVar10 + lVar20 * 0x18 + 0x10);
  if (plVar14 == (long *)0x0) goto LAB_00e0c80c;
  if (plVar14[1] != 0) {
    plVar11 = plVar14 + 2;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar15 = (ulong *)PTR_DAT_047e3300;
  plVar11 = (long *)PTR_PTR_047d1bb0;
  if (plVar22[1] != 0) {
    plVar2 = plVar22 + 2;
    do {
      lVar20 = *plVar2;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
      puVar15 = (ulong *)PTR_DAT_047e3300;
    }
  }
  goto LAB_00e0c4bc;
LAB_00e0c80c:
  if (plVar22[1] != 0) {
    plVar14 = plVar22 + 2;
    do {
      lVar20 = *plVar14;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
LAB_00e0c718:
  puVar7 = PTR_DAT_047ddc28;
  puVar15 = (ulong *)PTR_DAT_047e3308;
  while (uVar21 = *puVar15, ((uint)uVar21 >> 3 & 1) == 0) {
    if (((uVar21 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
    goto LAB_00e0c734;
  }
  if (puVar15 != (ulong *)0x0) {
    pcVar23 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar21 & 7) + 2];
    goto LAB_00e0c738;
  }
LAB_00e0c734:
  pcVar23 = (char *)0x0;
LAB_00e0c738:
  if (0 < (int)plVar10[1]) {
    lVar20 = 0;
    while( true ) {
      lVar24 = *plVar10;
      plVar14 = *(long **)(lVar24 + lVar20 * 0x18 + 0x10);
      if (plVar14 == (long *)0x0) break;
      puVar16 = (undefined8 *)*plVar14;
      if (puVar16 == (undefined8 *)0x0) {
        puVar16 = (undefined8 *)puVar7;
        do {
          puVar15 = (ulong *)puVar7;
          if (((uint)*puVar16 >> 0xb & 1) != 0) {
            uVar3 = (uint)*puVar16 & 0x7ff;
            pcVar17 = (code *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar3) +
                                                   POPCOUNT((char)(uVar3 >> 8))) + 2];
            if (pcVar17 != (code *)0x0) goto LAB_00e0c770;
            break;
          }
          puVar16 = (undefined8 *)puVar16[1];
        } while (puVar16 != (undefined8 *)0x0);
      }
      else {
        pcVar17 = (code *)*puVar16;
LAB_00e0c770:
        (*pcVar17)();
        puVar15 = extraout_x1_01;
        if (extraout_x1_01 == (ulong *)0x0) break;
      }
      do {
        uVar21 = *puVar15;
        if (((uint)uVar21 >> 3 & 1) != 0) {
          pcVar12 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar21 & 7) + 2];
          goto LAB_00e0c79c;
        }
      } while (((uVar21 & 1) == 0) &&
              (puVar1 = puVar15 + 1, puVar15 = (ulong *)*puVar1, (ulong *)*puVar1 != (ulong *)0x0));
LAB_00e0c7ac:
      lVar20 = lVar20 + 1;
      if ((int)plVar10[1] <= lVar20) goto LAB_00e0ca78;
    }
    pcVar12 = (char *)(*(ulong *)(lVar24 + lVar20 * 0x18 + 8) & 0xfffffffffffffffe);
LAB_00e0c79c:
    if ((pcVar12 == (char *)0x0) || (iVar8 = strcmp(pcVar23,pcVar12), iVar8 != 0))
    goto LAB_00e0c7ac;
    plVar14 = *(long **)(*plVar10 + lVar20 * 0x18 + 0x10);
    if (plVar14 == (long *)0x0) goto LAB_00e0ca78;
    if (plVar14[1] != 0) {
      plVar11 = plVar14 + 2;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar15 = (ulong *)PTR_DAT_047e3308;
LAB_00e0c880:
    plVar11 = plVar14;
    iVar8 = *(int *)(param_1 + 0xb8);
    lVar20 = (long)iVar8;
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) <= iVar8) {
      FUN_029fc110((long *)(param_1 + 0xb0),PTR_PTR_047d1a50,lVar20 + 1);
      iVar8 = *(int *)(param_1 + 0xb8);
      puVar15 = (ulong *)PTR_DAT_047e3308;
    }
    *(long **)(*(long *)(param_1 + 0xb0) + (long)iVar8 * 8) = plVar11;
    if (plVar11[1] != 0) {
      plVar14 = plVar11 + 2;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *plVar14 = *plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(int *)(param_1 + 0xb8) = (int)(lVar20 + 1);
    while (uVar21 = *puVar15, ((uint)uVar21 >> 3 & 1) == 0) {
      if (((uVar21 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
      goto LAB_00e0c8dc;
    }
    if (puVar15 != (ulong *)0x0) {
      pcVar23 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar21 & 7) + 2];
      goto LAB_00e0c8e0;
    }
LAB_00e0c8dc:
    pcVar23 = (char *)0x0;
LAB_00e0c8e0:
    iVar8 = (int)plVar10[1];
    uVar18 = (long)iVar8 & ((long)iVar8 >> 0x3f ^ 0xffffffffffffffffU);
    uVar21 = 0;
    lVar20 = 0x10;
    do {
      if (uVar18 == uVar21) goto LAB_00e0c914;
      uVar21 = uVar21 + 1;
      puVar16 = (undefined8 *)(*plVar10 + lVar20);
      lVar20 = lVar20 + 0x18;
    } while ((long *)*puVar16 != plVar11);
    uVar18 = uVar21 & 0xffffffff;
LAB_00e0c914:
    if ((int)uVar18 < iVar8) {
      lVar20 = (long)(int)uVar18;
      do {
        lVar24 = *plVar10;
        plVar14 = *(long **)(lVar24 + lVar20 * 0x18 + 0x10);
        if (plVar14 == (long *)0x0) {
LAB_00e0c95c:
          pcVar12 = (char *)(*(ulong *)(lVar24 + lVar20 * 0x18 + 8) & 0xfffffffffffffffe);
LAB_00e0c968:
          if ((pcVar12 != (char *)0x0) && (iVar8 = strcmp(pcVar23,pcVar12), iVar8 == 0))
          goto LAB_00e0c9d8;
        }
        else {
          puVar16 = (undefined8 *)*plVar14;
          if (puVar16 == (undefined8 *)0x0) {
            puVar16 = (undefined8 *)PTR_DAT_047ddc28;
            do {
              puVar15 = (ulong *)PTR_DAT_047ddc28;
              if (((uint)*puVar16 >> 0xb & 1) != 0) {
                uVar3 = (uint)*puVar16 & 0x7ff;
                pcVar17 = (code *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar3) +
                                                       POPCOUNT((char)(uVar3 >> 8))) + 2];
                if (pcVar17 != (code *)0x0) goto LAB_00e0c93c;
                break;
              }
              puVar16 = (undefined8 *)puVar16[1];
            } while (puVar16 != (undefined8 *)0x0);
          }
          else {
            pcVar17 = (code *)*puVar16;
LAB_00e0c93c:
            (*pcVar17)();
            puVar15 = extraout_x1_02;
            if (extraout_x1_02 == (ulong *)0x0) goto LAB_00e0c95c;
          }
          do {
            uVar21 = *puVar15;
            if (((uint)uVar21 >> 3 & 1) != 0) {
              pcVar12 = (char *)puVar15[(ulong)(byte)POPCOUNT((byte)uVar21 & 7) + 2];
              goto LAB_00e0c968;
            }
          } while (((uVar21 & 1) == 0) &&
                  (puVar1 = puVar15 + 1, puVar15 = (ulong *)*puVar1,
                  (ulong *)*puVar1 != (ulong *)0x0));
        }
        lVar20 = lVar20 + 1;
        if ((int)plVar10[1] <= lVar20) break;
      } while( true );
    }
    goto LAB_00e0ca48;
  }
  goto LAB_00e0ca78;
LAB_00e0c9d8:
  plVar14 = *(long **)(*plVar10 + lVar20 * 0x18 + 0x10);
  if (plVar14 == (long *)0x0) goto LAB_00e0ca48;
  if (plVar14[1] != 0) {
    plVar22 = plVar14 + 2;
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = *plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar15 = (ulong *)PTR_DAT_047e3308;
  if (plVar11[1] != 0) {
    plVar22 = plVar11 + 2;
    do {
      lVar20 = *plVar22;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *plVar22 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
      puVar15 = (ulong *)PTR_DAT_047e3308;
    }
  }
  goto LAB_00e0c880;
LAB_00e0ca48:
  if (plVar11[1] != 0) {
    plVar14 = plVar11 + 2;
    do {
      lVar20 = *plVar14;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
LAB_00e0ca78:
  FUN_00db2500(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x1e0) = param_3;
  if (bVar5) {
    if (*(int *)(param_1 + 0x98) != 0) {
      plVar14 = *(long **)(param_1 + 0x90);
      plVar10 = plVar14 + *(int *)(param_1 + 0x98);
      do {
        if (0 < *(int *)(*plVar14 + 0x50)) {
          lVar20 = *(long *)(*(long *)(*plVar14 + 0x48) + 8);
          *(int *)(lVar20 + 0x18) = *(int *)(lVar20 + 0x18) + *(int *)(param_1 + 0x1e0) * 1000000;
          *(int *)(*(long *)(*(long *)(*plVar14 + 0x48) + 8) + 0x1c) =
               *(int *)(lVar20 + 0x1c) + *(int *)(param_1 + 0x1e0) * 1000000;
          if (1 < *(int *)(*plVar14 + 0x50)) {
            lVar20 = *(long *)(*(long *)(*plVar14 + 0x48) + 0x18);
            *(int *)(lVar20 + 0x18) = *(int *)(lVar20 + 0x18) + *(int *)(param_1 + 0x1e0) * 1000000;
            *(int *)(*(long *)(*(long *)(*plVar14 + 0x48) + 0x18) + 0x1c) =
                 *(int *)(lVar20 + 0x1c) + *(int *)(param_1 + 0x1e0) * 1000000;
            if (2 < *(int *)(*plVar14 + 0x50)) {
              lVar20 = *(long *)(*(long *)(*plVar14 + 0x48) + 0x28);
              *(int *)(lVar20 + 0x18) =
                   *(int *)(lVar20 + 0x18) + *(int *)(param_1 + 0x1e0) * 1000000;
              *(int *)(*(long *)(*(long *)(*plVar14 + 0x48) + 0x28) + 0x1c) =
                   *(int *)(lVar20 + 0x1c) + *(int *)(param_1 + 0x1e0) * 1000000;
              lVar20 = *plVar14;
              if (3 < *(int *)(lVar20 + 0x50)) {
                lVar19 = 0x38;
                lVar24 = 3;
                do {
                  lVar24 = lVar24 + 1;
                  lVar20 = *(long *)(*(long *)(lVar20 + 0x48) + lVar19);
                  *(int *)(lVar20 + 0x18) =
                       *(int *)(lVar20 + 0x18) + *(int *)(param_1 + 0x1e0) * 1000000;
                  *(int *)(*(long *)(*(long *)(*plVar14 + 0x48) + lVar19) + 0x1c) =
                       *(int *)(lVar20 + 0x1c) + *(int *)(param_1 + 0x1e0) * 1000000;
                  lVar20 = *plVar14;
                  lVar19 = lVar19 + 0x10;
                } while (lVar24 < *(int *)(lVar20 + 0x50));
              }
            }
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar10);
      iVar8 = *(int *)(param_1 + 0x98);
      goto LAB_00e0cbd8;
    }
  }
  else {
LAB_00e0d020:
    iVar8 = *(int *)(param_1 + 0x98);
    if (0 < iVar8) {
      lVar20 = *(long *)(*param_2 + 0x138);
      iVar39 = 0;
      do {
        iVar40 = iVar39 + 1;
        if (iVar40 < iVar8) {
          iVar35 = iVar40;
          do {
            FUN_00e0e114(param_1,iVar39,iVar35,lVar20 + 0x50);
            iVar8 = *(int *)(param_1 + 0x98);
            iVar35 = iVar35 + 1;
          } while (iVar35 < iVar8);
        }
        iVar39 = iVar40;
      } while (iVar40 < iVar8);
LAB_00e0cbd8:
      puVar7 = PTR_DAT_047d1a08;
      if (0 < iVar8) {
        lVar20 = 0;
        do {
          local_100[0] = 0xd0;
          plVar14 = (long *)(**(code **)puVar7)(0,local_100,0);
          if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
            (**(code **)(puVar7 + 0x10))(plVar14,"hkaiNavMeshInstance");
          }
          FUN_00e0d3dc(plVar14);
          FUN_00e0d300(plVar14,*(undefined8 *)(*(long *)(param_1 + 0x90) + lVar20 * 8),
                       (int)lVar20 + *(int *)(param_1 + 0x1e0) * 1000000);
          local_100[0] = 0x90;
          plVar10 = (long *)(**(code **)puVar7)(0,local_100,0);
          if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
            (**(code **)(puVar7 + 0x10))(plVar10,"hkaiDirectedGraphInstance");
          }
          FUN_00e0d688(plVar10);
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar20 * 8);
          iVar8 = *(int *)(param_1 + 0x1e0);
          if ((char)plVar10[6] == '\x01') {
            lVar24 = plVar10[4];
          }
          else {
            lVar24 = FUN_00e0e904();
          }
          FUN_00e0d554(lVar24,uVar9,(int)lVar20 + iVar8 * 1000000);
          FUN_00e0d818(local_100,*param_2,plVar14,0,0,plVar10,0,0);
          iVar8 = *(int *)(param_1 + 0xa8);
          lVar24 = (long)iVar8;
          if ((int)(*(uint *)(param_1 + 0xac) & 0x7fffffff) <= iVar8) {
            FUN_00e0e264((long *)(param_1 + 0xa0),lVar24 + 1);
            iVar8 = *(int *)(param_1 + 0xa8);
          }
          *(long **)(*(long *)(param_1 + 0xa0) + (long)iVar8 * 8) = plVar14;
          if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
            plVar11 = plVar14 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = *plVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          iVar8 = *(int *)(param_1 + 200);
          lVar19 = (long)iVar8;
          *(int *)(param_1 + 0xa8) = (int)(lVar24 + 1);
          if ((int)(*(uint *)(param_1 + 0xcc) & 0x7fffffff) <= iVar8) {
            FUN_00e0e43c((long *)(param_1 + 0xc0),lVar19 + 1);
            iVar8 = *(int *)(param_1 + 200);
          }
          *(long **)(*(long *)(param_1 + 0xc0) + (long)iVar8 * 8) = plVar10;
          if (plVar10[1] != 0) {
            plVar11 = plVar10 + 2;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = *plVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          *(int *)(param_1 + 200) = (int)(lVar19 + 1);
          if (plVar10[1] != 0) {
            plVar11 = plVar10 + 2;
            do {
              lVar24 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar24 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar24 + -1 == 0) {
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
          }
          if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
            plVar10 = plVar14 + 2;
            do {
              lVar24 = *plVar10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = lVar24 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar24 + -1 == 0) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
            }
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 < *(int *)(param_1 + 0x98));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 2;
  uVar9 = 1;
LAB_00e0d094:
  if ((local_70[0] != (long *)0x0) && (local_70[0][1] != 0)) {
    plVar14 = local_70[0] + 2;
    do {
      lVar20 = *plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*local_70[0] + 0x18))();
    }
  }
  return uVar9;
}


