/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bc370; name: FUN_027bc370
 */


void FUN_027bc370(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 local_40;
  long *local_38;
  
  lVar5 = *(long *)(param_1 + 0x98);
  lVar6 = *(long *)(param_1 + 0xa0);
  while (lVar6 != lVar5) {
    lVar6 = lVar6 + -8;
    FUN_01e72cdc(lVar6);
  }
  *(long *)(param_1 + 0xa0) = lVar5;
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    *(undefined1 *)(param_1 + 0x1d0) = 0;
  }
  pcVar4 = *(code **)(param_1 + 0xd8);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar4)(param_1 + 0xf0);
  }
  pcVar4 = *(code **)(param_1 + 0x158);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar4)(param_1 + 0x170);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    local_40 = 0;
    local_38 = (long *)0x0;
    FUN_027bc5d8((long *)(param_1 + 0x88),&local_40);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
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
        (**(code **)(*local_38 + 0x10))(local_38);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


