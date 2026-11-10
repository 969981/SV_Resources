/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01409ae0; name: FUN_01409ae0
 */


void FUN_01409ae0(long *param_1,ulong param_2,long param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  
  plVar10 = param_1 + 0x22;
  lVar13 = *plVar10;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar13) {
    lVar4 = nn::os::GetCurrentThread();
LAB_01409b24:
    if (*plVar10 == 0) goto code_r0x01409b2c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x23));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x23));
          while (*plVar10 == 0) {
            cVar2 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar14) {
              *plVar10 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01409b34;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar14) {
        *plVar10 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01409b34:
    bVar14 = false;
    goto LAB_01409b38;
  }
  bVar14 = true;
LAB_01409b38:
  if (DAT_0485942c == '\x01') {
    plVar10 = param_1 + 0x1b;
    plVar8 = (long *)*plVar10;
    if (plVar8 != (long *)0x0) {
      plVar7 = plVar10;
      do {
        lVar4 = 0x10;
        if (param_2 <= (ulong)plVar8[4]) {
          lVar4 = 8;
          plVar7 = plVar8;
        }
        plVar8 = *(long **)((long)plVar8 + lVar4);
      } while (plVar8 != (long *)0x0);
      if (plVar7 != plVar10) {
        plVar8 = plVar10;
        if ((ulong)plVar7[4] <= param_2) {
          plVar8 = plVar7;
        }
        if (plVar8 != plVar10) {
          puVar9 = (undefined8 *)param_1[0x21];
          plVar10 = plVar8 + -2;
          *plVar10 = (long)(param_1 + 0x20);
          plVar8[-1] = (long)puVar9;
          param_1[0x21] = (long)plVar10;
          *puVar9 = plVar10;
          param_1[0x1f] = param_1[0x1f] + 1;
          lVar4 = plVar8[2];
          if (lVar4 == 0) {
            plVar10 = (long *)*plVar8;
            if ((plVar8 == (long *)plVar10[2]) &&
               (plVar7 = (long *)*plVar10, plVar10 == (long *)((long *)*plVar10)[2])) {
              do {
                bVar3 = plVar7 == (long *)((long *)*plVar7)[2];
                plVar7 = (long *)*plVar7;
              } while (bVar3);
            }
          }
          else {
            do {
              lVar4 = *(long *)(lVar4 + 8);
            } while (lVar4 != 0);
          }
          FUN_00d28960(param_1 + 0x1b,plVar8);
          param_1[0x1a] = param_1[0x1a] + -1;
          plVar8[1] = 0;
          plVar8[2] = 0;
          *plVar8 = 0;
        }
      }
    }
  }
  if (param_2 == 0) {
LAB_01409d4c:
    if (bVar14) {
      return;
    }
    param_1[0x22] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x23));
    return;
  }
  if (((param_3 == 0) || (param_4 == 0)) || ((char)param_1[10] == '\0')) {
    uVar5 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
  }
  else {
    uVar5 = FUN_00fe5860(param_3,param_4);
  }
  plVar10 = (long *)param_1[4];
  uVar6 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar6 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar10 + 0x18))(plVar10,param_2,uVar5,param_4);
  }
  else {
    FUN_00c48fe8(plVar10,param_2,uVar5,param_4);
  }
  plVar10 = param_1 + 8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = *plVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar12 = param_1[7];
  puVar1 = (ulong *)(param_1 + 7);
  uVar6 = 0;
  if (uVar5 <= uVar12) {
    uVar6 = uVar12 - uVar5;
  }
  uVar11 = *puVar1;
  if (uVar11 == uVar12) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      bVar3 = true;
      goto joined_r0x01409d14;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar3 = false;
joined_r0x01409d14:
  do {
    if (bVar3) goto LAB_01409d4c;
    uVar6 = 0;
    if (uVar5 <= uVar11) {
      uVar6 = uVar11 - uVar5;
    }
    uVar12 = *puVar1;
    if (uVar12 == uVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        bVar3 = true;
        uVar11 = uVar12;
        goto joined_r0x01409d14;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    bVar3 = false;
    uVar11 = uVar12;
  } while( true );
code_r0x01409b2c:
  cVar2 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar14) {
    *plVar10 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01409b34;
  goto LAB_01409b24;
}


