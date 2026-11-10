/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ed110; name: FUN_033ed110
 */


undefined8 FUN_033ed110(undefined8 *param_1,long *param_2)

{
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x23] = 0;
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x24] = 0;
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x25] = 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[0x26] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(long *)param_1[4] + 0x18))();
    param_1[6] = 0;
  }
  (**(code **)*param_1)(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  return 1;
}


