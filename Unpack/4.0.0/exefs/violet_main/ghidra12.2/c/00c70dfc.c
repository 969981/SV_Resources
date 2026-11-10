/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c70dfc; name: FUN_00c70dfc
 */


void FUN_00c70dfc(long param_1,char *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  
  if (*param_2 == '\0') {
    return;
  }
  plVar1 = (long *)(param_1 + 0xd70);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0xd78) == 0) {
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0xd78) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00c70e4c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xd78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xd78) == 0) {
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0xd78) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00c70e4c;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0xd78) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00c70e4c:
  iVar5 = *(int *)(param_2 + 4);
  lVar13 = *(long *)(param_1 + 0x38);
  lVar12 = lVar13 + (long)iVar5 * 0x1d0;
  plVar8 = (long *)FUN_00c71200(lVar12 + 0x150,param_3);
  lVar7 = *param_4;
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x28);
    do {
      iVar4 = *piVar2;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar11) {
        *piVar2 = iVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = (long *)*plVar8;
  *plVar8 = lVar7;
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 5;
    do {
      lVar7 = *plVar8;
      iVar4 = (int)lVar7 + -1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar11) {
        *(int *)plVar8 = iVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined1 *)(lVar13 + (long)iVar5 * 0x1d0 + 0x1b9) = 1;
  plVar8 = *(long **)(param_1 + 0xd90);
  plVar9 = *(long **)(param_1 + 0xd98);
  if (plVar8 != plVar9) {
    plVar10 = (long *)*plVar8;
    if (plVar10[1] ==
        *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0 + 0x1c8)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,param_2,lVar12);
    }
    if (plVar8 + 1 != plVar9) {
      plVar10 = (long *)plVar8[1];
      if (plVar10[1] ==
          *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0 + 0x1c8)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,param_2,lVar12);
      }
      if (plVar8 + 2 != plVar9) {
        plVar10 = (long *)plVar8[2];
        if (plVar10[1] ==
            *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0 + 0x1c8)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,param_2,lVar12);
        }
        if (plVar8 + 3 != plVar9) {
          plVar10 = (long *)plVar8[3];
          if (plVar10[1] ==
              *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0 + 0x1c8)) {
            (**(code **)(*plVar10 + 0x18))(plVar10,param_2,lVar12);
          }
          if (plVar8 + 4 != plVar9) {
            plVar10 = (long *)plVar8[4];
            if (plVar10[1] ==
                *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0 + 0x1c8))
            {
              (**(code **)(*plVar10 + 0x18))(plVar10,param_2,lVar12);
            }
            for (plVar8 = plVar8 + 5; plVar8 != plVar9; plVar8 = plVar8 + 1) {
              plVar10 = (long *)*plVar8;
              if (plVar10[1] ==
                  *(long *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_2 + 4) * 0x1d0 + 0x1c8)
                 ) {
                (**(code **)(*plVar10 + 0x18))(plVar10,param_2,lVar12);
              }
            }
          }
        }
      }
    }
  }
  do {
    lVar7 = *plVar1;
    lVar12 = *(long *)(param_1 + 0xd78);
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xd78) = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar13 = *plVar1;
    lVar3 = *(long *)(param_1 + 0xd78);
    if (lVar13 != lVar7 || lVar3 != lVar12) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00c710b4;
    }
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xd74) = lVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar11 = true;
LAB_00c710b4:
  if (!bVar11) {
    do {
      lVar7 = *plVar1;
      lVar12 = *(long *)(param_1 + 0xd78);
      if (lVar7 != lVar13 || lVar12 != lVar3) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c71170;
      }
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xd74) = lVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar11 = true;
joined_r0x00c71170:
    if (!bVar11) {
      do {
        lVar13 = *plVar1;
        lVar3 = *(long *)(param_1 + 0xd78);
        if (lVar13 != lVar7 || lVar3 != lVar12) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar7 = lVar13;
          lVar12 = lVar3;
          goto joined_r0x00c71170;
        }
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)(param_1 + 0xd74) = lVar12;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar11 = true;
      lVar7 = lVar13;
      lVar12 = lVar3;
      goto joined_r0x00c71170;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd80));
  return;
}


