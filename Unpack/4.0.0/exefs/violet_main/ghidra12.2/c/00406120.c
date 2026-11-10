/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00406120; name: FUN_00406120
 */


undefined8 FUN_00406120(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((*(byte *)*param_1 >> 1 & 1) != 0) {
    return 1;
  }
  if (param_2 == 0) {
    lVar6 = FUN_003ed1c0();
    param_2 = lVar6;
    if (lVar6 != 0) goto LAB_00406164;
    uVar4 = 0x41;
    uVar5 = 0x1b;
  }
  else {
    lVar6 = 0;
LAB_00406164:
    iVar1 = FUN_0040d760(param_1,param_2);
    if (iVar1 == 0) {
      uVar4 = 0x76;
      uVar5 = 0x22;
    }
    else if (param_1[1] == 0) {
      uVar4 = 0x71;
      uVar5 = 0x28;
    }
    else {
      iVar1 = FUN_0040dd10(param_1,param_1[1],param_2);
      if (0 < iVar1) {
        lVar2 = FUN_0040cf10(param_1);
        if ((lVar2 != 0) && (lVar3 = FUN_0040d4f0(param_1), lVar3 != 0)) {
          iVar1 = FUN_003eb480();
          if (iVar1 == 0) {
            iVar1 = FUN_0040e430(param_1,lVar2,lVar3,0,0,param_2);
            if (iVar1 == 0) goto LAB_004061d4;
            iVar1 = FUN_0040ded0(param_1,lVar2);
            if (iVar1 != 0) {
              uVar4 = 1;
              goto LAB_00406248;
            }
            uVar4 = 0x7a;
            uVar5 = 0x3e;
          }
          else {
            uVar5 = 0x37;
            uVar4 = 0x80;
          }
          FUN_004806c0(0x10,0xaa,uVar4,"external/openssl/crypto/ec/ec_check.c",uVar5);
        }
LAB_004061d4:
        uVar4 = 0;
        goto LAB_00406248;
      }
      uVar4 = 0x6b;
      uVar5 = 0x2c;
    }
  }
  FUN_004806c0(0x10,0xaa,uVar4,"external/openssl/crypto/ec/ec_check.c",uVar5);
  uVar4 = 0;
  lVar2 = 0;
LAB_00406248:
  FUN_003ed280(lVar6);
  FUN_0040caf0(lVar2);
  return uVar4;
}


