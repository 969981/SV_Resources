/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040fdb0; name: FUN_0040fdb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0040fdb0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                  undefined1 param_4 [16],long *param_5,undefined8 param_6,uint param_7,
                  char *param_8,ulong param_9,long param_10)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  lVar20 = param_4._8_8_;
  lVar19 = param_4._0_8_;
  lVar18 = param_3._8_8_;
  lVar17 = param_3._0_8_;
  if ((param_7 < 7) && ((1 << (ulong)(param_7 & 0x1f) & 0x54U) != 0)) {
    iVar4 = FUN_0040ded0();
    if (iVar4 != 0) {
      if (param_8 == (char *)0x0) {
        return 1;
      }
      if (param_9 == 0) {
        FUN_004806c0(0x10,0xa1,100,"external/openssl/crypto/ec/ec2_oct.c",0x86);
        return 0;
      }
      *param_8 = '\0';
      return 1;
    }
    iVar4 = FUN_0040d720(param_5);
    uVar1 = iVar4 + 0xe;
    if (-1 < (int)(iVar4 + 7U)) {
      uVar1 = iVar4 + 7U;
    }
    lVar12 = (long)((ulong)uVar1 << 0x20) >> 0x23;
    uVar2 = lVar12 << 1 | 1;
    if (param_7 == 2) {
      uVar2 = lVar12 + 1;
    }
    if (param_8 == (char *)0x0) {
      lVar6 = 0;
      goto LAB_0040fecc;
    }
    if (uVar2 <= param_9) {
      if (param_10 == 0) {
        lVar6 = FUN_003ed1c0();
        param_10 = lVar6;
        if (lVar6 == 0) {
          return 0;
        }
      }
      else {
        lVar6 = 0;
      }
      FUN_003ed410(param_10);
      uVar8 = FUN_003ed5c0(param_10);
      uVar9 = FUN_003ed5c0(param_10);
      lVar7 = FUN_003ed5c0(param_10);
      if ((lVar7 != 0) && (iVar4 = FUN_0040dd90(param_5,param_6,uVar8,uVar9,param_10), iVar4 != 0))
      {
        *param_8 = (char)param_7;
        if ((param_7 != 4) && (iVar4 = FUN_003eb480(uVar8), iVar4 == 0)) {
          iVar4 = (**(code **)(*param_5 + 0x118))(param_5,lVar7,uVar9,uVar8,param_10);
          if (iVar4 == 0) goto LAB_00410288;
          iVar4 = FUN_003ec640(lVar7);
          if (iVar4 != 0) {
            *param_8 = *param_8 + '\x01';
          }
        }
        uVar1 = (int)uVar1 >> 3;
        iVar5 = FUN_003eb2b0(uVar8);
        iVar4 = iVar5 + 0xe;
        if (-1 < iVar5 + 7) {
          iVar4 = iVar5 + 7;
        }
        uVar3 = uVar1 - (iVar4 >> 3);
        if (uVar1 < uVar3) {
          uVar8 = 0xb8;
        }
        else {
          uVar15 = lVar12 + 1;
          if (uVar3 == 0) {
            lVar12 = 1;
          }
          else {
            uVar14 = (ulong)(int)uVar3;
            memset(param_8 + 1,0,uVar14);
            if (uVar3 < 8) {
              lVar12 = 1;
              uVar10 = uVar14;
            }
            else {
              uVar10 = (uVar14 & 0xfffffffffffffff8) - 8;
              uVar13 = (uVar10 >> 3) + 1;
              lVar12 = _DAT_03caaf90;
              lVar7 = _UNK_03caaf98;
              if (uVar10 == 0) {
                lVar16 = 0;
                lVar21 = 0;
                lVar18 = 0;
                lVar17 = 0;
                lVar20 = 0;
                lVar19 = 0;
              }
              else {
                lVar16 = 0;
                lVar21 = 0;
                lVar18 = 0;
                lVar17 = 0;
                lVar20 = 0;
                lVar19 = 0;
                lVar22 = -(uVar13 & 0x3ffffffffffffffe);
                do {
                  lVar12 = lVar12 + 2;
                  lVar7 = lVar7 + 2;
                  lVar16 = lVar16 + 2;
                  lVar21 = lVar21 + 2;
                  lVar22 = lVar22 + 2;
                  lVar17 = lVar17 + 2;
                  lVar18 = lVar18 + 2;
                  lVar19 = lVar19 + 2;
                  lVar20 = lVar20 + 2;
                } while (lVar22 != 0);
              }
              uVar10 = uVar14 & 7;
              if ((uVar13 & 1) != 0) {
                lVar19 = lVar19 + 1;
                lVar20 = lVar20 + 1;
                lVar17 = lVar17 + 1;
                lVar18 = lVar18 + 1;
                lVar16 = lVar16 + 1;
                lVar21 = lVar21 + 1;
                lVar12 = lVar12 + 1;
                lVar7 = lVar7 + 1;
              }
              lVar12 = lVar19 + lVar17 + lVar16 + lVar12 + lVar20 + lVar18 + lVar21 + lVar7;
              if ((uVar14 & 0xfffffffffffffff8) == uVar14) goto LAB_004100dc;
            }
            do {
              lVar12 = lVar12 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
LAB_004100dc:
          iVar4 = FUN_003ebe40(uVar8,param_8 + lVar12);
          if (lVar12 + iVar4 == uVar15) {
            if ((param_7 & 0xfffffffd) == 4) {
              iVar5 = FUN_003eb2b0(uVar9);
              iVar4 = iVar5 + 0xe;
              if (-1 < iVar5 + 7) {
                iVar4 = iVar5 + 7;
              }
              uVar3 = uVar1 - (iVar4 >> 3);
              if (uVar1 < uVar3) {
                uVar8 = 0xca;
                goto LAB_00410280;
              }
              if (uVar3 != 0) {
                uVar13 = (ulong)(int)uVar3;
                memset(param_8 + uVar15,0,uVar13);
                uVar14 = uVar13;
                if (7 < uVar3) {
                  lVar12 = 0;
                  lVar7 = 0;
                  lVar16 = 0;
                  uVar14 = (uVar13 & 0xfffffffffffffff8) - 8;
                  uVar10 = (uVar14 >> 3) + 1;
                  if (uVar14 == 0) {
                    lVar21 = 1;
                    lVar22 = 1;
                    lVar24 = 1;
                    lVar23 = 1;
                    lVar26 = 1;
                    lVar25 = 1;
                  }
                  else {
                    lVar11 = -(uVar10 & 0x3ffffffffffffffe);
                    lVar17 = 0;
                    lVar18 = 0;
                    lVar19 = 0;
                    lVar20 = 0;
                    do {
                      lVar26 = lVar20;
                      lVar25 = lVar19;
                      lVar24 = lVar18;
                      lVar23 = lVar17;
                      lVar22 = lVar7;
                      lVar21 = lVar12;
                      lVar11 = lVar11 + 2;
                      uVar15 = uVar15 + 2;
                      lVar16 = lVar16 + 2;
                      lVar12 = lVar21 + 2;
                      lVar7 = lVar22 + 2;
                      lVar17 = lVar23 + 2;
                      lVar18 = lVar24 + 2;
                      lVar19 = lVar25 + 2;
                      lVar20 = lVar26 + 2;
                    } while (lVar11 != 0);
                    lVar21 = lVar21 + 3;
                    lVar22 = lVar22 + 3;
                    lVar23 = lVar23 + 3;
                    lVar24 = lVar24 + 3;
                    lVar25 = lVar25 + 3;
                    lVar26 = lVar26 + 3;
                  }
                  uVar14 = uVar13 & 7;
                  if ((uVar10 & 1) != 0) {
                    uVar15 = uVar15 + 1;
                    lVar16 = lVar16 + 1;
                    lVar12 = lVar21;
                    lVar7 = lVar22;
                    lVar17 = lVar23;
                    lVar18 = lVar24;
                    lVar19 = lVar25;
                    lVar20 = lVar26;
                  }
                  uVar15 = lVar19 + lVar17 + lVar12 + uVar15 + lVar20 + lVar18 + lVar7 + lVar16;
                  if ((uVar13 & 0xfffffffffffffff8) == uVar13) goto LAB_00410244;
                }
                do {
                  uVar15 = uVar15 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
LAB_00410244:
              iVar4 = FUN_003ebe40(uVar9,param_8 + uVar15);
              uVar15 = uVar15 + (long)iVar4;
            }
            if (uVar15 == uVar2) {
              FUN_003ed530(param_10);
LAB_0040fecc:
              FUN_003ed280(lVar6);
              return uVar2;
            }
            uVar8 = 0xd6;
          }
          else {
            uVar8 = 0xc2;
          }
        }
LAB_00410280:
        FUN_004806c0(0x10,0xa1,0x44,"external/openssl/crypto/ec/ec2_oct.c",uVar8);
      }
LAB_00410288:
      FUN_003ed530(param_10);
      goto LAB_0040fe90;
    }
    uVar8 = 100;
    uVar9 = 0x97;
  }
  else {
    uVar8 = 0x68;
    uVar9 = 0x7e;
  }
  FUN_004806c0(0x10,0xa1,uVar8,"external/openssl/crypto/ec/ec2_oct.c",uVar9);
  lVar6 = 0;
LAB_0040fe90:
  FUN_003ed280(lVar6);
  return 0;
}


