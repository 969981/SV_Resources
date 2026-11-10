/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079e5b0; name: FUN_0079e5b0
 */


void FUN_0079e5b0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 auStack_58 [16];
  undefined *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*(char *)(param_1 + 0x284) == '\0') && (*(int *)(param_1 + 0x1118) != 1)) {
    local_38 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_40 = *param_2;
    local_28 = 0;
    local_34 = '\x13';
    local_48 = PTR_DAT_047d0a68 + 0x10;
    local_30 = 4;
    uVar1 = FUN_007a3154(&local_48);
    if (((uVar1 & 1) != 0) &&
       ((*(int *)((long)param_2 + 0xc) == local_30._4_4_ + (int)local_30 && (local_34 == '\x13'))))
    {
      nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
      FUN_007a8258(*(undefined8 *)(param_1 + 0x120),2);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
      FUN_0079e694(auStack_58,param_1,1);
      return;
    }
  }
  return;
}


