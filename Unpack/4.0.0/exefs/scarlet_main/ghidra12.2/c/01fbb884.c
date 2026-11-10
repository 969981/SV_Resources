/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fbb884; name: FUN_01fbb884
 */


void FUN_01fbb884(long *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = (long)(PTR_DAT_047db180 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_01fe54f0(param_1 + 3);
  param_1[8] = 0;
  param_1[9] = -1;
  param_1[10] = 0;
  puVar1 = (undefined1 *)FUN_00f6866c();
  *(undefined1 *)(param_1 + 0xb) = *puVar1;
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  *param_1 = (long)&PTR_FUN_0456df08;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  return;
}


