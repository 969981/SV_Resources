/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c5364; name: FUN_016c5364
 */


void FUN_016c5364(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  if ((*plVar6 != 0) && (plVar2 = (long *)(*plVar6 + (long)plVar6), plVar2 != (long *)0x0)) {
    if (plVar2[1] != 0) {
      plVar1 = plVar2 + 2;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    *plVar6 = 0;
  }
  return;
}


