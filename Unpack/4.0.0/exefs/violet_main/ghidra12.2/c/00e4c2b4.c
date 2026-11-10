/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e4c2b4; name: FUN_00e4c2b4
 */


void FUN_00e4c2b4(long *param_1,long param_2,ulong *param_3,ulong *param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *local_70;
  undefined4 local_68;
  ulong local_60;
  ulong uStack_58;
  
  plVar7 = (long *)(param_2 + 0x78);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00e4c300;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x80));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x80));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00e4c300;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00e4c300:
  local_60 = *param_3;
  uStack_58 = *param_4;
  plVar6 = (long *)(param_2 + 0x48);
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    if (((ulong)plVar7[4] < local_60) ||
       ((plVar8 = plVar7, (ulong)plVar7[4] <= local_60 && ((ulong)plVar7[5] < uStack_58)))) {
      plVar8 = plVar7 + 1;
      plVar7 = plVar6;
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      if (((ulong)plVar8[4] < local_60) ||
         ((plVar9 = plVar8, (ulong)plVar8[4] <= local_60 && ((ulong)plVar8[5] < uStack_58)))) {
        plVar9 = plVar8 + 1;
        plVar8 = plVar7;
      }
      plVar7 = (long *)*plVar9;
      if (plVar7 == (long *)0x0) {
        plVar7 = plVar8;
      }
      else {
        if (((ulong)plVar7[4] < local_60) ||
           ((plVar9 = plVar7, (ulong)plVar7[4] <= local_60 && ((ulong)plVar7[5] < uStack_58)))) {
          plVar9 = plVar7 + 1;
          plVar7 = plVar8;
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 != (long *)0x0) {
          do {
            if (((ulong)plVar9[4] < local_60) ||
               ((plVar8 = plVar9, (ulong)plVar9[4] <= local_60 && ((ulong)plVar9[5] < uStack_58))))
            {
              plVar9 = plVar9 + 1;
              plVar8 = plVar7;
            }
            plVar7 = plVar8;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
    if (((plVar7 != plVar6) && ((ulong)plVar7[4] <= local_60)) &&
       (((ulong)plVar7[4] < local_60 || ((ulong)plVar7[5] <= uStack_58)))) {
      *(int *)(plVar7 + 7) = (int)plVar7[7] + 1;
      lVar5 = plVar7[6];
      *param_1 = lVar5;
      if (lVar5 != 0) {
        piVar1 = (int *)(lVar5 + 0x28);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 != -1) goto LAB_00e4c45c;
        goto LAB_00e4c544;
      }
      goto LAB_00e4c45c;
    }
  }
  plVar7 = (long *)FUN_00e4bfa8(&local_70,param_5);
  if (plVar7 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else {
    plVar6 = plVar7 + 5;
    do {
      lVar5 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) {
LAB_00e4c544:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar5 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_70 = plVar7;
    if ((int)lVar5 == -1) goto LAB_00e4c544;
  }
  local_68 = 1;
  FUN_00e4c5d8(param_2 + 0x40,&local_60,&local_60,&local_70);
  *param_1 = (long)plVar7;
  if (local_70 != (long *)0x0) {
    plVar7 = local_70 + 5;
    do {
      lVar5 = *plVar7;
      iVar2 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
LAB_00e4c45c:
  *(undefined8 *)(param_2 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x80));
  return;
}


