/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eb0770; name: FUN_00eb0770
 */


void FUN_00eb0770(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *local_80;
  long *local_78;
  char local_70;
  undefined7 uStack_6f;
  long local_68;
  long local_60;
  long local_58;
  long *local_50;
  long *local_48;
  
  if (*(char *)param_1[0x22] == '\0') {
    lVar7 = param_1[0x1d];
    lVar8 = param_1[0x1e];
    lVar9 = param_1[0x1f];
    local_50 = (long *)param_1[0x20];
    if (local_50 != (long *)0x0) {
      pcVar6 = *(code **)(*local_50 + 0x18);
      plVar5 = local_50;
LAB_00eb09d4:
      (*pcVar6)(local_50);
      goto LAB_00eb0804;
    }
  }
  else {
    FUN_00d1e980(&local_70,param_1 + 0x21,&DAT_03c9c9c5,param_1 + 0x1d);
    plVar5 = (long *)CONCAT71(uStack_6f,local_70);
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 6;
    }
    lVar7 = *plVar1;
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 7;
    }
    lVar8 = *plVar1;
    if (plVar5 == (long *)0x0) {
      lVar9 = 0;
      local_50 = plVar5;
    }
    else {
      lVar9 = plVar5[8];
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_50 = (long *)CONCAT71(uStack_6f,local_70);
      if (local_50 != (long *)0x0) {
        pcVar6 = *(code **)(*local_50 + 0x20);
        goto LAB_00eb09d4;
      }
LAB_00eb0804:
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_50 = plVar5;
    }
  }
  local_70 = '\x01';
  local_68 = lVar7;
  local_60 = lVar8;
  local_58 = lVar9;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))(local_50);
  }
  if ((local_70 == '\0') || ((char)param_1[0x25] == '\0')) {
    if ((char)param_1[0x25] != '\0' || local_70 != '\0') goto LAB_00eb083c;
  }
  else {
    if (param_1[0x26] == local_68) goto LAB_00eb094c;
LAB_00eb083c:
    FUN_00c5ecb4(&local_78,*param_2,&local_70);
    if (local_78 != (long *)0x0) {
      plVar5 = param_1 + 0x25;
      if ((char)*plVar5 == '\0') {
        local_80 = (long *)0x0;
      }
      else {
        FUN_00c5ecb4(&local_80,*param_2,plVar5);
        if (local_80 != (long *)0x0) {
          plVar1 = param_1 + 5;
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)lVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar7 == -1) goto LAB_00eb0b18;
          local_48 = param_1;
          FUN_00eb10d8(local_80,&local_48);
          if (local_48 != (long *)0x0) {
            plVar1 = local_48 + 5;
            do {
              lVar7 = *plVar1;
              iVar4 = (int)lVar7 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*local_48 + 0x10))();
            }
            else if ((int)lVar7 == 0) goto LAB_00eb0ac0;
          }
        }
      }
      if (local_78 != (long *)0x0) {
        plVar1 = param_1 + 5;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar7 == -1) {
LAB_00eb0b18:
          local_48 = param_1;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        local_48 = param_1;
        FUN_00eb0b40(local_78,&local_48);
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 5;
          do {
            lVar7 = *plVar1;
            iVar4 = (int)lVar7 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
          else if ((int)lVar7 == 0) goto LAB_00eb0ac0;
        }
      }
      plVar1 = local_50;
      *(undefined1 *)(param_1 + 0x33) = 1;
      if ((char)param_1[0x25] == '\0') {
        if (local_70 != '\0') {
          param_1[0x26] = local_68;
          param_1[0x27] = local_60;
          param_1[0x28] = local_58;
          param_1[0x29] = (long)local_50;
          if (local_50 != (long *)0x0) {
            (**(code **)(*local_50 + 0x18))();
          }
          *(char *)plVar5 = '\x01';
        }
      }
      else if (local_70 == '\0') {
        if ((long *)param_1[0x29] != (long *)0x0) {
          (**(code **)(*(long *)param_1[0x29] + 0x20))();
        }
        *(char *)plVar5 = '\0';
      }
      else {
        param_1[0x26] = local_68;
        param_1[0x27] = local_60;
        param_1[0x28] = local_58;
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x18))(local_50);
        }
        plVar5 = (long *)param_1[0x29];
        param_1[0x29] = (long)plVar1;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      if (local_80 != (long *)0x0) {
        plVar5 = local_80 + 5;
        do {
          lVar7 = *plVar5;
          iVar4 = (int)lVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
        else if ((int)lVar7 == 0) goto LAB_00eb0ac0;
      }
      if (local_78 != (long *)0x0) {
        plVar5 = local_78 + 5;
        do {
          lVar7 = *plVar5;
          iVar4 = (int)lVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
        else if ((int)lVar7 == 0) {
LAB_00eb0ac0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
  }
  if (local_70 == '\0') {
    return;
  }
LAB_00eb094c:
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


