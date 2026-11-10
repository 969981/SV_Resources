/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e20390; name: FUN_00e20390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e20390(long param_1,long *param_2)

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
    if ((int)lVar11 == -1) goto LAB_00e20a3c;
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
    if ((int)lVar11 == -1) goto LAB_00e20a3c;
  }
  (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,*(undefined4 *)PTR_DAT_047e11e0);
  local_48 = 2;
  local_70[0] = local_70[0] & 0xffffff00;
  piVar10 = (int *)plVar12[0x22];
  iStack_44 = extraout_var;
  if (piVar10 != (int *)plVar12[0x23]) {
LAB_00e20444:
    if ((*piVar10 != 2) || (piVar10[1] != extraout_var)) goto LAB_00e2045c;
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
      if (iVar8 == -1) goto LAB_00e20ab4;
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
      else if ((int)lVar11 == 0) goto LAB_00e20a8c;
    }
    goto LAB_00e204d0;
  }
LAB_00e20468:
  FUN_00d11148(plVar12 + 0x22,&local_48,&iStack_44,param_2,local_70);
LAB_00e204d0:
  local_48 = 2;
  local_70[0] = local_70[0] & 0xffffff00;
  piVar10 = (int *)plVar13[0x22];
  if (piVar10 != (int *)plVar13[0x23]) {
LAB_00e204e8:
    if ((*piVar10 != 2) || (piVar10[1] != extraout_var)) goto LAB_00e20500;
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
      if (iVar8 == -1) goto LAB_00e20ab4;
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
      else if ((int)lVar11 == 0) goto LAB_00e20a8c;
    }
    goto LAB_00e20574;
  }
LAB_00e2050c:
  iStack_44 = extraout_var;
  FUN_00d11148(plVar13 + 0x22,&local_48,&iStack_44,param_2,local_70);
LAB_00e20574:
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
    if ((int)lVar11 == -1) goto LAB_00e20a3c;
  }
  local_48 = 2;
  local_70[0] = local_70[0] & 0xffffff00;
  piVar10 = (int *)plVar14[0x22];
  if (piVar10 != (int *)plVar14[0x23]) {
LAB_00e205b8:
    if ((*piVar10 != 2) || (piVar10[1] != extraout_var)) goto LAB_00e205d0;
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
      if (iVar8 == -1) goto LAB_00e20ab4;
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
      else if ((int)lVar11 == 0) goto LAB_00e20a8c;
    }
    goto LAB_00e20644;
  }
LAB_00e205dc:
  iStack_44 = extraout_var;
  FUN_00d11148(plVar14 + 0x22,&local_48,&iStack_44,param_2,local_70);
LAB_00e20644:
  local_70[0] = 2;
  puVar2 = (undefined8 *)(param_1 + 0x5d8);
  for (piVar10 = (int *)plVar14[0x22]; local_48 = extraout_var, piVar10 != (int *)plVar14[0x23];
      piVar10 = piVar10 + 8) {
    if ((*piVar10 == 2) && (piVar10[1] == extraout_var)) {
      uVar5 = *(undefined8 *)(param_1 + 0x5e0);
      *(undefined8 *)(piVar10 + 4) = *puVar2;
      *(undefined8 *)(piVar10 + 6) = uVar5;
      goto LAB_00e206a4;
    }
  }
  FUN_00ed5784(plVar14 + 0x22,local_70,&local_48,puVar2);
LAB_00e206a4:
  plVar15 = *(long **)(*(long *)(param_1 + 0x3f8) + 0x58);
  if (plVar15 == (long *)0x0) {
    local_48 = 2;
    local_70[0] = (uint)local_70[0]._1_3_ << 8;
    piVar10 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_00e20934:
      if ((*piVar10 != 2) || (piVar10[1] != extraout_var)) goto LAB_00e2094c;
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
        if (iVar8 == -1) goto LAB_00e20ab4;
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
        else if ((int)lVar11 == 0) goto LAB_00e20a8c;
      }
      goto LAB_00e209c0;
    }
LAB_00e20958:
    iStack_44 = extraout_var;
    FUN_00d11148(0x110,&local_48,&iStack_44,param_2,local_70);
LAB_00e209c0:
    local_70[0] = 2;
    for (piVar10 = _DAT_00000110; piVar10 != _DAT_00000118; piVar10 = piVar10 + 8) {
      if ((*piVar10 == 2) && (piVar10[1] == extraout_var)) {
        uVar5 = *(undefined8 *)(param_1 + 0x5e0);
        *(undefined8 *)(piVar10 + 4) = *puVar2;
        *(undefined8 *)(piVar10 + 6) = uVar5;
        local_48 = extraout_var;
        goto LAB_00e207e8;
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
LAB_00e20a3c:
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
LAB_00e206e8:
      if ((*piVar10 != 2) || (piVar10[1] != extraout_var)) goto LAB_00e20700;
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
LAB_00e20ab4:
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
LAB_00e20a8c:
          local_48 = 2;
          iStack_44 = extraout_var;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      goto LAB_00e20774;
    }
LAB_00e2070c:
    iStack_44 = extraout_var;
    FUN_00d11148(plVar15 + 0x22,&local_48,&iStack_44,param_2,local_70);
LAB_00e20774:
    local_70[0] = 2;
    for (piVar10 = (int *)plVar15[0x22]; piVar10 != (int *)plVar15[0x23]; piVar10 = piVar10 + 8) {
      if ((*piVar10 == 2) && (piVar10[1] == extraout_var)) {
        uVar5 = *(undefined8 *)(param_1 + 0x5e0);
        *(undefined8 *)(piVar10 + 4) = *puVar2;
        *(undefined8 *)(piVar10 + 6) = uVar5;
        local_48 = extraout_var;
        goto LAB_00e207d0;
      }
    }
    local_48 = extraout_var;
    FUN_00ed5784(plVar15 + 0x22,local_70,&local_48,puVar2);
LAB_00e207d0:
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
    else if ((int)lVar11 == 0) goto LAB_00e20a64;
  }
LAB_00e207e8:
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
    else if ((int)lVar11 == 0) goto LAB_00e20a64;
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
    else if ((int)lVar11 == 0) goto LAB_00e20a64;
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
                    /* WARNING: Could not recover jumptable at 0x00e208cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x10))(plVar12);
      return;
    }
    if ((int)lVar11 == 0) {
LAB_00e20a64:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_00e2045c:
  piVar10 = piVar10 + 8;
  if ((int *)plVar12[0x23] == piVar10) goto LAB_00e20468;
  goto LAB_00e20444;
LAB_00e20500:
  piVar10 = piVar10 + 8;
  if ((int *)plVar13[0x23] == piVar10) goto LAB_00e2050c;
  goto LAB_00e204e8;
LAB_00e205d0:
  piVar10 = piVar10 + 8;
  if ((int *)plVar14[0x23] == piVar10) goto LAB_00e205dc;
  goto LAB_00e205b8;
LAB_00e2094c:
  piVar10 = piVar10 + 8;
  if (_DAT_00000118 == piVar10) goto LAB_00e20958;
  goto LAB_00e20934;
LAB_00e20700:
  piVar10 = piVar10 + 8;
  if ((int *)plVar15[0x23] == piVar10) goto LAB_00e2070c;
  goto LAB_00e206e8;
}


