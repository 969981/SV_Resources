/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d2bee4; name: FUN_00d2bee4
 */


void FUN_00d2bee4(long *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  plVar1 = (long *)(param_2 + 0x570);
  lVar9 = nn::os::GetCurrentThread();
  do {
    lVar12 = *plVar1;
    lVar13 = *(long *)(param_2 + 0x578);
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar12;
      *(long *)(param_2 + 0x578) = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00d2bf20:
  while ((lVar12 != 0 && (lVar9 != lVar12))) {
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x580));
    do {
      lVar12 = *plVar1;
      lVar13 = *(long *)(param_2 + 0x578);
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar12;
        *(long *)(param_2 + 0x578) = lVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar12 || *(long *)(param_2 + 0x578) != lVar13) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00d2bf50;
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar12;
      *(long *)(param_2 + 0x574) = lVar13 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar11 = true;
LAB_00d2bf50:
  if (!bVar11) {
    lVar12 = lVar3;
    lVar13 = *(long *)(param_2 + 0x578);
    goto LAB_00d2bf20;
  }
  lVar9 = *(long *)(param_2 + 0x5a0);
  if ((lVar9 != 0) && (sVar4 = *(short *)(lVar9 + 0x1a), sVar4 != 0)) {
    puVar15 = *(undefined8 **)(lVar9 + 8);
    if (((*PTR_DAT_047d39b0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar7 = PTR_DAT_047d39c8, iVar8 != 0)) {
      if (((*PTR_DAT_047d39c0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar8 != 0)) {
        *(undefined8 *)puVar7 = 0;
        __cxa_guard_release(PTR_DAT_047d39c0);
      }
      *(undefined **)PTR_DAT_047d39b8 = puVar7;
      __cxa_guard_release(PTR_DAT_047d39b0);
    }
    if (puVar15 != (undefined8 *)0x0) {
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        if (puVar15 == (undefined8 *)PTR_DAT_047d39b8) goto LAB_00d2c0a4;
        puVar15 = (undefined8 *)*puVar15;
      } while (puVar15 != (undefined8 *)0x0);
    }
  }
  goto LAB_00d2bf6c;
  while (sVar4 = sVar5, sVar5 != 0) {
LAB_00d2c0a4:
    sVar5 = *psVar2;
    if (sVar5 == sVar4) {
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar11) {
        *psVar2 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_00d2c0c8;
      bVar11 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d2c0c8:
      bVar11 = false;
    }
    if (bVar11) {
      if (*(long *)(lVar9 + 0x10) != 0) {
        plVar10 = *(long **)(param_2 + 0x5b0);
        plVar14 = (long *)(*(long *)(lVar9 + 0x10) + -8);
        *param_1 = (long)plVar10;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x10))();
        }
        (**(code **)(*plVar14 + 0x18))(plVar14);
        goto LAB_00d2bf70;
      }
      break;
    }
  }
LAB_00d2bf6c:
  *param_1 = 0;
LAB_00d2bf70:
  do {
    lVar9 = *plVar1;
    lVar12 = *(long *)(param_2 + 0x578);
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x578) = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar13 = *plVar1;
    lVar3 = *(long *)(param_2 + 0x578);
    if (lVar13 != lVar9 || lVar3 != lVar12) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00d2bfac;
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      *(long *)(param_2 + 0x574) = lVar12 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar11 = true;
LAB_00d2bfac:
  if (!bVar11) {
    do {
      lVar9 = *plVar1;
      lVar12 = *(long *)(param_2 + 0x578);
      if (lVar9 != lVar13 || lVar12 != lVar3) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d2c014;
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar13;
        *(long *)(param_2 + 0x574) = lVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar11 = true;
joined_r0x00d2c014:
    if (!bVar11) {
      do {
        lVar13 = *plVar1;
        lVar3 = *(long *)(param_2 + 0x578);
        if (lVar13 != lVar9 || lVar3 != lVar12) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar9 = lVar13;
          lVar12 = lVar3;
          goto joined_r0x00d2c014;
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar9;
          *(long *)(param_2 + 0x574) = lVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar11 = true;
      lVar9 = lVar13;
      lVar12 = lVar3;
      goto joined_r0x00d2c014;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x580));
  return;
}


