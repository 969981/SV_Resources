/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00410980; name: FUN_00410980
 */


undefined8
FUN_00410980(long param_1,long param_2,long *param_3,long *param_4,long param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_1 == 0) || (lVar3 = FUN_0040c210(), lVar3 == 0)) {
    uVar10 = 0x43;
    uVar11 = 0x2f;
LAB_00410b30:
    FUN_004806c0(0x10,0xf8,uVar10,"external/openssl/crypto/ec/ecdsa_ossl.c",uVar11);
    return 0;
  }
  lVar4 = FUN_0040c280(param_1);
  if (lVar4 == 0) {
    FUN_004806c0(0x10,0xf8,0x7d,"external/openssl/crypto/ec/ecdsa_ossl.c",0x33);
    return 0;
  }
  iVar1 = FUN_0040c6a0(param_1);
  if (iVar1 == 0) {
    uVar10 = 0x9f;
    uVar11 = 0x38;
    goto LAB_00410b30;
  }
  lVar5 = param_2;
  if ((param_2 == 0) && (lVar5 = FUN_003ed1c0(), lVar5 == 0)) {
    uVar10 = 0x41;
    uVar11 = 0x3e;
    goto LAB_00410b30;
  }
  lVar6 = FUN_003eb5b0();
  lVar7 = FUN_003eb5b0();
  lVar8 = FUN_003eb5b0();
  if (((lVar6 == 0) || (lVar7 == 0)) || (lVar8 == 0)) {
    uVar10 = 0x41;
    uVar11 = 0x47;
  }
  else {
    lVar9 = FUN_0040cf10(lVar3);
    if (lVar9 != 0) {
      uVar10 = FUN_0040d4f0(lVar3);
      uVar2 = FUN_003eb2b0();
      iVar1 = FUN_003ec020(lVar6,uVar2);
      if (((iVar1 != 0) && (iVar1 = FUN_003ec020(lVar7,uVar2), iVar1 != 0)) &&
         (iVar1 = FUN_003ec020(lVar8,uVar2), iVar1 != 0)) {
        if (param_5 == 0) {
          do {
            do {
              iVar1 = FUN_003ff740(lVar6,uVar10);
              if (iVar1 == 0) {
                uVar10 = 100;
                goto LAB_00410d70;
              }
              iVar1 = FUN_003eb480(lVar6);
            } while (iVar1 != 0);
            iVar1 = FUN_0040e430(lVar3,lVar9,lVar6,0,0,lVar5);
            if (iVar1 == 0) goto LAB_00410d14;
            iVar1 = FUN_0040dd90(lVar3,lVar9,lVar8,0,lVar5);
            if (iVar1 == 0) goto LAB_00410d34;
            iVar1 = FUN_003f0870(lVar7,lVar8,uVar10,lVar5);
            if (iVar1 == 0) goto LAB_00410d50;
            iVar1 = FUN_003eb480(lVar7);
          } while (iVar1 != 0);
LAB_00410cbc:
          iVar1 = FUN_0040e480(lVar3,lVar6,lVar6,lVar5);
          if (iVar1 != 0) {
            FUN_003eb490(*param_4);
            FUN_003eb490(*param_3);
            uVar10 = 1;
            *param_4 = lVar7;
            *param_3 = lVar6;
            goto joined_r0x00410cf8;
          }
          uVar10 = 0x7d;
        }
        else {
LAB_00410a80:
          do {
            iVar1 = FUN_003ff750(lVar6,uVar10,lVar4,param_5,(long)param_6,lVar5);
            if (iVar1 == 0) {
              uVar10 = 0x5e;
LAB_00410d70:
              uVar11 = 0x9e;
              goto LAB_00410d94;
            }
            iVar1 = FUN_003eb480(lVar6);
          } while (iVar1 != 0);
          iVar1 = FUN_0040e430(lVar3,lVar9,lVar6,0,0,lVar5);
          if (iVar1 == 0) goto LAB_00410d14;
          iVar1 = FUN_0040dd90(lVar3,lVar9,lVar8,0,lVar5);
          if (iVar1 == 0) goto LAB_00410d34;
          iVar1 = FUN_003f0870(lVar7,lVar8,uVar10,lVar5);
          if (iVar1 != 0) goto code_r0x00410b08;
LAB_00410d50:
          uVar10 = 0x76;
        }
        uVar11 = 3;
        goto LAB_00410d94;
      }
      goto LAB_00410be0;
    }
    uVar11 = 0x4b;
    uVar10 = 0x10;
  }
  FUN_004806c0(0x10,0xf8,uVar10,"external/openssl/crypto/ec/ecdsa_ossl.c",uVar11);
  lVar9 = 0;
LAB_00410be0:
  FUN_003eb490(lVar6);
  FUN_003eb490(lVar7);
  uVar10 = 0;
joined_r0x00410cf8:
  if (lVar5 != param_2) {
    FUN_003ed280(lVar5);
  }
  FUN_0040caf0(lVar9);
  FUN_003eb490(lVar8);
  return uVar10;
LAB_00410d14:
  FUN_004806c0(0x10,0xf8,0x10,"external/openssl/crypto/ec/ecdsa_ossl.c",0x6c);
  goto LAB_00410be0;
LAB_00410d34:
  uVar10 = 0x71;
  uVar11 = 0x10;
LAB_00410d94:
  FUN_004806c0(0x10,0xf8,uVar11,"external/openssl/crypto/ec/ecdsa_ossl.c",uVar10);
  goto LAB_00410be0;
code_r0x00410b08:
  iVar1 = FUN_003eb480(lVar7);
  if (iVar1 == 0) goto LAB_00410cbc;
  goto LAB_00410a80;
}


