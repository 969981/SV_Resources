/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ee2f4; name: FUN_008ee2f4
 */


long FUN_008ee2f4(long param_1)

{
  return *(long *)PTR_DAT_047d26e8 +
         ((ulong)*(byte *)(param_1 + 9) + (ulong)*(byte *)(param_1 + 8) * 4 +
         (ulong)*(byte *)(param_1 + 10) * 0x10) * 0xa8;
}


