/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032b8fc; name: FUN_0032b8fc
 */


void FUN_0032b8fc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  
  piVar4 = (int *)FUN_00343a90(param_2,"grpc.internal.config_selector");
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


