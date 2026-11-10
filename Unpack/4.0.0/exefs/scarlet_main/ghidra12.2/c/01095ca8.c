/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01095ca8; name: FUN_01095ca8
 */


void FUN_01095ca8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_0153edf0();
  *param_1 = &DAT_045ade40;
  param_1[4] = &PTR_LAB_045adf58;
  param_1[5] = &DAT_045adfa8;
  FUN_01095d44(param_1);
  puVar2 = param_1 + 0x18;
  local_24 = 0;
  puVar1 = (undefined8 *)FUN_00d2ae18(puVar2,&local_24);
  *puVar1 = param_1[0x92];
  local_28 = 1;
  puVar1 = (undefined8 *)FUN_00d2ae18(puVar2,&local_28);
  *puVar1 = param_1[0x91];
  local_2c = 2;
  puVar2 = (undefined8 *)FUN_00d2ae18(puVar2,&local_2c);
  *puVar2 = param_1[0x93];
  return;
}


