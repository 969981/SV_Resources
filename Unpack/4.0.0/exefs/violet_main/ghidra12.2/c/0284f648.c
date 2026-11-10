/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284f648; name: FUN_0284f648
 */


void FUN_0284f648(long *param_1)

{
  FUN_00798384();
  *param_1 = (long)(PTR_DAT_047d0eb8 + 0x10);
  FUN_00796584(param_1 + 0x57);
  memset(param_1 + 0x17,0,0x200);
  param_1[4] = (long)(param_1 + 0x17);
  FUN_007965fc(param_1 + 0x57);
  return;
}


