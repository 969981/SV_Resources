/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f422c8; name: FUN_00f422c8
 */


void FUN_00f422c8(long *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  
  plVar10 = (long *)(param_2 + 0x48);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00f42300;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00f42300;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00f42300:
  plVar10 = *(long **)(param_2 + 0xb0);
  plVar3 = *(long **)(param_2 + 0xb8);
  if (plVar10 == plVar3) {
LAB_00f423b4:
    plVar10 = *(long **)(param_2 + 0x78);
    plVar3 = *(long **)(param_2 + 0x80);
    if (plVar10 != plVar3) {
      do {
        uVar7 = FUN_00f424cc(*plVar10 + 8);
        if ((uVar7 & 1) != 0) goto LAB_00f423e0;
        plVar10 = plVar10 + 1;
      } while (plVar3 != plVar10);
      plVar10 = plVar3;
LAB_00f423e0:
      if (plVar10 != *(long **)(param_2 + 0x80)) {
        lVar9 = *plVar10;
        lVar6 = 0;
        if (lVar9 != 0) {
          lVar6 = lVar9 + -0x20;
        }
        *param_1 = lVar6;
        if (lVar9 == 0) goto LAB_00f42350;
        lVar6 = *(long *)(lVar6 + 0x30);
        if (*(long *)(lVar6 + 0x10) == 0) {
LAB_00f424ac:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto joined_r0x00f42484;
      }
    }
    *param_1 = 0;
  }
  else {
    do {
      uVar7 = FUN_00f424cc(*plVar10 + 8);
      if ((uVar7 & 1) != 0) goto LAB_00f4232c;
      plVar10 = plVar10 + 1;
    } while (plVar3 != plVar10);
    plVar10 = plVar3;
LAB_00f4232c:
    if (plVar10 == *(long **)(param_2 + 0xb8)) goto LAB_00f423b4;
    lVar9 = *plVar10;
    lVar6 = 0;
    if (lVar9 != 0) {
      lVar6 = lVar9 + -0x20;
    }
    *param_1 = lVar6;
    if (lVar9 == 0) goto LAB_00f42350;
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00f424ac;
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
joined_r0x00f42484:
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar8;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
LAB_00f42350:
  *(undefined8 *)(param_2 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50));
  return;
}


