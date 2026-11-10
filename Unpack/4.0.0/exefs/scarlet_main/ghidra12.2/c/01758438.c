/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01758438; name: FUN_01758438
 */


void FUN_01758438(undefined8 *param_1,undefined8 param_2)

{
  FUN_01758550();
  *param_1 = &PTR_FUN_045e0d88;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_045e0db8;
  memset((void *)((long)param_1 + 0x39),0,0x800);
  return;
}


