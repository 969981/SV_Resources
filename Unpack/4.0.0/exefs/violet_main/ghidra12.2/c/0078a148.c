/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078a148; name: FUN_0078a148
 */


void FUN_0078a148(int param_1)

{
  if (param_1 - 2U < 0x13) {
    *(undefined4 *)PTR_DAT_047d08a8 = *(undefined4 *)(&DAT_03d0ab60 + (long)(int)(param_1 - 2U) * 4)
    ;
    return;
  }
  *(undefined4 *)PTR_DAT_047d08a8 = 0x13;
  return;
}


