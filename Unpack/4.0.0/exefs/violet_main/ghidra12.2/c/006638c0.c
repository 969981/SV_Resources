/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006638c0; name: FUN_006638c0
 */


void FUN_006638c0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = (long)(PTR_DAT_047cf268 + 0x10);
  puVar4 = PTR_DAT_047cbb08;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x78))(*(long **)PTR_DAT_047cbb08,param_1 + 0xb7);
  lVar7 = param_1[0xaf];
  if (lVar7 != 0) {
    param_1[0xaf] = 0;
    param_1[0xb0] = 0;
    plVar8 = (long *)param_1[0xb1];
    param_1[0xb1] = 0;
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
    (**(code **)(**(long **)puVar4 + 0x120))(*(long **)puVar4,lVar7);
  }
  plVar8 = (long *)param_1[0xb1];
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
  plVar8 = (long *)param_1[0x9f];
  param_1[0x83] = (long)(PTR_DAT_047cf270 + 0x10);
  param_1[0x91] = (long)(puVar5 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_006639d4:
    plVar8 = (long *)param_1[0x99];
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
    if (lVar7 != 0) goto LAB_006639d4;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    plVar8 = (long *)param_1[0x99];
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
  if (param_1[0x86] != 0) {
    (**(code **)(**(long **)puVar4 + 0xc0))();
  }
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x7d) & 1) != 0) goto LAB_00663a84;
LAB_00663a58:
    lVar7 = param_1[0x77];
    if (lVar7 != 0) goto LAB_00663a9c;
LAB_00663a60:
    plVar8 = (long *)param_1[0x79];
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x82]);
    if ((*(byte *)(param_1 + 0x7d) & 1) == 0) goto LAB_00663a58;
LAB_00663a84:
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x7f]);
    lVar7 = param_1[0x77];
    if (lVar7 == 0) goto LAB_00663a60;
LAB_00663a9c:
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    plVar8 = (long *)param_1[0x79];
    param_1[0x79] = 0;
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
    (**(code **)(**(long **)puVar4 + 0x120))(*(long **)puVar4,lVar7);
    plVar8 = (long *)param_1[0x79];
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
  plVar8 = (long *)param_1[0x67];
  param_1[0x45] = (long)(PTR_DAT_047ce618 + 0x10);
  param_1[0x59] = (long)(puVar5 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_00663b64:
    plVar8 = (long *)param_1[0x61];
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
    if (lVar7 != 0) goto LAB_00663b64;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    plVar8 = (long *)param_1[0x61];
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
    (**(code **)(**(long **)puVar4 + 0x120))(*(long **)puVar4,lVar7);
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
LAB_00663c90:
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
    if (lVar7 != 0) goto LAB_00663c90;
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
      goto joined_r0x00663d4c;
    }
  }
  lVar7 = param_1[0x11];
joined_r0x00663d4c:
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00663d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)puVar4 + 0xc0))();
  return;
}


