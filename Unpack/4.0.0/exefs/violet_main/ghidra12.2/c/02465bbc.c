/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02465bbc; name: FUN_02465bbc
 */


ulong FUN_02465bbc(ulong param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  
  switch(param_3) {
  case 1:
  case 2:
  case 3:
    if (param_1 != 0) {
      return (ulong)*(byte *)(param_1 + param_2 + 4);
    }
    break;
  case 4:
  case 5:
    if (param_1 != 0) {
      return (ulong)*(ushort *)(param_1 + (ulong)param_2 * 2 + 4);
    }
    break;
  case 6:
  case 7:
    if (param_1 != 0) {
      lVar1 = (ulong)param_2 * 4;
LAB_02465c14:
      return (ulong)*(uint *)(param_1 + lVar1 + 4);
    }
    break;
  case 8:
  case 9:
    if (param_1 != 0) {
      lVar1 = (ulong)param_2 * 8;
      goto LAB_02465c14;
    }
    break;
  case 10:
    if (param_1 != 0) {
      return (ulong)(uint)(int)*(float *)(param_1 + (ulong)param_2 * 4 + 4);
    }
    break;
  case 0xb:
    if (param_1 != 0) {
      param_1 = (ulong)(uint)(int)*(double *)(param_1 + (ulong)param_2 * 8 + 4);
    }
    break;
  default:
    return 0;
  }
  return param_1;
}


