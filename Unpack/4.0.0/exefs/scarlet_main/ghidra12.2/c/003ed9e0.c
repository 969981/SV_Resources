/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ed9e0; name: FUN_003ed9e0
 */


/* WARNING: Removing unreachable block (ram,0x003edf0c) */

undefined8 FUN_003ed9e0(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong *puVar11;
  long *plVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint *puVar21;
  ulong uVar22;
  uint *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  undefined8 uVar31;
  uint *puVar32;
  uint uVar33;
  int *piVar34;
  uint *puVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  ulong local_98;
  
  FUN_003ed410(param_5);
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_003ed5c0(param_5);
  }
  puVar11 = (ulong *)FUN_003ed5c0(param_5);
  plVar12 = (long *)FUN_003ed5c0(param_5);
  puVar13 = (ulong *)FUN_003ed5c0(param_5);
  if ((puVar13 != (ulong *)0x0) && (lVar14 = FUN_003eb8f0(puVar13,param_4), lVar14 != 0)) {
    uVar2 = (uint)puVar13[1];
    uVar29 = *puVar13;
    iVar7 = FUN_003eb210(*(undefined4 *)(uVar29 + (long)(int)(uVar2 - 1) * 4));
    uVar5 = 0x20 - iVar7;
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        uVar16 = 0;
        uVar19 = 0;
      }
      else {
        uVar4 = iVar7 % 0x20;
        uVar3 = -uVar4 | -uVar4 >> 8;
        uVar16 = 0;
        uVar19 = 0;
        do {
          puVar32 = (uint *)(uVar29 + uVar16 * 4);
          uVar16 = uVar16 + 2;
          uVar9 = *puVar32;
          uVar33 = puVar32[1];
          *puVar32 = uVar9 << (ulong)(uVar5 & 0x1f) | uVar19;
          puVar32[1] = uVar33 << (ulong)(uVar5 & 0x1f) | uVar9 >> (ulong)(uVar4 & 0x1f) & uVar3;
          uVar19 = uVar33 >> (ulong)(uVar4 & 0x1f) & uVar3;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar16);
      }
      if ((uVar2 & 1) != 0) {
        *(uint *)(uVar29 + uVar16 * 4) =
             *(int *)(uVar29 + uVar16 * 4) << (ulong)(uVar5 & 0x1f) | uVar19;
      }
    }
    *(undefined4 *)(puVar13 + 2) = 0;
    iVar7 = FUN_003f2270(plVar12,param_3,uVar5);
    if (iVar7 != 0) {
      uVar2 = (uint)puVar13[1];
      uVar29 = (ulong)uVar2;
      iVar6 = (int)plVar12[1];
      iVar7 = iVar6;
      if (iVar6 <= (int)uVar2) {
        iVar7 = uVar2 + 1;
        lVar14 = FUN_003eb9a0(plVar12,iVar7);
        if (lVar14 == 0) goto LAB_003edf10;
        memset((void *)(*plVar12 + (long)iVar6 * 4),0,
               -(ulong)((uint)(iVar7 - iVar6) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)(iVar7 - iVar6) << 2);
        *(int *)(plVar12 + 1) = iVar7;
      }
      lVar14 = *plVar12;
      iVar6 = iVar7 - uVar2;
      uVar19 = *(uint *)(*puVar13 + (long)(int)(uVar2 - 1) * 4);
      if (uVar2 - 1 == 0) {
        local_98 = 0;
        lVar15 = FUN_003eb9a0(param_1);
      }
      else {
        local_98 = (ulong)*(uint *)(*puVar13 + (long)(int)(uVar2 - 2) * 4);
        lVar15 = FUN_003eb9a0(param_1);
      }
      if (lVar15 != 0) {
        uVar3 = *(uint *)(param_3 + 0x10);
        uVar4 = *(uint *)(param_4 + 0x10);
        *(int *)(param_1 + 1) = iVar6;
        lVar30 = *param_1;
        *(uint *)(param_1 + 2) = uVar4 ^ uVar3;
        lVar15 = FUN_003eb9a0(puVar11);
        if (lVar15 != 0) {
          if (0 < iVar6) {
            iVar28 = 0;
            puVar32 = (uint *)(lVar14 + (long)(iVar7 + -1) * 4);
            puVar35 = (uint *)(lVar14 + (long)iVar6 * 4);
            piVar34 = (int *)(lVar30 + (long)iVar6 * 4);
            if ((int)uVar2 < 1) {
              do {
                uVar9 = 0xffffffff;
                uVar4 = puVar32[-1];
                if (*puVar32 != uVar19) {
                  if (puVar32 == puVar35) {
                    uVar33 = 0;
                  }
                  else {
                    uVar33 = puVar32[-2];
                  }
                  uVar9 = FUN_003ee400(*puVar32,uVar4,uVar19);
                  uVar29 = local_98 * uVar9;
                  if (CONCAT44(uVar4 - uVar9 * uVar19,uVar33) < uVar29) {
                    uVar4 = uVar4 + uVar19 * (1 - uVar9);
                    do {
                      uVar9 = uVar9 - 1;
                      if (uVar4 < uVar19) break;
                      uVar16 = CONCAT44(uVar4,uVar33);
                      uVar29 = uVar29 - local_98;
                      uVar4 = uVar4 + uVar19;
                    } while (uVar16 < uVar29);
                  }
                }
                uVar10 = FUN_003ee150(*puVar11,*puVar13,uVar2,uVar9);
                uVar29 = *puVar11;
                puVar35 = puVar35 + -1;
                *(undefined4 *)(uVar29 + (long)(int)uVar2 * 4) = uVar10;
                iVar7 = FUN_003ee6a0(puVar35,puVar35,uVar29,uVar2 + 1);
                iVar8 = FUN_003ee580(puVar35,puVar35,*puVar11,uVar2);
                *puVar32 = *puVar32 + iVar8;
                iVar28 = iVar28 + 1;
                piVar34 = piVar34 + -1;
                *piVar34 = uVar9 - iVar7;
                puVar32 = puVar32 + -1;
              } while (iVar28 != iVar6);
            }
            else {
              uVar17 = uVar29 & 0xfffffff0;
              uVar16 = (uVar17 - 0x10 >> 4) + 1;
              do {
                uVar9 = 0xffffffff;
                uVar4 = puVar32[-1];
                if (*puVar32 != uVar19) {
                  if (puVar32 == puVar35) {
                    uVar33 = 0;
                  }
                  else {
                    uVar33 = puVar32[-2];
                  }
                  uVar9 = FUN_003ee400(*puVar32,uVar4,uVar19);
                  uVar18 = local_98 * uVar9;
                  if (CONCAT44(uVar4 - uVar9 * uVar19,uVar33) < uVar18) {
                    uVar4 = uVar4 + uVar19 * (1 - uVar9);
                    do {
                      uVar9 = uVar9 - 1;
                      if (uVar4 < uVar19) break;
                      uVar20 = CONCAT44(uVar4,uVar33);
                      uVar18 = uVar18 - local_98;
                      uVar4 = uVar4 + uVar19;
                    } while (uVar20 < uVar18);
                  }
                }
                uVar10 = FUN_003ee150(*puVar11,*puVar13,uVar29,uVar9);
                uVar18 = *puVar11;
                puVar35 = puVar35 + -1;
                *(undefined4 *)(uVar18 + (long)(int)uVar2 * 4) = uVar10;
                iVar7 = FUN_003ee6a0(puVar35,puVar35,uVar18,uVar2 + 1);
                uVar20 = *puVar13;
                uVar4 = -iVar7;
                uVar18 = *puVar11;
                if (uVar2 < 0x10) {
                  uVar22 = 0;
LAB_003ede70:
                  uVar25 = ~uVar22;
                  if ((uVar2 & 3) != 0) {
                    uVar27 = uVar29 & 3;
                    do {
                      lVar14 = uVar22 * 4;
                      uVar22 = uVar22 + 1;
                      uVar27 = uVar27 - 1;
                      *(uint *)(uVar18 + lVar14) = *(uint *)(uVar20 + lVar14) & uVar4;
                    } while (uVar27 != 0);
                  }
                  if (2 < uVar25 + uVar29) {
                    lVar14 = uVar29 - uVar22;
                    puVar23 = (uint *)(uVar18 + uVar22 * 4 + 8);
                    puVar21 = (uint *)(uVar20 + uVar22 * 4 + 8);
                    do {
                      puVar23[-2] = puVar21[-2] & uVar4;
                      puVar23[-1] = puVar21[-1] & uVar4;
                      *puVar23 = *puVar21 & uVar4;
                      puVar1 = puVar21 + 1;
                      puVar21 = puVar21 + 4;
                      lVar14 = lVar14 + -4;
                      puVar23[1] = *puVar1 & uVar4;
                      puVar23 = puVar23 + 4;
                    } while (lVar14 != 0);
                  }
                }
                else {
                  if ((uVar18 < uVar20 + uVar29 * 4) && (uVar20 < uVar18 + uVar29 * 4)) {
                    uVar22 = 0;
                    goto LAB_003ede70;
                  }
                  bVar36 = (byte)uVar4;
                  bVar37 = (byte)(uVar4 >> 8);
                  bVar38 = (byte)(uVar4 >> 0x10);
                  bVar39 = (byte)(uVar4 >> 0x18);
                  if (uVar17 - 0x10 == 0) {
                    lVar14 = 0;
LAB_003ede38:
                    puVar24 = (undefined8 *)(uVar20 + lVar14 * 4);
                    puVar26 = (undefined8 *)(uVar18 + lVar14 * 4);
                    uVar40 = puVar24[5];
                    uVar31 = puVar24[4];
                    uVar42 = puVar24[7];
                    uVar41 = puVar24[6];
                    uVar44 = puVar24[1];
                    uVar43 = *puVar24;
                    uVar46 = puVar24[3];
                    uVar45 = puVar24[2];
                    puVar26[1] = CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar39,
                                          CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar38,
                                                   CONCAT15((byte)((ulong)uVar44 >> 0x28) & bVar37,
                                                            CONCAT14((byte)((ulong)uVar44 >> 0x20) &
                                                                     bVar36,CONCAT13((byte)((ulong)
                                                  uVar44 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar44 >> 8) &
                                                                    bVar37,(byte)uVar44 & bVar36))))
                                                  )));
                    *puVar26 = CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar39,
                                        CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar38,
                                                 CONCAT15((byte)((ulong)uVar43 >> 0x28) & bVar37,
                                                          CONCAT14((byte)((ulong)uVar43 >> 0x20) &
                                                                   bVar36,CONCAT13((byte)((ulong)
                                                  uVar43 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar43 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar43 >> 8) &
                                                                    bVar37,(byte)uVar43 & bVar36))))
                                                  )));
                    puVar26[3] = CONCAT17((byte)((ulong)uVar46 >> 0x38) & bVar39,
                                          CONCAT16((byte)((ulong)uVar46 >> 0x30) & bVar38,
                                                   CONCAT15((byte)((ulong)uVar46 >> 0x28) & bVar37,
                                                            CONCAT14((byte)((ulong)uVar46 >> 0x20) &
                                                                     bVar36,CONCAT13((byte)((ulong)
                                                  uVar46 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar46 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar46 >> 8) &
                                                                    bVar37,(byte)uVar46 & bVar36))))
                                                  )));
                    puVar26[2] = CONCAT17((byte)((ulong)uVar45 >> 0x38) & bVar39,
                                          CONCAT16((byte)((ulong)uVar45 >> 0x30) & bVar38,
                                                   CONCAT15((byte)((ulong)uVar45 >> 0x28) & bVar37,
                                                            CONCAT14((byte)((ulong)uVar45 >> 0x20) &
                                                                     bVar36,CONCAT13((byte)((ulong)
                                                  uVar45 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar45 >> 8) &
                                                                    bVar37,(byte)uVar45 & bVar36))))
                                                  )));
                    puVar26[5] = CONCAT17((byte)((ulong)uVar40 >> 0x38) & bVar39,
                                          CONCAT16((byte)((ulong)uVar40 >> 0x30) & bVar38,
                                                   CONCAT15((byte)((ulong)uVar40 >> 0x28) & bVar37,
                                                            CONCAT14((byte)((ulong)uVar40 >> 0x20) &
                                                                     bVar36,CONCAT13((byte)((ulong)
                                                  uVar40 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar40 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar40 >> 8) &
                                                                    bVar37,(byte)uVar40 & bVar36))))
                                                  )));
                    puVar26[4] = CONCAT17((byte)((ulong)uVar31 >> 0x38) & bVar39,
                                          CONCAT16((byte)((ulong)uVar31 >> 0x30) & bVar38,
                                                   CONCAT15((byte)((ulong)uVar31 >> 0x28) & bVar37,
                                                            CONCAT14((byte)((ulong)uVar31 >> 0x20) &
                                                                     bVar36,CONCAT13((byte)((ulong)
                                                  uVar31 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar31 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar31 >> 8) &
                                                                    bVar37,(byte)uVar31 & bVar36))))
                                                  )));
                    puVar26[7] = CONCAT17((byte)((ulong)uVar42 >> 0x38) & bVar39,
                                          CONCAT16((byte)((ulong)uVar42 >> 0x30) & bVar38,
                                                   CONCAT15((byte)((ulong)uVar42 >> 0x28) & bVar37,
                                                            CONCAT14((byte)((ulong)uVar42 >> 0x20) &
                                                                     bVar36,CONCAT13((byte)((ulong)
                                                  uVar42 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar42 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar42 >> 8) &
                                                                    bVar37,(byte)uVar42 & bVar36))))
                                                  )));
                    puVar26[6] = CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar39,
                                          CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar38,
                                                   CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar37,
                                                            CONCAT14((byte)((ulong)uVar41 >> 0x20) &
                                                                     bVar36,CONCAT13((byte)((ulong)
                                                  uVar41 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar41 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar41 >> 8) &
                                                                    bVar37,(byte)uVar41 & bVar36))))
                                                  )));
                  }
                  else {
                    lVar14 = 0;
                    puVar24 = (undefined8 *)(uVar18 + 0x40);
                    puVar26 = (undefined8 *)(uVar20 + 0x40);
                    lVar15 = -(uVar16 & 0x1ffffffffffffffe);
                    do {
                      uVar40 = puVar26[-7];
                      uVar31 = puVar26[-8];
                      uVar42 = puVar26[-5];
                      uVar41 = puVar26[-6];
                      lVar14 = lVar14 + 0x20;
                      uVar44 = puVar26[-3];
                      uVar43 = puVar26[-4];
                      uVar46 = puVar26[-1];
                      uVar45 = puVar26[-2];
                      puVar24[-7] = CONCAT17((byte)((ulong)uVar40 >> 0x38) & bVar39,
                                             CONCAT16((byte)((ulong)uVar40 >> 0x30) & bVar38,
                                                      CONCAT15((byte)((ulong)uVar40 >> 0x28) &
                                                               bVar37,CONCAT14((byte)((ulong)uVar40
                                                                                     >> 0x20) &
                                                                               bVar36,CONCAT13((byte
                                                  )((ulong)uVar40 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar40 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar40 >> 8) &
                                                                    bVar37,(byte)uVar40 & bVar36))))
                                                  )));
                      puVar24[-8] = CONCAT17((byte)((ulong)uVar31 >> 0x38) & bVar39,
                                             CONCAT16((byte)((ulong)uVar31 >> 0x30) & bVar38,
                                                      CONCAT15((byte)((ulong)uVar31 >> 0x28) &
                                                               bVar37,CONCAT14((byte)((ulong)uVar31
                                                                                     >> 0x20) &
                                                                               bVar36,CONCAT13((byte
                                                  )((ulong)uVar31 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar31 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar31 >> 8) &
                                                                    bVar37,(byte)uVar31 & bVar36))))
                                                  )));
                      puVar24[-5] = CONCAT17((byte)((ulong)uVar42 >> 0x38) & bVar39,
                                             CONCAT16((byte)((ulong)uVar42 >> 0x30) & bVar38,
                                                      CONCAT15((byte)((ulong)uVar42 >> 0x28) &
                                                               bVar37,CONCAT14((byte)((ulong)uVar42
                                                                                     >> 0x20) &
                                                                               bVar36,CONCAT13((byte
                                                  )((ulong)uVar42 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar42 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar42 >> 8) &
                                                                    bVar37,(byte)uVar42 & bVar36))))
                                                  )));
                      puVar24[-6] = CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar39,
                                             CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar38,
                                                      CONCAT15((byte)((ulong)uVar41 >> 0x28) &
                                                               bVar37,CONCAT14((byte)((ulong)uVar41
                                                                                     >> 0x20) &
                                                                               bVar36,CONCAT13((byte
                                                  )((ulong)uVar41 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar41 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar41 >> 8) &
                                                                    bVar37,(byte)uVar41 & bVar36))))
                                                  )));
                      lVar15 = lVar15 + 2;
                      puVar24[-3] = CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar39,
                                             CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar38,
                                                      CONCAT15((byte)((ulong)uVar44 >> 0x28) &
                                                               bVar37,CONCAT14((byte)((ulong)uVar44
                                                                                     >> 0x20) &
                                                                               bVar36,CONCAT13((byte
                                                  )((ulong)uVar44 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar44 >> 8) &
                                                                    bVar37,(byte)uVar44 & bVar36))))
                                                  )));
                      puVar24[-4] = CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar39,
                                             CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar38,
                                                      CONCAT15((byte)((ulong)uVar43 >> 0x28) &
                                                               bVar37,CONCAT14((byte)((ulong)uVar43
                                                                                     >> 0x20) &
                                                                               bVar36,CONCAT13((byte
                                                  )((ulong)uVar43 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar43 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar43 >> 8) &
                                                                    bVar37,(byte)uVar43 & bVar36))))
                                                  )));
                      puVar24[-1] = CONCAT17((byte)((ulong)uVar46 >> 0x38) & bVar39,
                                             CONCAT16((byte)((ulong)uVar46 >> 0x30) & bVar38,
                                                      CONCAT15((byte)((ulong)uVar46 >> 0x28) &
                                                               bVar37,CONCAT14((byte)((ulong)uVar46
                                                                                     >> 0x20) &
                                                                               bVar36,CONCAT13((byte
                                                  )((ulong)uVar46 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar46 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar46 >> 8) &
                                                                    bVar37,(byte)uVar46 & bVar36))))
                                                  )));
                      puVar24[-2] = CONCAT17((byte)((ulong)uVar45 >> 0x38) & bVar39,
                                             CONCAT16((byte)((ulong)uVar45 >> 0x30) & bVar38,
                                                      CONCAT15((byte)((ulong)uVar45 >> 0x28) &
                                                               bVar37,CONCAT14((byte)((ulong)uVar45
                                                                                     >> 0x20) &
                                                                               bVar36,CONCAT13((byte
                                                  )((ulong)uVar45 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar45 >> 8) &
                                                                    bVar37,(byte)uVar45 & bVar36))))
                                                  )));
                      uVar40 = puVar26[1];
                      uVar31 = *puVar26;
                      uVar42 = puVar26[3];
                      uVar41 = puVar26[2];
                      uVar44 = puVar26[5];
                      uVar43 = puVar26[4];
                      uVar46 = puVar26[7];
                      uVar45 = puVar26[6];
                      puVar26 = puVar26 + 0x10;
                      puVar24[1] = CONCAT17((byte)((ulong)uVar40 >> 0x38) & bVar39,
                                            CONCAT16((byte)((ulong)uVar40 >> 0x30) & bVar38,
                                                     CONCAT15((byte)((ulong)uVar40 >> 0x28) & bVar37
                                                              ,CONCAT14((byte)((ulong)uVar40 >> 0x20
                                                                              ) & bVar36,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar40 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar40 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar40 >> 8) &
                                                                    bVar37,(byte)uVar40 & bVar36))))
                                                  )));
                      *puVar24 = CONCAT17((byte)((ulong)uVar31 >> 0x38) & bVar39,
                                          CONCAT16((byte)((ulong)uVar31 >> 0x30) & bVar38,
                                                   CONCAT15((byte)((ulong)uVar31 >> 0x28) & bVar37,
                                                            CONCAT14((byte)((ulong)uVar31 >> 0x20) &
                                                                     bVar36,CONCAT13((byte)((ulong)
                                                  uVar31 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar31 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar31 >> 8) &
                                                                    bVar37,(byte)uVar31 & bVar36))))
                                                  )));
                      puVar24[3] = CONCAT17((byte)((ulong)uVar42 >> 0x38) & bVar39,
                                            CONCAT16((byte)((ulong)uVar42 >> 0x30) & bVar38,
                                                     CONCAT15((byte)((ulong)uVar42 >> 0x28) & bVar37
                                                              ,CONCAT14((byte)((ulong)uVar42 >> 0x20
                                                                              ) & bVar36,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar42 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar42 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar42 >> 8) &
                                                                    bVar37,(byte)uVar42 & bVar36))))
                                                  )));
                      puVar24[2] = CONCAT17((byte)((ulong)uVar41 >> 0x38) & bVar39,
                                            CONCAT16((byte)((ulong)uVar41 >> 0x30) & bVar38,
                                                     CONCAT15((byte)((ulong)uVar41 >> 0x28) & bVar37
                                                              ,CONCAT14((byte)((ulong)uVar41 >> 0x20
                                                                              ) & bVar36,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar41 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar41 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar41 >> 8) &
                                                                    bVar37,(byte)uVar41 & bVar36))))
                                                  )));
                      puVar24[5] = CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar39,
                                            CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar38,
                                                     CONCAT15((byte)((ulong)uVar44 >> 0x28) & bVar37
                                                              ,CONCAT14((byte)((ulong)uVar44 >> 0x20
                                                                              ) & bVar36,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar44 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar44 >> 8) &
                                                                    bVar37,(byte)uVar44 & bVar36))))
                                                  )));
                      puVar24[4] = CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar39,
                                            CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar38,
                                                     CONCAT15((byte)((ulong)uVar43 >> 0x28) & bVar37
                                                              ,CONCAT14((byte)((ulong)uVar43 >> 0x20
                                                                              ) & bVar36,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar43 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar43 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar43 >> 8) &
                                                                    bVar37,(byte)uVar43 & bVar36))))
                                                  )));
                      puVar24[7] = CONCAT17((byte)((ulong)uVar46 >> 0x38) & bVar39,
                                            CONCAT16((byte)((ulong)uVar46 >> 0x30) & bVar38,
                                                     CONCAT15((byte)((ulong)uVar46 >> 0x28) & bVar37
                                                              ,CONCAT14((byte)((ulong)uVar46 >> 0x20
                                                                              ) & bVar36,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar46 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar46 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar46 >> 8) &
                                                                    bVar37,(byte)uVar46 & bVar36))))
                                                  )));
                      puVar24[6] = CONCAT17((byte)((ulong)uVar45 >> 0x38) & bVar39,
                                            CONCAT16((byte)((ulong)uVar45 >> 0x30) & bVar38,
                                                     CONCAT15((byte)((ulong)uVar45 >> 0x28) & bVar37
                                                              ,CONCAT14((byte)((ulong)uVar45 >> 0x20
                                                                              ) & bVar36,
                                                                        CONCAT13((byte)((ulong)
                                                  uVar45 >> 0x18) & bVar39,
                                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar38,
                                                           CONCAT11((byte)((ulong)uVar45 >> 8) &
                                                                    bVar37,(byte)uVar45 & bVar36))))
                                                  )));
                      puVar24 = puVar24 + 0x10;
                    } while (lVar15 != 0);
                    if ((uVar16 & 1) != 0) goto LAB_003ede38;
                  }
                  uVar22 = uVar17;
                  if (uVar17 != uVar29) goto LAB_003ede70;
                }
                iVar8 = FUN_003ee580(puVar35,puVar35,uVar18,uVar29);
                *puVar32 = *puVar32 + iVar8;
                iVar28 = iVar28 + 1;
                piVar34 = piVar34 + -1;
                *piVar34 = uVar9 - iVar7;
                puVar32 = puVar32 + -1;
              } while (iVar28 != iVar6);
            }
          }
          *(uint *)(plVar12 + 1) = uVar2;
          *(uint *)(plVar12 + 2) = uVar3;
          if (param_2 != 0) {
            FUN_003f25f0(param_2,plVar12,uVar5);
          }
          uVar31 = 1;
          goto LAB_003edf14;
        }
      }
    }
  }
LAB_003edf10:
  uVar31 = 0;
LAB_003edf14:
  FUN_003ed530(param_5);
  return uVar31;
}


