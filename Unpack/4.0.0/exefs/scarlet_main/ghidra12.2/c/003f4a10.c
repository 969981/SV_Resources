/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f4a10; name: FUN_003f4a10
 */


undefined8 FUN_003f4a10(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x69;
    uVar2 = 0xf5;
  }
  else {
    if (param_2 != 0) {
      uVar1 = FUN_003f62d0();
      return uVar1;
    }
    uVar1 = 0x6b;
    uVar2 = 0xfa;
  }
  FUN_004806c0(0xe,0x6c,uVar1,"external/openssl/crypto/conf/conf_lib.c",uVar2);
  return 0;
}


