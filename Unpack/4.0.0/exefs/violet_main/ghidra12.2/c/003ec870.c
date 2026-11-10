/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ec870; name: FUN_003ec870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003ec870(ulong *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  int *piVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  int iVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  int iVar35;
  int iVar37;
  undefined8 uVar36;
  int iVar38;
  int iVar40;
  undefined8 uVar39;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  
  uVar2 = *(uint *)(param_3 + 0x28);
  uVar14 = (ulong)uVar2;
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    return 1;
  }
  uVar20 = uVar2 * 2;
  lVar5 = FUN_003eb9a0(param_2,uVar20);
  if (lVar5 == 0) {
    return 0;
  }
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 0x30);
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  if ((int)uVar2 < 1) {
    uVar19 = 0;
    *(uint *)(param_2 + 1) = uVar20;
    lVar5 = FUN_003eb9a0(param_1,uVar2);
    if (lVar5 == 0) {
      return 0;
    }
    goto LAB_003eca24;
  }
  piVar17 = (int *)*param_2;
  uVar19 = uVar20;
  if ((int)uVar20 < 2) {
    uVar19 = 1;
  }
  uVar6 = (ulong)uVar19;
  iVar4 = (int)param_2[1];
  if (uVar19 < 0x10) {
    uVar7 = 0;
LAB_003ec98c:
    iVar4 = (int)uVar7 - iVar4;
    lVar5 = uVar6 - uVar7;
    puVar10 = (uint *)(piVar17 + uVar7);
    do {
      uVar19 = iVar4 >> 0x1f;
      iVar4 = iVar4 + 1;
      *puVar10 = *puVar10 & uVar19;
      lVar5 = lVar5 + -1;
      puVar10 = puVar10 + 1;
    } while (lVar5 != 0);
  }
  else {
    uVar7 = uVar6 & 0x7ffffff0;
    piVar9 = piVar17 + 8;
    uVar15 = uVar7;
    uVar30 = _DAT_03cab980;
    uVar31 = _UNK_03cab988;
    do {
      iVar35 = (int)uVar30 - iVar4;
      iVar3 = (int)((ulong)uVar30 >> 0x20);
      iVar37 = iVar3 - iVar4;
      iVar38 = (int)uVar31 - iVar4;
      iVar29 = (int)((ulong)uVar31 >> 0x20);
      iVar40 = iVar29 - iVar4;
      uVar33 = *(undefined8 *)(piVar9 + -6);
      uVar32 = *(undefined8 *)(piVar9 + -8);
      uVar36 = *(undefined8 *)(piVar9 + -2);
      uVar34 = *(undefined8 *)(piVar9 + -4);
      bVar21 = (byte)(iVar35 >> 0x1f);
      bVar22 = (byte)(iVar37 >> 0x1f);
      bVar23 = (byte)(iVar38 >> 0x1f);
      bVar24 = (byte)(iVar40 >> 0x1f);
      uVar30 = CONCAT44(iVar3 + 0x10,(int)uVar30 + 0x10);
      uVar31 = CONCAT44(iVar29 + 0x10,(int)uVar31 + 0x10);
      uVar41 = *(undefined8 *)(piVar9 + 2);
      uVar39 = *(undefined8 *)piVar9;
      uVar43 = *(undefined8 *)(piVar9 + 6);
      uVar42 = *(undefined8 *)(piVar9 + 4);
      *(ulong *)(piVar9 + -6) =
           CONCAT17((byte)((ulong)uVar33 >> 0x38) & bVar24,
                    CONCAT16((byte)((ulong)uVar33 >> 0x30) & bVar24,
                             CONCAT15((byte)((ulong)uVar33 >> 0x28) & bVar24,
                                      CONCAT14((byte)((ulong)uVar33 >> 0x20) & bVar24,
                                               CONCAT13((byte)((ulong)uVar33 >> 0x18) & bVar23,
                                                        CONCAT12((byte)((ulong)uVar33 >> 0x10) &
                                                                 bVar23,CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) & bVar23,(byte)uVar33 & bVar23)))))))
      ;
      *(ulong *)(piVar9 + -8) =
           CONCAT17((byte)((ulong)uVar32 >> 0x38) & bVar22,
                    CONCAT16((byte)((ulong)uVar32 >> 0x30) & bVar22,
                             CONCAT15((byte)((ulong)uVar32 >> 0x28) & bVar22,
                                      CONCAT14((byte)((ulong)uVar32 >> 0x20) & bVar22,
                                               CONCAT13((byte)((ulong)uVar32 >> 0x18) & bVar21,
                                                        CONCAT12((byte)((ulong)uVar32 >> 0x10) &
                                                                 bVar21,CONCAT11((byte)((ulong)
                                                  uVar32 >> 8) & bVar21,(byte)uVar32 & bVar21)))))))
      ;
      bVar21 = (byte)(iVar35 + 4 >> 0x1f);
      bVar22 = (byte)(iVar37 + 4 >> 0x1f);
      bVar23 = (byte)(iVar38 + 4 >> 0x1f);
      bVar24 = (byte)(iVar40 + 4 >> 0x1f);
      *(ulong *)(piVar9 + -2) =
           CONCAT17((byte)((ulong)uVar36 >> 0x38) & bVar24,
                    CONCAT16((byte)((ulong)uVar36 >> 0x30) & bVar24,
                             CONCAT15((byte)((ulong)uVar36 >> 0x28) & bVar24,
                                      CONCAT14((byte)((ulong)uVar36 >> 0x20) & bVar24,
                                               CONCAT13((byte)((ulong)uVar36 >> 0x18) & bVar23,
                                                        CONCAT12((byte)((ulong)uVar36 >> 0x10) &
                                                                 bVar23,CONCAT11((byte)((ulong)
                                                  uVar36 >> 8) & bVar23,(byte)uVar36 & bVar23)))))))
      ;
      *(ulong *)(piVar9 + -4) =
           CONCAT17((byte)((ulong)uVar34 >> 0x38) & bVar22,
                    CONCAT16((byte)((ulong)uVar34 >> 0x30) & bVar22,
                             CONCAT15((byte)((ulong)uVar34 >> 0x28) & bVar22,
                                      CONCAT14((byte)((ulong)uVar34 >> 0x20) & bVar22,
                                               CONCAT13((byte)((ulong)uVar34 >> 0x18) & bVar21,
                                                        CONCAT12((byte)((ulong)uVar34 >> 0x10) &
                                                                 bVar21,CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) & bVar21,(byte)uVar34 & bVar21)))))))
      ;
      bVar25 = (byte)(iVar35 + 8 >> 0x1f);
      bVar26 = (byte)(iVar37 + 8 >> 0x1f);
      bVar27 = (byte)(iVar38 + 8 >> 0x1f);
      bVar28 = (byte)(iVar40 + 8 >> 0x1f);
      bVar21 = (byte)(iVar35 + 0xc >> 0x1f);
      bVar22 = (byte)(iVar37 + 0xc >> 0x1f);
      bVar23 = (byte)(iVar38 + 0xc >> 0x1f);
      bVar24 = (byte)(iVar40 + 0xc >> 0x1f);
      uVar15 = uVar15 - 0x10;
      *(ulong *)(piVar9 + 2) =
           CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar28,
                    CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar28,
                             CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar28,
                                      CONCAT14((byte)((ulong)uVar41 >> 0x20) & bVar28,
                                               CONCAT13((byte)((ulong)uVar41 >> 0x18) & bVar27,
                                                        CONCAT12((byte)((ulong)uVar41 >> 0x10) &
                                                                 bVar27,CONCAT11((byte)((ulong)
                                                  uVar41 >> 8) & bVar27,(byte)uVar41 & bVar27)))))))
      ;
      *(ulong *)piVar9 =
           CONCAT17((byte)((ulong)uVar39 >> 0x38) & bVar26,
                    CONCAT16((byte)((ulong)uVar39 >> 0x30) & bVar26,
                             CONCAT15((byte)((ulong)uVar39 >> 0x28) & bVar26,
                                      CONCAT14((byte)((ulong)uVar39 >> 0x20) & bVar26,
                                               CONCAT13((byte)((ulong)uVar39 >> 0x18) & bVar25,
                                                        CONCAT12((byte)((ulong)uVar39 >> 0x10) &
                                                                 bVar25,CONCAT11((byte)((ulong)
                                                  uVar39 >> 8) & bVar25,(byte)uVar39 & bVar25)))))))
      ;
      *(ulong *)(piVar9 + 6) =
           CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar24,
                    CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar24,
                             CONCAT15((byte)((ulong)uVar43 >> 0x28) & bVar24,
                                      CONCAT14((byte)((ulong)uVar43 >> 0x20) & bVar24,
                                               CONCAT13((byte)((ulong)uVar43 >> 0x18) & bVar23,
                                                        CONCAT12((byte)((ulong)uVar43 >> 0x10) &
                                                                 bVar23,CONCAT11((byte)((ulong)
                                                  uVar43 >> 8) & bVar23,(byte)uVar43 & bVar23)))))))
      ;
      *(ulong *)(piVar9 + 4) =
           CONCAT17((byte)((ulong)uVar42 >> 0x38) & bVar22,
                    CONCAT16((byte)((ulong)uVar42 >> 0x30) & bVar22,
                             CONCAT15((byte)((ulong)uVar42 >> 0x28) & bVar22,
                                      CONCAT14((byte)((ulong)uVar42 >> 0x20) & bVar22,
                                               CONCAT13((byte)((ulong)uVar42 >> 0x18) & bVar21,
                                                        CONCAT12((byte)((ulong)uVar42 >> 0x10) &
                                                                 bVar21,CONCAT11((byte)((ulong)
                                                  uVar42 >> 8) & bVar21,(byte)uVar42 & bVar21)))))))
      ;
      piVar9 = piVar9 + 0x10;
    } while (uVar15 != 0);
    if (uVar7 != uVar6) goto LAB_003ec98c;
  }
  *(uint *)(param_2 + 1) = uVar20;
  if ((int)uVar2 < 1) {
    uVar19 = 0;
    lVar5 = FUN_003eb9a0(param_1,uVar2);
    if (lVar5 == 0) {
      return 0;
    }
  }
  else {
    iVar4 = *(int *)(param_3 + 0x50);
    uVar19 = 0;
    uVar20 = uVar2;
    do {
      iVar3 = FUN_003ee090(piVar17,uVar16,uVar2,*piVar17 * iVar4);
      uVar1 = iVar3 + uVar19 + piVar17[uVar14];
      uVar19 = (uVar19 | iVar3 + uVar19 != 0) & (uint)(uVar1 <= (uint)piVar17[uVar14]);
      piVar17[uVar14] = uVar1;
      piVar17 = piVar17 + 1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    lVar5 = FUN_003eb9a0(param_1,uVar2);
    if (lVar5 == 0) {
      return 0;
    }
  }
LAB_003eca24:
  *(uint *)(param_1 + 1) = uVar2;
  *(int *)(param_1 + 2) = (int)param_2[2];
  lVar18 = *param_2;
  uVar15 = *param_1;
  lVar5 = (long)(int)uVar2;
  uVar6 = lVar18 + lVar5 * 4;
  iVar4 = FUN_003ee6a0(uVar15,uVar6,uVar16,uVar2);
  if (0 < (int)uVar2) {
    uVar19 = uVar19 - iVar4;
    uVar20 = ~uVar19;
    if ((uVar2 < 8) || ((uVar15 < lVar18 + (lVar5 + uVar14) * 4 && (uVar6 < uVar15 + uVar14 * 4))))
    {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar14 & 0xfffffff8;
      puVar11 = (undefined8 *)(uVar6 + 0x10);
      puVar13 = (undefined8 *)(uVar15 + 0x10);
      uVar6 = uVar7;
      do {
        uVar30 = puVar11[-1];
        uVar16 = puVar11[-2];
        uVar32 = puVar11[1];
        uVar31 = *puVar11;
        bVar21 = (byte)uVar19;
        bVar22 = (byte)(uVar19 >> 8);
        bVar23 = (byte)(uVar19 >> 0x10);
        bVar24 = (byte)(uVar19 >> 0x18);
        uVar6 = uVar6 - 8;
        uVar34 = puVar13[-1];
        uVar33 = puVar13[-2];
        uVar39 = puVar13[1];
        uVar36 = *puVar13;
        bVar25 = (byte)uVar20;
        bVar26 = (byte)(uVar20 >> 8);
        bVar27 = (byte)(uVar20 >> 0x10);
        bVar28 = (byte)(uVar20 >> 0x18);
        puVar13[-1] = CONCAT17((byte)((ulong)uVar34 >> 0x38) & bVar28 |
                               (byte)((ulong)uVar30 >> 0x38) & bVar24,
                               CONCAT16((byte)((ulong)uVar34 >> 0x30) & bVar27 |
                                        (byte)((ulong)uVar30 >> 0x30) & bVar23,
                                        CONCAT15((byte)((ulong)uVar34 >> 0x28) & bVar26 |
                                                 (byte)((ulong)uVar30 >> 0x28) & bVar22,
                                                 CONCAT14((byte)((ulong)uVar34 >> 0x20) & bVar25 |
                                                          (byte)((ulong)uVar30 >> 0x20) & bVar21,
                                                          CONCAT13((byte)((ulong)uVar34 >> 0x18) &
                                                                   bVar28 | (byte)((ulong)uVar30 >>
                                                                                  0x18) & bVar24,
                                                                   CONCAT12((byte)((ulong)uVar34 >>
                                                                                  0x10) & bVar27 |
                                                                            (byte)((ulong)uVar30 >>
                                                                                  0x10) & bVar23,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) & bVar26 |
                                                  (byte)((ulong)uVar30 >> 8) & bVar22,
                                                  (byte)uVar34 & bVar25 | (byte)uVar30 & bVar21)))))
                                       ));
        puVar13[-2] = CONCAT17((byte)((ulong)uVar33 >> 0x38) & bVar28 |
                               (byte)((ulong)uVar16 >> 0x38) & bVar24,
                               CONCAT16((byte)((ulong)uVar33 >> 0x30) & bVar27 |
                                        (byte)((ulong)uVar16 >> 0x30) & bVar23,
                                        CONCAT15((byte)((ulong)uVar33 >> 0x28) & bVar26 |
                                                 (byte)((ulong)uVar16 >> 0x28) & bVar22,
                                                 CONCAT14((byte)((ulong)uVar33 >> 0x20) & bVar25 |
                                                          (byte)((ulong)uVar16 >> 0x20) & bVar21,
                                                          CONCAT13((byte)((ulong)uVar33 >> 0x18) &
                                                                   bVar28 | (byte)((ulong)uVar16 >>
                                                                                  0x18) & bVar24,
                                                                   CONCAT12((byte)((ulong)uVar33 >>
                                                                                  0x10) & bVar27 |
                                                                            (byte)((ulong)uVar16 >>
                                                                                  0x10) & bVar23,
                                                                            CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) & bVar26 |
                                                  (byte)((ulong)uVar16 >> 8) & bVar22,
                                                  (byte)uVar33 & bVar25 | (byte)uVar16 & bVar21)))))
                                       ));
        puVar13[1] = CONCAT17((byte)((ulong)uVar39 >> 0x38) & bVar28 |
                              (byte)((ulong)uVar32 >> 0x38) & bVar24,
                              CONCAT16((byte)((ulong)uVar39 >> 0x30) & bVar27 |
                                       (byte)((ulong)uVar32 >> 0x30) & bVar23,
                                       CONCAT15((byte)((ulong)uVar39 >> 0x28) & bVar26 |
                                                (byte)((ulong)uVar32 >> 0x28) & bVar22,
                                                CONCAT14((byte)((ulong)uVar39 >> 0x20) & bVar25 |
                                                         (byte)((ulong)uVar32 >> 0x20) & bVar21,
                                                         CONCAT13((byte)((ulong)uVar39 >> 0x18) &
                                                                  bVar28 | (byte)((ulong)uVar32 >>
                                                                                 0x18) & bVar24,
                                                                  CONCAT12((byte)((ulong)uVar39 >>
                                                                                 0x10) & bVar27 |
                                                                           (byte)((ulong)uVar32 >>
                                                                                 0x10) & bVar23,
                                                                           CONCAT11((byte)((ulong)
                                                  uVar39 >> 8) & bVar26 |
                                                  (byte)((ulong)uVar32 >> 8) & bVar22,
                                                  (byte)uVar39 & bVar25 | (byte)uVar32 & bVar21)))))
                                      ));
        *puVar13 = CONCAT17((byte)((ulong)uVar36 >> 0x38) & bVar28 |
                            (byte)((ulong)uVar31 >> 0x38) & bVar24,
                            CONCAT16((byte)((ulong)uVar36 >> 0x30) & bVar27 |
                                     (byte)((ulong)uVar31 >> 0x30) & bVar23,
                                     CONCAT15((byte)((ulong)uVar36 >> 0x28) & bVar26 |
                                              (byte)((ulong)uVar31 >> 0x28) & bVar22,
                                              CONCAT14((byte)((ulong)uVar36 >> 0x20) & bVar25 |
                                                       (byte)((ulong)uVar31 >> 0x20) & bVar21,
                                                       CONCAT13((byte)((ulong)uVar36 >> 0x18) &
                                                                bVar28 | (byte)((ulong)uVar31 >>
                                                                               0x18) & bVar24,
                                                                CONCAT12((byte)((ulong)uVar36 >>
                                                                               0x10) & bVar27 |
                                                                         (byte)((ulong)uVar31 >>
                                                                               0x10) & bVar23,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar36 >> 8) & bVar26 |
                                                  (byte)((ulong)uVar31 >> 8) & bVar22,
                                                  (byte)uVar36 & bVar25 | (byte)uVar31 & bVar21)))))
                                    ));
        puVar13 = puVar13 + 4;
        puVar11[-1] = 0;
        puVar11[-2] = 0;
        puVar11[1] = 0;
        *puVar11 = 0;
        puVar11 = puVar11 + 4;
      } while (uVar6 != 0);
      if (uVar7 == uVar14) {
        return 1;
      }
    }
    lVar8 = uVar14 - uVar7;
    puVar10 = (uint *)(uVar15 + uVar7 * 4);
    puVar12 = (uint *)(lVar18 + (uVar7 + lVar5) * 4);
    do {
      lVar8 = lVar8 + -1;
      *puVar10 = *puVar10 & uVar20 | *puVar12 & uVar19;
      *puVar12 = 0;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    } while (lVar8 != 0);
  }
  return 1;
}


