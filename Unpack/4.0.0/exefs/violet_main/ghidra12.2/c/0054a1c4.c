/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054a1c4; name: FUN_0054a1c4
 */


void FUN_0054a1c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *local_38;
  
  FUN_0026df54(auStack_40);
  FUN_0026df60(auStack_40,param_3);
                    /* try { // try from 0054a1f0 to 0054a1ff has its CatchHandler @ 0054a258 */
  FUN_0054a29c(param_1,param_2,auStack_40);
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
      return;
    }
  }
  return;
}


