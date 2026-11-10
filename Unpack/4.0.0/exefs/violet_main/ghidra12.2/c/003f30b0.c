/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f30b0; name: FUN_003f30b0
 */


long FUN_003f30b0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00452ce0(0x20,"external/openssl/crypto/buffer/buffer.c",0x23);
  if (lVar1 == 0) {
    FUN_004806c0(7,0x65,0x41,"external/openssl/crypto/buffer/buffer.c",0x25);
    return 0;
  }
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  return lVar1;
}


