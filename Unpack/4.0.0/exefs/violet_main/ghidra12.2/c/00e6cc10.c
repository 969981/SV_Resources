/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e6cc10; name: FUN_00e6cc10
 */


void FUN_00e6cc10(long param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  
  lVar6 = nn::os::GetCurrentThread();
  puVar5 = PTR_DAT_047d94d0;
  do {
    lVar8 = *(long *)puVar5;
    lVar9 = *(long *)(puVar5 + 8);
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar10) {
      *(long *)puVar5 = lVar8;
      *(long *)(puVar5 + 8) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    while ((lVar8 != 0 && (lVar6 != lVar8))) {
      nn::os::WaitLightEvent((LightEventType *)(puVar5 + 0x10));
      do {
        lVar8 = *(long *)puVar5;
        lVar9 = *(long *)(puVar5 + 8);
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar10) {
          *(long *)puVar5 = lVar8;
          *(long *)(puVar5 + 8) = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    do {
      lVar2 = *(long *)puVar5;
      if (lVar2 != lVar8 || *(long *)(puVar5 + 8) != lVar9) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00e6cc84;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar10) {
        *(long *)puVar5 = lVar8;
        *(long *)(puVar5 + 4) = lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
LAB_00e6cc84:
    lVar8 = lVar2;
    lVar9 = *(long *)(puVar5 + 8);
  } while (!bVar10);
  plVar11 = *(long **)(param_1 + 0x460);
  if (plVar11 != (long *)0x0) {
    lVar6 = plVar11[6];
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00e6cea4;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar7;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_00e6cec4;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(param_2 + 8) + 0x48) + 0x460);
  if (plVar12 != (long *)0x0) {
    lVar6 = plVar12[6];
    if (*(long *)(lVar6 + 0x10) == 0) {
LAB_00e6cea4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar7;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_00e6cec4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  if (plVar11 == plVar12) {
    FUN_010ca4a4(*(undefined8 *)(param_1 + 0x460),*(undefined4 *)(param_1 + 0x468),
                 *(undefined4 *)(*(long *)(*(long *)(param_2 + 8) + 0x48) + 0x468));
  }
  if (plVar12 != (long *)0x0) {
    lVar6 = plVar12[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar3 == 0) goto LAB_00e6ceec;
  }
  if (plVar11 != (long *)0x0) {
    lVar6 = plVar11[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar3 == 0) {
LAB_00e6ceec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  do {
    lVar6 = *(long *)puVar5;
    lVar8 = *(long *)(puVar5 + 8);
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar10) {
      *(long *)puVar5 = lVar6;
      *(long *)(puVar5 + 8) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar9 = *(long *)puVar5;
    lVar2 = *(long *)(puVar5 + 8);
    if (lVar9 != lVar6 || lVar2 != lVar8) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto joined_r0x00e6cdbc;
    }
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar10) {
      *(long *)puVar5 = lVar6;
      *(long *)(puVar5 + 4) = lVar8 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar10 = true;
joined_r0x00e6cdbc:
  do {
    if (bVar10) {
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 0x10));
      return;
    }
    do {
      lVar6 = *(long *)puVar5;
      lVar8 = *(long *)(puVar5 + 8);
      if (lVar6 != lVar9 || lVar8 != lVar2) {
        bVar10 = false;
        ClearExclusiveLocal();
        lVar9 = lVar6;
        lVar2 = lVar8;
        goto joined_r0x00e6cdbc;
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar10) {
        *(long *)puVar5 = lVar9;
        *(long *)(puVar5 + 4) = lVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar10 = true;
    lVar9 = lVar6;
    lVar2 = lVar8;
  } while( true );
}


