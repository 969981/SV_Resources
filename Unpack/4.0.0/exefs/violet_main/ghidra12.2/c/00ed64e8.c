/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ed64e8; name: FUN_00ed64e8
 */


void FUN_00ed64e8(long param_1,ulong param_2)

{
  FUN_00c5ecb4(*(undefined8 *)(param_1 + 0x30),
               *(long *)(param_1 + 0x70) + (param_2 & 0xffffffff) * 0x28);
  return;
}


