/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178cc48; name: FUN_0178cc48
 */


void FUN_0178cc48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 local_40 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  FUN_0178cf8c();
  *param_1 = &PTR_FUN_04583f68;
  param_1[4] = &PTR_LAB_04583f98;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_1[1];
  param_1[0xb] = 0;
  param_1[0xc] = param_1[1];
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[8] = 0xfffffffffffffff;
  param_1[9] = 0;
  param_1[0xd] = 0xfffffffffffffff;
  param_1[0xe] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x12),false,0);
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  FUN_0178ce84(param_1 + 5,(long)(64.0 / *(float *)(param_1 + 0x11)));
  local_38 = param_1[1];
  local_40[0] = 0x7b;
  local_48 = 0x20;
  uStack_44 = 0x10;
  FUN_0178cdc0(&local_30,local_38,&local_38,local_40,&uStack_44,&local_48);
  local_28 = param_1[0x17];
  param_1[0x17] = 0;
  FUN_0178cd48(&local_28);
  uVar1 = local_30;
  local_30 = 0;
  param_1[0x17] = uVar1;
  FUN_0178cd48(&local_30);
  return;
}


