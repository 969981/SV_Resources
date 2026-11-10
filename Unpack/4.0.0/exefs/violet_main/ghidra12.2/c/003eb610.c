/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003eb610; name: FUN_003eb610
 */


long FUN_003eb610(void)

{
  long lVar1;
  
  lVar1 = FUN_00452ce0(0x18,"external/openssl/crypto/bn/bn_lib.c",0xf6);
  if (lVar1 == 0) {
    FUN_004806c0(3,0x71,0x41,"external/openssl/crypto/bn/bn_lib.c",0xf7);
    return 0;
  }
  *(undefined4 *)(lVar1 + 0x14) = 9;
  return lVar1;
}


