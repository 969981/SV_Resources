/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009f275c; name: FUN_009f275c
 */


long FUN_009f275c(long param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < 4) {
    *(undefined4 *)(param_1 + (ulong)param_2 * 4) = param_3;
    return param_1;
  }
  FUN_00975e50();
  return 4;
}


