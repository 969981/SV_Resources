/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009f27a8; name: FUN_009f27a8
 */


long FUN_009f27a8(undefined4 param_1,long param_2,uint param_3)

{
  if (param_3 < 9) {
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x10) = param_1;
    return param_2;
  }
  FUN_00975e50();
  return 9;
}


