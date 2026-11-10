/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0044c6b0; name: FUN_0044c6b0
 */


undefined8 FUN_0044c6b0(undefined8 *param_1,undefined8 *param_2)

{
  param_2[10] = 0xffffffffffffffff;
  memset((void *)((long)(param_2 + 0xc) + param_2[0x1c]),0,0x80 - param_2[0x1c]);
  FUN_0044ab80(param_2,param_2 + 0xc,param_2[0x1c]);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  FUN_00453300(param_2,0xe8);
  return 1;
}


