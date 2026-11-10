/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a6ead4; name: FUN_00a6ead4
 */


void FUN_00a6ead4(long param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  short sVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 == 1) {
    plVar10 = *(long **)(param_1 + 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x58))(plVar10);
    }
    local_80 = 0x6f3adae4f168cd10;
    pcStack_78 = "jadge";
    local_70 = 5;
    local_68 = (long *)0x0;
    puVar6 = (undefined8 *)FUN_00e895f4(plVar10[0x2e],&local_80);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)(*(long *)*puVar6 + 0x20))((long *)*puVar6,1);
      plVar7 = (long *)*puVar6;
      uVar11 = 0;
      goto LAB_00a6eb84;
    }
  }
  else {
    plVar10 = *(long **)(param_1 + 0x38);
    if (iVar3 == 2) {
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x58))(plVar10);
      }
      local_80 = 0x6f3adae4f168cd10;
      pcStack_78 = "jadge";
      local_70 = 5;
      local_68 = (long *)0x0;
      puVar6 = (undefined8 *)FUN_00e895f4(plVar10[0x2e],&local_80);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar6 + 0x20))((long *)*puVar6,1);
        plVar7 = (long *)*puVar6;
        uVar11 = 0x3f800000;
        goto LAB_00a6eb84;
      }
    }
    else {
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x58))(plVar10);
      }
      local_80 = 0x6f3adae4f168cd10;
      pcStack_78 = "jadge";
      local_70 = 5;
      local_68 = (long *)0x0;
      puVar6 = (undefined8 *)FUN_00e895f4(plVar10[0x2e],&local_80);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar6 + 0x20))((long *)*puVar6,1);
        plVar7 = (long *)*puVar6;
        uVar11 = 0x40000000;
LAB_00a6eb84:
        (**(code **)(*plVar7 + 0xd0))(uVar11);
        *(undefined1 *)((long)puVar6 + 0x31) = 0;
        if ((undefined1 *)puVar6[7] != (undefined1 *)0x0) {
          *(undefined1 *)puVar6[7] = 1;
        }
      }
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  (**(code **)(*plVar10 + 0x60))(plVar10);
  plVar10 = *(long **)(param_1 + 0x38);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x58))(plVar10);
  }
  local_a0 = (undefined1 *)0x2f314ecf0f335eaa;
  pcStack_98 = "N_model_visible";
  local_90 = 0xf;
  uStack_88 = 0;
  lVar8 = FUN_00c8c7b4(plVar10[0x2e],&local_a0);
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | iVar3 == 3;
  }
  (**(code **)(*plVar10 + 0x60))(plVar10);
  lVar8 = *(long *)(param_1 + 0x50);
  if (lVar8 == 0) {
    return;
  }
  lVar9 = *(long *)(lVar8 + 0x70);
  bVar2 = *(char *)(lVar9 + 0x19) == '\0';
  if (bVar2) {
    FUN_00e677e8();
    lVar9 = *(long *)(lVar8 + 0x70);
  }
  if ((*(byte *)(*(long *)(lVar9 + 0x10) + 4) >> 2 & 1) == 0) {
    sVar5 = FUN_00cf44f4();
    if (sVar5 != 0) {
      lVar9 = *(long *)(lVar8 + 0x70);
      goto LAB_00a6ec88;
    }
    plVar10 = *(long **)(param_1 + 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x58))(plVar10);
    }
    local_80 = 0x5f310ebdda37edcc;
    pcStack_78 = "pattern_status";
    local_70 = 0xe;
    local_68 = (long *)0x0;
    puVar6 = (undefined8 *)FUN_00e895f4(plVar10[0x2e],&local_80);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)(*(long *)*puVar6 + 0x20))((long *)*puVar6,1);
      (**(code **)(*(long *)*puVar6 + 0xd0))(0);
      *(undefined1 *)((long)puVar6 + 0x31) = 0;
      if ((undefined1 *)puVar6[7] != (undefined1 *)0x0) {
        *(undefined1 *)puVar6[7] = 1;
      }
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    (**(code **)(*plVar10 + 0x60))(plVar10);
    plVar10 = *(long **)(param_1 + 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x58))(plVar10);
    }
    local_80 = 0xb4254422c3d7fa8b;
    pcStack_78 = "N_egg_visible_00";
    local_70 = 0x10;
    local_68 = (long *)0x0;
    lVar9 = FUN_00c8c7b4(plVar10[0x2e],&local_80);
    if (lVar9 != 0) {
      bVar4 = *(byte *)(lVar9 + 0x58) | 1;
LAB_00a6efc8:
      *(byte *)(lVar9 + 0x58) = bVar4;
    }
  }
  else {
LAB_00a6ec88:
    bVar4 = FUN_00cf4cfc(lVar9);
    uVar1 = (*(ushort *)(*(long *)(*(long *)(lVar8 + 0x70) + 0x10) + 4) & 4) >> 2;
    plVar10 = *(long **)(param_1 + 0x38);
    uVar11 = 0x3f800000;
    if ((bVar4 & 1) == 0 && uVar1 == 0) {
      uVar11 = 0;
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x58))(plVar10);
    }
    local_80 = 0x5f310ebdda37edcc;
    pcStack_78 = "pattern_status";
    local_70 = 0xe;
    local_68 = (long *)0x0;
    puVar6 = (undefined8 *)FUN_00e895f4(plVar10[0x2e],&local_80);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)(*(long *)*puVar6 + 0x20))((long *)*puVar6,1);
      (**(code **)(*(long *)*puVar6 + 0xd0))(uVar11);
      *(undefined1 *)((long)puVar6 + 0x31) = 0;
      if ((undefined1 *)puVar6[7] != (undefined1 *)0x0) {
        *(undefined1 *)puVar6[7] = 1;
      }
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    (**(code **)(*plVar10 + 0x60))(plVar10);
    plVar10 = *(long **)(param_1 + 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x58))(plVar10);
    }
    local_80 = 0xb4254422c3d7fa8b;
    pcStack_78 = "N_egg_visible_00";
    local_70 = 0x10;
    local_68 = (long *)0x0;
    lVar9 = FUN_00c8c7b4(plVar10[0x2e],&local_80);
    if (lVar9 != 0) {
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe | ((bVar4 | (byte)uVar1) ^ 1) & 1;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10);
    if ((bVar4 & 1) == 0 && uVar1 == 0) {
      FUN_00a6f134(param_1,param_2);
      goto LAB_00a6efec;
    }
    FUN_0181e2bc(param_1);
    FUN_00a72f08(param_1,param_2);
    FUN_01360220(param_1);
    FUN_01dee204(param_1);
    plVar10 = *(long **)(param_1 + 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x58))(plVar10);
    }
    local_80 = 0x7d711b90ff606f8d;
    pcStack_78 = "L_icon_seibetsu_00";
    local_70 = 0x12;
    local_68 = (long *)0x0;
    lVar9 = FUN_00c8c7b4(plVar10[0x2e],&local_80);
    if (lVar9 != 0) {
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10);
    plVar10 = *(long **)(param_1 + 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x58))(plVar10);
    }
    local_a0 = &DAT_c90a559991648ec0;
    pcStack_98 = "P_icon_state_00";
    local_90 = 0xf;
    uStack_88 = 0;
    lVar9 = FUN_00c8c7b4(plVar10[0x2e],&local_a0);
    if (lVar9 != 0) {
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
    }
    (**(code **)(*plVar10 + 0x60))(plVar10);
    plVar10 = *(long **)(param_1 + 0x38);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x58))(plVar10);
    }
    local_c0 = 0x53facf8673e88da2;
    pcStack_b8 = "P_icon_another_color_00";
    local_b0 = 0x17;
    uStack_a8 = 0;
    lVar9 = FUN_00c8c7b4(plVar10[0x2e],&local_c0);
    if (lVar9 != 0) {
      bVar4 = *(byte *)(lVar9 + 0x58) & 0xfe;
      goto LAB_00a6efc8;
    }
  }
  (**(code **)(*plVar10 + 0x60))(plVar10);
LAB_00a6efec:
  if (bVar2 && *(char *)(*(long *)(lVar8 + 0x70) + 0x19) != '\0') {
    FUN_00e679f0();
  }
  return;
}


