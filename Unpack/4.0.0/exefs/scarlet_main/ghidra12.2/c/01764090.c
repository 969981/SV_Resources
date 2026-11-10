/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01764090; name: FUN_01764090
 */


void FUN_01764090(long param_1,long *param_2)

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
  long *plVar11;
  long lVar12;
  long local_1c0;
  undefined *puStack_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  long local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  puVar6 = (undefined8 *)FUN_00f351bc();
  puVar6 = (undefined8 *)FUN_00e514cc(*puVar6);
  plVar11 = (long *)*puVar6;
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 5;
    do {
      lVar9 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar9 == -1) goto LAB_01764c78;
  }
  if (*(long *)(param_1 + 0x380) == 0) {
    local_a0 = 1;
    uStack_98 = 2;
    local_c0 = 0x780;
    puStack_b8 = (undefined *)0x438;
    local_80 = 5;
    uStack_78 = 0x200000008;
    local_b0 = 0;
    local_a8 = (long *)0x0;
    local_90 = 0x20000003f;
    uStack_88 = 0x400000003;
    local_150 = *param_2;
    lVar7 = FUN_00cf3764(&local_1a0,*(undefined8 *)(local_150 + 8),&local_150);
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
      if (iVar3 == -1) goto LAB_01764c78;
      lVar9 = lVar7;
    }
    FUN_0117e220(lVar9,&local_c0,1,1,0);
    plVar8 = *(long **)(param_1 + 0x480);
    *(undefined8 *)(param_1 + 0x480) = 0;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar9 = *plVar10;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    *(long *)(param_1 + 0x480) = lVar7;
    local_90 = CONCAT44(local_90._4_4_,0x35);
    local_150 = *param_2;
    lVar9 = FUN_00cf3764(&local_1a0,*(undefined8 *)(local_150 + 8),&local_150);
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
      if (iVar3 == -1) goto LAB_01764c78;
    }
    FUN_0117e220(lVar9,&local_c0,1,1,0);
    plVar8 = *(long **)(param_1 + 0x488);
    *(undefined8 *)(param_1 + 0x488) = 0;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar7 = *plVar10;
        iVar3 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_01764c50;
    }
    plVar8 = (long *)(param_1 + 0x488);
    *plVar8 = lVar9;
    local_c0 = 0x3c0;
    puStack_b8 = (undefined *)0x21c;
    local_150 = *param_2;
    lVar9 = FUN_00cf3764(&local_1a0,*(undefined8 *)(local_150 + 8),&local_150);
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
      if (iVar3 == -1) goto LAB_01764c78;
    }
    FUN_0117e220(lVar9,&local_c0,1,1,0);
    plVar10 = *(long **)(param_1 + 0x4a0);
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 5;
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
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_01764c50;
    }
    *(long *)(param_1 + 0x4a0) = lVar9;
    local_90 = CONCAT44(local_90._4_4_,0x29);
    local_150 = *param_2;
    lVar9 = FUN_00cf3764(&local_1a0,*(undefined8 *)(local_150 + 8),&local_150);
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
      if (iVar3 == -1) goto LAB_01764c78;
    }
    FUN_0117e220(lVar9,&local_c0,1,1,0);
    plVar10 = *(long **)(param_1 + 0x490);
    *(undefined8 *)(param_1 + 0x490) = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 5;
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
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_01764c50;
    }
    *(long *)(param_1 + 0x490) = lVar9;
    local_f0 = 0;
    uStack_e8 = 0;
    local_d0 = 0x100000005;
    uStack_c8 = 2;
    local_e0 = 0x200000035;
    uStack_d8 = 0x400000003;
    local_100 = FUN_01764ca0(*param_2,&local_f0);
    local_150 = *param_2;
    lVar12 = *plVar8;
    lVar7 = FUN_00cf3764(&local_1a0,*(undefined8 *)(local_150 + 8),&local_150);
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
      if (iVar3 == -1) goto LAB_01764c78;
      lVar9 = lVar7;
    }
    FUN_01765880(lVar9,lVar12,local_100,1);
    plVar10 = *(long **)(param_1 + 0x4f8);
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 5;
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
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    *(long *)(param_1 + 0x4f8) = lVar7;
    local_130 = 1;
    uStack_128 = 2;
    local_140 = 0;
    uStack_138 = 0;
    local_120 = 0x200000035;
    uStack_118 = 0x400000003;
    local_150 = 0x1e0;
    uStack_148 = 0x10e;
    local_110 = 5;
    uStack_108 = 0x200000008;
    local_1a0 = *param_2;
    lVar7 = FUN_00cf3764(&local_1c0,*(undefined8 *)(local_1a0 + 8),&local_1a0);
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
      if (iVar3 == -1) goto LAB_01764c78;
      lVar9 = lVar7;
    }
    FUN_0117e220(lVar9,&local_150,1,1,0);
    plVar10 = *(long **)(param_1 + 0x458);
    *(undefined8 *)(param_1 + 0x458) = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 5;
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
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    *(long *)(param_1 + 0x458) = lVar7;
    local_180 = 1;
    uStack_178 = 2;
    local_1a0 = 0x1e0;
    uStack_198 = 0x10e;
    local_160 = 5;
    uStack_158 = 0x200000008;
    local_190 = 0;
    uStack_188 = 0;
    local_170 = 0x20000003f;
    uStack_168 = 0x400000003;
    local_1c0 = *param_2;
    lVar7 = FUN_00cf3764(auStack_70,*(undefined8 *)(local_1c0 + 8),&local_1c0);
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
      if (iVar3 == -1) {
LAB_01764c78:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      lVar9 = lVar7;
    }
    FUN_0117e220(lVar9,&local_1a0,1,1,0);
    plVar10 = *(long **)(param_1 + 0x450);
    *(undefined8 *)(param_1 + 0x450) = 0;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 5;
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
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    *(long *)(param_1 + 0x450) = lVar7;
    local_1c0 = 0x5fa488b600d25e24;
    puStack_1b8 = PTR_s_RT_MainColor_047e1450;
    local_1b0 = 0x1f;
    local_1a8 = (long *)0x0;
    FUN_01344120(plVar11,&local_1c0,(long *)(param_1 + 0x480));
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x20))();
    }
    local_1c0 = 0x5e1771f463b934e6;
    puStack_1b8 = PTR_s_RT_MainDepth_047dcf38;
    local_1b0 = 0x1f;
    local_1a8 = (long *)0x0;
    FUN_01344120(plVar11,&local_1c0,plVar8);
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x20))();
    }
    local_1c0 = 0x61e5ac237b91a893;
    puStack_1b8 = PTR_s_RT_MainDepthHalf_047e1458;
    local_1b0 = 0x1f;
    local_1a8 = (long *)0x0;
    FUN_01344120(plVar11,&local_1c0,(long *)(param_1 + 0x4a0));
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x20))();
    }
    local_1c0 = -0x6f71b049c8f24ce3;
    puStack_1b8 = PTR_s_RT_BlendBuffer_047e1460;
    local_1b0 = 0x1f;
    local_1a8 = (long *)0x0;
    FUN_01344120(plVar11,&local_1c0,(long *)(param_1 + 0x490));
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x20))();
    }
    local_1c0 = 0x4b1970d18c2be56;
    puStack_1b8 = PTR_s_RT_MainDepthQuarter_047e1468;
    local_1b0 = 0x1f;
    local_1a8 = (long *)0x0;
    FUN_01344120(plVar11,&local_1c0,(long *)(param_1 + 0x458));
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x20))();
    }
    local_1c0 = -0x375b001d0bdee65d;
    puStack_1b8 = PTR_s_RT_SceneColor_047e1470;
    local_1b0 = 0x1f;
    local_1a8 = (long *)0x0;
    FUN_01344120(plVar11,&local_1c0,(long *)(param_1 + 0x450));
    if (local_1a8 != (long *)0x0) {
      (**(code **)(*local_1a8 + 0x20))();
    }
    local_1c0 = -0x74d9f45cf33b4139;
    puStack_1b8 = PTR_s_RT_MainStencil_047dcf40;
    local_1b0 = 0x1f;
    local_1a8 = (long *)0x0;
    FUN_01344120(plVar11,&local_1c0,(long *)(param_1 + 0x4f8));
    plVar8 = local_1a8;
  }
  else {
    local_c0 = 0x5fa488b600d25e24;
    puStack_b8 = PTR_s_RT_MainColor_047e1450;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_00fff044(&local_150,plVar11,&local_c0);
    plVar8 = *(long **)(param_1 + 0x480);
    *(undefined8 *)(param_1 + 0x480) = 0;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar9 = *plVar10;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    lVar9 = local_150;
    local_150 = 0;
    *(long *)(param_1 + 0x480) = lVar9;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    local_c0 = 0x5e1771f463b934e6;
    puStack_b8 = PTR_s_RT_MainDepth_047dcf38;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_00fff044(&local_150,plVar11,&local_c0);
    plVar8 = *(long **)(param_1 + 0x488);
    *(undefined8 *)(param_1 + 0x488) = 0;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar9 = *plVar10;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    lVar9 = local_150;
    local_150 = 0;
    *(long *)(param_1 + 0x488) = lVar9;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    local_c0 = 0x61e5ac237b91a893;
    puStack_b8 = PTR_s_RT_MainDepthHalf_047e1458;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_00fff044(&local_150,plVar11,&local_c0);
    plVar8 = *(long **)(param_1 + 0x4a0);
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar9 = *plVar10;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    lVar9 = local_150;
    local_150 = 0;
    *(long *)(param_1 + 0x4a0) = lVar9;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    local_c0 = 0x908e4fb6370db31d;
    puStack_b8 = PTR_s_RT_BlendBuffer_047e1460;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_00fff044(&local_150,plVar11,&local_c0);
    plVar8 = *(long **)(param_1 + 0x490);
    *(undefined8 *)(param_1 + 0x490) = 0;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar9 = *plVar10;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    lVar9 = local_150;
    local_150 = 0;
    *(long *)(param_1 + 0x490) = lVar9;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    local_c0 = 0x4b1970d18c2be56;
    puStack_b8 = PTR_s_RT_MainDepthQuarter_047e1468;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_00fff044(&local_150,plVar11,&local_c0);
    plVar8 = *(long **)(param_1 + 0x458);
    *(undefined8 *)(param_1 + 0x458) = 0;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar9 = *plVar10;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    lVar9 = local_150;
    local_150 = 0;
    *(long *)(param_1 + 0x458) = lVar9;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    local_c0 = 0xc8a4ffe2f42119a3;
    puStack_b8 = PTR_s_RT_SceneColor_047e1470;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_00fff044(&local_150,plVar11,&local_c0);
    plVar8 = *(long **)(param_1 + 0x450);
    *(undefined8 *)(param_1 + 0x450) = 0;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar9 = *plVar10;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    lVar9 = local_150;
    local_150 = 0;
    *(long *)(param_1 + 0x450) = lVar9;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    local_c0 = 0x8b260ba30cc4bec7;
    puStack_b8 = PTR_s_RT_MainStencil_047dcf40;
    local_b0 = 0x1f;
    local_a8 = (long *)0x0;
    FUN_00fff044(&local_150,plVar11,&local_c0);
    plVar8 = *(long **)(param_1 + 0x4f8);
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    if (plVar8 != (long *)0x0) {
      plVar10 = plVar8 + 5;
      do {
        lVar9 = *plVar10;
        iVar3 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_01764c50;
    }
    lVar9 = local_150;
    local_150 = 0;
    *(long *)(param_1 + 0x4f8) = lVar9;
    plVar8 = local_a8;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 5;
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
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar9 == 0) {
LAB_01764c50:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


