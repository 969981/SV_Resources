/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0171f7e4; name: FUN_0171f7e4
 */


void FUN_0171f7e4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047db998 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0171f844(param_1 + 3);
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = -1;
  *(undefined1 *)(param_1 + 0xb) = 6;
  *param_1 = (long)&PTR_LAB_045764f8;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 100) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
  return;
}


