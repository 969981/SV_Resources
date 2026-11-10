/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5d980; name: FUN_00c5d980
 */


ulong FUN_00c5d980(long param_1)

{
  return (*(long *)(param_1 + 0x10) - **(long **)(param_1 + 0x20)) - 0x10U >> 4;
}


