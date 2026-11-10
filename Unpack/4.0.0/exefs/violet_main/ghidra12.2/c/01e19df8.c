/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e19df8; name: FUN_01e19df8
 */


void FUN_01e19df8(long *param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  
  lVar6 = FUN_01132f14();
  if (lVar6 == 0) {
    *param_1 = 0;
    return;
  }
  plVar11 = (long *)(lVar6 + 0x48);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01e19e68;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x50));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x50));
        while (*plVar11 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e19e68;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar5) {
      *plVar11 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e19e68:
  plVar11 = *(long **)(lVar6 + 0xb0);
  plVar3 = *(long **)(lVar6 + 0xb8);
  if (plVar11 == plVar3) {
LAB_01e19f10:
    plVar11 = *(long **)(lVar6 + 0x78);
    plVar3 = *(long **)(lVar6 + 0x80);
    if (plVar11 != plVar3) {
      do {
        uVar8 = FUN_015669d0(*plVar11 + 8);
        if ((uVar8 & 1) != 0) goto LAB_01e19f3c;
        plVar11 = plVar11 + 1;
      } while (plVar3 != plVar11);
      plVar11 = plVar3;
LAB_01e19f3c:
      if (plVar11 != *(long **)(lVar6 + 0x80)) {
        lVar10 = *plVar11;
        lVar7 = 0;
        if (lVar10 != 0) {
          lVar7 = lVar10 + -0x20;
        }
        *param_1 = lVar7;
        if (lVar10 == 0) goto LAB_01e19ff0;
        lVar7 = *(long *)(lVar7 + 0x30);
        if (*(long *)(lVar7 + 0x10) == 0) {
LAB_01e1a010:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto joined_r0x01e19f80;
      }
    }
    *param_1 = 0;
  }
  else {
    do {
      uVar8 = FUN_015669d0(*plVar11 + 8);
      if ((uVar8 & 1) != 0) goto LAB_01e19e94;
      plVar11 = plVar11 + 1;
    } while (plVar3 != plVar11);
    plVar11 = plVar3;
LAB_01e19e94:
    if (plVar11 == *(long **)(lVar6 + 0xb8)) goto LAB_01e19f10;
    lVar10 = *plVar11;
    lVar7 = 0;
    if (lVar10 != 0) {
      lVar7 = lVar10 + -0x20;
    }
    *param_1 = lVar7;
    if (lVar10 == 0) goto LAB_01e19ff0;
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_01e1a010;
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
joined_r0x01e19f80:
    if (sVar2 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar9;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
LAB_01e19ff0:
  *(undefined8 *)(lVar6 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x50));
  return;
}


