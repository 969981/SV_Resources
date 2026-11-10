/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e4418; name: FUN_002e4418
 */


void FUN_002e4418(undefined1 *param_1,undefined1 param_2,undefined2 param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = param_3;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  return;
}


