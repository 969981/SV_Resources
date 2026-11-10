/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033be1c; name: FUN_0033be1c
 */


void FUN_0033be1c(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *local_50;
  void *local_48;
  undefined8 *local_40;
  long local_38;
  
  FUN_0038db40(param_1 + 0x20);
                    /* try { // try from 0033be54 to 0033be67 has its CatchHandler @ 0033c000 */
  lVar5 = (**(code **)(*(long *)*param_4 + 0x18))();
  if (lVar5 != 0) {
    FUN_00358260(*(undefined8 *)(param_1 + 0x18));
  }
  pvVar6 = (void *)*param_3;
  if (pvVar6 == (void *)0x0) {
    if (*(int *)(param_1 + 0x94) != param_2) {
                    /* try { // try from 0033bee4 to 0033beef has its CatchHandler @ 0033bf98 */
      local_38 = param_1;
      FUN_0033e404(param_4,&local_38);
    }
    local_40 = (undefined8 *)*param_4;
    *param_4 = 0;
    FUN_0033a4f8(param_1 + 0x98,&local_40);
    puVar4 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      plVar1 = local_40 + 1;
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
        (**(code **)*local_40)(local_40);
        FUN_0049e790(PTR_LAB_047cba48,puVar4);
      }
    }
  }
  else {
    *param_3 = 0;
    local_50 = (undefined8 *)*param_4;
    *param_4 = 0;
                    /* try { // try from 0033be88 to 0033be9b has its CatchHandler @ 0033bfa0 */
    local_48 = pvVar6;
    FUN_0033a628(param_1 + 0xb0,param_1,param_2,&local_48,&local_50);
    puVar4 = local_50;
    pvVar6 = local_48;
    if (local_50 != (undefined8 *)0x0) {
      plVar1 = local_50 + 1;
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
        (**(code **)*local_50)(local_50);
        FUN_0049e790(PTR_LAB_047cba48,puVar4);
        pvVar6 = local_48;
      }
    }
    local_48 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      local_48 = (void *)0x0;
                    /* try { // try from 0033bec8 to 0033becb has its CatchHandler @ 0033bf9c */
      free(pvVar6);
    }
  }
                    /* try { // try from 0033bf28 to 0033bf2f has its CatchHandler @ 0033bffc */
  FUN_0038db60(param_1 + 0x20);
  return;
}


