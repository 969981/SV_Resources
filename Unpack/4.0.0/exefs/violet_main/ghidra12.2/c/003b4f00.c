/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b4f00; name: FUN_003b4f00
 */


undefined8 FUN_003b4f00(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if (((*(byte *)(*(long *)(*(long *)(param_2 + 0xa8) + 0x238) + 0x20) >> 3 & 1) == 0) ||
     (uVar1 = FUN_00499a30(), (uVar1 >> 7 & 1) != 0)) {
    return 1;
  }
  FUN_004806c0(0x14,0x117,0x13e,"external/openssl/ssl/ssl_lib.c",0xdf2);
  return 0;
}


