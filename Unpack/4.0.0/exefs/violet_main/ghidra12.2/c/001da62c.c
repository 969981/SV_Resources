/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001da62c; name: FUN_001da62c
 */


undefined8 FUN_001da62c(long param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x3ff) >> 2 & 1) == 0) {
    if ((((*(byte *)(param_2 + 0x66c) >> 1 & 1) != 0) ||
        (*(long **)(param_2 + 0x4c8) == (long *)0x0)) || (**(long **)(param_2 + 0x4c8) != param_1))
    {
      return 0;
    }
    *(byte *)(param_2 + 0x66c) = *(byte *)(param_2 + 0x66c) | 2;
  }
  return 1;
}


