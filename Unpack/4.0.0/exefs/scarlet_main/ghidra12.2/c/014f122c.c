/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f122c; name: FUN_014f122c
 */


void FUN_014f122c(long *param_1)

{
  *param_1 = (long)&DAT_04602468;
  param_1[4] = (long)&PTR_LAB_04602618;
  param_1[5] = (long)&DAT_04602740;
  param_1[0x24] = (long)&PTR_LAB_046027f8;
  param_1[6] = (long)&PTR_LAB_04602798;
  param_1[7] = (long)&PTR_LAB_046027c0;
  FUN_014f1d64();
  if ((char)param_1[0x7e] != '\0') {
    *(undefined1 *)(param_1 + 0x62) = 0;
    (**(code **)(*param_1 + 0x198))(param_1);
  }
  if ((long *)param_1[0x92] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x92] + 0x20))();
  }
  if ((long *)param_1[0x8d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8d] + 0x20))();
  }
  FUN_014f12cc(param_1);
  return;
}


