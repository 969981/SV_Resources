/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043e920; name: FUN_0043e920
 */


undefined8
FUN_0043e920(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 param_4,ulong param_5,
            ulong param_6,ulong param_7,ulong param_8,long param_9,undefined8 param_10)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  ushort uVar10;
  uint3 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  byte *pbVar19;
  long lVar20;
  uint *puVar21;
  undefined4 *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  uint *puVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  byte *pbVar35;
  ulong uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  
  uVar34 = param_5 - 1;
  if ((param_5 & uVar34) != 0) {
    return 0;
  }
  if (param_5 < 2) {
    return 0;
  }
  if (param_6 == 0) {
    return 0;
  }
  if (param_7 == 0) {
    return 0;
  }
  uVar23 = 0;
  if (param_6 != 0) {
    uVar23 = 0x3fffffff / param_6;
  }
  if (uVar23 < param_7) {
    uVar14 = 0xac;
    uVar15 = 0xae;
LAB_0043ea78:
    FUN_004806c0(6,0xb5,uVar14,"external/openssl/crypto/evp/pbe_scrypt.c",uVar15);
    return 0;
  }
  if ((param_6 * 0x10 < 0x40) && (param_5 >> (param_6 * 0x10 & 0x3f) != 0)) {
    uVar14 = 0xac;
    uVar15 = 0xb9;
    goto LAB_0043ea78;
  }
  lVar27 = param_7 * 0x80;
  uVar23 = lVar27 * param_6;
  if (uVar23 >> 0x1f != 0) {
    uVar14 = 0xac;
    uVar15 = 0xcb;
    goto LAB_0043ea78;
  }
  uVar16 = 0;
  if (param_6 != 0) {
    uVar16 = 0x1ffffffffffffff / param_6;
  }
  if (uVar16 < param_5 + 2) {
    uVar14 = 0xac;
    uVar15 = 0xd5;
    goto LAB_0043ea78;
  }
  lVar32 = param_6 * 0x20;
  uVar16 = (param_5 + 2) * lVar32 * 4;
  if (CARRY8(uVar16,uVar23)) {
    uVar14 = 0xac;
    uVar15 = 0xdc;
    goto LAB_0043ea78;
  }
  uVar24 = 0x2000000;
  if (param_8 != 0) {
    uVar24 = param_8;
  }
  uVar16 = uVar23 + uVar16;
  if (uVar24 < uVar16) {
    uVar14 = 0xac;
    uVar15 = 0xe8;
    goto LAB_0043ea78;
  }
  if (param_9 == 0) {
    return 1;
  }
  lVar13 = FUN_00452c30(uVar16,"external/openssl/crypto/evp/pbe_scrypt.c",0xf0);
  if (lVar13 == 0) {
    uVar14 = 0x41;
    uVar15 = 0xf2;
    goto LAB_0043ea78;
  }
  uVar14 = FUN_0043c2a0();
  iVar12 = FUN_0043d480(param_1,param_2 & 0xffffffff,param_3,param_4,1,uVar14,uVar23,lVar13);
  if (iVar12 != 0) {
    if (param_7 != 0) {
      lVar4 = lVar13 + uVar23;
      lVar5 = lVar4 + param_6 * 0x80;
      puVar6 = (uint *)(lVar5 + param_6 * 0x80);
      if (lVar32 == 0) {
        uVar24 = 0;
        do {
          if (1 < param_5) {
            uVar33 = uVar34;
            do {
              FUN_0043eef0(puVar6,puVar6 + param_6 * -0x20,param_6);
              uVar33 = uVar33 - 1;
            } while (uVar33 != 0);
          }
          FUN_0043eef0(lVar4,puVar6 + (param_5 * 0x20 + -0x20) * param_6,param_6);
          if (param_5 != 0) {
            uVar33 = param_5;
            do {
              FUN_0043eef0(lVar4,lVar5,param_6);
              uVar33 = uVar33 - 1;
            } while (uVar33 != 0);
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != param_7);
      }
      else {
        lVar31 = (lVar27 + 0x80) * param_6;
        lVar30 = (lVar27 + 0x100) * param_6;
        lVar7 = uVar23 + lVar13;
        uVar33 = lVar13 + lVar31;
        uVar24 = 0;
        do {
          pbVar35 = (byte *)(lVar13 + param_6 * 0x80 * uVar24);
          lVar20 = lVar32;
          pbVar19 = pbVar35;
          puVar21 = puVar6;
          lVar28 = lVar13;
          do {
            lVar28 = lVar28 + 8;
            bVar8 = *pbVar19;
            *puVar21 = (uint)bVar8;
            uVar10 = CONCAT11(pbVar19[1],bVar8);
            *puVar21 = (uint)uVar10;
            uVar11 = CONCAT12(pbVar19[2],uVar10);
            *puVar21 = (uint)uVar11;
            *puVar21 = CONCAT13(pbVar19[3],uVar11);
            bVar8 = pbVar19[4];
            puVar21[1] = (uint)bVar8;
            uVar10 = CONCAT11(pbVar19[5],bVar8);
            puVar21[1] = (uint)uVar10;
            uVar11 = CONCAT12(pbVar19[6],uVar10);
            puVar21[1] = (uint)uVar11;
            pbVar1 = pbVar19 + 7;
            pbVar19 = pbVar19 + 8;
            lVar20 = lVar20 + -2;
            puVar21[1] = CONCAT13(*pbVar1,uVar11);
            puVar21 = puVar21 + 2;
          } while (lVar20 != 0);
          uVar36 = uVar34;
          if (1 < param_5) {
            do {
              FUN_0043eef0(lVar28 + lVar30,lVar28 + lVar31,param_6);
              lVar28 = lVar28 + param_6 * 0x80;
              uVar36 = uVar36 - 1;
            } while (uVar36 != 0);
          }
          FUN_0043eef0(lVar4,puVar6 + (param_5 * 0x20 + -0x20) * param_6,param_6);
          if (param_5 != 0) {
            uVar36 = 0;
            do {
              uVar17 = (ulong)*(uint *)(lVar4 + (lVar32 + -0x10) * 4);
              uVar9 = 0;
              if (param_5 != 0) {
                uVar9 = uVar17 / param_5;
              }
              lVar20 = param_5 * 0x80 * uVar9;
              puVar18 = puVar6 + (uVar17 - uVar9 * param_5) * lVar32;
              puVar21 = (uint *)(lVar7 + 8);
              puVar26 = (uint *)(uVar33 + 8);
              lVar28 = lVar32;
              if (uVar33 < lVar13 + ((lVar27 + 0x180 + uVar17 * 0x80) - lVar20) * param_6 &&
                  lVar13 + ((lVar27 + 0x100 + uVar17 * 0x80) - lVar20) * param_6 <
                  (ulong)(lVar13 + lVar30)) {
                do {
                  lVar28 = lVar28 + -4;
                  puVar26[-2] = *puVar18 ^ puVar21[-2];
                  puVar26[-1] = puVar18[1] ^ puVar21[-1];
                  *puVar26 = puVar18[2] ^ *puVar21;
                  puVar2 = puVar18 + 3;
                  puVar3 = puVar21 + 1;
                  puVar21 = puVar21 + 4;
                  puVar18 = puVar18 + 4;
                  puVar26[1] = *puVar2 ^ *puVar3;
                  puVar26 = puVar26 + 4;
                } while (lVar28 != 0);
              }
              else {
                lVar28 = 0;
                puVar25 = (undefined8 *)(uVar33 + 0x20);
                puVar29 = (undefined8 *)(lVar7 + 0x20);
                lVar20 = lVar32;
                do {
                  puVar21 = puVar18 + lVar28;
                  lVar28 = lVar28 + 0x10;
                  lVar20 = lVar20 + -0x10;
                  uVar15 = puVar29[-3];
                  uVar14 = puVar29[-4];
                  uVar38 = puVar29[-1];
                  uVar37 = puVar29[-2];
                  uVar44 = *(undefined8 *)(puVar21 + 2);
                  uVar43 = *(undefined8 *)puVar21;
                  uVar46 = *(undefined8 *)(puVar21 + 6);
                  uVar45 = *(undefined8 *)(puVar21 + 4);
                  uVar48 = *(undefined8 *)(puVar21 + 10);
                  uVar47 = *(undefined8 *)(puVar21 + 8);
                  uVar50 = *(undefined8 *)(puVar21 + 0xe);
                  uVar49 = *(undefined8 *)(puVar21 + 0xc);
                  uVar40 = puVar29[1];
                  uVar39 = *puVar29;
                  uVar42 = puVar29[3];
                  uVar41 = puVar29[2];
                  puVar25[-3] = CONCAT17((byte)((ulong)uVar44 >> 0x38) ^
                                         (byte)((ulong)uVar15 >> 0x38),
                                         CONCAT16((byte)((ulong)uVar44 >> 0x30) ^
                                                  (byte)((ulong)uVar15 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar44 >> 0x28) ^
                                                           (byte)((ulong)uVar15 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar44 >> 0x20) ^
                                                                    (byte)((ulong)uVar15 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar44 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar15 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar44 >> 0x10) ^ (byte)((ulong)uVar15 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar44 >> 8) ^
                                                           (byte)((ulong)uVar15 >> 8),
                                                           (byte)uVar44 ^ (byte)uVar15)))))));
                  puVar25[-4] = CONCAT17((byte)((ulong)uVar43 >> 0x38) ^
                                         (byte)((ulong)uVar14 >> 0x38),
                                         CONCAT16((byte)((ulong)uVar43 >> 0x30) ^
                                                  (byte)((ulong)uVar14 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar43 >> 0x28) ^
                                                           (byte)((ulong)uVar14 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar43 >> 0x20) ^
                                                                    (byte)((ulong)uVar14 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar43 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar14 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar43 >> 0x10) ^ (byte)((ulong)uVar14 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar43 >> 8) ^
                                                           (byte)((ulong)uVar14 >> 8),
                                                           (byte)uVar43 ^ (byte)uVar14)))))));
                  puVar25[3] = CONCAT17((byte)((ulong)uVar50 >> 0x38) ^
                                        (byte)((ulong)uVar42 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar50 >> 0x30) ^
                                                 (byte)((ulong)uVar42 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar50 >> 0x28) ^
                                                          (byte)((ulong)uVar42 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar50 >> 0x20) ^
                                                                   (byte)((ulong)uVar42 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar50 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar42 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar50 >> 0x10) ^ (byte)((ulong)uVar42 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar50 >> 8) ^
                                                           (byte)((ulong)uVar42 >> 8),
                                                           (byte)uVar50 ^ (byte)uVar42)))))));
                  puVar25[2] = CONCAT17((byte)((ulong)uVar49 >> 0x38) ^
                                        (byte)((ulong)uVar41 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar49 >> 0x30) ^
                                                 (byte)((ulong)uVar41 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar49 >> 0x28) ^
                                                          (byte)((ulong)uVar41 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar49 >> 0x20) ^
                                                                   (byte)((ulong)uVar41 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar49 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar41 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar49 >> 0x10) ^ (byte)((ulong)uVar41 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar49 >> 8) ^
                                                           (byte)((ulong)uVar41 >> 8),
                                                           (byte)uVar49 ^ (byte)uVar41)))))));
                  puVar25[-1] = CONCAT17((byte)((ulong)uVar46 >> 0x38) ^
                                         (byte)((ulong)uVar38 >> 0x38),
                                         CONCAT16((byte)((ulong)uVar46 >> 0x30) ^
                                                  (byte)((ulong)uVar38 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar46 >> 0x28) ^
                                                           (byte)((ulong)uVar38 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar46 >> 0x20) ^
                                                                    (byte)((ulong)uVar38 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar46 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar38 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar46 >> 0x10) ^ (byte)((ulong)uVar38 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar46 >> 8) ^
                                                           (byte)((ulong)uVar38 >> 8),
                                                           (byte)uVar46 ^ (byte)uVar38)))))));
                  puVar25[-2] = CONCAT17((byte)((ulong)uVar45 >> 0x38) ^
                                         (byte)((ulong)uVar37 >> 0x38),
                                         CONCAT16((byte)((ulong)uVar45 >> 0x30) ^
                                                  (byte)((ulong)uVar37 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar45 >> 0x28) ^
                                                           (byte)((ulong)uVar37 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar45 >> 0x20) ^
                                                                    (byte)((ulong)uVar37 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar45 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar37 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar45 >> 0x10) ^ (byte)((ulong)uVar37 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar45 >> 8) ^
                                                           (byte)((ulong)uVar37 >> 8),
                                                           (byte)uVar45 ^ (byte)uVar37)))))));
                  puVar25[1] = CONCAT17((byte)((ulong)uVar48 >> 0x38) ^
                                        (byte)((ulong)uVar40 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar48 >> 0x30) ^
                                                 (byte)((ulong)uVar40 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar48 >> 0x28) ^
                                                          (byte)((ulong)uVar40 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar48 >> 0x20) ^
                                                                   (byte)((ulong)uVar40 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar48 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar40 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar48 >> 0x10) ^ (byte)((ulong)uVar40 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar48 >> 8) ^
                                                           (byte)((ulong)uVar40 >> 8),
                                                           (byte)uVar48 ^ (byte)uVar40)))))));
                  *puVar25 = CONCAT17((byte)((ulong)uVar47 >> 0x38) ^ (byte)((ulong)uVar39 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar47 >> 0x30) ^
                                               (byte)((ulong)uVar39 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar47 >> 0x28) ^
                                                        (byte)((ulong)uVar39 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar47 >> 0x20) ^
                                                                 (byte)((ulong)uVar39 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar47 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar39 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar47 >> 0x10) ^ (byte)((ulong)uVar39 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar47 >> 8) ^
                                                           (byte)((ulong)uVar39 >> 8),
                                                           (byte)uVar47 ^ (byte)uVar39)))))));
                  puVar25 = puVar25 + 8;
                  puVar29 = puVar29 + 8;
                } while (lVar20 != 0);
              }
              FUN_0043eef0(lVar4,lVar5,param_6);
              uVar36 = uVar36 + 1;
            } while (uVar36 != param_5);
          }
          lVar28 = lVar32;
          puVar22 = (undefined4 *)(lVar7 + 4);
          do {
            *(undefined4 *)pbVar35 = puVar22[-1];
            lVar28 = lVar28 + -2;
            *(undefined4 *)(pbVar35 + 4) = *puVar22;
            pbVar35 = pbVar35 + 8;
            puVar22 = puVar22 + 2;
          } while (lVar28 != 0);
          uVar24 = uVar24 + 1;
        } while (uVar24 != param_7);
      }
    }
    uVar14 = FUN_0043c2a0();
    uVar15 = 1;
    iVar12 = FUN_0043d480(param_1,param_2,lVar13,uVar23,1,uVar14,param_10,param_9);
    if (iVar12 != 0) goto LAB_0043ee3c;
  }
  FUN_004806c0(6,0xb5,0xb5,"external/openssl/crypto/evp/pbe_scrypt.c",0x105);
  uVar15 = 0;
LAB_0043ee3c:
  FUN_00453260(lVar13,uVar16,"external/openssl/crypto/evp/pbe_scrypt.c",0x107);
  return uVar15;
}


