/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226b558; name: FUN_0226b558
 */


void FUN_0226b558(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 local_4;
  
  FUN_0153edf0();
  *param_1 = &DAT_045ae380;
  param_1[4] = &PTR_LAB_045ae498;
  param_1[5] = &DAT_045ae4e8;
  FUN_0226ea88(param_1);
  local_4 = 10;
  puVar1 = (undefined8 *)FUN_00d2ae18(param_1 + 0x18,&local_4);
  *puVar1 = param_1[0x91];
  return;
}


