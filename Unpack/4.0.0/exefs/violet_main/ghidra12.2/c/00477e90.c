/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00477e90; name: FUN_00477e90
 */


undefined8
FUN_00477e90(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,void *param_5,
            size_t *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  void *local_68;
  
  local_68 = param_5;
  lVar4 = FUN_0042bbc0();
  uVar5 = FUN_0040c210(param_1);
  uVar6 = FUN_0040d4f0();
  uVar7 = FUN_0040c290(param_1);
  iVar1 = FUN_0043b720(param_2);
  local_78 = 0;
  local_70 = 0;
  if ((lVar4 == 0) || (iVar1 < 1)) {
    uVar5 = 0x84;
  }
  else {
    uVar8 = FUN_00477de0(uVar5);
    if (uVar8 != 0) {
      lVar9 = FUN_0040cf10(uVar5);
      lVar10 = FUN_0040cf10(uVar5);
      lVar11 = FUN_003ed1c0();
      if (((lVar9 == 0) || (lVar10 == 0)) || (lVar11 == 0)) {
        uVar5 = 0x41;
        uVar6 = 0x92;
LAB_0047821c:
        FUN_004806c0(0x35,0x67,uVar5,"external/openssl/crypto/sm2/sm2_crypt.c",uVar6);
        uVar19 = 0;
        lVar17 = 0;
        lVar18 = 0;
      }
      else {
        FUN_003ed410(lVar11);
        uVar12 = FUN_003ed5c0(lVar11);
        uVar13 = FUN_003ed5c0(lVar11);
        uVar14 = FUN_003ed5c0(lVar11);
        uVar15 = FUN_003ed5c0(lVar11);
        lVar16 = FUN_003ed5c0(lVar11);
        if (lVar16 == 0) {
          uVar6 = 0x9e;
          uVar5 = 3;
          goto LAB_0047821c;
        }
        lVar17 = FUN_00452ce0(uVar8 << 1,"external/openssl/crypto/sm2/sm2_crypt.c",0xa2);
        lVar18 = FUN_00452ce0(iVar1,"external/openssl/crypto/sm2/sm2_crypt.c",0xa3);
        if ((lVar17 == 0) || (lVar18 == 0)) {
          uVar5 = 0x41;
          uVar6 = 0xa6;
LAB_0047828c:
          FUN_004806c0(0x35,0x67,uVar5,"external/openssl/crypto/sm2/sm2_crypt.c",uVar6);
          uVar19 = 0;
        }
        else {
          memset(param_5,0,*param_6);
          iVar2 = FUN_003ff740(uVar12,uVar6);
          if (iVar2 == 0) {
            uVar5 = 0x44;
            uVar6 = 0xad;
            goto LAB_0047828c;
          }
          iVar2 = FUN_0040e430(uVar5,lVar9,uVar12,0,0,lVar11);
          if (((iVar2 == 0) || (iVar2 = FUN_0040dd90(uVar5,lVar9,uVar13,uVar15,lVar11), iVar2 == 0))
             || ((iVar2 = FUN_0040e430(uVar5,lVar10,0,uVar7,uVar12,lVar11), iVar2 == 0 ||
                 (iVar2 = FUN_0040dd90(uVar5,lVar10,uVar14,lVar16,lVar11), iVar2 == 0)))) {
            uVar6 = 0xb5;
            uVar5 = 0x10;
LAB_00478264:
            FUN_004806c0(0x35,0x67,uVar5,"external/openssl/crypto/sm2/sm2_crypt.c",uVar6);
            uVar19 = 0;
            uVar5 = 0;
            goto LAB_0047829c;
          }
          iVar2 = FUN_003ebc80(uVar14,lVar17,uVar8 & 0xffffffff);
          if (iVar2 < 0) {
LAB_00478328:
            uVar5 = 0x44;
            uVar6 = 0xbb;
            goto LAB_00478264;
          }
          iVar2 = FUN_003ebc80(lVar16,lVar17 + uVar8,uVar8 & 0xffffffff);
          if (iVar2 < 0) goto LAB_00478328;
          uVar19 = FUN_00452ce0(param_4,"external/openssl/crypto/sm2/sm2_crypt.c",0xbf);
          if (uVar19 == 0) {
            uVar5 = 0x41;
            uVar6 = 0xc1;
LAB_004784b8:
            FUN_004806c0(0x35,0x67,uVar5,"external/openssl/crypto/sm2/sm2_crypt.c",uVar6);
            uVar5 = 0;
            goto LAB_0047829c;
          }
          iVar2 = FUN_004442f0(uVar19,param_4,lVar17,uVar8 << 1,0,0,param_2);
          if (iVar2 == 0) {
            uVar6 = 200;
LAB_004784b4:
            uVar5 = 6;
            goto LAB_004784b8;
          }
          if (param_4 != 0) {
            if ((param_4 < 0x40) || ((uVar19 < param_3 + param_4 && (param_3 < uVar19 + param_4))))
            {
              uVar21 = 0;
            }
            else {
              uVar21 = param_4 & 0xffffffffffffffc0;
              puVar24 = (undefined8 *)(param_3 + 0x20);
              puVar26 = (undefined8 *)(uVar19 + 0x20);
              uVar23 = uVar21;
              do {
                uVar6 = puVar24[-3];
                uVar5 = puVar24[-4];
                uVar12 = puVar24[-1];
                uVar7 = puVar24[-2];
                uVar23 = uVar23 - 0x40;
                uVar31 = puVar26[-3];
                uVar30 = puVar26[-4];
                uVar33 = puVar26[-1];
                uVar32 = puVar26[-2];
                uVar27 = puVar24[1];
                uVar14 = *puVar24;
                uVar29 = puVar24[3];
                uVar28 = puVar24[2];
                puVar26[-3] = CONCAT17((byte)((ulong)uVar31 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar31 >> 0x30) ^
                                                (byte)((ulong)uVar6 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar31 >> 0x28) ^
                                                         (byte)((ulong)uVar6 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar31 >> 0x20) ^
                                                                  (byte)((ulong)uVar6 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar31 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar6 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar31 >> 0x10) ^ (byte)((ulong)uVar6 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar31 >> 8) ^
                                                           (byte)((ulong)uVar6 >> 8),
                                                           (byte)uVar31 ^ (byte)uVar6)))))));
                puVar26[-4] = CONCAT17((byte)((ulong)uVar30 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar30 >> 0x30) ^
                                                (byte)((ulong)uVar5 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar30 >> 0x28) ^
                                                         (byte)((ulong)uVar5 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar30 >> 0x20) ^
                                                                  (byte)((ulong)uVar5 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar30 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar5 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar30 >> 0x10) ^ (byte)((ulong)uVar5 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar30 >> 8) ^
                                                           (byte)((ulong)uVar5 >> 8),
                                                           (byte)uVar30 ^ (byte)uVar5)))))));
                puVar26[-1] = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^ (byte)((ulong)uVar12 >> 0x38)
                                       ,CONCAT16((byte)((ulong)uVar33 >> 0x30) ^
                                                 (byte)((ulong)uVar12 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                                          (byte)((ulong)uVar12 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                                   (byte)((ulong)uVar12 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar33 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar12 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar33 >> 0x10) ^ (byte)((ulong)uVar12 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar33 >> 8) ^
                                                           (byte)((ulong)uVar12 >> 8),
                                                           (byte)uVar33 ^ (byte)uVar12)))))));
                puVar26[-2] = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar7 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                                (byte)((ulong)uVar7 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                         (byte)((ulong)uVar7 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                                  (byte)((ulong)uVar7 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar32 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar7 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar32 >> 0x10) ^ (byte)((ulong)uVar7 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                           (byte)((ulong)uVar7 >> 8),
                                                           (byte)uVar32 ^ (byte)uVar7)))))));
                uVar6 = puVar26[1];
                uVar5 = *puVar26;
                uVar12 = puVar26[3];
                uVar7 = puVar26[2];
                puVar26[1] = CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ulong)uVar27 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar6 >> 0x30) ^
                                               (byte)((ulong)uVar27 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                                        (byte)((ulong)uVar27 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                                 (byte)((ulong)uVar27 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar6 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar27 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar6 >> 0x10) ^ (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                           (byte)((ulong)uVar27 >> 8),
                                                           (byte)uVar6 ^ (byte)uVar27)))))));
                *puVar26 = CONCAT17((byte)((ulong)uVar5 >> 0x38) ^ (byte)((ulong)uVar14 >> 0x38),
                                    CONCAT16((byte)((ulong)uVar5 >> 0x30) ^
                                             (byte)((ulong)uVar14 >> 0x30),
                                             CONCAT15((byte)((ulong)uVar5 >> 0x28) ^
                                                      (byte)((ulong)uVar14 >> 0x28),
                                                      CONCAT14((byte)((ulong)uVar5 >> 0x20) ^
                                                               (byte)((ulong)uVar14 >> 0x20),
                                                               CONCAT13((byte)((ulong)uVar5 >> 0x18)
                                                                        ^ (byte)((ulong)uVar14 >>
                                                                                0x18),
                                                                        CONCAT12((byte)((ulong)uVar5
                                                                                       >> 0x10) ^
                                                                                 (byte)((ulong)
                                                  uVar14 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar5 >> 8) ^
                                                           (byte)((ulong)uVar14 >> 8),
                                                           (byte)uVar5 ^ (byte)uVar14)))))));
                puVar26[3] = CONCAT17((byte)((ulong)uVar12 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar12 >> 0x30) ^
                                               (byte)((ulong)uVar29 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar12 >> 0x28) ^
                                                        (byte)((ulong)uVar29 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar12 >> 0x20) ^
                                                                 (byte)((ulong)uVar29 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar12 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar29 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar12 >> 0x10) ^ (byte)((ulong)uVar29 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar12 >> 8) ^
                                                           (byte)((ulong)uVar29 >> 8),
                                                           (byte)uVar12 ^ (byte)uVar29)))))));
                puVar26[2] = CONCAT17((byte)((ulong)uVar7 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar7 >> 0x30) ^
                                               (byte)((ulong)uVar28 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar7 >> 0x28) ^
                                                        (byte)((ulong)uVar28 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar7 >> 0x20) ^
                                                                 (byte)((ulong)uVar28 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar7 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar28 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar7 >> 0x10) ^ (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar7 >> 8) ^
                                                           (byte)((ulong)uVar28 >> 8),
                                                           (byte)uVar7 ^ (byte)uVar28)))))));
                puVar24 = puVar24 + 8;
                puVar26 = puVar26 + 8;
              } while (uVar23 != 0);
              if (uVar21 == param_4) goto LAB_004783c4;
            }
            uVar23 = ~uVar21;
            if ((param_4 & 1) != 0) {
              *(byte *)(uVar19 + uVar21) = *(byte *)(uVar19 + uVar21) ^ *(byte *)(param_3 + uVar21);
              uVar21 = uVar21 | 1;
            }
            if (uVar23 + param_4 != 0) {
              lVar16 = param_4 - uVar21;
              pbVar22 = (byte *)(uVar19 + uVar21 + 1);
              pbVar25 = (byte *)(param_3 + uVar21 + 1);
              do {
                lVar16 = lVar16 + -2;
                pbVar22[-1] = pbVar22[-1] ^ pbVar25[-1];
                *pbVar22 = *pbVar22 ^ *pbVar25;
                pbVar22 = pbVar22 + 2;
                pbVar25 = pbVar25 + 2;
              } while (lVar16 != 0);
            }
          }
LAB_004783c4:
          iVar2 = FUN_0042bc10(lVar4,param_2);
          if ((((iVar2 == 0) || (iVar2 = FUN_0042bd60(lVar4,lVar17,uVar8), iVar2 == 0)) ||
              (iVar2 = FUN_0042bd60(lVar4,param_3,param_4), iVar2 == 0)) ||
             ((iVar2 = FUN_0042bd60(lVar4,lVar17 + uVar8,uVar8), iVar2 == 0 ||
              (iVar2 = FUN_0042bd80(lVar4,lVar18,0), iVar2 == 0)))) {
            uVar6 = 0xd4;
            goto LAB_004784b4;
          }
          local_88 = uVar13;
          uStack_80 = uVar15;
          lVar16 = FUN_003e4ff0();
          local_78 = lVar16;
          lVar20 = FUN_003e4ff0();
          local_70 = lVar20;
          if ((lVar20 == 0) || (lVar16 == 0)) {
            uVar5 = 0x41;
            uVar6 = 0xde;
          }
          else {
            iVar1 = thunk_FUN_003df070(lVar16,lVar18,iVar1);
            if ((iVar1 == 0) || (iVar1 = thunk_FUN_003df070(lVar20,uVar19,param_4), iVar1 == 0)) {
              uVar5 = 0x44;
              uVar6 = 0xe3;
            }
            else {
              uVar3 = FUN_003e3920(&local_88,&local_68,PTR_DAT_047cd4e8);
              if (-1 < (int)uVar3) {
                uVar5 = 1;
                *param_6 = (ulong)uVar3;
                goto LAB_0047829c;
              }
              uVar5 = 0x44;
              uVar6 = 0xea;
            }
          }
          FUN_004806c0(0x35,0x67,uVar5,"external/openssl/crypto/sm2/sm2_crypt.c",uVar6);
        }
      }
      uVar5 = 0;
      goto LAB_0047829c;
    }
    uVar5 = 0x8a;
  }
  FUN_004806c0(0x35,0x67,0x44,"external/openssl/crypto/sm2/sm2_crypt.c",uVar5);
  lVar11 = 0;
  lVar9 = 0;
  lVar10 = 0;
  uVar19 = 0;
  lVar17 = 0;
  lVar18 = 0;
  uVar5 = 0;
LAB_0047829c:
  thunk_FUN_003df2e0(local_70);
  thunk_FUN_003df2e0(local_78);
  FUN_00452f80(uVar19,"external/openssl/crypto/sm2/sm2_crypt.c",0xf4);
  FUN_00452f80(lVar17,"external/openssl/crypto/sm2/sm2_crypt.c",0xf5);
  FUN_00452f80(lVar18,"external/openssl/crypto/sm2/sm2_crypt.c",0xf6);
  FUN_0042bbe0(lVar4);
  FUN_003ed280(lVar11);
  FUN_0040caf0(lVar9);
  FUN_0040caf0(lVar10);
  return uVar5;
}


