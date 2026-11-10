/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033cb18; name: FUN_0033cb18
 */


void FUN_0033cb18(undefined8 *param_1,undefined8 *param_2,long param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_38 [8];
  int local_30 [2];
  undefined8 *local_28;
  
  *param_1 = 0;
  local_28 = (undefined8 *)0x0;
  *param_1 = *param_2;
  *param_2 = 0;
  if ((param_4 == 2) && (local_28 = (undefined8 *)0x0, *(long *)(param_3 + 0x88) != 0)) {
    plVar1 = (long *)(*(long *)(param_3 + 0x88) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_28 = *(undefined8 **)(param_3 + 0x88);
  }
                    /* try { // try from 0033cb70 to 0033cb77 has its CatchHandler @ 0033cbf4 */
  local_30[0] = param_4;
  FUN_0033aaf0(*param_1,local_30);
  puVar4 = local_28;
  if (local_28 != (undefined8 *)0x0) {
    plVar1 = local_28 + 1;
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
      (**(code **)*local_28)(local_28);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
    }
  }
  param_1[2] = PTR_LAB_047cccb8;
  param_1[3] = param_1;
  param_1[4] = 0;
                    /* try { // try from 0033cbac to 0033cbb7 has its CatchHandler @ 0033cbec */
  FUN_0035351c(auStack_38,param_1 + 1,0);
  return;
}


