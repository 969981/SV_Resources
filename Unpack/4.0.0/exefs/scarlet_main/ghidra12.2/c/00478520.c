/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00478520; name: FUN_00478520
 */


undefined8
FUN_00478520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            void *param_5,size_t *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
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
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 local_68;
  
  local_68 = param_3;
  uVar4 = FUN_0040c210();
  uVar5 = FUN_00477de0();
  iVar2 = FUN_0043b720(param_2);
  lVar22 = 0;
  if (uVar5 == 0) {
    lVar25 = 0;
    puVar21 = (undefined8 *)0x0;
    lVar9 = 0;
    lVar12 = 0;
    uVar24 = 0;
    lVar27 = 0;
  }
  else {
    lVar25 = 0;
    puVar21 = (undefined8 *)0x0;
    lVar9 = 0;
    lVar12 = 0;
    uVar24 = 0;
    lVar27 = 0;
    if (0 < iVar2) {
      memset(param_5,0xff,*param_6);
      puVar21 = (undefined8 *)FUN_003e1880(0,&local_68,param_4,PTR_DAT_047cd4e8);
      if (puVar21 == (undefined8 *)0x0) {
        uVar4 = 100;
        uVar8 = 0x11d;
LAB_00478658:
        FUN_004806c0(0x35,0x66,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar8);
        lVar22 = 0;
      }
      else {
        if (*(int *)puVar21[2] != iVar2) {
          uVar4 = 0x68;
          uVar8 = 0x122;
          goto LAB_00478658;
        }
        uVar1 = *(uint *)puVar21[3];
        uVar23 = (ulong)(int)uVar1;
        if (*param_6 < uVar23) {
          uVar4 = 0x6b;
          uVar8 = 0x12a;
          goto LAB_00478658;
        }
        uVar26 = *(ulong *)((uint *)puVar21[3] + 2);
        uVar8 = *(undefined8 *)((int *)puVar21[2] + 2);
        lVar22 = FUN_003ed1c0();
        if (lVar22 != 0) {
          FUN_003ed410(lVar22);
          uVar6 = FUN_003ed5c0(lVar22);
          lVar27 = FUN_003ed5c0(lVar22);
          if (lVar27 == 0) {
            FUN_004806c0(0x35,0x66,3,"external/openssl/crypto/sm2/sm2_crypt.c",0x139);
            lVar25 = 0;
            lVar9 = 0;
            lVar12 = 0;
            uVar24 = 0;
            lVar27 = 0;
          }
          else {
            uVar24 = FUN_00452ce0(uVar23,"external/openssl/crypto/sm2/sm2_crypt.c",0x13d);
            lVar9 = FUN_00452ce0(uVar5 << 1,"external/openssl/crypto/sm2/sm2_crypt.c",0x13e);
            lVar12 = FUN_00452ce0(iVar2,"external/openssl/crypto/sm2/sm2_crypt.c",0x13f);
            if (((uVar24 == 0) || (lVar9 == 0)) || (lVar12 == 0)) {
              FUN_004806c0(0x35,0x66,0x41,"external/openssl/crypto/sm2/sm2_crypt.c",0x142);
              lVar25 = 0;
              lVar27 = 0;
            }
            else {
              lVar25 = FUN_0040cf10(uVar4);
              if (lVar25 == 0) {
                uVar4 = 0x41;
                uVar8 = 0x148;
              }
              else {
                iVar3 = FUN_0040dbd0(uVar4,lVar25,*puVar21,puVar21[1],lVar22);
                if (iVar3 != 0) {
                  uVar7 = FUN_0040c280(param_1);
                  iVar3 = FUN_0040e430(uVar4,lVar25,0,lVar25,uVar7,lVar22);
                  if ((iVar3 != 0) &&
                     (iVar3 = FUN_0040dd90(uVar4,lVar25,uVar6,lVar27,lVar22), iVar3 != 0)) {
                    iVar3 = FUN_003ebc80(uVar6,lVar9,uVar5 & 0xffffffff);
                    if (-1 < iVar3) {
                      iVar3 = FUN_003ebc80(lVar27,lVar9 + uVar5,uVar5 & 0xffffffff);
                      if ((-1 < iVar3) &&
                         (iVar3 = FUN_004442f0(uVar24,uVar23,lVar9,uVar5 << 1,0,0,param_2),
                         iVar3 != 0)) {
                        uVar10 = (ulong)uVar1;
                        if (uVar1 != 0) {
                          if (uVar1 < 0x40) {
                            uVar13 = 0;
                          }
                          else {
                            uVar13 = 0;
                            if (((void *)(uVar26 + uVar10) <= param_5 ||
                                 (long)param_5 + uVar10 <= uVar26) &&
                               ((void *)(uVar24 + uVar10) <= param_5 ||
                                (long)param_5 + uVar10 <= uVar24)) {
                              uVar13 = uVar23 & 0xffffffc0;
                              puVar17 = (undefined8 *)((long)param_5 + 0x20);
                              puVar19 = (undefined8 *)(uVar26 + 0x20);
                              puVar20 = (undefined8 *)(uVar24 + 0x20);
                              uVar15 = uVar13;
                              do {
                                uVar6 = puVar19[-3];
                                uVar4 = puVar19[-4];
                                uVar28 = puVar19[-1];
                                uVar7 = puVar19[-2];
                                uVar15 = uVar15 - 0x40;
                                uVar34 = puVar20[-3];
                                uVar33 = puVar20[-4];
                                uVar36 = puVar20[-1];
                                uVar35 = puVar20[-2];
                                uVar30 = puVar19[1];
                                uVar29 = *puVar19;
                                uVar32 = puVar19[3];
                                uVar31 = puVar19[2];
                                uVar38 = puVar20[1];
                                uVar37 = *puVar20;
                                uVar40 = puVar20[3];
                                uVar39 = puVar20[2];
                                puVar17[-3] = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^
                                                       (byte)((ulong)uVar6 >> 0x38),
                                                       CONCAT16((byte)((ulong)uVar34 >> 0x30) ^
                                                                (byte)((ulong)uVar6 >> 0x30),
                                                                CONCAT15((byte)((ulong)uVar34 >>
                                                                               0x28) ^
                                                                         (byte)((ulong)uVar6 >> 0x28
                                                                               ),CONCAT14((byte)((
                                                  ulong)uVar34 >> 0x20) ^
                                                  (byte)((ulong)uVar6 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar34 >> 0x18) ^
                                                           (byte)((ulong)uVar6 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar34 >> 0x10) ^
                                                                    (byte)((ulong)uVar6 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar34 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar6 >>
                                                                                   8),(byte)uVar34 ^
                                                                                      (byte)uVar6)))
                                                  ))));
                                puVar17[-4] = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^
                                                       (byte)((ulong)uVar4 >> 0x38),
                                                       CONCAT16((byte)((ulong)uVar33 >> 0x30) ^
                                                                (byte)((ulong)uVar4 >> 0x30),
                                                                CONCAT15((byte)((ulong)uVar33 >>
                                                                               0x28) ^
                                                                         (byte)((ulong)uVar4 >> 0x28
                                                                               ),CONCAT14((byte)((
                                                  ulong)uVar33 >> 0x20) ^
                                                  (byte)((ulong)uVar4 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar33 >> 0x18) ^
                                                           (byte)((ulong)uVar4 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar33 >> 0x10) ^
                                                                    (byte)((ulong)uVar4 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar33 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar4 >>
                                                                                   8),(byte)uVar33 ^
                                                                                      (byte)uVar4)))
                                                  ))));
                                puVar17[3] = CONCAT17((byte)((ulong)uVar40 >> 0x38) ^
                                                      (byte)((ulong)uVar32 >> 0x38),
                                                      CONCAT16((byte)((ulong)uVar40 >> 0x30) ^
                                                               (byte)((ulong)uVar32 >> 0x30),
                                                               CONCAT15((byte)((ulong)uVar40 >> 0x28
                                                                              ) ^ (byte)((ulong)
                                                  uVar32 >> 0x28),
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
                                puVar17[2] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^
                                                      (byte)((ulong)uVar31 >> 0x38),
                                                      CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                                               (byte)((ulong)uVar31 >> 0x30),
                                                               CONCAT15((byte)((ulong)uVar39 >> 0x28
                                                                              ) ^ (byte)((ulong)
                                                  uVar31 >> 0x28),
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
                                puVar17[-1] = CONCAT17((byte)((ulong)uVar36 >> 0x38) ^
                                                       (byte)((ulong)uVar28 >> 0x38),
                                                       CONCAT16((byte)((ulong)uVar36 >> 0x30) ^
                                                                (byte)((ulong)uVar28 >> 0x30),
                                                                CONCAT15((byte)((ulong)uVar36 >>
                                                                               0x28) ^
                                                                         (byte)((ulong)uVar28 >>
                                                                               0x28),
                                                                         CONCAT14((byte)((ulong)
                                                  uVar36 >> 0x20) ^ (byte)((ulong)uVar28 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar36 >> 0x18) ^
                                                           (byte)((ulong)uVar28 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar36 >> 0x10) ^
                                                                    (byte)((ulong)uVar28 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar36 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar28 >>
                                                                                   8),(byte)uVar36 ^
                                                                                      (byte)uVar28))
                                                          )))));
                                puVar17[-2] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^
                                                       (byte)((ulong)uVar7 >> 0x38),
                                                       CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                                                (byte)((ulong)uVar7 >> 0x30),
                                                                CONCAT15((byte)((ulong)uVar35 >>
                                                                               0x28) ^
                                                                         (byte)((ulong)uVar7 >> 0x28
                                                                               ),CONCAT14((byte)((
                                                  ulong)uVar35 >> 0x20) ^
                                                  (byte)((ulong)uVar7 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar35 >> 0x18) ^
                                                           (byte)((ulong)uVar7 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar35 >> 0x10) ^
                                                                    (byte)((ulong)uVar7 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar35 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar7 >>
                                                                                   8),(byte)uVar35 ^
                                                                                      (byte)uVar7)))
                                                  ))));
                                puVar17[1] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^
                                                      (byte)((ulong)uVar30 >> 0x38),
                                                      CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                                               (byte)((ulong)uVar30 >> 0x30),
                                                               CONCAT15((byte)((ulong)uVar38 >> 0x28
                                                                              ) ^ (byte)((ulong)
                                                  uVar30 >> 0x28),
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
                                *puVar17 = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^
                                                    (byte)((ulong)uVar29 >> 0x38),
                                                    CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                                             (byte)((ulong)uVar29 >> 0x30),
                                                             CONCAT15((byte)((ulong)uVar37 >> 0x28)
                                                                      ^ (byte)((ulong)uVar29 >> 0x28
                                                                              ),
                                                                      CONCAT14((byte)((ulong)uVar37
                                                                                     >> 0x20) ^
                                                                               (byte)((ulong)uVar29
                                                                                     >> 0x20),
                                                                               CONCAT13((byte)((
                                                  ulong)uVar37 >> 0x18) ^
                                                  (byte)((ulong)uVar29 >> 0x18),
                                                  CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                           (byte)((ulong)uVar29 >> 0x10),
                                                           CONCAT11((byte)((ulong)uVar37 >> 8) ^
                                                                    (byte)((ulong)uVar29 >> 8),
                                                                    (byte)uVar37 ^ (byte)uVar29)))))
                                                  ));
                                puVar17 = puVar17 + 8;
                                puVar19 = puVar19 + 8;
                                puVar20 = puVar20 + 8;
                              } while (uVar15 != 0);
                              if (uVar13 == uVar10) goto LAB_00478a94;
                            }
                          }
                          uVar15 = ~uVar13;
                          if ((uVar23 & 1) != 0) {
                            *(byte *)((long)param_5 + uVar13) =
                                 *(byte *)(uVar24 + uVar13) ^ *(byte *)(uVar26 + uVar13);
                            uVar13 = uVar13 | 1;
                          }
                          if (uVar15 + uVar10 != 0) {
                            lVar11 = uVar10 - uVar13;
                            lVar27 = uVar13 + 1;
                            pbVar14 = (byte *)((long)param_5 + lVar27);
                            pbVar16 = (byte *)(uVar24 + lVar27);
                            pbVar18 = (byte *)(uVar26 + lVar27);
                            do {
                              lVar11 = lVar11 + -2;
                              pbVar14[-1] = pbVar16[-1] ^ pbVar18[-1];
                              *pbVar14 = *pbVar16 ^ *pbVar18;
                              pbVar14 = pbVar14 + 2;
                              pbVar16 = pbVar16 + 2;
                              pbVar18 = pbVar18 + 2;
                            } while (lVar11 != 0);
                          }
                        }
LAB_00478a94:
                        lVar27 = FUN_0042bbc0();
                        if (lVar27 == 0) {
                          uVar4 = 0x41;
                          uVar8 = 0x162;
                        }
                        else {
                          iVar3 = FUN_0042bc10(lVar27,param_2);
                          if ((((iVar3 == 0) ||
                               (iVar3 = FUN_0042bd60(lVar27,lVar9,uVar5), iVar3 == 0)) ||
                              (iVar3 = FUN_0042bd60(lVar27,param_5,uVar23), iVar3 == 0)) ||
                             ((iVar3 = FUN_0042bd60(lVar27,lVar9 + uVar5,uVar5), iVar3 == 0 ||
                              (iVar3 = FUN_0042bd80(lVar27,lVar12,0), iVar3 == 0)))) {
                            uVar8 = 0x16b;
                            uVar4 = 6;
                          }
                          else {
                            iVar2 = FUN_003f6d80(lVar12,uVar8,iVar2);
                            if (iVar2 == 0) {
                              uVar4 = 1;
                              *param_6 = uVar23;
                              goto LAB_00478690;
                            }
                            uVar8 = 0x170;
                            uVar4 = 0x66;
                          }
                        }
                        FUN_004806c0(0x35,0x66,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar8
                                    );
                        goto LAB_00478674;
                      }
                    }
                    FUN_004806c0(0x35,0x66,0x44,"external/openssl/crypto/sm2/sm2_crypt.c",0x159);
                    lVar27 = 0;
                    goto LAB_00478674;
                  }
                }
                uVar8 = 0x151;
                uVar4 = 0x10;
              }
              FUN_004806c0(0x35,0x66,uVar4,"external/openssl/crypto/sm2/sm2_crypt.c",uVar8);
              lVar27 = 0;
            }
          }
          goto LAB_00478674;
        }
        FUN_004806c0(0x35,0x66,0x41,"external/openssl/crypto/sm2/sm2_crypt.c",0x130);
      }
      lVar25 = 0;
      lVar9 = 0;
      lVar12 = 0;
      uVar24 = 0;
      lVar27 = 0;
    }
  }
LAB_00478674:
  memset(param_5,0,*param_6);
  uVar4 = 0;
LAB_00478690:
  FUN_00452f80(uVar24,"external/openssl/crypto/sm2/sm2_crypt.c",0x17b);
  FUN_00452f80(lVar9,"external/openssl/crypto/sm2/sm2_crypt.c",0x17c);
  FUN_00452f80(lVar12,"external/openssl/crypto/sm2/sm2_crypt.c",0x17d);
  FUN_0040caf0(lVar25);
  FUN_003ed280(lVar22);
  FUN_003e4550(puVar21,PTR_DAT_047cd4e8);
  FUN_0042bbe0(lVar27);
  return uVar4;
}


