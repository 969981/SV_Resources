/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9cc7c; name: FUN_00e9cc7c
 */


void FUN_00e9cc7c(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  if (*(char *)((long)param_1 + 0x21) == '\0') {
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*param_1 == 0 && param_1[1] == 0) {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar7) {
      *param_1 = lVar4;
      param_1[1] = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00e9ccbc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
  do {
    if (*param_1 != 0 || param_1[1] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
        while (*param_1 == 0 && param_1[1] == 0) {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar7) {
            *param_1 = lVar4;
            param_1[1] = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00e9ccbc;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar7) {
      *param_1 = lVar4;
      param_1[1] = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e9ccbc:
  param_1[0x37] = param_1[0x36];
  lVar4 = DAT_0485a0e8;
  plVar1 = (long *)(DAT_0485a0e8 + 0xd70);
  lVar5 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(lVar4 + 0xd78);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(lVar4 + 0xd78) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e9ccec:
  while ((lVar8 != 0 && (lVar5 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0xd80));
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(lVar4 + 0xd78);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(lVar4 + 0xd78) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar10 = *plVar1;
    lVar2 = *(long *)(lVar4 + 0xd78);
    if (lVar10 != lVar8 || lVar2 != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00e9cd1c;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(lVar4 + 0xd74) = lVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
LAB_00e9cd1c:
  if (!bVar7) {
    lVar8 = lVar10;
    lVar9 = lVar2;
    goto LAB_00e9ccec;
  }
  lVar5 = *(long *)(lVar4 + 0x38);
  lVar8 = *(long *)(lVar4 + 0x40);
  if (lVar8 != lVar5) {
    lVar9 = 0;
    lVar10 = 0;
    uVar11 = 0;
    do {
      if ((*(long *)(lVar5 + (lVar10 >> 0x20) * 0x1d0 + 0x1c8) == 0) &&
         (lVar2 = lVar5 + lVar9, param_1[0x1e] == *(long *)(lVar2 + 0x28))) {
        local_50 = 0;
        local_60 = 0;
        local_58 = 0;
        uStack_68 = *(undefined8 *)(lVar2 + 0x78);
        local_70 = *(undefined8 *)(lVar2 + 0x70);
        uVar6 = FUN_00e9d078(lVar2,param_1 + 0x22,&local_74);
        if ((uVar6 & 1) != 0) {
          local_60 = CONCAT44(local_60._4_4_,local_74);
        }
        uVar6 = FUN_00e9d078(lVar2,param_1 + 0x26,&local_74);
        if ((uVar6 & 1) != 0) {
          local_60 = CONCAT44(local_74,(undefined4)local_60);
        }
        uVar6 = FUN_00e9d078(lVar2,param_1 + 0x2a,&local_74);
        if ((uVar6 & 1) != 0) {
          local_58 = CONCAT44(local_58._4_4_,local_74);
        }
        uVar6 = FUN_00e9d078(lVar2,param_1 + 0x2e,&local_74);
        if ((uVar6 & 1) != 0) {
          local_58 = CONCAT44(local_74,(undefined4)local_58);
        }
        uVar6 = FUN_00e9d078(lVar2,param_1 + 0x32,&local_74);
        if ((uVar6 & 1) != 0) {
          local_50 = local_74;
        }
        FUN_00e9d194(param_1 + 0x36,&local_70);
        lVar5 = *(long *)(lVar4 + 0x38);
        lVar8 = *(long *)(lVar4 + 0x40);
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x100000000;
      lVar9 = lVar9 + 0x1d0;
    } while (uVar11 < (ulong)((lVar8 - lVar5 >> 4) * 0x34f72c234f72c235));
  }
  do {
    lVar5 = *plVar1;
    lVar8 = *(long *)(lVar4 + 0xd78);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(long *)(lVar4 + 0xd78) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(lVar4 + 0xd78);
    if (lVar9 != lVar5 || lVar10 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00e9cf2c;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar5;
      *(long *)(lVar4 + 0xd74) = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
LAB_00e9cf2c:
  if (!bVar7) {
    do {
      lVar5 = *plVar1;
      lVar8 = *(long *)(lVar4 + 0xd78);
      if (lVar5 != lVar9 || lVar8 != lVar10) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00e9cfc8;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(lVar4 + 0xd74) = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
joined_r0x00e9cfc8:
    if (!bVar7) {
      do {
        lVar9 = *plVar1;
        lVar10 = *(long *)(lVar4 + 0xd78);
        if (lVar9 != lVar5 || lVar10 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar5 = lVar9;
          lVar8 = lVar10;
          goto joined_r0x00e9cfc8;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar5;
          *(long *)(lVar4 + 0xd74) = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
      lVar5 = lVar9;
      lVar8 = lVar10;
      goto joined_r0x00e9cfc8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0xd80));
  do {
    lVar4 = *param_1;
    lVar5 = param_1[1];
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar7) {
      *param_1 = lVar4;
      param_1[1] = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *param_1;
    lVar9 = param_1[1];
    if (lVar8 != lVar4 || lVar9 != lVar5) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_00e9cf74;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar7) {
      *param_1 = 0;
      *(long *)((long)param_1 + 4) = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
LAB_00e9cf74:
  if (!bVar7) {
    do {
      lVar4 = *param_1;
      lVar5 = param_1[1];
      if (lVar4 != lVar8 || lVar5 != lVar9) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x00e9d038;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar7) {
        *param_1 = 0;
        *(long *)((long)param_1 + 4) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
joined_r0x00e9d038:
    if (!bVar7) {
      do {
        lVar8 = *param_1;
        lVar9 = param_1[1];
        if (lVar8 != lVar4 || lVar9 != lVar5) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar4 = lVar8;
          lVar5 = lVar9;
          goto joined_r0x00e9d038;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar7) {
          *param_1 = 0;
          *(long *)((long)param_1 + 4) = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
      lVar4 = lVar8;
      lVar5 = lVar9;
      goto joined_r0x00e9d038;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 2));
  return;
}


