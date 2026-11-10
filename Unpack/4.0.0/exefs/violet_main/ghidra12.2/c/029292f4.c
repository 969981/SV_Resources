/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029292f4; name: FUN_029292f4
 */


void FUN_029292f4(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  long alStack_20 [2];
  
  alStack_20[1] = 0x1fc0d1d2138e4c1;
  alStack_20[0] = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = alStack_20[0] + 1;
  local_30 = 4;
  local_28 = param_2;
  FUN_02929420(*(undefined8 *)(param_1 + 8),alStack_20,&local_28,&local_30);
  return;
}


