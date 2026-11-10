/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00432dc0; name: FUN_00432dc0
 */


undefined8 FUN_00432dc0(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  lVar18 = *(long *)(param_1 + 0x78);
  uVar6 = *(uint *)(lVar18 + 0x70);
  uVar7 = (ulong)uVar6;
  uVar16 = param_2;
  uVar17 = param_3;
  if (uVar6 != 0) {
    if ((param_4 != 0) && (uVar6 < 0x40)) {
      uVar10 = param_4 - 1;
      uVar19 = 0x3f - uVar7;
      if (uVar10 <= 0x3f - uVar7) {
        uVar19 = uVar10;
      }
      uVar19 = uVar19 + 1;
      uVar9 = uVar7;
      if (uVar19 < 0x10) {
LAB_00432f18:
        lVar14 = 0;
        do {
          *(byte *)(uVar16 + lVar14) =
               *(byte *)(uVar9 + lVar18 + 0x30 + lVar14) ^ *(byte *)(uVar17 + lVar14);
          lVar15 = lVar14 + 1;
          if (param_4 - 1 == lVar14) break;
          uVar7 = uVar9 + lVar14;
          lVar14 = lVar15;
        } while (uVar7 < 0x3f);
        uVar9 = uVar9 + lVar15;
        uVar16 = uVar16 + lVar15;
        param_4 = param_4 - lVar15;
        uVar17 = uVar17 + lVar15;
      }
      else {
        uVar11 = 0;
        if (uVar6 < 0x40) {
          uVar11 = 0x3f - uVar7;
        }
        if (uVar10 <= uVar11) {
          uVar11 = uVar10;
        }
        uVar10 = param_2 + uVar11 + 1;
        if ((param_2 < param_3 + uVar11 + 1 && param_3 < uVar10) ||
           (param_2 < uVar11 + uVar7 + lVar18 + 0x31 && uVar7 + lVar18 + 0x30 < uVar10))
        goto LAB_00432f18;
        uVar11 = uVar19 & 0xfffffffffffffff0;
        uVar10 = (uVar11 - 0x10 >> 4) + 1;
        lVar14 = 0;
        if (uVar11 - 0x10 != 0) {
          lVar15 = -(uVar10 & 0x1ffffffffffffffe);
          do {
            puVar5 = (undefined8 *)(param_3 + lVar14);
            puVar2 = (undefined8 *)(uVar7 + lVar18 + 0x30 + lVar14);
            uVar22 = puVar5[1];
            uVar21 = *puVar5;
            uVar24 = puVar2[1];
            uVar23 = *puVar2;
            puVar3 = (undefined8 *)(param_2 + lVar14);
            lVar14 = lVar14 + 0x20;
            lVar15 = lVar15 + 2;
            puVar3[1] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                          (byte)((ulong)uVar22 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                   (byte)((ulong)uVar22 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                            (byte)((ulong)uVar22 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                     (byte)((ulong)uVar22 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar24
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar22
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar24 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar22)))))));
            *puVar3 = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                               CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                        (byte)((ulong)uVar21 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                 (byte)((ulong)uVar21 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                          (byte)((ulong)uVar21 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                   (byte)((ulong)uVar21 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar23 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar21 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar21)))))));
            uVar22 = puVar5[3];
            uVar21 = puVar5[2];
            uVar24 = puVar2[3];
            uVar23 = puVar2[2];
            puVar3[3] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                          (byte)((ulong)uVar22 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                   (byte)((ulong)uVar22 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                            (byte)((ulong)uVar22 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                     (byte)((ulong)uVar22 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar24
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar22
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar24 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar22)))))));
            puVar3[2] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                          (byte)((ulong)uVar21 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                   (byte)((ulong)uVar21 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                            (byte)((ulong)uVar21 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                     (byte)((ulong)uVar21 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar23
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar21
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar23 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar21)))))));
          } while (lVar15 != 0);
        }
        uVar9 = uVar11 + uVar7;
        uVar16 = param_2 + uVar11;
        param_4 = param_4 - uVar11;
        uVar17 = param_3 + uVar11;
        if ((uVar10 & 1) != 0) {
          uVar22 = ((undefined8 *)(param_3 + lVar14))[1];
          uVar21 = *(undefined8 *)(param_3 + lVar14);
          lVar15 = lVar18 + lVar14 + uVar7;
          uVar24 = *(undefined8 *)(lVar15 + 0x38);
          uVar23 = *(undefined8 *)(lVar15 + 0x30);
          ((undefined8 *)(param_2 + lVar14))[1] =
               CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                        CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar22 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                          (byte)((ulong)uVar22 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                   (byte)((ulong)uVar22 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                            (byte)((ulong)uVar22 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                                     (byte)((ulong)uVar22 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar24
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar22
                                                                                    >> 8),
                                                                              (byte)uVar24 ^
                                                                              (byte)uVar22)))))));
          *(undefined8 *)(param_2 + lVar14) =
               CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                        CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                                 CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                          (byte)((ulong)uVar21 >> 0x28),
                                          CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                   (byte)((ulong)uVar21 >> 0x20),
                                                   CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                            (byte)((ulong)uVar21 >> 0x18),
                                                            CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                                     (byte)((ulong)uVar21 >> 0x10),
                                                                     CONCAT11((byte)((ulong)uVar23
                                                                                    >> 8) ^
                                                                              (byte)((ulong)uVar21
                                                                                    >> 8),
                                                                              (byte)uVar23 ^
                                                                              (byte)uVar21)))))));
        }
        if (uVar19 != uVar11) goto LAB_00432f18;
      }
      uVar6 = (uint)uVar9;
    }
    *(uint *)(lVar18 + 0x70) = uVar6;
    if (param_4 == 0) {
      return 1;
    }
    if (uVar6 == 0x40) {
      iVar4 = *(int *)(lVar18 + 0x20);
      *(undefined4 *)(lVar18 + 0x70) = 0;
      *(int *)(lVar18 + 0x20) = iVar4 + 1;
      if (iVar4 == -1) {
        *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
      }
    }
  }
  uVar6 = (uint)param_4 & 0x3f;
  uVar7 = (ulong)uVar6;
  uVar19 = param_4 - uVar7;
  if (0x3f < uVar19) {
    uVar20 = *(uint *)(lVar18 + 0x20);
    do {
      uVar10 = uVar19 >> 6;
      if (uVar19 >> 0x22 != 0) {
        uVar10 = 0x10000000;
      }
      uVar1 = uVar20 + (int)uVar10;
      uVar9 = (ulong)uVar1;
      uVar20 = 0;
      if (uVar10 <= uVar9) {
        uVar9 = 0;
        uVar20 = uVar1;
      }
      lVar14 = (uVar10 - uVar9) * 0x40;
      FUN_00433bd0(uVar16,uVar17,lVar14,lVar18,lVar18 + 0x20);
      uVar19 = uVar19 + (uVar10 - uVar9) * -0x40;
      uVar17 = uVar17 + lVar14;
      *(uint *)(lVar18 + 0x20) = uVar20;
      uVar16 = uVar16 + lVar14;
      if (uVar20 == 0) {
        *(int *)(lVar18 + 0x24) = *(int *)(lVar18 + 0x24) + 1;
      }
    } while (0x3f < uVar19);
  }
  if ((param_4 & 0x3f) == 0) {
    return 1;
  }
  *(undefined8 *)(lVar18 + 0x58) = 0;
  *(undefined8 *)(lVar18 + 0x50) = 0;
  *(undefined8 *)(lVar18 + 0x68) = 0;
  *(undefined8 *)(lVar18 + 0x60) = 0;
  puVar5 = (undefined8 *)(lVar18 + 0x30);
  *(undefined8 *)(lVar18 + 0x38) = 0;
  *puVar5 = 0;
  *(undefined8 *)(lVar18 + 0x48) = 0;
  *(undefined8 *)(lVar18 + 0x40) = 0;
  FUN_00433bd0(puVar5,puVar5,0x40,lVar18,lVar18 + 0x20);
  if (uVar6 < 0x10) {
    uVar19 = 0;
  }
  else {
    uVar19 = 0;
    if ((uVar17 + uVar7 <= uVar16 || uVar16 + uVar7 <= uVar17) &&
       (uVar7 + lVar18 + 0x30 <= uVar16 || uVar16 + uVar7 <= lVar18 + 0x30U)) {
      uVar19 = uVar7 & 0x30;
      uVar10 = (uVar19 - 0x10 >> 4) + 1;
      lVar14 = 0;
      if (uVar19 - 0x10 != 0) {
        lVar15 = -(uVar10 & 0x1ffffffffffffffe);
        do {
          puVar5 = (undefined8 *)(uVar17 + lVar14);
          puVar2 = (undefined8 *)(lVar18 + 0x30 + lVar14);
          uVar22 = puVar5[1];
          uVar21 = *puVar5;
          uVar24 = puVar2[1];
          uVar23 = *puVar2;
          puVar3 = (undefined8 *)(uVar16 + 0x10 + lVar14);
          lVar14 = lVar14 + 0x20;
          puVar3[-1] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                         (byte)((ulong)uVar22 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                  (byte)((ulong)uVar22 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                           (byte)((ulong)uVar22 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                    (byte)((ulong)uVar22 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar24 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar22 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar22)))))));
          puVar3[-2] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                                CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                         (byte)((ulong)uVar21 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                  (byte)((ulong)uVar21 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                           (byte)((ulong)uVar21 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                    (byte)((ulong)uVar21 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar23 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar21 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar21)))))));
          uVar22 = puVar5[3];
          uVar21 = puVar5[2];
          uVar24 = puVar2[3];
          uVar23 = puVar2[2];
          lVar15 = lVar15 + 2;
          puVar3[1] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                               CONCAT16((byte)((ulong)uVar24 >> 0x30) ^
                                        (byte)((ulong)uVar22 >> 0x30),
                                        CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                 (byte)((ulong)uVar22 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                          (byte)((ulong)uVar22 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                   (byte)((ulong)uVar22 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar24 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar22 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar22)))))));
          *puVar3 = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                             CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                               (byte)((ulong)uVar21 >> 0x28),
                                               CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                        (byte)((ulong)uVar21 >> 0x20),
                                                        CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                 (byte)((ulong)uVar21 >> 0x18),
                                                                 CONCAT12((byte)((ulong)uVar23 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar21 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar21)))))));
        } while (lVar15 != 0);
      }
      if ((uVar10 & 1) != 0) {
        uVar22 = ((undefined8 *)(uVar17 + lVar14))[1];
        uVar21 = *(undefined8 *)(uVar17 + lVar14);
        uVar24 = *(undefined8 *)(lVar18 + lVar14 + 0x38);
        uVar23 = *(undefined8 *)(lVar18 + lVar14 + 0x30);
        ((undefined8 *)(uVar16 + lVar14))[1] =
             CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                      CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar22 >> 0x30),
                               CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                        (byte)((ulong)uVar22 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                 (byte)((ulong)uVar22 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                          (byte)((ulong)uVar22 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                                   (byte)((ulong)uVar22 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar24 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar22 >>
                                                                                  8),(byte)uVar24 ^
                                                                                     (byte)uVar22)))
                                                ))));
        *(undefined8 *)(uVar16 + lVar14) =
             CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                      CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                               CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                        (byte)((ulong)uVar21 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                 (byte)((ulong)uVar21 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                          (byte)((ulong)uVar21 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                                   (byte)((ulong)uVar21 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar23 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar21 >>
                                                                                  8),(byte)uVar23 ^
                                                                                     (byte)uVar21)))
                                                ))));
      }
      if (uVar19 == uVar7) goto LAB_00433198;
    }
  }
  uVar10 = ~uVar19;
  if ((param_4 & 1) != 0) {
    *(byte *)(uVar16 + uVar19) = *(byte *)(lVar18 + uVar19 + 0x30) ^ *(byte *)(uVar17 + uVar19);
    uVar19 = uVar19 | 1;
  }
  if (uVar10 + uVar7 != 0) {
    lVar14 = uVar7 - uVar19;
    pbVar8 = (byte *)(uVar19 + lVar18 + 0x31);
    pbVar12 = (byte *)(uVar17 + uVar19 + 1);
    pbVar13 = (byte *)(uVar16 + uVar19 + 1);
    do {
      lVar14 = lVar14 + -2;
      pbVar13[-1] = pbVar8[-1] ^ pbVar12[-1];
      *pbVar13 = *pbVar8 ^ *pbVar12;
      pbVar8 = pbVar8 + 2;
      pbVar12 = pbVar12 + 2;
      pbVar13 = pbVar13 + 2;
    } while (lVar14 != 0);
  }
LAB_00433198:
  *(uint *)(lVar18 + 0x70) = uVar6;
  return 1;
}


