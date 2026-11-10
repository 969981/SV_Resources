/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00156120; name: FUN_00156120
 */


uint FUN_00156120(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0x80000000 >> (ulong)((uint)LZCOUNT(param_1) & 0x1f);
  }
  return uVar1;
}


