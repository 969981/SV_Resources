/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dcb30; name: FUN_027dcb30
 */


undefined8 FUN_027dcb30(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_30 [8];
  long *local_28;
  
  if ((*(int *)(param_1 + 0x90) == 0) && (*(long *)(param_1 + 0x78) == 0)) {
    FUN_027dcbc4(auStack_30,param_1 + 0x40);
    FUN_027dc418(param_1 + 0xb0,auStack_30);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 1;
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
        (**(code **)(*local_28 + 0x10))(local_28);
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0x90) = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


