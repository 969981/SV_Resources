/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015bc504; name: FUN_015bc504
 */


void FUN_015bc504(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  FUN_015bc9a8(param_1 + 2);
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  FUN_015bc54c(param_1 + 0x17,param_2);
  *(undefined4 *)((long)param_1 + 0x133) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  return;
}


