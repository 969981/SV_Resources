/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a64e0; name: FUN_007a64e0
 */


void FUN_007a64e0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_60;
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar6 = (int *)&local_60;
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
    uVar2 = FUN_0284c1b8(param_4);
    uVar3 = (**(code **)(**(long **)(param_2 + 0x78) + 0xf0))();
    if ((uVar2 <= uVar3) &&
       (*(ushort *)(param_4 + 0x10) <= *(ushort *)(*(long *)(param_2 + 0x78) + 0x114e))) {
      FUN_007a6294(local_50,param_2,param_3,3);
      if (local_50[0] == 0) {
        *(long *)(param_2 + 0x90) = param_6;
        uVar2 = FUN_007d2cc8(param_6);
        *(uint *)(param_2 + 0x9c) = uVar2 & 0xffff;
        iVar4 = (**(code **)(**(long **)(param_2 + 0x78) + 0x1c8))();
        plVar5 = (long *)FUN_0079365c();
        lVar7 = *plVar5;
        local_60 = 0;
        FUN_007935cc(&local_60);
        *(ulong *)(param_2 + 0x70) = local_60 + lVar7 * iVar4;
        local_60 = 0;
        FUN_007935cc(&local_60);
        *(undefined4 *)(param_2 + 200) = 3;
        *(ulong *)(param_2 + 0xc0) = local_60;
        pMVar1 = (MutexType *)(*(long *)(param_2 + 0x78) + 0x1f8);
        *(undefined8 *)(param_2 + 0x30) = 0x98;
        *(undefined8 *)(param_2 + 0x38) = 1;
        *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartAutoConnectNetwork";
        nn::os::LockMutex(pMVar1);
        (**(code **)(**(long **)(*(long *)(param_2 + 0x78) + 0x218) + 0x48))();
        local_60 = local_60 & 0xffffffff00000000;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_60 | 4),(Result *)local_38);
        FUN_00cbd7c0(param_1,&local_60);
        nn::os::UnlockMutex(pMVar1);
        return;
      }
      local_38[0] = 0;
      local_60 = CONCAT44(local_60._4_4_,0x10408);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&local_60 | 4),(Result *)local_38);
      goto LAB_007a6574;
    }
  }
  local_50[0] = 0x10407;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_60);
  piVar6 = local_50;
LAB_007a6574:
  FUN_00cbd7c0(param_1,piVar6);
  return;
}


