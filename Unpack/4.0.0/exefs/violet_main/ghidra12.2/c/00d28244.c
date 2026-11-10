/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d28244; name: FUN_00d28244
 */


long * FUN_00d28244(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong local_50;
  ulong uStack_48;
  
  lVar6 = nn::os::GetCurrentThread();
  while (*param_1 == 0) {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00d28280;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
  do {
    if (*param_1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
        while (*param_1 == 0) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar5) {
            *param_1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d28280;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar5) {
      *param_1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d28280:
  plVar7 = param_1 + 0x19;
  plVar11 = (long *)*plVar7;
  if (plVar11 == (long *)0x0) {
LAB_00d283b8:
    uVar13 = 0;
    plVar14 = plVar7;
  }
  else {
    lVar6 = 0x10;
    plVar14 = plVar7;
    if (param_2 <= (ulong)plVar11[5]) {
      lVar6 = 8;
      plVar14 = plVar11;
    }
    plVar11 = *(long **)((long)plVar11 + lVar6);
    if (plVar11 != (long *)0x0) {
      lVar6 = 0x10;
      if (param_2 <= (ulong)plVar11[5]) {
        lVar6 = 8;
        plVar14 = plVar11;
      }
      plVar11 = *(long **)((long)plVar11 + lVar6);
      if (plVar11 != (long *)0x0) {
        lVar6 = 0x10;
        if (param_2 <= (ulong)plVar11[5]) {
          lVar6 = 8;
          plVar14 = plVar11;
        }
        plVar11 = *(long **)((long)plVar11 + lVar6);
        if (plVar11 != (long *)0x0) {
          lVar6 = 0x10;
          if (param_2 <= (ulong)plVar11[5]) {
            lVar6 = 8;
            plVar14 = plVar11;
          }
          plVar11 = *(long **)((long)plVar11 + lVar6);
          if (plVar11 != (long *)0x0) {
            lVar6 = 0x10;
            if (param_2 <= (ulong)plVar11[5]) {
              lVar6 = 8;
              plVar14 = plVar11;
            }
            for (plVar11 = *(long **)((long)plVar11 + lVar6); plVar11 != (long *)0x0;
                plVar11 = *(long **)((long)plVar11 + lVar6)) {
              lVar6 = 0x10;
              if (param_2 <= (ulong)plVar11[5]) {
                lVar6 = 8;
                plVar14 = plVar11;
              }
            }
          }
        }
      }
    }
    if (plVar14 == plVar7) {
      uVar13 = 0;
    }
    else {
      while( true ) {
        uVar13 = plVar14[4];
        uVar2 = plVar14[5];
        uVar15 = (uVar2 + uVar13) - param_2 & -param_3;
        if ((long)uVar13 <= (long)uVar15) break;
        plVar11 = (long *)plVar14[2];
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)*plVar14;
          if (plVar14 == (long *)plVar11[2]) {
            plVar12 = (long *)*plVar11;
            plVar14 = plVar11;
            if (plVar11 == (long *)plVar12[2]) {
              do {
                plVar14 = plVar12;
                plVar12 = (long *)*plVar14;
              } while (plVar14 == (long *)plVar12[2]);
            }
          }
          else {
            plVar12 = plVar11;
          }
          plVar11 = plVar14;
          if ((long *)plVar14[2] != plVar12) {
            plVar11 = plVar12;
          }
        }
        else {
          plVar14 = (long *)plVar11[1];
          if (plVar14 != (long *)0x0) {
            plVar11 = plVar14;
            for (plVar14 = (long *)plVar14[1]; plVar14 != (long *)0x0; plVar14 = (long *)plVar14[1])
            {
              plVar11 = plVar14;
            }
          }
        }
        plVar14 = plVar11;
        if (plVar11 == plVar7) goto LAB_00d283b8;
      }
      if (((plVar14 == plVar7) ||
          (param_2 = (uVar2 + uVar13) - uVar15, (uVar13 & param_3 - 1U) != 0)) ||
         (((uVar8 = uVar2 - param_2, 0x100 < uVar2 || (param_2 <= uVar8)) &&
          (0x80 < uVar8 || param_2 <= uVar8 * 2)))) {
        uVar13 = uVar15;
      }
      else {
        param_2 = uVar2;
      }
    }
  }
  plVar7 = param_1 + 0x19;
  if (plVar7 == plVar14) {
    plVar11 = (long *)0x0;
    goto LAB_00d286c4;
  }
  plVar11 = plVar14 + -2;
  if (plVar14[5] == param_2) {
    lVar6 = plVar14[2];
    if (lVar6 == 0) {
      plVar12 = (long *)*plVar14;
      if (((long *)plVar12[2] == plVar14) &&
         (plVar9 = (long *)*plVar12, plVar12 == (long *)((long *)*plVar12)[2])) {
        do {
          bVar5 = plVar9 == (long *)((long *)*plVar9)[2];
          plVar9 = (long *)*plVar9;
        } while (bVar5);
      }
    }
    else {
      do {
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != 0);
    }
    FUN_00d28960(plVar7,plVar14);
    param_1[0x18] = param_1[0x18] + -1;
    plVar14[1] = 0;
    plVar14[2] = 0;
    *plVar14 = 0;
  }
  else {
    lVar6 = *plVar11;
    plVar11 = (long *)param_1[0x16];
    local_50 = param_2;
    uStack_48 = uVar13;
    if ((plVar11 == (long *)0x0) || (plVar11 == param_1 + 0x16)) {
      FUN_00d28e08(param_1 + 3,&uStack_48,&local_50);
      uVar13 = (param_1[0xc] + param_1[0xb]) - 1;
      plVar11 = (long *)(*(long *)(param_1[4] + (uVar13 / 0x38) * 8) + (uVar13 % 0x38) * 0x48);
    }
    else {
      plVar11 = (long *)param_1[0x17];
      plVar11[6] = uVar13;
      plVar11[7] = param_2;
      plVar9 = (long *)param_1[0x17];
      lVar1 = *plVar9;
      plVar12 = (long *)plVar9[1];
      *plVar12 = lVar1;
      *(long **)(lVar1 + 8) = plVar12;
      param_1[0x15] = param_1[0x15] + -1;
      *plVar9 = 0;
      plVar9[1] = 0;
    }
    puVar10 = *(undefined8 **)(lVar6 + 8);
    *plVar11 = lVar6;
    plVar11[1] = (long)puVar10;
    *(long **)(lVar6 + 8) = plVar11;
    *puVar10 = plVar11;
    param_1[0x12] = param_1[0x12] + 1;
    lVar6 = plVar14[2];
    if (lVar6 == 0) {
      plVar12 = (long *)*plVar14;
      if (((long *)plVar12[2] == plVar14) &&
         (plVar9 = (long *)*plVar12, plVar12 == (long *)((long *)*plVar12)[2])) {
        do {
          bVar5 = plVar9 == (long *)((long *)*plVar9)[2];
          plVar9 = (long *)*plVar9;
        } while (bVar5);
      }
    }
    else {
      do {
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != 0);
    }
    FUN_00d28960(plVar7,plVar14);
    param_1[0x18] = param_1[0x18] + -1;
    *plVar14 = 0;
    plVar14[1] = 0;
    plVar14[2] = 0;
    plVar14[5] = plVar14[5] - param_2;
    plVar12 = (long *)param_1[0x19];
    if (plVar12 == (long *)0x0) {
LAB_00d2868c:
      param_1[0x1b] = (long)plVar14;
      param_1[0x19] = (long)plVar14;
      plVar12 = plVar7;
LAB_00d28698:
      param_1[0x1a] = (long)plVar14;
    }
    else {
      uVar13 = plVar14[5];
      bVar5 = uVar13 < (ulong)plVar12[5];
      lVar6 = 8;
      if (!bVar5) {
        lVar6 = 0x10;
      }
      plVar9 = *(long **)((long)plVar12 + lVar6);
      if (plVar9 != (long *)0x0) {
        bVar5 = uVar13 < (ulong)plVar9[5];
        lVar6 = 8;
        if (!bVar5) {
          lVar6 = 0x10;
        }
        plVar12 = *(long **)((long)plVar9 + lVar6);
        if (plVar12 == (long *)0x0) {
LAB_00d285bc:
          plVar12 = plVar9;
        }
        else {
          bVar5 = uVar13 < (ulong)plVar12[5];
          lVar6 = 8;
          if (!bVar5) {
            lVar6 = 0x10;
          }
          plVar9 = *(long **)((long)plVar12 + lVar6);
          if (plVar9 != (long *)0x0) {
            bVar5 = uVar13 < (ulong)plVar9[5];
            lVar6 = 8;
            if (!bVar5) {
              lVar6 = 0x10;
            }
            plVar12 = *(long **)((long)plVar9 + lVar6);
            if (plVar12 == (long *)0x0) goto LAB_00d285bc;
            bVar5 = uVar13 < (ulong)plVar12[5];
            lVar6 = 8;
            if (!bVar5) {
              lVar6 = 0x10;
            }
            plVar9 = *(long **)((long)plVar12 + lVar6);
            if (plVar9 != (long *)0x0) {
              bVar5 = uVar13 < (ulong)plVar9[5];
              lVar6 = 8;
              if (!bVar5) {
                lVar6 = 0x10;
              }
              plVar4 = *(long **)((long)plVar9 + lVar6);
              if (*(long **)((long)plVar9 + lVar6) == (long *)0x0) goto LAB_00d285bc;
              do {
                plVar12 = plVar4;
                bVar5 = uVar13 < (ulong)plVar12[5];
                lVar6 = 8;
                if (!bVar5) {
                  lVar6 = 0x10;
                }
                plVar4 = *(long **)((long)plVar12 + lVar6);
              } while (*(long **)((long)plVar12 + lVar6) != (long *)0x0);
            }
          }
        }
      }
      if (plVar12 == plVar7) goto LAB_00d2868c;
      if (bVar5) {
        plVar12[1] = (long)plVar14;
        if (plVar12 != (long *)param_1[0x1a]) goto LAB_00d2869c;
        goto LAB_00d28698;
      }
      plVar12[2] = (long)plVar14;
      if (plVar12 == (long *)param_1[0x1b]) {
        param_1[0x1b] = (long)plVar14;
      }
    }
LAB_00d2869c:
    plVar14[2] = 0;
    *plVar14 = (long)plVar12;
    plVar14[1] = 0;
    FUN_00d287fc(plVar7,plVar14);
    param_1[0x18] = param_1[0x18] + 1;
  }
  if (((char)param_1[0x1e] != '\0') && (uVar13 = FUN_00d2985c(param_1), (uVar13 & 1) == 0)) {
    FUN_02752ed4(param_1);
  }
LAB_00d286c4:
  *param_1 = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 1));
  return plVar11;
}


