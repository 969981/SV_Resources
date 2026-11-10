/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004701e0; name: FUN_004701e0
 */


uint FUN_004701e0(long param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
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
  
  if ((0 < (int)param_2) && (uVar31 = (ulong)param_4, 0 < (int)param_4)) {
    uVar29 = (ulong)param_5;
    if (((int)param_5 < (int)param_4) || ((int)param_5 < 0xb)) {
      uVar17 = 0x6f;
      uVar19 = 0x4a;
    }
    else {
      lVar14 = FUN_00452c30(uVar29,"external/openssl/crypto/rsa/rsa_ssl.c",0x4e);
      if (lVar14 != 0) {
        pbVar24 = (byte *)(param_3 + uVar31);
        uVar22 = 0;
        pbVar16 = (byte *)(lVar14 + uVar29);
        do {
          pbVar15 = pbVar16;
          uVar30 = (uint)uVar31;
          uVar1 = (int)(uVar30 - 1 & (uVar30 ^ 0xffffffff)) >> 0x1f;
          pbVar24 = pbVar24 + -(ulong)((uVar1 ^ 0xffffffff) & 1);
          uVar4 = (uint)*pbVar24 & (uVar1 ^ 0xffffffff);
          uVar22 = uVar22 + 1;
          pbVar16 = pbVar15 + -1;
          *pbVar16 = (byte)uVar4;
          uVar31 = (ulong)(uVar30 + (uVar1 ^ 0xffffffff));
        } while (uVar22 != param_5);
        uVar22 = (*pbVar15 ^ 2) - 1 & uVar4 - 1;
        uVar1 = (int)uVar22 >> 0x1f;
        uVar4 = ~uVar1;
        if ((int)param_5 < 3) {
          uVar30 = 0;
          uVar23 = 0;
        }
        else {
          uVar23 = 0;
          uVar30 = 0;
          uVar26 = 0;
          uVar31 = 2;
          do {
            pbVar24 = pbVar16 + uVar31;
            uVar27 = (int)(*pbVar24 - 1) >> 0x1f;
            uVar5 = uVar27 & (uVar26 ^ 0xffffffff);
            uVar26 = uVar27 | uVar26;
            uVar27 = (uint)uVar31;
            uVar31 = uVar31 + 1;
            uVar23 = ~uVar5 & uVar23 | uVar5 & uVar27;
            uVar30 = (~uVar26 & 1) + uVar30 & (uVar26 | (int)((*pbVar24 ^ 3) - 1) >> 0x1f);
          } while (uVar29 != uVar31);
        }
        uVar6 = uVar23 - 10 & (uVar23 ^ 0xffffffff);
        uVar26 = (int)uVar6 >> 0x1f;
        uVar1 = uVar1 & (uVar26 ^ 0xffffffff);
        uVar30 = (int)(uVar30 - 8 & (uVar30 ^ 0xffffffff)) >> 0x1f;
        uVar8 = uVar30 | uVar1 ^ 0xffffffff;
        uVar1 = uVar1 & uVar30;
        uVar30 = ~uVar23 + param_5;
        uVar27 = (int)((param_2 - uVar30 ^ uVar30 | uVar30 ^ param_2) ^ param_2) >> 0x1f;
        uVar7 = uVar1 & (uVar27 ^ 0xffffffff);
        uVar9 = param_5 - 0xb;
        uVar5 = (int)((uVar9 - param_2 ^ param_2 | uVar9 ^ param_2) ^ uVar9) >> 0x1f;
        uVar5 = ~uVar5 & param_2 | uVar5 & uVar9;
        if (0xc < (int)param_5) {
          uVar25 = 1;
          do {
            uVar10 = param_5 - uVar25;
            if (0xb < (int)uVar10) {
              uVar3 = uVar25 & uVar9 - uVar30;
              uVar28 = (ulong)uVar10;
              uVar31 = uVar28 - 0xb;
              lVar14 = (long)(int)uVar25;
              bVar12 = (char)((byte)(uVar3 - 1 >> 0x18) & ((byte)(uVar3 >> 0x18) ^ 0x80)) >> 7;
              bVar11 = bVar12 ^ 0xff;
              if ((uVar31 < 0x40) ||
                 ((pbVar15 + 10 < pbVar16 + lVar14 + uVar28 &&
                  (pbVar15 + 10 + lVar14 < pbVar16 + uVar28)))) {
                uVar18 = 0xb;
              }
              else {
                uVar20 = uVar31 & 0xffffffffffffffc0;
                uVar18 = uVar20 | 0xb;
                uVar21 = 0;
                do {
                  lVar13 = uVar21 + lVar14;
                  uVar19 = *(undefined8 *)(pbVar16 + lVar13 + 0x13);
                  uVar17 = *(undefined8 *)(pbVar16 + lVar13 + 0xb);
                  uVar33 = *(undefined8 *)(pbVar16 + lVar13 + 0x23);
                  uVar32 = *(undefined8 *)(pbVar16 + lVar13 + 0x1b);
                  uVar35 = *(undefined8 *)(pbVar16 + lVar13 + 0x33);
                  uVar34 = *(undefined8 *)(pbVar16 + lVar13 + 0x2b);
                  uVar37 = *(undefined8 *)(pbVar16 + lVar13 + 0x43);
                  uVar36 = *(undefined8 *)(pbVar16 + lVar13 + 0x3b);
                  uVar39 = *(undefined8 *)(pbVar16 + uVar21 + 0x13);
                  uVar38 = *(undefined8 *)(pbVar16 + uVar21 + 0xb);
                  uVar41 = *(undefined8 *)(pbVar16 + uVar21 + 0x23);
                  uVar40 = *(undefined8 *)(pbVar16 + uVar21 + 0x1b);
                  uVar43 = *(undefined8 *)(pbVar16 + uVar21 + 0x33);
                  uVar42 = *(undefined8 *)(pbVar16 + uVar21 + 0x2b);
                  uVar45 = *(undefined8 *)(pbVar16 + uVar21 + 0x43);
                  uVar44 = *(undefined8 *)(pbVar16 + uVar21 + 0x3b);
                  *(ulong *)(pbVar16 + uVar21 + 0x23) =
                       CONCAT17(bVar12 & (byte)((ulong)uVar41 >> 0x38) |
                                bVar11 & (byte)((ulong)uVar33 >> 0x38),
                                CONCAT16(bVar12 & (byte)((ulong)uVar41 >> 0x30) |
                                         bVar11 & (byte)((ulong)uVar33 >> 0x30),
                                         CONCAT15(bVar12 & (byte)((ulong)uVar41 >> 0x28) |
                                                  bVar11 & (byte)((ulong)uVar33 >> 0x28),
                                                  CONCAT14(bVar12 & (byte)((ulong)uVar41 >> 0x20) |
                                                           bVar11 & (byte)((ulong)uVar33 >> 0x20),
                                                           CONCAT13(bVar12 & (byte)((ulong)uVar41 >>
                                                                                   0x18) |
                                                                    bVar11 & (byte)((ulong)uVar33 >>
                                                                                   0x18),
                                                                    CONCAT12(bVar12 & (byte)((ulong)
                                                  uVar41 >> 0x10) |
                                                  bVar11 & (byte)((ulong)uVar33 >> 0x10),
                                                  CONCAT11(bVar12 & (byte)((ulong)uVar41 >> 8) |
                                                           bVar11 & (byte)((ulong)uVar33 >> 8),
                                                           bVar12 & (byte)uVar41 |
                                                           bVar11 & (byte)uVar33)))))));
                  *(ulong *)(pbVar16 + uVar21 + 0x1b) =
                       CONCAT17(bVar12 & (byte)((ulong)uVar40 >> 0x38) |
                                bVar11 & (byte)((ulong)uVar32 >> 0x38),
                                CONCAT16(bVar12 & (byte)((ulong)uVar40 >> 0x30) |
                                         bVar11 & (byte)((ulong)uVar32 >> 0x30),
                                         CONCAT15(bVar12 & (byte)((ulong)uVar40 >> 0x28) |
                                                  bVar11 & (byte)((ulong)uVar32 >> 0x28),
                                                  CONCAT14(bVar12 & (byte)((ulong)uVar40 >> 0x20) |
                                                           bVar11 & (byte)((ulong)uVar32 >> 0x20),
                                                           CONCAT13(bVar12 & (byte)((ulong)uVar40 >>
                                                                                   0x18) |
                                                                    bVar11 & (byte)((ulong)uVar32 >>
                                                                                   0x18),
                                                                    CONCAT12(bVar12 & (byte)((ulong)
                                                  uVar40 >> 0x10) |
                                                  bVar11 & (byte)((ulong)uVar32 >> 0x10),
                                                  CONCAT11(bVar12 & (byte)((ulong)uVar40 >> 8) |
                                                           bVar11 & (byte)((ulong)uVar32 >> 8),
                                                           bVar12 & (byte)uVar40 |
                                                           bVar11 & (byte)uVar32)))))));
                  *(ulong *)(pbVar16 + uVar21 + 0x13) =
                       CONCAT17(bVar12 & (byte)((ulong)uVar39 >> 0x38) |
                                bVar11 & (byte)((ulong)uVar19 >> 0x38),
                                CONCAT16(bVar12 & (byte)((ulong)uVar39 >> 0x30) |
                                         bVar11 & (byte)((ulong)uVar19 >> 0x30),
                                         CONCAT15(bVar12 & (byte)((ulong)uVar39 >> 0x28) |
                                                  bVar11 & (byte)((ulong)uVar19 >> 0x28),
                                                  CONCAT14(bVar12 & (byte)((ulong)uVar39 >> 0x20) |
                                                           bVar11 & (byte)((ulong)uVar19 >> 0x20),
                                                           CONCAT13(bVar12 & (byte)((ulong)uVar39 >>
                                                                                   0x18) |
                                                                    bVar11 & (byte)((ulong)uVar19 >>
                                                                                   0x18),
                                                                    CONCAT12(bVar12 & (byte)((ulong)
                                                  uVar39 >> 0x10) |
                                                  bVar11 & (byte)((ulong)uVar19 >> 0x10),
                                                  CONCAT11(bVar12 & (byte)((ulong)uVar39 >> 8) |
                                                           bVar11 & (byte)((ulong)uVar19 >> 8),
                                                           bVar12 & (byte)uVar39 |
                                                           bVar11 & (byte)uVar19)))))));
                  *(ulong *)(pbVar16 + uVar21 + 0xb) =
                       CONCAT17(bVar12 & (byte)((ulong)uVar38 >> 0x38) |
                                bVar11 & (byte)((ulong)uVar17 >> 0x38),
                                CONCAT16(bVar12 & (byte)((ulong)uVar38 >> 0x30) |
                                         bVar11 & (byte)((ulong)uVar17 >> 0x30),
                                         CONCAT15(bVar12 & (byte)((ulong)uVar38 >> 0x28) |
                                                  bVar11 & (byte)((ulong)uVar17 >> 0x28),
                                                  CONCAT14(bVar12 & (byte)((ulong)uVar38 >> 0x20) |
                                                           bVar11 & (byte)((ulong)uVar17 >> 0x20),
                                                           CONCAT13(bVar12 & (byte)((ulong)uVar38 >>
                                                                                   0x18) |
                                                                    bVar11 & (byte)((ulong)uVar17 >>
                                                                                   0x18),
                                                                    CONCAT12(bVar12 & (byte)((ulong)
                                                  uVar38 >> 0x10) |
                                                  bVar11 & (byte)((ulong)uVar17 >> 0x10),
                                                  CONCAT11(bVar12 & (byte)((ulong)uVar38 >> 8) |
                                                           bVar11 & (byte)((ulong)uVar17 >> 8),
                                                           bVar12 & (byte)uVar38 |
                                                           bVar11 & (byte)uVar17)))))));
                  uVar2 = uVar21 + 0x40;
                  *(ulong *)(pbVar16 + uVar21 + 0x33) =
                       CONCAT17(bVar12 & (byte)((ulong)uVar43 >> 0x38) |
                                bVar11 & (byte)((ulong)uVar35 >> 0x38),
                                CONCAT16(bVar12 & (byte)((ulong)uVar43 >> 0x30) |
                                         bVar11 & (byte)((ulong)uVar35 >> 0x30),
                                         CONCAT15(bVar12 & (byte)((ulong)uVar43 >> 0x28) |
                                                  bVar11 & (byte)((ulong)uVar35 >> 0x28),
                                                  CONCAT14(bVar12 & (byte)((ulong)uVar43 >> 0x20) |
                                                           bVar11 & (byte)((ulong)uVar35 >> 0x20),
                                                           CONCAT13(bVar12 & (byte)((ulong)uVar43 >>
                                                                                   0x18) |
                                                                    bVar11 & (byte)((ulong)uVar35 >>
                                                                                   0x18),
                                                                    CONCAT12(bVar12 & (byte)((ulong)
                                                  uVar43 >> 0x10) |
                                                  bVar11 & (byte)((ulong)uVar35 >> 0x10),
                                                  CONCAT11(bVar12 & (byte)((ulong)uVar43 >> 8) |
                                                           bVar11 & (byte)((ulong)uVar35 >> 8),
                                                           bVar12 & (byte)uVar43 |
                                                           bVar11 & (byte)uVar35)))))));
                  *(ulong *)(pbVar16 + uVar21 + 0x2b) =
                       CONCAT17(bVar12 & (byte)((ulong)uVar42 >> 0x38) |
                                bVar11 & (byte)((ulong)uVar34 >> 0x38),
                                CONCAT16(bVar12 & (byte)((ulong)uVar42 >> 0x30) |
                                         bVar11 & (byte)((ulong)uVar34 >> 0x30),
                                         CONCAT15(bVar12 & (byte)((ulong)uVar42 >> 0x28) |
                                                  bVar11 & (byte)((ulong)uVar34 >> 0x28),
                                                  CONCAT14(bVar12 & (byte)((ulong)uVar42 >> 0x20) |
                                                           bVar11 & (byte)((ulong)uVar34 >> 0x20),
                                                           CONCAT13(bVar12 & (byte)((ulong)uVar42 >>
                                                                                   0x18) |
                                                                    bVar11 & (byte)((ulong)uVar34 >>
                                                                                   0x18),
                                                                    CONCAT12(bVar12 & (byte)((ulong)
                                                  uVar42 >> 0x10) |
                                                  bVar11 & (byte)((ulong)uVar34 >> 0x10),
                                                  CONCAT11(bVar12 & (byte)((ulong)uVar42 >> 8) |
                                                           bVar11 & (byte)((ulong)uVar34 >> 8),
                                                           bVar12 & (byte)uVar42 |
                                                           bVar11 & (byte)uVar34)))))));
                  *(ulong *)(pbVar16 + uVar21 + 0x43) =
                       CONCAT17(bVar12 & (byte)((ulong)uVar45 >> 0x38) |
                                bVar11 & (byte)((ulong)uVar37 >> 0x38),
                                CONCAT16(bVar12 & (byte)((ulong)uVar45 >> 0x30) |
                                         bVar11 & (byte)((ulong)uVar37 >> 0x30),
                                         CONCAT15(bVar12 & (byte)((ulong)uVar45 >> 0x28) |
                                                  bVar11 & (byte)((ulong)uVar37 >> 0x28),
                                                  CONCAT14(bVar12 & (byte)((ulong)uVar45 >> 0x20) |
                                                           bVar11 & (byte)((ulong)uVar37 >> 0x20),
                                                           CONCAT13(bVar12 & (byte)((ulong)uVar45 >>
                                                                                   0x18) |
                                                                    bVar11 & (byte)((ulong)uVar37 >>
                                                                                   0x18),
                                                                    CONCAT12(bVar12 & (byte)((ulong)
                                                  uVar45 >> 0x10) |
                                                  bVar11 & (byte)((ulong)uVar37 >> 0x10),
                                                  CONCAT11(bVar12 & (byte)((ulong)uVar45 >> 8) |
                                                           bVar11 & (byte)((ulong)uVar37 >> 8),
                                                           bVar12 & (byte)uVar45 |
                                                           bVar11 & (byte)uVar37)))))));
                  *(ulong *)(pbVar16 + uVar21 + 0x3b) =
                       CONCAT17(bVar12 & (byte)((ulong)uVar44 >> 0x38) |
                                bVar11 & (byte)((ulong)uVar36 >> 0x38),
                                CONCAT16(bVar12 & (byte)((ulong)uVar44 >> 0x30) |
                                         bVar11 & (byte)((ulong)uVar36 >> 0x30),
                                         CONCAT15(bVar12 & (byte)((ulong)uVar44 >> 0x28) |
                                                  bVar11 & (byte)((ulong)uVar36 >> 0x28),
                                                  CONCAT14(bVar12 & (byte)((ulong)uVar44 >> 0x20) |
                                                           bVar11 & (byte)((ulong)uVar36 >> 0x20),
                                                           CONCAT13(bVar12 & (byte)((ulong)uVar44 >>
                                                                                   0x18) |
                                                                    bVar11 & (byte)((ulong)uVar36 >>
                                                                                   0x18),
                                                                    CONCAT12(bVar12 & (byte)((ulong)
                                                  uVar44 >> 0x10) |
                                                  bVar11 & (byte)((ulong)uVar36 >> 0x10),
                                                  CONCAT11(bVar12 & (byte)((ulong)uVar44 >> 8) |
                                                           bVar11 & (byte)((ulong)uVar36 >> 8),
                                                           bVar12 & (byte)uVar44 |
                                                           bVar11 & (byte)uVar36)))))));
                  uVar21 = uVar2;
                } while (uVar20 != uVar2);
                if (uVar31 == uVar20) goto LAB_00470438;
              }
              uVar31 = ~uVar18;
              if ((uVar10 & 1) == 0) {
                pbVar16[uVar18] = bVar12 & pbVar16[uVar18] | bVar11 & pbVar16[uVar18 + lVar14];
                uVar18 = uVar18 + 1;
              }
              if (uVar31 + uVar28 != 0) {
                do {
                  lVar13 = uVar18 + lVar14;
                  pbVar24 = pbVar16 + uVar18;
                  *pbVar24 = bVar12 & *pbVar24 | bVar11 & pbVar16[lVar13];
                  uVar18 = uVar18 + 2;
                  pbVar24[1] = bVar12 & pbVar24[1] | bVar11 & (pbVar16 + lVar13)[1];
                } while (uVar28 != uVar18);
              }
            }
LAB_00470438:
            uVar25 = uVar25 * 2;
          } while ((int)uVar25 < (int)uVar9);
        }
        if (0 < (int)uVar5) {
          uVar31 = 0;
          do {
            bVar11 = (byte)uVar7 &
                     (char)((byte)((uVar23 - param_5) + 1 + (int)uVar31 >> 0x18) |
                           (byte)(uVar30 >> 0x18)) >> 7;
            *(byte *)(param_1 + uVar31) =
                 ~bVar11 & *(byte *)(param_1 + uVar31) | bVar11 & pbVar16[uVar31 + 0xb];
            uVar31 = uVar31 + 1;
          } while (uVar5 != uVar31);
        }
        FUN_00453260(pbVar16,uVar29,"external/openssl/crypto/rsa/rsa_ssl.c",0xab);
        FUN_004806c0(4,0x72,uVar27 & uVar1 & 0x6d |
                            (~uVar8 & 0x73 |
                            ((int)(uVar6 & uVar22) >> 0x1f & 0x71U |
                            uVar4 & 0x6b & (uVar4 | uVar26 ^ 0xffffffff)) & uVar8) &
                            (~uVar27 | uVar1 ^ 0xffffffff),"external/openssl/crypto/rsa/rsa_ssl.c",
                     0xac);
        FUN_00481740(uVar7 & 1);
        return ~uVar7 | uVar7 & uVar30;
      }
      uVar17 = 0x41;
      uVar19 = 0x50;
    }
    FUN_004806c0(4,0x72,uVar17,"external/openssl/crypto/rsa/rsa_ssl.c",uVar19);
  }
  return 0xffffffff;
}


