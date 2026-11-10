/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036c1a0; name: FUN_0036c1a0
 */


void FUN_0036c1a0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(param_1 + 0x8b8);
  do {
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar3 = (long *)(param_1 + 0x910);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_003505cc(param_1 + 0x10,4);
  plVar3 = (long *)FUN_0038c780(0x48);
  *plVar3 = param_1;
  plVar3[6] = (long)&LAB_0036d000;
  plVar3[7] = (long)plVar3;
  plVar3[8] = 0;
  lVar4 = FUN_0037b8b0(plVar3 + 5);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) | 0x40;
  *(undefined8 *)(*(long *)(lVar4 + 8) + 0x88) = 4;
  *(long *)(lVar4 + 0x18) = param_1;
  plVar3[4] = 0;
  plVar3[2] = (long)&LAB_0036d060;
  plVar3[3] = lVar4;
  FUN_003504a8(param_1 + 0x10,plVar3 + 1,0,"executing batch");
  return;
}


