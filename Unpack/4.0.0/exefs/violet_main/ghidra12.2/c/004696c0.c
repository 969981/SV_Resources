/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004696c0; name: FUN_004696c0
 */


long FUN_004696c0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar2 = param_2;
  if ((param_2 == 0) && (lVar2 = FUN_003ed1c0(), lVar2 == 0)) {
    return 0;
  }
  FUN_003ed410(lVar2);
  lVar3 = FUN_003ed5c0(lVar2);
  if (lVar3 == 0) {
    uVar6 = 0x41;
    uVar7 = 0x7e;
LAB_0046988c:
    FUN_004806c0(4,0x88,uVar6,"external/openssl/crypto/rsa/rsa_crpt.c",uVar7);
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      if (((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x30), lVar4 != 0)) &&
         (lVar5 = *(long *)(param_1 + 0x38), lVar5 != 0)) {
        FUN_003ed410(lVar2);
        uVar6 = FUN_003ed5c0(lVar2);
        uVar7 = FUN_003ed5c0(lVar2);
        lVar8 = FUN_003ed5c0(lVar2);
        if (lVar8 != 0) {
          uVar9 = FUN_003eb200();
          iVar1 = FUN_003f06e0(uVar7,lVar4,uVar9);
          if (iVar1 != 0) {
            uVar9 = FUN_003eb200();
            iVar1 = FUN_003f06e0(lVar8,lVar5,uVar9);
            if ((iVar1 != 0) && (iVar1 = FUN_003f1d10(uVar6,uVar7,lVar8,lVar2), iVar1 != 0)) {
              lVar3 = FUN_003efe80(0,lVar3,uVar6,lVar2);
              FUN_003ed530(lVar2);
              if (lVar3 != 0) goto LAB_0046970c;
              goto LAB_00469874;
            }
          }
        }
        FUN_003ed530(lVar2);
      }
LAB_00469874:
      uVar6 = 0x8c;
      uVar7 = 0x85;
      goto LAB_0046988c;
    }
LAB_0046970c:
    lVar4 = FUN_003eb5b0();
    if (lVar4 != 0) {
      FUN_003ec690(lVar4,*(undefined8 *)(param_1 + 0x18),4);
      lVar5 = FUN_00469c10(0,lVar3,lVar4,lVar2,*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),
                           *(undefined8 *)(param_1 + 0x78));
      FUN_003eb520(lVar4);
      if (lVar5 == 0) {
        FUN_004806c0(4,0x88,3,"external/openssl/crypto/rsa/rsa_crpt.c",0x9b);
        FUN_003ed530(lVar2);
      }
      else {
        FUN_00469a60(lVar5);
        FUN_003ed530(lVar2);
      }
      goto joined_r0x00469908;
    }
    FUN_004806c0(4,0x88,0x41,"external/openssl/crypto/rsa/rsa_crpt.c",0x90);
  }
  lVar5 = 0;
  FUN_003ed530(lVar2);
joined_r0x00469908:
  if (lVar2 != param_2) {
    FUN_003ed280(lVar2);
  }
  if (lVar3 != *(long *)(param_1 + 0x20)) {
    FUN_003eb520(lVar3);
  }
  return lVar5;
}


