/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00453b60; name: FUN_00453b60
 */


void FUN_00453b60(byte *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  if (param_3 != 0) {
    pbVar1 = param_1 + 0x10;
    pcVar3 = *(code **)(param_1 + 0x28);
    *param_1 = *param_1 | 0x40;
    (*pcVar3)(param_1,pbVar1,*(undefined8 *)(param_1 + 0x30));
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    bVar4 = (byte)(param_3 >> 8);
    if (param_3 >> 8 < 0xff) {
      *pbVar1 = *pbVar1 ^ bVar4;
      uVar10 = 2;
      lVar12 = 1;
    }
    else {
      *pbVar1 = ~*pbVar1;
      bVar6 = (byte)(param_3 >> 0x10);
      bVar5 = (byte)(param_3 >> 0x18);
      if (param_3 >> 0x20 == 0) {
        param_1[0x11] = param_1[0x11] ^ 0xfe;
        param_1[0x12] = param_1[0x12] ^ bVar5;
        lVar12 = 5;
        param_1[0x13] = param_1[0x13] ^ bVar6;
        param_1[0x14] = param_1[0x14] ^ bVar4;
        uVar10 = 6;
      }
      else {
        param_1[0x11] = ~param_1[0x11];
        param_1[0x12] = param_1[0x12] ^ (byte)(param_3 >> 0x38);
        param_1[0x14] = param_1[0x14] ^ (byte)(param_3 >> 0x28);
        param_1[0x15] = param_1[0x15] ^ (byte)(param_3 >> 0x20);
        param_1[0x13] = param_1[0x13] ^ (byte)(param_3 >> 0x30);
        param_1[0x16] = param_1[0x16] ^ bVar5;
        lVar12 = 9;
        param_1[0x17] = param_1[0x17] ^ bVar6;
        param_1[0x18] = param_1[0x18] ^ bVar4;
        uVar10 = 10;
      }
    }
    pbVar1[lVar12] = pbVar1[lVar12] ^ (byte)param_3;
    do {
      if (param_3 == 0) {
        bVar9 = false;
      }
      else {
        uVar13 = param_3 - 1;
        uVar2 = uVar13;
        if (0xf - uVar10 <= uVar13) {
          uVar2 = 0xf - uVar10;
        }
        pbVar11 = param_2;
        if (0xe < uVar2) {
          if (0xf - uVar10 <= uVar13) {
            uVar13 = 0xf - uVar10;
          }
          if ((param_2 + uVar13 + 1 <= param_1 + uVar10 + 0x10) ||
             (param_1 + uVar10 + uVar13 + 0x11 <= param_2)) {
            uVar14 = uVar2 + 1 & 0xfffffffffffffff0;
            uVar13 = (uVar14 - 0x10 >> 4) + 1;
            uVar15 = uVar13 & 3;
            if (uVar14 - 0x10 < 0x30) {
              lVar12 = 0;
              uVar7 = param_3;
            }
            else {
              lVar12 = 0;
              lVar16 = -(uVar13 & 0x1ffffffffffffffc);
              do {
                pbVar11 = param_1 + lVar12 + uVar10 + 0x40;
                pbVar17 = param_2 + lVar12 + 0x30;
                uVar19 = *(undefined8 *)(pbVar17 + -0x28);
                uVar18 = *(undefined8 *)(pbVar17 + -0x30);
                uVar22 = *(undefined8 *)(pbVar11 + -0x28);
                uVar20 = *(undefined8 *)(pbVar11 + -0x30);
                uVar25 = *(undefined8 *)(pbVar11 + -0x18);
                uVar24 = *(undefined8 *)(pbVar11 + -0x20);
                uVar23 = *(undefined8 *)(pbVar11 + -8);
                uVar21 = *(undefined8 *)(pbVar11 + -0x10);
                lVar12 = lVar12 + 0x40;
                *(ulong *)(pbVar11 + -0x28) =
                     CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                 (byte)((ulong)uVar19 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                          (byte)((ulong)uVar19 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                   (byte)((ulong)uVar19 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar22 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar19)))))));
                *(ulong *)(pbVar11 + -0x30) =
                     CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar20 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar18)))))));
                uVar19 = *(undefined8 *)(pbVar17 + -0x18);
                uVar18 = *(undefined8 *)(pbVar17 + -0x20);
                *(ulong *)(pbVar11 + -0x18) =
                     CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                                 (byte)((ulong)uVar19 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                          (byte)((ulong)uVar19 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                                   (byte)((ulong)uVar19 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar25 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar25 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar25 ^ (byte)uVar19)))))));
                *(ulong *)(pbVar11 + -0x20) =
                     CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar24 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar24 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar24 ^ (byte)uVar18)))))));
                uVar19 = *(undefined8 *)(pbVar17 + -8);
                uVar18 = *(undefined8 *)(pbVar17 + -0x10);
                lVar16 = lVar16 + 4;
                *(ulong *)(pbVar11 + -8) =
                     CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)((ulong)uVar23 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                 (byte)((ulong)uVar19 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                          (byte)((ulong)uVar19 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                   (byte)((ulong)uVar19 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar23 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar19)))))));
                *(ulong *)(pbVar11 + -0x10) =
                     CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar21 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar18)))))));
                uVar19 = *(undefined8 *)(pbVar11 + 8);
                uVar18 = *(undefined8 *)pbVar11;
                uVar21 = *(undefined8 *)(pbVar17 + 8);
                uVar20 = *(undefined8 *)pbVar17;
                *(ulong *)(pbVar11 + 8) =
                     CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                              CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                 (byte)((ulong)uVar21 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                          (byte)((ulong)uVar21 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                   (byte)((ulong)uVar21 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar19 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar21 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((ulong)uVar21 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar21)))))));
                *(ulong *)pbVar11 =
                     CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                              CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                 (byte)((ulong)uVar20 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                          (byte)((ulong)uVar20 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                                   (byte)((ulong)uVar20 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar18 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) ^ (byte)((ulong)uVar20 >> 8),
                                                  (byte)uVar18 ^ (byte)uVar20)))))));
              } while (lVar16 != 0);
              uVar13 = (param_3 - lVar12) + 1;
              uVar7 = param_3 - lVar12;
            }
            param_3 = param_3 - uVar14;
            if (uVar15 != 0) {
              uVar13 = uVar7 + 1;
              lVar16 = -uVar15;
              pbVar11 = param_1 + uVar10 + lVar12 + 0x10;
              pbVar17 = param_2 + lVar12;
              do {
                uVar19 = *(undefined8 *)(pbVar17 + 8);
                uVar18 = *(undefined8 *)pbVar17;
                uVar13 = uVar13 - 0x10;
                uVar21 = *(undefined8 *)(pbVar11 + 8);
                uVar20 = *(undefined8 *)pbVar11;
                bVar9 = lVar16 != -1;
                lVar16 = lVar16 + 1;
                *(ulong *)(pbVar11 + 8) =
                     CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                              CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                 (byte)((ulong)uVar19 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                          (byte)((ulong)uVar19 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                   (byte)((ulong)uVar19 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar21 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar19 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar21 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar19)))))));
                *(ulong *)pbVar11 =
                     CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar20 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar18)))))));
                pbVar11 = pbVar11 + 0x10;
                pbVar17 = pbVar17 + 0x10;
              } while (bVar9);
            }
            uVar10 = uVar10 + uVar14;
            param_2 = param_2 + uVar14;
            bVar9 = uVar13 != 1;
            if (uVar2 + 1 == uVar14) goto LAB_00453cb8;
            pbVar11 = param_2;
          }
        }
        do {
          param_2 = pbVar11 + 1;
          param_3 = param_3 - 1;
          bVar9 = param_3 != 0;
          param_1[uVar10 + 0x10] = param_1[uVar10 + 0x10] ^ *pbVar11;
          if (param_3 == 0) break;
          bVar8 = uVar10 < 0xf;
          uVar10 = uVar10 + 1;
          pbVar11 = param_2;
        } while (bVar8);
      }
LAB_00453cb8:
      (*pcVar3)(pbVar1,pbVar1,*(undefined8 *)(param_1 + 0x30));
      uVar10 = 0;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    } while (bVar9);
  }
  return;
}


