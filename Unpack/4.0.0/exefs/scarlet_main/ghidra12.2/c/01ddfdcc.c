/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddfdcc; name: FUN_01ddfdcc
 */


ulong FUN_01ddfdcc(ulong param_1,int param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  byte *pbVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  byte bVar21;
  undefined1 *puVar22;
  long *local_168;
  undefined1 *local_160;
  int *piStack_158;
  undefined8 local_150;
  long *local_148;
  long *local_140;
  undefined1 *local_138;
  int *piStack_130;
  undefined8 local_128;
  long *local_120;
  undefined8 local_118;
  char *pcStack_110;
  undefined8 local_108;
  long *local_100;
  undefined1 *local_f8;
  int *piStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined1 *local_d8;
  int *piStack_d0;
  undefined8 local_c8;
  long *local_c0;
  int local_b8 [18];
  long *local_68;
  
  if (param_3 == 0) {
    return param_1;
  }
  lVar15 = *(long *)(param_1 + 0x1a8);
  if ((*(int *)(lVar15 + 0x6c38) == 1) && (*(char *)(lVar15 + 0x6c3c) == '\0')) {
    local_b8[0] = 0;
    local_d8 = (undefined1 *)((ulong)local_d8 & 0xffffffff00000000);
    FUN_014e2aa0(1,param_2,local_b8,&local_d8);
    uVar9 = *(uint *)(lVar15 + 0x6c3c);
    uVar6 = uVar9 >> 8 & 0x3f;
    if (local_b8[0] < (int)uVar6 || (int)(uVar6 + (uVar9 >> 0x14 & 0x3f)) <= local_b8[0])
    goto LAB_01ddfe18;
    uVar6 = uVar9 >> 0xe & 0x3f;
    if (((int)local_d8 < (int)uVar6) || ((int)(uVar6 + (uVar9 >> 0x1a)) <= (int)local_d8))
    goto LAB_01ddfe18;
    bVar21 = 1;
  }
  else {
LAB_01ddfe18:
    bVar21 = 0;
  }
  param_2 = param_2 + 6;
  snprintf((char *)local_b8,0x40,"L_base_temochi_%02d/N_frame_00",param_2);
  plVar19 = *(long **)(param_1 + 0x30);
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x58))(plVar19);
  }
  puVar22 = &DAT_cbf29ce484222645;
  local_d8 = &DAT_cbf29ce484222645;
  if ((byte)local_b8[0] != 0) {
    local_d8 = &DAT_cbf29ce484222645;
    pbVar16 = (byte *)((ulong)local_b8 | 1);
    bVar7 = (byte)local_b8[0];
    do {
      local_d8 = (undefined1 *)(((ulong)local_d8 ^ (ulong)bVar7) * 0x100000001b3);
      bVar7 = *pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (bVar7 != 0);
  }
  piStack_d0 = local_b8;
  local_c8 = 0x3f;
  local_c0 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x58))(plVar19);
    lVar15 = FUN_00c8c7b4(plVar19[0x2e],&local_d8);
    (**(code **)(*plVar19 + 0x60))(plVar19);
    if (lVar15 != 0) {
      *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar21;
    }
    (**(code **)(*plVar19 + 0x60))(plVar19);
  }
  uVar13 = FUN_00cf4cfc(*(undefined8 *)(param_3 + 0x70));
  uVar2 = *(ushort *)(*(long *)(*(long *)(param_3 + 0x70) + 0x10) + 4);
  snprintf((char *)local_b8,0x40,"L_base_temochi_%02d/T_name_poke_00",param_2);
  plVar19 = *(long **)(param_1 + 0x1c0);
  if (((uVar13 & 1) == 0) && ((uVar2 >> 2 & 1) == 0)) {
    FUN_014c0fb4(plVar19,0,param_3);
    local_138 = &DAT_cbf29ce484222645;
    if ((byte)local_b8[0] != 0) {
      local_138 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)((ulong)local_b8 | 1);
      bVar7 = (byte)local_b8[0];
      do {
        local_138 = (undefined1 *)(((ulong)local_138 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar7 != 0);
    }
    piStack_130 = local_b8;
    local_d8 = &DAT_e6b50e272d8cd992;
    piStack_d0 = (int *)&DAT_03c3b7e8;
    local_c8 = 3;
    local_c0 = (long *)0x0;
    local_118 = 0xf3a3439af010602;
    pcStack_110 = "msg_ui_box_pokename";
    local_108 = 0x13;
    local_100 = (long *)0x0;
    local_128 = 0x3f;
    local_120 = (long *)0x0;
    FUN_00f11e84(&local_140,&local_d8,&local_118);
    FUN_014e4b9c(param_1,&local_138,&local_140);
    if (local_140 != (long *)0x0) {
      plVar19 = local_140 + 5;
      do {
        lVar15 = *plVar19;
        iVar5 = (int)lVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(int *)plVar19 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_140 + 0x10))();
      }
      else if ((int)lVar15 == 0) goto LAB_01de0980;
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    plVar19 = *(long **)(param_1 + 0x30);
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x58))(plVar19);
    }
    local_d8 = &DAT_cbf29ce484222645;
    if ((byte)local_b8[0] != 0) {
      local_d8 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)((ulong)local_b8 | 1);
      bVar7 = (byte)local_b8[0];
      do {
        local_d8 = (undefined1 *)(((ulong)local_d8 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar7 != 0);
    }
    piStack_d0 = local_b8;
    bVar21 = bVar21 ^ 1;
    local_c8 = 0x3f;
    local_c0 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x58))(plVar19);
      lVar15 = FUN_00c8c7b4(plVar19[0x2e],&local_d8);
      (**(code **)(*plVar19 + 0x60))(plVar19);
      if (lVar15 != 0) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar21;
      }
      (**(code **)(*plVar19 + 0x60))(plVar19);
    }
    snprintf((char *)local_b8,0x40,"L_base_temochi_%02d/T_poke_lv_00",param_2);
    uVar20 = *(undefined8 *)(param_1 + 0x1c0);
    if (*(long *)(*(long *)(param_3 + 0x70) + 8) == 0) {
      uVar10 = FUN_00cf44f4();
      uVar11 = FUN_00cf41a8(*(undefined8 *)(param_3 + 0x70));
      uVar12 = FUN_00f14b64(*(undefined8 *)(param_3 + 0x70));
      uVar9 = FUN_00f13da0(uVar10,uVar11,uVar12);
      uVar9 = uVar9 & 0xff;
    }
    else {
      uVar9 = FUN_00e9987c();
    }
    FUN_011b6a88(uVar20,0,uVar9,3,0,1);
    local_160 = &DAT_cbf29ce484222645;
    if ((byte)local_b8[0] != 0) {
      local_160 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)((ulong)local_b8 | 1);
      bVar7 = (byte)local_b8[0];
      do {
        local_160 = (undefined1 *)(((ulong)local_160 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar7 != 0);
    }
    piStack_158 = local_b8;
    local_150 = 0x3f;
    local_148 = (long *)0x0;
    local_d8 = &DAT_e6b50e272d8cd992;
    piStack_d0 = (int *)&DAT_03c3b7e8;
    local_c8 = 3;
    local_c0 = (long *)0x0;
    local_118 = 0xc8f858d01388e617;
    pcStack_110 = "msg_ui_box_lv_00";
    local_108 = 0x10;
    local_100 = (long *)0x0;
    FUN_00f11e84(&local_168,&local_d8,&local_118);
    FUN_014e4b9c(param_1,&local_160,&local_168);
    if (local_168 != (long *)0x0) {
      plVar19 = local_168 + 5;
      do {
        lVar15 = *plVar19;
        iVar5 = (int)lVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(int *)plVar19 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_168 + 0x10))();
      }
      else if ((int)lVar15 == 0) {
LAB_01de0980:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_148 != (long *)0x0) {
      (**(code **)(*local_148 + 0x20))();
    }
    plVar19 = *(long **)(param_1 + 0x30);
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x58))(plVar19);
    }
    local_d8 = &DAT_cbf29ce484222645;
    if ((byte)local_b8[0] != 0) {
      local_d8 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)((ulong)local_b8 | 1);
      bVar7 = (byte)local_b8[0];
      do {
        local_d8 = (undefined1 *)(((ulong)local_d8 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar7 != 0);
    }
    piStack_d0 = local_b8;
    local_c8 = 0x3f;
    local_c0 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x58))(plVar19);
      lVar15 = FUN_00c8c7b4(plVar19[0x2e],&local_d8);
      (**(code **)(*plVar19 + 0x60))(plVar19);
      if (lVar15 != 0) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar21;
      }
      (**(code **)(*plVar19 + 0x60))(plVar19);
    }
    snprintf((char *)local_b8,0x40,"L_base_temochi_%02d/P_lv_base_00",param_2);
    plVar19 = *(long **)(param_1 + 0x30);
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x58))(plVar19);
    }
    local_d8 = &DAT_cbf29ce484222645;
    if ((byte)local_b8[0] != 0) {
      local_d8 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)((ulong)local_b8 | 1);
      bVar7 = (byte)local_b8[0];
      do {
        local_d8 = (undefined1 *)(((ulong)local_d8 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar7 != 0);
    }
    piStack_d0 = local_b8;
    local_c8 = 0x3f;
    local_c0 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x58))(plVar19);
      lVar15 = FUN_00c8c7b4(plVar19[0x2e],&local_d8);
      (**(code **)(*plVar19 + 0x60))(plVar19);
      if (lVar15 != 0) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar21;
      }
      (**(code **)(*plVar19 + 0x60))(plVar19);
    }
    bVar7 = FUN_00cec030(*(undefined8 *)(param_3 + 0x70));
    if (bVar7 != 2) {
      snprintf((char *)local_b8,0x40,"L_base_temochi_%02d/L_gender_00/pattern_seibetsu",param_2);
      plVar19 = *(long **)(param_1 + 0x30);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x58))(plVar19);
      }
      local_d8 = &DAT_cbf29ce484222645;
      if ((byte)local_b8[0] != 0) {
        local_d8 = &DAT_cbf29ce484222645;
        pbVar16 = (byte *)((ulong)local_b8 | 1);
        bVar1 = (byte)local_b8[0];
        do {
          local_d8 = (undefined1 *)(((ulong)local_d8 ^ (ulong)bVar1) * 0x100000001b3);
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar1 != 0);
      }
      piStack_d0 = local_b8;
      local_c8 = 0x3f;
      local_c0 = (long *)0x0;
      if (plVar19 != (long *)0x0) {
        puVar14 = (undefined8 *)FUN_00e895f4(plVar19[0x2e],&local_d8);
        if (puVar14 != (undefined8 *)0x0) {
          (**(code **)(*(long *)*puVar14 + 0x20))((long *)*puVar14,1);
          (**(code **)(*(long *)*puVar14 + 0xd0))((float)bVar7);
          *(undefined1 *)((long)puVar14 + 0x31) = 0;
          if ((undefined1 *)puVar14[7] != (undefined1 *)0x0) {
            *(undefined1 *)puVar14[7] = 1;
          }
        }
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        (**(code **)(*plVar19 + 0x60))(plVar19);
      }
    }
    uVar9 = snprintf((char *)local_b8,0x40,"L_base_temochi_%02d/L_gender_00",param_2);
    uVar13 = (ulong)uVar9;
    plVar19 = *(long **)(param_1 + 0x30);
    if (plVar19 != (long *)0x0) {
      uVar13 = (**(code **)(*plVar19 + 0x58))(plVar19);
    }
    if ((byte)local_b8[0] != 0) {
      pbVar16 = (byte *)((ulong)local_b8 | 1);
      bVar1 = (byte)local_b8[0];
      do {
        puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar1 != 0);
    }
    piStack_d0 = local_b8;
    local_c8 = 0x3f;
    local_c0 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      local_d8 = puVar22;
      (**(code **)(*plVar19 + 0x58))(plVar19);
      lVar15 = FUN_00c8c7b4(plVar19[0x2e],&local_d8);
      (**(code **)(*plVar19 + 0x60))(plVar19);
      if (lVar15 != 0) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar21 & bVar7 != 2;
      }
      uVar13 = (**(code **)(*plVar19 + 0x60))(plVar19);
    }
  }
  else {
    uVar13 = (**(code **)(*plVar19 + 0x78))(plVar19,plVar19[8],0);
    if ((int)plVar19[0xb] != 0) {
      lVar15 = plVar19[8];
      *(ulong *)(plVar19[0xc] + 8) = uVar13 & 0xffff | 0x20000;
      plVar17 = (long *)plVar19[0xc];
      lVar18 = *plVar17;
      if (*(char *)(lVar18 + 0x54) != '\0') {
        uVar8 = FUN_011b8d00(*(undefined8 *)(lVar18 + 0x30),*(undefined8 *)(lVar15 + 0x30),
                             *(undefined2 *)(lVar18 + 0x50));
        *(undefined2 *)(lVar18 + 0x52) = uVar8;
        plVar17 = (long *)plVar19[0xc];
      }
      *(undefined2 *)(plVar17 + 2) = 0;
      *(ushort *)(plVar19[0xc] + 0x12) = *(ushort *)(plVar19[0xc] + 0x12) & 0xfffe;
    }
    local_f8 = &DAT_cbf29ce484222645;
    if ((byte)local_b8[0] != 0) {
      local_f8 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)((ulong)local_b8 | 1);
      bVar7 = (byte)local_b8[0];
      do {
        local_f8 = (undefined1 *)(((ulong)local_f8 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar7 != 0);
    }
    piStack_f0 = local_b8;
    local_e8 = 0x3f;
    local_e0 = (long *)0x0;
    local_d8 = &DAT_e6b50e272d8cd992;
    piStack_d0 = (int *)&DAT_03c3b7e8;
    local_c8 = 3;
    local_c0 = (long *)0x0;
    local_118 = 0xf3a3439af010602;
    pcStack_110 = "msg_ui_box_pokename";
    local_108 = 0x13;
    local_100 = (long *)0x0;
    FUN_00f11e84(&local_68,&local_d8,&local_118);
    FUN_014e4b9c(param_1,&local_f8,&local_68);
    if (local_68 != (long *)0x0) {
      plVar19 = local_68 + 5;
      do {
        lVar15 = *plVar19;
        iVar5 = (int)lVar15 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(int *)plVar19 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      else if ((int)lVar15 == 0) goto LAB_01de0980;
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    plVar19 = *(long **)(param_1 + 0x30);
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x58))(plVar19);
    }
    local_d8 = &DAT_cbf29ce484222645;
    if ((byte)local_b8[0] != 0) {
      local_d8 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)((ulong)local_b8 | 1);
      bVar7 = (byte)local_b8[0];
      do {
        local_d8 = (undefined1 *)(((ulong)local_d8 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar7 != 0);
    }
    piStack_d0 = local_b8;
    local_c8 = 0x3f;
    local_c0 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x58))(plVar19);
      lVar15 = FUN_00c8c7b4(plVar19[0x2e],&local_d8);
      (**(code **)(*plVar19 + 0x60))(plVar19);
      if (lVar15 != 0) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar21 ^ 1;
      }
      (**(code **)(*plVar19 + 0x60))(plVar19);
    }
    snprintf((char *)local_b8,0x40,"L_base_temochi_%02d/T_poke_lv_00",param_2);
    local_d8 = &DAT_cbf29ce484222645;
    if ((byte)local_b8[0] != 0) {
      local_d8 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)((ulong)local_b8 | 1);
      bVar21 = (byte)local_b8[0];
      do {
        local_d8 = (undefined1 *)(((ulong)local_d8 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar21 != 0);
    }
    local_c8 = 0x3f;
    local_c0 = (long *)0x0;
    piStack_d0 = local_b8;
    lVar15 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_d8);
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
    snprintf((char *)local_b8,0x40,"L_base_temochi_%02d/L_gender_00",param_2);
    if ((byte)local_b8[0] != 0) {
      pbVar16 = (byte *)((ulong)local_b8 | 1);
      bVar21 = (byte)local_b8[0];
      do {
        puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar21) * 0x100000001b3);
        bVar21 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar21 != 0);
    }
    piStack_d0 = local_b8;
    local_c8 = 0x3f;
    local_c0 = (long *)0x0;
    local_d8 = puVar22;
    uVar13 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170),&local_d8);
    *(byte *)(uVar13 + 0x58) = *(byte *)(uVar13 + 0x58) & 0xfe;
  }
  return uVar13;
}


