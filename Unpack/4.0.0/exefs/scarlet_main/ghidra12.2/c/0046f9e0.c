/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0046f9e0; name: FUN_0046f9e0
 */


bool FUN_0046f9e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 int *param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  long local_38;
  
  uStack_54 = 4;
  local_58 = param_3;
  local_50 = param_2;
  iVar1 = FUN_003e4fe0(&local_58,0);
  iVar2 = FUN_00469640(param_6);
  if (iVar2 + -0xb < iVar1) {
    uVar5 = 0x22;
    uVar4 = 0x70;
  }
  else {
    lVar3 = FUN_00452c30(iVar2 + 1,"external/openssl/crypto/rsa/rsa_saos.c",0x25);
    if (lVar3 != 0) {
      local_38 = lVar3;
      FUN_003e4fe0(&local_58,&local_38);
      iVar1 = FUN_00469680(iVar1,lVar3,param_4,param_6,1);
      if (0 < iVar1) {
        *param_5 = iVar1;
      }
      FUN_00453260(lVar3,iVar2 + 1,"external/openssl/crypto/rsa/rsa_saos.c",0x32);
      return 0 < iVar1;
    }
    uVar4 = 0x41;
    uVar5 = 0x27;
  }
  FUN_004806c0(4,0x76,uVar4,"external/openssl/crypto/rsa/rsa_saos.c",uVar5);
  return false;
}


