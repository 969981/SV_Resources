/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e00e28; name: FUN_00e00e28
 */


void FUN_00e00e28(long param_1,long param_2)

{
  ulong *puVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 local_1f8;
  char *pcStack_1f0;
  undefined8 local_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  char *pcStack_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  char *pcStack_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  undefined8 local_198;
  char *pcStack_190;
  undefined8 local_188;
  long *local_180;
  undefined8 local_178;
  char *pcStack_170;
  undefined8 local_168;
  long *local_160;
  undefined8 local_158;
  char *pcStack_150;
  undefined8 local_148;
  long *local_140;
  long *local_138;
  char *pcStack_130;
  undefined8 local_128;
  long *local_120;
  long *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_68 [8];
  
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x10);
  puVar1 = (ulong *)(param_1 + 0x78);
  puVar11 = (undefined8 *)(param_1 + 0x80);
  FUN_0167119c(*(undefined8 *)(param_2 + 8),puVar1,puVar11,0);
  puVar8 = (undefined8 *)FUN_00e31554();
  plVar12 = (long *)*puVar8;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 5;
    do {
      lVar14 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)lVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar14 == -1) goto LAB_00e01c30;
  }
  puVar8 = (undefined8 *)FUN_00f351bc();
  puVar8 = (undefined8 *)FUN_00e514cc(*puVar8);
  plVar13 = (long *)*puVar8;
  if (plVar13 != (long *)0x0) {
    plVar10 = plVar13 + 5;
    do {
      lVar14 = *plVar10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)lVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar14 == -1) goto LAB_00e01c30;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    local_a8 = 1;
    uStack_a0 = 2;
    local_90 = 0x400000003;
    uStack_88 = 5;
    local_b8 = 0;
    local_b0 = (long *)0x0;
    local_98 = 0x20000000b;
    local_c8 = *puVar1;
    pcStack_c0 = (char *)*puVar11;
    local_80 = 0x200000004;
    local_118 = plVar12;
    lVar9 = FUN_00cf3764(&local_138,plVar12[1],&local_118);
    lVar14 = 0;
    if (lVar9 != 0) {
      piVar2 = (int *)(lVar9 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == -1) goto LAB_00e01c30;
      lVar14 = lVar9;
    }
    FUN_0117e220(lVar14,&local_c8,1,3,0);
    plVar17 = (long *)(param_1 + 0x58);
    plVar10 = (long *)*plVar17;
    *plVar17 = 0;
    if (plVar10 != (long *)0x0) {
      plVar15 = plVar10 + 5;
      do {
        lVar14 = *plVar15;
        iVar4 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00e01c08;
    }
    *plVar17 = lVar9;
    local_f8 = 1;
    uStack_f0 = 2;
    local_e0 = 0x400000003;
    uStack_d8 = 5;
    local_e8 = 0x20000003f;
    local_108 = 0;
    local_100 = (long *)0x0;
    local_118 = (long *)*puVar1;
    puStack_110 = (undefined *)*puVar11;
    local_d0 = 0x200000008;
    local_138 = plVar12;
    lVar9 = FUN_00cf3764(auStack_68,plVar12[1],&local_138);
    lVar14 = 0;
    if (lVar9 != 0) {
      piVar2 = (int *)(lVar9 + 0x28);
      do {
        iVar4 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == -1) goto LAB_00e01c30;
      lVar14 = lVar9;
    }
    FUN_0117e220(lVar14,&local_118,1,1,0);
    plVar15 = (long *)(param_1 + 0x60);
    plVar10 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 5;
      do {
        lVar14 = *plVar3;
        iVar4 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00e01c08;
    }
    *plVar15 = lVar9;
    local_138 = (long *)0xebaeb6bbb73c50;
    pcStack_130 = "RT_SSRHash";
    local_128 = 10;
    local_120 = (long *)0x0;
    FUN_01344120(plVar13,&local_138,plVar17);
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    local_138 = (long *)0x7557c98c0d50591a;
    pcStack_130 = "RT_SSRBuffer";
    local_128 = 0xc;
    local_120 = (long *)0x0;
    FUN_01344120(plVar13,&local_138,plVar15);
    plVar10 = local_120;
  }
  else {
    local_c8 = 0xebaeb6bbb73c50;
    pcStack_c0 = "RT_SSRHash";
    local_b8 = 10;
    local_b0 = (long *)0x0;
    FUN_00fff044(&local_118,plVar13,&local_c8);
    plVar10 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar10 != (long *)0x0) {
      plVar17 = plVar10 + 5;
      do {
        lVar14 = *plVar17;
        iVar4 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00e01c08;
    }
    plVar10 = local_118;
    local_118 = (long *)0x0;
    *(long **)(param_1 + 0x58) = plVar10;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    local_c8 = 0x7557c98c0d50591a;
    pcStack_c0 = "RT_SSRBuffer";
    local_b8 = 0xc;
    local_b0 = (long *)0x0;
    FUN_00fff044(&local_118,plVar13,&local_c8);
    plVar10 = *(long **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (plVar10 != (long *)0x0) {
      plVar17 = plVar10 + 5;
      do {
        lVar14 = *plVar17;
        iVar4 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *(int *)plVar17 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00e01c08;
    }
    plVar10 = local_118;
    local_118 = (long *)0x0;
    *(long **)(param_1 + 0x60) = plVar10;
    plVar10 = local_b0;
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  local_118 = (long *)0x174c6db3002376ca;
  puStack_110 = PTR_s_SSRCalc_047e14d8;
  local_108 = 0x1f;
  local_100 = (long *)0x0;
  FUN_01464dd0(&local_c8,&local_118,*(undefined8 *)(param_1 + 0x70));
  FUN_012710b8(&local_138,plVar12,&local_c8);
  plVar10 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar10 != (long *)0x0) {
    plVar17 = plVar10 + 5;
    do {
      lVar14 = *plVar17;
      iVar4 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_00e01c08;
  }
  plVar10 = local_138;
  local_138 = (long *)0x0;
  *(long **)(param_1 + 0x30) = plVar10;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = FUN_01464df0(0x7d,*(undefined8 *)(param_1 + 0x70));
  FUN_01464e08(uVar16,uVar7);
  FUN_01271098(*(undefined8 *)(param_1 + 0x30),2);
  plVar10 = *(long **)(*(long *)(param_1 + 0x30) + 0x58);
  if (plVar10 != (long *)0x0) {
    plVar17 = plVar10 + 5;
    do {
      lVar14 = *plVar17;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = (int)lVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar14 == -1) goto LAB_00e01c30;
  }
  FUN_00e01c58(plVar10,2,1,param_1 + 0x58);
  FUN_00d80894(0,0,(float)*(ulong *)(param_1 + 0x78),(float)*(ulong *)(param_1 + 0x80),plVar10,0);
  FUN_00d8037c(*(undefined8 *)(param_1 + 0x30),0,0,0,*(undefined4 *)(param_1 + 0x78),
               *(undefined4 *)(param_1 + 0x80));
  FUN_00d819c8(0,plVar10,0);
  FUN_015b3280(plVar10,0,0,0,0,0);
  FUN_00eb3bec(plVar10,0);
  FUN_00eb4900(plVar10,0);
  local_c8 = local_c8 & 0xffffffffffffff00;
  FUN_00d8219c(plVar10,0,param_1 + 0x60,0xffffffff,&local_c8);
  local_118 = (long *)0x8976cc0604b4e18d;
  puStack_110 = PTR_s_SSRResolve_047e1530;
  local_108 = 0x1f;
  local_100 = (long *)0x0;
  FUN_01464dd0(&local_c8,&local_118,*(undefined8 *)(param_1 + 0x70));
  FUN_012710b8(&local_138,plVar12,&local_c8);
  plVar17 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar17 != (long *)0x0) {
    plVar15 = plVar17 + 5;
    do {
      lVar14 = *plVar15;
      iVar4 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
    else if ((int)lVar14 == 0) goto LAB_00e01c08;
  }
  plVar17 = local_138;
  local_138 = (long *)0x0;
  *(long **)(param_1 + 0x38) = plVar17;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = FUN_01464df0(0x7e,*(undefined8 *)(param_1 + 0x70));
  FUN_01464e08(uVar16,uVar7);
  FUN_01271098(*(undefined8 *)(param_1 + 0x38),2);
  plVar17 = *(long **)(*(long *)(param_1 + 0x38) + 0x58);
  if (plVar17 != (long *)0x0) {
    plVar15 = plVar17 + 5;
    do {
      lVar14 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = (int)lVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar14 == -1) {
LAB_00e01c30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_c8 = local_c8 & 0xffffffffffffff00;
  FUN_00d8219c(plVar17,0,param_1 + 0x60,0xffffffff,&local_c8);
  FUN_00d819c8(0,plVar17,0);
  FUN_015b3280(plVar17,0,1,1,1,1);
  FUN_00eb3bec(plVar17,0);
  FUN_00eb4900(plVar17,0);
  if (*(long *)(param_1 + 0x70) == 0) {
    local_c8 = 0x53292526d9e574e3;
    pcStack_c0 = PTR_DAT_047e1538;
    local_b8 = 0x1f;
    local_b0 = (long *)0x0;
    FUN_012a632c(&local_118,plVar13,&local_c8);
    plVar15 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar15 != (long *)0x0) {
      plVar3 = plVar15 + 5;
      do {
        lVar14 = *plVar3;
        iVar4 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00e01c08;
    }
    plVar15 = local_118;
    local_118 = (long *)0x0;
    *(long **)(param_1 + 0x68) = plVar15;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))(local_b0);
      plVar15 = *(long **)(param_1 + 0x68);
    }
    FUN_00eb6400(plVar15);
    puVar11 = (undefined8 *)FUN_0166cefc();
    local_c8 = 0x3d948eb51351b29a;
    pcStack_c0 = "[ClearHash]";
    local_b8 = 0xb;
    local_b0 = (long *)0x0;
    FUN_01343d88(&local_118,*puVar11,*(long *)(param_1 + 0x30) + 0x38,&local_c8,0);
    plVar15 = *(long **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (plVar15 != (long *)0x0) {
      plVar3 = plVar15 + 5;
      do {
        lVar14 = *plVar3;
        iVar4 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00e01c08;
    }
    plVar15 = local_118;
    local_118 = (long *)0x0;
    *(long **)(param_1 + 0x40) = plVar15;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    local_148 = 8;
    local_140 = (long *)0x0;
    local_178 = 0x2682b19b6c78d0e2;
    pcStack_170 = "Clear";
    local_158 = 0x9a33ee12e00dbfd0;
    pcStack_150 = "PassType";
    local_168 = 5;
    local_160 = (long *)0x0;
    FUN_00d0fefc(*(undefined8 *)(param_1 + 0x68),&local_158,&local_178);
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    FUN_00d100a8(*(undefined8 *)(param_1 + 0x68));
    lVar14 = *(long *)(param_1 + 0x40);
    uVar16 = FUN_015f804c(*(undefined8 *)(param_1 + 0x68));
    FUN_00d10690(*(undefined8 *)(lVar14 + 200),0,uVar16);
    FUN_00eacd1c(*(undefined8 *)(param_1 + 0x40),0,0,0);
    FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0x40) + 200),0);
    FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x40) + 200),0);
    FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x40) + 200),0,1);
    FUN_00eb2008(*(undefined8 *)(*(long *)(param_1 + 0x40) + 200),4);
    *(undefined4 *)(*(long *)(param_1 + 0x40) + 0xf0) = 0;
    puVar11 = (undefined8 *)FUN_0166cefc();
    local_c8 = 0x62344750597211e2;
    pcStack_c0 = "[ProjectHash]";
    local_b8 = 0xd;
    local_b0 = (long *)0x0;
    FUN_01343d88(&local_118,*puVar11,*(long *)(param_1 + 0x30) + 0x38,&local_c8,0);
    plVar15 = *(long **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar15 != (long *)0x0) {
      plVar3 = plVar15 + 5;
      do {
        lVar14 = *plVar3;
        iVar4 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00e01c08;
    }
    plVar15 = local_118;
    local_118 = (long *)0x0;
    *(long **)(param_1 + 0x48) = plVar15;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    local_188 = 8;
    local_180 = (long *)0x0;
    local_1b8 = 0xac19db3986edada2;
    pcStack_1b0 = "ProjectHash";
    local_198 = 0x9a33ee12e00dbfd0;
    pcStack_190 = "PassType";
    local_1a8 = 0xb;
    local_1a0 = (long *)0x0;
    FUN_00d0fefc(*(undefined8 *)(param_1 + 0x68),&local_198,&local_1b8);
    if (local_1a0 != (long *)0x0) {
      (**(code **)(*local_1a0 + 0x20))();
    }
    if (local_180 != (long *)0x0) {
      (**(code **)(*local_180 + 0x20))();
    }
    FUN_00d100a8(*(undefined8 *)(param_1 + 0x68));
    lVar14 = *(long *)(param_1 + 0x48);
    uVar16 = FUN_015f804c(*(undefined8 *)(param_1 + 0x68));
    FUN_00d10690(*(undefined8 *)(lVar14 + 200),0,uVar16);
    FUN_016a74cc(*(undefined8 *)(param_1 + 0x48),0,param_2,0);
    FUN_00eacd1c(*(undefined8 *)(param_1 + 0x48),0,0,0);
    FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0x48) + 200),0);
    FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x48) + 200),0);
    FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x48) + 200),0,1);
    FUN_00eb2008(*(undefined8 *)(*(long *)(param_1 + 0x48) + 200),4);
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0xf0) = 0;
    puVar11 = (undefined8 *)FUN_0166cefc();
    local_c8 = 0x341707c8f55b619;
    pcStack_c0 = "[ResolveHash]";
    local_b8 = 0xd;
    local_b0 = (long *)0x0;
    FUN_01343d88(&local_118,*puVar11,*(long *)(param_1 + 0x38) + 0x38,&local_c8,0);
    plVar15 = *(long **)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (plVar15 != (long *)0x0) {
      plVar3 = plVar15 + 5;
      do {
        lVar14 = *plVar3;
        iVar4 = (int)lVar14 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
      else if ((int)lVar14 == 0) goto LAB_00e01c08;
    }
    plVar15 = local_118;
    local_118 = (long *)0x0;
    *(long **)(param_1 + 0x50) = plVar15;
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    local_1c8 = 8;
    local_1c0 = (long *)0x0;
    local_1f8 = 0xa918eb8fa9284c63;
    pcStack_1f0 = "ResolveHash";
    local_1d8 = 0x9a33ee12e00dbfd0;
    pcStack_1d0 = "PassType";
    local_1e8 = 0xb;
    local_1e0 = (long *)0x0;
    FUN_00d0fefc(*(undefined8 *)(param_1 + 0x68),&local_1d8,&local_1f8);
    if (local_1e0 != (long *)0x0) {
      (**(code **)(*local_1e0 + 0x20))();
    }
    if (local_1c0 != (long *)0x0) {
      (**(code **)(*local_1c0 + 0x20))();
    }
    FUN_00d100a8(*(undefined8 *)(param_1 + 0x68));
    lVar14 = *(long *)(param_1 + 0x50);
    uVar16 = FUN_015f804c(*(undefined8 *)(param_1 + 0x68));
    FUN_00d10690(*(undefined8 *)(lVar14 + 200),0,uVar16);
    FUN_016a74cc(*(undefined8 *)(param_1 + 0x50),0,param_1 + 0x58,0);
    FUN_016a74cc(*(undefined8 *)(param_1 + 0x50),1,(undefined8 *)(param_2 + 8),0);
    FUN_00eacd1c(*(undefined8 *)(param_1 + 0x50),0,0,0);
    FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0x50) + 200),0);
    FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0x50) + 200),0);
    FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0x50) + 200),0,1);
    FUN_00eb2008(*(undefined8 *)(*(long *)(param_1 + 0x50) + 200),4);
    *(undefined4 *)(*(long *)(param_1 + 0x50) + 0xf0) = 1;
  }
  if (plVar17 != (long *)0x0) {
    plVar15 = plVar17 + 5;
    do {
      lVar14 = *plVar15;
      iVar4 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    else if ((int)lVar14 == 0) goto LAB_00e01c08;
  }
  if (plVar10 != (long *)0x0) {
    plVar17 = plVar10 + 5;
    do {
      lVar14 = *plVar17;
      iVar4 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *(int *)plVar17 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar14 == 0) goto LAB_00e01c08;
  }
  if (plVar13 != (long *)0x0) {
    plVar10 = plVar13 + 5;
    do {
      lVar14 = *plVar10;
      iVar4 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    else if ((int)lVar14 == 0) goto LAB_00e01c08;
  }
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 5;
    do {
      lVar14 = *plVar13;
      iVar4 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar14 == 0) {
LAB_00e01c08:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


