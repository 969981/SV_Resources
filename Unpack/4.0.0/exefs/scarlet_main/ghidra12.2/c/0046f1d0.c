/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0046f1d0; name: FUN_0046f1d0
 */


undefined8
FUN_0046f1d0(long param_1,undefined8 param_2,long param_3,long param_4,byte *param_5,uint param_6)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong __n;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
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
  undefined1 auStack_a0 [64];
  
  lVar7 = FUN_0042bbc0();
  if (lVar7 != 0) {
    lVar11 = param_3;
    if (param_4 != 0) {
      lVar11 = param_4;
    }
    uVar4 = FUN_0043b720(param_3);
    if (-1 < (int)uVar4) {
      if (param_6 == 0xffffffff) {
        param_6 = uVar4;
LAB_0046f258:
        iVar5 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x18));
        uVar18 = iVar5 - 1U & 7;
        iVar5 = FUN_00469640(param_1);
        if (*param_5 >> (ulong)uVar18 == 0) {
          bVar3 = uVar18 == 0;
          iVar6 = iVar5 - (uint)bVar3;
          if (bVar3) {
            param_5 = param_5 + 1;
          }
          if (iVar6 < (int)(uVar4 + 2)) {
            uVar8 = 0x6d;
            uVar9 = 0x4e;
          }
          else {
            uVar2 = (iVar6 - uVar4) - 2;
            uVar17 = uVar2;
            if ((param_6 == 0xfffffffd) || (uVar17 = param_6, (int)param_6 <= (int)uVar2)) {
              if (param_5[(long)iVar6 + -1] == 0xbc) {
                uVar2 = iVar6 + ~uVar4;
                lVar19 = (long)(int)uVar2;
                pbVar16 = (byte *)FUN_00452c30(lVar19,"external/openssl/crypto/rsa/rsa_pss.c",0x5d);
                if (pbVar16 == (byte *)0x0) {
                  uVar8 = 0x41;
                  uVar9 = 0x5f;
LAB_0046f53c:
                  FUN_004806c0(4,0x7e,uVar8,"external/openssl/crypto/rsa/rsa_pss.c",uVar9);
                }
                else {
                  __n = (ulong)uVar4;
                  iVar6 = FUN_0046c210(pbVar16,lVar19,param_5 + lVar19,__n,lVar11);
                  if (-1 < iVar6) {
                    if (0 < (int)uVar2) {
                      uVar10 = (ulong)uVar2;
                      if ((uVar2 < 0x40) ||
                         ((pbVar16 < param_5 + uVar10 && (param_5 < pbVar16 + uVar10)))) {
                        uVar12 = 0;
                      }
                      else {
                        uVar12 = uVar10 & 0xffffffc0;
                        pbVar13 = pbVar16 + 0x20;
                        pbVar15 = param_5 + 0x20;
                        uVar14 = uVar12;
                        do {
                          uVar9 = *(undefined8 *)(pbVar15 + -0x18);
                          uVar8 = *(undefined8 *)(pbVar15 + -0x20);
                          uVar21 = *(undefined8 *)(pbVar15 + -8);
                          uVar20 = *(undefined8 *)(pbVar15 + -0x10);
                          uVar14 = uVar14 - 0x40;
                          uVar27 = *(undefined8 *)(pbVar13 + -0x18);
                          uVar26 = *(undefined8 *)(pbVar13 + -0x20);
                          uVar29 = *(undefined8 *)(pbVar13 + -8);
                          uVar28 = *(undefined8 *)(pbVar13 + -0x10);
                          uVar23 = *(undefined8 *)(pbVar15 + 8);
                          uVar22 = *(undefined8 *)pbVar15;
                          uVar25 = *(undefined8 *)(pbVar15 + 0x18);
                          uVar24 = *(undefined8 *)(pbVar15 + 0x10);
                          *(ulong *)(pbVar13 + -0x18) =
                               CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                                  (byte)((ulong)uVar9 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                           (byte)((ulong)uVar9 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                                    (byte)((ulong)uVar9 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar27 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar9 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar27 >> 0x10) ^ (byte)((ulong)uVar9 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar27 >> 8) ^
                                                           (byte)((ulong)uVar9 >> 8),
                                                           (byte)uVar27 ^ (byte)uVar9)))))));
                          *(ulong *)(pbVar13 + -0x20) =
                               CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar8 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                                  (byte)((ulong)uVar8 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                           (byte)((ulong)uVar8 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                                    (byte)((ulong)uVar8 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar26 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar8 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar26 >> 0x10) ^ (byte)((ulong)uVar8 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar26 >> 8) ^
                                                           (byte)((ulong)uVar8 >> 8),
                                                           (byte)uVar26 ^ (byte)uVar8)))))));
                          *(ulong *)(pbVar13 + -8) =
                               CONCAT17((byte)((ulong)uVar29 >> 0x38) ^
                                        (byte)((ulong)uVar21 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                                 (byte)((ulong)uVar21 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                          (byte)((ulong)uVar21 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                                   (byte)((ulong)uVar21 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar29 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar21 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) ^ (byte)((ulong)uVar21 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) ^
                                                           (byte)((ulong)uVar21 >> 8),
                                                           (byte)uVar29 ^ (byte)uVar21)))))));
                          *(ulong *)(pbVar13 + -0x10) =
                               CONCAT17((byte)((ulong)uVar28 >> 0x38) ^
                                        (byte)((ulong)uVar20 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                                 (byte)((ulong)uVar20 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                          (byte)((ulong)uVar20 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                                   (byte)((ulong)uVar20 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar28 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar20 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar28 >> 0x10) ^ (byte)((ulong)uVar20 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar28 >> 8) ^
                                                           (byte)((ulong)uVar20 >> 8),
                                                           (byte)uVar28 ^ (byte)uVar20)))))));
                          uVar9 = *(undefined8 *)(pbVar13 + 8);
                          uVar8 = *(undefined8 *)pbVar13;
                          uVar21 = *(undefined8 *)(pbVar13 + 0x18);
                          uVar20 = *(undefined8 *)(pbVar13 + 0x10);
                          *(ulong *)(pbVar13 + 8) =
                               CONCAT17((byte)((ulong)uVar9 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar9 >> 0x30) ^
                                                  (byte)((ulong)uVar23 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar9 >> 0x28) ^
                                                           (byte)((ulong)uVar23 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar9 >> 0x20) ^
                                                                    (byte)((ulong)uVar23 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar9 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar23 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar9 >> 0x10) ^ (byte)((ulong)uVar23 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar9 >> 8) ^
                                                           (byte)((ulong)uVar23 >> 8),
                                                           (byte)uVar9 ^ (byte)uVar23)))))));
                          *(ulong *)pbVar13 =
                               CONCAT17((byte)((ulong)uVar8 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar8 >> 0x30) ^
                                                  (byte)((ulong)uVar22 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar8 >> 0x28) ^
                                                           (byte)((ulong)uVar22 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar8 >> 0x20) ^
                                                                    (byte)((ulong)uVar22 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar8 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar22 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar8 >> 0x10) ^ (byte)((ulong)uVar22 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar8 >> 8) ^
                                                           (byte)((ulong)uVar22 >> 8),
                                                           (byte)uVar8 ^ (byte)uVar22)))))));
                          *(ulong *)(pbVar13 + 0x18) =
                               CONCAT17((byte)((ulong)uVar21 >> 0x38) ^
                                        (byte)((ulong)uVar25 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                                 (byte)((ulong)uVar25 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                          (byte)((ulong)uVar25 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                                   (byte)((ulong)uVar25 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar21 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar25 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar21 >> 0x10) ^ (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar21 >> 8) ^
                                                           (byte)((ulong)uVar25 >> 8),
                                                           (byte)uVar21 ^ (byte)uVar25)))))));
                          *(ulong *)(pbVar13 + 0x10) =
                               CONCAT17((byte)((ulong)uVar20 >> 0x38) ^
                                        (byte)((ulong)uVar24 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                                 (byte)((ulong)uVar24 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                          (byte)((ulong)uVar24 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                                   (byte)((ulong)uVar24 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar20 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar24 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar20 >> 0x10) ^ (byte)((ulong)uVar24 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) ^
                                                           (byte)((ulong)uVar24 >> 8),
                                                           (byte)uVar20 ^ (byte)uVar24)))))));
                          pbVar13 = pbVar13 + 0x40;
                          pbVar15 = pbVar15 + 0x40;
                        } while (uVar14 != 0);
                        if (uVar12 == uVar10) goto LAB_0046f4a4;
                      }
                      uVar14 = ~uVar12;
                      if ((uVar2 & 1) != 0) {
                        pbVar16[uVar12] = pbVar16[uVar12] ^ param_5[uVar12];
                        uVar12 = uVar12 | 1;
                      }
                      if (uVar14 + uVar10 != 0) {
                        lVar11 = uVar10 - uVar12;
                        pbVar13 = pbVar16 + uVar12 + 1;
                        pbVar15 = param_5 + uVar12 + 1;
                        do {
                          lVar11 = lVar11 + -2;
                          pbVar13[-1] = pbVar13[-1] ^ pbVar15[-1];
                          *pbVar13 = *pbVar13 ^ *pbVar15;
                          pbVar13 = pbVar13 + 2;
                          pbVar15 = pbVar15 + 2;
                        } while (lVar11 != 0);
                      }
                    }
LAB_0046f4a4:
                    if (uVar18 != 0) {
                      *pbVar16 = *pbVar16 & (byte)(0xff >> (ulong)(8 - uVar18 & 0x1f));
                    }
                    lVar11 = 0;
                    do {
                      pbVar13 = pbVar16 + lVar11;
                      lVar1 = lVar11 + 1;
                      if ((int)(uVar2 - 1) <= lVar11) break;
                      lVar11 = lVar1;
                    } while (*pbVar13 == 0);
                    if (*pbVar13 == 1) {
                      uVar18 = (uint)lVar1;
                      if ((uVar17 == 0xfffffffe) ||
                         (~uVar17 + ((iVar5 - (uint)bVar3) - uVar4) == uVar18)) {
                        iVar5 = FUN_0042bc40(lVar7,param_3,0);
                        if ((((iVar5 == 0) ||
                             (iVar5 = FUN_0042bd60(lVar7,&DAT_03cffd9c,8), iVar5 == 0)) ||
                            (iVar5 = FUN_0042bd60(lVar7,param_2,__n), iVar5 == 0)) ||
                           (((uVar2 != uVar18 &&
                             (iVar5 = FUN_0042bd60(lVar7,pbVar16 + lVar1,(long)(int)(uVar2 - uVar18)
                                                  ), iVar5 == 0)) ||
                            (iVar5 = FUN_0042be20(lVar7,auStack_a0,0), iVar5 == 0))))
                        goto LAB_0046f540;
                        iVar5 = memcmp(auStack_a0,param_5 + lVar19,__n);
                        if (iVar5 == 0) {
                          uVar8 = 1;
                          goto LAB_0046f408;
                        }
                        uVar8 = 0x68;
                        uVar9 = 0x7c;
                      }
                      else {
                        uVar8 = 0x88;
                        uVar9 = 0x6e;
                      }
                    }
                    else {
                      uVar8 = 0x87;
                      uVar9 = 0x6a;
                    }
                    goto LAB_0046f53c;
                  }
                }
LAB_0046f540:
                uVar8 = 0;
                goto LAB_0046f408;
              }
              uVar8 = 0x86;
              uVar9 = 0x58;
            }
            else {
              uVar8 = 0x6d;
              uVar9 = 0x54;
            }
          }
        }
        else {
          uVar8 = 0x85;
          uVar9 = 0x46;
        }
      }
      else {
        if (-4 < (int)param_6) goto LAB_0046f258;
        uVar8 = 0x88;
        uVar9 = 0x3f;
      }
      FUN_004806c0(4,0x7e,uVar8,"external/openssl/crypto/rsa/rsa_pss.c",uVar9);
    }
  }
  uVar8 = 0;
  pbVar16 = (byte *)0x0;
LAB_0046f408:
  FUN_00452f80(pbVar16,"external/openssl/crypto/rsa/rsa_pss.c",0x83);
  FUN_0042bbe0(lVar7);
  return uVar8;
}


