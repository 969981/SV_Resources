/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00478b80; name: FUN_00478b80
 */


undefined8
FUN_00478b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
            undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 local_64 [4];
  
  uVar4 = FUN_0040c210(param_5);
  local_64[0] = 0;
  lVar5 = FUN_0042bbc0();
  lVar6 = FUN_003ed1c0();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar4 = 0x41;
    uVar7 = 0x2f;
  }
  else {
    uVar7 = FUN_003ed5c0(lVar6);
    uVar8 = FUN_003ed5c0(lVar6);
    uVar9 = FUN_003ed5c0(lVar6);
    uVar10 = FUN_003ed5c0(lVar6);
    uVar11 = FUN_003ed5c0(lVar6);
    uVar12 = FUN_003ed5c0(lVar6);
    lVar13 = FUN_003ed5c0(lVar6);
    if (lVar13 == 0) {
      uVar4 = 0x41;
      uVar7 = 0x3c;
    }
    else {
      iVar3 = FUN_0042bc10(lVar5,param_2);
      if (iVar3 == 0) {
        uVar7 = 0x41;
      }
      else {
        if (0x1ffe < param_4) {
          uVar4 = 0x6f;
          uVar7 = 0x49;
          goto LAB_00478f30;
        }
        local_64[0] = (undefined1)(param_4 >> 5);
        iVar3 = FUN_0042bd60(lVar5,local_64,1);
        if (iVar3 == 0) {
          uVar7 = 0x51;
        }
        else {
          local_64[0] = (undefined1)((int)param_4 << 3);
          iVar3 = FUN_0042bd60(lVar5,local_64,1);
          if (iVar3 == 0) {
            uVar7 = 0x56;
          }
          else {
            if ((param_4 == 0) || (iVar3 = FUN_0042bd60(lVar5,param_3,param_4), iVar3 != 0)) {
              iVar3 = FUN_0040d6e0(uVar4,uVar7,uVar8,uVar9,lVar6);
              if (iVar3 != 0) {
                iVar3 = FUN_003eb2b0(uVar7);
                uVar1 = iVar3 + 0xe;
                if (-1 < (int)(iVar3 + 7U)) {
                  uVar1 = iVar3 + 7U;
                }
                uVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
                lVar14 = FUN_00452ce0(uVar2,"external/openssl/crypto/sm2/sm2_sign.c",0x65);
                if (lVar14 == 0) {
                  uVar4 = 0x41;
                  uVar7 = 0x67;
                }
                else {
                  iVar3 = FUN_003ebc80(uVar8,lVar14,uVar2 & 0xffffffff);
                  if ((((-1 < iVar3) && (iVar3 = FUN_0042bd60(lVar5,lVar14,uVar2), iVar3 != 0)) &&
                      (iVar3 = FUN_003ebc80(uVar9,lVar14,uVar2 & 0xffffffff), -1 < iVar3)) &&
                     (iVar3 = FUN_0042bd60(lVar5,lVar14,uVar2), iVar3 != 0)) {
                    uVar7 = FUN_0040d4a0(uVar4);
                    iVar3 = FUN_0040dd90(uVar4,uVar7,uVar10,uVar11,lVar6);
                    if (((iVar3 != 0) &&
                        (iVar3 = FUN_003ebc80(uVar10,lVar14,uVar2 & 0xffffffff), -1 < iVar3)) &&
                       ((iVar3 = FUN_0042bd60(lVar5,lVar14,uVar2), iVar3 != 0 &&
                        ((iVar3 = FUN_003ebc80(uVar11,lVar14,uVar2 & 0xffffffff), -1 < iVar3 &&
                         (iVar3 = FUN_0042bd60(lVar5,lVar14,uVar2), iVar3 != 0)))))) {
                      uVar7 = FUN_0040c290(param_5);
                      iVar3 = FUN_0040dd90(uVar4,uVar7,uVar12,lVar13,lVar6);
                      if ((iVar3 != 0) &&
                         ((((iVar3 = FUN_003ebc80(uVar12,lVar14,uVar2 & 0xffffffff), -1 < iVar3 &&
                            (iVar3 = FUN_0042bd60(lVar5,lVar14,uVar2), iVar3 != 0)) &&
                           (iVar3 = FUN_003ebc80(lVar13,lVar14,uVar2 & 0xffffffff), -1 < iVar3)) &&
                          ((iVar3 = FUN_0042bd60(lVar5,lVar14,uVar2), iVar3 != 0 &&
                           (iVar3 = FUN_0042bd80(lVar5,param_1,0), iVar3 != 0)))))) {
                        uVar4 = 1;
                        goto LAB_00478f3c;
                      }
                    }
                  }
                  uVar4 = 0x44;
                  uVar7 = 0x7e;
                }
                FUN_004806c0(0x35,0x71,uVar4,"external/openssl/crypto/sm2/sm2_sign.c",uVar7);
                uVar4 = 0;
                goto LAB_00478f3c;
              }
              uVar4 = 0x10;
              uVar7 = 0x60;
              goto LAB_00478f30;
            }
            uVar7 = 0x5b;
          }
        }
      }
      uVar4 = 6;
    }
  }
LAB_00478f30:
  FUN_004806c0(0x35,0x71,uVar4,"external/openssl/crypto/sm2/sm2_sign.c",uVar7);
  uVar4 = 0;
  lVar14 = 0;
LAB_00478f3c:
  FUN_00452f80(lVar14,"external/openssl/crypto/sm2/sm2_sign.c",0x85);
  FUN_003ed280(lVar6);
  FUN_0042bbe0(lVar5);
  return uVar4;
}


