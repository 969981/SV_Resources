/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe14d4; name: FUN_00fe14d4
 */


void FUN_00fe14d4(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong local_88 [2];
  long *local_78;
  long local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined1 local_58 [16];
  ulong local_48;
  
  local_64 = 0;
  local_70 = (*(ulong *)(param_1 + 0x80) >> 2) * (*(ulong *)(param_1 + 0x88) >> 2) * 8;
  local_68 = 0x20;
  local_88[0] = *(ulong *)(param_1 + 0x48);
  lVar7 = FUN_00cf3764(local_58,*(undefined8 *)(local_88[0] + 8),local_88);
  lVar9 = 0;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) goto LAB_00fe182c;
    lVar9 = lVar7;
  }
  lVar10 = *(long *)(*(long *)(lVar9 + 0x70) + 0x30);
  local_58._0_8_ = *(undefined8 *)(lVar10 + 8);
  local_58._8_8_ = *(undefined8 *)(lVar10 + 0x6098);
  local_48 = lVar10 + 0x10;
  local_58 = FUN_00d56874(*(undefined8 *)(lVar10 + 0x6140),local_58,&local_70,0,0);
  local_48 = local_48 & 0xffffffffffffff00;
  FUN_00d56380(lVar9 + 0x30,local_58);
  uVar6 = FUN_00d56320(lVar9 + 0x30);
  *(undefined4 *)(lVar9 + 0x78) = uVar6;
  plVar13 = (long *)(param_1 + 0x60);
  plVar8 = (long *)*plVar13;
  *plVar13 = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar9 = *plVar2;
      iVar3 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_00fe1754;
  }
  *(long *)(param_1 + 0x60) = lVar7;
  local_58._8_8_ = 1;
  local_48 = 0;
  local_58._0_8_ =
       CONCAT44((int)*(undefined8 *)(param_1 + 0x88),(int)*(undefined8 *)(param_1 + 0x80));
  local_78 = (long *)FUN_00dffb0c(local_88,*(undefined8 *)(*(long *)(param_1 + 0x48) + 8));
  if (local_78 != (long *)0x0) {
    plVar8 = local_78 + 5;
    do {
      lVar9 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar9 == -1) goto LAB_00fe182c;
  }
  local_88[0] = local_88[0] & 0xffffffffffffff00;
  FUN_00fe1868(local_78,param_1 + 0x50,local_88,local_58,plVar13,0);
  lVar9 = FUN_00dff6d4(local_88,*(undefined8 *)(param_1 + 8),&local_78);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
LAB_00fe182c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar8 != (long *)0x0) {
    plVar13 = plVar8 + 5;
    do {
      lVar7 = *plVar13;
      iVar3 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_00fe1754;
  }
  lVar7 = *(long *)(param_1 + 0x78);
  *(long *)(param_1 + 0x70) = lVar9;
  if (*(char *)(lVar7 + 0x288) != '\0') {
    plVar8 = (long *)(lVar7 + 0x298);
    lVar10 = nn::os::GetCurrentThread();
LAB_00fe16a8:
    if (*plVar8 == 0) goto code_r0x00fe16b0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x2a0));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x2a0));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = lVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00fe16b8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00fe16b8:
    lVar10 = *(long *)(lVar7 + 0x60);
    uVar12 = *(long *)(lVar7 + 0x68) - lVar10 >> 3;
    uVar11 = *(ulong *)(lVar7 + 0x98);
    if (uVar12 <= uVar11) {
      if (uVar12 < 0xffffffffffffffc0) {
        FUN_0127173c((long *)(lVar7 + 0x60),0x40);
        uVar11 = *(ulong *)(lVar7 + 0x98);
        lVar10 = *(long *)(lVar7 + 0x60);
      }
      else {
        *(ulong *)(lVar7 + 0x68) = lVar10 + uVar12 * 8 + 0x200;
      }
    }
    *(ulong *)(lVar7 + 0x98) = uVar11 + 1;
    *(long *)(lVar10 + uVar11 * 8) = lVar9 + 0x40;
    *(undefined8 *)(lVar7 + 0x298) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x2a0));
  }
  *(undefined4 *)(param_1 + 0xac) = 3;
  if (local_78 != (long *)0x0) {
    plVar8 = local_78 + 5;
    do {
      lVar9 = *plVar8;
      iVar3 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
LAB_00fe1754:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
code_r0x00fe16b0:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar5) {
    *plVar8 = lVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00fe16b8;
  goto LAB_00fe16a8;
}


