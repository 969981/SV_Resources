/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004424d0; name: FUN_004424d0
 */


undefined8
FUN_004424d0(long param_1,ulong param_2,ulong param_3,long param_4,void *param_5,size_t param_6,
            int param_7,void *param_8,int *param_9,ulong *param_10,undefined8 param_11)

{
  byte *__s;
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  void *__dest;
  void *__dest_00;
  uint uVar28;
  size_t __n;
  int local_148;
  byte local_a0 [64];
  
  lVar12 = FUN_0042bbc0();
  if (lVar12 == 0) {
LAB_0044255c:
    lVar14 = 0;
    lVar15 = 0;
    __dest_00 = (void *)0x0;
    __dest = (void *)0x0;
  }
  else {
    if (param_2 <= param_3) {
      FUN_004806c0(10,0x7e,0x70,"external/openssl/crypto/dsa/dsa_gen.c",0x14b);
      goto LAB_0044255c;
    }
    if (param_4 == 0) {
      if (param_3 == 0xe0) {
        param_4 = FUN_0043c290();
      }
      else if (param_3 == 0xa0) {
        param_4 = FUN_0043c280();
      }
      else {
        param_4 = FUN_0043c2a0();
      }
    }
    uVar13 = FUN_0043b720(param_4);
    iVar8 = (int)uVar13;
    if (((*(long *)(param_1 + 8) == 0) || (-1 < param_7)) || (*(long *)(param_1 + 0x10) == 0)) {
      __n = (long)iVar8;
      if (param_6 != 0) {
        __n = param_6;
      }
      __dest_00 = (void *)FUN_00452c30(__n,"external/openssl/crypto/dsa/dsa_gen.c",0x15e);
      __dest = param_8;
      if (param_8 == (void *)0x0) {
        __dest = (void *)FUN_00452c30(__n,"external/openssl/crypto/dsa/dsa_gen.c",0x163);
      }
      lVar14 = 0;
      uVar22 = 0xffffffff;
      if ((__dest_00 == (void *)0x0) || (__dest == (void *)0x0)) {
        lVar15 = 0;
        goto LAB_00442570;
      }
      if (param_5 != (void *)0x0) {
        memcpy(__dest_00,param_5,__n);
      }
    }
    else {
      __dest = (void *)0x0;
      __dest_00 = (void *)0x0;
      __n = param_6;
    }
    lVar14 = FUN_003ed1c0();
    if ((lVar14 == 0) || (lVar15 = FUN_003ecc70(), lVar15 == 0)) {
      lVar15 = 0;
    }
    else {
      FUN_003ed410(lVar14);
      uVar16 = FUN_003ed5c0(lVar14);
      uVar17 = FUN_003ed5c0(lVar14);
      uVar18 = FUN_003ed5c0(lVar14);
      uVar19 = FUN_003ed5c0(lVar14);
      uVar20 = FUN_003ed5c0(lVar14);
      lVar21 = FUN_003ed5c0(lVar14);
      if (lVar21 != 0) {
        lVar25 = *(long *)(param_1 + 8);
        if ((lVar25 == 0) || (lVar26 = *(long *)(param_1 + 0x10), lVar26 == 0)) {
          lVar25 = FUN_003ed5c0(lVar14);
          lVar26 = FUN_003ed5c0(lVar14);
          if (lVar26 != 0) {
            uVar22 = FUN_003eb200();
            uVar27 = param_2 - 1;
            iVar9 = FUN_003f2120(lVar21,uVar22,uVar27 & 0xffffffff);
            if (iVar9 != 0) {
              __s = local_a0 + iVar8;
              param_3 = param_3 >> 3;
              iVar9 = (int)param_3;
              pbVar2 = __s + -(long)iVar9;
              if (iVar8 <= iVar9) {
                pbVar2 = local_a0;
              }
              iVar5 = iVar9 + -1;
              iVar3 = iVar8 * 8;
              iVar4 = (int)param_2 * 4;
              if (iVar4 < 2) {
                iVar4 = 1;
              }
              uVar22 = 0xffffffff;
              iVar6 = 0;
              if ((long)iVar3 != 0) {
                iVar6 = (int)(uVar27 / (ulong)(long)iVar3);
              }
              do {
                if (param_5 == (void *)0x0) {
                  while( true ) {
                    iVar10 = FUN_003fc3a0(param_11,0);
                    if (((iVar10 == 0) ||
                        (iVar10 = FUN_00464f80(__dest_00,__n & 0xffffffff), iVar10 < 1)) ||
                       (iVar10 = FUN_0042c130(__dest_00,__n,local_a0,0,param_4,0), iVar10 == 0))
                    goto LAB_00442570;
                    if (iVar8 < iVar9) {
                      memset(__s,0,(long)(iVar9 - iVar8));
                    }
                    *pbVar2 = *pbVar2 | 0x80;
                    pbVar2[iVar5] = pbVar2[iVar5] | 1;
                    lVar24 = FUN_003eba50(pbVar2,param_3,lVar26);
                    if (lVar24 == 0) goto LAB_00442570;
                    iVar10 = FUN_003fce40(lVar26,0x40,lVar14,0,param_11);
                    if (0 < iVar10) break;
                    if (iVar10 != 0) goto LAB_00442570;
                  }
                }
                else {
                  iVar10 = FUN_003fc3a0(param_11,0);
                  if ((iVar10 == 0) ||
                     (iVar10 = FUN_0042c130(__dest_00,__n,local_a0,0,param_4,0), iVar10 == 0))
                  goto LAB_00442570;
                  if (iVar8 < iVar9) {
                    memset(__s,0,(long)(iVar9 - iVar8));
                  }
                  *pbVar2 = *pbVar2 | 0x80;
                  pbVar2[iVar5] = pbVar2[iVar5] | 1;
                  lVar24 = FUN_003eba50(pbVar2,param_3,lVar26);
                  if (lVar24 == 0) goto LAB_00442570;
                  iVar10 = FUN_003fce40(lVar26,0x40,lVar14,param_5 != (void *)0x0,param_11);
                  if (iVar10 < 1) {
                    if (iVar10 != 0) goto LAB_0044256c;
                    FUN_004806c0(10,0x7e,0x71,"external/openssl/crypto/dsa/dsa_gen.c",0x1b4);
                    uVar22 = 0;
                    goto LAB_00442570;
                  }
                }
                if (param_8 != (void *)0x0) {
                  memcpy(param_8,__dest_00,__n);
                }
                iVar10 = FUN_003fc3a0(param_11,2,0);
                if ((iVar10 == 0) || (iVar10 = FUN_003fc3a0(param_11,3,0), iVar10 == 0))
                goto LAB_00442570;
                local_148 = 0;
                do {
                  if ((local_148 != 0) && (iVar10 = FUN_003fc3a0(param_11,0,local_148), iVar10 == 0)
                     ) goto LAB_00442570;
                  FUN_003eb9f0(uVar18,0);
                  if (-1 < iVar6) {
                    iVar10 = 0;
                    uVar28 = (uint)__n;
LAB_00442994:
                    do {
                      uVar28 = uVar28 - 1;
                      if (-1 < (int)uVar28) {
                        uVar1 = *(byte *)((long)__dest_00 + (ulong)uVar28) + 1;
                        *(char *)((long)__dest_00 + (ulong)uVar28) = (char)uVar1;
                        if (uVar1 >> 8 != 0) goto LAB_00442994;
                      }
                      iVar11 = FUN_0042c130(__dest_00,__n,local_a0,0,param_4,0);
                      if ((((iVar11 == 0) ||
                           (lVar24 = FUN_003eba50(local_a0,uVar13,uVar16), lVar24 == 0)) ||
                          (iVar11 = FUN_003f2120(uVar16,uVar16,iVar10 * iVar3), iVar11 == 0)) ||
                         (iVar11 = FUN_003f0310(uVar18,uVar18,uVar16), iVar11 == 0))
                      goto LAB_00442570;
                      bVar7 = iVar10 != iVar6;
                      iVar10 = iVar10 + 1;
                      uVar28 = (uint)__n;
                    } while (bVar7);
                  }
                  iVar10 = FUN_003ec180(uVar18,uVar27);
                  if (((iVar10 == 0) || (lVar24 = FUN_003eb8f0(uVar19,uVar18), lVar24 == 0)) ||
                     ((iVar10 = FUN_003f0310(uVar19,uVar19,lVar21), iVar10 == 0 ||
                      ((iVar10 = FUN_003f1f80(uVar16,lVar26), iVar10 == 0 ||
                       (iVar10 = FUN_003ed910(0,uVar20,uVar19,uVar16,lVar14), iVar10 == 0))))))
                  goto LAB_00442570;
                  uVar23 = FUN_003eb200();
                  iVar10 = FUN_003f06e0(uVar16,uVar20,uVar23);
                  if ((iVar10 == 0) || (iVar10 = FUN_003f06e0(lVar25,uVar19,uVar16), iVar10 == 0))
                  goto LAB_00442570;
                  iVar10 = FUN_003ebf70(lVar25,lVar21);
                  if (-1 < iVar10) {
                    iVar10 = FUN_003fce40(lVar25,0x40,lVar14,1,param_11);
                    if (0 < iVar10) {
                      iVar8 = FUN_003fc3a0(param_11,2,1);
                      if (iVar8 != 0) goto LAB_00442744;
                      goto LAB_0044256c;
                    }
                    if (iVar10 != 0) goto LAB_00442570;
                  }
                  local_148 = local_148 + 1;
                } while (local_148 != iVar4);
              } while (param_5 == (void *)0x0);
              FUN_004806c0(10,0x7e,0x70,"external/openssl/crypto/dsa/dsa_gen.c",0x20d);
              uVar22 = 0;
              goto LAB_00442570;
            }
          }
        }
        else {
          if (-1 < param_7) {
            memcpy(__dest,__dest_00,__n);
          }
          local_148 = 0;
LAB_00442744:
          uVar22 = FUN_003eb200();
          iVar8 = FUN_003f06e0(lVar21,lVar25,uVar22);
          if ((iVar8 != 0) && (iVar8 = FUN_003ed910(uVar16,0,lVar21,lVar26,lVar14), iVar8 != 0)) {
            if (param_7 < 0) {
              uVar28 = 2;
              iVar8 = FUN_003eb9f0(lVar21,2);
              if (iVar8 == 0) goto LAB_0044256c;
            }
            else {
              uVar28 = 1;
            }
            iVar8 = FUN_003ecd40(lVar15,lVar25,lVar14);
            if (iVar8 != 0) {
              if (-1 < param_7) {
                uVar22 = 0xffffffff;
                do {
                  local_a0[0] = (byte)param_7;
                  local_a0[2] = (byte)uVar28;
                  local_a0[1] = (byte)(uVar28 >> 8);
                  iVar8 = FUN_0042bc40(lVar12,param_4,0);
                  if ((((iVar8 == 0) || (iVar8 = FUN_0042bd60(lVar12,__dest,__n), iVar8 == 0)) ||
                      (iVar8 = FUN_0042bd60(lVar12,&DAT_03cf7011,4), iVar8 == 0)) ||
                     (((iVar8 = FUN_0042bd60(lVar12,local_a0,3), iVar8 == 0 ||
                       (iVar8 = FUN_0042be20(lVar12,local_a0,0), iVar8 == 0)) ||
                      ((lVar24 = FUN_003eba50(local_a0,uVar13,lVar21), lVar24 == 0 ||
                       (iVar8 = FUN_003fd860(uVar17,lVar21,uVar16,lVar25,lVar14,lVar15), iVar8 == 0)
                       ))))) break;
                  iVar8 = FUN_003ec5b0(uVar17);
                  if (iVar8 == 0) goto LAB_00442d9c;
                  if (param_7 < 0) {
                    uVar18 = FUN_003eb200();
                    iVar8 = FUN_003f0310(lVar21,lVar21,uVar18);
                    if (iVar8 == 0) break;
                  }
                  uVar28 = uVar28 + 1;
                } while (uVar28 != 0x10000);
                goto LAB_00442570;
              }
              iVar8 = FUN_003fd860(uVar17,lVar21,uVar16,lVar25,lVar14,lVar15);
              if (iVar8 != 0) {
                uVar22 = 0xffffffff;
                do {
                  iVar8 = FUN_003ec5b0(uVar17);
                  if (iVar8 == 0) goto LAB_00442d9c;
                  if (param_7 < 0) {
                    uVar13 = FUN_003eb200();
                    iVar8 = FUN_003f0310(lVar21,lVar21,uVar13);
                    if (iVar8 == 0) break;
                  }
                  uVar28 = uVar28 + 1;
                  iVar8 = FUN_003fd860(uVar17,lVar21,uVar16,lVar25,lVar14,lVar15);
                } while (iVar8 != 0);
                goto LAB_00442570;
              }
            }
          }
        }
      }
    }
  }
LAB_0044256c:
  uVar22 = 0xffffffff;
LAB_00442570:
  FUN_00452f80(__dest_00,"external/openssl/crypto/dsa/dsa_gen.c",0x25e);
  if (__dest != param_8) {
    FUN_00452f80(__dest,"external/openssl/crypto/dsa/dsa_gen.c",0x260);
  }
  FUN_003ed530(lVar14);
  FUN_003ed280(lVar14);
  FUN_003eccf0(lVar15);
  FUN_0042bbe0(lVar12);
  return uVar22;
LAB_00442d9c:
  iVar8 = FUN_003fc3a0(param_11,3,1);
  if (iVar8 != 0) {
    if (lVar25 != *(long *)(param_1 + 8)) {
      FUN_003eb520();
      uVar13 = FUN_003eb7a0(lVar25);
      *(undefined8 *)(param_1 + 8) = uVar13;
    }
    if (lVar26 != *(long *)(param_1 + 0x10)) {
      FUN_003eb520();
      uVar13 = FUN_003eb7a0(lVar26);
      *(undefined8 *)(param_1 + 0x10) = uVar13;
    }
    FUN_003eb520(*(undefined8 *)(param_1 + 0x18));
    lVar21 = FUN_003eb7a0(uVar17);
    *(long *)(param_1 + 0x18) = lVar21;
    if (*(long *)(param_1 + 8) != 0) {
      uVar22 = 0xffffffff;
      if ((lVar21 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
        if (param_9 != (int *)0x0) {
          *param_9 = local_148;
        }
        if (param_10 != (ulong *)0x0) {
          *param_10 = (ulong)uVar28;
        }
        uVar22 = 1;
      }
      goto LAB_00442570;
    }
  }
  goto LAB_0044256c;
}


