/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dede8; name: FUN_027dede8
 */


void FUN_027dede8(long param_1,long param_2)

{
  FUN_01d0e1a8();
  FUN_01d0e1a8(param_1 + 0x20,param_2 + 0x20);
  FUN_027bbf28(param_1 + 0x40,param_2 + 0x40);
  FUN_01d0e1a8(param_1 + 0x48,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_01d0e1a8(param_1 + 0x70,param_2 + 0x70);
  return;
}


