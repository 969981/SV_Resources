/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004533b0; name: FUN_004533b0
 */


void FUN_004533b0(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 code *param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 0x10) {
    puVar5 = param_5;
  }
  else {
    uVar15 = 0;
    puVar5 = param_5;
    uVar14 = param_3;
    puVar16 = param_2;
    do {
      puVar1 = (ulong *)((long)param_2 + uVar15);
      *puVar1 = *puVar5 ^ *(ulong *)((long)param_1 + uVar15);
      puVar1[1] = puVar5[1] ^ ((ulong *)((long)param_1 + uVar15))[1];
      (*param_6)(puVar1,puVar1,param_4);
      uVar14 = uVar14 - 0x10;
      uVar15 = uVar15 + 0x10;
      puVar5 = puVar16;
      puVar16 = puVar16 + 2;
    } while (0xf < uVar14);
    param_2 = (ulong *)((long)param_2 + uVar15);
    puVar5 = param_2 + -2;
    if (param_3 == uVar15) goto joined_r0x0045369c;
    param_1 = (ulong *)((long)param_1 + uVar15);
    param_3 = uVar14;
  }
  uVar15 = param_3;
  if (0xe < param_3 - 1) {
    uVar15 = 0x10;
  }
  if (uVar15 < 0x10) {
    uVar14 = 0;
LAB_0045354c:
    uVar7 = uVar14;
    if ((uVar15 & 1) != 0) {
      *(byte *)((long)param_2 + uVar14) =
           *(byte *)((long)puVar5 + uVar14) ^ *(byte *)((long)param_1 + uVar14);
      uVar7 = uVar14 | 1;
    }
    if (uVar15 != (uVar14 | 1)) {
      lVar10 = uVar7 + 1;
      lVar8 = uVar15 - uVar7;
      pbVar6 = (byte *)((long)param_1 + lVar10);
      pbVar11 = (byte *)((long)puVar5 + lVar10);
      pbVar13 = (byte *)((long)param_2 + lVar10);
      do {
        lVar8 = lVar8 + -2;
        pbVar13[-1] = pbVar11[-1] ^ pbVar6[-1];
        *pbVar13 = *pbVar11 ^ *pbVar6;
        pbVar6 = pbVar6 + 2;
        pbVar11 = pbVar11 + 2;
        pbVar13 = pbVar13 + 2;
      } while (lVar8 != 0);
    }
  }
  else {
    uVar14 = 0;
    if ((param_2 < (ulong *)((long)param_1 + uVar15) && param_1 < (ulong *)((long)param_2 + uVar15))
       || (param_2 < (ulong *)((long)puVar5 + uVar15) && puVar5 < (ulong *)((long)param_2 + uVar15))
       ) goto LAB_0045354c;
    uVar14 = uVar15 & 0xfffffffffffffff0;
    uVar7 = (uVar14 - 0x10 >> 4) + 1;
    lVar10 = 0;
    if (uVar14 - 0x10 != 0) {
      lVar8 = -(uVar7 & 0x1ffffffffffffffe);
      do {
        puVar9 = (undefined8 *)((long)param_1 + lVar10);
        puVar12 = (undefined8 *)((long)puVar5 + lVar10);
        uVar18 = puVar9[1];
        uVar17 = *puVar9;
        uVar20 = puVar12[1];
        uVar19 = *puVar12;
        puVar2 = (undefined8 *)((long)param_2 + lVar10 + 0x10);
        lVar10 = lVar10 + 0x20;
        puVar2[-1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
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
        puVar2[-2] = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                              CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                 (byte)((ulong)uVar17 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                          (byte)((ulong)uVar17 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                                   (byte)((ulong)uVar17 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar19 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar17 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar19 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar19 ^ (byte)uVar17)))))));
        uVar18 = puVar9[3];
        uVar17 = puVar9[2];
        uVar20 = puVar12[3];
        uVar19 = puVar12[2];
        lVar8 = lVar8 + 2;
        puVar2[1] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                             CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                      CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
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
        *puVar2 = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                           CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                             (byte)((ulong)uVar17 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                      (byte)((ulong)uVar17 >> 0x20),
                                                      CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                               (byte)((ulong)uVar17 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar19 >> 0x10
                                                                              ) ^ (byte)((ulong)
                                                  uVar17 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar19 >> 8) ^
                                                           (byte)((ulong)uVar17 >> 8),
                                                           (byte)uVar19 ^ (byte)uVar17)))))));
      } while (lVar8 != 0);
    }
    if ((uVar7 & 1) != 0) {
      uVar18 = ((undefined8 *)((long)param_1 + lVar10))[1];
      uVar17 = *(undefined8 *)((long)param_1 + lVar10);
      uVar20 = ((undefined8 *)((long)puVar5 + lVar10))[1];
      uVar19 = *(undefined8 *)((long)puVar5 + lVar10);
      ((undefined8 *)((long)param_2 + lVar10))[1] =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ (byte)((ulong)uVar18 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                               (byte)((ulong)uVar18 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                        (byte)((ulong)uVar18 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                                 (byte)((ulong)uVar18 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar20 >> 8)
                                                                          ^ (byte)((ulong)uVar18 >>
                                                                                  8),
                                                                          (byte)uVar20 ^
                                                                          (byte)uVar18)))))));
      *(undefined8 *)((long)param_2 + lVar10) =
           CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                    CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                             CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)((ulong)uVar17 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                               (byte)((ulong)uVar17 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                        (byte)((ulong)uVar17 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                 (byte)((ulong)uVar17 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                          ^ (byte)((ulong)uVar17 >>
                                                                                  8),
                                                                          (byte)uVar19 ^
                                                                          (byte)uVar17)))))));
    }
    if (uVar15 != uVar14) goto LAB_0045354c;
  }
  if (uVar15 < 0x10) {
    uVar15 = 0x10 - param_3;
    if ((0x3f < uVar15) &&
       ((puVar5 + 2 <= (ulong *)((long)param_2 + param_3) ||
        (param_2 + 2 <= (ulong *)((long)puVar5 + param_3))))) {
      uVar7 = uVar15 & 0xffffffffffffffc0;
      lVar10 = param_3 + 0x20;
      param_3 = param_3 + uVar7;
      puVar9 = (undefined8 *)((long)param_2 + lVar10);
      puVar12 = (undefined8 *)((long)puVar5 + lVar10);
      uVar14 = uVar7;
      do {
        uVar17 = puVar12[-4];
        uVar19 = puVar12[-1];
        uVar18 = puVar12[-2];
        uVar14 = uVar14 - 0x40;
        uVar21 = puVar12[1];
        uVar20 = *puVar12;
        uVar23 = puVar12[3];
        uVar22 = puVar12[2];
        puVar9[-3] = puVar12[-3];
        puVar9[-4] = uVar17;
        puVar9[-1] = uVar19;
        puVar9[-2] = uVar18;
        puVar9[1] = uVar21;
        *puVar9 = uVar20;
        puVar9[3] = uVar23;
        puVar9[2] = uVar22;
        puVar9 = puVar9 + 8;
        puVar12 = puVar12 + 8;
      } while (uVar14 != 0);
      if (uVar15 == uVar7) goto LAB_00453688;
    }
    uVar14 = 0xf - param_3;
    uVar15 = (ulong)(uint)-(int)param_3 & 3;
    if ((-(int)param_3 & 3U) != 0) {
      do {
        uVar15 = uVar15 - 1;
        *(undefined1 *)((long)param_2 + param_3) = *(undefined1 *)((long)puVar5 + param_3);
        param_3 = param_3 + 1;
      } while (uVar15 != 0);
    }
    if (2 < uVar14) {
      do {
        puVar3 = (undefined1 *)((long)puVar5 + param_3 + 3);
        puVar4 = (undefined1 *)((long)param_2 + param_3 + 1);
        param_3 = param_3 + 4;
        puVar4[-1] = puVar3[-3];
        *puVar4 = puVar3[-2];
        puVar4[1] = puVar3[-1];
        puVar4[2] = *puVar3;
      } while (param_3 != 0x10);
    }
  }
LAB_00453688:
  (*param_6)(param_2,param_2,param_4);
  puVar5 = param_2;
joined_r0x0045369c:
  if (puVar5 != param_5) {
    uVar15 = *puVar5;
    param_5[1] = puVar5[1];
    *param_5 = uVar15;
  }
  return;
}


