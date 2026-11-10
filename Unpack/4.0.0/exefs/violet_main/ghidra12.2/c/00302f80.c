/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00302f80; name: FUN_00302f80
 */


undefined8 FUN_00302f80(long *param_1,long param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return 1;
}


