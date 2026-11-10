/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a5774; name: FUN_029a5774
 */


void FUN_029a5774(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  plVar1 = (long *)(param_1 + 0x130);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_029a57b0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x138));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x138));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_029a57b0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_029a57b0:
  lVar6 = *(long *)(param_1 + 0x120);
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) goto LAB_029a57b8;
  psVar2 = (short *)(lVar6 + 0x1a);
  sVar8 = *(short *)(lVar6 + 0x1a);
  do {
    sVar3 = *psVar2;
    if (sVar3 == sVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_029a5850;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_029a5850:
      bVar5 = false;
    }
    if (bVar5) {
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 != 0) {
        uVar10 = param_2[1];
        uVar9 = *param_2;
        uVar12 = param_3[1];
        uVar11 = *param_3;
        *(undefined4 *)(lVar6 + 0x50) = 0x101;
        *(undefined8 *)(lVar6 + 0x60) = uVar10;
        *(undefined8 *)(lVar6 + 0x58) = uVar9;
        *(undefined8 *)(lVar6 + 0x70) = uVar12;
        *(undefined8 *)(lVar6 + 0x68) = uVar11;
        *(undefined1 *)(param_1 + 0x149) = 1;
        FUN_00c6a514(param_1 + 0x38,0);
        lVar7 = *(long *)(lVar6 + 8);
        psVar2 = (short *)(lVar7 + 0x1a);
        do {
          sVar8 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*(long *)(lVar6 + -0x28) + 0x50))((long *)(lVar6 + -0x28));
        }
        else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      goto LAB_029a57b8;
    }
    sVar8 = sVar3;
    if (sVar3 == 0) {
LAB_029a57b8:
      *(undefined8 *)(param_1 + 0x130) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x138));
      return;
    }
  } while( true );
}


