/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00479610; name: FUN_00479610
 */


undefined4
FUN_00479610(undefined8 param_1,undefined4 param_2,void *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *local_50;
  void *local_48;
  long local_38;
  
  local_50 = (void *)0x0;
  local_48 = param_3;
  local_38 = FUN_00405f90();
  if (local_38 == 0) {
    uVar4 = 0x41;
    uVar5 = 0x1c4;
LAB_004796d8:
    FUN_004806c0(0x35,0x6c,uVar4,"external/openssl/crypto/sm2/sm2_sign.c",uVar5);
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_00405f70(&local_38,&local_48,(long)param_4);
    if (lVar3 == 0) {
      uVar4 = 0x68;
      uVar5 = 0x1c8;
      goto LAB_004796d8;
    }
    iVar1 = FUN_00405f80(local_38,&local_50);
    if ((iVar1 != param_4) || (iVar1 = memcmp(param_3,local_50,(long)param_4), iVar1 != 0)) {
      uVar4 = 0x68;
      uVar5 = 0x1ce;
      goto LAB_004796d8;
    }
    lVar3 = FUN_003eba50(param_1,param_2,0);
    if (lVar3 != 0) {
      uVar2 = FUN_004792d0(param_5,local_38,lVar3);
      goto LAB_004796e4;
    }
    FUN_004806c0(0x35,0x6c,3,"external/openssl/crypto/sm2/sm2_sign.c",0x1d4);
  }
  uVar2 = 0xffffffff;
LAB_004796e4:
  FUN_00452f80(local_50,"external/openssl/crypto/sm2/sm2_sign.c",0x1db);
  FUN_003eb520(lVar3);
  FUN_00405ff0(local_38);
  return uVar2;
}


