/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e8388; name: FUN_033e8388
 */


undefined8 FUN_033e8388(undefined8 *param_1,long *param_2)

{
  if (param_1[10] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (param_1[9] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


