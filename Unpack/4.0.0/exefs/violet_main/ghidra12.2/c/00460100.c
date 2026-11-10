/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00460100; name: FUN_00460100
 */


long FUN_00460100(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 int param_5,long *param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_54;
  
  lVar3 = FUN_00439de0();
  if (lVar3 == 0) {
    uVar5 = 0x41;
    uVar6 = 0x21;
  }
  else {
    iVar1 = FUN_0043b920(*param_1,param_2,param_3,param_1[1],lVar3,param_8);
    if (iVar1 == 0) {
      uVar5 = 0x73;
      uVar6 = 0x29;
    }
    else {
      iVar1 = FUN_0043b650(lVar3);
      lVar4 = FUN_00452c30((long)(iVar1 + param_5),"external/openssl/crypto/pkcs12/p12_decr.c",0x2d)
      ;
      if (lVar4 == 0) {
        FUN_004806c0(0x23,0x77,0x41,"external/openssl/crypto/pkcs12/p12_decr.c",0x2f);
        goto LAB_00460294;
      }
      iVar2 = FUN_0043a2b0(lVar3,lVar4,&local_54,param_4,param_5);
      iVar1 = local_54;
      if (iVar2 == 0) {
        FUN_00452f80(lVar4,"external/openssl/crypto/pkcs12/p12_decr.c",0x34);
        uVar6 = 0x36;
        uVar5 = 6;
      }
      else {
        iVar2 = FUN_0043a5c0(lVar3,lVar4 + local_54,&local_54);
        if (iVar2 != 0) {
          if (param_7 != (int *)0x0) {
            *param_7 = local_54 + iVar1;
          }
          if (param_6 != (long *)0x0) {
            *param_6 = lVar4;
          }
          goto LAB_00460294;
        }
        FUN_00452f80(lVar4,"external/openssl/crypto/pkcs12/p12_decr.c",0x3c);
        uVar5 = 0x74;
        uVar6 = 0x3f;
      }
    }
  }
  FUN_004806c0(0x23,0x77,uVar5,"external/openssl/crypto/pkcs12/p12_decr.c",uVar6);
  lVar4 = 0;
LAB_00460294:
  FUN_00439e00(lVar3);
  return lVar4;
}


