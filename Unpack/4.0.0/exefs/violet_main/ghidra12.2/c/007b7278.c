/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b7278; name: FUN_007b7278
 */


void FUN_007b7278(long param_1,long param_2)

{
  FUN_007983e0();
  memcpy((void *)(param_1 + 0xb8),(void *)(param_2 + 0xb8),0x200);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_00796828(param_1 + 0x2b8,param_2 + 0x2b8);
  return;
}


