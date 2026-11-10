/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01730f54; name: FUN_01730f54
 */


void FUN_01730f54(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047db998 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_01730fbc(param_1 + 3);
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = -1;
  *(undefined1 *)(param_1 + 0xb) = 6;
  *param_1 = (long)&PTR_LAB_04575b20;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 100) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x74) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x7c) = 0xffffffff;
  return;
}


