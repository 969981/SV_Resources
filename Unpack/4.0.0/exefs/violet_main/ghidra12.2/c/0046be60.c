/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046be60; name: FUN_0046be60
 */


undefined8
FUN_0046be60(undefined1 *param_1,int param_2,void *param_3,uint param_4,undefined8 param_5,
            int param_6,long param_7,long param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  byte local_a0 [32];
  undefined8 auStack_80 [4];
  
  iVar4 = param_2 + -1;
  if (param_7 == 0) {
    param_7 = FUN_0043c280();
  }
  lVar10 = param_7;
  if (param_8 != 0) {
    lVar10 = param_8;
  }
  uVar2 = FUN_0043b720(param_7);
  uVar21 = ~(uVar2 << 1);
  if ((int)(iVar4 + uVar21) < (int)param_4) {
    uVar6 = 0x6e;
    uVar7 = 0x3e;
LAB_0046c084:
    FUN_004806c0(4,0x9a,uVar6,"external/openssl/crypto/rsa/rsa_oaep.c",uVar7);
    return 0;
  }
  if (param_2 <= (int)(uVar2 << 1 | 1)) {
    uVar7 = 0x44;
    uVar6 = 0x78;
    goto LAB_0046c084;
  }
  uVar18 = (ulong)uVar2;
  lVar19 = (long)(int)uVar2;
  puVar1 = param_1 + lVar19 + 1;
  *param_1 = 0;
  iVar3 = FUN_0042c130(param_5,(long)param_6,puVar1,0,param_7,0);
  if (iVar3 != 0) {
    memset(puVar1 + lVar19,0,(long)(int)((iVar4 - param_4) + uVar21));
    puVar1[(int)((iVar4 - param_4) + ~uVar2)] = 1;
    memcpy(puVar1 + (((long)iVar4 - (long)(int)param_4) - lVar19),param_3,(ulong)param_4);
    iVar3 = FUN_00464f80(param_1 + 1,uVar18);
    if (0 < iVar3) {
      uVar21 = iVar4 - uVar2;
      lVar20 = (long)(int)uVar21;
      puVar5 = (undefined1 *)FUN_00452c30(lVar20,"external/openssl/crypto/rsa/rsa_oaep.c",0x55);
      if (puVar5 == (undefined1 *)0x0) {
        FUN_004806c0(4,0x9a,0x41,"external/openssl/crypto/rsa/rsa_oaep.c",0x57);
      }
      else {
        iVar4 = FUN_0046c210(puVar5,lVar20,param_1 + 1,lVar19,lVar10);
        if (-1 < iVar4) {
          if (0 < (int)uVar21) {
            uVar8 = (ulong)uVar21;
            if ((uVar21 < 0x40) ||
               ((puVar1 < puVar5 + uVar8 && (puVar5 < param_1 + lVar19 + uVar8 + 1)))) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar8 & 0xffffffc0;
              puVar15 = (undefined8 *)(param_1 + lVar19 + 0x21);
              puVar17 = (undefined8 *)(puVar5 + 0x20);
              uVar13 = uVar11;
              do {
                uVar7 = puVar17[-3];
                uVar6 = puVar17[-4];
                uVar23 = puVar17[-1];
                uVar22 = puVar17[-2];
                uVar13 = uVar13 - 0x40;
                uVar29 = puVar15[-3];
                uVar28 = puVar15[-4];
                uVar31 = puVar15[-1];
                uVar30 = puVar15[-2];
                uVar25 = puVar17[1];
                uVar24 = *puVar17;
                uVar27 = puVar17[3];
                uVar26 = puVar17[2];
                puVar15[-3] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar7 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                                (byte)((ulong)uVar7 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                         (byte)((ulong)uVar7 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                                  (byte)((ulong)uVar7 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar29 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar7 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) ^ (byte)((ulong)uVar7 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                           (byte)((ulong)uVar7 >> 8),
                                                           (byte)uVar29 ^ (byte)uVar7)))))));
                puVar15[-4] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                                (byte)((ulong)uVar6 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                         (byte)((ulong)uVar6 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                                  (byte)((ulong)uVar6 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar28 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar6 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar28 >> 0x10) ^ (byte)((ulong)uVar6 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                           (byte)((ulong)uVar6 >> 8),
                                                           (byte)uVar28 ^ (byte)uVar6)))))));
                puVar15[-1] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                                 (byte)((ulong)uVar23 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                          (byte)((ulong)uVar23 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                                   (byte)((ulong)uVar23 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar31 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar23 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar31 >> 0x10) ^ (byte)((ulong)uVar23 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar31 >> 8) ^
                                                           (byte)((ulong)uVar23 >> 8),
                                                           (byte)uVar31 ^ (byte)uVar23)))))));
                puVar15[-2] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                                 (byte)((ulong)uVar22 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                          (byte)((ulong)uVar22 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                                   (byte)((ulong)uVar22 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar30 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar22 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar30 >> 0x10) ^ (byte)((ulong)uVar22 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar30 >> 8) ^
                                                           (byte)((ulong)uVar22 >> 8),
                                                           (byte)uVar30 ^ (byte)uVar22)))))));
                uVar7 = puVar15[1];
                uVar6 = *puVar15;
                uVar23 = puVar15[3];
                uVar22 = puVar15[2];
                puVar15[1] = CONCAT17((byte)((ulong)uVar7 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar7 >> 0x30) ^
                                               (byte)((ulong)uVar25 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar7 >> 0x28) ^
                                                        (byte)((ulong)uVar25 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar7 >> 0x20) ^
                                                                 (byte)((ulong)uVar25 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar7 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar25 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar7 >> 0x10) ^ (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar7 >> 8) ^
                                                           (byte)((ulong)uVar25 >> 8),
                                                           (byte)uVar7 ^ (byte)uVar25)))))));
                *puVar15 = CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar6 >> 0x30) ^
                                             (byte)((ulong)uVar24 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                                      (byte)((ulong)uVar24 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                               (byte)((ulong)uVar24 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar6 >> 0x18)
                                                                        ^ (byte)((ulong)uVar24 >>
                                                                                0x18),
                                                                        CONCAT12((byte)((ulong)uVar6
                                                                                       >> 0x10) ^
                                                                                 (byte)((ulong)
                                                  uVar24 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                           (byte)((ulong)uVar24 >> 8),
                                                           (byte)uVar6 ^ (byte)uVar24)))))));
                puVar15[3] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                               (byte)((ulong)uVar27 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                        (byte)((ulong)uVar27 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                                 (byte)((ulong)uVar27 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar23 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar27 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar23 >> 0x10) ^ (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar23 >> 8) ^
                                                           (byte)((ulong)uVar27 >> 8),
                                                           (byte)uVar23 ^ (byte)uVar27)))))));
                puVar15[2] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar26 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar22 >> 0x30) ^
                                               (byte)((ulong)uVar26 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                        (byte)((ulong)uVar26 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                                 (byte)((ulong)uVar26 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar22 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar26 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar22 >> 0x10) ^ (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar22 >> 8) ^
                                                           (byte)((ulong)uVar26 >> 8),
                                                           (byte)uVar22 ^ (byte)uVar26)))))));
                puVar15 = puVar15 + 8;
                puVar17 = puVar17 + 8;
              } while (uVar13 != 0);
              if (uVar11 == uVar8) goto LAB_0046c10c;
            }
            uVar13 = ~uVar11;
            if ((uVar21 & 1) != 0) {
              puVar1[uVar11] = puVar1[uVar11] ^ puVar5[uVar11];
              uVar11 = uVar11 | 1;
            }
            if (uVar13 + uVar8 != 0) {
              lVar9 = uVar8 - uVar11;
              pbVar12 = puVar5 + uVar11 + 1;
              pbVar16 = param_1 + uVar11 + lVar19;
              do {
                pbVar14 = pbVar16 + 2;
                lVar9 = lVar9 + -2;
                pbVar16[1] = pbVar16[1] ^ pbVar12[-1];
                *pbVar14 = *pbVar14 ^ *pbVar12;
                pbVar12 = pbVar12 + 2;
                pbVar16 = pbVar14;
              } while (lVar9 != 0);
            }
          }
LAB_0046c10c:
          iVar4 = FUN_0046c210(local_a0,lVar19,puVar1,lVar20,lVar10);
          if (-1 < iVar4) {
            if (0 < (int)uVar2) {
              if (uVar2 < 0x40) {
                uVar11 = 0;
              }
              else {
                uVar11 = uVar18 & 0xffffffc0;
                puVar15 = (undefined8 *)(param_1 + 0x21);
                puVar17 = auStack_80;
                uVar8 = uVar11;
                do {
                  uVar7 = puVar17[-3];
                  uVar6 = puVar17[-4];
                  uVar23 = puVar17[-1];
                  uVar22 = puVar17[-2];
                  uVar8 = uVar8 - 0x40;
                  uVar29 = puVar15[-3];
                  uVar28 = puVar15[-4];
                  uVar31 = puVar15[-1];
                  uVar30 = puVar15[-2];
                  uVar25 = puVar17[1];
                  uVar24 = *puVar17;
                  uVar27 = puVar17[3];
                  uVar26 = puVar17[2];
                  puVar15[-3] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^
                                         (byte)((ulong)uVar7 >> 0x38),
                                         CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                                  (byte)((ulong)uVar7 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                           (byte)((ulong)uVar7 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                                    (byte)((ulong)uVar7 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar29 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar7 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) ^ (byte)((ulong)uVar7 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                           (byte)((ulong)uVar7 >> 8),
                                                           (byte)uVar29 ^ (byte)uVar7)))))));
                  puVar15[-4] = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^
                                         (byte)((ulong)uVar6 >> 0x38),
                                         CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                                  (byte)((ulong)uVar6 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                           (byte)((ulong)uVar6 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                                    (byte)((ulong)uVar6 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar28 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar6 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar28 >> 0x10) ^ (byte)((ulong)uVar6 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                           (byte)((ulong)uVar6 >> 8),
                                                           (byte)uVar28 ^ (byte)uVar6)))))));
                  puVar15[-1] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^
                                         (byte)((ulong)uVar23 >> 0x38),
                                         CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                                  (byte)((ulong)uVar23 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                           (byte)((ulong)uVar23 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                                    (byte)((ulong)uVar23 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar31 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar23 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar31 >> 0x10) ^ (byte)((ulong)uVar23 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar31 >> 8) ^
                                                           (byte)((ulong)uVar23 >> 8),
                                                           (byte)uVar31 ^ (byte)uVar23)))))));
                  puVar15[-2] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^
                                         (byte)((ulong)uVar22 >> 0x38),
                                         CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                                  (byte)((ulong)uVar22 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                           (byte)((ulong)uVar22 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                                    (byte)((ulong)uVar22 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar30 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar22 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar30 >> 0x10) ^ (byte)((ulong)uVar22 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar30 >> 8) ^
                                                           (byte)((ulong)uVar22 >> 8),
                                                           (byte)uVar30 ^ (byte)uVar22)))))));
                  uVar7 = puVar15[1];
                  uVar6 = *puVar15;
                  uVar23 = puVar15[3];
                  uVar22 = puVar15[2];
                  puVar15[1] = CONCAT17((byte)((ulong)uVar7 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar7 >> 0x30) ^
                                                  (byte)((ulong)uVar25 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar7 >> 0x28) ^
                                                           (byte)((ulong)uVar25 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar7 >> 0x20) ^
                                                                    (byte)((ulong)uVar25 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar7 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar25 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar7 >> 0x10) ^ (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar7 >> 8) ^
                                                           (byte)((ulong)uVar25 >> 8),
                                                           (byte)uVar7 ^ (byte)uVar25)))))));
                  *puVar15 = CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar6 >> 0x30) ^
                                               (byte)((ulong)uVar24 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                                        (byte)((ulong)uVar24 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                                 (byte)((ulong)uVar24 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar6 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar24 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar6 >> 0x10) ^ (byte)((ulong)uVar24 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                           (byte)((ulong)uVar24 >> 8),
                                                           (byte)uVar6 ^ (byte)uVar24)))))));
                  puVar15[3] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^
                                        (byte)((ulong)uVar27 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                                 (byte)((ulong)uVar27 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                          (byte)((ulong)uVar27 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                                   (byte)((ulong)uVar27 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar23 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar27 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar23 >> 0x10) ^ (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar23 >> 8) ^
                                                           (byte)((ulong)uVar27 >> 8),
                                                           (byte)uVar23 ^ (byte)uVar27)))))));
                  puVar15[2] = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^
                                        (byte)((ulong)uVar26 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar22 >> 0x30) ^
                                                 (byte)((ulong)uVar26 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                          (byte)((ulong)uVar26 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                                   (byte)((ulong)uVar26 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar22 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar26 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar22 >> 0x10) ^ (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar22 >> 8) ^
                                                           (byte)((ulong)uVar26 >> 8),
                                                           (byte)uVar22 ^ (byte)uVar26)))))));
                  puVar15 = puVar15 + 8;
                  puVar17 = puVar17 + 8;
                } while (uVar8 != 0);
                if (uVar11 == uVar18) goto LAB_0046c1c4;
              }
              pbVar16 = param_1 + uVar11;
              lVar10 = uVar18 - uVar11;
              pbVar12 = local_a0 + uVar11;
              do {
                pbVar16 = pbVar16 + 1;
                lVar10 = lVar10 + -1;
                *pbVar16 = *pbVar16 ^ *pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (lVar10 != 0);
            }
LAB_0046c1c4:
            uVar6 = 1;
            goto LAB_0046c1c8;
          }
        }
      }
      uVar6 = 0;
      goto LAB_0046c1c8;
    }
  }
  uVar6 = 0;
  puVar5 = (undefined1 *)0x0;
  uVar21 = 0;
LAB_0046c1c8:
  FUN_00453300(local_a0,0x40);
  FUN_00453260(puVar5,(long)(int)uVar21,"external/openssl/crypto/rsa/rsa_oaep.c",0x68);
  return uVar6;
}


