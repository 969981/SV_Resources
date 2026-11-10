/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00321870; name: FUN_00321870
 */


void FUN_00321870(long param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_48;
  long *local_40;
  undefined1 auStack_28 [8];
  
  lVar7 = *(long *)(param_1 + 8);
  puVar5 = (undefined8 *)*param_3;
  *param_3 = 0;
  plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (plVar3 == (long *)0x0) {
    if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 00321960 to 00321967 has its CatchHandler @ 0032197c */
      (**(code **)*puVar5)(puVar5);
    }
  }
  else {
    *plVar3 = lVar7;
    *(undefined4 *)(plVar3 + 1) = param_2;
    plVar3[2] = (long)puVar5;
    plVar4 = *(long **)(lVar7 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uVar6 = *(undefined8 *)(*plVar3 + 0xb0);
    local_40 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    local_40[4] = (long)plVar3;
    *local_40 = (long)&PTR_LAB_044955a8;
    local_40[1] = 0;
    local_40[2] = 0;
    local_48 = local_40 + 3;
    *local_48 = (long)&PTR_LAB_044955e0;
                    /* try { // try from 00321908 to 00321917 has its CatchHandler @ 00321980 */
    FUN_003627bc(uVar6,&local_48,auStack_28);
    if (local_40 != (long *)0x0) {
      plVar3 = local_40 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}


