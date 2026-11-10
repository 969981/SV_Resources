/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033ca08; name: FUN_0033ca08
 */


long FUN_0033ca08(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *local_28;
  
  lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (lVar5 != 0) {
    local_28 = (undefined8 *)0x0;
    if (*param_1 != 0) {
      plVar1 = (long *)(*param_1 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_28 = (undefined8 *)*param_1;
    }
                    /* try { // try from 0033ca68 to 0033ca73 has its CatchHandler @ 0033cacc */
    FUN_0033cb18(lVar5,&local_28,*param_2,*param_3);
    puVar4 = local_28;
    if (local_28 != (undefined8 *)0x0) {
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
        (**(code **)*local_28)(local_28);
        FUN_0049e790(PTR_LAB_047cba48,puVar4);
      }
    }
  }
  return lVar5;
}


