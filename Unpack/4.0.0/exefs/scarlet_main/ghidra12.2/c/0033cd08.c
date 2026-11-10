/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033cd08; name: FUN_0033cd08
 */


void FUN_0033cd08(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *local_28;
  long local_18;
  
  if (param_1[6] != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_18 = param_1[5];
  lVar6 = param_1[4];
  plVar1 = param_1 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
                    /* try { // try from 0033cd50 to 0033cd5b has its CatchHandler @ 0033cde0 */
  local_28 = param_1;
  lVar6 = FUN_0033ce58(&local_18,lVar6 + 0x88,lVar6 + 0x18,lVar6 + 0x168,&local_28);
  puVar5 = (undefined8 *)param_1[6];
  param_1[6] = lVar6;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0033cd74 to 0033cd77 has its CatchHandler @ 0033cddc */
    (**(code **)*puVar5)();
  }
  plVar1 = local_28;
  if (local_28 != (long *)0x0) {
    plVar2 = local_28 + 1;
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
      (**(code **)(*local_28 + 8))(local_28);
      FUN_0049e790(PTR_LAB_047cba48,plVar1);
      return;
    }
  }
  return;
}


