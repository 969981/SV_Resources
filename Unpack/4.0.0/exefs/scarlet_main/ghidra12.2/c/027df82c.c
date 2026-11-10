/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027df82c; name: FUN_027df82c
 */


void FUN_027df82c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined2 param_4)

{
  FUN_01870100();
  param_3[0xb] = param_1;
  *param_3 = &PTR_LAB_045e26f0;
  param_3[4] = &PTR_LAB_045e2770;
  param_3[5] = &PTR_LAB_045e27c0;
  *(undefined2 *)(param_3 + 10) = param_4;
  param_3[0xc] = param_2;
  *(undefined2 *)(param_3 + 0xd) = 1;
  *(undefined1 *)((long)param_3 + 0x6a) = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  return;
}


