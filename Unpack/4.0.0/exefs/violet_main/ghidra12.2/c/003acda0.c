/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


