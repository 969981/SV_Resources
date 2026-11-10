/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00479550; name: FUN_00479550
 */


undefined8
FUN_00479550(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
            undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  local_28 = param_3;
  lVar2 = FUN_003eba50(param_1,param_2,0);
  if (lVar2 == 0) {
    FUN_004806c0(0x35,0x69,3,"external/openssl/crypto/sm2/sm2_sign.c",0x1a3);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00478fb0(param_5,lVar2);
    iVar1 = FUN_00405f80(uVar3,&local_28);
    if (-1 < iVar1) {
      *param_4 = iVar1;
      uVar4 = 1;
      goto LAB_004795e4;
    }
    FUN_004806c0(0x35,0x69,0x44,"external/openssl/crypto/sm2/sm2_sign.c",0x1ab);
  }
  uVar4 = 0xffffffff;
LAB_004795e4:
  FUN_00405ff0(uVar3);
  FUN_003eb520(lVar2);
  return uVar4;
}


