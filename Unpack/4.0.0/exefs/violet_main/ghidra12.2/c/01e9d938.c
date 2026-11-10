/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9d938; name: FUN_01e9d938
 */


undefined8 FUN_01e9d938(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined **local_50;
  undefined4 local_48;
  undefined1 auStack_40 [8];
  long *local_38;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    local_50 = &PTR_LAB_04553a28;
    local_48 = 0;
    FUN_01e9f374(auStack_40,param_1 + 0x50,&local_50);
    FUN_01e9f6dc(param_1 + 0x90,auStack_40);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x40) = 2;
      return 1;
    }
    FUN_01e9ebec(param_1 + 0x90);
  }
  return 0;
}


