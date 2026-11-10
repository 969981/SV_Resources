/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040c570; name: FUN_0040c570
 */


long FUN_0040c570(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return 0;
  }
  lVar5 = **(long **)(param_1 + 0x18);
  if (lVar5 != 0) {
    pcVar6 = *(code **)(lVar5 + 0x140);
    if (pcVar6 == (code *)0x0) {
      uVar3 = 0x42;
      uVar4 = 0x263;
      uVar2 = 0x100;
    }
    else {
      lVar5 = (*pcVar6)(param_1,0,0);
      if (lVar5 == 0) {
        return 0;
      }
      lVar1 = FUN_00452c30(lVar5,"external/openssl/crypto/ec/ec_key.c",0x2a4);
      if (lVar1 != 0) {
        if ((*(long **)(param_1 + 0x18) != (long *)0x0) &&
           (lVar7 = **(long **)(param_1 + 0x18), lVar7 != 0)) {
          pcVar6 = *(code **)(lVar7 + 0x140);
          if (pcVar6 == (code *)0x0) {
            FUN_004806c0(0x10,0x100,0x42,"external/openssl/crypto/ec/ec_key.c",0x263);
          }
          else {
            lVar5 = (*pcVar6)(param_1,lVar1,lVar5);
            if (lVar5 != 0) {
              *param_2 = lVar1;
              return lVar5;
            }
          }
        }
        FUN_00452f80(lVar1,"external/openssl/crypto/ec/ec_key.c",0x2aa);
        return 0;
      }
      uVar2 = 0x117;
      uVar3 = 0x41;
      uVar4 = 0x2a5;
    }
    FUN_004806c0(0x10,uVar2,uVar3,"external/openssl/crypto/ec/ec_key.c",uVar4);
  }
  return 0;
}


