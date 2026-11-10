/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01422018; name: FUN_01422018
 */


void FUN_01422018(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long local_68;
  undefined4 local_60;
  undefined8 local_5c;
  
  FUN_00cf38a8();
  *param_1 = &PTR_FUN_045d6208;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[4] = &PTR_LAB_045d6248;
  plVar1 = param_1 + 0x11;
  *plVar1 = 0;
  FUN_014224d8(param_1 + 0x14);
  FUN_014220dc(plVar1,param_4);
  local_68 = param_4 << 4;
  local_5c = 0;
  param_1[0x10] = param_1[0x12] - *plVar1 >> 4;
  local_60 = param_5;
  FUN_00d560a0(param_1,&local_68,param_3,param_6,param_7);
  return;
}


