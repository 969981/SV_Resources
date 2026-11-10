/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0120d92c; name: FUN_0120d92c
 */


undefined1  [16] FUN_0120d92c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  bool bVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  long *local_48;
  
  puVar13 = (uint *)*param_3;
  uVar4 = *puVar13;
  plVar16 = (long *)*param_2;
  lVar8 = nn::os::GetCurrentThread();
  puVar6 = PTR_DAT_047d94d0;
  do {
    lVar14 = *(long *)puVar6;
    lVar15 = *(long *)(puVar6 + 8);
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar12) {
      *(long *)puVar6 = lVar14;
      *(long *)(puVar6 + 8) = lVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar14 != 0 && (lVar8 != lVar14))) {
      nn::os::WaitLightEvent((LightEventType *)(puVar6 + 0x10));
      do {
        lVar14 = *(long *)puVar6;
        lVar15 = *(long *)(puVar6 + 8);
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar12) {
          *(long *)puVar6 = lVar14;
          *(long *)(puVar6 + 8) = lVar15;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      lVar2 = *(long *)puVar6;
      if (lVar2 != lVar14 || *(long *)(puVar6 + 8) != lVar15) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_0120d9ac;
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar12) {
        *(long *)puVar6 = lVar14;
        *(long *)(puVar6 + 4) = lVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar12 = true;
LAB_0120d9ac:
    lVar14 = lVar2;
    lVar15 = *(long *)(puVar6 + 8);
  } while (!bVar12);
  plVar9 = (long *)(**(code **)(*plVar16 + 0x88))(plVar16);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x820,0x10);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar9 + 0xe8))(plVar9);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0120dd88();
  *(undefined4 *)(plVar10 + 3) = 0x100820;
  plVar10[1] = (long)plVar9;
  plVar10[2] = (long)plVar10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  lVar8 = plVar10[6];
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_0120dd0c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar11;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) goto LAB_0120dd2c;
  *(undefined4 *)(plVar10 + 0x9f) = 0xffffffff;
  FUN_00df5bb4(plVar10);
  lVar8 = plVar10[6];
  local_48 = plVar10;
  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0120dd0c;
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    *(undefined8 *)(lVar8 + 8) = uVar11;
    *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
LAB_0120dd2c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  (**(code **)(*plVar16 + 0x30))(plVar16,&local_48);
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0120db94;
  }
  do {
    lVar8 = *(long *)puVar6;
    lVar14 = *(long *)(puVar6 + 8);
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar12) {
      *(long *)puVar6 = lVar8;
      *(long *)(puVar6 + 8) = lVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar15 = *(long *)puVar6;
    lVar2 = *(long *)(puVar6 + 8);
    if (lVar15 != lVar8 || lVar2 != lVar14) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_0120db14;
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar12) {
      *(long *)puVar6 = lVar8;
      *(long *)(puVar6 + 4) = lVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar12 = true;
LAB_0120db14:
  if (!bVar12) {
    do {
      lVar8 = *(long *)puVar6;
      lVar14 = *(long *)(puVar6 + 8);
      if (lVar8 != lVar15 || lVar14 != lVar2) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x0120dc64;
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar12) {
        *(long *)puVar6 = lVar15;
        *(long *)(puVar6 + 4) = lVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar12 = true;
joined_r0x0120dc64:
    if (!bVar12) {
      do {
        lVar15 = *(long *)puVar6;
        lVar2 = *(long *)(puVar6 + 8);
        if (lVar15 != lVar8 || lVar2 != lVar14) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar8 = lVar15;
          lVar14 = lVar2;
          goto joined_r0x0120dc64;
        }
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar12) {
          *(long *)puVar6 = lVar8;
          *(long *)(puVar6 + 4) = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar12 = true;
      lVar8 = lVar15;
      lVar14 = lVar2;
      goto joined_r0x0120dc64;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(puVar6 + 0x10));
  FUN_0120e2d0(plVar10,(long)puVar13 + (ulong)uVar4);
  lVar8 = plVar10[6];
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar12) {
      *psVar1 = sVar3 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
  }
  else if (sVar3 == 0) {
LAB_0120db94:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  auVar17._8_8_ = plVar10;
  auVar17._0_8_ = 2;
  return auVar17;
}


