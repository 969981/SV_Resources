/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079f58c; name: FUN_0079f58c
 */


void FUN_0079f58c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_70 [24];
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  local_88 = *(undefined4 *)((long)param_2 + 0xc);
  uStack_90 = *param_2;
  local_78 = 0;
  local_98 = PTR_DAT_047d0a78 + 0x10;
  local_84 = '0';
  local_80 = 4;
  uVar2 = FUN_007a3154(&local_98);
  if ((((uVar2 & 1) != 0) && (*(int *)((long)param_2 + 0xc) == local_80._4_4_ + (int)local_80)) &&
     (local_84 == '0')) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x1b));
    uVar2 = (**(code **)(*(long *)param_1[0x24] + 0x68))((long *)param_1[0x24],param_3);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1b));
    if ((uVar2 & 1) != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x3f));
      nn::os::LockMutex((MutexType *)(param_1 + 0x1f));
      (**(code **)(*(long *)param_1[0x23] + 0x78))((long *)param_1[0x23],param_3);
      lVar3 = param_1[0x43];
      uVar1 = FUN_007a8280(param_1[0x23]);
      FUN_007985f8(lVar3,uVar1);
      local_50 = (long *)((ulong)local_50._4_4_ << 0x20);
      local_58 = (undefined *)0x40;
      (**(code **)(*(long *)param_1[0x23] + 0x40))((long *)param_1[0x23],&local_58);
      *(undefined1 *)((long)param_1 + 0x24b) = 1;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x3f));
    }
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((uVar2 & 1) != 0) {
      local_38 = 0;
      local_48 = 0x4d8;
      local_50 = param_1 + 0x52;
      local_44 = 0x31;
      local_58 = PTR_DAT_047d0a90 + 0x10;
      local_40 = 4;
      FUN_007a3050(&local_58);
      FUN_007a4c48(auStack_70,param_1 + 0x188,0x4d8);
      FUN_007a4c58(auStack_70,local_50,local_40._4_4_ + (int)local_40,0x31);
      (**(code **)(*param_1 + 0x140))(param_1,auStack_70,param_3,0);
    }
  }
  return;
}


