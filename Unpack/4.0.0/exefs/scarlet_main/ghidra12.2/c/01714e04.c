/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01714e04; name: FUN_01714e04
 */


void FUN_01714e04(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047db998 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_01714e5c(param_1 + 3);
  param_1[8] = 0;
  param_1[9] = -1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 6;
  *param_1 = (long)&PTR_LAB_04579150;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  return;
}


