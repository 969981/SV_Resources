/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0189a220; name: FUN_0189a220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0189a220(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  size_t sVar13;
  bool bVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined1 *puVar18;
  long *plVar19;
  long *plVar20;
  long **pplVar21;
  ulong uVar22;
  char *pcVar23;
  undefined4 uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined1 *local_1e8;
  undefined8 local_1b8;
  undefined *puStack_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  long *local_198;
  char *local_190;
  undefined8 local_188;
  long *local_180;
  undefined1 *local_178;
  undefined1 *puStack_170;
  long local_168;
  long *local_160;
  undefined4 local_158;
  long *local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  undefined1 *local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  undefined4 local_110;
  long *local_108;
  undefined *puStack_100;
  size_t local_f8;
  long *local_f0;
  undefined1 *local_e8;
  char *pcStack_e0;
  long local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  char local_90 [8];
  undefined8 local_88;
  undefined *puStack_80;
  size_t local_78;
  long *local_70;
  
  lVar25 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x20) + 0x10))();
  }
  puVar7 = PTR_s_default_jewel_047e0e68;
  local_78 = strlen(PTR_s_default_jewel_047e0e68);
  local_90[0] = '\x01';
  local_88 = 0x3055114db1fec06e;
  puStack_80 = puVar7;
  local_70 = (long *)0x0;
  FUN_00c5ecb4(&local_98,lVar25,local_90);
  FUN_00c5ecb4(&local_a0,lVar25,param_1);
  puVar7 = PTR_s_EnableJewel_047e0e70;
  if ((int)((ulong)(local_a0[0x27] - local_a0[0x26]) >> 5) != 0) {
    uVar22 = 0;
    do {
      plVar17 = (long *)(local_a0[0x26] + uVar22 * 0x20);
      lVar16 = *plVar17;
      plVar17 = (long *)plVar17[3];
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
      plVar12 = local_a0;
      if (local_a0 == (long *)0x0) {
        local_108 = (long *)CONCAT44(local_108._4_4_,1);
        if ((*(long *)(_DAT_000000a8 + 0xf8) == 0) ||
           (plVar12 = (long *)(*(long *)(_DAT_000000a8 + 0xf8) + 0x30),
           uVar11 = (**(code **)(*plVar12 + 0x30))(plVar12,&local_108,puVar7), (uVar11 & 1) == 0)) {
          if (lVar16 < 0xbad51c2e071c243) {
            if (lVar16 < -0x3ac787cc1be1861d) {
              if ((lVar16 != -0x731be2a73c015b78) && (lVar16 != -0x69251bd9901e9766))
              goto LAB_0189a394;
            }
            else if (lVar16 != -0x3ac787cc1be1861d) {
              lVar15 = -0x2b8f3946dfbe22df;
              goto LAB_0189b1b0;
            }
          }
          else if (lVar16 < 0x53292426d9e57330) {
            if ((lVar16 != 0xbad51c2e071c243) && (lVar16 != 0x4263eaecff2f1858)) goto LAB_0189a394;
          }
          else if ((lVar16 != 0x53292426d9e57330) && (lVar16 != 0x695355b30d47091c)) {
            lVar15 = 0x7f2c45d58c0fc993;
LAB_0189b1b0:
            if (lVar16 != lVar15) goto LAB_0189a394;
          }
        }
        else if ((int)local_108 != 1) goto LAB_0189a394;
LAB_0189a4d4:
        local_1e8 = &DAT_cbf29ce484222645;
        FUN_0189b3c0(local_a0,local_90,1,0);
        uVar22 = uVar22 & 0xffffffff;
        if (((lVar16 != -0x731be2a73c015b78) && (lVar16 != -0x66d38bab2c9b4101)) &&
           (lVar16 != 0x4263eaecff2f1858)) goto LAB_0189a530;
        FUN_00fff1a4(&local_198,lVar25,param_1);
        puVar8 = PTR_s_EnableDisplacementMap_047e0e98;
        sVar13 = strlen(PTR_s_EnableDisplacementMap_047e0e98);
        puVar7 = PTR_s_PokemonEffect_047e0e90;
        lVar15 = local_198[0x11] + uVar22 * 0x108;
        plVar12 = *(long **)(lVar15 + 0x80);
        plVar20 = *(long **)(lVar15 + 0x88);
        if (plVar12 == plVar20) goto LAB_0189b140;
        pcVar23 = "";
        goto LAB_0189ae28;
      }
      plVar20 = local_a0 + 5;
      do {
        lVar15 = *plVar20;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar9) {
          *(int *)plVar20 = (int)lVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      local_108 = (long *)CONCAT44(local_108._4_4_,1);
      if ((*(long *)(local_a0[0x15] + 0xf8) == 0) ||
         (plVar10 = (long *)(*(long *)(local_a0[0x15] + 0xf8) + 0x30),
         uVar11 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_108,puVar7), (uVar11 & 1) == 0)) {
        bVar9 = lVar16 == -0x2b8f3946dfbe22df ||
                (lVar16 == -0x69251bd9901e9766 ||
                (lVar16 == 0x4263eaecff2f1858 ||
                (lVar16 == 0x7f2c45d58c0fc993 ||
                (lVar16 == -0x3ac787cc1be1861d ||
                (lVar16 == 0xbad51c2e071c243 ||
                (lVar16 == 0x695355b30d47091c ||
                (lVar16 == -0x731be2a73c015b78 || lVar16 == 0x53292426d9e57330)))))));
      }
      else {
        bVar9 = (int)local_108 == 1;
      }
      do {
        lVar15 = *plVar20;
        iVar6 = (int)lVar15 + -1;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar14) {
          *(int *)plVar20 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
      else if ((int)lVar15 == 0) goto LAB_0189aaa4;
      if (bVar9) goto LAB_0189a4d4;
LAB_0189a394:
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 0x20))();
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < ((ulong)(local_a0[0x27] - local_a0[0x26]) >> 5 & 0xffffffff));
  }
LAB_0189a9f8:
  if (local_a0 != (long *)0x0) {
    plVar17 = local_a0 + 5;
    do {
      lVar16 = *plVar17;
      iVar6 = (int)lVar16 + -1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar9) {
        *(int *)plVar17 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_0189aaa4;
  }
  if (local_98 == (long *)0x0) {
LAB_0189aa40:
    if (local_90[0] != '\0') {
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_90[0] = '\0';
    }
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x20) + 0x18))((long *)(lVar25 + 0x20));
    }
    return;
  }
  plVar17 = local_98 + 5;
  do {
    lVar16 = *plVar17;
    iVar6 = (int)lVar16 + -1;
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar9) {
      *(int *)plVar17 = iVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*local_98 + 0x10))();
    goto LAB_0189aa40;
  }
  if ((int)lVar16 != 0) goto LAB_0189aa40;
  goto LAB_0189aaa4;
  while (plVar12 = plVar12 + 9, plVar20 != plVar12) {
LAB_0189ae28:
    if (*plVar12 == -0x1cb824148fc8250f) goto LAB_0189b140;
  }
  uVar24 = 0;
  plVar20 = (long *)0x0;
  lVar15 = 0;
  puVar18 = &DAT_cbf29ce484222645;
LAB_0189ae5c:
  if (*pcVar23 != '\0') {
    local_108 = (long *)0xe347dbeb7037daf1;
    puStack_100 = puVar8;
    local_f0 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_f8 = sVar13;
    local_e8 = puVar18;
    pcStack_e0 = pcVar23;
    local_d8 = lVar15;
    plVar12 = plVar20;
    if ((plVar20 != (long *)0x0) &&
       ((**(code **)(*plVar20 + 0x18))(plVar20), local_d0 != (long *)0x0)) {
      lVar15 = *local_d0;
      local_d0 = plVar20;
      (**(code **)(lVar15 + 0x20))();
      plVar12 = local_d0;
    }
    local_d0 = plVar12;
    local_c8 = CONCAT44(local_c8._4_4_,uVar24);
    local_150 = (long *)0x9e769bd637c8e153;
    local_140 = (long *)0x1f;
    local_138 = (long *)0x0;
    local_148 = (long *)puVar7;
    FUN_01086da0(local_a0,&local_150,&local_108);
    if (local_138 != (long *)0x0) {
      (**(code **)(*local_138 + 0x20))();
    }
    local_150 = (long *)0x9e769bd637c8e153;
    local_140 = (long *)0x1f;
    local_138 = (long *)0x0;
    local_148 = (long *)puVar7;
    FUN_0189bc2c(local_a0,3,&local_150);
    if (local_138 != (long *)0x0) {
      (**(code **)(*local_138 + 0x20))();
    }
    FUN_010f7c04(local_a0);
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  if (local_198 != (long *)0x0) {
    plVar12 = local_198 + 5;
    do {
      lVar15 = *plVar12;
      iVar6 = (int)lVar15 + -1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *(int *)plVar12 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_198 + 0x10))();
    }
    else if ((int)lVar15 == 0) {
LAB_0189aaa4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
LAB_0189a530:
  FUN_00fff1a4(&local_a8,lVar25,param_1);
  local_f8 = 0x1f;
  local_f0 = (long *)0x5996d620892f9535;
  local_108 = (long *)0x117a069512dbe407;
  puStack_100 = PTR_s_NumMaterialLayer_047e0e78;
  local_e8 = PTR_s_NumRequiredUV_047e0e80;
  pcStack_e0 = (char *)0x1f;
  pplVar21 = &local_108;
  local_d8 = 0x81bb44b0523fabc;
  local_d0 = (long *)PTR_s_EnableLayerMaskUVTransform_047e0e88;
  local_c8 = 0x1f;
  uStack_c0 = 0xe44610be94c6c93e;
  local_b8 = "EnableAlphaTest";
  uStack_b0 = 0x1f;
  do {
    plVar12 = *pplVar21;
    plVar20 = pplVar21[1];
    lVar15 = local_a8[0x11] + uVar22 * 0x108;
    puVar26 = *(undefined8 **)(lVar15 + 0x80);
    puVar3 = *(undefined8 **)(lVar15 + 0x88);
    plVar10 = pplVar21[2];
    if (puVar26 == puVar3) {
LAB_0189a6d8:
      if (puVar26 == puVar3) goto LAB_0189a614;
      puVar18 = (undefined1 *)puVar26[4];
      pcVar23 = (char *)puVar26[5];
      uVar27 = puVar26[6];
      plVar19 = (long *)puVar26[7];
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
      uVar24 = *(undefined4 *)(puVar26 + 8);
    }
    else {
      do {
        if ((long *)*puVar26 == plVar12) goto LAB_0189a6d8;
        puVar26 = puVar26 + 9;
      } while (puVar3 != puVar26);
LAB_0189a614:
      uVar24 = 0;
      plVar19 = (long *)0x0;
      uVar27 = 0;
      puVar18 = &DAT_cbf29ce484222645;
      pcVar23 = "";
    }
    if (*pcVar23 != '\0') {
      local_138 = (long *)0x0;
      local_118 = (long *)0x0;
      local_150 = plVar12;
      local_148 = plVar20;
      local_140 = plVar10;
      local_130 = puVar18;
      pcStack_128 = pcVar23;
      local_120 = uVar27;
      plVar12 = plVar19;
      if ((plVar19 != (long *)0x0) &&
         ((**(code **)(*plVar19 + 0x18))(plVar19), local_118 != (long *)0x0)) {
        lVar15 = *local_118;
        local_118 = plVar19;
        (**(code **)(lVar15 + 0x20))();
        plVar12 = local_118;
      }
      local_118 = plVar12;
      local_198 = (long *)0x9e769bd637c8e153;
      local_180 = (long *)0x0;
      local_190 = PTR_s_PokemonEffect_047e0e90;
      local_188 = 0x1f;
      local_110 = uVar24;
      FUN_01086da0(local_a0,&local_198,&local_150);
      if (local_180 != (long *)0x0) {
        (**(code **)(*local_180 + 0x20))();
      }
      FUN_010f7c04(local_a0);
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
    }
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
    plVar12 = local_a0;
    pplVar21 = pplVar21 + 3;
  } while (pplVar21 != &local_a8);
  plVar20 = local_a0 + 0x36;
  lVar15 = nn::os::GetCurrentThread();
LAB_0189a768:
  if (*plVar20 == 0 && plVar12[0x37] == 0) goto code_r0x0189a774;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x38));
  do {
    if (*plVar20 != 0 || plVar12[0x37] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x38));
        while (*plVar20 == 0 && plVar12[0x37] == 0) {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar15;
            plVar12[0x37] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0189a77c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar9) {
      *plVar20 = lVar15;
      plVar12[0x37] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0189a77c:
  for (plVar10 = (long *)plVar12[0x1e]; plVar10 != (long *)plVar12[0x1f]; plVar10 = plVar10 + 7) {
    if (plVar10[2] == lVar16) {
      bVar9 = false;
      pcVar23 = (char *)(ulong)*(uint *)(*(long *)(*plVar10 + 0x88) +
                                         (ulong)*(uint *)(plVar10 + 1) * 0x108 + 0xe8);
      goto LAB_0189a7c4;
    }
  }
  bVar9 = true;
LAB_0189a7c4:
  do {
    lVar15 = *plVar20;
    lVar4 = plVar12[0x37];
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar14) {
      *plVar20 = lVar15;
      plVar12[0x37] = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar1 = *plVar20;
    lVar2 = plVar12[0x37];
    if (lVar1 != lVar15 || lVar2 != lVar4) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_0189a84c;
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar14) {
      *plVar20 = 0;
      *(long *)((long)plVar12 + 0x1b4) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar14 = true;
LAB_0189a84c:
  if (!bVar14) {
    do {
      lVar15 = *plVar20;
      lVar4 = plVar12[0x37];
      if (lVar15 != lVar1 || lVar4 != lVar2) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto joined_r0x0189b2cc;
      }
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar14) {
        *plVar20 = 0;
        *(long *)((long)plVar12 + 0x1b4) = lVar2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar14 = true;
joined_r0x0189b2cc:
    if (!bVar14) {
      do {
        lVar1 = *plVar20;
        lVar2 = plVar12[0x37];
        if (lVar1 != lVar15 || lVar2 != lVar4) {
          bVar14 = false;
          ClearExclusiveLocal();
          lVar15 = lVar1;
          lVar4 = lVar2;
          goto joined_r0x0189b2cc;
        }
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar14) {
          *plVar20 = 0;
          *(long *)((long)plVar12 + 0x1b4) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar14 = true;
      lVar15 = lVar1;
      lVar4 = lVar2;
      goto joined_r0x0189b2cc;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x38));
  plVar12 = local_a0;
  if (bVar9) {
LAB_0189a9a4:
    puVar7 = PTR_s_PokemonEffect_047e0e90;
    local_150 = (long *)0x9e769bd637c8e153;
    local_148 = (long *)PTR_s_PokemonEffect_047e0e90;
    local_140 = (long *)0x1f;
    local_138 = (long *)0x0;
    FUN_010f7f40(local_a0,0,&local_150);
    if (local_138 != (long *)0x0) {
      (**(code **)(*local_138 + 0x20))();
    }
    if (lVar16 == -0x69251bd9901e9766) {
      local_150 = (long *)0x939d13aa08ce11aa;
      local_148 = (long *)0x3c723bb;
      local_140 = (long *)0x5;
      local_138 = (long *)0x0;
      local_130 = (undefined1 *)0xf644afd9efa28ae5;
      pcStack_128 = "True";
      local_120 = 4;
      local_118 = (long *)0x0;
      local_110 = 1;
      lVar16 = local_a8[0x11] + uVar22 * 0x108;
      plVar12 = *(long **)(lVar16 + 0x80);
      plVar20 = *(long **)(lVar16 + 0x88);
      if (plVar12 == plVar20) {
LAB_0189ada8:
        if (plVar12 == plVar20) {
          lVar16 = 0;
          plVar20 = (long *)0x0;
          uVar24 = 0;
          puVar18 = &DAT_03c886bc;
        }
        else {
          local_1e8 = (undefined1 *)plVar12[4];
          puVar18 = (undefined1 *)plVar12[5];
          lVar16 = plVar12[6];
          plVar20 = (long *)plVar12[7];
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x18))(plVar20);
          }
          uVar24 = (undefined4)plVar12[8];
        }
      }
      else {
        puVar18 = &DAT_03c886bc;
        do {
          if (*plVar12 == -0x31e6f7037ec645e9) goto LAB_0189ada8;
          plVar12 = plVar12 + 9;
        } while (plVar20 != plVar12);
        lVar16 = 0;
        plVar20 = (long *)0x0;
        uVar24 = 0;
      }
      local_198 = (long *)0xce1908fc8139ba17;
      local_190 = "EyelidType";
      local_188 = 10;
      local_180 = (long *)0x0;
      local_160 = (long *)0x0;
      local_178 = local_1e8;
      puStack_170 = puVar18;
      local_168 = lVar16;
      plVar12 = plVar20;
      if ((plVar20 != (long *)0x0) &&
         ((**(code **)(*plVar20 + 0x18))(plVar20), local_160 != (long *)0x0)) {
        lVar16 = *local_160;
        local_160 = plVar20;
        (**(code **)(lVar16 + 0x20))();
        plVar12 = local_160;
      }
      local_160 = plVar12;
      local_1b8 = 0x9e769bd637c8e153;
      puStack_1b0 = puVar7;
      local_1a8 = 0x1f;
      local_1a0 = (long *)0x0;
      local_158 = uVar24;
      FUN_01086da0(local_a0,&local_1b8,&local_198);
      if (local_1a0 != (long *)0x0) {
        (**(code **)(*local_1a0 + 0x20))();
      }
      local_1b8 = 0x9e769bd637c8e153;
      puStack_1b0 = puVar7;
      local_1a8 = 0x1f;
      local_1a0 = (long *)0x0;
      FUN_01086da0(local_a0,&local_1b8,&local_150);
      if (local_1a0 != (long *)0x0) {
        (**(code **)(*local_1a0 + 0x20))();
      }
      FUN_010f7c04(local_a0);
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
      if (local_180 != (long *)0x0) {
        (**(code **)(*local_180 + 0x20))();
      }
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
    }
    if (local_a8 != (long *)0x0) {
      plVar12 = local_a8 + 5;
      do {
        lVar16 = *plVar12;
        iVar6 = (int)lVar16 + -1;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar9) {
          *(int *)plVar12 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      else if ((int)lVar16 == 0) goto LAB_0189aaa4;
    }
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
    goto LAB_0189a9f8;
  }
  plVar20 = local_a0 + 0x36;
  lVar15 = nn::os::GetCurrentThread();
  while (*plVar20 == 0 && plVar12[0x37] == 0) {
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar9) {
      *plVar20 = lVar15;
      plVar12[0x37] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0189a884;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x38));
  do {
    if (*plVar20 != 0 || plVar12[0x37] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar12 + 0x38));
        while (*plVar20 == 0 && plVar12[0x37] == 0) {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar9) {
            *plVar20 = lVar15;
            plVar12[0x37] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0189a884;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar9) {
      *plVar20 = lVar15;
      plVar12[0x37] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0189a884:
  plVar10 = (long *)plVar12[0x1e];
  plVar19 = (long *)plVar12[0x1f];
  if (plVar10 != plVar19) {
    uVar24 = SUB84(pcVar23,0);
    if (plVar10[2] == -0x61896429c8371ead) {
      *(undefined4 *)(*(long *)(*plVar10 + 0x88) + (ulong)*(uint *)(plVar10 + 1) * 0x108 + 0xe8) =
           uVar24;
      *(undefined1 *)((long)plVar12 + 0x1a7) = 1;
    }
    if (plVar10 + 7 != plVar19) {
      if (plVar10[9] == -0x61896429c8371ead) {
        *(undefined4 *)(*(long *)(plVar10[7] + 0x88) + (ulong)*(uint *)(plVar10 + 8) * 0x108 + 0xe8)
             = uVar24;
        *(undefined1 *)((long)plVar12 + 0x1a7) = 1;
      }
      if (plVar10 + 0xe != plVar19) {
        if (plVar10[0x10] == -0x61896429c8371ead) {
          *(undefined4 *)
           (*(long *)(plVar10[0xe] + 0x88) + (ulong)*(uint *)(plVar10 + 0xf) * 0x108 + 0xe8) =
               uVar24;
          *(undefined1 *)((long)plVar12 + 0x1a7) = 1;
        }
        if (plVar10 + 0x15 != plVar19) {
          if (plVar10[0x17] == -0x61896429c8371ead) {
            *(undefined4 *)
             (*(long *)(plVar10[0x15] + 0x88) + (ulong)*(uint *)(plVar10 + 0x16) * 0x108 + 0xe8) =
                 uVar24;
            *(undefined1 *)((long)plVar12 + 0x1a7) = 1;
          }
          if (plVar10 + 0x1c != plVar19) {
            if (plVar10[0x1e] == -0x61896429c8371ead) {
              *(undefined4 *)
               (*(long *)(plVar10[0x1c] + 0x88) + (ulong)*(uint *)(plVar10 + 0x1d) * 0x108 + 0xe8) =
                   uVar24;
              *(undefined1 *)((long)plVar12 + 0x1a7) = 1;
            }
            for (plVar10 = plVar10 + 0x23; plVar10 != plVar19; plVar10 = plVar10 + 7) {
              if (plVar10[2] == -0x61896429c8371ead) {
                *(undefined4 *)
                 (*(long *)(*plVar10 + 0x88) + (ulong)*(uint *)(plVar10 + 1) * 0x108 + 0xe8) =
                     uVar24;
                *(undefined1 *)((long)plVar12 + 0x1a7) = 1;
              }
            }
          }
        }
      }
    }
  }
  do {
    lVar15 = *plVar20;
    lVar4 = plVar12[0x37];
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar9) {
      *plVar20 = lVar15;
      plVar12[0x37] = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar1 = *plVar20;
    lVar2 = plVar12[0x37];
    if (lVar1 != lVar15 || lVar2 != lVar4) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_0189a990;
    }
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar9) {
      *plVar20 = 0;
      *(long *)((long)plVar12 + 0x1b4) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar9 = true;
LAB_0189a990:
  if (!bVar9) {
    do {
      lVar15 = *plVar20;
      lVar4 = plVar12[0x37];
      if (lVar15 != lVar1 || lVar4 != lVar2) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x0189b340;
      }
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar9) {
        *plVar20 = 0;
        *(long *)((long)plVar12 + 0x1b4) = lVar2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar9 = true;
joined_r0x0189b340:
    if (!bVar9) {
      do {
        lVar1 = *plVar20;
        lVar2 = plVar12[0x37];
        if (lVar1 != lVar15 || lVar2 != lVar4) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar15 = lVar1;
          lVar4 = lVar2;
          goto joined_r0x0189b340;
        }
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar9) {
          *plVar20 = 0;
          *(long *)((long)plVar12 + 0x1b4) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar9 = true;
      lVar15 = lVar1;
      lVar4 = lVar2;
      goto joined_r0x0189b340;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(plVar12 + 0x38));
  FUN_00eaabc4(local_a0);
  goto LAB_0189a9a4;
LAB_0189b140:
  if (plVar12 == plVar20) {
    uVar24 = 0;
    plVar20 = (long *)0x0;
    lVar15 = 0;
    puVar18 = &DAT_cbf29ce484222645;
    pcVar23 = "";
  }
  else {
    puVar18 = (undefined1 *)plVar12[4];
    pcVar23 = (char *)plVar12[5];
    lVar15 = plVar12[6];
    plVar20 = (long *)plVar12[7];
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
    uVar24 = (undefined4)plVar12[8];
  }
  goto LAB_0189ae5c;
code_r0x0189a774:
  cVar5 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar9) {
    *plVar20 = lVar15;
    plVar12[0x37] = 0;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_0189a77c;
  goto LAB_0189a768;
}


