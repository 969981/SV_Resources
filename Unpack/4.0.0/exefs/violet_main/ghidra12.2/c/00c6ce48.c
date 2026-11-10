/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6ce48; name: FUN_00c6ce48
 */


void FUN_00c6ce48(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 1;
  param_1[1] = param_1[1] | 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}


