/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b3db0; name: FUN_002b3db0
 */


void FUN_002b3db0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *local_18;
  
  if (param_1[7] == 0) {
    plVar1 = param_1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* try { // try from 002b3de8 to 002b3def has its CatchHandler @ 002b3e5c */
    local_18 = param_1;
    lVar5 = FUN_002c2874(&local_18);
    puVar6 = (undefined8 *)param_1[7];
    param_1[7] = lVar5;
    if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 002b3e08 to 002b3e0b has its CatchHandler @ 002b3e58 */
      (**(code **)*puVar6)();
    }
    plVar1 = local_18;
    if (local_18 != (long *)0x0) {
      plVar2 = local_18 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_18 + 8))(local_18);
        FUN_0049e790(PTR_LAB_047cba48,plVar1);
        return;
      }
    }
  }
  return;
}


