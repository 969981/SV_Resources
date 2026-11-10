/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003acda0; name: FUN_003acda0
 */


void FUN_003acda0(long param_1)

{
  long lVar1;
  
  FUN_00453260(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x270),
               *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x268),"external/openssl/ssl/s3_enc.c",
               0x13b);
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar1 + 0x270) = 0;
  *(undefined8 *)(lVar1 + 0x268) = 0;
  return;
}


