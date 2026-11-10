/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a7f30; name: FUN_024a7f30
 */


void FUN_024a7f30(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],0x20,8);
  *plVar4 = 0;
  plVar4[2] = *param_2;
  lVar5 = param_2[1];
  plVar4[3] = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4[1] = (long)param_1;
  lVar5 = *param_1;
  *plVar4 = lVar5;
  *(long **)(lVar5 + 8) = plVar4;
  *param_1 = (long)plVar4;
  param_1[2] = param_1[2] + 1;
  return;
}


