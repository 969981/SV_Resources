/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a66b0; name: FUN_007a66b0
 */


void FUN_007a66b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_58;
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (param_4 == 0) {
    local_48[0] = 0x10408;
  }
  else {
    uVar2 = FUN_0284c1b8(param_4);
    uVar3 = (**(code **)(**(long **)(param_2 + 0x78) + 0xf0))();
    if ((uVar2 <= uVar3) &&
       (*(ushort *)(param_4 + 0x10) <= *(ushort *)(*(long *)(param_2 + 0x78) + 0x114e))) {
      FUN_007a6294(local_48,param_2,param_3,3);
      if (local_48[0] == 0) {
        iVar4 = memcmp((void *)(param_4 + 0x25),&DAT_03d0bfcb,0x10);
        if (iVar4 != 0) {
          FUN_007a208c(&local_58,*(undefined8 *)(param_2 + 0x78),(void *)(param_4 + 0x25),0x10);
        }
        iVar4 = (**(code **)(**(long **)(param_2 + 0x78) + 0x1b8))();
        plVar5 = (long *)FUN_0079365c();
        lVar7 = *plVar5;
        local_58 = 0;
        FUN_007935cc(&local_58);
        *(ulong *)(param_2 + 0x70) = local_58 + lVar7 * iVar4;
        local_58 = 0;
        FUN_007935cc(&local_58);
        *(undefined4 *)(param_2 + 200) = 0;
        *(ulong *)(param_2 + 0xc0) = local_58;
        pMVar1 = (MutexType *)(*(long *)(param_2 + 0x78) + 0x1f8);
        *(undefined8 *)(param_2 + 0x30) = 0xa8;
        *(undefined8 *)(param_2 + 0x38) = 1;
        *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartCreateNetwork";
        nn::os::LockMutex(pMVar1);
        (**(code **)(**(long **)(*(long *)(param_2 + 0x78) + 0x218) + 0x48))();
        local_58 = local_58 & 0xffffffff00000000;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
        FUN_00cbd7c0(param_1,&local_58);
        nn::os::UnlockMutex(pMVar1);
        return;
      }
      local_38[0] = 0;
      local_58 = CONCAT44(local_58._4_4_,0x10408);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
      piVar6 = (int *)&local_58;
      goto LAB_007a6740;
    }
    local_48[0] = 0x10407;
  }
  local_58 = (ulong)local_58._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)&local_58);
  piVar6 = local_48;
LAB_007a6740:
  FUN_00cbd7c0(param_1,piVar6);
  return;
}


