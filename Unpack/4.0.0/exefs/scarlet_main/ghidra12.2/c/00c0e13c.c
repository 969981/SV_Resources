/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0e13c; name: FUN_00c0e13c
 */


void FUN_00c0e13c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  if ((param_1[6] != 0) && ((code *)param_1[0x10] != (code *)0x0)) {
    (*(code *)param_1[0x10])(0,0x18);
  }
  lVar5 = tpidr_el0;
  if ((((*(long *)(lVar5 + 0x20) == *param_1) &&
       (plVar4 = *(long **)(lVar5 + 0x28), plVar4 != (long *)0x0)) ||
      ((plVar4 = (long *)param_1[2], plVar4 != (long *)0x0 && (*plVar4 == lVar5 + 0x20)))) &&
     (lVar5 = plVar4[2], 0x17 < (ulong)(plVar4[3] - lVar5))) {
    puVar3 = (undefined8 *)((long)plVar4 + lVar5);
    plVar4[2] = lVar5 + 0x18;
  }
  else {
    puVar3 = (undefined8 *)FUN_00c0e318(param_1,0x18);
  }
  *puVar3 = param_2;
  puVar3[1] = param_3;
  param_1 = param_1 + 3;
  do {
    lVar5 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = (long)puVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar3[2] = lVar5;
  return;
}


