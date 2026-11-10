/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00478fb0; name: FUN_00478fb0
 */


long FUN_00478fb0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar2 = FUN_0040c280();
  uVar3 = FUN_0040c210(param_1);
  uVar4 = FUN_0040d4f0();
  lVar5 = FUN_0040cf10(uVar3);
  lVar6 = FUN_003ed1c0();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar2 = 0xcb;
LAB_004791c8:
    FUN_004806c0(0x35,0x6a,0x41,"external/openssl/crypto/sm2/sm2_sign.c",uVar2);
    lVar11 = 0;
    lVar12 = 0;
  }
  else {
    FUN_003ed410(lVar6);
    uVar7 = FUN_003ed5c0(lVar6);
    uVar8 = FUN_003ed5c0(lVar6);
    uVar9 = FUN_003ed5c0(lVar6);
    lVar10 = FUN_003ed5c0(lVar6);
    if (lVar10 == 0) {
      uVar2 = 0xd5;
      goto LAB_004791c8;
    }
    lVar11 = FUN_003eb5b0();
    lVar12 = FUN_003eb5b0();
    if ((lVar11 == 0) || (lVar12 == 0)) {
      uVar2 = 0x41;
      uVar3 = 0xe1;
    }
    else {
      do {
        do {
          iVar1 = FUN_003ff740(uVar7,uVar4);
          if (iVar1 == 0) {
            uVar2 = 0x44;
            uVar3 = 0xe7;
            goto LAB_00479228;
          }
          iVar1 = FUN_0040e430(uVar3,lVar5,uVar7,0,0,lVar6);
          if (((iVar1 == 0) || (iVar1 = FUN_0040dd90(uVar3,lVar5,uVar9,0,lVar6), iVar1 == 0)) ||
             (iVar1 = FUN_003f08f0(lVar11,param_2,uVar9,uVar4,lVar6), iVar1 == 0)) {
            uVar2 = 0x44;
            uVar3 = 0xef;
            goto LAB_00479228;
          }
          iVar1 = FUN_003eb480(lVar11);
        } while (iVar1 != 0);
        iVar1 = FUN_003f0310(uVar8,lVar11,uVar7);
        if (iVar1 == 0) {
          uVar2 = 0x44;
          uVar3 = 0xf8;
          goto LAB_00479228;
        }
        iVar1 = FUN_003ebf70(uVar8,uVar4);
      } while (iVar1 == 0);
      uVar8 = FUN_003eb200();
      iVar1 = FUN_003f0310(lVar12,uVar2,uVar8);
      if (((iVar1 == 0) || (iVar1 = FUN_0040e480(uVar3,lVar12,lVar12,lVar6), iVar1 == 0)) ||
         ((iVar1 = FUN_003f0dc0(lVar10,uVar2,lVar11,uVar4,lVar6), iVar1 == 0 ||
          ((iVar1 = FUN_003f06e0(lVar10,uVar7,lVar10), iVar1 == 0 ||
           (iVar1 = FUN_003f0dc0(lVar12,lVar12,lVar10,uVar4,lVar6), iVar1 == 0)))))) {
        uVar3 = 0x104;
        uVar2 = 3;
      }
      else {
        lVar10 = FUN_00405f90();
        if (lVar10 != 0) {
          FUN_00406050(lVar10,lVar11,lVar12);
          goto LAB_00479240;
        }
        uVar2 = 0x41;
        uVar3 = 0x10a;
      }
    }
LAB_00479228:
    FUN_004806c0(0x35,0x6a,uVar2,"external/openssl/crypto/sm2/sm2_sign.c",uVar3);
  }
  FUN_003eb520(lVar11);
  FUN_003eb520(lVar12);
  lVar10 = 0;
LAB_00479240:
  FUN_003ed280(lVar6);
  FUN_0040caf0(lVar5);
  return lVar10;
}


