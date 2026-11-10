/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00276098; name: FUN_00276098
 */


void FUN_00276098(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *local_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar6 = *(long **)(param_1 + 8);
  plVar1 = plVar6 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (plVar6 != (long *)0x0) {
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
        FUN_0049e790(PTR_LAB_047cba48,plVar6);
      }
    }
  }
  else {
    puVar4[2] = plVar6;
    *puVar4 = &PTR_FUN_0448ca00;
    puVar4[1] = param_1;
    *(undefined8 **)(param_1 + 0x18) = puVar4;
  }
  local_28 = *(undefined8 **)(param_1 + 0x18);
                    /* try { // try from 00276124 to 0027612b has its CatchHandler @ 00276190 */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),&local_28);
  puVar4 = local_28;
  local_28 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_0049e790(PTR_LAB_047cba48,puVar4);
  }
  return;
}


