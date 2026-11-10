/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046f600; name: FUN_0046f600
 */


undefined8
FUN_0046f600(long param_1,byte *param_2,undefined8 param_3,long param_4,long param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar10 = param_4;
  if (param_5 != 0) {
    lVar10 = param_5;
  }
  uVar3 = FUN_0043b720(param_4);
  if ((int)uVar3 < 0) {
LAB_0046f688:
    uVar6 = 0;
    pbVar14 = (byte *)0x0;
    lVar16 = 0;
    goto LAB_0046f860;
  }
  if (param_6 == 0xffffffff) {
    param_6 = uVar3;
  }
  else if (param_6 == 0xfffffffe) {
    param_6 = 0xfffffffd;
  }
  else {
    if ((int)param_6 < -3) {
      FUN_004806c0(4,0x98,0x88,"external/openssl/crypto/rsa/rsa_pss.c",0xae);
      goto LAB_0046f688;
    }
  }
  iVar4 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x18));
  uVar1 = iVar4 - 1U & 7;
  iVar4 = FUN_00469640(param_1);
  if (uVar1 == 0) {
    iVar4 = iVar4 + -1;
    pbVar15 = param_2 + 1;
    *param_2 = 0;
    if ((int)(uVar3 + 2) <= iVar4) goto LAB_0046f70c;
LAB_0046f6c8:
    uVar6 = 0xba;
LAB_0046f6dc:
    FUN_004806c0(4,0x98,0x6e,"external/openssl/crypto/rsa/rsa_pss.c",uVar6);
    uVar6 = 0;
    pbVar14 = (byte *)0x0;
    lVar16 = 0;
    goto LAB_0046f860;
  }
  pbVar15 = param_2;
  if (iVar4 < (int)(uVar3 + 2)) goto LAB_0046f6c8;
LAB_0046f70c:
  uVar2 = (iVar4 - uVar3) - 2;
  if (param_6 != 0xfffffffd) {
    if ((int)uVar2 < (int)param_6) {
      uVar6 = 0xc1;
      goto LAB_0046f6dc;
    }
    uVar2 = param_6;
  }
  param_6 = uVar2;
  if (0 < (int)param_6) {
    pbVar14 = (byte *)FUN_00452c30(param_6,"external/openssl/crypto/rsa/rsa_pss.c",0xc5);
    if (pbVar14 == (byte *)0x0) {
      FUN_004806c0(4,0x98,0x41,"external/openssl/crypto/rsa/rsa_pss.c",200);
    }
    else {
      iVar5 = FUN_00464f80(pbVar14,param_6);
      if (0 < iVar5) {
        lVar16 = FUN_0042bbc0();
        goto joined_r0x0046f780;
      }
    }
    uVar6 = 0;
    lVar16 = 0;
    goto LAB_0046f860;
  }
  pbVar14 = (byte *)0x0;
  lVar16 = FUN_0042bbc0();
joined_r0x0046f780:
  if (((((lVar16 != 0) && (iVar5 = FUN_0042bc40(lVar16,param_4,0), iVar5 != 0)) &&
       (iVar5 = FUN_0042bd60(lVar16,&DAT_03cffd9c,8), iVar5 != 0)) &&
      (iVar5 = FUN_0042bd60(lVar16,param_3,uVar3), iVar5 != 0)) &&
     ((param_6 == 0 || (iVar5 = FUN_0042bd60(lVar16,pbVar14,(long)(int)param_6), iVar5 != 0)))) {
    iVar5 = FUN_0042be20(lVar16,pbVar15 + (int)(iVar4 + ~uVar3),0);
    if ((iVar5 != 0) &&
       (iVar5 = FUN_0046c210(pbVar15,(long)(int)(iVar4 + ~uVar3),pbVar15 + (int)(iVar4 + ~uVar3),
                             uVar3,lVar10), iVar5 == 0)) {
      lVar10 = (long)(int)((iVar4 - (uVar3 + param_6)) + -2);
      pbVar7 = pbVar15 + lVar10;
      *pbVar7 = *pbVar7 ^ 1;
      if (0 < (int)param_6) {
        uVar9 = (ulong)param_6;
        if ((param_6 < 0x40) ||
           ((pbVar15 + lVar10 + 1 < pbVar14 + uVar9 && (pbVar14 < pbVar15 + lVar10 + uVar9 + 1)))) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar9 & 0xffffffc0;
          pbVar7 = pbVar7 + uVar11;
          pbVar12 = pbVar14 + 0x20;
          pbVar8 = pbVar15 + lVar10 + 0x21;
          uVar13 = uVar11;
          do {
            uVar17 = *(undefined8 *)(pbVar12 + -0x18);
            uVar6 = *(undefined8 *)(pbVar12 + -0x20);
            uVar19 = *(undefined8 *)(pbVar12 + -8);
            uVar18 = *(undefined8 *)(pbVar12 + -0x10);
            uVar13 = uVar13 - 0x40;
            uVar25 = *(undefined8 *)(pbVar8 + -0x18);
            uVar24 = *(undefined8 *)(pbVar8 + -0x20);
            uVar27 = *(undefined8 *)(pbVar8 + -8);
            uVar26 = *(undefined8 *)(pbVar8 + -0x10);
            uVar21 = *(undefined8 *)(pbVar12 + 8);
            uVar20 = *(undefined8 *)pbVar12;
            uVar23 = *(undefined8 *)(pbVar12 + 0x18);
            uVar22 = *(undefined8 *)(pbVar12 + 0x10);
            *(ulong *)(pbVar8 + -0x18) =
                 CONCAT17((byte)((ulong)uVar25 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                          CONCAT16((byte)((ulong)uVar25 >> 0x30) ^ (byte)((ulong)uVar17 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar25 >> 0x28) ^
                                            (byte)((ulong)uVar17 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar25 >> 0x20) ^
                                                     (byte)((ulong)uVar17 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar25 >> 0x18) ^
                                                              (byte)((ulong)uVar17 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar25 >> 0x10)
                                                                       ^ (byte)((ulong)uVar17 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar25
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar17
                                                                                      >> 8),
                                                                                (byte)uVar25 ^
                                                                                (byte)uVar17)))))));
            *(ulong *)(pbVar8 + -0x20) =
                 CONCAT17((byte)((ulong)uVar24 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                          CONCAT16((byte)((ulong)uVar24 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar24 >> 0x28) ^
                                            (byte)((ulong)uVar6 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar24 >> 0x20) ^
                                                     (byte)((ulong)uVar6 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar24 >> 0x18) ^
                                                              (byte)((ulong)uVar6 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar24 >> 0x10)
                                                                       ^ (byte)((ulong)uVar6 >> 0x10
                                                                               ),
                                                                       CONCAT11((byte)((ulong)uVar24
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar6
                                                                                      >> 8),
                                                                                (byte)uVar24 ^
                                                                                (byte)uVar6)))))));
            *(ulong *)(pbVar8 + -8) =
                 CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                          CONCAT16((byte)((ulong)uVar27 >> 0x30) ^ (byte)((ulong)uVar19 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                            (byte)((ulong)uVar19 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                     (byte)((ulong)uVar19 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                              (byte)((ulong)uVar19 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar27 >> 0x10)
                                                                       ^ (byte)((ulong)uVar19 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar27
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar19
                                                                                      >> 8),
                                                                                (byte)uVar27 ^
                                                                                (byte)uVar19)))))));
            *(ulong *)(pbVar8 + -0x10) =
                 CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                          CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                            (byte)((ulong)uVar18 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                     (byte)((ulong)uVar18 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                              (byte)((ulong)uVar18 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar26 >> 0x10)
                                                                       ^ (byte)((ulong)uVar18 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar26
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar18
                                                                                      >> 8),
                                                                                (byte)uVar26 ^
                                                                                (byte)uVar18)))))));
            uVar17 = *(undefined8 *)(pbVar8 + 8);
            uVar6 = *(undefined8 *)pbVar8;
            uVar19 = *(undefined8 *)(pbVar8 + 0x18);
            uVar18 = *(undefined8 *)(pbVar8 + 0x10);
            *(ulong *)(pbVar8 + 8) =
                 CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar21 >> 0x38),
                          CONCAT16((byte)((ulong)uVar17 >> 0x30) ^ (byte)((ulong)uVar21 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                            (byte)((ulong)uVar21 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                     (byte)((ulong)uVar21 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar17 >> 0x18) ^
                                                              (byte)((ulong)uVar21 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar17 >> 0x10)
                                                                       ^ (byte)((ulong)uVar21 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar17
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar21
                                                                                      >> 8),
                                                                                (byte)uVar17 ^
                                                                                (byte)uVar21)))))));
            *(ulong *)pbVar8 =
                 CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ulong)uVar20 >> 0x38),
                          CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)((ulong)uVar20 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar6 >> 0x28) ^
                                            (byte)((ulong)uVar20 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                                     (byte)((ulong)uVar20 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                              (byte)((ulong)uVar20 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar6 >> 0x10)
                                                                       ^ (byte)((ulong)uVar20 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar6
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar20
                                                                                      >> 8),
                                                                                (byte)uVar6 ^
                                                                                (byte)uVar20)))))));
            *(ulong *)(pbVar8 + 0x18) =
                 CONCAT17((byte)((ulong)uVar19 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                          CONCAT16((byte)((ulong)uVar19 >> 0x30) ^ (byte)((ulong)uVar23 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                            (byte)((ulong)uVar23 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                     (byte)((ulong)uVar23 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar19 >> 0x18) ^
                                                              (byte)((ulong)uVar23 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                       ^ (byte)((ulong)uVar23 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar19
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar23
                                                                                      >> 8),
                                                                                (byte)uVar19 ^
                                                                                (byte)uVar23)))))));
            *(ulong *)(pbVar8 + 0x10) =
                 CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                          CONCAT16((byte)((ulong)uVar18 >> 0x30) ^ (byte)((ulong)uVar22 >> 0x30),
                                   CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                            (byte)((ulong)uVar22 >> 0x28),
                                            CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                     (byte)((ulong)uVar22 >> 0x20),
                                                     CONCAT13((byte)((ulong)uVar18 >> 0x18) ^
                                                              (byte)((ulong)uVar22 >> 0x18),
                                                              CONCAT12((byte)((ulong)uVar18 >> 0x10)
                                                                       ^ (byte)((ulong)uVar22 >>
                                                                               0x10),
                                                                       CONCAT11((byte)((ulong)uVar18
                                                                                      >> 8) ^
                                                                                (byte)((ulong)uVar22
                                                                                      >> 8),
                                                                                (byte)uVar18 ^
                                                                                (byte)uVar22)))))));
            pbVar12 = pbVar12 + 0x40;
            pbVar8 = pbVar8 + 0x40;
          } while (uVar13 != 0);
          if (uVar11 == uVar9) goto LAB_0046f9ac;
        }
        uVar13 = ~uVar11;
        if ((param_6 & 1) != 0) {
          pbVar7 = pbVar7 + 1;
          pbVar12 = pbVar14 + uVar11;
          uVar11 = uVar11 | 1;
          *pbVar7 = *pbVar7 ^ *pbVar12;
        }
        if (uVar13 + uVar9 != 0) {
          lVar10 = uVar9 - uVar11;
          pbVar12 = pbVar14 + uVar11 + 1;
          do {
            pbVar8 = pbVar7 + 2;
            lVar10 = lVar10 + -2;
            pbVar7[1] = pbVar7[1] ^ pbVar12[-1];
            *pbVar8 = *pbVar8 ^ *pbVar12;
            pbVar12 = pbVar12 + 2;
            pbVar7 = pbVar8;
          } while (lVar10 != 0);
        }
      }
LAB_0046f9ac:
      if (uVar1 != 0) {
        *pbVar15 = *pbVar15 & (byte)(0xff >> (ulong)(8 - uVar1 & 0x1f));
      }
      uVar6 = 1;
      pbVar15[(long)iVar4 + -1] = 0xbc;
      goto LAB_0046f860;
    }
  }
  uVar6 = 0;
LAB_0046f860:
  FUN_0042bbe0(lVar16);
  FUN_00453260(pbVar14,(long)(int)param_6,"external/openssl/crypto/rsa/rsa_pss.c",0xf7);
  return uVar6;
}


