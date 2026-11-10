/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00375414; name: FUN_00375414
 */


long FUN_00375414(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *local_28;
  
  lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x30);
  if (lVar5 != 0) {
    local_28 = (long *)*param_1;
    *param_1 = 0;
                    /* try { // try from 00375454 to 00375463 has its CatchHandler @ 003754bc */
    FUN_00375508(lVar5,&local_28,*param_2,param_3);
    plVar4 = local_28;
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 1;
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
        (**(code **)(*local_28 + 8))(local_28);
        FUN_0049e790(PTR_LAB_047cba48,plVar4);
      }
    }
  }
  return lVar5;
}


