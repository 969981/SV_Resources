/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170be6c; name: FUN_0170be6c
 */


void FUN_0170be6c(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *local_68;
  undefined1 local_60 [20];
  int local_4c;
  int aiStack_48 [2];
  
  plVar6 = DAT_0485a0e8;
  if (DAT_0485a0e8 != (long *)0x0) {
    plVar12 = DAT_0485a0e8 + 5;
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
LAB_0170c1e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar10 = *(long *)(param_1 + 0x1c8);
  lVar2 = *(long *)(param_1 + 0x1d0);
  if (lVar10 != lVar2) {
    do {
      FUN_01292394(plVar6,lVar10);
      lVar10 = lVar10 + 8;
    } while (lVar2 != lVar10);
    lVar10 = *(long *)(param_1 + 0x1c8);
  }
  plVar12 = *(long **)(param_1 + 0x200);
  *(long *)(param_1 + 0x1d0) = lVar10;
  plVar13 = *(long **)(param_1 + 0x208);
  do {
    if (plVar12 == plVar13) {
      if (plVar6 != (long *)0x0) {
        plVar12 = plVar6 + 5;
        do {
          lVar10 = *plVar12;
          iVar5 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *(int *)plVar12 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0170c17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
        if ((int)lVar10 == 0) {
LAB_0170c1b8:
          pcVar8 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
          ;
LAB_0170c1d8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     pcVar8,0x58,"Reference counter underflows.");
        }
      }
      return;
    }
    if (*(char *)(param_1 + 0x1a0) != '\0') {
      plVar11 = *(long **)(*plVar12 + 0x58);
      if (plVar11 != (long *)0x0) {
        plVar7 = plVar11 + 5;
        do {
          lVar10 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = (int)lVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar10 == -1) goto LAB_0170c1e0;
      }
      local_4c = *(int *)(param_1 + 0x1a4);
      local_68 = (long *)0x0;
      aiStack_48[0] = 2;
      local_60[0] = 0;
      piVar9 = (int *)plVar11[0x22];
      if (piVar9 != (int *)plVar11[0x23]) {
LAB_0170bf3c:
        if ((*piVar9 != 2) || (piVar9[1] != local_4c)) break;
        plVar7 = *(long **)(piVar9 + 2);
        piVar9[2] = 0;
        piVar9[3] = 0;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 5;
          do {
            lVar10 = *plVar1;
            iVar5 = (int)lVar10 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))();
            goto LAB_0170bf8c;
          }
          if ((int)lVar10 != 0) goto LAB_0170bf8c;
          goto LAB_0170c208;
        }
        goto LAB_0170bf8c;
      }
LAB_0170c180:
      FUN_00d11148(plVar11 + 0x22,aiStack_48,&local_4c,&local_68,local_60);
LAB_0170bf8c:
      if (local_68 != (long *)0x0) {
        plVar7 = local_68 + 5;
        do {
          lVar10 = *plVar7;
          iVar5 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
        else if ((int)lVar10 == 0) goto LAB_0170c1b8;
      }
      if (plVar11 != (long *)0x0) {
        plVar7 = plVar11 + 5;
        do {
          lVar10 = *plVar7;
          iVar5 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        else if ((int)lVar10 == 0) goto LAB_0170c1b8;
      }
    }
    if (*(char *)(param_1 + 0x1a8) != '\0') {
      plVar11 = *(long **)(*plVar12 + 0x58);
      if (plVar11 != (long *)0x0) {
        plVar7 = plVar11 + 5;
        do {
          lVar10 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = (int)lVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar10 == -1) goto LAB_0170c1e0;
      }
      local_4c = *(int *)(param_1 + 0x1ac);
      local_68 = (long *)0x0;
      aiStack_48[0] = 2;
      local_60[0] = 0;
      piVar9 = (int *)plVar11[0x22];
      if (piVar9 != (int *)plVar11[0x23]) {
LAB_0170c01c:
        if ((*piVar9 != 2) || (piVar9[1] != local_4c)) goto LAB_0170c034;
        plVar7 = *(long **)(piVar9 + 2);
        piVar9[2] = 0;
        piVar9[3] = 0;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 5;
          do {
            lVar10 = *plVar1;
            iVar5 = (int)lVar10 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          else if ((int)lVar10 == 0) {
LAB_0170c208:
            aiStack_48[0] = 2;
            local_60[0] = 0;
            local_68 = (long *)0x0;
            pcVar8 = 
            "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
            ;
            goto LAB_0170c1d8;
          }
        }
        goto LAB_0170c06c;
      }
LAB_0170c19c:
      FUN_00d11148(plVar11 + 0x22,aiStack_48,&local_4c,&local_68,local_60);
LAB_0170c06c:
      if (local_68 != (long *)0x0) {
        plVar7 = local_68 + 5;
        do {
          lVar10 = *plVar7;
          iVar5 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
        else if ((int)lVar10 == 0) goto LAB_0170c1b8;
      }
      if (plVar11 != (long *)0x0) {
        plVar7 = plVar11 + 5;
        do {
          lVar10 = *plVar7;
          iVar5 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        else if ((int)lVar10 == 0) goto LAB_0170c1b8;
      }
    }
    plVar12 = plVar12 + 1;
  } while( true );
  piVar9 = piVar9 + 8;
  if ((int *)plVar11[0x23] == piVar9) goto LAB_0170c180;
  goto LAB_0170bf3c;
LAB_0170c034:
  piVar9 = piVar9 + 8;
  if ((int *)plVar11[0x23] == piVar9) goto LAB_0170c19c;
  goto LAB_0170c01c;
}


