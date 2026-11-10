/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f3a064; name: FUN_02f3a064
 */


long * FUN_02f3a064(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  size_t sVar4;
  void *__dest;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  char *__s;
  ulong uVar8;
  
  plVar3 = (long *)*param_1;
  plVar5 = (long *)*param_2;
  if (plVar3 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = (long *)*param_1;
      plVar5 = (long *)*param_2;
    }
    *param_1 = (long)plVar5;
    if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
      plVar5 = plVar3 + 2;
      do {
        lVar7 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))();
      }
    }
  }
  lVar7 = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  param_1[1] = lVar7;
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  uVar8 = param_1[3];
  __s = (char *)(param_2[3] & 0xfffffffffffffffe);
  if ((char *)(uVar8 & 0xfffffffffffffffe) != __s) {
    if (__s == (char *)0x0) {
      uVar6 = 0;
    }
    else {
      sVar4 = strlen(__s);
      sVar4 = (size_t)((int)sVar4 + 1);
      __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar4);
      memcpy(__dest,__s,sVar4);
      uVar6 = (ulong)__dest | 1;
    }
    param_1[3] = uVar6;
    if ((uVar8 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
    }
  }
  lVar7 = param_2[4];
  *(char *)(param_1 + 5) = (char)param_2[5];
  param_1[4] = lVar7;
  lVar7 = param_2[6];
  plVar3 = (long *)param_1[0xf];
  param_1[7] = param_2[7];
  param_1[6] = lVar7;
  lVar7 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar7;
  lVar7 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar7;
  lVar7 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar7;
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  plVar5 = (long *)param_2[0xf];
  if (plVar3 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = (long *)param_1[0xf];
      plVar5 = (long *)param_2[0xf];
    }
    param_1[0xf] = (long)plVar5;
    if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
      plVar5 = plVar3 + 2;
      do {
        lVar7 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))();
      }
    }
  }
  plVar3 = (long *)param_1[0x10];
  plVar5 = (long *)param_2[0x10];
  if (plVar3 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = (long *)param_1[0x10];
      plVar5 = (long *)param_2[0x10];
    }
    param_1[0x10] = (long)plVar5;
    if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
      plVar5 = plVar3 + 2;
      do {
        lVar7 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))();
      }
    }
  }
  *(short *)(param_1 + 0x11) = (short)param_2[0x11];
  *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)((long)param_2 + 0x8c);
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
  plVar3 = (long *)param_1[0x13];
  plVar5 = (long *)param_2[0x13];
  if (plVar3 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = (long *)param_1[0x13];
      plVar5 = (long *)param_2[0x13];
    }
    param_1[0x13] = (long)plVar5;
    if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
      plVar5 = plVar3 + 2;
      do {
        lVar7 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))();
      }
    }
  }
  *(char *)(param_1 + 0x14) = (char)param_2[0x14];
  return param_1;
}


