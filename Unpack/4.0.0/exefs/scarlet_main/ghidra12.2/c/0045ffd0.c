/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045ffd0; name: FUN_0045ffd0
 */


int FUN_0045ffd0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                undefined8 param_9)

{
  int iVar1;
  long lVar2;
  int local_44;
  undefined8 local_38;
  
  if (param_1 == 0) {
    local_38 = 0;
    local_44 = 0;
  }
  else {
    lVar2 = FUN_004603a0(param_1,param_2,&local_38,&local_44);
    if (lVar2 == 0) {
      FUN_004806c0(0x23,0x74,0x41,"external/openssl/crypto/pkcs12/p12_key.c",0x41);
      return 0;
    }
  }
  iVar1 = FUN_0045fab0(local_38,local_44,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (iVar1 < 1) {
    return 0;
  }
  FUN_00453260(local_38,(long)local_44,"external/openssl/crypto/pkcs12/p12_key.c",0x48);
  return iVar1;
}


