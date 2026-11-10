/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0303eecc; name: FUN_0303eecc
 */


void FUN_0303eecc(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  void *__dest;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  char *__s;
  ulong uVar8;
  
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  uVar8 = *param_1;
  if ((char *)(uVar8 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      uVar5 = 0;
    }
    else {
      sVar3 = strlen(__s);
      sVar3 = (size_t)((int)sVar3 + 1);
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar3);
      memcpy(__dest,__s,sVar3);
      uVar5 = (ulong)__dest | 1;
    }
    *param_1 = uVar5;
    if ((uVar8 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
    }
  }
  memcpy(param_1 + 1,param_2 + 1,0x50);
  plVar4 = (long *)param_1[0xb];
  plVar6 = (long *)param_2[0xb];
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[0xb];
      plVar6 = (long *)param_2[0xb];
    }
    param_1[0xb] = (ulong)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  plVar4 = (long *)param_1[0xc];
  plVar6 = (long *)param_2[0xc];
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[0xc];
      plVar6 = (long *)param_2[0xc];
    }
    param_1[0xc] = (ulong)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  plVar4 = (long *)param_1[0xd];
  plVar6 = (long *)param_2[0xd];
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[0xd];
      plVar6 = (long *)param_2[0xd];
    }
    param_1[0xd] = (ulong)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  param_1[0xe] = param_2[0xe];
  uVar8 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar8;
  uVar8 = param_2[0x12];
  *(undefined2 *)((long)param_1 + 0x94) = *(undefined2 *)((long)param_2 + 0x94);
  *(int *)(param_1 + 0x12) = (int)uVar8;
  plVar4 = (long *)param_1[0x13];
  plVar6 = (long *)param_2[0x13];
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[0x13];
      plVar6 = (long *)param_2[0x13];
    }
    param_1[0x13] = (ulong)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  plVar4 = (long *)param_1[0x14];
  plVar6 = (long *)param_2[0x14];
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[0x14];
      plVar6 = (long *)param_2[0x14];
    }
    param_1[0x14] = (ulong)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  *(char *)(param_1 + 0x15) = (char)param_2[0x15];
  uVar8 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar8;
  uVar8 = param_2[0x18];
  plVar4 = (long *)param_1[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar8;
  plVar6 = (long *)param_2[0x1a];
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[0x1a];
      plVar6 = (long *)param_2[0x1a];
    }
    param_1[0x1a] = (ulong)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  plVar4 = (long *)param_1[0x1b];
  plVar6 = (long *)param_2[0x1b];
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[0x1b];
      plVar6 = (long *)param_2[0x1b];
    }
    param_1[0x1b] = (ulong)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  plVar4 = (long *)param_1[0x1c];
  plVar6 = (long *)param_2[0x1c];
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[0x1c];
      plVar6 = (long *)param_2[0x1c];
    }
    param_1[0x1c] = (ulong)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  memcpy(param_1 + 0x1d,param_2 + 0x1d,0x38);
  plVar4 = (long *)param_1[0x24];
  plVar6 = (long *)param_2[0x24];
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = (long *)param_1[0x24];
      plVar6 = (long *)param_2[0x24];
    }
    param_1[0x24] = (ulong)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  uVar8 = param_2[0x25];
  uVar5 = param_2[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar5;
  param_1[0x25] = uVar8;
  return;
}


