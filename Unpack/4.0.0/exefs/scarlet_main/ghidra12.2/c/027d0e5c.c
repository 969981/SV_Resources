/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027d0e5c; name: FUN_027d0e5c
 */


void FUN_027d0e5c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  FUN_01870100();
  *param_1 = &PTR_FUN_045e2a98;
  param_1[0xb] = 0;
  param_1[4] = &PTR_LAB_045e2b18;
  param_1[5] = &PTR_LAB_045e2b68;
  param_1[10] = 0;
  FUN_027c2138(param_1 + 10,param_2);
  FUN_01cfa5b0(param_1 + 0xc,param_3);
  FUN_01d01ed8(param_1 + 0x10,param_3 + 0x20);
  param_1[0x11] = *(undefined8 *)(param_3 + 0x28);
  FUN_01cfa5b0(param_1 + 0x12,param_3 + 0x30);
  param_1[0x16] = *(undefined8 *)(param_3 + 0x50);
  FUN_027dea3c(param_1 + 0x17,param_3 + 0x58);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_3 + 0x78);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


