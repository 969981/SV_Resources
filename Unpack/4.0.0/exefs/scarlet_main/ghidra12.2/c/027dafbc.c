/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dafbc; name: FUN_027dafbc
 */


void FUN_027dafbc(undefined8 *param_1,undefined8 param_2)

{
  FUN_01870100();
  *param_1 = &PTR_FUN_045e3188;
  param_1[0xb] = 0;
  param_1[4] = &PTR_LAB_045e3208;
  param_1[5] = &PTR_LAB_045e3258;
  param_1[10] = 0;
  FUN_027c2138(param_1 + 10,param_2);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


