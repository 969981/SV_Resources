/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a825c; name: FUN_021a825c
 */


void FUN_021a825c(long *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  lVar9 = param_1[1];
  lVar11 = *(long *)(*param_1 + 0x30);
  if ((lVar9 != 0) && (sVar3 = *(short *)(lVar9 + 0x1a), sVar3 != 0)) {
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
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        if (puVar15 == (undefined8 *)PTR_DAT_047d39b8) goto LAB_021a84ec;
        puVar15 = (undefined8 *)*puVar15;
      } while (puVar15 != (undefined8 *)0x0);
    }
  }
  goto LAB_021a827c;
  while (sVar3 = sVar4, sVar4 != 0) {
LAB_021a84ec:
    sVar4 = *psVar1;
    if (sVar4 == sVar3) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_021a8510;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_021a8510:
      bVar6 = false;
    }
    if (bVar6) {
      if (*(long *)(lVar9 + 0x10) != 0) {
        plVar12 = (long *)param_1[3];
        plVar14 = (long *)(*(long *)(lVar9 + 0x10) + -8);
        if (plVar12 == (long *)0x0) {
          lVar9 = *plVar14;
        }
        else {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          (**(code **)(*plVar14 + 0x18))(plVar14);
          (**(code **)(*plVar12 + 0x40))(plVar12);
          lVar9 = *plVar12;
          plVar14 = plVar12;
        }
        (**(code **)(lVar9 + 0x18))(plVar14);
      }
      break;
    }
  }
LAB_021a827c:
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar9 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar9;
  plVar14 = (long *)(lVar9 + (long)(int)param_1[4] * 8 + 0xb4f8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = *plVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((*(byte *)(lVar11 + 0x61) & 1) != 0) {
    return;
  }
  plVar14 = (long *)(lVar11 + 0x68);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar14 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_021a82ec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x70));
  do {
    if (*plVar14 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x70));
        while (*plVar14 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_021a82ec;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_021a82ec:
  puVar15 = *(undefined8 **)(lVar11 + 0x80);
  puVar2 = *(undefined8 **)(lVar11 + 0x88);
  if (puVar15 != puVar2) {
    if ((*(byte *)(lVar11 + 0x61) & 1) == 0) {
      (*(code *)*puVar15)(puVar15 + 4);
    }
    if ((*(byte *)(lVar11 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar15[0x10])();
      *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
    }
    while (puVar15 = puVar15 + 0x12, puVar15 != puVar2) {
      if ((*(byte *)(lVar11 + 0x61) & 1) == 0) {
        (*(code *)*puVar15)(puVar15 + 4);
      }
      if ((*(byte *)(lVar11 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar15[0x10])();
        *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
      }
    }
    puVar15 = *(undefined8 **)(lVar11 + 0x80);
    puVar2 = *(undefined8 **)(lVar11 + 0x88);
    if (puVar2 != puVar15) {
      pcVar10 = (code *)puVar2[-0x11];
      puVar13 = puVar2 + -0x12;
      if (pcVar10 != (code *)0x0) {
        puVar2[-0x10] = 0;
        puVar2[-0xf] = 0;
        *puVar13 = 0;
        puVar2[-0x11] = 0;
        (*pcVar10)(puVar2 + -0xe);
      }
      while (puVar2 = puVar13, puVar2 != puVar15) {
        pcVar10 = (code *)puVar2[-0x11];
        puVar13 = puVar2 + -0x12;
        if (pcVar10 != (code *)0x0) {
          puVar2[-0x10] = 0;
          puVar2[-0xf] = 0;
          puVar2[-0x12] = 0;
          puVar2[-0x11] = 0;
          (*pcVar10)(puVar2 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar11 + 0x88) = puVar15;
  *(undefined1 *)(lVar11 + 0x60) = 1;
  if ((*(byte *)(lVar11 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar11 + 0x40),lVar11);
    *(byte *)(lVar11 + 0x50) = 1;
  }
  *(undefined8 *)(lVar11 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x70));
  return;
}


