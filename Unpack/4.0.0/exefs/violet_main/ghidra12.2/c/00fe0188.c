/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe0188; name: FUN_00fe0188
 */


undefined8 FUN_00fe0188(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong local_c8 [2];
  undefined8 local_b8;
  long *local_b0;
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
  
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
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
    local_c8[0] = *(ulong *)(param_1 + 0x48);
    lVar8 = FUN_00cf3764(local_58,*(undefined8 *)(local_c8[0] + 8),local_c8);
    lVar10 = 0;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x28);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) goto LAB_00fe0610;
      lVar10 = lVar8;
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
    plVar9 = (long *)*plVar14;
    *plVar14 = 0;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 5;
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
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_00fe04f0;
    }
    *(long *)(param_1 + 0x50) = lVar8;
    local_58._8_8_ = 1;
    local_48 = 0;
    local_58._0_8_ =
         CONCAT44((int)*(undefined8 *)(param_1 + 0x88),(int)*(undefined8 *)(param_1 + 0x80));
    local_b0 = (long *)FUN_00dffb0c(local_c8,*(undefined8 *)(*(long *)(param_1 + 0x48) + 8));
    if (local_b0 != (long *)0x0) {
      plVar9 = local_b0 + 5;
      do {
        lVar10 = *plVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)lVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar10 == -1) goto LAB_00fe0610;
    }
    local_b8 = 0;
    local_c8[0] = local_c8[0] & 0xffffffffffffff00;
    FUN_00fdf8d0(local_b0,param_1 + 0x60,&local_b8,plVar14,local_c8,local_58,0);
    lVar10 = FUN_00dff6d4(local_c8,*(undefined8 *)(param_1 + 8),&local_b0);
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
LAB_00fe0610:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar9 = *(long **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (plVar9 != (long *)0x0) {
      plVar14 = plVar9 + 5;
      do {
        lVar8 = *plVar14;
        iVar3 = (int)lVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_00fe04f0;
    }
    lVar8 = *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x70) = lVar10;
    if (*(char *)(lVar8 + 0x288) != '\0') {
      plVar9 = (long *)(lVar8 + 0x298);
      lVar11 = nn::os::GetCurrentThread();
LAB_00fe03b4:
      if (*plVar9 == 0) goto code_r0x00fe03bc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x2a0));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x2a0));
            while (*plVar9 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00fe03c4;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00fe03c4:
      lVar11 = *(long *)(lVar8 + 0x60);
      uVar13 = *(long *)(lVar8 + 0x68) - lVar11 >> 3;
      uVar12 = *(ulong *)(lVar8 + 0x98);
      if (uVar13 <= uVar12) {
        if (uVar13 < 0xffffffffffffffc0) {
          FUN_0127173c((long *)(lVar8 + 0x60),0x40);
          uVar12 = *(ulong *)(lVar8 + 0x98);
          lVar11 = *(long *)(lVar8 + 0x60);
        }
        else {
          *(ulong *)(lVar8 + 0x68) = lVar11 + uVar13 * 8 + 0x200;
        }
      }
      *(ulong *)(lVar8 + 0x98) = uVar12 + 1;
      *(long *)(lVar11 + uVar12 * 8) = lVar10 + 0x40;
      *(undefined8 *)(lVar8 + 0x298) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x2a0));
    }
    *(undefined4 *)(param_1 + 0xac) = 3;
    plVar9 = *(long **)(param_1 + 8);
    lVar10 = (*(ulong *)(param_1 + 0x80) >> 2) * (*(ulong *)(param_1 + 0x88) >> 2) * 8;
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar12 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar7,lVar10,0x20);
    }
    else {
      FUN_00c48fe8(plVar9,uVar7,lVar10,0x20);
    }
    plVar9 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar9 != (long *)0x0) {
      plVar14 = plVar9 + 5;
      do {
        lVar10 = *plVar14;
        iVar3 = (int)lVar10 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_00fe04f0;
    }
    plVar9 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar9 != (long *)0x0) {
      plVar14 = plVar9 + 5;
      do {
        lVar10 = *plVar14;
        iVar3 = (int)lVar10 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *(int *)plVar14 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_00fe04f0;
    }
    if (local_b0 != (long *)0x0) {
      plVar9 = local_b0 + 5;
      do {
        lVar10 = *plVar9;
        iVar3 = (int)lVar10 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
LAB_00fe04f0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
code_r0x00fe03bc:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar5) {
    *plVar9 = lVar11;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00fe03c4;
  goto LAB_00fe03b4;
}


