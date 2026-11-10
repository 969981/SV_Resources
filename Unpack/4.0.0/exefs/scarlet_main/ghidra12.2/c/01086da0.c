/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01086da0; name: FUN_01086da0
 */


uint FUN_01086da0(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x1b8);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x1b8) = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01086de0:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
    do {
      lVar8 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x1b8);
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x1b8) = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar8 || *(long *)(param_1 + 0x1b8) != lVar11) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_01086e10;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x1b4) = lVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
LAB_01086e10:
  if (!bVar7) {
    lVar8 = lVar2;
    lVar11 = *(long *)(param_1 + 0x1b8);
    goto LAB_01086de0;
  }
  plVar9 = *(long **)(param_1 + 0xf0);
  if (plVar9 != *(long **)(param_1 + 0xf8)) {
LAB_01086e34:
    if (plVar9[2] != *param_2) goto code_r0x01086e40;
    FUN_00eac558(&local_48,param_1,
                 *(long *)(*(long *)(*plVar9 + 0x88) + (ulong)*(uint *)(plVar9 + 1) * 0x108 + 0x48)
                 + 8);
    if (local_48 != (long *)0x0) {
      pcVar10 = (char *)param_3[5];
      if (*pcVar10 == '\0') {
        local_68 = *param_3;
        uStack_60 = param_3[1];
        local_58 = param_3[2];
        local_50 = (long *)param_3[3];
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x18))();
        }
        uVar5 = FUN_00ee3fc0(local_48,&local_68,*(undefined4 *)(param_3 + 8));
        plVar9 = local_50;
      }
      else {
        local_88 = *param_3;
        uStack_80 = param_3[1];
        local_78 = param_3[2];
        local_70 = (long *)param_3[3];
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x18))();
          pcVar10 = (char *)param_3[5];
        }
        local_a8 = param_3[4];
        local_98 = param_3[6];
        plVar9 = (long *)param_3[7];
        pcStack_a0 = pcVar10;
        plStack_90 = plVar9;
        if (plVar9 == (long *)0x0) {
          uVar5 = FUN_00d0fefc(local_48,&local_88,&local_a8);
          plVar9 = local_70;
        }
        else {
          (**(code **)(*plVar9 + 0x18))(plVar9);
          uVar5 = FUN_00d0fefc(local_48,&local_88,&local_a8);
          (**(code **)(*plVar9 + 0x20))(plVar9);
          plVar9 = local_70;
        }
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))();
      }
      plVar9 = local_48 + 5;
      do {
        lVar6 = *plVar9;
        iVar4 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *(int *)plVar9 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      goto LAB_01086f04;
    }
  }
LAB_01086e4c:
  uVar5 = 0;
LAB_01086f04:
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x1b8);
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x1b8) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar11 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x1b8);
    if (lVar11 != lVar6 || lVar2 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_01086f40;
    }
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x1b4) = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar7 = true;
LAB_01086f40:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x1b8);
      if (lVar6 != lVar11 || lVar8 != lVar2) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x01086ffc;
      }
      cVar3 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar11;
        *(long *)(param_1 + 0x1b4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar7 = true;
joined_r0x01086ffc:
    if (!bVar7) {
      do {
        lVar11 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x1b8);
        if (lVar11 != lVar6 || lVar2 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar11;
          lVar8 = lVar2;
          goto joined_r0x01086ffc;
        }
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0x1b4) = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar7 = true;
      lVar6 = lVar11;
      lVar8 = lVar2;
      goto joined_r0x01086ffc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  return uVar5 & 1;
code_r0x01086e40:
  plVar9 = plVar9 + 7;
  if (*(long **)(param_1 + 0xf8) == plVar9) goto LAB_01086e4c;
  goto LAB_01086e34;
}


