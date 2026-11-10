/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0307e498; name: FUN_0307e498
 */


long * FUN_0307e498(long *param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  plVar4 = (long *)*param_1;
  plVar5 = (long *)*param_2;
  if (plVar4 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = (long *)*param_1;
      plVar5 = (long *)*param_2;
    }
    *param_1 = (long)plVar5;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar5 = plVar4 + 2;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  plVar4 = (long *)param_1[1];
  plVar5 = (long *)param_2[1];
  if (plVar4 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = (long *)param_1[1];
      plVar5 = (long *)param_2[1];
    }
    param_1[1] = (long)plVar5;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar5 = plVar4 + 2;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  plVar4 = (long *)param_1[2];
  plVar5 = (long *)param_2[2];
  if (plVar4 != plVar5) {
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar5 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = (long *)param_1[2];
      plVar5 = (long *)param_2[2];
    }
    param_1[2] = (long)plVar5;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar5 = plVar4 + 2;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  lVar6 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = lVar6;
  lVar6 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar6;
  lVar6 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar6;
  lVar6 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar6;
  lVar6 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = lVar6;
  lVar6 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = lVar6;
  lVar6 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = lVar6;
  *(char *)(param_1 + 0x12) = (char)param_2[0x12];
  lVar6 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = lVar6;
  if (param_2 != param_1) {
    iVar1 = (int)param_2[0x17];
    pvVar7 = (void *)param_2[0x16];
    if ((int)(*(uint *)((long)param_1 + 0xbc) & 0x7fffffff) < iVar1) {
      FUN_0307e760(param_1 + 0x16,PTR_PTR_047d1a50,(long)iVar1);
    }
    memcpy((void *)param_1[0x16],pvVar7,(long)iVar1 << 3);
    lVar6 = param_1[0x18];
    *(int *)(param_1 + 0x17) = iVar1;
    if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar6,0);
      param_1[0x18] = (long)&DAT_03d7702c;
      *(undefined4 *)(param_1 + 0x19) = 0;
    }
    if (*(int *)(param_2[0x18] + 4) == -2) {
      param_1[0x18] = (long)&DAT_03d7702c;
      *(undefined4 *)(param_1 + 0x19) = 0;
    }
    else {
      *(int *)(param_1 + 0x19) = (int)param_2[0x19];
      pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(long)(int)param_2[0x19] * 8 + 8);
      param_1[0x18] = (long)pvVar7;
      memcpy(pvVar7,(void *)param_2[0x18],(long)(int)param_2[0x19] * 8 + 8);
    }
  }
  FUN_0307e80c(param_1 + 0x1a,param_2 + 0x1a);
  *(char *)(param_1 + 0x1e) = (char)param_2[0x1e];
  return param_1;
}


