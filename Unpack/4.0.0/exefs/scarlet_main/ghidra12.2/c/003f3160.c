/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f3160; name: FUN_003f3160
 */


void FUN_003f3160(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      FUN_00453260(lVar1,*(undefined8 *)(param_1 + 0x10),"external/openssl/crypto/buffer/buffer.c",
                   0x33);
    }
    else {
      FUN_00453360(lVar1,*(undefined8 *)(param_1 + 0x10),"external/openssl/crypto/buffer/buffer.c",
                   0x31);
    }
  }
  FUN_00452f80(param_1,"external/openssl/crypto/buffer/buffer.c",0x35);
  return;
}


