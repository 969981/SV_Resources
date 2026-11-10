/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ec150; name: FUN_003ec150
 */


uint FUN_003ec150(long *param_1,uint param_2)

{
  if (((int)param_2 < 0) || ((int)param_1[1] <= (int)(param_2 >> 5))) {
    return 0;
  }
  return *(uint *)(*param_1 + (ulong)(param_2 >> 5) * 4) >> (ulong)(param_2 & 0x1f) & 1;
}


