/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d08218; name: FUN_00d08218
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d08218(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  char *pcVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  uint local_50 [4];
  int local_28;
  int iStack_24;
  
  lVar15 = param_1[5];
  puVar8 = (undefined8 *)FUN_00c7f744(*(undefined8 *)(*(long *)*param_1 + 0x50));
  plVar13 = (long *)*puVar8;
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 5;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar12 == -1) {
LAB_00d0873c:
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_00d0875c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",pcVar10,0x53,
                 "Reference counter overflows.");
    }
    plVar14 = (long *)plVar13[0xb];
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 5;
      do {
        lVar12 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = (int)lVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar12 == -1) goto LAB_00d0873c;
    }
    iStack_24 = *(int *)(param_1[1] + 4);
    local_28 = 1;
    local_50[0] = local_50[0] & 0xffffff00;
    piVar11 = (int *)plVar14[0x22];
    if (piVar11 != (int *)plVar14[0x23]) {
LAB_00d082b0:
      if ((*piVar11 != 1) || (piVar11[1] != iStack_24)) goto LAB_00d082c8;
      lVar12 = *(long *)param_1[2];
      if (lVar12 != 0) {
        piVar3 = (int *)(lVar12 + 0x28);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == -1) goto LAB_00d087b0;
      }
      plVar9 = *(long **)(piVar11 + 2);
      *(long *)(piVar11 + 2) = lVar12;
      if (plVar9 == (long *)0x0) goto LAB_00d08338;
      plVar2 = plVar9 + 5;
      do {
        lVar12 = *plVar2;
        iVar7 = (int)lVar12 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))();
        goto LAB_00d08338;
      }
      if ((int)lVar12 != 0) goto LAB_00d08338;
      goto LAB_00d0878c;
    }
LAB_00d082d4:
    FUN_00d11148(plVar14 + 0x22,&local_28,&iStack_24,(long *)param_1[2],local_50);
LAB_00d08338:
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 5;
      do {
        lVar12 = *plVar9;
        iVar7 = (int)lVar12 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      else if ((int)lVar12 == 0) goto LAB_00d08764;
    }
    plVar14 = (long *)plVar13[0xb];
    if (plVar14 == (long *)0x0) {
      local_28 = *(int *)(param_1[1] + 4);
      local_50[0] = 1;
      for (piVar11 = _DAT_00000110; piVar11 != _DAT_00000118; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 1) && (piVar11[1] == local_28)) {
          uVar4 = ((undefined8 *)param_1[3])[1];
          *(undefined8 *)(piVar11 + 4) = *(undefined8 *)param_1[3];
          *(undefined8 *)(piVar11 + 6) = uVar4;
          goto LAB_00d08400;
        }
      }
      FUN_00ed5784(0x110,local_50,&local_28);
    }
    else {
      plVar9 = plVar14 + 5;
      do {
        lVar12 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = (int)lVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar12 == -1) goto LAB_00d0873c;
      local_28 = *(int *)(param_1[1] + 4);
      local_50[0] = 1;
      for (piVar11 = (int *)plVar14[0x22]; piVar11 != (int *)plVar14[0x23]; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 1) && (piVar11[1] == local_28)) {
          uVar4 = ((undefined8 *)param_1[3])[1];
          *(undefined8 *)(piVar11 + 4) = *(undefined8 *)param_1[3];
          *(undefined8 *)(piVar11 + 6) = uVar4;
          goto LAB_00d083e8;
        }
      }
      FUN_00ed5784(plVar14 + 0x22,local_50,&local_28);
LAB_00d083e8:
      do {
        lVar12 = *plVar9;
        iVar7 = (int)lVar12 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      else if ((int)lVar12 == 0) goto LAB_00d08764;
    }
LAB_00d08400:
    plVar14 = (long *)plVar13[0xb];
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 5;
      do {
        lVar12 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = (int)lVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar12 == -1) goto LAB_00d0873c;
    }
    iStack_24 = *(int *)(param_1[4] + 4);
    local_28 = 1;
    local_50[0] = local_50[0] & 0xffffff00;
    piVar11 = (int *)plVar14[0x22];
    if (piVar11 != (int *)plVar14[0x23]) {
LAB_00d08448:
      if ((*piVar11 != 1) || (piVar11[1] != iStack_24)) goto LAB_00d08460;
      lVar15 = *(long *)(lVar15 + 0x3b8);
      if (lVar15 != 0) {
        piVar3 = (int *)(lVar15 + 0x28);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = iVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == -1) {
LAB_00d087b0:
          local_28 = 1;
          pcVar10 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_00d0875c;
        }
      }
      plVar9 = *(long **)(piVar11 + 2);
      *(long *)(piVar11 + 2) = lVar15;
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 5;
        do {
          lVar15 = *plVar2;
          iVar7 = (int)lVar15 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar15 == 0) {
LAB_00d0878c:
          local_28 = 1;
          pcVar10 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_00d08784;
        }
      }
      goto LAB_00d084d0;
    }
LAB_00d0846c:
    FUN_00d11148(plVar14 + 0x22,&local_28,&iStack_24,(long *)(lVar15 + 0x3b8),local_50);
LAB_00d084d0:
    if (plVar14 != (long *)0x0) {
      plVar9 = plVar14 + 5;
      do {
        lVar15 = *plVar9;
        iVar7 = (int)lVar15 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      else if ((int)lVar15 == 0) goto LAB_00d08764;
    }
    plVar14 = (long *)plVar13[0xb];
    if (plVar14 == (long *)0x0) {
      local_28 = *(int *)(param_1[4] + 4);
      local_50[0] = 1;
      for (piVar11 = _DAT_00000110; piVar11 != _DAT_00000118; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 1) && (piVar11[1] == local_28)) {
          uVar4 = ((undefined8 *)param_1[6])[1];
          *(undefined8 *)(piVar11 + 4) = *(undefined8 *)param_1[6];
          *(undefined8 *)(piVar11 + 6) = uVar4;
          goto LAB_00d08590;
        }
      }
      FUN_00ed5784(0x110,local_50,&local_28);
    }
    else {
      plVar9 = plVar14 + 5;
      do {
        lVar15 = *plVar9;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = (int)lVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar15 == -1) goto LAB_00d0873c;
      local_28 = *(int *)(param_1[4] + 4);
      local_50[0] = 1;
      for (piVar11 = (int *)plVar14[0x22]; piVar11 != (int *)plVar14[0x23]; piVar11 = piVar11 + 8) {
        if ((*piVar11 == 1) && (piVar11[1] == local_28)) {
          uVar4 = ((undefined8 *)param_1[6])[1];
          *(undefined8 *)(piVar11 + 4) = *(undefined8 *)param_1[6];
          *(undefined8 *)(piVar11 + 6) = uVar4;
          goto LAB_00d08578;
        }
      }
      FUN_00ed5784(plVar14 + 0x22,local_50,&local_28);
LAB_00d08578:
      do {
        lVar15 = *plVar9;
        iVar7 = (int)lVar15 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *(int *)plVar9 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      else if ((int)lVar15 == 0) goto LAB_00d08764;
    }
LAB_00d08590:
    do {
      lVar15 = *plVar1;
      iVar7 = (int)lVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d085e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x10))(plVar13);
      return;
    }
    if ((int)lVar15 == 0) {
LAB_00d08764:
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_00d08784:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar10,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_00d082c8:
  piVar11 = piVar11 + 8;
  if ((int *)plVar14[0x23] == piVar11) goto LAB_00d082d4;
  goto LAB_00d082b0;
LAB_00d08460:
  piVar11 = piVar11 + 8;
  if ((int *)plVar14[0x23] == piVar11) goto LAB_00d0846c;
  goto LAB_00d08448;
}


