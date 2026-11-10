/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f66aac; name: FUN_00f66aac
 */


void FUN_00f66aac(long param_1,int param_2,long param_3)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  bool bVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  if (((DAT_04841a40 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04841a40), iVar9 != 0)) {
    DAT_04841a38 = param_1;
    __cxa_guard_release(&DAT_04841a40);
  }
  uVar10 = nn::os::GetCurrentThread();
  puVar7 = PTR_DAT_047d94d0;
  while (*(long *)puVar7 == 0 && *(long *)(puVar7 + 8) == 0) {
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar11) {
      *(undefined8 *)puVar7 = uVar10;
      *(undefined8 *)(puVar7 + 8) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00f66b04;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar7 + 0x10));
  do {
    if (*(long *)puVar7 != 0 || *(long *)(puVar7 + 8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar7 + 0x10));
        while (*(long *)puVar7 == 0 && *(long *)(puVar7 + 8) == 0) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar11) {
            *(undefined8 *)puVar7 = uVar10;
            *(undefined8 *)(puVar7 + 8) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00f66b04;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar11) {
      *(undefined8 *)puVar7 = uVar10;
      *(undefined8 *)(puVar7 + 8) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00f66b04:
  uVar10 = nn::os::GetCurrentThread();
  puVar8 = PTR_DAT_047dccb0;
  while (*(long *)puVar8 == 0 && *(long *)(puVar8 + 8) == 0) {
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar11) {
      *(undefined8 *)puVar8 = uVar10;
      *(undefined8 *)(puVar8 + 8) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00f66b28;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar8 + 0x10));
  do {
    if (*(long *)puVar8 != 0 || *(long *)(puVar8 + 8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar8 + 0x10));
        while (*(long *)puVar8 == 0 && *(long *)(puVar8 + 8) == 0) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar11) {
            *(undefined8 *)puVar8 = uVar10;
            *(undefined8 *)(puVar8 + 8) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00f66b28;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar11) {
      *(undefined8 *)puVar8 = uVar10;
      *(undefined8 *)(puVar8 + 8) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00f66b28:
  plVar13 = *(long **)(param_3 + 0x460);
  if (plVar13 != (long *)0x0) {
    lVar14 = plVar13[6];
    if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar10;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar12 = *(long **)(param_1 + (long)param_2 * 8 + 0x28);
  if (plVar13 != plVar12) {
    uVar10 = FUN_00f66e98(param_3);
    FUN_00f66f30(plVar12,uVar10);
  }
  if (plVar13 != (long *)0x0) {
    lVar14 = plVar13[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  do {
    lVar14 = *(long *)puVar8;
    lVar5 = *(long *)(puVar8 + 8);
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar11) {
      *(long *)puVar8 = lVar14;
      *(long *)(puVar8 + 8) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar2 = *(long *)puVar8;
    lVar3 = *(long *)(puVar8 + 8);
    if (lVar2 != lVar14 || lVar3 != lVar5) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00f66c1c;
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar11) {
      *(undefined8 *)puVar8 = 0;
      *(long *)(puVar8 + 4) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar11 = true;
LAB_00f66c1c:
  if (!bVar11) {
    do {
      lVar14 = *(long *)puVar8;
      lVar5 = *(long *)(puVar8 + 8);
      if (lVar14 != lVar2 || lVar5 != lVar3) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f66da4;
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar11) {
        *(undefined8 *)puVar8 = 0;
        *(long *)(puVar8 + 4) = lVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar11 = true;
joined_r0x00f66da4:
    if (!bVar11) {
      do {
        lVar2 = *(long *)puVar8;
        lVar3 = *(long *)(puVar8 + 8);
        if (lVar2 != lVar14 || lVar3 != lVar5) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar14 = lVar2;
          lVar5 = lVar3;
          goto joined_r0x00f66da4;
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar11) {
          *(undefined8 *)puVar8 = 0;
          *(long *)(puVar8 + 4) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar11 = true;
      lVar14 = lVar2;
      lVar5 = lVar3;
      goto joined_r0x00f66da4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(puVar8 + 0x10));
  do {
    lVar14 = *(long *)puVar7;
    lVar5 = *(long *)(puVar7 + 8);
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar11) {
      *(long *)puVar7 = lVar14;
      *(long *)(puVar7 + 8) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar2 = *(long *)puVar7;
    lVar3 = *(long *)(puVar7 + 8);
    if (lVar2 != lVar14 || lVar3 != lVar5) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00f66c64;
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar11) {
      *(undefined8 *)puVar7 = 0;
      *(long *)(puVar7 + 4) = lVar5;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar11 = true;
LAB_00f66c64:
  if (!bVar11) {
    do {
      lVar14 = *(long *)puVar7;
      lVar5 = *(long *)(puVar7 + 8);
      if (lVar14 != lVar2 || lVar5 != lVar3) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f66de8;
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar11) {
        *(undefined8 *)puVar7 = 0;
        *(long *)(puVar7 + 4) = lVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar11 = true;
joined_r0x00f66de8:
    if (!bVar11) {
      do {
        lVar2 = *(long *)puVar7;
        lVar3 = *(long *)(puVar7 + 8);
        if (lVar2 != lVar14 || lVar3 != lVar5) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar14 = lVar2;
          lVar5 = lVar3;
          goto joined_r0x00f66de8;
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar7,0x10);
        if (bVar11) {
          *(undefined8 *)puVar7 = 0;
          *(long *)(puVar7 + 4) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar11 = true;
      lVar14 = lVar2;
      lVar5 = lVar3;
      goto joined_r0x00f66de8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(puVar7 + 0x10));
  return;
}


