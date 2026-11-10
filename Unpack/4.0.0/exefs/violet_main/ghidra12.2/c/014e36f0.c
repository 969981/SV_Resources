/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e36f0; name: FUN_014e36f0
 */


void FUN_014e36f0(long param_1,long param_2,int param_3)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  char cVar10;
  short sVar11;
  undefined2 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long *plVar21;
  byte bVar22;
  code *pcVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  undefined4 uVar28;
  long *local_140;
  long local_138;
  long lStack_130;
  long local_128;
  long *local_120;
  long *local_118;
  long local_110;
  long lStack_108;
  long local_100;
  long *local_f8;
  long *local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long *local_b0;
  long *local_a8;
  undefined *local_a0;
  long local_98;
  long *local_90;
  
  puVar3 = PTR_DAT_047d4240;
  if (((*PTR_DAT_047d4240 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar16 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar5 = PTR_DAT_047d4250;
  puVar4 = PTR_DAT_047d4248;
  uVar17 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar17;
  FUN_00cf9884(&local_a8,uVar17,"L_base_temochi");
  plVar1 = local_a8;
  if (*(int *)(param_1 + 0x298) == 2) {
    if (((*puVar3 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar17 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar17;
    FUN_00cf9884(&local_a8,uVar17,"L_icon_team");
    plVar24 = local_a8;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  else {
    plVar24 = local_a8;
  }
  plVar25 = (long *)PTR_PTR_047d4508;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar24 != (long *)0x0) {
    plVar1 = plVar24 + 7;
  }
  snprintf((char *)&local_a8,0x40,"%s_%02d/T_poke_lv_00",(char *)*plVar1,param_3);
  FUN_01343c78(&local_f0,&local_a8);
  plVar6 = local_f0;
  snprintf((char *)&local_a8,0x40,"%s_%02d/T_name_poke_00",(char *)*plVar1,param_3);
  FUN_01343c78(&local_f0,&local_a8);
  plVar7 = local_f0;
  snprintf((char *)&local_a8,0x40,"%s_%02d/L_gender_00",(char *)*plVar1,param_3);
  FUN_01343c78(&local_f0,&local_a8);
  plVar8 = local_f0;
  snprintf((char *)&local_a8,0x40,"%s_%02d/L_gender_00/pattern_seibetsu",(char *)*plVar1,param_3);
  FUN_01343c78(&local_f0,&local_a8);
  plVar9 = local_f0;
  snprintf((char *)&local_a8,0x40,"%s_%02d/P_lv_base_00",(char *)*plVar1,param_3);
  FUN_01343c78(&local_f0,&local_a8);
  plVar1 = local_f0;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  if (param_2 == 0) {
LAB_014e4270:
    plVar24 = *(long **)(param_1 + 0x30);
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x58))(plVar24);
    }
    plVar25 = (long *)PTR_DAT_047d8b70;
    local_a8 = (long *)PTR_DAT_047d8b70;
    if (plVar6 != (long *)0x0) {
      local_a8 = plVar6 + 6;
    }
    local_a8 = (long *)*local_a8;
    plVar26 = (long *)PTR_PTR_047d4508;
    if (plVar6 != (long *)0x0) {
      plVar26 = plVar6 + 7;
    }
    local_a0 = (undefined *)*plVar26;
    if (plVar6 == (long *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = plVar6[8];
    }
    local_90 = (long *)0x0;
    if (plVar6 == (long *)0x0) {
      plVar26 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar26 = plVar6;
    }
    local_90 = plVar26;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x58))(plVar24);
      lVar18 = FUN_00c8c7b4(plVar24[0x2e],&local_a8);
      (**(code **)(*plVar24 + 0x60))(plVar24);
      if (lVar18 != 0) {
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
      }
    }
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x60))(plVar24);
    }
    plVar24 = *(long **)(param_1 + 0x30);
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x58))(plVar24);
    }
    local_a8 = plVar25;
    if (plVar7 != (long *)0x0) {
      local_a8 = plVar7 + 6;
    }
    local_a8 = (long *)*local_a8;
    plVar26 = (long *)PTR_PTR_047d4508;
    if (plVar7 != (long *)0x0) {
      plVar26 = plVar7 + 7;
    }
    local_a0 = (undefined *)*plVar26;
    if (plVar7 == (long *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = plVar7[8];
    }
    local_90 = (long *)0x0;
    if (plVar7 == (long *)0x0) {
      plVar26 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      plVar26 = plVar7;
    }
    local_90 = plVar26;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x58))(plVar24);
      lVar18 = FUN_00c8c7b4(plVar24[0x2e],&local_a8);
      (**(code **)(*plVar24 + 0x60))(plVar24);
      if (lVar18 != 0) {
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
      }
    }
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x60))(plVar24);
    }
    plVar24 = *(long **)(param_1 + 0x30);
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x58))(plVar24);
    }
    local_a8 = plVar25;
    if (plVar8 != (long *)0x0) {
      local_a8 = plVar8 + 6;
    }
    local_a8 = (long *)*local_a8;
    plVar26 = (long *)PTR_PTR_047d4508;
    if (plVar8 != (long *)0x0) {
      plVar26 = plVar8 + 7;
    }
    local_a0 = (undefined *)*plVar26;
    if (plVar8 == (long *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = plVar8[8];
    }
    local_90 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      plVar26 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      plVar26 = plVar8;
    }
    local_90 = plVar26;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x58))(plVar24);
      lVar18 = FUN_00c8c7b4(plVar24[0x2e],&local_a8);
      (**(code **)(*plVar24 + 0x60))(plVar24);
      if (lVar18 != 0) {
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
      }
    }
    if (plVar26 != (long *)0x0) {
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x60))(plVar24);
    }
    plVar24 = *(long **)(param_1 + 0x30);
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x58))(plVar24);
    }
    if (plVar1 != (long *)0x0) {
      plVar25 = plVar1 + 6;
    }
    local_a8 = (long *)*plVar25;
    plVar25 = (long *)PTR_PTR_047d4508;
    if (plVar1 != (long *)0x0) {
      plVar25 = plVar1 + 7;
    }
    local_a0 = (undefined *)*plVar25;
    if (plVar1 == (long *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = plVar1[8];
    }
    local_90 = (long *)0x0;
    if (plVar1 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      plVar25 = plVar1;
    }
    local_90 = plVar25;
    if (plVar24 == (long *)0x0) goto LAB_014e3ef0;
    (**(code **)(*plVar24 + 0x58))(plVar24);
    lVar18 = FUN_00c8c7b4(plVar24[0x2e],&local_a8);
    (**(code **)(*plVar24 + 0x60))(plVar24);
    if (lVar18 == 0) goto LAB_014e3ef0;
    bVar22 = *(byte *)(lVar18 + 0x58) & 0xfe;
  }
  else {
    lVar18 = *(long *)(param_2 + 0x70);
    if ((*(byte *)(*(long *)(lVar18 + 0x10) + 4) >> 2 & 1) == 0) {
      sVar11 = FUN_00cf44f4();
      if (sVar11 == 0) goto LAB_014e4270;
      lVar18 = *(long *)(param_2 + 0x70);
    }
    uVar19 = FUN_00cf4cfc(lVar18);
    if (((uVar19 & 1) == 0) &&
       ((*(ushort *)(*(long *)(*(long *)(param_2 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
      uVar17 = *(undefined8 *)(param_1 + 0x1c0);
      if (*(long *)(*(long *)(param_2 + 0x70) + 8) == 0) {
        uVar28 = FUN_00cf44f4();
        uVar14 = FUN_00cf41a8(*(undefined8 *)(param_2 + 0x70));
        uVar15 = FUN_00f14b64(*(undefined8 *)(param_2 + 0x70));
        plVar25 = (long *)PTR_PTR_047d4508;
        uVar13 = FUN_00f13da0(uVar28,uVar14,uVar15);
        uVar13 = uVar13 & 0xff;
      }
      else {
        uVar13 = FUN_00e9987c();
      }
      FUN_011b6a88(uVar17,0,uVar13,3,0,1);
      plVar24 = (long *)PTR_DAT_047d8b70;
      if (plVar6 != (long *)0x0) {
        plVar25 = plVar6 + 7;
        plVar24 = plVar6 + 6;
      }
      local_110 = *plVar24;
      lStack_108 = *plVar25;
      if (plVar6 == (long *)0x0) {
        local_100 = 0;
      }
      else {
        local_100 = plVar6[8];
      }
      local_f8 = (long *)0x0;
      plVar26 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar26 = plVar6;
      }
      local_90 = (long *)0x0;
      local_a8 = (long *)&DAT_e6b50e272d8cd992;
      local_d8 = (long *)0x0;
      local_a0 = &DAT_03c3b7e8;
      local_98 = 3;
      local_e8 = "msg_ui_box_lv_00";
      local_e0 = 0x10;
      local_f0 = (long *)0xc8f858d01388e617;
      local_f8 = plVar26;
      FUN_00f11e84(&local_118,&local_a8,&local_f0);
      FUN_014e4b9c(param_1,&local_110,&local_118);
      if (local_118 != (long *)0x0) {
        plVar26 = local_118 + 5;
        do {
          lVar18 = *plVar26;
          iVar16 = (int)lVar18 + -1;
          cVar10 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar2) {
            *(int *)plVar26 = iVar16;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_118 + 0x10))();
        }
        else if ((int)lVar18 == 0) goto LAB_014e3cb8;
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x20))();
      }
      plVar26 = *(long **)(param_1 + 0x30);
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x58))(plVar26);
      }
      local_a8 = (long *)*plVar24;
      local_a0 = (undefined *)*plVar25;
      if (plVar6 == (long *)0x0) {
        local_98 = 0;
      }
      else {
        local_98 = plVar6[8];
      }
      local_90 = (long *)0x0;
      if (plVar6 == (long *)0x0) {
        plVar24 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar24 = plVar6;
      }
      local_90 = plVar24;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x58))(plVar26);
        lVar18 = FUN_00c8c7b4(plVar26[0x2e],&local_a8);
        (**(code **)(*plVar26 + 0x60))(plVar26);
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
        }
      }
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x20))(plVar24);
      }
      plVar24 = (long *)PTR_PTR_047d4508;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x60))(plVar26);
      }
      plVar26 = *(long **)(param_1 + 0x30);
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x58))(plVar26);
      }
      local_a8 = (long *)PTR_DAT_047d8b70;
      if (plVar1 != (long *)0x0) {
        plVar24 = plVar1 + 7;
        local_a8 = plVar1 + 6;
      }
      local_a8 = (long *)*local_a8;
      local_a0 = (undefined *)*plVar24;
      if (plVar1 == (long *)0x0) {
        local_98 = 0;
      }
      else {
        local_98 = plVar1[8];
      }
      local_90 = (long *)0x0;
      if (plVar1 == (long *)0x0) {
        plVar24 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        plVar24 = plVar1;
      }
      local_90 = plVar24;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x58))(plVar26);
        lVar18 = FUN_00c8c7b4(plVar26[0x2e],&local_a8);
        (**(code **)(*plVar26 + 0x60))(plVar26);
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
        }
      }
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x20))(plVar24);
      }
      plVar25 = (long *)PTR_PTR_047d4508;
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x60))(plVar26);
      }
      FUN_014c0fb4(*(undefined8 *)(param_1 + 0x1c0),0,param_2);
      plVar24 = plVar25;
      plVar26 = (long *)PTR_DAT_047d8b70;
      if (plVar7 != (long *)0x0) {
        plVar24 = plVar7 + 7;
        plVar26 = plVar7 + 6;
      }
      local_138 = *plVar26;
      lStack_130 = *plVar24;
      if (plVar7 == (long *)0x0) {
        local_128 = 0;
      }
      else {
        local_128 = plVar7[8];
      }
      local_120 = (long *)0x0;
      plVar24 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        plVar24 = plVar7;
      }
      local_a8 = (long *)&DAT_e6b50e272d8cd992;
      local_90 = (long *)0x0;
      local_a0 = &DAT_03c3b7e8;
      local_98 = 3;
      local_f0 = (long *)0xf3a3439af010602;
      local_e8 = "msg_ui_box_pokename";
      local_e0 = 0x13;
      local_d8 = (long *)0x0;
      local_120 = plVar24;
      FUN_00f11e84(&local_140,&local_a8,&local_f0);
      FUN_014e4b9c(param_1,&local_138,&local_140);
      if (local_140 != (long *)0x0) {
        plVar24 = local_140 + 5;
        do {
          lVar18 = *plVar24;
          iVar16 = (int)lVar18 + -1;
          cVar10 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar2) {
            *(int *)plVar24 = iVar16;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_140 + 0x10))();
        }
        else if ((int)lVar18 == 0) {
LAB_014e3cb8:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      cVar10 = FUN_00cec030(*(undefined8 *)(param_2 + 0x70));
      plVar26 = plVar8;
      if (cVar10 == '\0') {
        plVar24 = *(long **)(param_1 + 0x30);
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x58))(plVar24);
        }
        plVar21 = plVar25;
        local_a8 = (long *)PTR_DAT_047d8b70;
        if (plVar9 != (long *)0x0) {
          plVar21 = plVar9 + 7;
          local_a8 = plVar9 + 6;
        }
        local_a8 = (long *)*local_a8;
        local_a0 = (undefined *)*plVar21;
        if (plVar9 == (long *)0x0) {
          local_98 = 0;
        }
        else {
          local_98 = plVar9[8];
        }
        local_90 = (long *)0x0;
        plVar21 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
          plVar21 = plVar9;
        }
        local_90 = plVar21;
        if ((plVar24 != (long *)0x0) &&
           (puVar20 = (undefined8 *)FUN_00e895f4(plVar24[0x2e],&local_a8),
           puVar20 != (undefined8 *)0x0)) {
          (**(code **)(*(long *)*puVar20 + 0x20))((long *)*puVar20,1);
          plVar21 = (long *)*puVar20;
          uVar28 = 0;
LAB_014e3d70:
          (**(code **)(*plVar21 + 0xd0))(uVar28);
          *(undefined1 *)((long)puVar20 + 0x31) = 0;
          if ((undefined1 *)puVar20[7] != (undefined1 *)0x0) {
            *(undefined1 *)puVar20[7] = 1;
          }
        }
LAB_014e3d8c:
        if (local_90 != (long *)0x0) {
          (**(code **)(*local_90 + 0x20))();
        }
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x60))(plVar24);
        }
        plVar24 = *(long **)(param_1 + 0x30);
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x58))(plVar24);
        }
        plVar21 = plVar25;
        local_a8 = (long *)PTR_DAT_047d8b70;
        if (plVar8 != (long *)0x0) {
          plVar21 = plVar8 + 7;
          local_a8 = plVar8 + 6;
        }
        local_a8 = (long *)*local_a8;
        local_a0 = (undefined *)*plVar21;
        if (plVar8 == (long *)0x0) {
          local_98 = 0;
        }
        else {
          local_98 = plVar8[8];
        }
        local_90 = (long *)0x0;
        if (plVar8 == (long *)0x0) {
          plVar26 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        local_90 = plVar26;
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x58))(plVar24);
          lVar18 = FUN_00c8c7b4(plVar24[0x2e],&local_a8);
          (**(code **)(*plVar24 + 0x60))(plVar24);
          if (lVar18 != 0) {
            bVar22 = *(byte *)(lVar18 + 0x58) | 1;
LAB_014e3e44:
            *(byte *)(lVar18 + 0x58) = bVar22;
          }
        }
      }
      else {
        if (cVar10 == '\x01') {
          plVar24 = *(long **)(param_1 + 0x30);
          if (plVar24 != (long *)0x0) {
            (**(code **)(*plVar24 + 0x58))(plVar24);
          }
          plVar21 = plVar25;
          local_a8 = (long *)PTR_DAT_047d8b70;
          if (plVar9 != (long *)0x0) {
            plVar21 = plVar9 + 7;
            local_a8 = plVar9 + 6;
          }
          local_a8 = (long *)*local_a8;
          local_a0 = (undefined *)*plVar21;
          if (plVar9 == (long *)0x0) {
            local_98 = 0;
          }
          else {
            local_98 = plVar9[8];
          }
          local_90 = (long *)0x0;
          plVar21 = (long *)0x0;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))(plVar9);
            plVar21 = plVar9;
          }
          local_90 = plVar21;
          if ((plVar24 != (long *)0x0) &&
             (puVar20 = (undefined8 *)FUN_00e895f4(plVar24[0x2e],&local_a8),
             puVar20 != (undefined8 *)0x0)) {
            (**(code **)(*(long *)*puVar20 + 0x20))((long *)*puVar20,1);
            plVar21 = (long *)*puVar20;
            uVar28 = 0x3f800000;
            goto LAB_014e3d70;
          }
          goto LAB_014e3d8c;
        }
        if (cVar10 != '\x02') goto LAB_014e3e50;
        plVar24 = *(long **)(param_1 + 0x30);
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x58))(plVar24);
        }
        plVar21 = plVar25;
        local_a8 = (long *)PTR_DAT_047d8b70;
        if (plVar8 != (long *)0x0) {
          plVar21 = plVar8 + 7;
          local_a8 = plVar8 + 6;
        }
        local_a8 = (long *)*local_a8;
        local_a0 = (undefined *)*plVar21;
        if (plVar8 == (long *)0x0) {
          local_98 = 0;
        }
        else {
          local_98 = plVar8[8];
        }
        local_90 = (long *)0x0;
        if (plVar8 == (long *)0x0) {
          plVar26 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        local_90 = plVar26;
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x58))(plVar24);
          lVar18 = FUN_00c8c7b4(plVar24[0x2e],&local_a8);
          (**(code **)(*plVar24 + 0x60))(plVar24);
          if (lVar18 == 0) goto LAB_014e3e48;
          bVar22 = *(byte *)(lVar18 + 0x58) & 0xfe;
          goto LAB_014e3e44;
        }
      }
LAB_014e3e48:
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x20))(plVar26);
      }
      if (plVar24 != (long *)0x0) {
        pcVar23 = *(code **)(*plVar24 + 0x60);
LAB_014e3ff4:
        (*pcVar23)(plVar24);
      }
    }
    else {
      plVar24 = *(long **)(param_1 + 0x30);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x58))(plVar24);
      }
      plVar26 = plVar25;
      local_a8 = (long *)PTR_DAT_047d8b70;
      if (plVar6 != (long *)0x0) {
        plVar26 = plVar6 + 7;
        local_a8 = plVar6 + 6;
      }
      local_a8 = (long *)*local_a8;
      local_a0 = (undefined *)*plVar26;
      if (plVar6 == (long *)0x0) {
        local_98 = 0;
      }
      else {
        local_98 = plVar6[8];
      }
      local_90 = (long *)0x0;
      if (plVar6 == (long *)0x0) {
        plVar26 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar26 = plVar6;
      }
      local_90 = plVar26;
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x58))(plVar24);
        lVar18 = FUN_00c8c7b4(plVar24[0x2e],&local_a8);
        (**(code **)(*plVar24 + 0x60))(plVar24);
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
        }
      }
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x20))(plVar26);
      }
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x60))(plVar24);
      }
      plVar24 = *(long **)(param_1 + 0x30);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x58))(plVar24);
      }
      plVar26 = plVar25;
      local_a8 = (long *)PTR_DAT_047d8b70;
      if (plVar1 != (long *)0x0) {
        plVar26 = plVar1 + 7;
        local_a8 = plVar1 + 6;
      }
      local_a8 = (long *)*local_a8;
      local_a0 = (undefined *)*plVar26;
      if (plVar1 == (long *)0x0) {
        local_98 = 0;
      }
      else {
        local_98 = plVar1[8];
      }
      local_90 = (long *)0x0;
      if (plVar1 == (long *)0x0) {
        plVar26 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        plVar26 = plVar1;
      }
      local_90 = plVar26;
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x58))(plVar24);
        lVar18 = FUN_00c8c7b4(plVar24[0x2e],&local_a8);
        (**(code **)(*plVar24 + 0x60))(plVar24);
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
        }
      }
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x20))(plVar26);
      }
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x60))(plVar24);
      }
      plVar24 = *(long **)(param_1 + 0x30);
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x58))(plVar24);
      }
      plVar26 = plVar25;
      local_a8 = (long *)PTR_DAT_047d8b70;
      if (plVar8 != (long *)0x0) {
        plVar26 = plVar8 + 7;
        local_a8 = plVar8 + 6;
      }
      local_a8 = (long *)*local_a8;
      local_a0 = (undefined *)*plVar26;
      if (plVar8 == (long *)0x0) {
        local_98 = 0;
      }
      else {
        local_98 = plVar8[8];
      }
      local_90 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        plVar26 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar8 + 0x18))(plVar8);
        plVar26 = plVar8;
      }
      local_90 = plVar26;
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x58))(plVar24);
        lVar18 = FUN_00c8c7b4(plVar24[0x2e],&local_a8);
        (**(code **)(*plVar24 + 0x60))(plVar24);
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
        }
      }
      if (plVar26 != (long *)0x0) {
        (**(code **)(*plVar26 + 0x20))(plVar26);
      }
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x60))(plVar24);
      }
      plVar24 = *(long **)(param_1 + 0x1c0);
      uVar19 = (**(code **)(*plVar24 + 0x78))(plVar24,plVar24[8],0);
      if ((int)plVar24[0xb] != 0) {
        lVar18 = plVar24[8];
        *(ulong *)(plVar24[0xc] + 8) = uVar19 & 0xffff | 0x20000;
        plVar26 = (long *)plVar24[0xc];
        lVar27 = *plVar26;
        if (*(char *)(lVar27 + 0x54) != '\0') {
          uVar12 = FUN_011b8d00(*(undefined8 *)(lVar27 + 0x30),*(undefined8 *)(lVar18 + 0x30),
                                *(undefined2 *)(lVar27 + 0x50));
          *(undefined2 *)(lVar27 + 0x52) = uVar12;
          plVar26 = (long *)plVar24[0xc];
        }
        *(undefined2 *)(plVar26 + 2) = 0;
        *(ushort *)(plVar24[0xc] + 0x12) = *(ushort *)(plVar24[0xc] + 0x12) & 0xfffe;
      }
      plVar24 = plVar25;
      plVar26 = (long *)PTR_DAT_047d8b70;
      if (plVar7 != (long *)0x0) {
        plVar24 = plVar7 + 7;
        plVar26 = plVar7 + 6;
      }
      local_c8 = *plVar26;
      lStack_c0 = *plVar24;
      if (plVar7 == (long *)0x0) {
        local_b8 = 0;
      }
      else {
        local_b8 = plVar7[8];
      }
      local_b0 = (long *)0x0;
      plVar24 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
        plVar24 = plVar7;
      }
      local_90 = (long *)0x0;
      local_a8 = (long *)&DAT_e6b50e272d8cd992;
      local_a0 = &DAT_03c3b7e8;
      local_98 = 3;
      local_f0 = (long *)0xf3a3439af010602;
      local_e8 = "msg_ui_box_pokename";
      local_e0 = 0x13;
      local_d8 = (long *)0x0;
      local_b0 = plVar24;
      FUN_00f11e84(&local_d0,&local_a8,&local_f0);
      FUN_014e4b9c(param_1,&local_c8,&local_d0);
      if (local_d0 != (long *)0x0) {
        plVar24 = local_d0 + 5;
        do {
          lVar18 = *plVar24;
          iVar16 = (int)lVar18 + -1;
          cVar10 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar2) {
            *(int *)plVar24 = iVar16;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
        else if ((int)lVar18 == 0) goto LAB_014e3cb8;
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_b0 != (long *)0x0) {
        pcVar23 = *(code **)(*local_b0 + 0x20);
        plVar24 = local_b0;
        goto LAB_014e3ff4;
      }
    }
LAB_014e3e50:
    plVar24 = *(long **)(param_1 + 0x30);
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x58))(plVar24);
    }
    local_a8 = (long *)PTR_DAT_047d8b70;
    if (plVar7 != (long *)0x0) {
      plVar25 = plVar7 + 7;
      local_a8 = plVar7 + 6;
    }
    local_a8 = (long *)*local_a8;
    local_a0 = (undefined *)*plVar25;
    if (plVar7 == (long *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = plVar7[8];
    }
    local_90 = (long *)0x0;
    if (plVar7 == (long *)0x0) {
      plVar25 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      plVar25 = plVar7;
    }
    local_90 = plVar25;
    if (plVar24 == (long *)0x0) goto LAB_014e3ef0;
    (**(code **)(*plVar24 + 0x58))(plVar24);
    lVar18 = FUN_00c8c7b4(plVar24[0x2e],&local_a8);
    (**(code **)(*plVar24 + 0x60))(plVar24);
    if (lVar18 == 0) goto LAB_014e3ef0;
    bVar22 = *(byte *)(lVar18 + 0x58) | 1;
  }
  *(byte *)(lVar18 + 0x58) = bVar22;
LAB_014e3ef0:
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x60))(plVar24);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  return;
}


