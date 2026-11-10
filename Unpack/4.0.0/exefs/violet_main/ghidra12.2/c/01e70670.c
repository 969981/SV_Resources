/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e70670; name: FUN_01e70670
 */


undefined1 FUN_01e70670(long param_1,ushort param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 9) && (*(long *)(param_1 + 0x40) != 0)) {
    uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x40) + (ulong)param_2 + 0x29a0);
  }
  return uVar1;
}


