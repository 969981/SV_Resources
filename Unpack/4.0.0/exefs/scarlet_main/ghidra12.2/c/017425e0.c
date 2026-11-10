/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017425e0; name: FUN_017425e0
 */


void FUN_017425e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_28;
  
  FUN_01742b48();
  *param_1 = &PTR_LAB_045a9318;
  param_1[4] = &PTR_LAB_045a9348;
  puVar4 = param_1 + 5;
  *puVar4 = 0;
  param_1[8] = 0xaaaaaaaaaaaaaaa;
  param_1[9] = 0;
  param_1[0xd] = 0xaaaaaaaaaaaaaaa;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = param_1[1];
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_1[1];
  local_28 = 0xc9738b4c9786acb8;
  puVar3 = (undefined8 *)FUN_01742760(puVar4,&local_28);
  uVar1 = DAT_03d63228;
  *(undefined4 *)(puVar3 + 1) = DAT_03d63230;
  *puVar3 = uVar1;
  local_28 = 0x8855c0e3935e6886;
  puVar3 = (undefined8 *)FUN_01742760(puVar4,&local_28);
  uVar1 = DAT_03d63234;
  *(undefined4 *)(puVar3 + 1) = DAT_03d6323c;
  *puVar3 = uVar1;
  local_28 = 0xa640d2e5b5565c70;
  puVar3 = (undefined8 *)FUN_01742760(puVar4,&local_28);
  uVar1 = DAT_03d63240;
  *(undefined4 *)(puVar3 + 1) = DAT_03d63248;
  *puVar3 = uVar1;
  local_28 = 0xed853956cb8c2ca7;
  puVar3 = (undefined8 *)FUN_01742760(puVar4,&local_28);
  *puVar3 = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 1) = 0xffffffff;
  local_28 = 0x91878d2e67dac9bc;
  puVar3 = (undefined8 *)FUN_01742760(puVar4,&local_28);
  uVar2 = DAT_03d63254;
  *puVar3 = DAT_03d6324c;
  *(undefined4 *)(puVar3 + 1) = uVar2;
  return;
}


