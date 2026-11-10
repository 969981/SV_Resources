/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02194a50; name: FUN_02194a50
 */


void FUN_02194a50(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  bool bVar16;
  long *plVar17;
  
  lVar13 = *(long *)(param_1 + 0x50);
  plVar1 = (long *)(lVar13 + 0xe0);
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(lVar13 + 0xe8) == 0) {
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar14;
      *(undefined8 *)(lVar13 + 0xe8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_02194aa0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
  do {
    if (*plVar1 != 0 || *(long *)(lVar13 + 0xe8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
        while (*plVar1 == 0 && *(long *)(lVar13 + 0xe8) == 0) {
          cVar7 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar16) {
            *plVar1 = lVar14;
            *(undefined8 *)(lVar13 + 0xe8) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_02194aa0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar14;
      *(undefined8 *)(lVar13 + 0xe8) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_02194aa0:
  lVar14 = FUN_02193ad0(lVar13 + 8,param_2);
  puVar11 = PTR_PTR_047d4508;
  if ((lVar14 != 0) &&
     (((param_3 & 0xff00000000) == 0 || (*(int *)(lVar14 + 0x30) == (int)param_3)))) {
    plVar17 = *(long **)(lVar13 + 0xa0);
    if (plVar17 != (long *)0x0) {
      do {
        if ((plVar17[0xd] == *param_2) && (*(long *)(lVar14 + 0x50) != 0)) {
          plVar5 = (long *)plVar17[7];
          plVar8 = (long *)plVar17[6];
          do {
            if (plVar8 == plVar5) goto LAB_02194b68;
            puVar2 = (undefined8 *)puVar11;
            if (*plVar8 != 0) {
              puVar2 = (undefined8 *)(*plVar8 + 0x38);
            }
            uVar15 = FUN_00e3d990(lVar14 + 0x38,*puVar2);
            puVar9 = PTR_DAT_047d3e28;
            plVar8 = plVar8 + 1;
          } while ((uVar15 & 1) == 0);
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar9);
          }
          puVar10 = PTR_DAT_047d3e30;
          (*(code *)plVar17[0xe])(plVar17 + 0x12,PTR_DAT_047d3e30);
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d4118,puVar10,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          plVar17[0xd] = *(long *)puVar10;
        }
LAB_02194b68:
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
    FUN_02194d00(lVar13 + 8,lVar14);
  }
  do {
    lVar14 = *plVar1;
    lVar6 = *(long *)(lVar13 + 0xe8);
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar14;
      *(long *)(lVar13 + 0xe8) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(lVar13 + 0xe8);
    if (lVar3 != lVar14 || lVar4 != lVar6) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_02194c04;
    }
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = 0;
      *(long *)(lVar13 + 0xe4) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar16 = true;
LAB_02194c04:
  if (!bVar16) {
    do {
      lVar14 = *plVar1;
      lVar6 = *(long *)(lVar13 + 0xe8);
      if (lVar14 != lVar3 || lVar6 != lVar4) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x02194cc0;
      }
      cVar7 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = 0;
        *(long *)(lVar13 + 0xe4) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar16 = true;
joined_r0x02194cc0:
    if (!bVar16) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(lVar13 + 0xe8);
        if (lVar3 != lVar14 || lVar4 != lVar6) {
          bVar16 = false;
          ClearExclusiveLocal();
          lVar14 = lVar3;
          lVar6 = lVar4;
          goto joined_r0x02194cc0;
        }
        cVar7 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = 0;
          *(long *)(lVar13 + 0xe4) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar16 = true;
      lVar14 = lVar3;
      lVar6 = lVar4;
      goto joined_r0x02194cc0;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf0));
  return;
}


