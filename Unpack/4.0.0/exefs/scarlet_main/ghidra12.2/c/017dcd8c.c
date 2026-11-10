/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017dcd8c; name: FUN_017dcd8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017dcd8c(undefined8 *param_1)

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
  int local_50 [4];
  int local_28;
  int iStack_24;
  
  lVar15 = param_1[3];
  puVar8 = (undefined8 *)FUN_00c7f744(*(undefined8 *)(*(long *)*param_1 + 0x50));
  plVar13 = (long *)*puVar8;
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 5;
    do {
      lVar12 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = (int)lVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar12 == -1) goto LAB_017dd400;
  }
  FUN_01343f00(plVar13,*(undefined4 *)(param_1[1] + 4),*(undefined4 *)param_1[2]);
  plVar14 = (long *)plVar13[0xb];
  if (plVar14 == (long *)0x0) {
    iStack_24 = *(int *)(param_1[1] + 4);
    local_28 = 2;
    local_50[0] = (uint)local_50[0]._1_3_ << 8;
    piVar11 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_017dd20c:
      if ((*piVar11 != 2) || (piVar11[1] != iStack_24)) goto LAB_017dd224;
      lVar12 = *(long *)(lVar15 + 0x3c0);
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
        if (iVar7 == -1) goto LAB_017dd450;
      }
      plVar14 = *(long **)(piVar11 + 2);
      *(long *)(piVar11 + 2) = lVar12;
      if (plVar14 == (long *)0x0) goto LAB_017dcedc;
      plVar1 = plVar14 + 5;
      do {
        lVar12 = *plVar1;
        iVar7 = (int)lVar12 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        lVar12 = *plVar14;
        goto LAB_017dd174;
      }
      if ((int)lVar12 != 0) goto LAB_017dcedc;
      goto LAB_017dd3cc;
    }
LAB_017dd230:
    FUN_00d11148(0x110,&local_28,&iStack_24,(long *)(lVar15 + 0x3c0),local_50);
  }
  else {
    plVar1 = plVar14 + 5;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar12 == -1) goto LAB_017dd400;
    iStack_24 = *(int *)(param_1[1] + 4);
    local_28 = 2;
    local_50[0] = (uint)local_50[0]._1_3_ << 8;
    piVar11 = (int *)plVar14[0x22];
    if (piVar11 != (int *)plVar14[0x23]) {
LAB_017dce3c:
      if ((*piVar11 != 2) || (piVar11[1] != iStack_24)) goto LAB_017dce54;
      lVar12 = *(long *)(lVar15 + 0x3c0);
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
        if (iVar7 == -1) goto LAB_017dd450;
      }
      plVar9 = *(long **)(piVar11 + 2);
      *(long *)(piVar11 + 2) = lVar12;
      if (plVar9 == (long *)0x0) goto LAB_017dcec4;
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
        goto LAB_017dcec4;
      }
      if ((int)lVar12 != 0) goto LAB_017dcec4;
      goto LAB_017dd3cc;
    }
LAB_017dce60:
    FUN_00d11148(plVar14 + 0x22,&local_28,&iStack_24,(long *)(lVar15 + 0x3c0),local_50);
LAB_017dcec4:
    do {
      lVar12 = *plVar1;
      iVar7 = (int)lVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      lVar12 = *plVar14;
LAB_017dd174:
      (**(code **)(lVar12 + 0x10))(plVar14);
    }
    else if ((int)lVar12 == 0) goto LAB_017dd428;
  }
LAB_017dcedc:
  plVar14 = (long *)plVar13[0xb];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 5;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar12 == -1) goto LAB_017dd400;
  }
  local_28 = *(int *)(param_1[1] + 4);
  local_50[0] = 2;
  for (piVar11 = (int *)plVar14[0x22]; piVar11 != (int *)plVar14[0x23]; piVar11 = piVar11 + 8) {
    if ((*piVar11 == 2) && (piVar11[1] == local_28)) {
      uVar4 = ((undefined8 *)param_1[4])[1];
      *(undefined8 *)(piVar11 + 4) = *(undefined8 *)param_1[4];
      *(undefined8 *)(piVar11 + 6) = uVar4;
      goto LAB_017dcf64;
    }
  }
  FUN_00ed5784(plVar14 + 0x22,local_50,&local_28);
LAB_017dcf64:
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 5;
    do {
      lVar12 = *plVar1;
      iVar7 = (int)lVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar12 == 0) goto LAB_017dd428;
  }
  plVar14 = (long *)plVar13[0xb];
  if (plVar14 == (long *)0x0) {
    local_50[0] = (uint)local_50[0]._1_3_ << 8;
    iStack_24 = *(int *)(param_1[1] + 4) + 0xd;
    local_28 = 2;
    piVar11 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_017dd27c:
      if ((*piVar11 != 2) || (piVar11[1] != iStack_24)) goto LAB_017dd294;
      lVar15 = *(long *)(lVar15 + 0x3c8);
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
        if (iVar7 == -1) goto LAB_017dd450;
      }
      plVar14 = *(long **)(piVar11 + 2);
      *(long *)(piVar11 + 2) = lVar15;
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 5;
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
        if (iVar7 != 0) {
          if ((int)lVar15 != 0) goto LAB_017dd070;
          goto LAB_017dd3cc;
        }
        lVar15 = *plVar14;
        goto LAB_017dd188;
      }
      goto LAB_017dd070;
    }
LAB_017dd2a0:
    FUN_00d11148(0x110,&local_28,&iStack_24,(long *)(lVar15 + 0x3c8),local_50);
  }
  else {
    plVar1 = plVar14 + 5;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar12 == -1) goto LAB_017dd400;
    local_50[0] = (uint)local_50[0]._1_3_ << 8;
    iStack_24 = *(int *)(param_1[1] + 4) + 0xd;
    local_28 = 2;
    piVar11 = (int *)plVar14[0x22];
    if (piVar11 != (int *)plVar14[0x23]) {
LAB_017dcfd0:
      if ((*piVar11 != 2) || (piVar11[1] != iStack_24)) goto LAB_017dcfe8;
      lVar15 = *(long *)(lVar15 + 0x3c8);
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
LAB_017dd450:
          local_28 = 2;
          pcVar10 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_017dd420;
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
LAB_017dd3cc:
          local_28 = 2;
          pcVar10 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_017dd448;
        }
      }
      goto LAB_017dd058;
    }
LAB_017dcff4:
    FUN_00d11148(plVar14 + 0x22,&local_28,&iStack_24,(long *)(lVar15 + 0x3c8),local_50);
LAB_017dd058:
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
      lVar15 = *plVar14;
LAB_017dd188:
      (**(code **)(lVar15 + 0x10))(plVar14);
    }
    else if ((int)lVar15 == 0) goto LAB_017dd428;
  }
LAB_017dd070:
  plVar14 = (long *)plVar13[0xb];
  if (plVar14 == (long *)0x0) {
    local_50[0] = 2;
    local_28 = *(int *)(param_1[1] + 4) + 0xd;
    for (piVar11 = _DAT_00000110; piVar11 != _DAT_00000118; piVar11 = piVar11 + 8) {
      if ((*piVar11 == 2) && (piVar11[1] == local_28)) {
        uVar4 = ((undefined8 *)param_1[4])[1];
        *(undefined8 *)(piVar11 + 4) = *(undefined8 *)param_1[4];
        *(undefined8 *)(piVar11 + 6) = uVar4;
        goto LAB_017dd114;
      }
    }
    FUN_00ed5784(0x110,local_50,&local_28);
  }
  else {
    plVar1 = plVar14 + 5;
    do {
      lVar15 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar15 == -1) {
LAB_017dd400:
      pcVar10 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_017dd420:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",pcVar10,0x53,
                 "Reference counter overflows.");
    }
    local_50[0] = 2;
    local_28 = *(int *)(param_1[1] + 4) + 0xd;
    for (piVar11 = (int *)plVar14[0x22]; piVar11 != (int *)plVar14[0x23]; piVar11 = piVar11 + 8) {
      if ((*piVar11 == 2) && (piVar11[1] == local_28)) {
        uVar4 = ((undefined8 *)param_1[4])[1];
        *(undefined8 *)(piVar11 + 4) = *(undefined8 *)param_1[4];
        *(undefined8 *)(piVar11 + 6) = uVar4;
        goto LAB_017dd0fc;
      }
    }
    FUN_00ed5784(plVar14 + 0x22,local_50,&local_28);
LAB_017dd0fc:
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
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar15 == 0) goto LAB_017dd428;
  }
LAB_017dd114:
  plVar14 = plVar13 + 5;
  do {
    lVar15 = *plVar14;
    iVar7 = (int)lVar15 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *(int *)plVar14 = iVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x017dd168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar13 + 0x10))(plVar13);
    return;
  }
  if ((int)lVar15 != 0) {
    return;
  }
LAB_017dd428:
  pcVar10 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
  ;
LAB_017dd448:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",pcVar10,
             0x58,"Reference counter underflows.");
LAB_017dd224:
  piVar11 = piVar11 + 8;
  if (_DAT_00000118 == piVar11) goto LAB_017dd230;
  goto LAB_017dd20c;
LAB_017dce54:
  piVar11 = piVar11 + 8;
  if ((int *)plVar14[0x23] == piVar11) goto LAB_017dce60;
  goto LAB_017dce3c;
LAB_017dd294:
  piVar11 = piVar11 + 8;
  if (_DAT_00000118 == piVar11) goto LAB_017dd2a0;
  goto LAB_017dd27c;
LAB_017dcfe8:
  piVar11 = piVar11 + 8;
  if ((int *)plVar14[0x23] == piVar11) goto LAB_017dcff4;
  goto LAB_017dcfd0;
}


