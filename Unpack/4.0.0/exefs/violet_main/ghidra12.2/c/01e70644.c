/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e70644; name: FUN_01e70644
 */


undefined2 FUN_01e70644(long param_1,ushort param_2)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 0x12) && (*(long *)(param_1 + 0x40) != 0)) {
    uVar1 = *(undefined2 *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 2 + 0x298e);
  }
  return uVar1;
}


