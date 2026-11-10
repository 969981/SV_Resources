/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040d5d0; name: FUN_0040d5d0
 */


size_t FUN_0040d5d0(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  size_t sVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x30);
  FUN_00452f80(*puVar2,"external/openssl/crypto/ec/ec_lib.c",0x1e1);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  sVar1 = 1;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    __dest = (void *)FUN_00452c30(param_3,"external/openssl/crypto/ec/ec_lib.c",0x1e8);
    *puVar2 = __dest;
    if (__dest == (void *)0x0) {
      FUN_004806c0(0x10,0x11e,0x41,"external/openssl/crypto/ec/ec_lib.c",0x1e9);
      return 0;
    }
    memcpy(__dest,param_2,param_3);
    *(size_t *)(param_1 + 0x38) = param_3;
    sVar1 = param_3;
  }
  return sVar1;
}


