/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e3820; name: FUN_003e3820
 */


int FUN_003e3820(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_1;
  if ((param_2 == (long *)0x0) || (*param_2 != 0)) {
    iVar1 = FUN_003e3930(&local_38,param_2,param_3,0xffffffff,param_4);
  }
  else {
    iVar1 = FUN_003e3930(&local_38,0,param_3,0xffffffff,param_4);
    if (0 < iVar1) {
      lVar2 = FUN_00452c30(iVar1,"external/openssl/crypto/asn1/tasn_enc.c",0x40);
      if (lVar2 == 0) {
        FUN_004806c0(0xd,0x76,0x41,"external/openssl/crypto/asn1/tasn_enc.c",0x41);
        iVar1 = -1;
      }
      else {
        local_40 = lVar2;
        FUN_003e3930(&local_38,&local_40,param_3,0xffffffff,param_4);
        *param_2 = lVar2;
      }
    }
  }
  return iVar1;
}


