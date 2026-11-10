/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0106ffb8; name: FUN_0106ffb8
 */


void FUN_0106ffb8(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  long alStack_20 [2];
  
  alStack_20[1] = 0xae1b39fccfd09053;
  alStack_20[0] = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = alStack_20[0] + 1;
  local_30 = 0x240;
  local_28 = param_2;
  FUN_010703c8(*(undefined8 *)(param_1 + 8),alStack_20,&local_28,&local_30);
  return;
}


