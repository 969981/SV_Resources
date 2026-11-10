/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109c2c8; name: FUN_0109c2c8
 */


void FUN_0109c2c8(long param_1,long param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  FUN_0109c76c(param_1,param_3);
  if (*(char *)(param_2 + 0x54) != '\0') {
    **(undefined2 **)(param_2 + 0x30) = 0;
    *(undefined2 *)(param_2 + 0x52) = 0;
  }
  FUN_0109c334(param_1,param_2,param_3,0,0);
  return;
}


