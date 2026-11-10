/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0144ed48; name: FUN_0144ed48
 */


int FUN_0144ed48(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x19);
  if (*(byte *)(param_1 + 0x19) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 != 0xff) {
      uVar1 = uVar1 - *(int *)(param_1 + 0x10);
    }
  }
  return uVar1 + *(int *)(param_1 + 0x10);
}


