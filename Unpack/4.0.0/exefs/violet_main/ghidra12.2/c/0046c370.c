/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046c370; name: FUN_0046c370
 */


uint FUN_0046c370(byte *param_1,uint param_2,long param_3,uint param_4,int param_5,
                 undefined8 param_6,int param_7,long param_8,long param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  ulong uVar24;
  byte *pbVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  byte *pbVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined1 auStack_e0 [64];
  byte local_a0 [32];
  undefined8 local_80 [4];
  
  if (param_8 == 0) {
    param_8 = FUN_0043c280();
  }
  lVar19 = param_8;
  if (param_9 != 0) {
    lVar19 = param_9;
  }
  uVar10 = FUN_0043b720(param_8);
  if ((int)param_2 < 1) {
    return 0xffffffff;
  }
  if ((int)param_4 < 1) {
    return 0xffffffff;
  }
  if ((param_5 < (int)param_4) || (uVar27 = (uint)uVar10, param_5 < (int)(uVar27 * 2 + 2))) {
    FUN_004806c0(4,0x99,0x79,"external/openssl/crypto/rsa/rsa_oaep.c",0x98);
    return 0xffffffff;
  }
  uVar1 = ~uVar27 + param_5;
  uVar11 = (ulong)(int)uVar1;
  pbVar12 = (byte *)FUN_00452c30(uVar11,"external/openssl/crypto/rsa/rsa_oaep.c",0x9d);
  if (pbVar12 == (byte *)0x0) {
    FUN_004806c0(4,0x99,0x41,"external/openssl/crypto/rsa/rsa_oaep.c",0x9f);
  }
  else {
    lVar13 = FUN_00452c30((long)param_5,"external/openssl/crypto/rsa/rsa_oaep.c",0xa3);
    if (lVar13 != 0) {
      pbVar29 = (byte *)(lVar13 + param_5);
      if (param_5 < 1) {
        uVar26 = (uint)*pbVar29;
      }
      else {
        pbVar16 = (byte *)(param_3 + (ulong)param_4);
        iVar8 = param_5;
        do {
          uVar9 = (int)(param_4 - 1 & (param_4 ^ 0xffffffff)) >> 0x1f;
          pbVar16 = pbVar16 + -(ulong)((uVar9 ^ 0xffffffff) & 1);
          uVar26 = (uint)*pbVar16 & (uVar9 ^ 0xffffffff);
          param_4 = param_4 + (uVar9 ^ 0xffffffff);
          iVar8 = iVar8 + -1;
          pbVar29 = pbVar29 + -1;
          *pbVar29 = (byte)uVar26;
        } while (iVar8 != 0);
      }
      pbVar16 = pbVar29 + 1;
      uVar9 = (int)(uVar26 - 1) >> 0x1f;
      lVar13 = (long)(int)uVar27;
      pbVar25 = pbVar16 + lVar13;
      iVar8 = FUN_0046c210(local_a0,lVar13,pbVar25,uVar11,lVar19);
      if (iVar8 == 0) {
        if (0 < (int)uVar27) {
          uVar17 = uVar10 & 0xffffffff;
          if ((uVar27 < 0x40) || (local_a0 < pbVar29 + uVar17 + 1 && pbVar16 < local_a0 + uVar17)) {
            uVar20 = 0;
          }
          else {
            uVar20 = uVar10 & 0xffffffc0;
            puVar22 = local_80;
            pbVar23 = pbVar29 + 0x21;
            uVar24 = uVar20;
            do {
              uVar31 = *(undefined8 *)(pbVar23 + -0x18);
              uVar30 = *(undefined8 *)(pbVar23 + -0x20);
              uVar33 = *(undefined8 *)(pbVar23 + -8);
              uVar32 = *(undefined8 *)(pbVar23 + -0x10);
              uVar24 = uVar24 - 0x40;
              uVar39 = puVar22[-3];
              uVar38 = puVar22[-4];
              uVar41 = puVar22[-1];
              uVar40 = puVar22[-2];
              uVar35 = *(undefined8 *)(pbVar23 + 8);
              uVar34 = *(undefined8 *)pbVar23;
              uVar37 = *(undefined8 *)(pbVar23 + 0x18);
              uVar36 = *(undefined8 *)(pbVar23 + 0x10);
              puVar22[-3] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                              (byte)((ulong)uVar31 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                       (byte)((ulong)uVar31 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar39 >> 0x20) ^
                                                                (byte)((ulong)uVar31 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar39 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar31 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar39 >> 0x10) ^ (byte)((ulong)uVar31 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar39 >> 8) ^
                                                           (byte)((ulong)uVar31 >> 8),
                                                           (byte)uVar39 ^ (byte)uVar31)))))));
              puVar22[-4] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar30 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                              (byte)((ulong)uVar30 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                       (byte)((ulong)uVar30 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                                (byte)((ulong)uVar30 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar38 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar30 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar38 >> 0x10) ^ (byte)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar38 >> 8) ^
                                                           (byte)((ulong)uVar30 >> 8),
                                                           (byte)uVar38 ^ (byte)uVar30)))))));
              puVar22[-1] = CONCAT17((byte)((ulong)uVar41 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar41 >> 0x30) ^
                                              (byte)((ulong)uVar33 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                                       (byte)((ulong)uVar33 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                                (byte)((ulong)uVar33 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar41 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar33 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar41 >> 0x10) ^ (byte)((ulong)uVar33 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar41 >> 8) ^
                                                           (byte)((ulong)uVar33 >> 8),
                                                           (byte)uVar41 ^ (byte)uVar33)))))));
              puVar22[-2] = CONCAT17((byte)((ulong)uVar40 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar40 >> 0x30) ^
                                              (byte)((ulong)uVar32 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar40 >> 0x28) ^
                                                       (byte)((ulong)uVar32 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar40 >> 0x20) ^
                                                                (byte)((ulong)uVar32 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar40 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar32 >>
                                                                               0x18),
                                                                         CONCAT12((byte)((ulong)
                                                  uVar40 >> 0x10) ^ (byte)((ulong)uVar32 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar40 >> 8) ^
                                                           (byte)((ulong)uVar32 >> 8),
                                                           (byte)uVar40 ^ (byte)uVar32)))))));
              uVar31 = puVar22[1];
              uVar30 = *puVar22;
              uVar33 = puVar22[3];
              uVar32 = puVar22[2];
              puVar22[1] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                             (byte)((ulong)uVar35 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                      (byte)((ulong)uVar35 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                               (byte)((ulong)uVar35 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar31 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar35 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar31 >> 0x10) ^
                                                           (byte)((ulong)uVar35 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar31 >> 8) ^
                                                                    (byte)((ulong)uVar35 >> 8),
                                                                    (byte)uVar31 ^ (byte)uVar35)))))
                                            ));
              *puVar22 = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                           (byte)((ulong)uVar34 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                    (byte)((ulong)uVar34 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                             (byte)((ulong)uVar34 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar30 >> 0x18)
                                                                      ^ (byte)((ulong)uVar34 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar30
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar34
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar30 >> 8) ^ (byte)((ulong)uVar34 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar34)))))));
              puVar22[3] = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar33 >> 0x30) ^
                                             (byte)((ulong)uVar37 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                                      (byte)((ulong)uVar37 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                               (byte)((ulong)uVar37 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar33 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar37 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                           (byte)((ulong)uVar37 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar33 >> 8) ^
                                                                    (byte)((ulong)uVar37 >> 8),
                                                                    (byte)uVar33 ^ (byte)uVar37)))))
                                            ));
              puVar22[2] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                             (byte)((ulong)uVar36 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                      (byte)((ulong)uVar36 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                               (byte)((ulong)uVar36 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar32 >> 0x18
                                                                              ) ^ (byte)((ulong)
                                                  uVar36 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar32 >> 0x10) ^
                                                           (byte)((ulong)uVar36 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                                    (byte)((ulong)uVar36 >> 8),
                                                                    (byte)uVar32 ^ (byte)uVar36)))))
                                            ));
              puVar22 = puVar22 + 8;
              pbVar23 = pbVar23 + 0x40;
            } while (uVar24 != 0);
            if (uVar20 == uVar17) goto LAB_0046c660;
          }
          uVar24 = ~uVar20;
          if ((uVar10 & 1) != 0) {
            local_a0[uVar20] = local_a0[uVar20] ^ pbVar16[uVar20];
            uVar20 = uVar20 | 1;
          }
          if (uVar24 + uVar17 != 0) {
            lVar18 = uVar17 - uVar20;
            pbVar23 = local_a0 + uVar20 + 1;
            pbVar16 = pbVar29 + uVar20;
            do {
              lVar18 = lVar18 + -2;
              pbVar23[-1] = pbVar23[-1] ^ pbVar16[1];
              *pbVar23 = *pbVar23 ^ pbVar16[2];
              pbVar23 = pbVar23 + 2;
              pbVar16 = pbVar16 + 2;
            } while (lVar18 != 0);
          }
        }
LAB_0046c660:
        iVar8 = FUN_0046c210(pbVar12,uVar11,local_a0,lVar13,lVar19);
        if (iVar8 == 0) {
          if (0 < (int)uVar1) {
            uVar17 = (ulong)uVar1;
            if ((uVar1 < 0x40) ||
               ((pbVar12 < pbVar29 + lVar13 + uVar17 + 1 && (pbVar25 < pbVar12 + uVar17)))) {
              uVar20 = 0;
            }
            else {
              uVar20 = uVar11 & 0xffffffc0;
              pbVar16 = pbVar12 + 0x20;
              pbVar23 = pbVar29 + lVar13 + 0x21;
              uVar24 = uVar20;
              do {
                uVar31 = *(undefined8 *)(pbVar23 + -0x18);
                uVar30 = *(undefined8 *)(pbVar23 + -0x20);
                uVar33 = *(undefined8 *)(pbVar23 + -8);
                uVar32 = *(undefined8 *)(pbVar23 + -0x10);
                uVar24 = uVar24 - 0x40;
                uVar39 = *(undefined8 *)(pbVar16 + -0x18);
                uVar38 = *(undefined8 *)(pbVar16 + -0x20);
                uVar41 = *(undefined8 *)(pbVar16 + -8);
                uVar40 = *(undefined8 *)(pbVar16 + -0x10);
                uVar35 = *(undefined8 *)(pbVar23 + 8);
                uVar34 = *(undefined8 *)pbVar23;
                uVar37 = *(undefined8 *)(pbVar23 + 0x18);
                uVar36 = *(undefined8 *)(pbVar23 + 0x10);
                *(ulong *)(pbVar16 + -0x18) =
                     CONCAT17((byte)((ulong)uVar39 >> 0x38) ^ (byte)((ulong)uVar31 >> 0x38),
                              CONCAT16((byte)((ulong)uVar39 >> 0x30) ^ (byte)((ulong)uVar31 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                 (byte)((ulong)uVar31 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar39 >> 0x20) ^
                                                          (byte)((ulong)uVar31 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar39 >> 0x18) ^
                                                                   (byte)((ulong)uVar31 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar39 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar31 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar39 >> 8) ^ (byte)((ulong)uVar31 >> 8),
                                                  (byte)uVar39 ^ (byte)uVar31)))))));
                *(ulong *)(pbVar16 + -0x20) =
                     CONCAT17((byte)((ulong)uVar38 >> 0x38) ^ (byte)((ulong)uVar30 >> 0x38),
                              CONCAT16((byte)((ulong)uVar38 >> 0x30) ^ (byte)((ulong)uVar30 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                 (byte)((ulong)uVar30 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar38 >> 0x20) ^
                                                          (byte)((ulong)uVar30 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                                   (byte)((ulong)uVar30 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar38 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar30 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar38 >> 8) ^ (byte)((ulong)uVar30 >> 8),
                                                  (byte)uVar38 ^ (byte)uVar30)))))));
                *(ulong *)(pbVar16 + -8) =
                     CONCAT17((byte)((ulong)uVar41 >> 0x38) ^ (byte)((ulong)uVar33 >> 0x38),
                              CONCAT16((byte)((ulong)uVar41 >> 0x30) ^ (byte)((ulong)uVar33 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                                 (byte)((ulong)uVar33 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                          (byte)((ulong)uVar33 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar41 >> 0x18) ^
                                                                   (byte)((ulong)uVar33 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar41 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar33 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar41 >> 8) ^ (byte)((ulong)uVar33 >> 8),
                                                  (byte)uVar41 ^ (byte)uVar33)))))));
                *(ulong *)(pbVar16 + -0x10) =
                     CONCAT17((byte)((ulong)uVar40 >> 0x38) ^ (byte)((ulong)uVar32 >> 0x38),
                              CONCAT16((byte)((ulong)uVar40 >> 0x30) ^ (byte)((ulong)uVar32 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar40 >> 0x28) ^
                                                 (byte)((ulong)uVar32 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar40 >> 0x20) ^
                                                          (byte)((ulong)uVar32 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar40 >> 0x18) ^
                                                                   (byte)((ulong)uVar32 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar40 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar32 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar40 >> 8) ^ (byte)((ulong)uVar32 >> 8),
                                                  (byte)uVar40 ^ (byte)uVar32)))))));
                uVar31 = *(undefined8 *)(pbVar16 + 8);
                uVar30 = *(undefined8 *)pbVar16;
                uVar33 = *(undefined8 *)(pbVar16 + 0x18);
                uVar32 = *(undefined8 *)(pbVar16 + 0x10);
                *(ulong *)(pbVar16 + 8) =
                     CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar35 >> 0x38),
                              CONCAT16((byte)((ulong)uVar31 >> 0x30) ^ (byte)((ulong)uVar35 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                 (byte)((ulong)uVar35 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                          (byte)((ulong)uVar35 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar31 >> 0x18) ^
                                                                   (byte)((ulong)uVar35 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar31 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar35 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar31 >> 8) ^ (byte)((ulong)uVar35 >> 8),
                                                  (byte)uVar31 ^ (byte)uVar35)))))));
                *(ulong *)pbVar16 =
                     CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar34 >> 0x38),
                              CONCAT16((byte)((ulong)uVar30 >> 0x30) ^ (byte)((ulong)uVar34 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                 (byte)((ulong)uVar34 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                          (byte)((ulong)uVar34 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar30 >> 0x18) ^
                                                                   (byte)((ulong)uVar34 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar30 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar34 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar30 >> 8) ^ (byte)((ulong)uVar34 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar34)))))));
                *(ulong *)(pbVar16 + 0x18) =
                     CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uVar37 >> 0x38),
                              CONCAT16((byte)((ulong)uVar33 >> 0x30) ^ (byte)((ulong)uVar37 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                                 (byte)((ulong)uVar37 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                          (byte)((ulong)uVar37 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                                   (byte)((ulong)uVar37 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar33 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar37 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) ^ (byte)((ulong)uVar37 >> 8),
                                                  (byte)uVar33 ^ (byte)uVar37)))))));
                *(ulong *)(pbVar16 + 0x10) =
                     CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar36 >> 0x38),
                              CONCAT16((byte)((ulong)uVar32 >> 0x30) ^ (byte)((ulong)uVar36 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                 (byte)((ulong)uVar36 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                          (byte)((ulong)uVar36 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar32 >> 0x18) ^
                                                                   (byte)((ulong)uVar36 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar32 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar36 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar32 >> 8) ^ (byte)((ulong)uVar36 >> 8),
                                                  (byte)uVar32 ^ (byte)uVar36)))))));
                pbVar16 = pbVar16 + 0x40;
                pbVar23 = pbVar23 + 0x40;
              } while (uVar24 != 0);
              if (uVar20 == uVar17) goto LAB_0046c7f4;
            }
            uVar24 = ~uVar20;
            if ((uVar11 & 1) != 0) {
              pbVar12[uVar20] = pbVar12[uVar20] ^ pbVar25[uVar20];
              uVar20 = uVar20 | 1;
            }
            if (uVar24 + uVar17 != 0) {
              lVar19 = uVar17 - uVar20;
              pbVar25 = pbVar12 + uVar20 + 1;
              pbVar16 = pbVar29 + uVar20 + lVar13;
              do {
                lVar19 = lVar19 + -2;
                pbVar25[-1] = pbVar25[-1] ^ pbVar16[1];
                *pbVar25 = *pbVar25 ^ pbVar16[2];
                pbVar25 = pbVar25 + 2;
                pbVar16 = pbVar16 + 2;
              } while (lVar19 != 0);
            }
          }
LAB_0046c7f4:
          iVar8 = FUN_0042c130(param_6,(long)param_7,auStack_e0,0,param_8,0);
          if (iVar8 == 0) {
            uVar26 = 0xffffffff;
          }
          else {
            uVar9 = FUN_003f6d80(pbVar12,auStack_e0,lVar13);
            uVar9 = (int)(uVar26 - 1 & uVar9 - 1 & (uVar9 ^ 0xffffffff)) >> 0x1f;
            if ((int)uVar27 < (int)uVar1) {
              uVar21 = 0;
              uVar15 = 0;
              lVar19 = uVar11 - lVar13;
              uVar10 = uVar10 & 0xffffffff;
              pbVar16 = pbVar12 + lVar13;
              do {
                uVar26 = (int)((*pbVar16 ^ 1) - 1) >> 0x1f;
                uVar4 = uVar26 & (uVar21 ^ 0xffffffff);
                uVar21 = uVar26 | uVar21;
                uVar15 = ~uVar4 & uVar15 | uVar4 & (uint)uVar10;
                uVar10 = (ulong)((uint)uVar10 + 1);
                uVar9 = (uVar21 | (int)(*pbVar16 - 1) >> 0x1f) & uVar9;
                lVar19 = lVar19 + -1;
                pbVar16 = pbVar16 + 1;
              } while (lVar19 != 0);
              uVar15 = ~uVar15;
            }
            else {
              uVar21 = 0;
              uVar15 = 0xffffffff;
            }
            uVar26 = uVar1 + uVar15;
            uVar4 = uVar1 + ~uVar27;
            uVar3 = (int)((uVar4 - param_2 ^ param_2 | uVar4 ^ param_2) ^ uVar4) >> 0x1f;
            uVar3 = ~uVar3 & param_2 | uVar3 & uVar4;
            if (1 < (int)uVar4) {
              lVar13 = (long)(int)(uVar27 + 1);
              pbVar16 = pbVar12 + lVar13;
              lVar19 = lVar13 + 1;
              uVar28 = 1;
              do {
                if ((int)(uVar27 + 1) < (int)(uVar1 - uVar28)) {
                  lVar14 = (long)(int)(uVar1 - uVar28);
                  uVar2 = uVar28 & uVar4 - uVar26;
                  lVar18 = lVar14;
                  if (lVar14 <= lVar19) {
                    lVar18 = lVar19;
                  }
                  uVar10 = lVar18 - lVar13;
                  bVar7 = (char)((byte)(uVar2 - 1 >> 0x18) & ((byte)(uVar2 >> 0x18) ^ 0x80)) >> 7;
                  bVar6 = bVar7 ^ 0xff;
                  lVar18 = lVar13;
                  if (0x3f < uVar10) {
                    lVar5 = lVar14;
                    if (lVar14 <= lVar19) {
                      lVar5 = lVar19;
                    }
                    if ((pbVar12 + lVar5 + (int)uVar28 <= pbVar16) ||
                       (pbVar12 + lVar5 <= pbVar16 + (int)uVar28)) {
                      uVar20 = uVar10 & 0xffffffffffffffc0;
                      lVar18 = uVar20 + lVar13;
                      pbVar25 = pbVar16 + 0x20;
                      uVar17 = uVar20;
                      do {
                        pbVar23 = pbVar25 + (int)uVar28;
                        uVar17 = uVar17 - 0x40;
                        uVar31 = *(undefined8 *)(pbVar25 + -0x18);
                        uVar30 = *(undefined8 *)(pbVar25 + -0x20);
                        uVar33 = *(undefined8 *)(pbVar25 + -8);
                        uVar32 = *(undefined8 *)(pbVar25 + -0x10);
                        uVar39 = *(undefined8 *)(pbVar23 + -0x18);
                        uVar38 = *(undefined8 *)(pbVar23 + -0x20);
                        uVar41 = *(undefined8 *)(pbVar23 + -8);
                        uVar40 = *(undefined8 *)(pbVar23 + -0x10);
                        uVar35 = *(undefined8 *)(pbVar25 + 8);
                        uVar34 = *(undefined8 *)pbVar25;
                        uVar37 = *(undefined8 *)(pbVar25 + 0x18);
                        uVar36 = *(undefined8 *)(pbVar25 + 0x10);
                        uVar43 = *(undefined8 *)(pbVar23 + 8);
                        uVar42 = *(undefined8 *)pbVar23;
                        uVar45 = *(undefined8 *)(pbVar23 + 0x18);
                        uVar44 = *(undefined8 *)(pbVar23 + 0x10);
                        *(ulong *)(pbVar25 + -0x18) =
                             CONCAT17(bVar7 & (byte)((ulong)uVar31 >> 0x38) |
                                      bVar6 & (byte)((ulong)uVar39 >> 0x38),
                                      CONCAT16(bVar7 & (byte)((ulong)uVar31 >> 0x30) |
                                               bVar6 & (byte)((ulong)uVar39 >> 0x30),
                                               CONCAT15(bVar7 & (byte)((ulong)uVar31 >> 0x28) |
                                                        bVar6 & (byte)((ulong)uVar39 >> 0x28),
                                                        CONCAT14(bVar7 & (byte)((ulong)uVar31 >>
                                                                               0x20) |
                                                                 bVar6 & (byte)((ulong)uVar39 >>
                                                                               0x20),
                                                                 CONCAT13(bVar7 & (byte)((ulong)
                                                  uVar31 >> 0x18) |
                                                  bVar6 & (byte)((ulong)uVar39 >> 0x18),
                                                  CONCAT12(bVar7 & (byte)((ulong)uVar31 >> 0x10) |
                                                           bVar6 & (byte)((ulong)uVar39 >> 0x10),
                                                           CONCAT11(bVar7 & (byte)((ulong)uVar31 >>
                                                                                  8) |
                                                                    bVar6 & (byte)((ulong)uVar39 >>
                                                                                  8),
                                                                    bVar7 & (byte)uVar31 |
                                                                    bVar6 & (byte)uVar39)))))));
                        *(ulong *)(pbVar25 + -0x20) =
                             CONCAT17(bVar7 & (byte)((ulong)uVar30 >> 0x38) |
                                      bVar6 & (byte)((ulong)uVar38 >> 0x38),
                                      CONCAT16(bVar7 & (byte)((ulong)uVar30 >> 0x30) |
                                               bVar6 & (byte)((ulong)uVar38 >> 0x30),
                                               CONCAT15(bVar7 & (byte)((ulong)uVar30 >> 0x28) |
                                                        bVar6 & (byte)((ulong)uVar38 >> 0x28),
                                                        CONCAT14(bVar7 & (byte)((ulong)uVar30 >>
                                                                               0x20) |
                                                                 bVar6 & (byte)((ulong)uVar38 >>
                                                                               0x20),
                                                                 CONCAT13(bVar7 & (byte)((ulong)
                                                  uVar30 >> 0x18) |
                                                  bVar6 & (byte)((ulong)uVar38 >> 0x18),
                                                  CONCAT12(bVar7 & (byte)((ulong)uVar30 >> 0x10) |
                                                           bVar6 & (byte)((ulong)uVar38 >> 0x10),
                                                           CONCAT11(bVar7 & (byte)((ulong)uVar30 >>
                                                                                  8) |
                                                                    bVar6 & (byte)((ulong)uVar38 >>
                                                                                  8),
                                                                    bVar7 & (byte)uVar30 |
                                                                    bVar6 & (byte)uVar38)))))));
                        *(ulong *)(pbVar25 + -8) =
                             CONCAT17(bVar7 & (byte)((ulong)uVar33 >> 0x38) |
                                      bVar6 & (byte)((ulong)uVar41 >> 0x38),
                                      CONCAT16(bVar7 & (byte)((ulong)uVar33 >> 0x30) |
                                               bVar6 & (byte)((ulong)uVar41 >> 0x30),
                                               CONCAT15(bVar7 & (byte)((ulong)uVar33 >> 0x28) |
                                                        bVar6 & (byte)((ulong)uVar41 >> 0x28),
                                                        CONCAT14(bVar7 & (byte)((ulong)uVar33 >>
                                                                               0x20) |
                                                                 bVar6 & (byte)((ulong)uVar41 >>
                                                                               0x20),
                                                                 CONCAT13(bVar7 & (byte)((ulong)
                                                  uVar33 >> 0x18) |
                                                  bVar6 & (byte)((ulong)uVar41 >> 0x18),
                                                  CONCAT12(bVar7 & (byte)((ulong)uVar33 >> 0x10) |
                                                           bVar6 & (byte)((ulong)uVar41 >> 0x10),
                                                           CONCAT11(bVar7 & (byte)((ulong)uVar33 >>
                                                                                  8) |
                                                                    bVar6 & (byte)((ulong)uVar41 >>
                                                                                  8),
                                                                    bVar7 & (byte)uVar33 |
                                                                    bVar6 & (byte)uVar41)))))));
                        *(ulong *)(pbVar25 + -0x10) =
                             CONCAT17(bVar7 & (byte)((ulong)uVar32 >> 0x38) |
                                      bVar6 & (byte)((ulong)uVar40 >> 0x38),
                                      CONCAT16(bVar7 & (byte)((ulong)uVar32 >> 0x30) |
                                               bVar6 & (byte)((ulong)uVar40 >> 0x30),
                                               CONCAT15(bVar7 & (byte)((ulong)uVar32 >> 0x28) |
                                                        bVar6 & (byte)((ulong)uVar40 >> 0x28),
                                                        CONCAT14(bVar7 & (byte)((ulong)uVar32 >>
                                                                               0x20) |
                                                                 bVar6 & (byte)((ulong)uVar40 >>
                                                                               0x20),
                                                                 CONCAT13(bVar7 & (byte)((ulong)
                                                  uVar32 >> 0x18) |
                                                  bVar6 & (byte)((ulong)uVar40 >> 0x18),
                                                  CONCAT12(bVar7 & (byte)((ulong)uVar32 >> 0x10) |
                                                           bVar6 & (byte)((ulong)uVar40 >> 0x10),
                                                           CONCAT11(bVar7 & (byte)((ulong)uVar32 >>
                                                                                  8) |
                                                                    bVar6 & (byte)((ulong)uVar40 >>
                                                                                  8),
                                                                    bVar7 & (byte)uVar32 |
                                                                    bVar6 & (byte)uVar40)))))));
                        *(ulong *)(pbVar25 + 8) =
                             CONCAT17(bVar7 & (byte)((ulong)uVar35 >> 0x38) |
                                      bVar6 & (byte)((ulong)uVar43 >> 0x38),
                                      CONCAT16(bVar7 & (byte)((ulong)uVar35 >> 0x30) |
                                               bVar6 & (byte)((ulong)uVar43 >> 0x30),
                                               CONCAT15(bVar7 & (byte)((ulong)uVar35 >> 0x28) |
                                                        bVar6 & (byte)((ulong)uVar43 >> 0x28),
                                                        CONCAT14(bVar7 & (byte)((ulong)uVar35 >>
                                                                               0x20) |
                                                                 bVar6 & (byte)((ulong)uVar43 >>
                                                                               0x20),
                                                                 CONCAT13(bVar7 & (byte)((ulong)
                                                  uVar35 >> 0x18) |
                                                  bVar6 & (byte)((ulong)uVar43 >> 0x18),
                                                  CONCAT12(bVar7 & (byte)((ulong)uVar35 >> 0x10) |
                                                           bVar6 & (byte)((ulong)uVar43 >> 0x10),
                                                           CONCAT11(bVar7 & (byte)((ulong)uVar35 >>
                                                                                  8) |
                                                                    bVar6 & (byte)((ulong)uVar43 >>
                                                                                  8),
                                                                    bVar7 & (byte)uVar35 |
                                                                    bVar6 & (byte)uVar43)))))));
                        *(ulong *)pbVar25 =
                             CONCAT17(bVar7 & (byte)((ulong)uVar34 >> 0x38) |
                                      bVar6 & (byte)((ulong)uVar42 >> 0x38),
                                      CONCAT16(bVar7 & (byte)((ulong)uVar34 >> 0x30) |
                                               bVar6 & (byte)((ulong)uVar42 >> 0x30),
                                               CONCAT15(bVar7 & (byte)((ulong)uVar34 >> 0x28) |
                                                        bVar6 & (byte)((ulong)uVar42 >> 0x28),
                                                        CONCAT14(bVar7 & (byte)((ulong)uVar34 >>
                                                                               0x20) |
                                                                 bVar6 & (byte)((ulong)uVar42 >>
                                                                               0x20),
                                                                 CONCAT13(bVar7 & (byte)((ulong)
                                                  uVar34 >> 0x18) |
                                                  bVar6 & (byte)((ulong)uVar42 >> 0x18),
                                                  CONCAT12(bVar7 & (byte)((ulong)uVar34 >> 0x10) |
                                                           bVar6 & (byte)((ulong)uVar42 >> 0x10),
                                                           CONCAT11(bVar7 & (byte)((ulong)uVar34 >>
                                                                                  8) |
                                                                    bVar6 & (byte)((ulong)uVar42 >>
                                                                                  8),
                                                                    bVar7 & (byte)uVar34 |
                                                                    bVar6 & (byte)uVar42)))))));
                        *(ulong *)(pbVar25 + 0x18) =
                             CONCAT17(bVar7 & (byte)((ulong)uVar37 >> 0x38) |
                                      bVar6 & (byte)((ulong)uVar45 >> 0x38),
                                      CONCAT16(bVar7 & (byte)((ulong)uVar37 >> 0x30) |
                                               bVar6 & (byte)((ulong)uVar45 >> 0x30),
                                               CONCAT15(bVar7 & (byte)((ulong)uVar37 >> 0x28) |
                                                        bVar6 & (byte)((ulong)uVar45 >> 0x28),
                                                        CONCAT14(bVar7 & (byte)((ulong)uVar37 >>
                                                                               0x20) |
                                                                 bVar6 & (byte)((ulong)uVar45 >>
                                                                               0x20),
                                                                 CONCAT13(bVar7 & (byte)((ulong)
                                                  uVar37 >> 0x18) |
                                                  bVar6 & (byte)((ulong)uVar45 >> 0x18),
                                                  CONCAT12(bVar7 & (byte)((ulong)uVar37 >> 0x10) |
                                                           bVar6 & (byte)((ulong)uVar45 >> 0x10),
                                                           CONCAT11(bVar7 & (byte)((ulong)uVar37 >>
                                                                                  8) |
                                                                    bVar6 & (byte)((ulong)uVar45 >>
                                                                                  8),
                                                                    bVar7 & (byte)uVar37 |
                                                                    bVar6 & (byte)uVar45)))))));
                        *(ulong *)(pbVar25 + 0x10) =
                             CONCAT17(bVar7 & (byte)((ulong)uVar36 >> 0x38) |
                                      bVar6 & (byte)((ulong)uVar44 >> 0x38),
                                      CONCAT16(bVar7 & (byte)((ulong)uVar36 >> 0x30) |
                                               bVar6 & (byte)((ulong)uVar44 >> 0x30),
                                               CONCAT15(bVar7 & (byte)((ulong)uVar36 >> 0x28) |
                                                        bVar6 & (byte)((ulong)uVar44 >> 0x28),
                                                        CONCAT14(bVar7 & (byte)((ulong)uVar36 >>
                                                                               0x20) |
                                                                 bVar6 & (byte)((ulong)uVar44 >>
                                                                               0x20),
                                                                 CONCAT13(bVar7 & (byte)((ulong)
                                                  uVar36 >> 0x18) |
                                                  bVar6 & (byte)((ulong)uVar44 >> 0x18),
                                                  CONCAT12(bVar7 & (byte)((ulong)uVar36 >> 0x10) |
                                                           bVar6 & (byte)((ulong)uVar44 >> 0x10),
                                                           CONCAT11(bVar7 & (byte)((ulong)uVar36 >>
                                                                                  8) |
                                                                    bVar6 & (byte)((ulong)uVar44 >>
                                                                                  8),
                                                                    bVar7 & (byte)uVar36 |
                                                                    bVar6 & (byte)uVar44)))))));
                        pbVar25 = pbVar25 + 0x40;
                      } while (uVar17 != 0);
                      if (uVar10 == uVar20) goto LAB_0046c924;
                    }
                  }
                  do {
                    pbVar12[lVar18] =
                         bVar7 & pbVar12[lVar18] | bVar6 & pbVar12[lVar18 + (int)uVar28];
                    lVar18 = lVar18 + 1;
                  } while (lVar18 < lVar14);
                }
LAB_0046c924:
                uVar28 = uVar28 * 2;
              } while ((int)uVar28 < (int)uVar4);
            }
            uVar9 = uVar21 & uVar9 &
                    ((int)((param_2 - uVar26 ^ uVar26 | uVar26 ^ param_2) ^ param_2) >> 0x1f ^
                    0xffffffffU);
            if (0 < (int)uVar3) {
              uVar10 = (ulong)uVar3;
              do {
                uVar27 = uVar27 + 1;
                bVar6 = (byte)uVar9 &
                        (char)((byte)(uVar27 - (uVar15 + param_5) >> 0x18) | (byte)(uVar26 >> 0x18))
                        >> 7;
                *param_1 = ~bVar6 & *param_1 | bVar6 & pbVar12[(int)uVar27];
                uVar10 = uVar10 - 1;
                param_1 = param_1 + 1;
              } while (uVar10 != 0);
            }
            FUN_004806c0(4,0x99,0x79,"external/openssl/crypto/rsa/rsa_oaep.c",0x107);
            FUN_00481740(uVar9 & 1);
          }
          goto LAB_0046c690;
        }
      }
      uVar26 = 0xffffffff;
      goto LAB_0046c690;
    }
    FUN_004806c0(4,0x99,0x41,"external/openssl/crypto/rsa/rsa_oaep.c",0xa6);
  }
  uVar9 = 0;
  pbVar29 = (byte *)0x0;
  uVar26 = 0xffffffff;
LAB_0046c690:
  FUN_00453300(local_a0,0x40);
  FUN_00453260(pbVar12,uVar11,"external/openssl/crypto/rsa/rsa_oaep.c",0x10b);
  FUN_00453260(pbVar29,(long)param_5,"external/openssl/crypto/rsa/rsa_oaep.c",0x10c);
  return ~uVar9 | uVar9 & uVar26;
}


