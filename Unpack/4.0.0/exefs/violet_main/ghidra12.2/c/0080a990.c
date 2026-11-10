/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080a990; name: FUN_0080a990
 */


void FUN_0080a990(undefined8 param_1,long param_2,undefined8 param_3,void *param_4,size_t param_5,
                 undefined1 param_6)

{
  void *__dest;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_70 [8];
  long *local_68;
  undefined4 local_60 [4];
  undefined4 local_48 [2];
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x18));
  if (*(long *)(param_2 + 8) != 0) {
    plVar3 = (long *)thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
    lVar4 = (**(code **)(*plVar3 + 0x3c8))(plVar3,param_3);
    if (lVar4 != 0) {
      uVar5 = (**(code **)(**(long **)(param_2 + 8) + 0xa0))();
      if (*(uint *)(param_2 + 0x44) < uVar5) {
        local_60[0] = 0x4c0d;
      }
      else {
        __dest = (void *)(param_2 + 0x50);
        *(undefined1 *)((long)__dest + param_5) = param_6;
        memcpy(__dest,param_4,param_5);
        (**(code **)(**(long **)(param_2 + 8) + 0x78))
                  (auStack_70,*(long **)(param_2 + 8),*(undefined4 *)(lVar4 + 0xb4),__dest,
                   param_5 + 1);
        if (local_68 != (long *)0x0) {
          plVar3 = local_68 + 1;
          do {
            lVar4 = *plVar3;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        local_60[0] = 0;
      }
      goto LAB_0080aaa8;
    }
  }
  local_60[0] = 0x10408;
LAB_0080aaa8:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_60);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x18));
  return;
}


