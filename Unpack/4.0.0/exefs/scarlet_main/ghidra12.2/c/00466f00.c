/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00466f00; name: FUN_00466f00
 */


undefined8 FUN_00466f00(undefined8 *param_1,long *param_2,long *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
      lVar2 = FUN_0043c280();
      *param_2 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    else {
      FUN_0045bea0(*(undefined8 *)*param_1);
      FUN_0045bce0();
      lVar2 = FUN_0043d130();
      if (lVar2 == 0) {
        FUN_004806c0(4,0x9c,0xa6,"external/openssl/crypto/rsa/rsa_ameth.c",0x249);
        *param_2 = 0;
        return 0;
      }
      *param_2 = lVar2;
    }
    if ((undefined8 *)param_1[4] == (undefined8 *)0x0) {
      lVar2 = FUN_0043c280();
      *param_3 = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    else {
      FUN_0045bea0(*(undefined8 *)param_1[4]);
      FUN_0045bce0();
      lVar2 = FUN_0043d130();
      if (lVar2 == 0) {
        FUN_004806c0(4,0x9c,0xa6,"external/openssl/crypto/rsa/rsa_ameth.c",0x249);
        *param_3 = 0;
        return 0;
      }
      *param_3 = lVar2;
    }
    if (param_1[2] == 0) {
      *param_4 = 0x14;
      lVar2 = param_1[3];
    }
    else {
      iVar1 = FUN_003e10b0();
      *param_4 = iVar1;
      if (iVar1 < 0) {
        uVar3 = 0x96;
        uVar4 = 0x2db;
        goto LAB_00467060;
      }
      lVar2 = param_1[3];
    }
    if (lVar2 == 0) {
      return 1;
    }
    lVar2 = FUN_003e10b0();
    uVar3 = 1;
    if (lVar2 != 1) {
      uVar3 = 0x8b;
      uVar4 = 0x2e7;
LAB_00467060:
      FUN_004806c0(4,0x97,uVar3,"external/openssl/crypto/rsa/rsa_ameth.c",uVar4);
      return 0;
    }
  }
  return uVar3;
}


