/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ba9b8; name: FUN_002ba9b8
 */


void FUN_002ba9b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *local_18;
  
  if ((((param_1[0x23] == 0) && (param_1[8] == 0)) && ((char)param_1[3] != '\0')) &&
     (((lVar6 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x30), lVar6 != 0 &&
       (lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0)) && (*(char *)(lVar6 + 0x19) != '\0')))) {
    plVar1 = param_1 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* try { // try from 002baa24 to 002baa2b has its CatchHandler @ 002baa98 */
    local_18 = param_1;
    lVar6 = FUN_002c5728(&local_18,param_1 + 0x22);
    puVar5 = (undefined8 *)param_1[0x23];
    param_1[0x23] = lVar6;
    if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 002baa44 to 002baa47 has its CatchHandler @ 002baa94 */
      (**(code **)*puVar5)();
    }
    plVar1 = local_18;
    if (local_18 != (long *)0x0) {
      plVar2 = local_18 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*local_18 + 8))(local_18);
        FUN_0049e790(PTR_LAB_047cba48,plVar1);
        return;
      }
    }
  }
  return;
}


