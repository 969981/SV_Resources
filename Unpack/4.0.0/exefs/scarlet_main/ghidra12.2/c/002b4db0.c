/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b4db0; name: FUN_002b4db0
 */


void FUN_002b4db0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_047cc790 + 0x10);
                    /* try { // try from 002b4dcc to 002b4e1f has its CatchHandler @ 002b4e90 */
  FUN_00373780(param_1 + 5);
  FUN_00373780(param_1 + 0x12);
  FUN_0036a810(param_1[8]);
  FUN_0036a810(param_1[0xd]);
  puVar4 = (undefined8 *)param_1[0x16];
  if ((puVar4 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar4, plVar5 != (long *)0x0)) {
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)puVar4[3])(puVar4[4]);
    }
  }
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002b4e8c to 002b4e8f has its CatchHandler @ 002b4e90 */
    abort();
  }
  FUN_0036b880();
  FUN_002c3934(param_1 + 0x21,param_1[0x22]);
  FUN_002a515c(param_1 + 0x1e,param_1[0x1f]);
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
      return;
    }
  }
  return;
}


