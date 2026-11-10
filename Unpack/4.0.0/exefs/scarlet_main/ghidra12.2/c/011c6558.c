/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c6558; name: FUN_011c6558
 */


void FUN_011c6558(long *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  
  plVar15 = (long *)(param_2 + 0x48);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_011c6598;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *plVar15 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_011c6598;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar5) {
      *plVar15 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_011c6598:
  puVar9 = PTR_DAT_047d9280;
  puVar8 = PTR_DAT_047d9278;
  puVar7 = PTR_DAT_047d9270;
  puVar6 = PTR_DAT_047d9268;
  plVar15 = *(long **)(param_2 + 0xb0);
  plVar3 = *(long **)(param_2 + 0xb8);
  if (plVar15 != plVar3) {
    do {
      plVar12 = (long *)(*(code *)**(undefined8 **)(*plVar15 + 8))();
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          uVar13 = FUN_01e19d1c();
          *(undefined8 *)puVar8 = uVar13;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar9 = puVar8;
        __cxa_guard_release(puVar6);
      }
      for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        if (plVar12 == (long *)puVar9) goto LAB_011c65e8;
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar3);
    plVar15 = plVar3;
  }
LAB_011c65e8:
  if (plVar15 == *(long **)(param_2 + 0xb8)) {
    plVar15 = *(long **)(param_2 + 0x78);
    plVar3 = *(long **)(param_2 + 0x80);
    if (plVar15 != plVar3) {
      do {
        plVar12 = (long *)(*(code *)**(undefined8 **)(*plVar15 + 8))();
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
            uVar13 = FUN_01e19d1c();
            *(undefined8 *)puVar8 = uVar13;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar9 = puVar8;
          __cxa_guard_release(puVar6);
        }
        for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          if (plVar12 == (long *)puVar9) goto LAB_011c66d8;
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != plVar3);
      plVar15 = plVar3;
    }
LAB_011c66d8:
    if (plVar15 == *(long **)(param_2 + 0x80)) {
      *param_1 = 0;
      goto LAB_011c663c;
    }
    lVar14 = *plVar15;
    lVar11 = 0;
    if (lVar14 != 0) {
      lVar11 = lVar14 + -0x20;
    }
    *param_1 = lVar11;
    if (lVar14 == 0) goto LAB_011c663c;
    lVar11 = *(long *)(lVar11 + 0x30);
    if (*(long *)(lVar11 + 0x10) == 0) goto LAB_011c67ec;
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    lVar14 = *plVar15;
    lVar11 = 0;
    if (lVar14 != 0) {
      lVar11 = lVar14 + -0x20;
    }
    *param_1 = lVar11;
    if (lVar14 == 0) goto LAB_011c663c;
    lVar11 = *(long *)(lVar11 + 0x30);
    if (*(long *)(lVar11 + 0x10) == 0) {
LAB_011c67ec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (sVar2 == 0) {
    uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    *(undefined8 *)(lVar11 + 8) = uVar13;
    *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
LAB_011c663c:
  *(undefined8 *)(param_2 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50));
  return;
}


