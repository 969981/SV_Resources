/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046ce30; name: FUN_0046ce30
 */


uint FUN_0046ce30(long param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  if ((0 < (int)param_2) && (uVar24 = (ulong)param_4, 0 < (int)param_4)) {
    uVar23 = (ulong)param_5;
    if (((int)param_5 < (int)param_4) || ((int)param_5 < 0xb)) {
      uVar12 = 0x9f;
      uVar14 = 0xae;
    }
    else {
      lVar9 = FUN_00452c30(uVar23,"external/openssl/crypto/rsa/rsa_pk1.c",0xb2);
      if (lVar9 != 0) {
        pbVar19 = (byte *)(param_3 + uVar24);
        uVar17 = 0;
        pbVar11 = (byte *)(lVar9 + uVar23);
        do {
          pbVar10 = pbVar11;
          uVar20 = (uint)uVar24;
          uVar18 = (int)(uVar20 - 1 & (uVar20 ^ 0xffffffff)) >> 0x1f;
          pbVar19 = pbVar19 + -(ulong)((uVar18 ^ 0xffffffff) & 1);
          uVar3 = (uint)*pbVar19 & (uVar18 ^ 0xffffffff);
          uVar17 = uVar17 + 1;
          pbVar11 = pbVar10 + -1;
          *pbVar11 = (byte)uVar3;
          uVar24 = (ulong)(uVar20 + (uVar18 ^ 0xffffffff));
        } while (uVar17 != param_5);
        if ((int)param_5 < 3) {
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          uVar18 = 0;
          uVar24 = 2;
          do {
            uVar20 = (int)(pbVar11[uVar24] - 1) >> 0x1f;
            uVar4 = uVar20 & (uVar18 ^ 0xffffffff);
            uVar18 = uVar20 | uVar18;
            uVar20 = (uint)uVar24;
            uVar24 = uVar24 + 1;
            uVar17 = ~uVar4 & uVar17 | uVar4 & uVar20;
          } while (uVar23 != uVar24);
        }
        uVar18 = ~uVar17 + param_5;
        uVar4 = param_5 - 0xb;
        uVar20 = (int)((*pbVar10 ^ 2) - 1 & uVar3 - 1) >> 0x1f &
                 ((int)(uVar17 - 10 & (uVar17 ^ 0xffffffff)) >> 0x1f ^ 0xffffffffU) &
                 ((int)((param_2 - uVar18 ^ uVar18 | uVar18 ^ param_2) ^ param_2) >> 0x1f ^
                 0xffffffffU);
        uVar3 = (int)((uVar4 - param_2 ^ param_2 | uVar4 ^ param_2) ^ uVar4) >> 0x1f;
        uVar3 = ~uVar3 & param_2 | uVar3 & uVar4;
        if (0xc < (int)param_5) {
          uVar21 = 1;
          do {
            uVar5 = param_5 - uVar21;
            if (0xb < (int)uVar5) {
              uVar2 = uVar21 & uVar4 - uVar18;
              uVar22 = (ulong)uVar5;
              uVar24 = uVar22 - 0xb;
              lVar9 = (long)(int)uVar21;
              bVar7 = (char)((byte)(uVar2 - 1 >> 0x18) & ((byte)(uVar2 >> 0x18) ^ 0x80)) >> 7;
              bVar6 = bVar7 ^ 0xff;
              if ((uVar24 < 0x40) ||
                 ((pbVar10 + 10 < pbVar11 + lVar9 + uVar22 &&
                  (pbVar10 + 10 + lVar9 < pbVar11 + uVar22)))) {
                uVar13 = 0xb;
              }
              else {
                uVar15 = uVar24 & 0xffffffffffffffc0;
                uVar13 = uVar15 | 0xb;
                uVar16 = 0;
                do {
                  lVar8 = uVar16 + lVar9;
                  uVar14 = *(undefined8 *)(pbVar11 + lVar8 + 0x13);
                  uVar12 = *(undefined8 *)(pbVar11 + lVar8 + 0xb);
                  uVar26 = *(undefined8 *)(pbVar11 + lVar8 + 0x23);
                  uVar25 = *(undefined8 *)(pbVar11 + lVar8 + 0x1b);
                  uVar28 = *(undefined8 *)(pbVar11 + lVar8 + 0x33);
                  uVar27 = *(undefined8 *)(pbVar11 + lVar8 + 0x2b);
                  uVar30 = *(undefined8 *)(pbVar11 + lVar8 + 0x43);
                  uVar29 = *(undefined8 *)(pbVar11 + lVar8 + 0x3b);
                  uVar32 = *(undefined8 *)(pbVar11 + uVar16 + 0x13);
                  uVar31 = *(undefined8 *)(pbVar11 + uVar16 + 0xb);
                  uVar34 = *(undefined8 *)(pbVar11 + uVar16 + 0x23);
                  uVar33 = *(undefined8 *)(pbVar11 + uVar16 + 0x1b);
                  uVar36 = *(undefined8 *)(pbVar11 + uVar16 + 0x33);
                  uVar35 = *(undefined8 *)(pbVar11 + uVar16 + 0x2b);
                  uVar38 = *(undefined8 *)(pbVar11 + uVar16 + 0x43);
                  uVar37 = *(undefined8 *)(pbVar11 + uVar16 + 0x3b);
                  *(ulong *)(pbVar11 + uVar16 + 0x23) =
                       CONCAT17(bVar7 & (byte)((ulong)uVar34 >> 0x38) |
                                bVar6 & (byte)((ulong)uVar26 >> 0x38),
                                CONCAT16(bVar7 & (byte)((ulong)uVar34 >> 0x30) |
                                         bVar6 & (byte)((ulong)uVar26 >> 0x30),
                                         CONCAT15(bVar7 & (byte)((ulong)uVar34 >> 0x28) |
                                                  bVar6 & (byte)((ulong)uVar26 >> 0x28),
                                                  CONCAT14(bVar7 & (byte)((ulong)uVar34 >> 0x20) |
                                                           bVar6 & (byte)((ulong)uVar26 >> 0x20),
                                                           CONCAT13(bVar7 & (byte)((ulong)uVar34 >>
                                                                                  0x18) |
                                                                    bVar6 & (byte)((ulong)uVar26 >>
                                                                                  0x18),
                                                                    CONCAT12(bVar7 & (byte)((ulong)
                                                  uVar34 >> 0x10) |
                                                  bVar6 & (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar7 & (byte)((ulong)uVar34 >> 8) |
                                                           bVar6 & (byte)((ulong)uVar26 >> 8),
                                                           bVar7 & (byte)uVar34 |
                                                           bVar6 & (byte)uVar26)))))));
                  *(ulong *)(pbVar11 + uVar16 + 0x1b) =
                       CONCAT17(bVar7 & (byte)((ulong)uVar33 >> 0x38) |
                                bVar6 & (byte)((ulong)uVar25 >> 0x38),
                                CONCAT16(bVar7 & (byte)((ulong)uVar33 >> 0x30) |
                                         bVar6 & (byte)((ulong)uVar25 >> 0x30),
                                         CONCAT15(bVar7 & (byte)((ulong)uVar33 >> 0x28) |
                                                  bVar6 & (byte)((ulong)uVar25 >> 0x28),
                                                  CONCAT14(bVar7 & (byte)((ulong)uVar33 >> 0x20) |
                                                           bVar6 & (byte)((ulong)uVar25 >> 0x20),
                                                           CONCAT13(bVar7 & (byte)((ulong)uVar33 >>
                                                                                  0x18) |
                                                                    bVar6 & (byte)((ulong)uVar25 >>
                                                                                  0x18),
                                                                    CONCAT12(bVar7 & (byte)((ulong)
                                                  uVar33 >> 0x10) |
                                                  bVar6 & (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar7 & (byte)((ulong)uVar33 >> 8) |
                                                           bVar6 & (byte)((ulong)uVar25 >> 8),
                                                           bVar7 & (byte)uVar33 |
                                                           bVar6 & (byte)uVar25)))))));
                  *(ulong *)(pbVar11 + uVar16 + 0x13) =
                       CONCAT17(bVar7 & (byte)((ulong)uVar32 >> 0x38) |
                                bVar6 & (byte)((ulong)uVar14 >> 0x38),
                                CONCAT16(bVar7 & (byte)((ulong)uVar32 >> 0x30) |
                                         bVar6 & (byte)((ulong)uVar14 >> 0x30),
                                         CONCAT15(bVar7 & (byte)((ulong)uVar32 >> 0x28) |
                                                  bVar6 & (byte)((ulong)uVar14 >> 0x28),
                                                  CONCAT14(bVar7 & (byte)((ulong)uVar32 >> 0x20) |
                                                           bVar6 & (byte)((ulong)uVar14 >> 0x20),
                                                           CONCAT13(bVar7 & (byte)((ulong)uVar32 >>
                                                                                  0x18) |
                                                                    bVar6 & (byte)((ulong)uVar14 >>
                                                                                  0x18),
                                                                    CONCAT12(bVar7 & (byte)((ulong)
                                                  uVar32 >> 0x10) |
                                                  bVar6 & (byte)((ulong)uVar14 >> 0x10),
                                                  CONCAT11(bVar7 & (byte)((ulong)uVar32 >> 8) |
                                                           bVar6 & (byte)((ulong)uVar14 >> 8),
                                                           bVar7 & (byte)uVar32 |
                                                           bVar6 & (byte)uVar14)))))));
                  *(ulong *)(pbVar11 + uVar16 + 0xb) =
                       CONCAT17(bVar7 & (byte)((ulong)uVar31 >> 0x38) |
                                bVar6 & (byte)((ulong)uVar12 >> 0x38),
                                CONCAT16(bVar7 & (byte)((ulong)uVar31 >> 0x30) |
                                         bVar6 & (byte)((ulong)uVar12 >> 0x30),
                                         CONCAT15(bVar7 & (byte)((ulong)uVar31 >> 0x28) |
                                                  bVar6 & (byte)((ulong)uVar12 >> 0x28),
                                                  CONCAT14(bVar7 & (byte)((ulong)uVar31 >> 0x20) |
                                                           bVar6 & (byte)((ulong)uVar12 >> 0x20),
                                                           CONCAT13(bVar7 & (byte)((ulong)uVar31 >>
                                                                                  0x18) |
                                                                    bVar6 & (byte)((ulong)uVar12 >>
                                                                                  0x18),
                                                                    CONCAT12(bVar7 & (byte)((ulong)
                                                  uVar31 >> 0x10) |
                                                  bVar6 & (byte)((ulong)uVar12 >> 0x10),
                                                  CONCAT11(bVar7 & (byte)((ulong)uVar31 >> 8) |
                                                           bVar6 & (byte)((ulong)uVar12 >> 8),
                                                           bVar7 & (byte)uVar31 |
                                                           bVar6 & (byte)uVar12)))))));
                  uVar1 = uVar16 + 0x40;
                  *(ulong *)(pbVar11 + uVar16 + 0x33) =
                       CONCAT17(bVar7 & (byte)((ulong)uVar36 >> 0x38) |
                                bVar6 & (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar7 & (byte)((ulong)uVar36 >> 0x30) |
                                         bVar6 & (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar7 & (byte)((ulong)uVar36 >> 0x28) |
                                                  bVar6 & (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar7 & (byte)((ulong)uVar36 >> 0x20) |
                                                           bVar6 & (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar7 & (byte)((ulong)uVar36 >>
                                                                                  0x18) |
                                                                    bVar6 & (byte)((ulong)uVar28 >>
                                                                                  0x18),
                                                                    CONCAT12(bVar7 & (byte)((ulong)
                                                  uVar36 >> 0x10) |
                                                  bVar6 & (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar7 & (byte)((ulong)uVar36 >> 8) |
                                                           bVar6 & (byte)((ulong)uVar28 >> 8),
                                                           bVar7 & (byte)uVar36 |
                                                           bVar6 & (byte)uVar28)))))));
                  *(ulong *)(pbVar11 + uVar16 + 0x2b) =
                       CONCAT17(bVar7 & (byte)((ulong)uVar35 >> 0x38) |
                                bVar6 & (byte)((ulong)uVar27 >> 0x38),
                                CONCAT16(bVar7 & (byte)((ulong)uVar35 >> 0x30) |
                                         bVar6 & (byte)((ulong)uVar27 >> 0x30),
                                         CONCAT15(bVar7 & (byte)((ulong)uVar35 >> 0x28) |
                                                  bVar6 & (byte)((ulong)uVar27 >> 0x28),
                                                  CONCAT14(bVar7 & (byte)((ulong)uVar35 >> 0x20) |
                                                           bVar6 & (byte)((ulong)uVar27 >> 0x20),
                                                           CONCAT13(bVar7 & (byte)((ulong)uVar35 >>
                                                                                  0x18) |
                                                                    bVar6 & (byte)((ulong)uVar27 >>
                                                                                  0x18),
                                                                    CONCAT12(bVar7 & (byte)((ulong)
                                                  uVar35 >> 0x10) |
                                                  bVar6 & (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar7 & (byte)((ulong)uVar35 >> 8) |
                                                           bVar6 & (byte)((ulong)uVar27 >> 8),
                                                           bVar7 & (byte)uVar35 |
                                                           bVar6 & (byte)uVar27)))))));
                  *(ulong *)(pbVar11 + uVar16 + 0x43) =
                       CONCAT17(bVar7 & (byte)((ulong)uVar38 >> 0x38) |
                                bVar6 & (byte)((ulong)uVar30 >> 0x38),
                                CONCAT16(bVar7 & (byte)((ulong)uVar38 >> 0x30) |
                                         bVar6 & (byte)((ulong)uVar30 >> 0x30),
                                         CONCAT15(bVar7 & (byte)((ulong)uVar38 >> 0x28) |
                                                  bVar6 & (byte)((ulong)uVar30 >> 0x28),
                                                  CONCAT14(bVar7 & (byte)((ulong)uVar38 >> 0x20) |
                                                           bVar6 & (byte)((ulong)uVar30 >> 0x20),
                                                           CONCAT13(bVar7 & (byte)((ulong)uVar38 >>
                                                                                  0x18) |
                                                                    bVar6 & (byte)((ulong)uVar30 >>
                                                                                  0x18),
                                                                    CONCAT12(bVar7 & (byte)((ulong)
                                                  uVar38 >> 0x10) |
                                                  bVar6 & (byte)((ulong)uVar30 >> 0x10),
                                                  CONCAT11(bVar7 & (byte)((ulong)uVar38 >> 8) |
                                                           bVar6 & (byte)((ulong)uVar30 >> 8),
                                                           bVar7 & (byte)uVar38 |
                                                           bVar6 & (byte)uVar30)))))));
                  *(ulong *)(pbVar11 + uVar16 + 0x3b) =
                       CONCAT17(bVar7 & (byte)((ulong)uVar37 >> 0x38) |
                                bVar6 & (byte)((ulong)uVar29 >> 0x38),
                                CONCAT16(bVar7 & (byte)((ulong)uVar37 >> 0x30) |
                                         bVar6 & (byte)((ulong)uVar29 >> 0x30),
                                         CONCAT15(bVar7 & (byte)((ulong)uVar37 >> 0x28) |
                                                  bVar6 & (byte)((ulong)uVar29 >> 0x28),
                                                  CONCAT14(bVar7 & (byte)((ulong)uVar37 >> 0x20) |
                                                           bVar6 & (byte)((ulong)uVar29 >> 0x20),
                                                           CONCAT13(bVar7 & (byte)((ulong)uVar37 >>
                                                                                  0x18) |
                                                                    bVar6 & (byte)((ulong)uVar29 >>
                                                                                  0x18),
                                                                    CONCAT12(bVar7 & (byte)((ulong)
                                                  uVar37 >> 0x10) |
                                                  bVar6 & (byte)((ulong)uVar29 >> 0x10),
                                                  CONCAT11(bVar7 & (byte)((ulong)uVar37 >> 8) |
                                                           bVar6 & (byte)((ulong)uVar29 >> 8),
                                                           bVar7 & (byte)uVar37 |
                                                           bVar6 & (byte)uVar29)))))));
                  uVar16 = uVar1;
                } while (uVar15 != uVar1);
                if (uVar24 == uVar15) goto LAB_0046cff0;
              }
              uVar24 = ~uVar13;
              if ((uVar5 & 1) == 0) {
                pbVar11[uVar13] = bVar7 & pbVar11[uVar13] | bVar6 & pbVar11[uVar13 + lVar9];
                uVar13 = uVar13 + 1;
              }
              if (uVar24 + uVar22 != 0) {
                do {
                  lVar8 = uVar13 + lVar9;
                  pbVar19 = pbVar11 + uVar13;
                  *pbVar19 = bVar7 & *pbVar19 | bVar6 & pbVar11[lVar8];
                  uVar13 = uVar13 + 2;
                  pbVar19[1] = bVar7 & pbVar19[1] | bVar6 & (pbVar11 + lVar8)[1];
                } while (uVar22 != uVar13);
              }
            }
LAB_0046cff0:
            uVar21 = uVar21 * 2;
          } while ((int)uVar21 < (int)uVar4);
        }
        if (0 < (int)uVar3) {
          uVar24 = 0;
          do {
            bVar6 = (byte)uVar20 &
                    (char)((byte)((uVar17 - param_5) + 1 + (int)uVar24 >> 0x18) |
                          (byte)(uVar18 >> 0x18)) >> 7;
            *(byte *)(param_1 + uVar24) =
                 ~bVar6 & *(byte *)(param_1 + uVar24) | bVar6 & pbVar11[uVar24 + 0xb];
            uVar24 = uVar24 + 1;
          } while (uVar3 != uVar24);
        }
        FUN_00453260(pbVar11,uVar23,"external/openssl/crypto/rsa/rsa_pk1.c",0xfa);
        FUN_004806c0(4,0x71,0x9f,"external/openssl/crypto/rsa/rsa_pk1.c",0xfb);
        FUN_00481740(uVar20 & 1);
        return ~uVar20 | uVar20 & uVar18;
      }
      uVar12 = 0x41;
      uVar14 = 0xb4;
    }
    FUN_004806c0(4,0x71,uVar12,"external/openssl/crypto/rsa/rsa_pk1.c",uVar14);
  }
  return 0xffffffff;
}


