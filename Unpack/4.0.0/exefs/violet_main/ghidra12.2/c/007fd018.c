/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fd018; name: FUN_007fd018
 */


void FUN_007fd018(long *param_1)

{
  if (param_1[0x274] != 0) {
    (**(code **)(*param_1 + 600))(param_1);
    param_1[0x274] = 0;
  }
  if (param_1[0x275] != 0) {
    (**(code **)(*param_1 + 0x248))(param_1);
    param_1[0x275] = 0;
  }
  param_1[0xee] = 0;
  return;
}


