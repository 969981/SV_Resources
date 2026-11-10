/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0027ad24; name: FUN_0027ad24
 */


long FUN_0027ad24(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_40;
  long *plStack_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  
  lVar5 = FUN_0049e770(PTR_FUN_047cba38,0x58);
  if (lVar5 != 0) {
    plStack_38 = (long *)param_1[1];
    local_40 = *param_1;
    uStack_28 = param_1[3];
    local_30 = (undefined8 *)param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 0027ad64 to 0027ad6f has its CatchHandler @ 0027ade8 */
    FUN_0027ae58(lVar5,&local_40,*param_2);
    puVar4 = local_30;
    local_30 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
    }
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return lVar5;
}


