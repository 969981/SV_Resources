/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152f030; name: FUN_0152f030
 */


undefined8 FUN_0152f030(long param_1,long *param_2,long *param_3,uint param_4,uint param_5)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *local_48;
  
  param_3 = (long *)*param_3;
  local_48 = param_3;
  if (param_3 == (long *)0x0) {
    uVar8 = FUN_00f1386c(param_1,param_4,param_5,&local_48,1);
  }
  else {
    plVar12 = param_3 + 5;
    do {
      lVar10 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) goto LAB_0152f3cc;
    uVar8 = FUN_00f1386c(param_1,param_4,param_5,&local_48,1);
    if (param_3 != (long *)0x0) {
      plVar12 = param_3 + 5;
      do {
        lVar10 = *plVar12;
        iVar7 = (int)lVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*param_3 + 0x10))(param_3);
      }
      else if ((int)lVar10 == 0) goto LAB_0152f3f4;
    }
  }
  if ((uVar8 & 1) == 0) {
    sVar5 = FUN_00cf44f4(*(undefined8 *)(*param_2 + 0x70));
    if ((sVar5 == 0x3e6) || (sVar5 = FUN_00cf44f4(*(undefined8 *)(*param_2 + 0x70)), sVar5 == 999))
    {
      lVar10 = *param_2;
      sVar5 = FUN_00cf44f4(*(undefined8 *)(lVar10 + 0x70));
      if (((sVar5 == 0x3e6) || (sVar5 = FUN_00cf44f4(*(undefined8 *)(lVar10 + 0x70)), sVar5 == 999))
         && ((iVar7 = FUN_0152f880(*(undefined8 *)(lVar10 + 0x70)), param_4 != 0x20 && (iVar7 == 1))
            )) goto LAB_0152f0c8;
    }
    lVar11 = *(long *)(*param_2 + 0x70);
    lVar13 = *(long *)(param_1 + 0x9d0) + (ulong)param_4 * 0x2850 + (ulong)param_5 * 0x158;
    plVar12 = (long *)(lVar11 + 0x20);
    lVar10 = nn::os::GetCurrentThread();
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x28));
          while (*plVar12 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = lVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0152f178;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0152f178:
    FUN_00f32a60(lVar11,lVar13,lVar13 + 0x148);
    *(undefined8 *)(lVar11 + 0x20) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x28));
    plVar12 = (long *)*param_2;
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 5;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar10 == -1) goto LAB_0152f3cc;
    }
    if ((*(byte *)(*(long *)(plVar12[0xe] + 0x10) + 4) >> 2 & 1) == 0) {
      sVar5 = FUN_00cf44f4();
      bVar4 = sVar5 == 0;
    }
    else {
      bVar4 = false;
    }
    param_5 = param_5 + param_4 * 0x1e;
    if (0x3dd < param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_020eaaa0();
    }
    uVar8 = 1L << ((ulong)param_5 & 0x3f);
    puVar2 = (ulong *)(param_1 + ((ulong)(param_5 >> 3) & 0x1ffffff8) + 0x40);
    if (bVar4) {
      uVar8 = *puVar2 & (uVar8 ^ 0xffffffffffffffff);
    }
    else {
      uVar8 = *puVar2 | uVar8;
    }
    *puVar2 = uVar8;
    plVar1 = plVar12 + 5;
    do {
      lVar10 = *plVar1;
      iVar7 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar10 == 0) goto LAB_0152f3f4;
    param_2 = (long *)*param_2;
    if (param_2 != (long *)0x0) {
      plVar12 = param_2 + 5;
      do {
        lVar10 = *plVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *(int *)plVar12 = (int)lVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar10 == -1) {
LAB_0152f3cc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    sVar5 = FUN_00cf44f4(param_2[0xe]);
    if ((((sVar5 != 0x3e6) && (sVar5 = FUN_00cf44f4(param_2[0xe]), sVar5 != 999)) ||
        (iVar7 = FUN_0152f880(param_2[0xe]), iVar7 != 1)) &&
       (((uVar6 = FUN_00cf44f4(param_2[0xe]), uVar6 != 0 &&
         (uVar8 = FUN_00cf4cfc(param_2[0xe]), (uVar8 & 1) == 0)) &&
        ((*(ushort *)(*(long *)(param_2[0xe] + 0x10) + 4) >> 2 & 1) == 0)))) {
      lVar10 = param_1 + (ulong)uVar6 * 2;
      uVar6 = *(ushort *)(lVar10 + 0x140);
      if (uVar6 < 0x3de) {
        *(ushort *)(lVar10 + 0x140) = uVar6 + 1;
      }
    }
    plVar12 = param_2 + 5;
    do {
      lVar10 = *plVar12;
      iVar7 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    else if ((int)lVar10 == 0) {
LAB_0152f3f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    if (*(code **)(param_1 + 0x950) != (code *)0x0) {
      (**(code **)(param_1 + 0x950))(param_1 + 0x970);
    }
    uVar9 = 1;
  }
  else {
LAB_0152f0c8:
    uVar9 = 0;
  }
  return uVar9;
}


