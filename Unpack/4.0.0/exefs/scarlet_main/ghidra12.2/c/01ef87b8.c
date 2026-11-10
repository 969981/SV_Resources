/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ef87b8; name: FUN_01ef87b8
 */


void FUN_01ef87b8(undefined8 *param_1,void *param_2)

{
  FUN_01870100();
  *param_1 = &PTR_LAB_045e1920;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[4] = &PTR_LAB_045e19a0;
  param_1[5] = &PTR_LAB_045e19f0;
  memcpy((void *)((long)param_1 + 0x54),param_2,0x24);
  param_1[0xf] = 0;
  return;
}


