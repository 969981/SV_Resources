/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003efe80; name: FUN_003efe80
 */


undefined8 FUN_003efe80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  int local_24;
  
  local_24 = 0;
  if (param_4 == 0) {
    param_4 = FUN_003ed1c0();
    lVar2 = param_4;
    if (param_4 == 0) {
      FUN_004806c0(3,0x6e,0x41,"external/openssl/crypto/bn/bn_gcd.c",0x20b);
      return 0;
    }
  }
  else {
    lVar2 = 0;
  }
  uVar1 = FUN_003ef640(param_1,param_2,param_3,param_4,&local_24);
  if (local_24 != 0) {
    FUN_004806c0(3,0x6e,0x6c,"external/openssl/crypto/bn/bn_gcd.c",0x212);
  }
  FUN_003ed280(lVar2);
  return uVar1;
}


