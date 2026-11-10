/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02113b74; name: FUN_02113b74
 */


void FUN_02113b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04592058;
  param_1[4] = &PTR_LAB_04592088;
  if ((param_1[0x55] != 0) && ((*(byte *)(param_1[0x55] + 0x1e8) & 1) != 0)) {
    FUN_00db2500(param_1 + 0x54);
  }
  if ((param_1[0x5d] != 0) && ((*(byte *)(param_1[0x5d] + 0x1e8) & 1) != 0)) {
    FUN_00db2500(param_1 + 0x5c);
  }
  if ((param_1[0x65] != 0) && ((*(byte *)(param_1[0x65] + 0x1e8) & 1) != 0)) {
    FUN_00db2500(param_1 + 100);
  }
  if ((param_1[0x6d] != 0) && ((*(byte *)(param_1[0x6d] + 0x1e8) & 1) != 0)) {
    FUN_00db2500(param_1 + 0x6c);
  }
  FUN_00db239c(param_1 + 0x6c);
  FUN_00db239c(param_1 + 100);
  FUN_00db239c(param_1 + 0x5c);
  FUN_00db239c(param_1 + 0x54);
  return;
}


