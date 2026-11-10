/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e9698; name: FUN_007e9698
 */


long * FUN_007e9698(long *param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x19) = *param_2;
  (**(code **)(*param_1 + 0x70))();
  return param_1 + 0x1b;
}


