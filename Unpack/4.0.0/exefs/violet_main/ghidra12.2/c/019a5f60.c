/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a5f60; name: FUN_019a5f60
 */


void FUN_019a5f60(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  short sVar10;
  long lVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long local_50 [2];
  undefined8 local_28;
  
  puVar5 = (undefined8 *)FUN_0140f310();
  local_70 = *puVar5;
  uStack_68 = puVar5[1];
  local_60 = puVar5[2];
  local_58 = (long *)puVar5[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_0140f318(local_50,param_1,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_50[0] != 0) {
    if (*(short *)(local_50[0] + 0x1a) != 0) {
      psVar1 = (short *)(local_50[0] + 0x1a);
      sVar10 = *(short *)(local_50[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar10) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_019a6020;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019a6020:
          bVar9 = false;
        }
        if (bVar9) {
          lVar8 = *(long *)(local_50[0] + 0x10);
          if (lVar8 == 0) goto LAB_019a6100;
          plVar7 = (long *)(lVar8 + 0xe8);
          lVar11 = *plVar7;
          lVar6 = nn::os::GetCurrentThread();
          if (lVar6 != lVar11) {
            lVar6 = nn::os::GetCurrentThread();
            goto LAB_019a6064;
          }
          bVar9 = true;
          goto LAB_019a6078;
        }
        sVar10 = sVar2;
      } while (sVar2 != 0);
LAB_019a60fc:
      if (local_50[0] == 0) {
        return;
      }
    }
LAB_019a6100:
    psVar1 = (short *)(local_50[0] + 0x18);
    do {
      sVar10 = *psVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar10 == 1) {
      FUN_0116e168();
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_019a6064:
  if (*plVar7 == 0) goto code_r0x019a606c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0xf0));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar9) {
            *plVar7 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_019a6074;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar9) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_019a6074:
  bVar9 = false;
LAB_019a6078:
  plVar7 = (long *)FUN_0223a0c0(*(undefined8 *)(lVar8 + 0x100),*(undefined8 *)(lVar8 + 0x108));
  if ((*(long **)(lVar8 + 0x108) == plVar7) || (*plVar7 == 0)) {
    plVar7 = (long *)FUN_0223a0c0(*(undefined8 *)(lVar8 + 0x138),*(undefined8 *)(lVar8 + 0x140));
    if (*(long **)(lVar8 + 0x140) == plVar7) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*plVar7 != 0) {
        lVar6 = *plVar7 + -0x20;
      }
    }
  }
  else {
    lVar6 = *plVar7 + -0x20;
  }
  if (!bVar9) {
    *(undefined8 *)(lVar8 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0xf0));
  }
  if (lVar6 != 0) {
    local_28 = 0x55c0d7a581349f0f;
    uVar4 = FUN_01a8906c(param_1,&local_28);
    FUN_0223a1a4(lVar6,uVar4);
  }
  (**(code **)(*(long *)(lVar8 + -0x28) + 0x60))((long *)(lVar8 + -0x28));
  goto LAB_019a60fc;
code_r0x019a606c:
  cVar3 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar9) {
    *plVar7 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_019a6074;
  goto LAB_019a6064;
}


