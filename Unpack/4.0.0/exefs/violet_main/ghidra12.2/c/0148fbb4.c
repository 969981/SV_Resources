/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148fbb4; name: FUN_0148fbb4
 */


void FUN_0148fbb4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  long *local_28;
  
  plVar8 = (long *)*param_3;
  plVar9 = (long *)plVar8[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x3e0,0x10);
  if (plVar6 == (long *)0x0) {
    (**(code **)(*plVar9 + 0xe8))(plVar9);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0148fefc(plVar6,*param_1);
  *(undefined4 *)(plVar6 + 3) = 0x1003e0;
  plVar6[1] = (long)plVar9;
  plVar6[2] = (long)plVar6;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  lVar5 = plVar6[0x13];
  if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar5 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar2 == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    *(undefined8 *)(lVar5 + 8) = uVar7;
    *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
  }
  else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x58,"Reference counter overflows.");
  }
  plVar9 = plVar6 + 4;
  (**(code **)(*plVar9 + 0xe8))(plVar9,plVar8);
  (**(code **)(*plVar9 + 0x68))(plVar9);
  local_28 = plVar6;
  FUN_00df8c30(plVar8 + 0x21,&local_28);
  if (local_28 != (long *)0x0) {
    lVar5 = local_28[0x13];
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar8 + 0x100))(plVar8,plVar9);
  plVar6 = plVar8 + 0x88;
  lVar11 = *plVar6;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar11) {
    plVar6 = (long *)0x0;
    bVar10 = true;
LAB_0148fd08:
    if ((*(byte *)(plVar8 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar8,0,0);
    }
    else {
      (**(code **)(*plVar9 + 0xf8))(plVar9);
    }
    if (!bVar10) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    return;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar10) {
      *plVar6 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0148fd04;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x89));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar8 + 0x89));
        while (*plVar6 == 0) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar10) {
            *plVar6 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0148fd04;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar10) {
      *plVar6 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0148fd04:
  bVar10 = false;
  goto LAB_0148fd08;
}


