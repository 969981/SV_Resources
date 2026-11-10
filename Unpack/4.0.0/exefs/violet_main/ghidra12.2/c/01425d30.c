/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01425d30; name: FUN_01425d30
 */


undefined1  [16] FUN_01425d30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  bool bVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  long *local_38;
  
  puVar14 = (uint *)*param_3;
  uVar4 = *puVar14;
  plVar17 = (long *)*param_2;
  lVar18 = param_2[2];
  lVar9 = nn::os::GetCurrentThread();
  puVar6 = PTR_DAT_047d94d0;
  do {
    lVar15 = *(long *)puVar6;
    lVar16 = *(long *)(puVar6 + 8);
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar13) {
      *(long *)puVar6 = lVar15;
      *(long *)(puVar6 + 8) = lVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar15 != 0 && (lVar9 != lVar15))) {
      nn::os::WaitLightEvent((LightEventType *)(puVar6 + 0x10));
      do {
        lVar15 = *(long *)puVar6;
        lVar16 = *(long *)(puVar6 + 8);
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar13) {
          *(long *)puVar6 = lVar15;
          *(long *)(puVar6 + 8) = lVar16;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      lVar2 = *(long *)puVar6;
      if (lVar2 != lVar15 || *(long *)(puVar6 + 8) != lVar16) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_01425db4;
      }
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar13) {
        *(long *)puVar6 = lVar15;
        *(long *)(puVar6 + 4) = lVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar13 = true;
LAB_01425db4:
    lVar15 = lVar2;
    lVar16 = *(long *)(puVar6 + 8);
  } while (!bVar13);
  plVar10 = (long *)(**(code **)(*plVar17 + 0x88))(plVar17);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x7f0,0x10);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar10 + 0xe8))(plVar10);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  FUN_00df6fe0(plVar11,PTR_DAT_047d3e30,0,0,0);
  puVar7 = PTR_DAT_047dd6b8;
  plVar11[2] = (long)plVar11;
  plVar11[4] = (long)(puVar7 + 0x160);
  plVar11[5] = (long)(puVar7 + 0x1b0);
  plVar11[0x1f] = (long)(puVar7 + 0x208);
  plVar11[0xa8] = (long)(puVar7 + 0x278);
  plVar11[0xa9] = (long)(puVar7 + 0x2c8);
  *(undefined4 *)(plVar11 + 3) = 0x1007f0;
  *plVar11 = (long)(puVar7 + 0x10);
  plVar11[1] = (long)plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  lVar9 = plVar11[6];
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_014261d0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar12;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) goto LAB_014261f0;
  *(undefined4 *)(plVar11 + 0x9f) = 0xffffffff;
  FUN_00df5bb4(plVar11);
  lVar9 = plVar11[6];
  local_38 = plVar11;
  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_014261d0;
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 == 0) {
    uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar12;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
LAB_014261f0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  (**(code **)(*plVar17 + 0x30))(plVar17,&local_38);
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_01426000;
  }
  do {
    lVar9 = *(long *)puVar6;
    lVar15 = *(long *)(puVar6 + 8);
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar13) {
      *(long *)puVar6 = lVar9;
      *(long *)(puVar6 + 8) = lVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar16 = *(long *)puVar6;
    lVar2 = *(long *)(puVar6 + 8);
    if (lVar16 != lVar9 || lVar2 != lVar15) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_01425f78;
    }
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar13) {
      *(long *)puVar6 = lVar9;
      *(long *)(puVar6 + 4) = lVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar13 = true;
LAB_01425f78:
  if (!bVar13) {
    do {
      lVar9 = *(long *)puVar6;
      lVar15 = *(long *)(puVar6 + 8);
      if (lVar9 != lVar16 || lVar15 != lVar2) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x014260ec;
      }
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar13) {
        *(long *)puVar6 = lVar16;
        *(long *)(puVar6 + 4) = lVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar13 = true;
joined_r0x014260ec:
    if (!bVar13) {
      do {
        lVar16 = *(long *)puVar6;
        lVar2 = *(long *)(puVar6 + 8);
        if (lVar16 != lVar9 || lVar2 != lVar15) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar9 = lVar16;
          lVar15 = lVar2;
          goto joined_r0x014260ec;
        }
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar13) {
          *(long *)puVar6 = lVar9;
          *(long *)(puVar6 + 4) = lVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar13 = true;
      lVar9 = lVar16;
      lVar15 = lVar2;
      goto joined_r0x014260ec;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(puVar6 + 0x10));
  if (lVar18 != 0) {
    FUN_00f670e0(*(undefined8 *)(lVar18 + 0x460),plVar11);
    FUN_00dfba48(plVar11,lVar18);
  }
  FUN_0142624c(plVar11,plVar17,(long)puVar14 + (ulong)uVar4);
  lVar9 = plVar11[6];
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar3 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar3 == 0) {
LAB_01426000:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  auVar19._8_8_ = plVar11;
  auVar19._0_8_ = 2;
  return auVar19;
}


