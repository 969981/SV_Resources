/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a9d84; name: FUN_019a9d84
 */


void FUN_019a9d84(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  long local_50 [2];
  
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
      sVar11 = *(short *)(local_50[0] + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar11) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_019a9e44;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019a9e44:
          bVar10 = false;
        }
        if (bVar10) {
          lVar9 = *(long *)(local_50[0] + 0x10);
          if (lVar9 == 0) goto LAB_019a9f44;
          plVar7 = (long *)(lVar9 + 0xe8);
          lVar12 = *plVar7;
          lVar6 = nn::os::GetCurrentThread();
          if (lVar6 != lVar12) {
            lVar6 = nn::os::GetCurrentThread();
            goto LAB_019a9e88;
          }
          bVar10 = true;
          goto LAB_019a9e9c;
        }
        sVar11 = sVar2;
      } while (sVar2 != 0);
LAB_019a9f40:
      if (local_50[0] == 0) {
        return;
      }
    }
LAB_019a9f44:
    psVar1 = (short *)(local_50[0] + 0x18);
    do {
      sVar11 = *psVar1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar11 == 1) {
      FUN_0116e168();
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_019a9e88:
  if (*plVar7 == 0) goto code_r0x019a9e90;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar10) {
            *plVar7 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_019a9e98;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar10) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_019a9e98:
  bVar10 = false;
LAB_019a9e9c:
  plVar7 = (long *)FUN_0223a0c0(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
  if ((*(long **)(lVar9 + 0x108) == plVar7) || (*plVar7 == 0)) {
    plVar7 = (long *)FUN_0223a0c0(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
    if (*(long **)(lVar9 + 0x140) == plVar7) {
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
  if (!bVar10) {
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
  }
  if (lVar6 != 0) {
    uVar4 = FUN_0223a198(lVar6);
    puVar5 = (undefined8 *)FUN_01235878(param_1 + 0x158,&DAT_03d63500);
    *(undefined4 *)(puVar5 + 2) = uVar4;
    *puVar5 = PTR_LAB_047dce18;
    uVar8 = FUN_01259734(param_1,1);
    if ((uVar8 & 0xff) != 0) {
      FUN_0223a1a4(lVar6,uVar8 >> 0x20);
    }
  }
  (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
  goto LAB_019a9f40;
code_r0x019a9e90:
  cVar3 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar10) {
    *plVar7 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_019a9e98;
  goto LAB_019a9e88;
}


