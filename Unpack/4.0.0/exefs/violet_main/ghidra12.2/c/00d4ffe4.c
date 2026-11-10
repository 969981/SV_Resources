/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4ffe4; name: FUN_00d4ffe4
 */


void FUN_00d4ffe4(long param_1)

{
  uint uVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  short sVar14;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_1 + 0x250) != '\0') {
    plVar12 = (long *)(param_1 + 0x150);
    do {
      lVar8 = *plVar12;
      if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
        psVar2 = (short *)(lVar8 + 0x1a);
        sVar14 = *(short *)(lVar8 + 0x1a);
        do {
          sVar4 = *psVar2;
          if (sVar4 == sVar14) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00d5008c;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00d5008c:
            bVar6 = false;
          }
          if (bVar6) {
            lVar8 = *(long *)(lVar8 + 0x10);
            if (lVar8 != 0) {
              plVar3 = (long *)(lVar8 + 0x18);
              lVar7 = nn::os::GetCurrentThread();
              goto LAB_00d500d0;
            }
            break;
          }
          sVar14 = sVar4;
        } while (sVar4 != 0);
      }
LAB_00d50018:
      plVar12 = plVar12 + 2;
    } while (plVar12 != (long *)(param_1 + 0x250));
    local_60 = 0;
    uStack_58 = 0;
    FUN_00c5a974(param_1,&local_60);
  }
  return;
LAB_00d500d0:
  if (*plVar3 == 0) goto code_r0x00d500d8;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x20));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x20));
        while (*plVar3 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d500e0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *plVar3 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d500e0:
  if (*(int *)(lVar8 + 0xa8) != 0) {
    puVar10 = *(undefined8 **)(lVar8 + 0x30);
    uVar11 = *(long *)(lVar8 + 0x38) - (long)puVar10;
    if (0 < (long)uVar11) {
      uVar11 = uVar11 >> 3;
      uVar13 = uVar11 - (uVar11 != 0);
      uVar1 = ((int)uVar11 - (uint)(uVar11 != 0)) + 1;
      if ((uVar1 & 7) != 0) {
        lVar7 = -((ulong)uVar1 & 7);
        puVar9 = puVar10;
        do {
          uVar11 = uVar11 - 1;
          bVar6 = lVar7 != -1;
          lVar7 = lVar7 + 1;
          puVar10 = puVar9 + 1;
          *puVar9 = 0;
          puVar9 = puVar10;
        } while (bVar6);
      }
      if (6 < uVar13) {
        lVar7 = uVar11 + 8;
        do {
          lVar7 = lVar7 + -8;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10 = puVar10 + 8;
        } while (8 < lVar7);
      }
    }
    *(undefined4 *)(lVar8 + 0xa8) = 0;
  }
  *(undefined8 *)(lVar8 + 0x18) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x20));
  lVar7 = *(long *)(lVar8 + 8);
  psVar2 = (short *)(lVar7 + 0x1a);
  do {
    sVar14 = *psVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar6) {
      *psVar2 = sVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
  }
  else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_00d50018;
code_r0x00d500d8:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar6) {
    *plVar3 = lVar7;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00d500e0;
  goto LAB_00d500d0;
}


