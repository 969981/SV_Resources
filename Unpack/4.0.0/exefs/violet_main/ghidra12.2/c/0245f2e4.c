/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0245f2e4; name: FUN_0245f2e4
 */


uint FUN_0245f2e4(long param_1,long param_2,undefined4 param_3)

{
  switch(param_3) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 8:
  case 9:
    return (uint)*(byte *)(param_1 + param_2);
  case 6:
  case 7:
    return *(uint *)(param_1 + param_2);
  case 10:
    return (int)*(float *)(param_1 + param_2);
  case 0xb:
    return (int)*(double *)(param_1 + param_2);
  default:
    return 0;
  }
}


