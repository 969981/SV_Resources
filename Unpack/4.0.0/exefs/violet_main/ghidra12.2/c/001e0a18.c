/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e0a18; name: FUN_001e0a18
 */


ulong FUN_001e0a18(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return (ulong)(param_1 == 0 && param_2 == 0);
  }
  uVar1 = FUN_001e0990();
  return uVar1;
}


