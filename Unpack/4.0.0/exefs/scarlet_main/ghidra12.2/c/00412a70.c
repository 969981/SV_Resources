/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00412a70; name: FUN_00412a70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00412a70(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                  undefined1 param_4 [16],long param_5,undefined8 param_6,uint param_7,
                  undefined1 *param_8,ulong param_9,long param_10)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
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
  long lVar27;
  
  lVar21 = param_4._8_8_;
  lVar20 = param_4._0_8_;
  lVar19 = param_3._8_8_;
  lVar18 = param_3._0_8_;
  if ((param_7 < 7) && ((1 << (ulong)(param_7 & 0x1f) & 0x54U) != 0)) {
    iVar3 = FUN_0040ded0();
    if (iVar3 != 0) {
      if (param_8 == (undefined1 *)0x0) {
        return 1;
      }
      if (param_9 == 0) {
        FUN_004806c0(0x10,0x68,100,"external/openssl/crypto/ec/ecp_oct.c",0xaf);
        return 0;
      }
      *param_8 = 0;
      return 1;
    }
    iVar3 = FUN_003eb2b0(*(undefined8 *)(param_5 + 0x40));
    uVar1 = iVar3 + 0xe;
    if (-1 < (int)(iVar3 + 7U)) {
      uVar1 = iVar3 + 7U;
    }
    lVar14 = (long)((ulong)uVar1 << 0x20) >> 0x23;
    uVar2 = lVar14 << 1 | 1;
    if (param_7 == 2) {
      uVar2 = lVar14 + 1;
    }
    if (param_8 == (undefined1 *)0x0) {
      lVar11 = 0;
      goto LAB_00412bac;
    }
    if (uVar2 <= param_9) {
      if (param_10 == 0) {
        param_10 = FUN_003ed1c0();
        lVar11 = param_10;
        if (param_10 == 0) {
          return 0;
        }
      }
      else {
        lVar11 = 0;
      }
      FUN_003ed410(param_10);
      uVar6 = FUN_003ed5c0(param_10);
      lVar5 = FUN_003ed5c0(param_10);
      if ((lVar5 != 0) && (iVar3 = FUN_0040dd90(param_5,param_6,uVar6,lVar5,param_10), iVar3 != 0))
      {
        uVar1 = (int)uVar1 >> 3;
        uVar8 = param_7;
        if (((param_7 & 0xfffffffb) == 2) && (iVar3 = FUN_003ec640(lVar5), iVar3 != 0)) {
          uVar8 = param_7 + 1;
        }
        *param_8 = (char)uVar8;
        iVar4 = FUN_003eb2b0(uVar6);
        iVar3 = iVar4 + 0xe;
        if (-1 < iVar4 + 7) {
          iVar3 = iVar4 + 7;
        }
        uVar8 = uVar1 - (iVar3 >> 3);
        if (uVar1 < uVar8) {
          uVar6 = 0xde;
        }
        else {
          uVar15 = lVar14 + 1;
          if (uVar8 == 0) {
            lVar14 = 1;
          }
          else {
            uVar13 = (ulong)(int)uVar8;
            memset(param_8 + 1,0,uVar13);
            if (uVar8 < 8) {
              lVar14 = 1;
              uVar9 = uVar13;
            }
            else {
              uVar9 = (uVar13 & 0xfffffffffffffff8) - 8;
              uVar12 = (uVar9 >> 3) + 1;
              lVar14 = _DAT_03caaf90;
              lVar17 = _UNK_03caaf98;
              if (uVar9 == 0) {
                lVar16 = 0;
                lVar22 = 0;
                lVar19 = 0;
                lVar18 = 0;
                lVar21 = 0;
                lVar20 = 0;
              }
              else {
                lVar16 = 0;
                lVar22 = 0;
                lVar19 = 0;
                lVar18 = 0;
                lVar21 = 0;
                lVar20 = 0;
                lVar23 = -(uVar12 & 0x3ffffffffffffffe);
                do {
                  lVar14 = lVar14 + 2;
                  lVar17 = lVar17 + 2;
                  lVar16 = lVar16 + 2;
                  lVar22 = lVar22 + 2;
                  lVar23 = lVar23 + 2;
                  lVar18 = lVar18 + 2;
                  lVar19 = lVar19 + 2;
                  lVar20 = lVar20 + 2;
                  lVar21 = lVar21 + 2;
                } while (lVar23 != 0);
              }
              uVar9 = uVar13 & 7;
              if ((uVar12 & 1) != 0) {
                lVar20 = lVar20 + 1;
                lVar21 = lVar21 + 1;
                lVar18 = lVar18 + 1;
                lVar19 = lVar19 + 1;
                lVar16 = lVar16 + 1;
                lVar22 = lVar22 + 1;
                lVar14 = lVar14 + 1;
                lVar17 = lVar17 + 1;
              }
              lVar14 = lVar20 + lVar18 + lVar16 + lVar14 + lVar21 + lVar19 + lVar22 + lVar17;
              if ((uVar13 & 0xfffffffffffffff8) == uVar13) goto LAB_00412d64;
            }
            do {
              lVar14 = lVar14 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
LAB_00412d64:
          iVar3 = FUN_003ebe40(uVar6,param_8 + lVar14);
          if (lVar14 + iVar3 == uVar15) {
            if ((param_7 & 0xfffffffd) == 4) {
              iVar4 = FUN_003eb2b0(lVar5);
              iVar3 = iVar4 + 0xe;
              if (-1 < iVar4 + 7) {
                iVar3 = iVar4 + 7;
              }
              uVar8 = uVar1 - (iVar3 >> 3);
              if (uVar1 < uVar8) {
                uVar6 = 0xf0;
                goto LAB_00412f14;
              }
              if (uVar8 != 0) {
                uVar12 = (ulong)(int)uVar8;
                memset(param_8 + uVar15,0,uVar12);
                uVar13 = uVar12;
                if (7 < uVar8) {
                  lVar14 = 0;
                  lVar17 = 0;
                  lVar16 = 0;
                  uVar13 = (uVar12 & 0xfffffffffffffff8) - 8;
                  uVar9 = (uVar13 >> 3) + 1;
                  if (uVar13 == 0) {
                    lVar22 = 1;
                    lVar23 = 1;
                    lVar25 = 1;
                    lVar24 = 1;
                    lVar27 = 1;
                    lVar26 = 1;
                  }
                  else {
                    lVar10 = -(uVar9 & 0x3ffffffffffffffe);
                    lVar18 = 0;
                    lVar19 = 0;
                    lVar20 = 0;
                    lVar21 = 0;
                    do {
                      lVar27 = lVar21;
                      lVar26 = lVar20;
                      lVar25 = lVar19;
                      lVar24 = lVar18;
                      lVar23 = lVar17;
                      lVar22 = lVar14;
                      lVar10 = lVar10 + 2;
                      uVar15 = uVar15 + 2;
                      lVar16 = lVar16 + 2;
                      lVar14 = lVar22 + 2;
                      lVar17 = lVar23 + 2;
                      lVar18 = lVar24 + 2;
                      lVar19 = lVar25 + 2;
                      lVar20 = lVar26 + 2;
                      lVar21 = lVar27 + 2;
                    } while (lVar10 != 0);
                    lVar22 = lVar22 + 3;
                    lVar23 = lVar23 + 3;
                    lVar24 = lVar24 + 3;
                    lVar25 = lVar25 + 3;
                    lVar26 = lVar26 + 3;
                    lVar27 = lVar27 + 3;
                  }
                  uVar13 = uVar12 & 7;
                  if ((uVar9 & 1) != 0) {
                    uVar15 = uVar15 + 1;
                    lVar16 = lVar16 + 1;
                    lVar14 = lVar22;
                    lVar17 = lVar23;
                    lVar18 = lVar24;
                    lVar19 = lVar25;
                    lVar20 = lVar26;
                    lVar21 = lVar27;
                  }
                  uVar15 = lVar20 + lVar18 + lVar14 + uVar15 + lVar21 + lVar19 + lVar17 + lVar16;
                  if ((uVar12 & 0xfffffffffffffff8) == uVar12) goto LAB_00412ed8;
                }
                do {
                  uVar15 = uVar15 + 1;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
LAB_00412ed8:
              iVar3 = FUN_003ebe40(lVar5,param_8 + uVar15);
              uVar15 = uVar15 + (long)iVar3;
            }
            if (uVar15 == uVar2) {
              FUN_003ed530(param_10);
LAB_00412bac:
              FUN_003ed280(lVar11);
              return uVar2;
            }
            uVar6 = 0xfc;
          }
          else {
            uVar6 = 0xe8;
          }
        }
LAB_00412f14:
        FUN_004806c0(0x10,0x68,0x44,"external/openssl/crypto/ec/ecp_oct.c",uVar6);
      }
      FUN_003ed530(param_10);
      goto LAB_00412b50;
    }
    uVar6 = 100;
    uVar7 = 0xc0;
  }
  else {
    uVar7 = 0xa7;
    uVar6 = 0x68;
  }
  FUN_004806c0(0x10,0x68,uVar6,"external/openssl/crypto/ec/ecp_oct.c",uVar7);
  lVar11 = 0;
LAB_00412b50:
  FUN_003ed280(lVar11);
  return 0;
}


