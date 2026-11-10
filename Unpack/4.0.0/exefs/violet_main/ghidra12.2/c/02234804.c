/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02234804; name: FUN_02234804
 */


undefined8 FUN_02234804(undefined4 param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  void *__src;
  ulong uVar6;
  undefined1 auStack_b0 [72];
  long *local_68;
  
  uVar5 = 0;
  if (param_3 != 0) {
    if (*(int *)(param_2 + 0x3f4) == 1) {
      nn::os::LockMutex((MutexType *)(param_2 + 0x128));
      *(undefined4 *)(param_2 + 0x458) = param_1;
      if (0 < (int)param_4) {
        uVar6 = 0;
        do {
          __src = (void *)(param_3 + uVar6 * 0x50);
          memcpy(auStack_b0,__src,0x48);
          local_68 = *(long **)((long)__src + 0x48);
          if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
            plVar1 = local_68 + 2;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_00e813ac(param_2,auStack_b0);
          if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
            plVar1 = local_68 + 2;
            do {
              lVar4 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar4 + -1 == 0) {
              (**(code **)(*local_68 + 0x18))();
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_4);
      }
      uVar5 = 1;
      *(undefined1 *)(param_2 + 0x462) = 1;
      nn::os::UnlockMutex((MutexType *)(param_2 + 0x128));
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}


