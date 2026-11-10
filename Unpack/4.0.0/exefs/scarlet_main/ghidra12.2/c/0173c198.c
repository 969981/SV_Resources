/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173c198; name: FUN_0173c198
 */


long FUN_0173c198(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 local_38;
  
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  lVar10 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar10;
  lVar10 = *(long *)(lVar10 + 0x360);
  plVar1 = (long *)(lVar10 + 0x10);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(lVar10 + 0x18) == 0) {
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_0173c250;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x20));
  do {
    if (*plVar1 != 0 || *(long *)(lVar10 + 0x18) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x20));
        while (*plVar1 == 0 && *(long *)(lVar10 + 0x18) == 0) {
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = lVar11;
            *(undefined8 *)(lVar10 + 0x18) = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_0173c250;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_0173c250:
  *(undefined8 *)(lVar10 + 0x110) = *(undefined8 *)(lVar10 + 0x108);
  *(undefined8 *)(lVar10 + 0x148) = *(undefined8 *)(lVar10 + 0x140);
  uVar5 = *(ulong *)(lVar10 + 0x70);
  lVar6 = *(long *)(lVar10 + 0x78);
  *(undefined8 *)(lVar10 + 0x180) = *(undefined8 *)(lVar10 + 0x178);
  *(undefined8 *)(lVar10 + 0x228) = *(undefined8 *)(lVar10 + 0x220);
  *(undefined8 *)(lVar10 + 0x260) = *(undefined8 *)(lVar10 + 600);
  *(undefined8 *)(lVar10 + 0x1b8) = *(undefined8 *)(lVar10 + 0x1b0);
  *(undefined8 *)(lVar10 + 0x298) = *(undefined8 *)(lVar10 + 0x290);
  lVar11 = *(long *)(lVar10 + 0x38);
  *(undefined8 *)(lVar10 + 0x1f0) = *(undefined8 *)(lVar10 + 0x1e8);
  plVar13 = (long *)(lVar11 + (uVar5 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(lVar10 + 0x40) == lVar11) {
    puVar15 = (undefined8 *)0x0;
    puVar16 = (undefined8 *)0x0;
  }
  else {
    uVar2 = uVar5 + lVar6;
    puVar15 = (undefined8 *)(*plVar13 + (uVar5 & 0x1ff) * 8);
    puVar16 = (undefined8 *)
              (*(long *)(lVar11 + (uVar2 >> 6 & 0x3fffffffffffff8)) + (uVar2 & 0x1ff) * 8);
  }
  if (puVar16 != puVar15) {
    do {
      puVar14 = puVar15 + 1;
      local_38 = *puVar15;
      FUN_00cfade8(lVar10 + 0x1e8,&local_38);
      if ((long)puVar14 - *plVar13 == 0x1000) {
        plVar13 = plVar13 + 1;
        puVar14 = (undefined8 *)*plVar13;
      }
      puVar15 = puVar14;
    } while (puVar16 != puVar14);
  }
  do {
    lVar11 = *plVar1;
    lVar7 = *(long *)(lVar10 + 0x18);
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar11;
      *(long *)(lVar10 + 0x18) = lVar7;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(lVar10 + 0x18);
    if (lVar3 != lVar11 || lVar4 != lVar7) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_0173c39c;
    }
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = 0;
      *(long *)(lVar10 + 0x14) = lVar7;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar12 = true;
LAB_0173c39c:
  if (!bVar12) {
    do {
      lVar11 = *plVar1;
      lVar7 = *(long *)(lVar10 + 0x18);
      if (lVar11 != lVar3 || lVar7 != lVar4) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x0173c3fc;
      }
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)(lVar10 + 0x14) = lVar4;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar12 = true;
joined_r0x0173c3fc:
    if (!bVar12) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(lVar10 + 0x18);
        if (lVar3 != lVar11 || lVar4 != lVar7) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar11 = lVar3;
          lVar7 = lVar4;
          goto joined_r0x0173c3fc;
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)(lVar10 + 0x14) = lVar7;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar12 = true;
      lVar11 = lVar3;
      lVar7 = lVar4;
      goto joined_r0x0173c3fc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x20));
  return lVar6;
}


