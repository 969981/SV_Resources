/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00453e80; name: FUN_00453e80
 */


undefined8 FUN_00453e80(byte *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong local_60 [2];
  
  bVar3 = *param_1;
  pcVar2 = *(code **)(param_1 + 0x28);
  uVar20 = *(undefined8 *)(param_1 + 0x30);
  if ((bVar3 >> 6 & 1) == 0) {
    (*pcVar2)(param_1,param_1 + 0x10,uVar20);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  }
  uVar5 = (ulong)bVar3 & 7;
  uVar14 = uVar5 ^ 0xf;
  *param_1 = (byte)uVar5;
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar9 = uVar14;
    if ((int)uVar14 == 0xe) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      lVar11 = -((ulong)bVar3 & 6);
      do {
        pbVar1 = param_1 + uVar9;
        uVar9 = uVar9 + 2;
        bVar4 = pbVar1[1];
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        uVar5 = (ulong)bVar4 << 8 | (uVar5 & 0xffffffffffff | (ulong)*pbVar1) << 0x10;
        lVar11 = lVar11 + 2;
      } while (lVar11 != 0);
    }
    if ((bVar3 & 1) != 0) {
      bVar4 = param_1[uVar9];
      param_1[uVar9] = 0;
      uVar5 = (uVar5 | bVar4) << 8;
    }
  }
  bVar4 = param_1[0xf];
  param_1[0xf] = 1;
  if ((uVar5 | bVar4) != param_4) {
    return 0xffffffff;
  }
  uVar5 = *(long *)(param_1 + 0x20) + (param_4 + 0xf >> 3 | 1);
  *(ulong *)(param_1 + 0x20) = uVar5;
  if (0x2000000000000000 < uVar5) {
    return 0xfffffffe;
  }
  if (0xf < param_4) {
    do {
      *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) ^ *param_2;
      *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) ^ param_2[1];
      (*pcVar2)(param_1 + 0x10,param_1 + 0x10,uVar20);
      (*pcVar2)(param_1,local_60,uVar20);
      bVar4 = param_1[0xf];
      param_1[0xf] = (byte)(bVar4 + 1);
      if (((((bVar4 + 1 >> 8 != 0) &&
            (bVar4 = param_1[0xe], param_1[0xe] = (byte)(bVar4 + 1), bVar4 + 1 >> 8 != 0)) &&
           (bVar4 = param_1[0xd], param_1[0xd] = (byte)(bVar4 + 1), bVar4 + 1 >> 8 != 0)) &&
          ((bVar4 = param_1[0xc], param_1[0xc] = (byte)(bVar4 + 1), bVar4 + 1 >> 8 != 0 &&
           (bVar4 = param_1[0xb], param_1[0xb] = (byte)(bVar4 + 1), bVar4 + 1 >> 8 != 0)))) &&
         ((bVar4 = param_1[10], param_1[10] = (byte)(bVar4 + 1), bVar4 + 1 >> 8 != 0 &&
          (bVar4 = param_1[9], param_1[9] = (byte)(bVar4 + 1), bVar4 + 1 >> 8 != 0)))) {
        param_1[8] = param_1[8] + 1;
      }
      param_4 = param_4 - 0x10;
      *param_3 = *param_2 ^ local_60[0];
      puVar8 = param_2 + 1;
      param_2 = param_2 + 2;
      param_3[1] = *puVar8 ^ local_60[1];
      param_3 = param_3 + 2;
    } while (0xf < param_4);
  }
  if (param_4 == 0) goto LAB_00454294;
  if (param_4 < 0x40) {
LAB_004540a4:
    uVar5 = 0;
    uVar7 = 0;
LAB_004540b4:
    do {
      uVar7 = uVar7 + 1;
      param_1[uVar5 + 0x10] = param_1[uVar5 + 0x10] ^ *(byte *)((long)param_2 + uVar5);
      uVar5 = (ulong)uVar7;
    } while (uVar5 < param_4);
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    if (((int)(param_4 - 1) == -1) || (param_4 - 1 >> 0x20 != 0)) goto LAB_004540b4;
    if ((param_1 + 0x10 < (byte *)((long)param_2 + param_4)) && (param_2 < param_1 + 0x10 + param_4)
       ) goto LAB_004540a4;
    uVar5 = param_4 & 0xffffffffffffffc0;
    puVar8 = param_2 + 4;
    uVar9 = uVar5;
    pbVar1 = param_1;
    do {
      pbVar10 = pbVar1 + 0x40;
      uVar16 = puVar8[-3];
      uVar6 = puVar8[-4];
      uVar21 = puVar8[-1];
      uVar18 = puVar8[-2];
      uVar9 = uVar9 - 0x40;
      uVar17 = *(undefined8 *)(pbVar1 + 0x18);
      uVar15 = *(undefined8 *)(pbVar1 + 0x10);
      uVar22 = *(undefined8 *)(pbVar1 + 0x28);
      uVar19 = *(undefined8 *)(pbVar1 + 0x20);
      uVar24 = puVar8[1];
      uVar23 = *puVar8;
      uVar26 = puVar8[3];
      uVar25 = puVar8[2];
      *(ulong *)(pbVar1 + 0x18) =
           CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)(uVar16 >> 0x38),
                    CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)(uVar16 >> 0x30),
                             CONCAT15((byte)((ulong)uVar17 >> 0x28) ^ (byte)(uVar16 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                               (byte)(uVar16 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                        (byte)(uVar16 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar17 >> 0x10) ^
                                                                 (byte)(uVar16 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar17 >> 8)
                                                                          ^ (byte)(uVar16 >> 8),
                                                                          (byte)uVar17 ^
                                                                          (byte)uVar16)))))));
      *(ulong *)(pbVar1 + 0x10) =
           CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(uVar6 >> 0x38),
                    CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(uVar6 >> 0x30),
                             CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)(uVar6 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar15 >> 0x20) ^ (byte)(uVar6 >> 0x20)
                                               ,CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                         (byte)(uVar6 >> 0x18),
                                                         CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                                  (byte)(uVar6 >> 0x10),
                                                                  CONCAT11((byte)((ulong)uVar15 >> 8
                                                                                 ) ^ (byte)(uVar6 >>
                                                                                           8),
                                                                           (byte)uVar15 ^
                                                                           (byte)uVar6)))))));
      *(ulong *)(pbVar1 + 0x28) =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)(uVar21 >> 0x38),
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)(uVar21 >> 0x30),
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) ^ (byte)(uVar21 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                               (byte)(uVar21 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                        (byte)(uVar21 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                 (byte)(uVar21 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar22 >> 8)
                                                                          ^ (byte)(uVar21 >> 8),
                                                                          (byte)uVar22 ^
                                                                          (byte)uVar21)))))));
      *(ulong *)(pbVar1 + 0x20) =
           CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)(uVar18 >> 0x38),
                    CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)(uVar18 >> 0x30),
                             CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)(uVar18 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                               (byte)(uVar18 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                        (byte)(uVar18 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                 (byte)(uVar18 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                          ^ (byte)(uVar18 >> 8),
                                                                          (byte)uVar19 ^
                                                                          (byte)uVar18)))))));
      uVar17 = *(undefined8 *)(pbVar1 + 0x38);
      uVar15 = *(undefined8 *)(pbVar1 + 0x30);
      uVar22 = *(undefined8 *)(pbVar1 + 0x48);
      uVar19 = *(undefined8 *)pbVar10;
      *(ulong *)(pbVar1 + 0x38) =
           CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)(uVar24 >> 0x38),
                    CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)(uVar24 >> 0x30),
                             CONCAT15((byte)((ulong)uVar17 >> 0x28) ^ (byte)(uVar24 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                               (byte)(uVar24 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                        (byte)(uVar24 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar17 >> 0x10) ^
                                                                 (byte)(uVar24 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar17 >> 8)
                                                                          ^ (byte)(uVar24 >> 8),
                                                                          (byte)uVar17 ^
                                                                          (byte)uVar24)))))));
      *(ulong *)(pbVar1 + 0x30) =
           CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(uVar23 >> 0x38),
                    CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(uVar23 >> 0x30),
                             CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)(uVar23 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                               (byte)(uVar23 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                        (byte)(uVar23 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                                 (byte)(uVar23 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar15 >> 8)
                                                                          ^ (byte)(uVar23 >> 8),
                                                                          (byte)uVar15 ^
                                                                          (byte)uVar23)))))));
      *(ulong *)(pbVar1 + 0x48) =
           CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)(uVar26 >> 0x38),
                    CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)(uVar26 >> 0x30),
                             CONCAT15((byte)((ulong)uVar22 >> 0x28) ^ (byte)(uVar26 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                               (byte)(uVar26 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                        (byte)(uVar26 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar22 >> 0x10) ^
                                                                 (byte)(uVar26 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar22 >> 8)
                                                                          ^ (byte)(uVar26 >> 8),
                                                                          (byte)uVar22 ^
                                                                          (byte)uVar26)))))));
      *(ulong *)pbVar10 =
           CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)(uVar25 >> 0x38),
                    CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)(uVar25 >> 0x30),
                             CONCAT15((byte)((ulong)uVar19 >> 0x28) ^ (byte)(uVar25 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                               (byte)(uVar25 >> 0x20),
                                               CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                        (byte)(uVar25 >> 0x18),
                                                        CONCAT12((byte)((ulong)uVar19 >> 0x10) ^
                                                                 (byte)(uVar25 >> 0x10),
                                                                 CONCAT11((byte)((ulong)uVar19 >> 8)
                                                                          ^ (byte)(uVar25 >> 8),
                                                                          (byte)uVar19 ^
                                                                          (byte)uVar25)))))));
      puVar8 = puVar8 + 8;
      pbVar1 = pbVar10;
    } while (uVar9 != 0);
    uVar7 = (uint)param_4 & 0xffffffc0;
    if (param_4 != uVar5) goto LAB_004540b4;
  }
  (*pcVar2)(param_1 + 0x10,param_1 + 0x10,uVar20);
  (*pcVar2)(param_1,local_60,uVar20);
  uVar5 = param_4;
  if (param_4 < 2) {
    uVar5 = 1;
  }
  if (uVar5 < 0x40) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar9 = param_4;
    if (param_4 < 2) {
      uVar9 = 1;
    }
    uVar7 = 0;
    uVar6 = 0;
    if (((int)(uVar9 - 1) != -1) && (uVar9 - 1 >> 0x20 == 0)) {
      uVar9 = param_4;
      if (param_4 < 2) {
        uVar9 = 1;
      }
      uVar7 = 0;
      uVar6 = 0;
      if (((ulong *)((long)local_60 + uVar9) <= param_3 ||
           (ulong *)((long)param_3 + uVar9) <= local_60) &&
         ((ulong *)((long)param_2 + uVar9) <= param_3 || (ulong *)((long)param_3 + uVar9) <= param_2
         )) {
        uVar6 = uVar5 & 0xffffffffffffffc0;
        puVar8 = param_3 + 4;
        uVar7 = (uint)uVar5 & 0xffffffc0;
        puVar12 = local_60 + 4;
        puVar13 = param_2 + 4;
        uVar9 = uVar6;
        do {
          uVar18 = puVar12[-3];
          uVar16 = puVar12[-4];
          uVar23 = puVar12[-1];
          uVar21 = puVar12[-2];
          uVar9 = uVar9 - 0x40;
          uVar29 = puVar13[-3];
          uVar28 = puVar13[-4];
          uVar31 = puVar13[-1];
          uVar30 = puVar13[-2];
          uVar25 = puVar12[1];
          uVar24 = *puVar12;
          uVar27 = puVar12[3];
          uVar26 = puVar12[2];
          uVar33 = puVar13[1];
          uVar32 = *puVar13;
          uVar35 = puVar13[3];
          uVar34 = puVar13[2];
          puVar8[-3] = CONCAT17((byte)(uVar29 >> 0x38) ^ (byte)(uVar18 >> 0x38),
                                CONCAT16((byte)(uVar29 >> 0x30) ^ (byte)(uVar18 >> 0x30),
                                         CONCAT15((byte)(uVar29 >> 0x28) ^ (byte)(uVar18 >> 0x28),
                                                  CONCAT14((byte)(uVar29 >> 0x20) ^
                                                           (byte)(uVar18 >> 0x20),
                                                           CONCAT13((byte)(uVar29 >> 0x18) ^
                                                                    (byte)(uVar18 >> 0x18),
                                                                    CONCAT12((byte)(uVar29 >> 0x10)
                                                                             ^ (byte)(uVar18 >> 0x10
                                                                                     ),
                                                                             CONCAT11((byte)(uVar29 
                                                  >> 8) ^ (byte)(uVar18 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar18)))))));
          puVar8[-4] = CONCAT17((byte)(uVar28 >> 0x38) ^ (byte)(uVar16 >> 0x38),
                                CONCAT16((byte)(uVar28 >> 0x30) ^ (byte)(uVar16 >> 0x30),
                                         CONCAT15((byte)(uVar28 >> 0x28) ^ (byte)(uVar16 >> 0x28),
                                                  CONCAT14((byte)(uVar28 >> 0x20) ^
                                                           (byte)(uVar16 >> 0x20),
                                                           CONCAT13((byte)(uVar28 >> 0x18) ^
                                                                    (byte)(uVar16 >> 0x18),
                                                                    CONCAT12((byte)(uVar28 >> 0x10)
                                                                             ^ (byte)(uVar16 >> 0x10
                                                                                     ),
                                                                             CONCAT11((byte)(uVar28 
                                                  >> 8) ^ (byte)(uVar16 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar16)))))));
          puVar8[3] = CONCAT17((byte)(uVar35 >> 0x38) ^ (byte)(uVar27 >> 0x38),
                               CONCAT16((byte)(uVar35 >> 0x30) ^ (byte)(uVar27 >> 0x30),
                                        CONCAT15((byte)(uVar35 >> 0x28) ^ (byte)(uVar27 >> 0x28),
                                                 CONCAT14((byte)(uVar35 >> 0x20) ^
                                                          (byte)(uVar27 >> 0x20),
                                                          CONCAT13((byte)(uVar35 >> 0x18) ^
                                                                   (byte)(uVar27 >> 0x18),
                                                                   CONCAT12((byte)(uVar35 >> 0x10) ^
                                                                            (byte)(uVar27 >> 0x10),
                                                                            CONCAT11((byte)(uVar35 
                                                  >> 8) ^ (byte)(uVar27 >> 8),
                                                  (byte)uVar35 ^ (byte)uVar27)))))));
          puVar8[2] = CONCAT17((byte)(uVar34 >> 0x38) ^ (byte)(uVar26 >> 0x38),
                               CONCAT16((byte)(uVar34 >> 0x30) ^ (byte)(uVar26 >> 0x30),
                                        CONCAT15((byte)(uVar34 >> 0x28) ^ (byte)(uVar26 >> 0x28),
                                                 CONCAT14((byte)(uVar34 >> 0x20) ^
                                                          (byte)(uVar26 >> 0x20),
                                                          CONCAT13((byte)(uVar34 >> 0x18) ^
                                                                   (byte)(uVar26 >> 0x18),
                                                                   CONCAT12((byte)(uVar34 >> 0x10) ^
                                                                            (byte)(uVar26 >> 0x10),
                                                                            CONCAT11((byte)(uVar34 
                                                  >> 8) ^ (byte)(uVar26 >> 8),
                                                  (byte)uVar34 ^ (byte)uVar26)))))));
          puVar8[-1] = CONCAT17((byte)(uVar31 >> 0x38) ^ (byte)(uVar23 >> 0x38),
                                CONCAT16((byte)(uVar31 >> 0x30) ^ (byte)(uVar23 >> 0x30),
                                         CONCAT15((byte)(uVar31 >> 0x28) ^ (byte)(uVar23 >> 0x28),
                                                  CONCAT14((byte)(uVar31 >> 0x20) ^
                                                           (byte)(uVar23 >> 0x20),
                                                           CONCAT13((byte)(uVar31 >> 0x18) ^
                                                                    (byte)(uVar23 >> 0x18),
                                                                    CONCAT12((byte)(uVar31 >> 0x10)
                                                                             ^ (byte)(uVar23 >> 0x10
                                                                                     ),
                                                                             CONCAT11((byte)(uVar31 
                                                  >> 8) ^ (byte)(uVar23 >> 8),
                                                  (byte)uVar31 ^ (byte)uVar23)))))));
          puVar8[-2] = CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)(uVar21 >> 0x38),
                                CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)(uVar21 >> 0x30),
                                         CONCAT15((byte)(uVar30 >> 0x28) ^ (byte)(uVar21 >> 0x28),
                                                  CONCAT14((byte)(uVar30 >> 0x20) ^
                                                           (byte)(uVar21 >> 0x20),
                                                           CONCAT13((byte)(uVar30 >> 0x18) ^
                                                                    (byte)(uVar21 >> 0x18),
                                                                    CONCAT12((byte)(uVar30 >> 0x10)
                                                                             ^ (byte)(uVar21 >> 0x10
                                                                                     ),
                                                                             CONCAT11((byte)(uVar30 
                                                  >> 8) ^ (byte)(uVar21 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar21)))))));
          puVar8[1] = CONCAT17((byte)(uVar33 >> 0x38) ^ (byte)(uVar25 >> 0x38),
                               CONCAT16((byte)(uVar33 >> 0x30) ^ (byte)(uVar25 >> 0x30),
                                        CONCAT15((byte)(uVar33 >> 0x28) ^ (byte)(uVar25 >> 0x28),
                                                 CONCAT14((byte)(uVar33 >> 0x20) ^
                                                          (byte)(uVar25 >> 0x20),
                                                          CONCAT13((byte)(uVar33 >> 0x18) ^
                                                                   (byte)(uVar25 >> 0x18),
                                                                   CONCAT12((byte)(uVar33 >> 0x10) ^
                                                                            (byte)(uVar25 >> 0x10),
                                                                            CONCAT11((byte)(uVar33 
                                                  >> 8) ^ (byte)(uVar25 >> 8),
                                                  (byte)uVar33 ^ (byte)uVar25)))))));
          *puVar8 = CONCAT17((byte)(uVar32 >> 0x38) ^ (byte)(uVar24 >> 0x38),
                             CONCAT16((byte)(uVar32 >> 0x30) ^ (byte)(uVar24 >> 0x30),
                                      CONCAT15((byte)(uVar32 >> 0x28) ^ (byte)(uVar24 >> 0x28),
                                               CONCAT14((byte)(uVar32 >> 0x20) ^
                                                        (byte)(uVar24 >> 0x20),
                                                        CONCAT13((byte)(uVar32 >> 0x18) ^
                                                                 (byte)(uVar24 >> 0x18),
                                                                 CONCAT12((byte)(uVar32 >> 0x10) ^
                                                                          (byte)(uVar24 >> 0x10),
                                                                          CONCAT11((byte)(uVar32 >>
                                                                                         8) ^
                                                                                   (byte)(uVar24 >>
                                                                                         8),(byte)
                                                  uVar32 ^ (byte)uVar24)))))));
          puVar8 = puVar8 + 8;
          puVar12 = puVar12 + 8;
          puVar13 = puVar13 + 8;
        } while (uVar9 != 0);
        if (uVar5 == uVar6) goto LAB_00454294;
      }
    }
  }
  do {
    uVar7 = uVar7 + 1;
    *(byte *)((long)param_3 + uVar6) =
         *(byte *)((long)param_2 + uVar6) ^ *(byte *)((long)local_60 + uVar6);
    uVar6 = (ulong)uVar7;
  } while (uVar6 < param_4);
LAB_00454294:
  memset(param_1 + uVar14,0,(ulong)(0x10 - (int)uVar14));
  (*pcVar2)(param_1,local_60,uVar20);
  *param_1 = bVar3;
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar20 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x18) =
       CONCAT17((byte)((ulong)uVar15 >> 0x38) ^ (byte)(local_60[1] >> 0x38),
                CONCAT16((byte)((ulong)uVar15 >> 0x30) ^ (byte)(local_60[1] >> 0x30),
                         CONCAT15((byte)((ulong)uVar15 >> 0x28) ^ (byte)(local_60[1] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar15 >> 0x20) ^
                                           (byte)(local_60[1] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar15 >> 0x18) ^
                                                    (byte)(local_60[1] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar15 >> 0x10) ^
                                                             (byte)(local_60[1] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar15 >> 8) ^
                                                                      (byte)(local_60[1] >> 8),
                                                                      (byte)uVar15 ^
                                                                      (byte)local_60[1])))))));
  *(ulong *)(param_1 + 0x10) =
       CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)(local_60[0] >> 0x38),
                CONCAT16((byte)((ulong)uVar20 >> 0x30) ^ (byte)(local_60[0] >> 0x30),
                         CONCAT15((byte)((ulong)uVar20 >> 0x28) ^ (byte)(local_60[0] >> 0x28),
                                  CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                           (byte)(local_60[0] >> 0x20),
                                           CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                    (byte)(local_60[0] >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar20 >> 0x10) ^
                                                             (byte)(local_60[0] >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                                      (byte)(local_60[0] >> 8),
                                                                      (byte)uVar20 ^
                                                                      (byte)local_60[0])))))));
  return 0;
}


