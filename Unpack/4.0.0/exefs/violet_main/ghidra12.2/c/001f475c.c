/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f475c; name: FUN_001f475c
 */


void FUN_001f475c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 4;
  *(undefined2 *)((long)param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  return;
}


