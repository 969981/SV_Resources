/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02735c34; name: FUN_02735c34
 */


void FUN_02735c34(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  char *pcVar14;
  int *piVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 local_b8;
  undefined1 *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  ulong local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar9 = (undefined8 *)FUN_00f351bc();
  puVar9 = (undefined8 *)FUN_00e514cc(*puVar9);
  plVar17 = (long *)*puVar9;
  if (plVar17 != (long *)0x0) {
    plVar11 = plVar17 + 5;
    do {
      lVar16 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = (int)lVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar16 == -1) goto LAB_027361d0;
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    local_90 = 0x3c0;
    pcStack_88 = (char *)0x21c;
    local_70 = 1;
    uStack_68 = 2;
    local_50 = 5;
    uStack_48 = 0x200000008;
    local_80 = 0;
    local_78 = (long *)0x0;
    local_60 = 0x20000003f;
    uStack_58 = 0x400000003;
    local_b0 = (undefined1 *)*param_2;
    lVar10 = FUN_00cf3764(&local_b8,*(undefined8 *)(local_b0 + 8),&local_b0);
    lVar16 = 0;
    if (lVar10 != 0) {
      piVar15 = (int *)(lVar10 + 0x28);
      do {
        iVar3 = *piVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar5) {
          *piVar15 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) goto LAB_027361d0;
      lVar16 = lVar10;
    }
    FUN_0117e220(lVar16,&local_90,1,1,0);
    plVar11 = *(long **)(param_1 + 0x4a8);
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    if (plVar11 != (long *)0x0) {
      plVar13 = plVar11 + 5;
      do {
        lVar16 = *plVar13;
        iVar3 = (int)lVar16 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *(int *)plVar13 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      else if ((int)lVar16 == 0) goto LAB_027361a8;
    }
    *(long *)(param_1 + 0x4a8) = lVar10;
    local_b0 = (undefined1 *)0xa5971aa6de2971c2;
    pcStack_a8 = "RT_LightBuffer";
    local_a0 = 0xe;
    local_98 = (long *)0x0;
    FUN_01344120(plVar17,&local_b0);
    plVar11 = local_98;
  }
  else {
    local_90 = 0xa5971aa6de2971c2;
    pcStack_88 = "RT_LightBuffer";
    local_80 = 0xe;
    local_78 = (long *)0x0;
    FUN_00fff044(&local_b0,plVar17,&local_90);
    plVar11 = *(long **)(param_1 + 0x4a8);
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    if (plVar11 != (long *)0x0) {
      plVar13 = plVar11 + 5;
      do {
        lVar16 = *plVar13;
        iVar3 = (int)lVar16 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *(int *)plVar13 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      else if ((int)lVar16 == 0) goto LAB_027361a8;
    }
    puVar7 = local_b0;
    local_b0 = (undefined1 *)0x0;
    *(undefined1 **)(param_1 + 0x4a8) = puVar7;
    plVar11 = local_78;
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  iVar3 = *(int *)(param_1 + 0x58c);
  uVar18 = *(undefined8 *)(param_1 + 0x388);
  local_b0 = &DAT_c1df119e63c556a;
  pcStack_a8 = PTR_s_LightPrepare_047e14f0;
  local_a0 = 0x1f;
  local_98 = (long *)0x0;
  FUN_01464dd0(&local_90,&local_b0,*(undefined8 *)(param_1 + 0x380));
  FUN_013442d4(&local_b8,uVar18,&local_90);
  plVar11 = *(long **)(param_1 + 0x3b0);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 5;
    do {
      lVar16 = *plVar13;
      iVar6 = (int)lVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_027361a8;
  }
  uVar18 = local_b8;
  local_b8 = 0;
  *(undefined8 *)(param_1 + 0x3b0) = uVar18;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  uVar18 = *(undefined8 *)(param_1 + 0x3b0);
  uVar8 = FUN_01464df0(0x2d,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar18,uVar8);
  FUN_01343f00(*(undefined8 *)(param_1 + 0x3b0),iVar3,0xe);
  plVar11 = *(long **)(*(long *)(param_1 + 0x3b0) + 0x58);
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 5;
    do {
      lVar16 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = (int)lVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar16 == -1) {
LAB_027361d0:
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_027361f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",pcVar14,0x53,
                 "Reference counter overflows.");
    }
  }
  local_90 = local_90 & 0xffffffffffffff00;
  FUN_00d8219c(plVar11,0,param_1 + 0x4a8,0xffffffff,&local_90);
  plVar13 = (long *)(param_1 + 0x4a0);
  local_90 = local_90 & 0xffffffffffffff00;
  FUN_00d829fc(plVar11,plVar13,&local_90);
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,2);
  local_b8 = CONCAT44(local_b8._4_4_,iVar3 + 2);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar11[0x22];
  if (piVar15 != (int *)plVar11[0x23]) {
LAB_02735f50:
    if ((*piVar15 != 2) || (piVar15[1] != iVar3 + 2)) goto LAB_02735f68;
    lVar16 = *(long *)(param_1 + 0x468);
    if (lVar16 != 0) {
      piVar2 = (int *)(lVar16 + 0x28);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) goto LAB_0273621c;
    }
    plVar12 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar16;
    if (plVar12 == (long *)0x0) goto LAB_02735fd8;
    plVar1 = plVar12 + 5;
    do {
      lVar16 = *plVar1;
      iVar6 = (int)lVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_02735fd8;
    }
    if ((int)lVar16 != 0) goto LAB_02735fd8;
    goto LAB_027361f8;
  }
LAB_02735f74:
  FUN_00d11148(plVar11 + 0x22,&local_b0,&local_b8,(long *)(param_1 + 0x468),&local_90);
LAB_02735fd8:
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,2);
  local_b8 = CONCAT44(local_b8._4_4_,iVar3 + 5);
  local_90 = local_90 & 0xffffffffffffff00;
  piVar15 = (int *)plVar11[0x22];
  if (piVar15 != (int *)plVar11[0x23]) {
LAB_02735ff8:
    if ((*piVar15 != 2) || (piVar15[1] != iVar3 + 5)) goto LAB_02736010;
    lVar16 = *plVar13;
    if (lVar16 != 0) {
      piVar2 = (int *)(lVar16 + 0x28);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) {
LAB_0273621c:
        pcVar14 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        goto LAB_027361f0;
      }
    }
    plVar13 = *(long **)(piVar15 + 2);
    *(long *)(piVar15 + 2) = lVar16;
    if (plVar13 != (long *)0x0) {
      plVar12 = plVar13 + 5;
      do {
        lVar16 = *plVar12;
        iVar3 = (int)lVar16 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
      else if ((int)lVar16 == 0) {
LAB_027361f8:
        pcVar14 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        goto LAB_027361c8;
      }
    }
    goto LAB_02736084;
  }
LAB_0273601c:
  FUN_00d11148(plVar11 + 0x22,&local_b0,&local_b8,plVar13,&local_90);
LAB_02736084:
  FUN_00d81b84(0,0,0,0,plVar11,0);
  FUN_00d819c8(0,plVar11,0);
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 5;
    do {
      lVar16 = *plVar13;
      iVar3 = (int)lVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar16 == 0) goto LAB_027361a8;
  }
  if (plVar17 != (long *)0x0) {
    plVar11 = plVar17 + 5;
    do {
      lVar16 = *plVar11;
      iVar3 = (int)lVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    else if ((int)lVar16 == 0) {
LAB_027361a8:
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_027361c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar14,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_02735f68:
  piVar15 = piVar15 + 8;
  if ((int *)plVar11[0x23] == piVar15) goto LAB_02735f74;
  goto LAB_02735f50;
LAB_02736010:
  piVar15 = piVar15 + 8;
  if ((int *)plVar11[0x23] == piVar15) goto LAB_0273601c;
  goto LAB_02735ff8;
}


