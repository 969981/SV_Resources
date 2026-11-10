/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01540f24; name: FUN_01540f24
 */


void FUN_01540f24(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_0153edf0();
  *param_1 = &DAT_045adc80;
  param_1[4] = &PTR_LAB_045add98;
  param_1[5] = &DAT_045adde8;
  FUN_01540fc4(param_1);
  puVar2 = param_1 + 0x18;
  local_24 = 3;
  puVar1 = (undefined8 *)FUN_00d2ae18(puVar2,&local_24);
  *puVar1 = param_1[0x92];
  local_28 = 4;
  puVar1 = (undefined8 *)FUN_00d2ae18(puVar2,&local_28);
  *puVar1 = param_1[0x91];
  local_2c = 5;
  puVar2 = (undefined8 *)FUN_00d2ae18(puVar2,&local_2c);
  *puVar2 = param_1[0x93];
  return;
}


