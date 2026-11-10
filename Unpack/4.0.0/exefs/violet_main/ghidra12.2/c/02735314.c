/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02735314; name: FUN_02735314
 */


void FUN_02735314(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_38 [8];
  
  puVar6 = (undefined8 *)FUN_00f351bc();
  puVar6 = (undefined8 *)FUN_00e514cc(*puVar6);
  plVar10 = (long *)*puVar6;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 5;
    do {
      lVar9 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar9 == -1) goto LAB_027359ec;
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    local_a0 = 0x780;
    puStack_98 = (undefined *)0x438;
    local_80 = 1;
    uStack_78 = 2;
    local_60 = 5;
    uStack_58 = 0x200000008;
    local_90 = 0;
    local_88 = (long *)0x0;
    local_70 = 0x200000038;
    uStack_68 = 0x400000003;
    local_c0 = *param_2;
    lVar7 = FUN_00cf3764(auStack_38,*(undefined8 *)(local_c0 + 8),&local_c0);
    lVar9 = 0;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x28);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) goto LAB_027359ec;
      lVar9 = lVar7;
    }
    FUN_0117e220(lVar9,&local_a0,1,1,0);
    plVar8 = *(long **)(param_1 + 0x460);
    *(undefined8 *)(param_1 + 0x460) = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar9 = *plVar2;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_027359c4;
    }
    *(long *)(param_1 + 0x460) = lVar7;
    local_70 = CONCAT44(local_70._4_4_,0x25);
    local_c0 = *param_2;
    lVar9 = FUN_00cf3764(auStack_38,*(undefined8 *)(local_c0 + 8),&local_c0);
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x28);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) goto LAB_027359ec;
    }
    FUN_0117e220(lVar9,&local_a0,1,1,0);
    plVar8 = *(long **)(param_1 + 0x468);
    *(undefined8 *)(param_1 + 0x468) = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar7 = *plVar2;
        iVar3 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_027359c4;
    }
    *(long *)(param_1 + 0x468) = lVar9;
    local_c0 = *param_2;
    lVar9 = FUN_00cf3764(auStack_38,*(undefined8 *)(local_c0 + 8),&local_c0);
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x28);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) goto LAB_027359ec;
    }
    FUN_0117e220(lVar9,&local_a0,1,1,0);
    plVar8 = *(long **)(param_1 + 0x470);
    *(undefined8 *)(param_1 + 0x470) = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar7 = *plVar2;
        iVar3 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_027359c4;
    }
    *(long *)(param_1 + 0x470) = lVar9;
    local_70 = CONCAT44(local_70._4_4_,0x3f);
    local_c0 = *param_2;
    lVar9 = FUN_00cf3764(auStack_38,*(undefined8 *)(local_c0 + 8),&local_c0);
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x28);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) {
LAB_027359ec:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_0117e220(lVar9,&local_a0,1,1,0);
    plVar8 = *(long **)(param_1 + 0x478);
    *(undefined8 *)(param_1 + 0x478) = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar7 = *plVar2;
        iVar3 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_027359c4;
    }
    *(long *)(param_1 + 0x478) = lVar9;
    local_c0 = -0x3fa1817ef59fd153;
    puStack_b8 = PTR_s_RT_GBuffer0_047e1430;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_01344120(plVar10,&local_c0,(long *)(param_1 + 0x460));
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    local_c0 = -0x3fa1827ef59fd306;
    puStack_b8 = PTR_s_RT_GBuffer1_047e1438;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_01344120(plVar10,&local_c0,(long *)(param_1 + 0x468));
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    local_c0 = -0x3fa1837ef59fd4b9;
    puStack_b8 = PTR_s_RT_GBuffer2_047e1440;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_01344120(plVar10,&local_c0,(long *)(param_1 + 0x470));
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    local_c0 = -0x3fa1847ef59fd66c;
    puStack_b8 = PTR_s_RT_GBuffer3_047e1448;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_01344120(plVar10,&local_c0,(long *)(param_1 + 0x478));
    plVar8 = local_a8;
  }
  else {
    local_a0 = 0xc05e7e810a602ead;
    puStack_98 = PTR_s_RT_GBuffer0_047e1430;
    local_90 = 0x1f;
    local_88 = (long *)0x0;
    FUN_00fff044(&local_c0,plVar10,&local_a0);
    plVar8 = *(long **)(param_1 + 0x460);
    *(undefined8 *)(param_1 + 0x460) = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar9 = *plVar2;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_027359c4;
    }
    lVar9 = local_c0;
    local_c0 = 0;
    *(long *)(param_1 + 0x460) = lVar9;
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_a0 = 0xc05e7d810a602cfa;
    puStack_98 = PTR_s_RT_GBuffer1_047e1438;
    local_90 = 0x1f;
    local_88 = (long *)0x0;
    FUN_00fff044(&local_c0,plVar10,&local_a0);
    plVar8 = *(long **)(param_1 + 0x468);
    *(undefined8 *)(param_1 + 0x468) = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar9 = *plVar2;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_027359c4;
    }
    lVar9 = local_c0;
    local_c0 = 0;
    *(long *)(param_1 + 0x468) = lVar9;
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_a0 = 0xc05e7c810a602b47;
    puStack_98 = PTR_s_RT_GBuffer2_047e1440;
    local_90 = 0x1f;
    local_88 = (long *)0x0;
    FUN_00fff044(&local_c0,plVar10,&local_a0);
    plVar8 = *(long **)(param_1 + 0x470);
    *(undefined8 *)(param_1 + 0x470) = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar9 = *plVar2;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_027359c4;
    }
    lVar9 = local_c0;
    local_c0 = 0;
    *(long *)(param_1 + 0x470) = lVar9;
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    local_a0 = 0xc05e7b810a602994;
    puStack_98 = PTR_s_RT_GBuffer3_047e1448;
    local_90 = 0x1f;
    local_88 = (long *)0x0;
    FUN_00fff044(&local_c0,plVar10,&local_a0);
    plVar8 = *(long **)(param_1 + 0x478);
    *(undefined8 *)(param_1 + 0x478) = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar9 = *plVar2;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_027359c4;
    }
    lVar9 = local_c0;
    local_c0 = 0;
    *(long *)(param_1 + 0x478) = lVar9;
    plVar8 = local_88;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 5;
    do {
      lVar9 = *plVar8;
      iVar3 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar9 == 0) {
LAB_027359c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


