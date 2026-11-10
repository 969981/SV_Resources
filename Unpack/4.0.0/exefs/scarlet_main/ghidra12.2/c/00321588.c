/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00321588; name: FUN_00321588
 */


void FUN_00321588(long param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_50 [8];
  long *local_48;
  long *local_40;
  
                    /* try { // try from 003215a8 to 003215af has its CatchHandler @ 00321860 */
  FUN_0038db40(param_1 + 0x1a0);
  lVar3 = *(long *)(param_1 + 0x1c8);
  if (lVar3 != 0) {
    lVar5 = lVar3;
    lVar8 = param_1 + 0x1c8;
    do {
      bVar2 = *(ulong *)(lVar5 + 0x20) < param_2;
      if (!bVar2) {
        lVar8 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar2 * 8);
    } while (lVar5 != 0);
    if ((lVar8 != param_1 + 0x1c8) && (*(ulong *)(lVar8 + 0x20) <= param_2)) {
      plVar6 = *(long **)(lVar8 + 0x28);
      *(undefined8 *)(lVar8 + 0x28) = 0;
      plVar9 = *(long **)(lVar8 + 8);
      if (*(long **)(lVar8 + 8) == (long *)0x0) {
        plVar9 = (long *)(lVar8 + 0x10);
        plVar4 = (long *)*plVar9;
        if (*plVar4 != lVar8) {
          do {
            lVar5 = *plVar9;
            plVar9 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar9;
          } while (*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar4 = plVar9;
          plVar9 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if (*(long *)(param_1 + 0x1c0) == lVar8) {
        *(long **)(param_1 + 0x1c0) = plVar4;
      }
      *(long *)(param_1 + 0x1d0) = *(long *)(param_1 + 0x1d0) + -1;
      FUN_01336080(lVar3,lVar8);
      plVar9 = *(long **)(lVar8 + 0x28);
      if (plVar9 != (long *)0x0) {
        plVar4 = plVar9 + 1;
        do {
          lVar3 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
          FUN_0049e790(PTR_LAB_047cba48,plVar9);
        }
      }
      FUN_0049e790(PTR_LAB_047cba48,lVar8);
      goto LAB_003215f4;
    }
  }
  plVar6 = (long *)0x0;
LAB_003215f4:
                    /* try { // try from 003215f4 to 003215fb has its CatchHandler @ 0032185c */
  FUN_0038db60(param_1 + 0x1a0);
  if ((plVar6 != (long *)0x0) && ((param_3 & 1) != 0)) {
    plVar9 = plVar6 + 9;
    do {
      if ((char)*plVar9 != '\0') {
        ClearExclusiveLocal();
        goto LAB_003216bc;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(char *)plVar9 = '\x01';
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
                    /* try { // try from 00321620 to 0032162b has its CatchHandler @ 00321818 */
    FUN_0035351c(&local_48,plVar6[7],4);
    uVar7 = *(undefined8 *)(plVar6[2] + 0xb0);
    local_40 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    local_40[4] = (long)plVar6;
    *local_40 = (long)&PTR_LAB_04495458;
    local_40[1] = 0;
    local_40[2] = 0;
    local_48 = local_40 + 3;
    *local_48 = (long)&PTR_LAB_04495490;
                    /* try { // try from 0032166c to 0032167b has its CatchHandler @ 003217d8 */
    FUN_003627bc(uVar7,&local_48,auStack_50);
    if (local_40 != (long *)0x0) {
      plVar9 = local_40 + 1;
      do {
        lVar3 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
LAB_003216bc:
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 1;
    do {
      lVar3 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      FUN_0049e790(PTR_LAB_047cba48,plVar6);
    }
  }
  return;
}


