/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017730b0; name: FUN_017730b0
 */


void FUN_017730b0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 local_168;
  undefined *puStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined *puStack_140;
  undefined8 local_138;
  long *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_48;
  
  puVar8 = (undefined8 *)FUN_00f351bc();
  puVar8 = (undefined8 *)FUN_00e514cc(*puVar8);
  plVar10 = (long *)*puVar8;
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 5;
    do {
      lVar5 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_80 = (long *)0xfc7bd4a933b53d7a;
  puStack_78 = PTR_s_ShadowFactor_047e1540;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  FUN_012a632c(&local_e0,plVar10,&local_80);
  plVar9 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 5;
    do {
      lVar5 = *plVar12;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01773a24;
  }
  uVar11 = local_e0;
  local_e0 = 0;
  *(undefined8 *)(param_1 + 0x98) = uVar11;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))(local_68);
    uVar11 = *(undefined8 *)(param_1 + 0x98);
  }
  FUN_00eb6400(uVar11);
  local_80 = (long *)0xb0028654dbc57b4f;
  puStack_78 = PTR_s_Light_047e1548;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  FUN_012a632c(&local_e0,plVar10,&local_80);
  plVar9 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 5;
    do {
      lVar5 = *plVar12;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01773a24;
  }
  uVar11 = local_e0;
  local_e0 = 0;
  *(undefined8 *)(param_1 + 0xa0) = uVar11;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))(local_68);
    uVar11 = *(undefined8 *)(param_1 + 0xa0);
  }
  local_a0 = 0xd52b42c47149da8e;
  pcStack_98 = "EnableIrradianceVolume";
  local_90 = 0x16;
  local_88 = (long *)0x0;
  FUN_01773ea0(uVar11,&local_a0,1);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  local_c0 = 0xb6a8bbc9f8e227df;
  pcStack_b8 = "EnableSpecularProbe";
  local_b0 = 0x13;
  local_a8 = (long *)0x0;
  FUN_01773ea0(*(undefined8 *)(param_1 + 0xa0),&local_c0,1);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  FUN_00eb6400(*(undefined8 *)(param_1 + 0xa0));
  puVar8 = (undefined8 *)FUN_0166cefc();
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  local_80 = (long *)0xfc7bd4a933b53d7a;
  puStack_78 = PTR_s_ShadowFactor_047e14f8;
  local_d0 = 0xf;
  local_c8 = (long *)0x0;
  local_e0 = 0xdaf10b393252a074;
  pcStack_d8 = "[Shadow Factor]";
  FUN_01343d88(&local_48,*puVar8,&local_80,&local_e0,0);
  plVar9 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 5;
    do {
      lVar5 = *plVar12;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01773a24;
  }
  uVar11 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0xa8) = uVar11;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  FUN_00d100a8(*(undefined8 *)(param_1 + 0x98));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 200),0,*(long *)(param_1 + 0x98) + 0xf0);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 200),0);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 200),0);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 200),2,1);
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0xa8),0,0,0);
  *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0xf0) = 0x80000000;
  puVar8 = (undefined8 *)FUN_0166cefc();
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  local_e0 = 0xe36c0e8d5693098c;
  pcStack_d8 = "[Global Light]";
  local_80 = (long *)0xfca2eedb75953a09;
  puStack_78 = PTR_s_Lighting_047e0fb8;
  local_d0 = 0xe;
  local_c8 = (long *)0x0;
  FUN_01343d88(&local_48,*puVar8,&local_80,&local_e0,0);
  plVar9 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 5;
    do {
      lVar5 = *plVar12;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01773a24;
  }
  uVar11 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0xb0) = uVar11;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  puVar6 = PTR_s_LightType_047e1550;
  local_f0 = 0x1f;
  local_e8 = (long *)0x0;
  local_100 = 0xef2fed89a983fbd7;
  puStack_f8 = PTR_s_LightType_047e1550;
  local_120 = 0x757527f9d900520e;
  puStack_118 = PTR_s_Global_047e12f0;
  local_110 = 0x1f;
  uStack_108 = 0;
  FUN_00d0fefc(*(undefined8 *)(param_1 + 0xa0),&local_100,&local_120);
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  FUN_00d100a8(*(undefined8 *)(param_1 + 0xa0));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 200),0,*(long *)(param_1 + 0xa0) + 0xf0);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 200),1);
  FUN_00eb6a8c(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 200),6);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 200),0);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 200),2,1);
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0xb0),0,0,0);
  *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0xf0) = 0x80000000;
  FUN_01773b4c(*(undefined8 *)(param_1 + 0xb0),0,param_2,2,0,0);
  FUN_01773b4c(*(undefined8 *)(param_1 + 0xb0),1,param_2 + 8,2,0,0);
  FUN_01773b4c(*(undefined8 *)(param_1 + 0xb0),2,param_2 + 0x10,2,0,0);
  local_48 = 1;
  FUN_012a6760(&DAT_0485a0a0,param_1 + 0x30,&local_48,10,10);
  FUN_00d08d60(&local_80,&DAT_0485a0a0,10,10);
  plVar12 = (long *)(param_1 + 0x78);
  plVar9 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01773a24;
  }
  *(long **)(param_1 + 0x78) = local_80;
  uVar7 = FUN_00d08d40(10,10);
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  local_80 = DAT_0485a0a0;
  FUN_01773c68(&local_e0,DAT_0485a0a0,&local_80);
  puVar14 = (undefined8 *)(param_1 + 0x88);
  local_80 = (long *)*puVar14;
  *puVar14 = 0;
  FUN_01773a74(&local_80);
  uVar11 = local_e0;
  local_e0 = 0;
  *puVar14 = uVar11;
  FUN_01773a74(&local_e0);
  local_80 = DAT_0485a0a0;
  FUN_01773d24(&local_e0,DAT_0485a0a0,&local_80);
  puVar13 = (undefined8 *)(param_1 + 0x90);
  local_80 = (long *)*puVar13;
  *puVar13 = 0;
  FUN_01773ae0(&local_80);
  uVar11 = local_e0;
  local_e0 = 0;
  *puVar13 = uVar11;
  FUN_01773ae0(&local_e0);
  puVar8 = (undefined8 *)FUN_0166cefc();
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  local_e0 = 0x339696b96823f8af;
  pcStack_d8 = "[Point Light]";
  local_80 = (long *)&DAT_c1df119e63c556a;
  puStack_78 = PTR_s_LightPrepare_047e14f0;
  local_d0 = 0xd;
  local_c8 = (long *)0x0;
  FUN_00dfeda8(&local_128,*puVar8,&local_80,&local_e0,0);
  plVar9 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01773a24;
  }
  uVar11 = local_128;
  local_128 = 0;
  *(undefined8 *)(param_1 + 0xb8) = uVar11;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  FUN_00c751c8(*(undefined8 *)(param_1 + 0xb8),param_1 + 0x30,1,1);
  FUN_00c97970(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 200),plVar12,0x10);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 200);
  FUN_01773de0(&local_80,puVar14);
  FUN_00c4b998(uVar11,1,10,&local_80);
  if (local_80 != (long *)0x0) {
    plVar9 = local_80 + 5;
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01773a24;
  }
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 200);
  FUN_01773e40(&local_80,puVar13);
  FUN_00c4b998(uVar11,1,0xb,&local_80);
  if (local_80 != (long *)0x0) {
    plVar9 = local_80 + 5;
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_01773a24;
  }
  local_148 = 0xef2fed89a983fbd7;
  puStack_140 = puVar6;
  local_138 = 0x1f;
  local_130 = (long *)0x0;
  local_168 = 0xff3b6436877936f1;
  puStack_160 = PTR_s_Point_047dcf18;
  local_158 = 0x1f;
  uStack_150 = 0;
  FUN_00d0fefc(*(undefined8 *)(param_1 + 0xa0),&local_148,&local_168);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  FUN_00d100a8(*(undefined8 *)(param_1 + 0xa0));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 200),0,*(long *)(param_1 + 0xa0) + 0xf0);
  FUN_00eb2d18(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 200),1,1);
  FUN_00eb3bec(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 200),1);
  FUN_00eb6a8c(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 200),4);
  FUN_00eb4900(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 200),0);
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0xb8),0,4,0);
  if (plVar10 != (long *)0x0) {
    plVar9 = plVar10 + 5;
    do {
      lVar5 = *plVar9;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar5 == 0) {
LAB_01773a24:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


