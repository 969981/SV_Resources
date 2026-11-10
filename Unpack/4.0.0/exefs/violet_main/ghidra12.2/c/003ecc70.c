/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ecc70; name: FUN_003ecc70
 */


undefined4 * FUN_003ecc70(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00452c30(0x60,"external/openssl/crypto/bn/bn_mont.c",0xe8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_004806c0(3,0x95,0x41,"external/openssl/crypto/bn/bn_mont.c",0xe9);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  FUN_003eb5a0(puVar1 + 2);
  FUN_003eb5a0(puVar1 + 8);
  FUN_003eb5a0(puVar1 + 0xe);
  *(undefined8 *)(puVar1 + 0x14) = 0;
  puVar1[0x16] = 1;
  return puVar1;
}


