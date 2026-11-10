/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033b8a4; name: FUN_0033b8a4
 */


long * FUN_0033b8a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long local_38;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  lVar3 = FUN_0049e770(PTR_FUN_047cba38,8);
  if (lVar3 != 0) {
    FUN_003413d0(lVar3,param_2);
  }
  local_38 = lVar3;
  plVar4 = (long *)FUN_00341444(param_2);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar5 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,lVar3);
  if (plVar5 == (long *)0x0) {
    plVar6 = (long *)FUN_0033e35c(&local_38,param_1,&uStack_28);
    plVar5 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,local_38,plVar6);
    if (plVar5 == plVar6) {
      plVar5 = plVar4 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puVar7 = (undefined8 *)*plVar6;
      if (puVar7 != (undefined8 *)0x0) {
        plVar5 = puVar7 + 1;
        do {
          lVar3 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 + -1 == 0) {
          (**(code **)*puVar7)(puVar7);
          FUN_0049e790(PTR_LAB_047cba48,puVar7);
        }
      }
      *plVar6 = (long)plVar4;
      plVar5 = plVar6;
    }
  }
  else if (lVar3 != 0) {
    FUN_003413ec(lVar3);
    FUN_0049e790(PTR_LAB_047cba48,lVar3);
  }
  return plVar5;
}


