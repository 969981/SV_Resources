/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01601ba8; name: FUN_01601ba8
 */


undefined8 FUN_01601ba8(long param_1,undefined8 param_2)

{
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x460));
  *(undefined8 *)(param_1 + 0x480) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0x3f800000;
  local_90 = 0x666666666666666;
  local_78 = 0;
  local_68 = 0x666666666666666;
  uStack_60 = 0;
  local_98 = param_2;
  uStack_70 = param_2;
  FUN_01602d70(param_1 + 0x48,&local_a8);
  FUN_01601d10(&local_a8);
  local_80 = 0;
  local_88 = 0x1fffffffffffffff;
  local_78 = local_78 & 0xffffffff00000000;
  local_90 = param_2;
  FUN_01601d78(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(ulong *)(param_1 + 0xd8) = local_80;
  *(ulong *)(param_1 + 0xe0) = local_78;
  *(undefined8 *)(param_1 + 200) = local_90;
  *(undefined8 *)(param_1 + 0xd0) = local_88;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  FUN_01601e14(&local_a8);
  local_88 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_80 = local_80 & 0xffffffff00000000;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0x3f800000;
  local_90 = 0xfffffffffffffff;
  local_78 = 0;
  local_68 = 0xfffffffffffffff;
  uStack_60 = 0;
  local_98 = param_2;
  uStack_70 = param_2;
  FUN_0160209c(param_1 + 0xe8,&local_a8);
  FUN_01601d38(&local_a8);
  local_88 = 0x1fffffffffffffff;
  local_80 = 0;
  local_78 = local_78 & 0xffffffff00000000;
  local_90 = param_2;
  FUN_01601eb4(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(ulong *)(param_1 + 0x178) = local_80;
  *(ulong *)(param_1 + 0x180) = local_78;
  *(undefined8 *)(param_1 + 0x168) = local_90;
  *(undefined8 *)(param_1 + 0x170) = local_88;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  FUN_01601ff4(&local_a8);
  FUN_01602314(param_1 + 0x188,param_2);
  *(undefined1 *)(param_1 + 0x28) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x460));
  return 1;
}


