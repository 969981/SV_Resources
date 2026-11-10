/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186ad1c; name: FUN_0186ad1c
 */


void FUN_0186ad1c(long param_1,byte *param_2)

{
  short *psVar1;
  long *plVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  short sVar11;
  long *plVar12;
  long lVar13;
  undefined1 auStack_58 [24];
  
  lVar9 = *(long *)(param_1 + 0x28);
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  sVar11 = *(short *)(lVar9 + 0x1a);
LAB_0186ad64:
  sVar4 = *psVar1;
  if (sVar4 == sVar11) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_0186ad88;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0186ad88:
    bVar6 = false;
  }
  if (!bVar6) {
    sVar11 = sVar4;
    if (sVar4 == 0) {
      return;
    }
    goto LAB_0186ad64;
  }
  lVar9 = *(long *)(lVar9 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  plVar12 = (long *)(lVar9 + -0x28);
  puVar10 = &DAT_cbf29ce484222645;
  bVar3 = *param_2;
  while (bVar3 != 0) {
    param_2 = param_2 + 1;
    puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar3) * 0x100000001b3);
    bVar3 = *param_2;
  }
  FUN_00d9ec44(auStack_58,0,puVar10);
  lVar7 = FUN_01329e04(plVar12,*(undefined8 *)(lVar9 + -0x20),auStack_58);
  FUN_01293f20(lVar7,0);
  FUN_012a3740(0,lVar7);
  plVar2 = (long *)(lVar7 + 0x148);
  lVar13 = *plVar2;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar13) {
    *(undefined1 *)(lVar7 + 0x140) = 0;
    *(undefined1 *)(lVar7 + 0x163) = 1;
LAB_0186ae60:
    lVar9 = *(long *)(lVar9 + 8);
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar11 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
      return;
    }
    if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0186ae44;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x150));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x150));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0186ae44;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0186ae44:
  *(undefined1 *)(lVar7 + 0x163) = 1;
  *(undefined1 *)(lVar7 + 0x140) = 0;
  *(undefined8 *)(lVar7 + 0x148) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x150));
  goto LAB_0186ae60;
}


