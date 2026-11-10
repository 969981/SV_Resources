/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e9bf0; name: FUN_001e9bf0
 */


void FUN_001e9bf0(undefined8 *param_1)

{
  FUN_001ec308(*param_1);
  *param_1 = 0;
  FUN_001ec308(param_1[1]);
  param_1[1] = 0;
  FUN_001ec308(param_1[2]);
  param_1[2] = 0;
  FUN_001ec308(param_1[4]);
  param_1[4] = 0;
  FUN_001ec308(param_1[5]);
  param_1[5] = 0;
  FUN_001ec308(param_1[6]);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) & 0xfc;
  return;
}


