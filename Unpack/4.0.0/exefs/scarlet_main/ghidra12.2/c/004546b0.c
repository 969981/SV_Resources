/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004546b0; name: FUN_004546b0
 */


undefined8 FUN_004546b0(byte *param_1,byte *param_2,byte *param_3,ulong param_4,code *param_5)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  byte local_70 [16];
  
  bVar2 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar2 >> 6 & 1) == 0) {
    (*pcVar1)(param_1,param_1 + 0x10,uVar16);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar4 = (ulong)bVar2 & 7;
  uVar13 = uVar4 ^ 0xf;
  *param_1 = (byte)uVar4;
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar8 = uVar13;
    if ((int)uVar13 == 0xe) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      lVar11 = -((ulong)bVar2 & 6);
      do {
        pbVar10 = param_1 + uVar8;
        uVar8 = uVar8 + 2;
        bVar3 = pbVar10[1];
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        uVar4 = (ulong)bVar3 << 8 | (uVar4 & 0xffffffffffff | (ulong)*pbVar10) << 0x10;
        lVar11 = lVar11 + 2;
      } while (lVar11 != 0);
    }
    if ((bVar2 & 1) != 0) {
      bVar3 = param_1[uVar8];
      param_1[uVar8] = 0;
      uVar4 = (uVar4 | bVar3) << 8;
    }
  }
  bVar3 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar4 | bVar3) != param_4) {
    return 0xffffffff;
  }
  uVar4 = *(long *)(param_1 + 0x20) + (param_4 + 0xf >> 3 | 1);
  *(ulong *)(param_1 + 0x20) = uVar4;
  if (0x2000000000000000 < uVar4) {
    return 0xfffffffe;
  }
  uVar4 = param_4 >> 4;
  if (uVar4 == 0) {
    uVar8 = param_4;
  }
  else {
    (*param_5)(param_2,param_3,uVar4,uVar16,param_1,param_1 + 0x10);
    uVar8 = param_4 & 0xf;
    if (uVar8 == 0) goto LAB_00454998;
    param_2 = param_2 + (param_4 & 0xfffffffffffffff0);
    param_3 = param_3 + (param_4 & 0xfffffffffffffff0);
    uVar4 = (ulong)param_1[0xf] + (uVar4 & 0xff);
    param_1[0xf] = (byte)uVar4;
    uVar4 = uVar4 >> 8;
    if (uVar4 != 0 || param_4 >> 0xc != 0) {
      uVar4 = uVar4 + (param_4 >> 0xc & 0xff) + (ulong)param_1[0xe];
      param_1[0xe] = (byte)uVar4;
      uVar4 = uVar4 >> 8;
      if (uVar4 != 0 || param_4 >> 0x14 != 0) {
        uVar4 = uVar4 + (param_4 >> 0x14 & 0xff) + (ulong)param_1[0xd];
        param_1[0xd] = (byte)uVar4;
        uVar4 = uVar4 >> 8;
        if (uVar4 != 0 || param_4 >> 0x1c != 0) {
          uVar4 = uVar4 + (param_4 >> 0x1c & 0xff) + (ulong)param_1[0xc];
          param_1[0xc] = (byte)uVar4;
          uVar4 = uVar4 >> 8;
          if (uVar4 != 0 || param_4 >> 0x24 != 0) {
            uVar4 = uVar4 + (param_4 >> 0x24 & 0xff) + (ulong)param_1[0xb];
            param_1[0xb] = (byte)uVar4;
            uVar4 = uVar4 >> 8;
            if (uVar4 != 0 || param_4 >> 0x2c != 0) {
              uVar4 = uVar4 + (param_4 >> 0x2c & 0xff) + (ulong)param_1[10];
              param_1[10] = (byte)uVar4;
              uVar4 = uVar4 >> 8;
              if (uVar4 != 0 || param_4 >> 0x34 != 0) {
                uVar4 = uVar4 + (param_4 >> 0x34 & 0xff) + (ulong)param_1[9];
                param_1[9] = (byte)uVar4;
                if (uVar4 >> 8 != 0 || param_4 >> 0x3c != 0) {
                  param_1[8] = param_1[8] + (char)(uVar4 >> 8) + (byte)(param_4 >> 0x3c);
                }
              }
            }
          }
        }
      }
    }
  }
  if (uVar8 == 0) goto LAB_00454998;
  if (uVar8 < 0x40) {
LAB_00454908:
    uVar4 = 0;
    uVar6 = 0;
LAB_00454918:
    do {
      uVar6 = uVar6 + 1;
      param_1[uVar4 + 0x10] = param_1[uVar4 + 0x10] ^ param_2[uVar4];
      uVar4 = (ulong)uVar6;
    } while (uVar4 < uVar8);
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    if (((int)(uVar8 - 1) == -1) || (uVar8 - 1 >> 0x20 != 0)) goto LAB_00454918;
    if ((param_1 + 0x10 < param_2 + uVar8) && (param_2 < param_1 + 0x10 + uVar8)) goto LAB_00454908;
    uVar4 = uVar8 & 0xffffffffffffffc0;
    pbVar7 = param_2 + 0x20;
    uVar12 = uVar4;
    pbVar10 = param_1;
    do {
      pbVar9 = pbVar10 + 0x40;
      uVar15 = *(undefined8 *)(pbVar7 + -0x18);
      uVar14 = *(undefined8 *)(pbVar7 + -0x20);
      uVar18 = *(undefined8 *)(pbVar7 + -8);
      uVar17 = *(undefined8 *)(pbVar7 + -0x10);
      uVar12 = uVar12 - 0x40;
      uVar24 = *(undefined8 *)(pbVar10 + 0x18);
      uVar23 = *(undefined8 *)(pbVar10 + 0x10);
      uVar26 = *(undefined8 *)(pbVar10 + 0x28);
      uVar25 = *(undefined8 *)(pbVar10 + 0x20);
      uVar20 = *(undefined8 *)(pbVar7 + 8);
      uVar19 = *(undefined8 *)pbVar7;
      uVar22 = *(undefined8 *)(pbVar7 + 0x18);
      uVar21 = *(undefined8 *)(pbVar7 + 0x10);
      *(ulong *)(pbVar10 + 0x18) =
           CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                    CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                             CONCAT15((byte)((ulong)uVar24 >> 0x28) ^ (byte)((ulong)uVar15 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                               (byte)((ulong)uVar15 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                        (byte)((ulong)uVar15 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                                 (byte)((ulong)uVar15 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar24 >> 8)
                                                                          ^ (byte)((ulong)uVar15 >>
                                                                                  8),
                                                                          (byte)uVar24 ^
                                                                          (byte)uVar15)))))));
      *(ulong *)(pbVar10 + 0x10) =
           CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                    CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                             CONCAT15((byte)((ulong)uVar23 >> 0x28) ^ (byte)((ulong)uVar14 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                               (byte)((ulong)uVar14 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                        (byte)((ulong)uVar14 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                                 (byte)((ulong)uVar14 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar23 >> 8)
                                                                          ^ (byte)((ulong)uVar14 >>
                                                                                  8),
                                                                          (byte)uVar23 ^
                                                                          (byte)uVar14)))))));
      *(ulong *)(pbVar10 + 0x28) =
           CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                    CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                             CONCAT15((byte)((ulong)uVar26 >> 0x28) ^ (byte)((ulong)uVar18 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                               (byte)((ulong)uVar18 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                        (byte)((ulong)uVar18 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar26 >> 0x10) ^
                                                                 (byte)((ulong)uVar18 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar26 >> 8)
                                                                          ^ (byte)((ulong)uVar18 >>
                                                                                  8),
                                                                          (byte)uVar26 ^
                                                                          (byte)uVar18)))))));
      *(ulong *)(pbVar10 + 0x20) =
           CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                             CONCAT15((byte)((ulong)uVar25 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                               (byte)((ulong)uVar17 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                        (byte)((ulong)uVar17 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                                 (byte)((ulong)uVar17 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar25 >> 8)
                                                                          ^ (byte)((ulong)uVar17 >>
                                                                                  8),
                                                                          (byte)uVar25 ^
                                                                          (byte)uVar17)))))));
      uVar15 = *(undefined8 *)(pbVar10 + 0x38);
      uVar14 = *(undefined8 *)(pbVar10 + 0x30);
      uVar18 = *(undefined8 *)(pbVar10 + 0x48);
      uVar17 = *(undefined8 *)pbVar9;
      *(ulong *)(pbVar10 + 0x38) =
           CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                    CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                             CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)((ulong)uVar20 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                               (byte)((ulong)uVar20 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                        (byte)((ulong)uVar20 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                                 (byte)((ulong)uVar20 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar15 >> 8)
                                                                          ^ (byte)((ulong)uVar20 >>
                                                                                  8),
                                                                          (byte)uVar15 ^
                                                                          (byte)uVar20)))))));
      *(ulong *)(pbVar10 + 0x30) =
           CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                    CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                             CONCAT15((byte)((ulong)uVar14 >> 0x28) ^ (byte)((ulong)uVar19 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                               (byte)((ulong)uVar19 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                        (byte)((ulong)uVar19 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                                 (byte)((ulong)uVar19 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar14 >> 8)
                                                                          ^ (byte)((ulong)uVar19 >>
                                                                                  8),
                                                                          (byte)uVar14 ^
                                                                          (byte)uVar19)))))));
      *(ulong *)(pbVar10 + 0x48) =
           CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                    CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar22 >> 0x30),
                             CONCAT15((byte)((ulong)uVar18 >> 0x28) ^ (byte)((ulong)uVar22 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                               (byte)((ulong)uVar22 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                        (byte)((ulong)uVar22 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar18 >> 0x10) ^
                                                                 (byte)((ulong)uVar22 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar18 >> 8)
                                                                          ^ (byte)((ulong)uVar22 >>
                                                                                  8),
                                                                          (byte)uVar18 ^
                                                                          (byte)uVar22)))))));
      *(ulong *)pbVar9 =
           CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                    CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                             CONCAT15((byte)((ulong)uVar17 >> 0x28) ^ (byte)((ulong)uVar21 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                               (byte)((ulong)uVar21 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                        (byte)((ulong)uVar21 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar17 >> 0x10) ^
                                                                 (byte)((ulong)uVar21 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar17 >> 8)
                                                                          ^ (byte)((ulong)uVar21 >>
                                                                                  8),
                                                                          (byte)uVar17 ^
                                                                          (byte)uVar21)))))));
      pbVar7 = pbVar7 + 0x40;
      pbVar10 = pbVar9;
    } while (uVar12 != 0);
    uVar6 = (uint)uVar8 & 0xffffffc0;
    if (uVar8 != uVar4) goto LAB_00454918;
  }
  (*pcVar1)(param_1 + 0x10,param_1 + 0x10,uVar16);
  (*pcVar1)(param_1,local_70,uVar16);
  uVar4 = uVar8;
  if (uVar8 < 2) {
    uVar4 = 1;
  }
  if (uVar4 < 0x40) {
LAB_0045496c:
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar12 = uVar8;
    if (uVar8 < 2) {
      uVar12 = 1;
    }
    uVar6 = 0;
    uVar5 = 0;
    if (((int)(uVar12 - 1) != -1) && (uVar12 - 1 >> 0x20 == 0)) {
      uVar12 = uVar8;
      if (uVar8 < 2) {
        uVar12 = 1;
      }
      if ((param_3 < param_2 + uVar12) && (param_2 < param_3 + uVar12)) goto LAB_0045496c;
      uVar5 = uVar4 & 0xffffffffffffffc0;
      pbVar10 = param_3 + 0x20;
      pbVar7 = local_70 + 0x20;
      pbVar9 = param_2 + 0x20;
      uVar12 = uVar5;
      do {
        uVar15 = *(undefined8 *)(pbVar7 + -0x18);
        uVar14 = *(undefined8 *)(pbVar7 + -0x20);
        uVar18 = *(undefined8 *)(pbVar7 + -8);
        uVar17 = *(undefined8 *)(pbVar7 + -0x10);
        uVar12 = uVar12 - 0x40;
        uVar24 = *(undefined8 *)(pbVar9 + -0x18);
        uVar23 = *(undefined8 *)(pbVar9 + -0x20);
        uVar26 = *(undefined8 *)(pbVar9 + -8);
        uVar25 = *(undefined8 *)(pbVar9 + -0x10);
        uVar20 = *(undefined8 *)(pbVar7 + 8);
        uVar19 = *(undefined8 *)pbVar7;
        uVar22 = *(undefined8 *)(pbVar7 + 0x18);
        uVar21 = *(undefined8 *)(pbVar7 + 0x10);
        uVar28 = *(undefined8 *)(pbVar9 + 8);
        uVar27 = *(undefined8 *)pbVar9;
        uVar30 = *(undefined8 *)(pbVar9 + 0x18);
        uVar29 = *(undefined8 *)(pbVar9 + 0x10);
        *(ulong *)(pbVar10 + -0x18) =
             CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar15 >> 0x38),
                      CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar15 >> 0x30),
                               CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                        (byte)((ulong)uVar15 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                 (byte)((ulong)uVar15 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                          (byte)((ulong)uVar15 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar24 >> 0x10) ^
                                                                   (byte)((ulong)uVar15 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar24 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar15 >>
                                                                                  8),(byte)uVar24 ^
                                                                                     (byte)uVar15)))
                                                ))));
        *(ulong *)(pbVar10 + -0x20) =
             CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                      CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar14 >> 0x30),
                               CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                        (byte)((ulong)uVar14 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                 (byte)((ulong)uVar14 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                          (byte)((ulong)uVar14 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar23 >> 0x10) ^
                                                                   (byte)((ulong)uVar14 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar23 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar14 >>
                                                                                  8),(byte)uVar23 ^
                                                                                     (byte)uVar14)))
                                                ))));
        *(ulong *)(pbVar10 + 0x18) =
             CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                      CONCAT16((byte)((ulong)uVar30 >> 0x30) ^ (byte)((ulong)uVar22 >> 0x30),
                               CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                        (byte)((ulong)uVar22 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                 (byte)((ulong)uVar22 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                          (byte)((ulong)uVar22 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar30 >> 0x10) ^
                                                                   (byte)((ulong)uVar22 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar30 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar22 >>
                                                                                  8),(byte)uVar30 ^
                                                                                     (byte)uVar22)))
                                                ))));
        *(ulong *)(pbVar10 + 0x10) =
             CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                      CONCAT16((byte)((ulong)uVar29 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                               CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                        (byte)((ulong)uVar21 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                 (byte)((ulong)uVar21 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                          (byte)((ulong)uVar21 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar29 >> 0x10) ^
                                                                   (byte)((ulong)uVar21 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar29 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar21 >>
                                                                                  8),(byte)uVar29 ^
                                                                                     (byte)uVar21)))
                                                ))));
        *(ulong *)(pbVar10 + -8) =
             CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                      CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                               CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                        (byte)((ulong)uVar18 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                 (byte)((ulong)uVar18 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                          (byte)((ulong)uVar18 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar26 >> 0x10) ^
                                                                   (byte)((ulong)uVar18 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar26 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  8),(byte)uVar26 ^
                                                                                     (byte)uVar18)))
                                                ))));
        *(ulong *)(pbVar10 + -0x10) =
             CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                      CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                               CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                        (byte)((ulong)uVar17 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                 (byte)((ulong)uVar17 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                          (byte)((ulong)uVar17 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar25 >> 0x10) ^
                                                                   (byte)((ulong)uVar17 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar25 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  8),(byte)uVar25 ^
                                                                                     (byte)uVar17)))
                                                ))));
        *(ulong *)(pbVar10 + 8) =
             CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                      CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                               CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                        (byte)((ulong)uVar20 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                 (byte)((ulong)uVar20 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                          (byte)((ulong)uVar20 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar28 >> 0x10) ^
                                                                   (byte)((ulong)uVar20 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar28 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  8),(byte)uVar28 ^
                                                                                     (byte)uVar20)))
                                                ))));
        *(ulong *)pbVar10 =
             CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                      CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                               CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                        (byte)((ulong)uVar19 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                 (byte)((ulong)uVar19 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                          (byte)((ulong)uVar19 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar27 >> 0x10) ^
                                                                   (byte)((ulong)uVar19 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar27 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  8),(byte)uVar27 ^
                                                                                     (byte)uVar19)))
                                                ))));
        pbVar10 = pbVar10 + 0x40;
        pbVar7 = pbVar7 + 0x40;
        pbVar9 = pbVar9 + 0x40;
      } while (uVar12 != 0);
      uVar6 = (uint)uVar4 & 0xffffffc0;
      if (uVar4 == uVar5) goto LAB_00454998;
    }
  }
  do {
    uVar6 = uVar6 + 1;
    param_3[uVar5] = param_2[uVar5] ^ local_70[uVar5];
    uVar5 = (ulong)uVar6;
  } while (uVar5 < uVar8);
LAB_00454998:
  memset(param_1 + uVar13,0,(ulong)(0x10 - (int)uVar13));
  (*pcVar1)(param_1,local_70,uVar16);
  *param_1 = bVar2;
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ local_70[0xf],
                CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ local_70[0xe],
                         CONCAT15((byte)((ulong)uVar14 >> 0x28) ^ local_70[0xd],
                                  CONCAT14((byte)((ulong)uVar14 >> 0x20) ^ local_70[0xc],
                                           CONCAT13((byte)((ulong)uVar14 >> 0x18) ^ local_70[0xb],
                                                    CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                             local_70[10],
                                                             CONCAT11((byte)((ulong)uVar14 >> 8) ^
                                                                      local_70[9],
                                                                      (byte)uVar14 ^ local_70[8]))))
                                 )));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar16 >> 0x38) ^ local_70[7],
                CONCAT16((byte)((ulong)uVar16 >> 0x30) ^ local_70[6],
                         CONCAT15((byte)((ulong)uVar16 >> 0x28) ^ local_70[5],
                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) ^ local_70[4],
                                           CONCAT13((byte)((ulong)uVar16 >> 0x18) ^ local_70[3],
                                                    CONCAT12((byte)((ulong)uVar16 >> 0x10) ^
                                                             local_70[2],
                                                             CONCAT11((byte)((ulong)uVar16 >> 8) ^
                                                                      local_70[1],
                                                                      (byte)uVar16 ^ local_70[0]))))
                                 )));
  return 0;
}


