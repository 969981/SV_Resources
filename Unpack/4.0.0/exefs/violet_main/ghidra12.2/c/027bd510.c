/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bd510; name: FUN_027bd510
 */


void FUN_027bd510(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *local_38;
  
  lVar4 = *(long *)(param_1 + 0x98);
  lVar5 = *(long *)(param_1 + 0xa0);
  while (lVar5 != lVar4) {
    lVar5 = lVar5 + -8;
    FUN_01e72cdc(lVar5);
  }
  *(long *)(param_1 + 0xa0) = lVar4;
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    *(undefined1 *)(param_1 + 0x1d0) = 0;
  }
  if ((*(long *)(param_1 + 0x88) != 0) && (FUN_027bd5b4(auStack_40), local_38 != (long *)0x0)) {
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
  return;
}


