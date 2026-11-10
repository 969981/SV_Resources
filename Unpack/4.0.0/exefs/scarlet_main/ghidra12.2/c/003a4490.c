/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a4490; name: FUN_003a4490
 */


void FUN_003a4490(undefined8 *param_1)

{
  *(undefined4 *)((long)param_1 + 0xc) = 0xf0;
  param_1[0x1ed] = 0;
  param_1[0x1ef] = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  param_1[0x1e9] = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1f2] = 0;
  param_1[0x1f1] = 0;
  FUN_003a6990(param_1 + 4);
  FUN_003a6cb0(*param_1);
  param_1[2] = 0;
  FUN_003a6d50(param_1 + 0xa9,0x20);
  param_1[500] = 0;
  param_1[499] = 0;
  if (param_1[0x1f6] == 0) {
    return;
  }
  FUN_003a3020(param_1);
  return;
}


