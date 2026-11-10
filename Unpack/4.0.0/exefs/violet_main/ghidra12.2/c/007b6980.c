/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b6980; name: FUN_007b6980
 */


void FUN_007b6980(undefined8 param_1,long param_2,long param_3,uint param_4,long param_5)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_70 [4];
  undefined4 local_60 [8];
  uint local_38 [2];
  
  if (param_4 < 0xc) {
    local_60[0] = 0x10407;
  }
  else {
    if (*(long *)(param_2 + 0x58) == 0) {
      uVar3 = 0;
    }
    else {
      local_38[0] = 0;
      FUN_00796868(local_60,param_5 + 0x628);
      FUN_0078a244(local_70,local_60,local_38);
      FUN_0284e3d4(local_60);
      uVar2 = local_38[0];
      lVar4 = *(long *)(param_2 + 0x58);
      pMVar1 = (MutexType *)(lVar4 + 0x1f8);
      nn::os::LockMutex(pMVar1);
      if (*(long *)(lVar4 + 0x218) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_027e983c();
      }
      nn::os::UnlockMutex(pMVar1);
      uVar3 = uVar3 ^ uVar2;
    }
    FUN_007938b0(param_3,uVar3);
    memcpy((void *)(param_3 + 4),(void *)(param_5 + 0x15),8);
    local_60[0] = 0;
  }
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  FUN_00cbd7c0(param_1,local_60);
  return;
}


