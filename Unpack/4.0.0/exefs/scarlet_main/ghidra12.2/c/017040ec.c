/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017040ec; name: FUN_017040ec
 */


undefined1  [16] FUN_017040ec(undefined8 param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  uint *puVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  long *local_38;
  
  puVar16 = (uint *)*param_3;
  plVar12 = *(long **)(param_2 + 0x10);
  uVar4 = *puVar16;
  plVar13 = (long *)plVar12[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar13;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x128,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*plVar13 + 0xe8))(plVar13);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_01704478();
  *(undefined4 *)(plVar8 + 3) = 0x80128;
  plVar8[1] = (long)plVar13;
  plVar8[2] = (long)plVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar7 = plVar8[0x13];
  if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  piVar2 = (int *)((long)puVar16 + (ulong)uVar4);
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar3 == 0) {
    uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    *(undefined8 *)(lVar7 + 8) = uVar9;
    *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar13 = plVar8 + 4;
  (**(code **)(*plVar13 + 0xe8))(plVar13,plVar12);
  (**(code **)(*plVar13 + 0x68))(plVar13);
  local_38 = plVar8;
  FUN_00df8c30(plVar12 + 0x21,&local_38);
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[0x13];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar12 + 0x100))(plVar12,plVar13);
  plVar17 = plVar12 + 0x88;
  lVar15 = *plVar17;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar15) {
    plVar17 = (long *)0x0;
    bVar14 = true;
LAB_01704248:
    if ((*(byte *)(plVar12 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar12,0,0);
    }
    else {
      (**(code **)(*plVar13 + 0xf8))(plVar13);
    }
    if (!bVar14) {
      *plVar17 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
    }
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
       (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar11 == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)piVar2 + uVar11);
    }
    FUN_017490c8(plVar8[0x24],uVar10,plVar8[1]);
    auVar18._8_8_ = plVar12;
    auVar18._0_8_ = 2;
    return auVar18;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar14) {
      *plVar17 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01704244;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x89));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x89));
        while (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar14) {
            *plVar17 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01704244;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar14) {
      *plVar17 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01704244:
  bVar14 = false;
  goto LAB_01704248;
}


