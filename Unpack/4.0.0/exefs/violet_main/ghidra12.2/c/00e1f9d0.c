/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1f9d0; name: FUN_00e1f9d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e1f9d0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int extraout_var;
  long *plVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  int local_60 [5];
  int local_4c;
  int local_48 [2];
  
  (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,*(undefined4 *)PTR_DAT_047e11e8);
  plVar12 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_48[0] = 2;
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    piVar8 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_00e1ff94:
      if ((*piVar8 != 2) || (piVar8[1] != extraout_var)) goto LAB_00e1ffac;
      lVar9 = *param_2;
      if (lVar9 != 0) {
        piVar3 = (int *)(lVar9 + 0x28);
        do {
          iVar6 = *piVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == -1) goto LAB_00e20368;
      }
      plVar12 = *(long **)(piVar8 + 2);
      *(long *)(piVar8 + 2) = lVar9;
      local_4c = extraout_var;
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 5;
        do {
          lVar9 = *plVar1;
          iVar6 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != 0) {
          if ((int)lVar9 == 0) goto LAB_00e202d8;
          goto LAB_00e1faf8;
        }
        lVar9 = *plVar12;
        goto LAB_00e1fec0;
      }
      goto LAB_00e1faf8;
    }
LAB_00e1ffb8:
    local_4c = extraout_var;
    FUN_00d11148(0x110,local_48,&local_4c,param_2,local_60);
  }
  else {
    plVar1 = plVar12 + 5;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar9 == -1) goto LAB_00e20318;
    local_48[0] = 2;
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    piVar8 = (int *)plVar12[0x22];
    if (piVar8 != (int *)plVar12[0x23]) {
LAB_00e1fa54:
      if ((*piVar8 != 2) || (piVar8[1] != extraout_var)) goto LAB_00e1fa6c;
      lVar9 = *param_2;
      if (lVar9 != 0) {
        piVar3 = (int *)(lVar9 + 0x28);
        do {
          iVar6 = *piVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == -1) goto LAB_00e20368;
      }
      plVar7 = *(long **)(piVar8 + 2);
      *(long *)(piVar8 + 2) = lVar9;
      local_4c = extraout_var;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 5;
        do {
          lVar9 = *plVar2;
          iVar6 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_00e202d8;
      }
      goto LAB_00e1fae0;
    }
LAB_00e1fa78:
    local_4c = extraout_var;
    FUN_00d11148(plVar12 + 0x22,local_48,&local_4c,param_2,local_60);
LAB_00e1fae0:
    do {
      lVar9 = *plVar1;
      iVar6 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      lVar9 = *plVar12;
LAB_00e1fec0:
      (**(code **)(lVar9 + 0x10))(plVar12);
    }
    else if ((int)lVar9 == 0) goto LAB_00e20340;
  }
LAB_00e1faf8:
  plVar12 = *(long **)(*(long *)(param_1 + 0x3e0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_60[0] = 2;
    for (piVar8 = _DAT_00000110; piVar8 != _DAT_00000118; piVar8 = piVar8 + 8) {
      if ((*piVar8 == 2) && (piVar8[1] == extraout_var)) {
        uVar11 = *(undefined8 *)(param_1 + 0x5e0);
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(param_1 + 0x5d8);
        *(undefined8 *)(piVar8 + 6) = uVar11;
        local_48[0] = extraout_var;
        goto LAB_00e1fb98;
      }
    }
    local_48[0] = extraout_var;
    FUN_00ed5784(0x110,local_60,local_48,(undefined8 *)(param_1 + 0x5d8));
  }
  else {
    plVar1 = plVar12 + 5;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar9 == -1) goto LAB_00e20318;
    local_60[0] = 2;
    for (piVar8 = (int *)plVar12[0x22]; piVar8 != (int *)plVar12[0x23]; piVar8 = piVar8 + 8) {
      if ((*piVar8 == 2) && (piVar8[1] == extraout_var)) {
        uVar11 = *(undefined8 *)(param_1 + 0x5e0);
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(param_1 + 0x5d8);
        *(undefined8 *)(piVar8 + 6) = uVar11;
        local_48[0] = extraout_var;
        goto LAB_00e1fb80;
      }
    }
    local_48[0] = extraout_var;
    FUN_00ed5784(plVar12 + 0x22,local_60,local_48,(undefined8 *)(param_1 + 0x5d8));
LAB_00e1fb80:
    do {
      lVar9 = *plVar1;
      iVar6 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar9 == 0) goto LAB_00e20340;
  }
LAB_00e1fb98:
  lVar9 = param_1 + 0x5d8;
  plVar12 = *(long **)(*(long *)(param_1 + 1000) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_48[0] = 2;
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    piVar8 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_00e2005c:
      if ((*piVar8 != 2) || (piVar8[1] != extraout_var)) goto LAB_00e20074;
      lVar10 = *param_2;
      if (lVar10 != 0) {
        piVar3 = (int *)(lVar10 + 0x28);
        do {
          iVar6 = *piVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == -1) goto LAB_00e20368;
      }
      plVar12 = *(long **)(piVar8 + 2);
      *(long *)(piVar8 + 2) = lVar10;
      local_4c = extraout_var;
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 5;
        do {
          lVar10 = *plVar1;
          iVar6 = (int)lVar10 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != 0) {
          if ((int)lVar10 == 0) goto LAB_00e202d8;
          goto LAB_00e1fc7c;
        }
        lVar10 = *plVar12;
        goto LAB_00e1fee8;
      }
      goto LAB_00e1fc7c;
    }
LAB_00e20080:
    local_4c = extraout_var;
    FUN_00d11148(0x110,local_48,&local_4c,param_2,local_60);
  }
  else {
    plVar1 = plVar12 + 5;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar10 == -1) goto LAB_00e20318;
    local_48[0] = 2;
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    piVar8 = (int *)plVar12[0x22];
    if (piVar8 != (int *)plVar12[0x23]) {
LAB_00e1fbd8:
      if ((*piVar8 != 2) || (piVar8[1] != extraout_var)) goto LAB_00e1fbf0;
      lVar10 = *param_2;
      if (lVar10 != 0) {
        piVar3 = (int *)(lVar10 + 0x28);
        do {
          iVar6 = *piVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == -1) goto LAB_00e20368;
      }
      plVar7 = *(long **)(piVar8 + 2);
      *(long *)(piVar8 + 2) = lVar10;
      local_4c = extraout_var;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 5;
        do {
          lVar10 = *plVar2;
          iVar6 = (int)lVar10 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar10 == 0) goto LAB_00e202d8;
      }
      goto LAB_00e1fc64;
    }
LAB_00e1fbfc:
    local_4c = extraout_var;
    FUN_00d11148(plVar12 + 0x22,local_48,&local_4c,param_2,local_60);
LAB_00e1fc64:
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      lVar10 = *plVar12;
LAB_00e1fee8:
      (**(code **)(lVar10 + 0x10))(plVar12);
    }
    else if ((int)lVar10 == 0) goto LAB_00e20340;
  }
LAB_00e1fc7c:
  plVar12 = *(long **)(*(long *)(param_1 + 1000) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_60[0] = 2;
    for (piVar8 = _DAT_00000110; piVar8 != _DAT_00000118; piVar8 = piVar8 + 8) {
      if ((*piVar8 == 2) && (piVar8[1] == extraout_var)) {
        uVar11 = *(undefined8 *)(param_1 + 0x5e0);
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(param_1 + 0x5d8);
        *(undefined8 *)(piVar8 + 6) = uVar11;
        local_48[0] = extraout_var;
        goto LAB_00e1fd1c;
      }
    }
    local_48[0] = extraout_var;
    FUN_00ed5784(0x110,local_60,local_48,lVar9);
  }
  else {
    plVar1 = plVar12 + 5;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar10 == -1) goto LAB_00e20318;
    local_60[0] = 2;
    for (piVar8 = (int *)plVar12[0x22]; piVar8 != (int *)plVar12[0x23]; piVar8 = piVar8 + 8) {
      if ((*piVar8 == 2) && (piVar8[1] == extraout_var)) {
        uVar11 = *(undefined8 *)(param_1 + 0x5e0);
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(param_1 + 0x5d8);
        *(undefined8 *)(piVar8 + 6) = uVar11;
        local_48[0] = extraout_var;
        goto LAB_00e1fd04;
      }
    }
    local_48[0] = extraout_var;
    FUN_00ed5784(plVar12 + 0x22,local_60,local_48,lVar9);
LAB_00e1fd04:
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar10 == 0) goto LAB_00e20340;
  }
LAB_00e1fd1c:
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_48[0] = 2;
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    piVar8 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_00e20120:
      if ((*piVar8 != 2) || (piVar8[1] != extraout_var)) goto LAB_00e20138;
      lVar10 = *param_2;
      if (lVar10 != 0) {
        piVar3 = (int *)(lVar10 + 0x28);
        do {
          iVar6 = *piVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == -1) goto LAB_00e20368;
      }
      plVar12 = *(long **)(piVar8 + 2);
      *(long *)(piVar8 + 2) = lVar10;
      local_4c = extraout_var;
      if (plVar12 != (long *)0x0) {
        plVar1 = plVar12 + 5;
        do {
          lVar10 = *plVar1;
          iVar6 = (int)lVar10 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != 0) {
          if ((int)lVar10 == 0) goto LAB_00e202d8;
          goto LAB_00e1fe00;
        }
        lVar10 = *plVar12;
        goto LAB_00e1ff10;
      }
      goto LAB_00e1fe00;
    }
LAB_00e20144:
    local_4c = extraout_var;
    FUN_00d11148(0x110,local_48,&local_4c,param_2,local_60);
  }
  else {
    plVar1 = plVar12 + 5;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar10 == -1) goto LAB_00e20318;
    local_48[0] = 2;
    local_60[0] = (uint)local_60[0]._1_3_ << 8;
    piVar8 = (int *)plVar12[0x22];
    if (piVar8 != (int *)plVar12[0x23]) {
LAB_00e1fd5c:
      if ((*piVar8 != 2) || (piVar8[1] != extraout_var)) goto LAB_00e1fd74;
      lVar10 = *param_2;
      if (lVar10 != 0) {
        piVar3 = (int *)(lVar10 + 0x28);
        do {
          iVar6 = *piVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == -1) {
LAB_00e20368:
          local_48[0] = 2;
          local_4c = extraout_var;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar7 = *(long **)(piVar8 + 2);
      *(long *)(piVar8 + 2) = lVar10;
      local_4c = extraout_var;
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 5;
        do {
          lVar10 = *plVar2;
          iVar6 = (int)lVar10 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar10 == 0) {
LAB_00e202d8:
          local_48[0] = 2;
          local_4c = extraout_var;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      goto LAB_00e1fde8;
    }
LAB_00e1fd80:
    local_4c = extraout_var;
    FUN_00d11148(plVar12 + 0x22,local_48,&local_4c,param_2,local_60);
LAB_00e1fde8:
    do {
      lVar10 = *plVar1;
      iVar6 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      lVar10 = *plVar12;
LAB_00e1ff10:
      (**(code **)(lVar10 + 0x10))(plVar12);
    }
    else if ((int)lVar10 == 0) goto LAB_00e20340;
  }
LAB_00e1fe00:
  plVar12 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x58);
  if (plVar12 == (long *)0x0) {
    local_60[0] = 2;
    for (piVar8 = _DAT_00000110; piVar8 != _DAT_00000118; piVar8 = piVar8 + 8) {
      if ((*piVar8 == 2) && (piVar8[1] == extraout_var)) {
        uVar11 = *(undefined8 *)(param_1 + 0x5e0);
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(param_1 + 0x5d8);
        *(undefined8 *)(piVar8 + 6) = uVar11;
        return;
      }
    }
    local_48[0] = extraout_var;
    FUN_00ed5784(0x110,local_60,local_48,lVar9);
  }
  else {
    plVar1 = plVar12 + 5;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar10 == -1) {
LAB_00e20318:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_60[0] = 2;
    for (piVar8 = (int *)plVar12[0x22]; piVar8 != (int *)plVar12[0x23]; piVar8 = piVar8 + 8) {
      if ((*piVar8 == 2) && (piVar8[1] == extraout_var)) {
        uVar11 = *(undefined8 *)(param_1 + 0x5e0);
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(param_1 + 0x5d8);
        *(undefined8 *)(piVar8 + 6) = uVar11;
        local_48[0] = extraout_var;
        goto LAB_00e1fe88;
      }
    }
    local_48[0] = extraout_var;
    FUN_00ed5784(plVar12 + 0x22,local_60,local_48,lVar9);
LAB_00e1fe88:
    do {
      lVar9 = *plVar1;
      iVar6 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00e1ff3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x10))(plVar12);
      return;
    }
    if ((int)lVar9 == 0) {
LAB_00e20340:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_00e1ffac:
  piVar8 = piVar8 + 8;
  if (_DAT_00000118 == piVar8) goto LAB_00e1ffb8;
  goto LAB_00e1ff94;
LAB_00e1fa6c:
  piVar8 = piVar8 + 8;
  if ((int *)plVar12[0x23] == piVar8) goto LAB_00e1fa78;
  goto LAB_00e1fa54;
LAB_00e20074:
  piVar8 = piVar8 + 8;
  if (_DAT_00000118 == piVar8) goto LAB_00e20080;
  goto LAB_00e2005c;
LAB_00e1fbf0:
  piVar8 = piVar8 + 8;
  if ((int *)plVar12[0x23] == piVar8) goto LAB_00e1fbfc;
  goto LAB_00e1fbd8;
LAB_00e20138:
  piVar8 = piVar8 + 8;
  if (_DAT_00000118 == piVar8) goto LAB_00e20144;
  goto LAB_00e20120;
LAB_00e1fd74:
  piVar8 = piVar8 + 8;
  if ((int *)plVar12[0x23] == piVar8) goto LAB_00e1fd80;
  goto LAB_00e1fd5c;
}


