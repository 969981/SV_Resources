/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e1328; name: FUN_014e1328
 */


undefined8 FUN_014e1328(long param_1,long *param_2)

{
  long *plVar1;
  void *__src;
  long lVar2;
  long lVar3;
  char cVar4;
  size_t __n;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  plVar1 = (long *)(param_1 + 0x760);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x768) == 0) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x768) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_014e1364;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x770));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x768) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x770));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x768) == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0x768) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_014e1364;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0x768) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_014e1364:
  plVar10 = *(long **)(param_1 + 0x780);
  plVar9 = *(long **)(param_1 + 0x788);
  lVar6 = *param_2;
  if ((plVar10 == plVar9) || (*plVar10 == lVar6)) {
LAB_014e1388:
    if (plVar10 != plVar9) {
      plVar13 = plVar10 + 2;
      if (plVar13 != plVar9) {
        plVar12 = plVar10;
        if (*plVar13 != lVar6) {
          *(char *)(plVar10 + 1) = (char)plVar10[3];
          plVar12 = plVar10 + 2;
          *plVar10 = *plVar13;
        }
        for (plVar10 = plVar10 + 4; plVar10 != plVar9; plVar10 = plVar10 + 2) {
          plVar13 = plVar12;
          if (*plVar10 != lVar6) {
            lVar11 = *plVar10;
            *(char *)(plVar12 + 1) = (char)plVar10[1];
            plVar13 = plVar12 + 2;
            *plVar12 = lVar11;
          }
          plVar12 = plVar13;
        }
        plVar9 = *(long **)(param_1 + 0x788);
        plVar10 = plVar12;
      }
    }
  }
  else {
    while (plVar10 = plVar10 + 2, plVar9 != plVar10) {
      if (*plVar10 == lVar6) goto LAB_014e1388;
    }
    plVar10 = plVar9;
  }
  if (plVar9 == plVar10) {
    uVar7 = 0;
  }
  else {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d4e00;
    *(undefined8 *)PTR_DAT_047d4e08 = uVar7;
    FUN_014e15f0(uVar7,*param_2,param_1);
    lVar6 = *(long *)(param_1 + 0x788) - (long)plVar10;
    if (lVar6 != 0) {
      __src = (void *)((long)plVar10 + lVar6);
      __n = *(long *)(param_1 + 0x788) - (long)__src;
      if (__n != 0) {
        memmove(plVar10,__src,__n);
      }
      *(size_t *)(param_1 + 0x788) = (long)plVar10 + __n;
    }
    uVar7 = 1;
  }
  do {
    lVar6 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x768);
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x768) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x768);
    if (lVar2 != lVar6 || lVar3 != lVar11) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_014e1484;
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x764) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar8 = true;
LAB_014e1484:
  if (!bVar8) {
    do {
      lVar6 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x768);
      if (lVar6 != lVar2 || lVar11 != lVar3) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x014e15b0;
      }
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x764) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar8 = true;
joined_r0x014e15b0:
    if (!bVar8) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x768);
        if (lVar2 != lVar6 || lVar3 != lVar11) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar11 = lVar3;
          goto joined_r0x014e15b0;
        }
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x764) = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar8 = true;
      lVar6 = lVar2;
      lVar11 = lVar3;
      goto joined_r0x014e15b0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x770));
  return uVar7;
}


