/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c77cc; name: FUN_001c77cc
 */


void FUN_001c77cc(long param_1)

{
  if ((*(long **)(param_1 + 0x530) == (long *)0x0) || (**(long **)(param_1 + 0x530) == 0)) {
    FUN_001c76b8(param_1);
    return;
  }
  FUN_001fabf4();
  *(byte *)(param_1 + 0x538) = *(byte *)(param_1 + 0x538) | 1;
  FUN_001c7744(param_1 + 0x510);
  return;
}


