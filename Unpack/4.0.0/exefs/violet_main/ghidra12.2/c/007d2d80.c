/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d2d80; name: FUN_007d2d80
 */


long * FUN_007d2d80(long param_1)

{
  long *plVar1;
  
  if ((*(ushort *)(param_1 + 10) == 0) || (*(ushort *)(param_1 + 10) <= *(ushort *)(param_1 + 8))) {
    return (long *)0x0;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 8) * 8);
  (**(code **)(*plVar1 + 0x60))(plVar1);
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  return plVar1;
}


