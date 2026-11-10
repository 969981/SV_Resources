/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdf384; name: FUN_00fdf384
 */


void FUN_00fdf384(long param_1,void *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  void *__dest;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong local_e0 [2];
  undefined8 local_d0;
  long *local_c8;
  size_t local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [16];
  ulong local_48;
  
  local_80 = 2;
  local_74 = 0x300000002;
  local_90 = 0;
  uStack_88 = 1;
  local_6c = 0x500000004;
  local_64 = 0;
  local_78 = *(undefined4 *)(param_1 + 0x94);
  local_a8 = *(undefined8 *)(param_1 + 0x80);
  uStack_a0 = *(undefined8 *)(param_1 + 0x88);
  local_98 = 1;
  local_60 = 0x200000000;
  local_c0 = *(size_t *)(param_1 + 0x48);
  lVar7 = FUN_00cf3764(local_58,*(undefined8 *)(local_c0 + 8),&local_c0);
  lVar10 = 0;
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
    if (iVar3 == -1) goto LAB_00fdf874;
    lVar10 = lVar7;
  }
  lVar11 = *(long *)(*(long *)(lVar10 + 0x70) + 0x30);
  local_58._0_8_ = *(undefined8 *)(lVar11 + 8);
  local_58._8_8_ = *(undefined8 *)(lVar11 + 0x6098);
  local_48 = lVar11 + 0x10;
  local_58 = FUN_0117e498(*(undefined8 *)(lVar11 + 0x6140),local_58,&local_a8,1,0);
  local_48 = local_48 & 0xffffffffffffff00;
  FUN_00d56380(lVar10 + 0x30,local_58);
  uVar6 = FUN_00d56320(lVar10 + 0x30);
  *(undefined4 *)(lVar10 + 0x78) = uVar6;
  plVar14 = (long *)(param_1 + 0x50);
  plVar8 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar8 != (long *)0x0) {
    plVar15 = plVar8 + 5;
    do {
      lVar10 = *plVar15;
      iVar3 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_00fdf784;
  }
  *(long *)(param_1 + 0x50) = lVar7;
  local_b4 = 0;
  local_c0 = (*(ulong *)(param_1 + 0x80) >> 2) * (*(ulong *)(param_1 + 0x88) >> 2) * 8;
  local_b8 = 0x20;
  local_e0[0] = *(ulong *)(param_1 + 0x48);
  lVar7 = FUN_00cf3764(local_58,*(undefined8 *)(local_e0[0] + 8),local_e0);
  lVar10 = 0;
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
    if (iVar3 == -1) goto LAB_00fdf874;
    lVar10 = lVar7;
  }
  lVar11 = *(long *)(*(long *)(lVar10 + 0x70) + 0x30);
  local_58._0_8_ = *(undefined8 *)(lVar11 + 8);
  local_58._8_8_ = *(undefined8 *)(lVar11 + 0x6098);
  local_48 = lVar11 + 0x10;
  local_58 = FUN_00d56874(*(undefined8 *)(lVar11 + 0x6140),local_58,&local_c0,0,0);
  local_48 = local_48 & 0xffffffffffffff00;
  FUN_00d56380(lVar10 + 0x30,local_58);
  uVar6 = FUN_00d56320(lVar10 + 0x30);
  *(undefined4 *)(lVar10 + 0x78) = uVar6;
  plVar15 = (long *)(param_1 + 0x60);
  plVar8 = (long *)*plVar15;
  *plVar15 = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar10 = *plVar2;
      iVar3 = (int)lVar10 + -1;
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
    else if ((int)lVar10 == 0) goto LAB_00fdf784;
  }
  *plVar15 = lVar7;
  pcVar9 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30);
  if (*pcVar9 == '\0' || *(long *)(pcVar9 + 8) == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (*(long *)(*(long *)(pcVar9 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    __dest = (void *)(**(code **)PTR_DAT_047d8da8)();
  }
  memcpy(__dest,param_2,local_c0);
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30);
  local_58._8_8_ = 1;
  local_48 = 0;
  local_58._0_8_ =
       CONCAT44((int)*(undefined8 *)(param_1 + 0x88),(int)*(undefined8 *)(param_1 + 0x80));
  local_c8 = (long *)FUN_00dffb0c(local_e0,*(undefined8 *)(*(long *)(param_1 + 0x48) + 8));
  if (local_c8 != (long *)0x0) {
    plVar8 = local_c8 + 5;
    do {
      lVar10 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar10 == -1) goto LAB_00fdf874;
  }
  local_d0 = 0;
  local_e0[0] = local_e0[0] & 0xffffffffffffff00;
  FUN_00fdf8d0(local_c8,plVar15,&local_d0,plVar14,local_e0,local_58,0);
  lVar10 = FUN_00dff6d4(local_e0,*(undefined8 *)(param_1 + 8),&local_c8);
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
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
LAB_00fdf874:
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
    plVar14 = plVar8 + 5;
    do {
      lVar7 = *plVar14;
      iVar3 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_00fdf784;
  }
  lVar7 = *(long *)(param_1 + 0x78);
  *(long *)(param_1 + 0x70) = lVar10;
  if (*(char *)(lVar7 + 0x288) != '\0') {
    plVar8 = (long *)(lVar7 + 0x298);
    lVar11 = nn::os::GetCurrentThread();
LAB_00fdf6d8:
    if (*plVar8 == 0) goto code_r0x00fdf6e0;
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
              *plVar8 = lVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00fdf6e8;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00fdf6e8:
    lVar11 = *(long *)(lVar7 + 0x60);
    uVar13 = *(long *)(lVar7 + 0x68) - lVar11 >> 3;
    uVar12 = *(ulong *)(lVar7 + 0x98);
    if (uVar13 <= uVar12) {
      if (uVar13 < 0xffffffffffffffc0) {
        FUN_0127173c((long *)(lVar7 + 0x60),0x40);
        uVar12 = *(ulong *)(lVar7 + 0x98);
        lVar11 = *(long *)(lVar7 + 0x60);
      }
      else {
        *(ulong *)(lVar7 + 0x68) = lVar11 + uVar13 * 8 + 0x200;
      }
    }
    *(ulong *)(lVar7 + 0x98) = uVar12 + 1;
    *(long *)(lVar11 + uVar12 * 8) = lVar10 + 0x40;
    *(undefined8 *)(lVar7 + 0x298) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x2a0));
  }
  *(undefined4 *)(param_1 + 0xac) = 3;
  if (local_c8 != (long *)0x0) {
    plVar8 = local_c8 + 5;
    do {
      lVar10 = *plVar8;
      iVar3 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_00fdf784:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
code_r0x00fdf6e0:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar5) {
    *plVar8 = lVar11;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00fdf6e8;
  goto LAB_00fdf6d8;
}


