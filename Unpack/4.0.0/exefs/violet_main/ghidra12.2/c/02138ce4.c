/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02138ce4; name: FUN_02138ce4
 */


void FUN_02138ce4(long *param_1,long *param_2)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_014952e4();
  if (*param_2 == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    sVar2 = *(short *)(*param_2 + 0x1a);
    *(bool *)(param_1 + 2) = sVar2 == 0;
    if (sVar2 != 0) {
      lVar6 = 0;
      if (*param_1 != 0) {
        lVar5 = *(long *)(*param_1 + 0x10);
        lVar6 = 0;
        if (lVar5 != 0) {
          lVar6 = lVar5 + -0x28;
        }
      }
      plVar1 = (long *)(lVar6 + 0x88);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}


