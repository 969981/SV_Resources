/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02239e60; name: FUN_02239e60
 */


void FUN_02239e60(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
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
          if (cVar3 != '\0') goto LAB_02239f20;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02239f20:
          bVar9 = false;
        }
        if (bVar9) {
          lVar8 = *(long *)(local_50[0] + 0x10);
          if (lVar8 == 0) goto LAB_02239ffc;
          plVar7 = (long *)(lVar8 + 0xe8);
          lVar11 = *plVar7;
          lVar6 = nn::os::GetCurrentThread();
          if (lVar6 != lVar11) {
            lVar6 = nn::os::GetCurrentThread();
            goto LAB_02239f64;
          }
          bVar9 = true;
          goto LAB_02239f78;
        }
        sVar10 = sVar2;
      } while (sVar2 != 0);
LAB_02239ff8:
      if (local_50[0] == 0) {
        return;
      }
    }
LAB_02239ffc:
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
LAB_02239f64:
  if (*plVar7 == 0) goto code_r0x02239f6c;
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
          if (cVar3 == '\0') goto LAB_02239f74;
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
LAB_02239f74:
  bVar9 = false;
LAB_02239f78:
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
  if ((lVar6 != 0) && (uVar4 = FUN_012595d8(param_1,1), (uVar4 & 0xff) != 0)) {
    FUN_0143cdb0(lVar6,0xff < uVar4);
  }
  (**(code **)(*(long *)(lVar8 + -0x28) + 0x60))((long *)(lVar8 + -0x28));
  goto LAB_02239ff8;
code_r0x02239f6c:
  cVar3 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar9) {
    *plVar7 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_02239f74;
  goto LAB_02239f64;
}


