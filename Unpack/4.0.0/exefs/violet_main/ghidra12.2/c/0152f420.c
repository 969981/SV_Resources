/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152f420; name: FUN_0152f420
 */


void FUN_0152f420(long param_1,long *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *local_48;
  
  if ((0x20 < param_3) || (0x1d < param_4)) {
    return;
  }
  plVar10 = *(long **)(param_1 + 0x948);
  local_48 = plVar10;
  if (plVar10 == (long *)0x0) {
    FUN_00f139bc(param_1,&local_48,param_3,param_4);
  }
  else {
    plVar1 = plVar10 + 5;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) goto LAB_0152f830;
    FUN_00f139bc(param_1,&local_48,param_3,param_4);
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 5;
      do {
        lVar9 = *plVar1;
        iVar7 = (int)lVar9 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      else if ((int)lVar9 == 0) goto LAB_0152f858;
    }
  }
  plVar10 = *(long **)(param_1 + 0x948);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) {
LAB_0152f830:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  sVar5 = FUN_00cf44f4(plVar10[0xe]);
  if ((((sVar5 != 0x3e6) && (sVar5 = FUN_00cf44f4(plVar10[0xe]), sVar5 != 999)) ||
      (iVar7 = FUN_0152f880(plVar10[0xe]), iVar7 != 1)) &&
     (((uVar6 = FUN_00cf44f4(plVar10[0xe]), uVar6 != 0 &&
       (uVar8 = FUN_00cf4cfc(plVar10[0xe]), (uVar8 & 1) == 0)) &&
      ((*(ushort *)(*(long *)(plVar10[0xe] + 0x10) + 4) >> 2 & 1) == 0)))) {
    lVar9 = param_1 + (ulong)uVar6 * 2;
    sVar5 = *(short *)(lVar9 + 0x140);
    if (sVar5 != 0) {
      *(short *)(lVar9 + 0x140) = sVar5 + -1;
    }
  }
  plVar1 = plVar10 + 5;
  do {
    lVar9 = *plVar1;
    iVar7 = (int)lVar9 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  else if ((int)lVar9 == 0) {
LAB_0152f858:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  lVar11 = *(long *)(*param_2 + 0x70);
  lVar12 = *(long *)(param_1 + 0x9d0) + (ulong)param_3 * 0x2850 + (ulong)param_4 * 0x158;
  plVar10 = (long *)(lVar11 + 0x20);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0152f5a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x28));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x28));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0152f5a4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0152f5a4:
  FUN_00f32a60(lVar11,lVar12,lVar12 + 0x148);
  *(undefined8 *)(lVar11 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x28));
  plVar10 = (long *)*param_2;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) goto LAB_0152f830;
  }
  if ((*(byte *)(*(long *)(plVar10[0xe] + 0x10) + 4) >> 2 & 1) == 0) {
    sVar5 = FUN_00cf44f4();
    bVar4 = sVar5 == 0;
  }
  else {
    bVar4 = false;
  }
  param_4 = param_4 + param_3 * 0x1e;
  uVar8 = 1L << ((ulong)param_4 & 0x3f);
  puVar2 = (ulong *)(param_1 + ((ulong)(param_4 >> 3) & 0x1ffffff8) + 0x40);
  if (bVar4) {
    uVar8 = *puVar2 & (uVar8 ^ 0xffffffffffffffff);
  }
  else {
    uVar8 = *puVar2 | uVar8;
  }
  *puVar2 = uVar8;
  plVar1 = plVar10 + 5;
  do {
    lVar9 = *plVar1;
    iVar7 = (int)lVar9 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  else if ((int)lVar9 == 0) goto LAB_0152f858;
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    plVar10 = param_2 + 5;
    do {
      lVar9 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) goto LAB_0152f830;
  }
  sVar5 = FUN_00cf44f4(param_2[0xe]);
  if ((((sVar5 != 0x3e6) && (sVar5 = FUN_00cf44f4(param_2[0xe]), sVar5 != 999)) ||
      (iVar7 = FUN_0152f880(param_2[0xe]), iVar7 != 1)) &&
     (((uVar6 = FUN_00cf44f4(param_2[0xe]), uVar6 != 0 &&
       (uVar8 = FUN_00cf4cfc(param_2[0xe]), (uVar8 & 1) == 0)) &&
      ((*(ushort *)(*(long *)(param_2[0xe] + 0x10) + 4) >> 2 & 1) == 0)))) {
    lVar9 = param_1 + (ulong)uVar6 * 2;
    uVar6 = *(ushort *)(lVar9 + 0x140);
    if (uVar6 < 0x3de) {
      *(ushort *)(lVar9 + 0x140) = uVar6 + 1;
    }
  }
  plVar10 = param_2 + 5;
  do {
    lVar9 = *plVar10;
    iVar7 = (int)lVar9 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
LAB_0152f704:
    if (*(code **)(param_1 + 0x950) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0152f80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x950))(param_1 + 0x970);
    return;
  }
  if ((int)lVar9 != 0) goto LAB_0152f704;
  goto LAB_0152f858;
}


