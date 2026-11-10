/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00226c78; name: FUN_00226c78
 */


void FUN_00226c78(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = (long)(PTR_DAT_047cbed8 + 0x10);
  if ((*(byte *)(param_1 + 0x85) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x82) & 1) != 0) goto LAB_00226cdc;
LAB_00226ca8:
    lVar7 = param_1[0x7c];
    if (lVar7 != 0) goto LAB_00226cfc;
LAB_00226cb8:
    plVar8 = (long *)param_1[0x7e];
    puVar4 = (undefined8 *)PTR_DAT_047cbb08;
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x87]);
    if ((*(byte *)(param_1 + 0x82) & 1) == 0) goto LAB_00226ca8;
LAB_00226cdc:
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x84]);
    lVar7 = param_1[0x7c];
    if (lVar7 == 0) goto LAB_00226cb8;
LAB_00226cfc:
    puVar4 = (undefined8 *)PTR_DAT_047cbb08;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    plVar8 = (long *)param_1[0x7e];
    param_1[0x7e] = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar8 = (long *)*puVar4;
    (**(code **)(*plVar8 + 0x120))(plVar8,lVar7);
    plVar8 = (long *)param_1[0x7e];
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar5 = PTR_DAT_047cbe90;
  plVar8 = (long *)param_1[0x6c];
  param_1[0x45] = (long)(PTR_DAT_047cbee8 + 0x10);
  param_1[0x5e] = (long)(puVar5 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_00226dcc:
    plVar8 = (long *)param_1[0x66];
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 != 0) goto LAB_00226dcc;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    plVar8 = (long *)param_1[0x66];
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (param_1[0x49] != 0) {
    (**(code **)(*(long *)*puVar4 + 0xc0))();
  }
  plVar8 = (long *)param_1[0x48];
  param_1[0x48] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
    FUN_0049e790(PTR_LAB_047cba48,plVar8);
  }
  lVar7 = param_1[0x40];
  if (lVar7 != 0) {
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    plVar8 = (long *)param_1[0x42];
    param_1[0x42] = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
    (**(code **)(*(long *)*puVar4 + 0x120))((long *)*puVar4,lVar7);
  }
  plVar8 = (long *)param_1[0x42];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)param_1[0x30];
  param_1[9] = (long)(PTR_DAT_047cbee0 + 0x10);
  param_1[0x22] = (long)(puVar5 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_00226f3c:
    plVar8 = (long *)param_1[0x2a];
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 != 0) goto LAB_00226f3c;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    plVar8 = (long *)param_1[0x2a];
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)param_1[0x14];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
      lVar7 = param_1[0x11];
      goto joined_r0x00226ff8;
    }
  }
  lVar7 = param_1[0x11];
joined_r0x00226ff8:
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00226fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar4 + 0xc0))();
  return;
}


