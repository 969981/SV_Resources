/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011dbc60; name: FUN_011dbc60
 */


void FUN_011dbc60(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  if ((ulong)param_3[1] < param_3[2] + 0x11U) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  FUN_01876840(0xb9,param_2);
  return;
}


