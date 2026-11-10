/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00401e10; name: FUN_00401e10
 */


undefined8
FUN_00401e10(long param_1,long param_2,long *param_3,undefined8 param_4,long param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  
  if (((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    uVar8 = 0x65;
    uVar9 = 0xc1;
LAB_00401eac:
    FUN_004806c0(10,0x6b,uVar8,"external/openssl/crypto/dsa/dsa_ossl.c",uVar9);
    return 0;
  }
  iVar1 = FUN_003eb480();
  if (((iVar1 != 0) || (iVar1 = FUN_003eb480(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) ||
     (iVar1 = FUN_003eb480(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) {
    uVar9 = 199;
    uVar8 = 0x70;
    goto LAB_00401eac;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar8 = 0x6f;
    uVar9 = 0xcb;
    goto LAB_00401eac;
  }
  lVar4 = FUN_003eb5b0();
  lVar5 = FUN_003eb5b0();
  lVar11 = 0;
  if (((lVar4 != 0) && (lVar5 != 0)) &&
     ((lVar11 = param_2, param_2 != 0 || (lVar11 = FUN_003ed1c0(), lVar11 != 0)))) {
    uVar2 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x10));
    iVar1 = FUN_003f8cc0(*(undefined8 *)(param_1 + 0x10));
    iVar1 = iVar1 + 2;
    lVar6 = FUN_003eb9a0(lVar4,iVar1);
    if ((lVar6 != 0) && (lVar6 = FUN_003eb9a0(lVar5,iVar1), lVar6 != 0)) {
      if (param_5 == 0) {
        do {
          iVar3 = FUN_003ff740(lVar4,*(undefined8 *)(param_1 + 0x10));
          if (iVar3 == 0) goto LAB_00402044;
          iVar3 = FUN_003eb480(lVar4);
        } while (iVar3 != 0);
      }
      else {
        do {
          iVar3 = FUN_003ff750(lVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28)
                               ,param_5,(long)param_6,lVar11);
          if (iVar3 == 0) goto LAB_00402044;
          iVar3 = FUN_003eb480(lVar4);
        } while (iVar3 != 0);
      }
      FUN_003ec740(lVar4,4);
      FUN_003ec740(lVar5,4);
      if (((((*(byte *)(param_1 + 0x30) & 1) == 0) ||
           (lVar6 = FUN_003ed040(param_1 + 0x38,*(undefined8 *)(param_1 + 0x60),
                                 *(undefined8 *)(param_1 + 8),lVar11), lVar6 != 0)) &&
          (iVar3 = FUN_003f0310(lVar5,lVar4,*(undefined8 *)(param_1 + 0x10)), iVar3 != 0)) &&
         (iVar3 = FUN_003f0310(lVar4,lVar5,*(undefined8 *)(param_1 + 0x10)), iVar3 != 0)) {
        uVar8 = FUN_003ec150(lVar5,uVar2);
        FUN_003ec370(uVar8,lVar4,lVar5,iVar1);
        pcVar10 = *(code **)(*(long *)(param_1 + 0x50) + 0x28);
        if (pcVar10 == (code *)0x0) {
          iVar1 = FUN_003fd860(param_4,*(undefined8 *)(param_1 + 0x18),lVar4,
                               *(undefined8 *)(param_1 + 8),lVar11,*(undefined8 *)(param_1 + 0x38));
        }
        else {
          iVar1 = (*pcVar10)(param_1,param_4,*(undefined8 *)(param_1 + 0x18),lVar4,
                             *(undefined8 *)(param_1 + 8),lVar11);
        }
        if ((iVar1 != 0) &&
           (iVar1 = FUN_003ed910(0,param_4,param_4,*(undefined8 *)(param_1 + 0x10),lVar11),
           iVar1 != 0)) {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          lVar6 = FUN_003eb5b0();
          if (lVar6 != 0) {
            FUN_003ed410(lVar11);
            lVar7 = FUN_003ed5c0(lVar11);
            if (((lVar7 != 0) && (iVar1 = FUN_003eb9f0(lVar6,2), iVar1 != 0)) &&
               ((iVar1 = FUN_003f06e0(lVar7,uVar8,lVar6), iVar1 != 0 &&
                (iVar1 = FUN_003fd860(lVar6,lVar4,lVar7,uVar8,lVar11,0), iVar1 != 0)))) {
              FUN_003ed530(lVar11);
              FUN_003eb490(*param_3);
              *param_3 = lVar6;
              uVar8 = 1;
              goto joined_r0x00402068;
            }
            FUN_003eb520(lVar6);
            FUN_003ed530(lVar11);
          }
        }
      }
    }
  }
LAB_00402044:
  FUN_004806c0(10,0x6b,3,"external/openssl/crypto/dsa/dsa_ossl.c",0x123);
  uVar8 = 0;
joined_r0x00402068:
  if (lVar11 != param_2) {
    FUN_003ed280(lVar11);
  }
  FUN_003eb490(lVar4);
  FUN_003eb490(lVar5);
  return uVar8;
}


