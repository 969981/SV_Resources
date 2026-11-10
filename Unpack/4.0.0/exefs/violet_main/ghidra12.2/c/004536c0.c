/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004536c0; name: FUN_004536c0
 */


void FUN_004536c0(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                 code *param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong *puVar19;
  ulong *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 local_50;
  ulong uStack_48;
  
  if (param_3 == 0) {
    return;
  }
  if (param_1 == param_2) {
    if (0xf < param_3) {
      do {
        (*param_6)(param_1,&local_50,param_4);
        param_3 = param_3 - 0x10;
        uVar7 = *param_1;
        *param_1 = *param_5 ^ local_50;
        *param_5 = uVar7;
        uVar7 = param_1[1];
        param_1[1] = param_5[1] ^ uStack_48;
        param_1 = param_1 + 2;
        param_5[1] = uVar7;
        param_2 = param_1;
      } while (0xf < param_3);
      goto joined_r0x004537c4;
    }
    param_2 = param_1;
  }
  else if (0xf < param_3) {
    puVar19 = param_5;
    puVar1 = param_1 + -2;
    do {
      puVar20 = puVar1;
      puVar1 = puVar20 + 2;
      (*param_6)(puVar1,param_2,param_4);
      param_3 = param_3 - 0x10;
      *param_2 = *param_2 ^ *puVar19;
      param_2[1] = param_2[1] ^ puVar19[1];
      param_2 = param_2 + 2;
      puVar19 = puVar1;
    } while (0xf < param_3);
    param_1 = puVar20 + 4;
    if (param_5 != puVar1) {
      uVar7 = *puVar1;
      param_5[1] = puVar20[3];
      *param_5 = uVar7;
    }
joined_r0x004537c4:
    if (param_3 == 0) {
      return;
    }
  }
  (*param_6)(param_1,&local_50,param_4);
  uVar7 = param_3;
  if (0xe < param_3 - 1) {
    uVar7 = 0x10;
  }
  if (uVar7 < 0x10) {
    uVar8 = 0;
  }
  else {
    puVar1 = (ulong *)((long)param_5 + uVar7);
    puVar19 = (ulong *)((long)param_2 + uVar7);
    uVar8 = 0;
    if ((((puVar1 <= param_2 || puVar19 <= param_5) &&
         ((ulong *)((long)param_1 + uVar7) <= param_2 || puVar19 <= param_1)) &&
        ((ulong *)((long)&local_50 + uVar7) <= param_2 || puVar19 <= &local_50)) &&
       (((ulong *)((long)param_1 + uVar7) <= param_5 || puVar1 <= param_1 &&
        ((ulong *)((long)&local_50 + uVar7) <= param_5 || puVar1 <= &local_50)))) {
      uVar8 = uVar7 & 0xfffffffffffffff0;
      uVar10 = (uVar8 - 0x10 >> 4) + 1;
      lVar11 = 0;
      if (uVar8 - 0x10 != 0) {
        lVar13 = -(uVar10 & 0x1ffffffffffffffe);
        lVar12 = lVar11;
        do {
          puVar14 = (undefined8 *)((long)param_5 + lVar12 + 0x10);
          uVar22 = *(undefined8 *)((long)&uStack_48 + lVar12);
          uVar21 = *(undefined8 *)((long)&local_50 + lVar12);
          uVar24 = puVar14[-1];
          uVar23 = puVar14[-2];
          puVar16 = (undefined8 *)((long)param_1 + lVar12);
          uVar26 = puVar16[1];
          uVar25 = *puVar16;
          puVar2 = (undefined8 *)((long)param_2 + lVar12 + 0x10);
          lVar11 = lVar12 + 0x20;
          puVar2[-1] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
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
          puVar2[-2] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
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
          uVar24 = puVar14[1];
          uVar23 = *puVar14;
          puVar14[-1] = uVar26;
          puVar14[-2] = uVar25;
          uVar22 = *(undefined8 *)((long)register0x00000008 + lVar12 + -0x38);
          uVar21 = *(undefined8 *)((long)register0x00000008 + lVar12 + -0x40);
          uVar26 = puVar16[3];
          uVar25 = puVar16[2];
          lVar13 = lVar13 + 2;
          puVar2[1] = CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
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
          *puVar2 = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
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
          puVar14[1] = uVar26;
          *puVar14 = uVar25;
          lVar12 = lVar11;
        } while (lVar13 != 0);
      }
      if ((uVar10 & 1) != 0) {
        uVar22 = ((undefined8 *)((long)param_5 + lVar11))[1];
        uVar21 = *(undefined8 *)((long)param_5 + lVar11);
        uVar24 = *(undefined8 *)((long)&uStack_48 + lVar11);
        uVar23 = *(undefined8 *)((long)&local_50 + lVar11);
        uVar26 = ((undefined8 *)((long)param_1 + lVar11))[1];
        uVar25 = *(undefined8 *)((long)param_1 + lVar11);
        ((undefined8 *)((long)param_2 + lVar11))[1] =
             CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                      CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar24 >> 0x30),
                               CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                        (byte)((ulong)uVar24 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                 (byte)((ulong)uVar24 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                          (byte)((ulong)uVar24 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                   (byte)((ulong)uVar24 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar22 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar24 >>
                                                                                  8),(byte)uVar22 ^
                                                                                     (byte)uVar24)))
                                                ))));
        *(undefined8 *)((long)param_2 + lVar11) =
             CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                      CONCAT16((byte)((ulong)uVar21 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                               CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                        (byte)((ulong)uVar23 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                 (byte)((ulong)uVar23 >> 0x20),
                                                 CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                          (byte)((ulong)uVar23 >> 0x18),
                                                          CONCAT12((byte)((ulong)uVar21 >> 0x10) ^
                                                                   (byte)((ulong)uVar23 >> 0x10),
                                                                   CONCAT11((byte)((ulong)uVar21 >>
                                                                                  8) ^
                                                                            (byte)((ulong)uVar23 >>
                                                                                  8),(byte)uVar21 ^
                                                                                     (byte)uVar23)))
                                                ))));
        ((undefined8 *)((long)param_5 + lVar11))[1] = uVar26;
        *(undefined8 *)((long)param_5 + lVar11) = uVar25;
      }
      if (uVar7 == uVar8) goto LAB_004539b4;
    }
  }
  uVar10 = uVar8;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(undefined1 *)((long)param_1 + uVar8);
    *(byte *)((long)param_2 + uVar8) =
         *(byte *)((long)param_5 + uVar8) ^ *(byte *)((long)&local_50 + uVar8);
    *(undefined1 *)((long)param_5 + uVar8) = uVar5;
    uVar10 = uVar8 | 1;
  }
  if (uVar7 != (uVar8 | 1)) {
    lVar11 = uVar10 + 1;
    lVar13 = uVar7 - uVar10;
    pbVar9 = (byte *)((long)param_1 + lVar11);
    pbVar15 = (byte *)((long)&local_50 + uVar10 + 1);
    pbVar17 = (byte *)((long)param_5 + lVar11);
    pbVar18 = (byte *)((long)param_2 + lVar11);
    do {
      lVar13 = lVar13 + -2;
      bVar6 = pbVar9[-1];
      pbVar18[-1] = pbVar17[-1] ^ pbVar15[-1];
      pbVar17[-1] = bVar6;
      bVar6 = *pbVar9;
      *pbVar18 = *pbVar17 ^ *pbVar15;
      *pbVar17 = bVar6;
      pbVar9 = pbVar9 + 2;
      pbVar15 = pbVar15 + 2;
      pbVar17 = pbVar17 + 2;
      pbVar18 = pbVar18 + 2;
    } while (lVar13 != 0);
  }
LAB_004539b4:
  if (uVar7 < 0x10) {
    uVar7 = 0x10 - param_3;
    if ((0x3f < uVar7) &&
       ((param_1 + 2 <= (ulong *)((long)param_5 + param_3) ||
        (param_5 + 2 <= (ulong *)((long)param_1 + param_3))))) {
      uVar10 = uVar7 & 0xffffffffffffffc0;
      lVar11 = param_3 + 0x20;
      param_3 = param_3 + uVar10;
      puVar14 = (undefined8 *)((long)param_5 + lVar11);
      puVar16 = (undefined8 *)((long)param_1 + lVar11);
      uVar8 = uVar10;
      do {
        uVar21 = puVar16[-4];
        uVar23 = puVar16[-1];
        uVar22 = puVar16[-2];
        uVar8 = uVar8 - 0x40;
        uVar25 = puVar16[1];
        uVar24 = *puVar16;
        uVar27 = puVar16[3];
        uVar26 = puVar16[2];
        puVar14[-3] = puVar16[-3];
        puVar14[-4] = uVar21;
        puVar14[-1] = uVar23;
        puVar14[-2] = uVar22;
        puVar14[1] = uVar25;
        *puVar14 = uVar24;
        puVar14[3] = uVar27;
        puVar14[2] = uVar26;
        puVar14 = puVar14 + 8;
        puVar16 = puVar16 + 8;
      } while (uVar8 != 0);
      if (uVar7 == uVar10) {
        return;
      }
    }
    uVar8 = 0xf - param_3;
    uVar7 = (ulong)(uint)-(int)param_3 & 3;
    if ((-(int)param_3 & 3U) != 0) {
      do {
        uVar7 = uVar7 - 1;
        *(undefined1 *)((long)param_5 + param_3) = *(undefined1 *)((long)param_1 + param_3);
        param_3 = param_3 + 1;
      } while (uVar7 != 0);
    }
    if (2 < uVar8) {
      do {
        puVar3 = (undefined1 *)((long)param_1 + param_3 + 3);
        puVar4 = (undefined1 *)((long)param_5 + param_3 + 1);
        param_3 = param_3 + 4;
        puVar4[-1] = puVar3[-3];
        *puVar4 = puVar3[-2];
        puVar4[1] = puVar3[-1];
        puVar4[2] = *puVar3;
      } while (param_3 != 0x10);
    }
  }
  return;
}


