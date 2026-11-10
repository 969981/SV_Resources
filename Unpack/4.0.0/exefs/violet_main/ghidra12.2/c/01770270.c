/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01770270; name: FUN_01770270
 */


void FUN_01770270(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  int extraout_var;
  char *pcVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  int local_88 [2];
  undefined *puStack_80;
  undefined8 local_78;
  long *local_70;
  uint local_68 [6];
  long *local_50;
  undefined8 local_48;
  
  uVar15 = *(undefined8 *)(param_1 + 0x388);
  local_88[0] = 0x75953a09;
  local_88[1] = 0xfca2eedb;
  puStack_80 = PTR_s_Lighting_047e0fb8;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_01464dd0(local_68,local_88,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_48,uVar15,local_68);
  plVar10 = *(long **)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  if (plVar10 != (long *)0x0) {
    plVar16 = plVar10 + 5;
    do {
      lVar14 = *plVar16;
      iVar8 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_01770c84;
  }
  uVar15 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0x3b8) = uVar15;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  uVar15 = *(undefined8 *)(param_1 + 0x3b8);
  uVar9 = FUN_01464df0(0x3c,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar15,uVar9);
  plVar10 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x58);
  if (plVar10 != (long *)0x0) {
    plVar16 = plVar10 + 5;
    do {
      lVar14 = *plVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = (int)lVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar14 == -1) goto LAB_01770ca8;
  }
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00d8219c(plVar10,0,param_1 + 0x480,0xffffffff,local_68);
  plVar16 = (long *)(param_1 + 0x488);
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00d829fc(plVar10,plVar16,local_68);
  FUN_00d819c8(0,plVar10,0);
  iVar8 = *(int *)(param_1 + 0x58c);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3b8),iVar8,0xe);
  local_88[0] = 2;
  local_48 = CONCAT44(local_48._4_4_,iVar8 + 1);
  plVar1 = plVar10 + 0x22;
  local_68[0] = local_68[0] & 0xffffff00;
  piVar13 = (int *)plVar10[0x22];
  if (piVar13 != (int *)plVar10[0x23]) {
LAB_017703e0:
    if ((*piVar13 != 2) || (piVar13[1] != iVar8 + 1)) goto LAB_017703f8;
    lVar14 = *(long *)(param_1 + 0x460);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_01770c5c;
    }
    plVar11 = *(long **)(piVar13 + 2);
    *(long *)(piVar13 + 2) = lVar14;
    if (plVar11 == (long *)0x0) goto LAB_01770468;
    plVar2 = plVar11 + 5;
    do {
      lVar14 = *plVar2;
      iVar5 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))();
      goto LAB_01770468;
    }
    if ((int)lVar14 != 0) goto LAB_01770468;
    goto LAB_01770c34;
  }
LAB_01770404:
  FUN_00d11148(plVar1,local_88,&local_48,(long *)(param_1 + 0x460),local_68);
LAB_01770468:
  local_88[0] = 2;
  local_48 = CONCAT44(local_48._4_4_,iVar8 + 2);
  local_68[0] = local_68[0] & 0xffffff00;
  piVar13 = (int *)plVar10[0x22];
  if (piVar13 != (int *)plVar10[0x23]) {
LAB_0177048c:
    if ((*piVar13 != 2) || (piVar13[1] != iVar8 + 2)) goto LAB_017704a4;
    lVar14 = *(long *)(param_1 + 0x468);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_01770c5c;
    }
    plVar11 = *(long **)(piVar13 + 2);
    *(long *)(piVar13 + 2) = lVar14;
    if (plVar11 == (long *)0x0) goto LAB_01770514;
    plVar2 = plVar11 + 5;
    do {
      lVar14 = *plVar2;
      iVar5 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))();
      goto LAB_01770514;
    }
    if ((int)lVar14 != 0) goto LAB_01770514;
    goto LAB_01770c34;
  }
LAB_017704b0:
  FUN_00d11148(plVar1,local_88,&local_48,(long *)(param_1 + 0x468),local_68);
LAB_01770514:
  local_88[0] = 2;
  local_48 = CONCAT44(local_48._4_4_,iVar8 + 3);
  local_68[0] = local_68[0] & 0xffffff00;
  piVar13 = (int *)plVar10[0x22];
  if (piVar13 != (int *)plVar10[0x23]) {
LAB_01770538:
    if ((*piVar13 != 2) || (piVar13[1] != iVar8 + 3)) goto LAB_01770550;
    lVar14 = *(long *)(param_1 + 0x470);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_01770c5c;
    }
    plVar11 = *(long **)(piVar13 + 2);
    *(long *)(piVar13 + 2) = lVar14;
    if (plVar11 == (long *)0x0) goto LAB_017705c0;
    plVar2 = plVar11 + 5;
    do {
      lVar14 = *plVar2;
      iVar5 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))();
      goto LAB_017705c0;
    }
    if ((int)lVar14 != 0) goto LAB_017705c0;
    goto LAB_01770c34;
  }
LAB_0177055c:
  FUN_00d11148(plVar1,local_88,&local_48,(long *)(param_1 + 0x470),local_68);
LAB_017705c0:
  local_88[0] = 2;
  local_48 = CONCAT44(local_48._4_4_,iVar8 + 4);
  local_68[0] = local_68[0] & 0xffffff00;
  piVar13 = (int *)plVar10[0x22];
  if (piVar13 != (int *)plVar10[0x23]) {
LAB_017705e4:
    if ((*piVar13 != 2) || (piVar13[1] != iVar8 + 4)) goto LAB_017705fc;
    lVar14 = *(long *)(param_1 + 0x478);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_01770c5c;
    }
    plVar11 = *(long **)(piVar13 + 2);
    *(long *)(piVar13 + 2) = lVar14;
    if (plVar11 == (long *)0x0) goto LAB_0177066c;
    plVar2 = plVar11 + 5;
    do {
      lVar14 = *plVar2;
      iVar5 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))();
      goto LAB_0177066c;
    }
    if ((int)lVar14 != 0) goto LAB_0177066c;
    goto LAB_01770c34;
  }
LAB_01770608:
  FUN_00d11148(plVar1,local_88,&local_48,(long *)(param_1 + 0x478),local_68);
LAB_0177066c:
  local_88[0] = 2;
  local_48 = CONCAT44(local_48._4_4_,iVar8 + 5);
  local_68[0] = local_68[0] & 0xffffff00;
  piVar13 = (int *)plVar10[0x22];
  if (piVar13 != (int *)plVar10[0x23]) {
LAB_0177068c:
    if ((*piVar13 != 2) || (piVar13[1] != iVar8 + 5)) goto LAB_017706a4;
    lVar14 = *plVar16;
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_01770c5c;
    }
    plVar16 = *(long **)(piVar13 + 2);
    *(long *)(piVar13 + 2) = lVar14;
    if (plVar16 == (long *)0x0) goto LAB_01770718;
    plVar11 = plVar16 + 5;
    do {
      lVar14 = *plVar11;
      iVar5 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar16 + 0x10))();
      goto LAB_01770718;
    }
    if ((int)lVar14 != 0) goto LAB_01770718;
    goto LAB_01770c34;
  }
LAB_017706b0:
  FUN_00d11148(plVar1,local_88,&local_48,plVar16,local_68);
LAB_01770718:
  local_88[0] = 2;
  local_48 = CONCAT44(local_48._4_4_,iVar8 + 8);
  local_68[0] = local_68[0] & 0xffffff00;
  piVar13 = (int *)plVar10[0x22];
  if (piVar13 != (int *)plVar10[0x23]) {
LAB_0177073c:
    if ((*piVar13 != 2) || (piVar13[1] != iVar8 + 8)) goto LAB_01770754;
    lVar14 = *(long *)(param_1 + 0x4e0);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_01770c5c;
    }
    plVar16 = *(long **)(piVar13 + 2);
    *(long *)(piVar13 + 2) = lVar14;
    if (plVar16 == (long *)0x0) goto LAB_017707c4;
    plVar11 = plVar16 + 5;
    do {
      lVar14 = *plVar11;
      iVar5 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar16 + 0x10))();
      goto LAB_017707c4;
    }
    if ((int)lVar14 != 0) goto LAB_017707c4;
    goto LAB_01770c34;
  }
LAB_01770760:
  FUN_00d11148(plVar1,local_88,&local_48,(long *)(param_1 + 0x4e0),local_68);
LAB_017707c4:
  local_88[0] = 2;
  local_48 = CONCAT44(local_48._4_4_,iVar8 + 9);
  local_68[0] = local_68[0] & 0xffffff00;
  piVar13 = (int *)plVar10[0x22];
  if (piVar13 != (int *)plVar10[0x23]) {
LAB_017707e8:
    if ((*piVar13 != 2) || (piVar13[1] != iVar8 + 9)) goto LAB_01770800;
    lVar14 = *(long *)(param_1 + 0x4a8);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_01770c5c;
    }
    plVar16 = *(long **)(piVar13 + 2);
    *(long *)(piVar13 + 2) = lVar14;
    if (plVar16 == (long *)0x0) goto LAB_01770870;
    plVar11 = plVar16 + 5;
    do {
      lVar14 = *plVar11;
      iVar5 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar16 + 0x10))();
      goto LAB_01770870;
    }
    if ((int)lVar14 != 0) goto LAB_01770870;
    goto LAB_01770c34;
  }
LAB_0177080c:
  FUN_00d11148(plVar1,local_88,&local_48,(long *)(param_1 + 0x4a8),local_68);
LAB_01770870:
  local_88[0] = 2;
  local_48 = CONCAT44(local_48._4_4_,iVar8 + 10);
  local_68[0] = local_68[0] & 0xffffff00;
  piVar13 = (int *)plVar10[0x22];
  if (piVar13 != (int *)plVar10[0x23]) {
LAB_01770894:
    if ((*piVar13 != 2) || (piVar13[1] != iVar8 + 10)) goto LAB_017708ac;
    lVar14 = *(long *)(param_1 + 0x4f0);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
      do {
        iVar5 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == -1) goto LAB_01770c5c;
    }
    plVar16 = *(long **)(piVar13 + 2);
    *(long *)(piVar13 + 2) = lVar14;
    if (plVar16 == (long *)0x0) goto LAB_0177091c;
    plVar11 = plVar16 + 5;
    do {
      lVar14 = *plVar11;
      iVar5 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar16 + 0x10))();
      goto LAB_0177091c;
    }
    if ((int)lVar14 != 0) goto LAB_0177091c;
    goto LAB_01770c34;
  }
LAB_017708b8:
  FUN_00d11148(plVar1,local_88,&local_48,(long *)(param_1 + 0x4f0),local_68);
LAB_0177091c:
  local_88[0] = 2;
  local_48 = CONCAT44(local_48._4_4_,iVar8 + 0xc);
  local_68[0] = local_68[0] & 0xffffff00;
  piVar13 = (int *)plVar10[0x22];
  if (piVar13 != (int *)plVar10[0x23]) {
LAB_01770940:
    if ((*piVar13 != 2) || (piVar13[1] != iVar8 + 0xc)) goto LAB_01770958;
    lVar14 = *(long *)(param_1 + 0x4f8);
    if (lVar14 != 0) {
      piVar3 = (int *)(lVar14 + 0x28);
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
LAB_01770c5c:
        local_88[0] = 2;
        pcVar12 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        goto LAB_01770c7c;
      }
    }
    plVar16 = *(long **)(piVar13 + 2);
    *(long *)(piVar13 + 2) = lVar14;
    if (plVar16 != (long *)0x0) {
      plVar11 = plVar16 + 5;
      do {
        lVar14 = *plVar11;
        iVar8 = (int)lVar14 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *(int *)plVar11 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar16 + 0x10))();
      }
      else if ((int)lVar14 == 0) {
LAB_01770c34:
        local_88[0] = 2;
        pcVar12 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        goto LAB_01770c54;
      }
    }
    goto LAB_017709c8;
  }
LAB_01770964:
  FUN_00d11148(plVar1,local_88,&local_48,(long *)(param_1 + 0x4f8),local_68);
LAB_017709c8:
  FUN_01770efc(param_1);
  FUN_01271098(*(undefined8 *)(param_1 + 0x3b8),0x12);
  FUN_01771104(param_1);
  plVar16 = *(long **)(*(long *)(param_1 + 0x3b8) + 0x58);
  if (plVar16 != (long *)0x0) {
    plVar11 = plVar16 + 5;
    do {
      lVar14 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = (int)lVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar14 == -1) {
LAB_01770ca8:
      pcVar12 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_01770c7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",pcVar12,0x53,
                 "Reference counter overflows.");
    }
  }
  (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,*(undefined4 *)PTR_DAT_047e11e8);
  local_68[0] = 2;
  puVar4 = (undefined8 *)(param_1 + 0x5d8);
  for (piVar13 = (int *)plVar10[0x22]; piVar13 != (int *)plVar10[0x23]; piVar13 = piVar13 + 8) {
    if ((*piVar13 == 2) && (piVar13[1] == extraout_var)) {
      uVar15 = *(undefined8 *)(param_1 + 0x5e0);
      *(undefined8 *)(piVar13 + 4) = *puVar4;
      *(undefined8 *)(piVar13 + 6) = uVar15;
      goto LAB_01770a90;
    }
  }
  local_88[0] = extraout_var;
  FUN_00ed5784(plVar1,local_68,local_88,puVar4);
LAB_01770a90:
  local_68[0] = 2;
  for (piVar13 = (int *)plVar16[0x22]; piVar13 != (int *)plVar16[0x23]; piVar13 = piVar13 + 8) {
    if ((*piVar13 == 2) && (piVar13[1] == extraout_var)) {
      uVar15 = *(undefined8 *)(param_1 + 0x5e0);
      *(undefined8 *)(piVar13 + 4) = *puVar4;
      *(undefined8 *)(piVar13 + 6) = uVar15;
      local_88[0] = extraout_var;
      goto LAB_01770aec;
    }
  }
  local_88[0] = extraout_var;
  FUN_00ed5784(plVar16 + 0x22,local_68,local_88,puVar4);
LAB_01770aec:
  FUN_01770cd0((undefined8 *)(param_1 + 0x3b8));
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 5;
    do {
      lVar14 = *plVar1;
      iVar8 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar14 == 0) goto LAB_01770c84;
  }
  if (plVar10 != (long *)0x0) {
    plVar16 = plVar10 + 5;
    do {
      lVar14 = *plVar16;
      iVar8 = (int)lVar14 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar14 == 0) {
LAB_01770c84:
      pcVar12 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_01770c54:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar12,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_017703f8:
  piVar13 = piVar13 + 8;
  if ((int *)plVar10[0x23] == piVar13) goto LAB_01770404;
  goto LAB_017703e0;
LAB_017704a4:
  piVar13 = piVar13 + 8;
  if ((int *)plVar10[0x23] == piVar13) goto LAB_017704b0;
  goto LAB_0177048c;
LAB_01770550:
  piVar13 = piVar13 + 8;
  if ((int *)plVar10[0x23] == piVar13) goto LAB_0177055c;
  goto LAB_01770538;
LAB_017705fc:
  piVar13 = piVar13 + 8;
  if ((int *)plVar10[0x23] == piVar13) goto LAB_01770608;
  goto LAB_017705e4;
LAB_017706a4:
  piVar13 = piVar13 + 8;
  if ((int *)plVar10[0x23] == piVar13) goto LAB_017706b0;
  goto LAB_0177068c;
LAB_01770754:
  piVar13 = piVar13 + 8;
  if ((int *)plVar10[0x23] == piVar13) goto LAB_01770760;
  goto LAB_0177073c;
LAB_01770800:
  piVar13 = piVar13 + 8;
  if ((int *)plVar10[0x23] == piVar13) goto LAB_0177080c;
  goto LAB_017707e8;
LAB_017708ac:
  piVar13 = piVar13 + 8;
  if ((int *)plVar10[0x23] == piVar13) goto LAB_017708b8;
  goto LAB_01770894;
LAB_01770958:
  piVar13 = piVar13 + 8;
  if ((int *)plVar10[0x23] == piVar13) goto LAB_01770964;
  goto LAB_01770940;
}


