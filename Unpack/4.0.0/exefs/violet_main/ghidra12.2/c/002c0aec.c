/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c0aec; name: FUN_002c0aec
 */


void FUN_002c0aec(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  
  piVar4 = (int *)FUN_00343a90(param_2,"grpc.xds_client");
  if (((piVar4 == (int *)0x0) || (*piVar4 != 2)) || (lVar5 = *(long *)(piVar4 + 4), lVar5 == 0)) {
    *param_1 = 0;
    return;
  }
  plVar1 = (long *)(lVar5 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = lVar5;
  return;
}


