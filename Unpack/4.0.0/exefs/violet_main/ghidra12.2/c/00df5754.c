/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df5754; name: FUN_00df5754
 */


undefined1  [16] FUN_00df5754(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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
  long *local_38;
  
  puVar13 = (uint *)*param_3;
  plVar16 = (long *)*param_2;
  uVar4 = *puVar13;
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
        goto LAB_00df57d8;
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
LAB_00df57d8:
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
  plVar10 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x7f0,0x10);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar9 + 0xe8))(plVar9);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00df5d5c(plVar10,(long)puVar13 + (ulong)uVar4,param_2[2],0);
  *(undefined4 *)(plVar10 + 3) = 0x1007f0;
  plVar10[1] = (long)plVar9;
  plVar10[2] = (long)plVar10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  lVar8 = plVar10[6];
  if (*(long *)(lVar8 + 0x10) == 0) {
LAB_00df5b38:
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
  else if (sVar3 == -1) goto LAB_00df5b58;
  *(undefined4 *)(plVar10 + 0x9f) = 0xffffffff;
  FUN_00df5bb4(plVar10);
  lVar8 = plVar10[6];
  local_38 = plVar10;
  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_00df5b38;
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
LAB_00df5b58:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  (**(code **)(*plVar16 + 0x30))(plVar16,&local_38);
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[6];
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
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00df59c0;
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
      goto LAB_00df594c;
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
LAB_00df594c:
  if (!bVar12) {
    do {
      lVar8 = *(long *)puVar6;
      lVar14 = *(long *)(puVar6 + 8);
      if (lVar8 != lVar15 || lVar14 != lVar2) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x00df5a90;
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
joined_r0x00df5a90:
    if (!bVar12) {
      do {
        lVar15 = *(long *)puVar6;
        lVar2 = *(long *)(puVar6 + 8);
        if (lVar15 != lVar8 || lVar2 != lVar14) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar8 = lVar15;
          lVar14 = lVar2;
          goto joined_r0x00df5a90;
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
      goto joined_r0x00df5a90;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(puVar6 + 0x10));
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
LAB_00df59c0:
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


