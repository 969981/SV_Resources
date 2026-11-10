/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02541cc0; name: FUN_02541cc0
 */


void FUN_02541cc0(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  short *psVar1;
  long *plVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  
  if ((((*param_4 != 0) && (*(short *)(*param_4 + 0x1a) != 0)) && (lVar10 = *param_4, lVar10 != 0))
     && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar11 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02541d70;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02541d70:
        bVar6 = false;
      }
      if (bVar6) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        plVar2 = (long *)(lVar10 + 0xe8);
        lVar8 = nn::os::GetCurrentThread();
        goto LAB_02541dac;
      }
      sVar11 = sVar4;
    } while (sVar4 != 0);
  }
  return;
LAB_02541dac:
  if (*plVar2 != 0) {
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
          while (*plVar2 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02541dbc;
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
LAB_02541dbc:
    lVar8 = param_4[2];
    lVar12 = *(long *)(lVar10 + 0x20);
    uVar3 = *(undefined1 *)(lVar12 + lVar8 * 0x10);
    bVar7 = (*(code *)param_4[4])
                      (param_1,param_2,param_3,lVar10 + -8,param_5,param_6,param_7,param_8);
    *(byte *)(lVar12 + lVar8 * 0x10) = bVar7 & 1;
    uVar9 = (*(code *)param_4[3])(bVar7 & 1,uVar3);
    *(undefined1 *)(lVar10 + 0x140) = 1;
    if ((uVar9 & 1) != 0) {
      FUN_02541f04(param_1,param_2,param_3,param_4 + 5,param_5,param_6,param_7,param_8);
    }
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
    lVar8 = *(long *)(lVar10 + 8);
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x02541f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
      return;
    }
    if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar6) {
    *plVar2 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_02541dbc;
  goto LAB_02541dac;
}


