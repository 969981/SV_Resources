/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080aaec; name: FUN_0080aaec
 */


void FUN_0080aaec(undefined8 param_1,long param_2,void *param_3,size_t param_4,undefined1 param_5)

{
  void *__dest;
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  long *local_60;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x18));
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    local_58[0] = 0x10408;
  }
  else {
    uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0xa0))();
    if (*(uint *)(param_2 + 0x44) < uVar4) {
      local_58[0] = 0x4c0d;
    }
    else {
      __dest = (void *)(param_2 + 0x50);
      *(undefined1 *)((long)__dest + param_4) = param_5;
      memcpy(__dest,param_3,param_4);
      (**(code **)(**(long **)(param_2 + 8) + 0x88))
                (auStack_68,*(long **)(param_2 + 8),__dest,param_4 + 1);
      if (local_60 != (long *)0x0) {
        plVar1 = local_60 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_58[0] = 0;
    }
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x18));
  return;
}


