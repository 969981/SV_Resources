/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00441c20; name: FUN_00441c20
 */


bool FUN_00441c20(long param_1,ulong param_2,ulong param_3,long param_4,void *param_5,ulong param_6,
                 void *param_7,int *param_8,ulong *param_9,undefined8 param_10)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  size_t sVar21;
  size_t sVar22;
  ulong uVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  byte *pbVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  byte local_e0 [31];
  byte bStack_c1;
  undefined8 auStack_c0 [3];
  byte abStack_a1 [33];
  undefined8 local_80 [4];
  
  uVar4 = (uint)(param_3 >> 3);
  if (0x20 < uVar4) {
    return false;
  }
  if ((1L << (param_3 >> 3 & 0x3f) & 0x110100000U) == 0) {
    return false;
  }
  if (param_4 == 0) {
    if (uVar4 == 0x1c) {
      uVar4 = 0x1c;
      param_4 = FUN_0043c290();
    }
    else if (uVar4 == 0x14) {
      uVar4 = 0x14;
      param_4 = FUN_0043c280();
    }
    else {
      param_4 = FUN_0043c2a0();
    }
  }
  else {
    uVar4 = FUN_0043b720(param_4);
  }
  if (param_2 < 0x201) {
    param_2 = 0x200;
  }
  if (param_5 != (void *)0x0) {
    sVar21 = (size_t)(int)uVar4;
    if (param_6 < sVar21) {
      FUN_004806c0(10,0x7d,0x6e,"external/openssl/crypto/dsa/dsa_gen.c",0x55);
      return false;
    }
    if (param_6 <= sVar21) {
      sVar21 = param_6;
    }
    memcpy(local_80,param_5,sVar21);
  }
  lVar9 = FUN_003ecc70();
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_003ed1c0();
    if (lVar10 != 0) {
      FUN_003ed410(lVar10);
      uVar11 = FUN_003ed5c0(lVar10);
      uVar12 = FUN_003ed5c0(lVar10);
      uVar13 = FUN_003ed5c0(lVar10);
      uVar14 = FUN_003ed5c0(lVar10);
      uVar15 = FUN_003ed5c0(lVar10);
      uVar16 = FUN_003ed5c0(lVar10);
      uVar17 = FUN_003ed5c0(lVar10);
      lVar18 = FUN_003ed5c0(lVar10);
      if (lVar18 != 0) {
        uVar19 = FUN_003eb200();
        uVar32 = (param_2 + 0x3f & 0xffffffffffffffc0) - 1;
        iVar5 = FUN_003f2120(lVar18,uVar19,uVar32 & 0xffffffff);
        if (iVar5 != 0) {
          sVar21 = (size_t)(int)uVar4;
          uVar28 = (ulong)uVar4;
          uVar29 = uVar28 & 0xffffffc0;
          iVar5 = 0;
          do {
            if (0 < (int)uVar4) {
              do {
                iVar8 = FUN_003fc3a0(param_10,0,iVar5);
                if ((iVar8 == 0) ||
                   ((param_5 == (void *)0x0 && (iVar8 = FUN_00464f80(local_80,uVar4), iVar8 < 1))))
                goto LAB_00441e38;
                iVar5 = iVar5 + 1;
                memcpy(auStack_c0,local_80,sVar21);
                memcpy(local_e0,local_80,sVar21);
                uVar23 = (ulong)uVar4;
                do {
                  uVar2 = (int)uVar23 - 1;
                  uVar23 = (ulong)uVar2;
                  uVar31 = *(byte *)((long)auStack_c0 + uVar23) + 1;
                  *(char *)((long)auStack_c0 + uVar23) = (char)uVar31;
                  if (uVar31 >> 8 == 0) break;
                } while (0 < (int)uVar2);
                iVar8 = FUN_0042c130(local_80,sVar21,abStack_a1 + 1,0,param_4,0);
                if ((iVar8 == 0) ||
                   (iVar8 = FUN_0042c130(auStack_c0,sVar21,local_e0,0,param_4,0), iVar8 == 0))
                goto LAB_00441e38;
                if (uVar4 < 0x40) {
                  uVar23 = 0;
LAB_00442174:
                  lVar20 = uVar28 - uVar23;
                  pbVar25 = local_e0 + uVar23;
                  pbVar27 = abStack_a1 + uVar23 + 1;
                  do {
                    lVar20 = lVar20 + -1;
                    *pbVar27 = *pbVar27 ^ *pbVar25;
                    pbVar25 = pbVar25 + 1;
                    pbVar27 = pbVar27 + 1;
                  } while (lVar20 != 0);
                }
                else {
                  puVar24 = auStack_c0;
                  puVar26 = local_80;
                  uVar23 = uVar29;
                  do {
                    uVar33 = puVar24[-3];
                    uVar19 = puVar24[-4];
                    uVar35 = puVar24[-1];
                    uVar34 = puVar24[-2];
                    uVar23 = uVar23 - 0x40;
                    uVar37 = puVar26[-3];
                    uVar36 = puVar26[-4];
                    uVar39 = puVar26[-1];
                    uVar38 = puVar26[-2];
                    puVar26[-3] = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^
                                           (byte)((ulong)uVar33 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                                    (byte)((ulong)uVar33 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                             (byte)((ulong)uVar33 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar37 >> 0x20)
                                                                      ^ (byte)((ulong)uVar33 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar37
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar33
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar37 >> 0x10) ^
                                                  (byte)((ulong)uVar33 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar37 >> 8) ^
                                                           (byte)((ulong)uVar33 >> 8),
                                                           (byte)uVar37 ^ (byte)uVar33)))))));
                    puVar26[-4] = CONCAT17((byte)((ulong)uVar36 >> 0x38) ^
                                           (byte)((ulong)uVar19 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar36 >> 0x30) ^
                                                    (byte)((ulong)uVar19 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar36 >> 0x28) ^
                                                             (byte)((ulong)uVar19 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar36 >> 0x20)
                                                                      ^ (byte)((ulong)uVar19 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar36
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar19
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar36 >> 0x10) ^
                                                  (byte)((ulong)uVar19 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar36 >> 8) ^
                                                           (byte)((ulong)uVar19 >> 8),
                                                           (byte)uVar36 ^ (byte)uVar19)))))));
                    puVar26[-1] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^
                                           (byte)((ulong)uVar35 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                                    (byte)((ulong)uVar35 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                             (byte)((ulong)uVar35 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar39 >> 0x20)
                                                                      ^ (byte)((ulong)uVar35 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar39
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar35
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar39 >> 0x10) ^
                                                  (byte)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar39 >> 8) ^
                                                           (byte)((ulong)uVar35 >> 8),
                                                           (byte)uVar39 ^ (byte)uVar35)))))));
                    puVar26[-2] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^
                                           (byte)((ulong)uVar34 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                                    (byte)((ulong)uVar34 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                             (byte)((ulong)uVar34 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar38 >> 0x20)
                                                                      ^ (byte)((ulong)uVar34 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar38
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar34
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar38 >> 0x10) ^
                                                  (byte)((ulong)uVar34 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar38 >> 8) ^
                                                           (byte)((ulong)uVar34 >> 8),
                                                           (byte)uVar38 ^ (byte)uVar34)))))));
                    uVar33 = puVar26[1];
                    uVar19 = *puVar26;
                    uVar35 = puVar26[3];
                    uVar34 = puVar26[2];
                    uVar37 = puVar24[1];
                    uVar36 = *puVar24;
                    uVar39 = puVar24[3];
                    uVar38 = puVar24[2];
                    puVar26[1] = CONCAT17((byte)((ulong)uVar33 >> 0x38) ^
                                          (byte)((ulong)uVar37 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar33 >> 0x30) ^
                                                   (byte)((ulong)uVar37 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar33 >> 0x28) ^
                                                            (byte)((ulong)uVar37 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar33 >> 0x20) ^
                                                                     (byte)((ulong)uVar37 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar33
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar37
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar33 >> 0x10) ^ (byte)((ulong)uVar37 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar33 >> 8) ^
                                                           (byte)((ulong)uVar37 >> 8),
                                                           (byte)uVar33 ^ (byte)uVar37)))))));
                    *puVar26 = CONCAT17((byte)((ulong)uVar19 >> 0x38) ^
                                        (byte)((ulong)uVar36 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar19 >> 0x30) ^
                                                 (byte)((ulong)uVar36 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar19 >> 0x28) ^
                                                          (byte)((ulong)uVar36 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar19 >> 0x20) ^
                                                                   (byte)((ulong)uVar36 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar19 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar36 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar19 >> 0x10) ^ (byte)((ulong)uVar36 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar19 >> 8) ^
                                                           (byte)((ulong)uVar36 >> 8),
                                                           (byte)uVar19 ^ (byte)uVar36)))))));
                    puVar26[3] = CONCAT17((byte)((ulong)uVar35 >> 0x38) ^
                                          (byte)((ulong)uVar39 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar35 >> 0x30) ^
                                                   (byte)((ulong)uVar39 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar35 >> 0x28) ^
                                                            (byte)((ulong)uVar39 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar35 >> 0x20) ^
                                                                     (byte)((ulong)uVar39 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar35
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar39
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar35 >> 0x10) ^ (byte)((ulong)uVar39 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar35 >> 8) ^
                                                           (byte)((ulong)uVar39 >> 8),
                                                           (byte)uVar35 ^ (byte)uVar39)))))));
                    puVar26[2] = CONCAT17((byte)((ulong)uVar34 >> 0x38) ^
                                          (byte)((ulong)uVar38 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar34 >> 0x30) ^
                                                   (byte)((ulong)uVar38 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar34 >> 0x28) ^
                                                            (byte)((ulong)uVar38 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar34 >> 0x20) ^
                                                                     (byte)((ulong)uVar38 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar34
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar38
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar34 >> 0x10) ^ (byte)((ulong)uVar38 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar34 >> 8) ^
                                                           (byte)((ulong)uVar38 >> 8),
                                                           (byte)uVar34 ^ (byte)uVar38)))))));
                    puVar24 = puVar24 + 8;
                    puVar26 = puVar26 + 8;
                  } while (uVar23 != 0);
                  uVar23 = uVar29;
                  if (uVar29 != uVar28) goto LAB_00442174;
                }
                abStack_a1[1] = abStack_a1[1] | 0x80;
                abStack_a1[sVar21] = abStack_a1[sVar21] | 1;
                lVar20 = FUN_003eba50(abStack_a1 + 1,uVar4,uVar14);
                if (lVar20 == 0) goto LAB_00441e38;
                iVar8 = FUN_003fce40(uVar14,0x40,lVar10,param_5 == (void *)0x0,param_10);
                if (0 < iVar8) goto LAB_00442308;
                param_5 = (void *)0x0;
                if (iVar8 != 0) goto LAB_00441e38;
              } while( true );
            }
            while( true ) {
              iVar8 = FUN_003fc3a0(param_10,0,iVar5);
              if ((iVar8 == 0) ||
                 ((param_5 == (void *)0x0 && (iVar8 = FUN_00464f80(local_80,uVar4), iVar8 < 1))))
              goto LAB_00441e38;
              memcpy(auStack_c0,local_80,sVar21);
              memcpy(local_e0,local_80,sVar21);
              iVar8 = FUN_0042c130(local_80,sVar21,abStack_a1 + 1,0,param_4,0);
              if ((iVar8 == 0) ||
                 (iVar8 = FUN_0042c130(auStack_c0,sVar21,local_e0,0,param_4,0), iVar8 == 0))
              goto LAB_00441e38;
              abStack_a1[1] = abStack_a1[1] | 0x80;
              abStack_a1[sVar21] = abStack_a1[sVar21] | 1;
              lVar20 = FUN_003eba50(abStack_a1 + 1,uVar4,uVar14);
              if (lVar20 == 0) goto LAB_00441e38;
              iVar8 = FUN_003fce40(uVar14,0x40,lVar10,param_5 == (void *)0x0,param_10);
              if (0 < iVar8) break;
              param_5 = (void *)0x0;
              iVar5 = iVar5 + 1;
              if (iVar8 != 0) goto LAB_00441e38;
            }
            iVar5 = iVar5 + 1;
LAB_00442308:
            iVar8 = FUN_003fc3a0(param_10,2,0);
            if ((iVar8 == 0) || (iVar8 = FUN_003fc3a0(param_10,3,0), iVar8 == 0)) goto LAB_00441e38;
            iVar8 = 0;
            do {
              if ((iVar8 != 0) && (iVar6 = FUN_003fc3a0(param_10,0,iVar8), iVar6 == 0))
              goto LAB_00441e38;
              FUN_003eb9f0(uVar13,0);
              iVar6 = (int)(uVar32 / 0xa0);
              if (-1 < iVar6) {
                iVar30 = 0;
                do {
                  sVar22 = sVar21;
                  do {
                    if ((long)sVar22 < 1) break;
                    bVar1 = local_e0[sVar22 + 0x1f];
                    local_e0[sVar22 + 0x1f] = (byte)(bVar1 + 1);
                    sVar22 = sVar22 - 1;
                  } while (bVar1 + 1 >> 8 != 0);
                  iVar7 = FUN_0042c130(auStack_c0,sVar21,abStack_a1 + 1,0,param_4,0);
                  if ((((iVar7 == 0) ||
                       (lVar20 = FUN_003eba50(abStack_a1 + 1,uVar4,uVar11), lVar20 == 0)) ||
                      (iVar7 = FUN_003f2120(uVar11,uVar11,uVar4 * 8 * iVar30), iVar7 == 0)) ||
                     (iVar7 = FUN_003f0310(uVar13,uVar13,uVar11), iVar7 == 0)) goto LAB_00441e38;
                  bVar3 = iVar30 != iVar6;
                  iVar30 = iVar30 + 1;
                } while (bVar3);
              }
              iVar6 = FUN_003ec180(uVar13,uVar32);
              if (((iVar6 == 0) || (lVar20 = FUN_003eb8f0(uVar15,uVar13), lVar20 == 0)) ||
                 ((iVar6 = FUN_003f0310(uVar15,uVar15,lVar18), iVar6 == 0 ||
                  ((iVar6 = FUN_003f1f80(uVar11,uVar14), iVar6 == 0 ||
                   (iVar6 = FUN_003ed910(0,uVar16,uVar15,uVar11,lVar10), iVar6 == 0))))))
              goto LAB_00441e38;
              uVar19 = FUN_003eb200();
              iVar6 = FUN_003f06e0(uVar11,uVar16,uVar19);
              if ((iVar6 == 0) || (iVar6 = FUN_003f06e0(uVar17,uVar15,uVar11), iVar6 == 0))
              goto LAB_00441e38;
              iVar6 = FUN_003ebf70(uVar17,lVar18);
              if (-1 < iVar6) {
                iVar6 = FUN_003fce40(uVar17,0x40,lVar10,1,param_10);
                if (0 < iVar6) {
                  iVar5 = FUN_003fc3a0(param_10,2,1);
                  if (iVar5 == 0) goto LAB_00441e38;
                  uVar13 = FUN_003eb200();
                  iVar5 = FUN_003f06e0(lVar18,uVar17,uVar13);
                  if ((((iVar5 == 0) ||
                       (iVar5 = FUN_003ed910(uVar11,0,lVar18,uVar14,lVar10), iVar5 == 0)) ||
                      (iVar5 = FUN_003eb9f0(lVar18,2), iVar5 == 0)) ||
                     ((iVar5 = FUN_003ecd40(lVar9,uVar17,lVar10), iVar5 == 0 ||
                      (iVar5 = FUN_003fd860(uVar12,lVar18,uVar11,uVar17,lVar10,lVar9), iVar5 == 0)))
                     ) goto LAB_00442408;
                  uVar31 = 2;
                  goto LAB_004423bc;
                }
                if (iVar6 != 0) goto LAB_00441e38;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 != 0x1000);
            param_5 = (void *)0x0;
          } while( true );
        }
        goto LAB_00442408;
      }
    }
  }
LAB_00441e38:
  bVar3 = false;
  goto LAB_00441e3c;
  while( true ) {
    uVar13 = FUN_003eb200();
    iVar5 = FUN_003f0310(lVar18,lVar18,uVar13);
    if (iVar5 == 0) break;
    uVar31 = uVar31 + 1;
    iVar5 = FUN_003fd860(uVar12,lVar18,uVar11,uVar17,lVar10,lVar9);
    if (iVar5 == 0) break;
LAB_004423bc:
    iVar5 = FUN_003ec5b0(uVar12);
    if (iVar5 == 0) {
      iVar5 = FUN_003fc3a0(param_10,3,1);
      bVar3 = iVar5 != 0;
      if (iVar5 == 0) goto LAB_00441e3c;
      FUN_003eb520(*(undefined8 *)(param_1 + 8));
      FUN_003eb520(*(undefined8 *)(param_1 + 0x10));
      FUN_003eb520(*(undefined8 *)(param_1 + 0x18));
      uVar11 = FUN_003eb7a0(uVar17);
      *(undefined8 *)(param_1 + 8) = uVar11;
      uVar11 = FUN_003eb7a0(uVar14);
      *(undefined8 *)(param_1 + 0x10) = uVar11;
      lVar18 = FUN_003eb7a0(uVar12);
      *(long *)(param_1 + 0x18) = lVar18;
      if (((*(long *)(param_1 + 8) != 0) && (lVar18 != 0)) && (*(long *)(param_1 + 0x10) != 0)) {
        if (param_8 != (int *)0x0) {
          *param_8 = iVar8;
        }
        if (param_9 != (ulong *)0x0) {
          *param_9 = (ulong)uVar31;
        }
        if (param_7 != (void *)0x0) {
          memcpy(param_7,local_80,(long)(int)uVar4);
        }
        goto LAB_00441e3c;
      }
      break;
    }
  }
LAB_00442408:
  bVar3 = false;
LAB_00441e3c:
  FUN_003ed530(lVar10);
  FUN_003ed280(lVar10);
  FUN_003eccf0(lVar9);
  return bVar3;
}


