/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00892a50; name: FUN_00892a50
 */


void FUN_00892a50(undefined8 param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_2 + 0x210) = *param_4;
  *(undefined4 *)(param_2 + 0x214) = param_4[1];
  *(undefined4 *)(param_2 + 0x218) = *param_3;
  *(undefined4 *)(param_2 + 0x21c) = param_3[1];
  FUN_00892ed4(param_1,param_2 + 0x40);
  return;
}


