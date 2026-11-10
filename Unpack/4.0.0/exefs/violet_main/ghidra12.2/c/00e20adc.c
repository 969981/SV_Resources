/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e20adc; name: FUN_00e20adc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e20adc(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  long *plVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int extraout_var;
  long *plVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint local_70 [4];
  int local_48;
  int iStack_44;
  
  plVar12 = *(long **)(*(long *)(param_1 + 0x388) + 0x58);
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 5;
    do {
      lVar11 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *(int *)plVar13 = (int)lVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar11 == -1) goto LAB_00e21188;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x58);
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 5;
    do {
      lVar11 = *plVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = (int)lVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar11 == -1) goto LAB_00e21188;
  }
  (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,*(undefined4 *)PTR_DAT_047e11e8);
  local_48 = 2;
  local_70[0] = local_70[0] & 0xffffff00;
  piVar10 = (int *)plVar12[0x22];
  iStack_44 = extraout_var;
  if (piVar10 != (int *)plVar12[0x23]) {
LAB_00e20b90:
    if ((*piVar10 != 2) || (piVar10[1] != extraout_var)) goto LAB_00e20ba8;
    lVar11 = *param_2;
    if (lVar11 != 0) {
      piVar3 = (int *)(lVar11 + 0x28);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar8 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == -1) goto LAB_00e21200;
    }
    plVar14 = *(long **)(piVar10 + 2);
    *(long *)(piVar10 + 2) = lVar11;
    if (plVar14 != (long *)0x0) {
      plVar15 = plVar14 + 5;
      do {
        lVar11 = *plVar15;
        iVar8 = (int)lVar11 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *(int *)plVar15 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_00e211d8;
    }
    goto LAB_00e20c1c;
  }
LAB_00e20bb4:
  FUN_00d11148(plVar12 + 0x22,&local_48,&iStack_44,param_2,local_70);
LAB_00e20c1c:
  local_48 = 2;
  local_70[0] = local_70[0] & 0xffffff00;
  piVar10 = (int *)plVar13[0x22];
  if (piVar10 != (int *)plVar13[0x23]) {
LAB_00e20c34:
    if ((*piVar10 != 2) || (piVar10[1] != extraout_var)) goto LAB_00e20c4c;
    lVar11 = *param_2;
    if (lVar11 != 0) {
      piVar3 = (int *)(lVar11 + 0x28);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar8 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == -1) goto LAB_00e21200;
    }
    plVar14 = *(long **)(piVar10 + 2);
    *(long *)(piVar10 + 2) = lVar11;
    iStack_44 = extraout_var;
    if (plVar14 != (long *)0x0) {
      plVar15 = plVar14 + 5;
      do {
        lVar11 = *plVar15;
        iVar8 = (int)lVar11 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *(int *)plVar15 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_00e211d8;
    }
    goto LAB_00e20cc0;
  }
LAB_00e20c58:
  iStack_44 = extraout_var;
  FUN_00d11148(plVar13 + 0x22,&local_48,&iStack_44,param_2,local_70);
LAB_00e20cc0:
  plVar14 = *(long **)(*(long *)(param_1 + 0x390) + 0x58);
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 5;
    do {
      lVar11 = *plVar15;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = (int)lVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar11 == -1) goto LAB_00e21188;
  }
  local_48 = 2;
  local_70[0] = local_70[0] & 0xffffff00;
  piVar10 = (int *)plVar14[0x22];
  if (piVar10 != (int *)plVar14[0x23]) {
LAB_00e20d04:
    if ((*piVar10 != 2) || (piVar10[1] != extraout_var)) goto LAB_00e20d1c;
    lVar11 = *param_2;
    if (lVar11 != 0) {
      piVar3 = (int *)(lVar11 + 0x28);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar8 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == -1) goto LAB_00e21200;
    }
    plVar15 = *(long **)(piVar10 + 2);
    *(long *)(piVar10 + 2) = lVar11;
    iStack_44 = extraout_var;
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 5;
      do {
        lVar11 = *plVar1;
        iVar8 = (int)lVar11 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_00e211d8;
    }
    goto LAB_00e20d90;
  }
LAB_00e20d28:
  iStack_44 = extraout_var;
  FUN_00d11148(plVar14 + 0x22,&local_48,&iStack_44,param_2,local_70);
LAB_00e20d90:
  local_70[0] = 2;
  puVar2 = (undefined8 *)(param_1 + 0x5d8);
  for (piVar10 = (int *)plVar14[0x22]; local_48 = extraout_var, piVar10 != (int *)plVar14[0x23];
      piVar10 = piVar10 + 8) {
    if ((*piVar10 == 2) && (piVar10[1] == extraout_var)) {
      uVar5 = *(undefined8 *)(param_1 + 0x5e0);
      *(undefined8 *)(piVar10 + 4) = *puVar2;
      *(undefined8 *)(piVar10 + 6) = uVar5;
      goto LAB_00e20df0;
    }
  }
  FUN_00ed5784(plVar14 + 0x22,local_70,&local_48,puVar2);
LAB_00e20df0:
  plVar15 = *(long **)(*(long *)(param_1 + 0x3f8) + 0x58);
  if (plVar15 == (long *)0x0) {
    local_48 = 2;
    local_70[0] = (uint)local_70[0]._1_3_ << 8;
    piVar10 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_00e21080:
      if ((*piVar10 != 2) || (piVar10[1] != extraout_var)) goto LAB_00e21098;
      lVar11 = *param_2;
      if (lVar11 != 0) {
        piVar3 = (int *)(lVar11 + 0x28);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar8 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == -1) goto LAB_00e21200;
      }
      plVar15 = *(long **)(piVar10 + 2);
      *(long *)(piVar10 + 2) = lVar11;
      iStack_44 = extraout_var;
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 5;
        do {
          lVar11 = *plVar1;
          iVar8 = (int)lVar11 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        else if ((int)lVar11 == 0) goto LAB_00e211d8;
      }
      goto LAB_00e2110c;
    }
LAB_00e210a4:
    iStack_44 = extraout_var;
    FUN_00d11148(0x110,&local_48,&iStack_44,param_2,local_70);
LAB_00e2110c:
    local_70[0] = 2;
    for (piVar10 = _DAT_00000110; piVar10 != _DAT_00000118; piVar10 = piVar10 + 8) {
      if ((*piVar10 == 2) && (piVar10[1] == extraout_var)) {
        uVar5 = *(undefined8 *)(param_1 + 0x5e0);
        *(undefined8 *)(piVar10 + 4) = *puVar2;
        *(undefined8 *)(piVar10 + 6) = uVar5;
        local_48 = extraout_var;
        goto LAB_00e20f34;
      }
    }
    local_48 = extraout_var;
    FUN_00ed5784(0x110,local_70,&local_48,puVar2);
  }
  else {
    plVar1 = plVar15 + 5;
    do {
      lVar11 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar11 == -1) {
LAB_00e21188:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_48 = 2;
    local_70[0] = (uint)local_70[0]._1_3_ << 8;
    piVar10 = (int *)plVar15[0x22];
    if (piVar10 != (int *)plVar15[0x23]) {
LAB_00e20e34:
      if ((*piVar10 != 2) || (piVar10[1] != extraout_var)) goto LAB_00e20e4c;
      lVar11 = *param_2;
      if (lVar11 != 0) {
        piVar3 = (int *)(lVar11 + 0x28);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = iVar8 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == -1) {
LAB_00e21200:
          local_48 = 2;
          iStack_44 = extraout_var;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar9 = *(long **)(piVar10 + 2);
      *(long *)(piVar10 + 2) = lVar11;
      iStack_44 = extraout_var;
      if (plVar9 != (long *)0x0) {
        plVar4 = plVar9 + 5;
        do {
          lVar11 = *plVar4;
          iVar8 = (int)lVar11 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *(int *)plVar4 = iVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar11 == 0) {
LAB_00e211d8:
          local_48 = 2;
          iStack_44 = extraout_var;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      goto LAB_00e20ec0;
    }
LAB_00e20e58:
    iStack_44 = extraout_var;
    FUN_00d11148(plVar15 + 0x22,&local_48,&iStack_44,param_2,local_70);
LAB_00e20ec0:
    local_70[0] = 2;
    for (piVar10 = (int *)plVar15[0x22]; piVar10 != (int *)plVar15[0x23]; piVar10 = piVar10 + 8) {
      if ((*piVar10 == 2) && (piVar10[1] == extraout_var)) {
        uVar5 = *(undefined8 *)(param_1 + 0x5e0);
        *(undefined8 *)(piVar10 + 4) = *puVar2;
        *(undefined8 *)(piVar10 + 6) = uVar5;
        local_48 = extraout_var;
        goto LAB_00e20f1c;
      }
    }
    local_48 = extraout_var;
    FUN_00ed5784(plVar15 + 0x22,local_70,&local_48,puVar2);
LAB_00e20f1c:
    do {
      lVar11 = *plVar1;
      iVar8 = (int)lVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    else if ((int)lVar11 == 0) goto LAB_00e211b0;
  }
LAB_00e20f34:
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 5;
    do {
      lVar11 = *plVar15;
      iVar8 = (int)lVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar11 == 0) goto LAB_00e211b0;
  }
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 5;
    do {
      lVar11 = *plVar14;
      iVar8 = (int)lVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar11 == 0) goto LAB_00e211b0;
  }
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 5;
    do {
      lVar11 = *plVar13;
      iVar8 = (int)lVar11 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *(int *)plVar13 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00e21018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x10))(plVar12);
      return;
    }
    if ((int)lVar11 == 0) {
LAB_00e211b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_00e20ba8:
  piVar10 = piVar10 + 8;
  if ((int *)plVar12[0x23] == piVar10) goto LAB_00e20bb4;
  goto LAB_00e20b90;
LAB_00e20c4c:
  piVar10 = piVar10 + 8;
  if ((int *)plVar13[0x23] == piVar10) goto LAB_00e20c58;
  goto LAB_00e20c34;
LAB_00e20d1c:
  piVar10 = piVar10 + 8;
  if ((int *)plVar14[0x23] == piVar10) goto LAB_00e20d28;
  goto LAB_00e20d04;
LAB_00e21098:
  piVar10 = piVar10 + 8;
  if (_DAT_00000118 == piVar10) goto LAB_00e210a4;
  goto LAB_00e21080;
LAB_00e20e4c:
  piVar10 = piVar10 + 8;
  if ((int *)plVar15[0x23] == piVar10) goto LAB_00e20e58;
  goto LAB_00e20e34;
}


