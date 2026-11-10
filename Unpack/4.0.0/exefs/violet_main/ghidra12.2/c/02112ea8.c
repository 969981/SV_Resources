/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02112ea8; name: FUN_02112ea8
 */


void FUN_02112ea8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04591fb8;
  param_1[4] = &PTR_LAB_04591fe8;
  if ((param_1[0x35c] != 0) && ((*(byte *)(param_1[0x35c] + 0x1e8) & 1) != 0)) {
    FUN_00db2500(param_1 + 0x35b);
  }
  if ((param_1[0x354] != 0) && ((*(byte *)(param_1[0x354] + 0x1e8) & 1) != 0)) {
    FUN_00db2500(param_1 + 0x353);
  }
  FUN_00db239c(param_1 + 0x36e);
  FUN_00db239c(param_1 + 0x366);
  FUN_00db239c(param_1 + 0x35b);
  FUN_00db239c(param_1 + 0x353);
  return;
}


