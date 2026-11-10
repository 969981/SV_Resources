/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ed220; name: FUN_003ed220
 */


undefined8 * FUN_003ed220(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00452ce0(0x40,"external/openssl/crypto/bn/bn_ctx.c",0x8a);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004806c0(3,0x6a,0x41,"external/openssl/crypto/bn/bn_ctx.c",0x8b);
    return (undefined8 *)0x0;
  }
  *(undefined4 *)((long)puVar1 + 0x3c) = 8;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  return puVar1;
}


