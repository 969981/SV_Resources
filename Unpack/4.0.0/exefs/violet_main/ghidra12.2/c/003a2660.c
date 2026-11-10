/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a2660; name: FUN_003a2660
 */


undefined8 FUN_003a2660(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
  puVar1 = (undefined8 *)FUN_00452ce0(0x28,"external/openssl/ssl/packet.c",0x119);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004806c0(0x14,0x27a,0x41,"external/openssl/ssl/packet.c",0x11a);
    return 0;
  }
  *puVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  puVar1[2] = 0;
  puVar1[3] = uVar2;
  puVar1[1] = 0;
  return 1;
}


