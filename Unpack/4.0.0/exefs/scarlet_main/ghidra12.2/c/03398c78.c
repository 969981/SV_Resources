/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03398c78; name: FUN_03398c78
 */


void FUN_03398c78(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  undefined1 auStack_198 [256];
  undefined8 **local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  long *local_60;
  long *local_58;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_047b2ef0;
  if (*(int *)(param_1 + 0x3f) == 1) {
    local_90 = (undefined8 *)0x0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 1;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    FUN_032282d4(&local_90,param_1 + 0x39);
    local_1a8 = auStack_198;
    local_1a0 = 0x8000001000000000;
    local_98 = &local_90;
    FUN_033a67a0(&local_1a8,0,0x54434d30);
    FUN_033a67a0(&local_1a8,1,0x54434944);
    if (0 < *(int *)(param_1 + 0x3e)) {
      lVar13 = 0;
      do {
        local_38 = *(undefined8 *)(param_1[0x3d] + lVar13 * 8);
        if (local_88 < local_90 + 1) {
          if (local_60 == (long *)0x0) {
            memcpy(local_90,&local_38,(long)local_88 - (long)local_90);
            local_90 = local_88;
          }
          else {
            (**(code **)(*local_60 + 0x30))(local_60,&local_90,&local_38,8);
          }
        }
        else {
          *local_90 = local_38;
          local_90 = local_90 + 1;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(param_1 + 0x3e));
    }
    lVar9 = *(long *)((long)(local_1a8 + ((long)(int)local_1a0 + -1) * 0x10) + 8);
    iVar11 = (int)((long)(int)local_1a0 + -1);
    uVar2 = ((int)*local_98 - ((int)local_98[2] + (int)lVar9)) + (int)local_98[4];
    lVar13 = lVar9 - (long)local_98[4];
    uVar2 = (uVar2 & 0xff00ff00 | *(int *)(local_1a8 + ((long)(int)local_1a0 + -1) * 0x10) << 0x1e)
            >> 8 | (uVar2 & 0xff00ff) << 8;
    local_38._0_4_ = uVar2 >> 0x10 | uVar2 << 0x10;
    local_1a0._0_4_ = iVar11;
    if ((lVar13 < 0) || (puVar3 = (uint *)(lVar13 + (long)local_98[2]), local_98[1] < puVar3 + 1)) {
      if (local_98[6] == (long *)0x0) {
        pvVar4 = (void *)((long)*local_98 + lVar9);
        memcpy(pvVar4,&local_38,(long)local_98[1] - (long)pvVar4);
      }
      else {
        (**(code **)(*local_98[6] + 0x38))();
      }
    }
    else {
      *puVar3 = (uint)local_38;
    }
    FUN_033996e8(param_1,&local_1a8,&local_90);
    lVar12 = (long)(int)local_1a0;
    lVar9 = *(long *)((long)(local_1a8 + (lVar12 + -1) * 0x10) + 8);
    local_1a0._0_4_ = (int)(lVar12 + -1);
    uVar2 = ((int)*local_98 - ((int)local_98[2] + (int)lVar9)) + (int)local_98[4];
    lVar13 = lVar9 - (long)local_98[4];
    uVar2 = (uVar2 & 0xff00ff00 | *(int *)(local_1a8 + (lVar12 + -1) * 0x10) << 0x1e) >> 8 |
            (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    local_38 = CONCAT44(local_38._4_4_,uVar2);
    if ((lVar13 < 0) || (puVar3 = (uint *)(lVar13 + (long)local_98[2]), local_98[1] < puVar3 + 1)) {
      if (local_98[6] == (long *)0x0) {
        pvVar4 = (void *)((long)*local_98 + lVar9);
        memcpy(pvVar4,&local_38,(long)local_98[1] - (long)pvVar4);
      }
      else {
        (**(code **)(*local_98[6] + 0x38))();
      }
    }
    else {
      *puVar3 = uVar2;
    }
    uVar2 = local_1a0._4_4_;
    uVar10 = (ulong)local_1a0._4_4_;
    local_1a0 = (ulong)local_1a0._4_4_ << 0x20;
    if ((-1 < (int)uVar2) && (local_1a8 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1a8,uVar10 << 4);
    }
    if (local_60 == (long *)0x0) {
      if ((local_78 != 0) && (local_58 != (long *)0x0)) {
        *local_58 = (long)local_90 - local_80;
      }
    }
    else {
      (**(code **)(*local_60 + 0x28))(local_60,&local_90);
      plVar8 = local_60;
      local_60 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        local_78 = 0;
        goto LAB_03398fc0;
      }
      if (plVar8[1] != 0) {
        plVar1 = plVar8 + 2;
        do {
          lVar13 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    }
    local_78 = 0;
    if ((local_60 != (long *)0x0) && (local_60[1] != 0)) {
      plVar8 = local_60 + 2;
      do {
        lVar13 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))();
      }
    }
  }
LAB_03398fc0:
  param_1[0x61] = PTR_DAT_047e5b60 + 0x10;
  FUN_031d98b8(param_1 + 0x61);
  lVar13 = param_1[0x5f];
  if ((lVar13 != 0) && (*(int *)(lVar13 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar13,0);
    param_1[0x5f] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2f4)) && (param_1[0x5d] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x5d],(ulong)*(uint *)((long)param_1 + 0x2f4) << 2);
  }
  lVar13 = param_1[0x5b];
  param_1[0x5d] = 0;
  *(undefined4 *)((long)param_1 + 0x2f4) = 0x80000000;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar13,0);
    param_1[0x5b] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2d4)) && (param_1[0x59] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x59],(ulong)*(uint *)((long)param_1 + 0x2d4) << 4);
  }
  lVar13 = param_1[0x56];
  param_1[0x59] = 0;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0x80000000;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar13,0);
    param_1[0x56] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x57) = 0;
  }
  *(undefined4 *)(param_1 + 0x55) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2ac)) && (param_1[0x54] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x54],(ulong)*(uint *)((long)param_1 + 0x2ac) << 4);
  }
  param_1[0x54] = 0;
  *(undefined4 *)((long)param_1 + 0x2ac) = 0x80000000;
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 8))();
  }
  FUN_031fa22c(param_1 + 0x45);
  lVar13 = param_1[0x40];
  if (lVar13 != 0) {
    FUN_033791fc(lVar13);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar13,0);
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 500)) && (param_1[0x3d] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x3d],(ulong)*(uint *)((long)param_1 + 500) << 3);
  }
  plVar8 = (long *)param_1[0x39];
  param_1[0x3d] = 0;
  *(undefined4 *)((long)param_1 + 500) = 0x80000000;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar13 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  FUN_033a4568(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x29],(ulong)*(uint *)((long)param_1 + 0x154) << 3);
  }
  lVar13 = param_1[0x26];
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar13,0);
    param_1[0x26] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x27) = 0;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x24],(ulong)*(uint *)((long)param_1 + 300) * 0xc);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  puVar7 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x1f) != 0) {
    lVar9 = param_1[0x1e];
    lVar13 = (long)*(int *)(param_1 + 0x1f) * 0x18;
    do {
      lVar12 = lVar9 + lVar13;
      *(undefined4 *)(lVar12 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar12 + -4)) && (*(long *)(lVar12 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar7 + 0x20))
                  (puVar7,*(long *)(lVar12 + -0x10),(ulong)*(uint *)(lVar12 + -4) << 4);
      }
      lVar13 = lVar13 + -0x18;
      *(undefined8 *)(lVar12 + -0x10) = 0;
      *(undefined4 *)(lVar12 + -4) = 0x80000000;
    } while (lVar13 != 0);
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1e],(ulong)*(uint *)((long)param_1 + 0xfc) * 0x18);
  }
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  param_1[0x1e] = 0;
  puVar7 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0x1d) != 0) {
    lVar9 = param_1[0x1c];
    lVar13 = (long)*(int *)(param_1 + 0x1d) << 3;
    do {
      uVar10 = *(ulong *)(lVar9 + -8 + lVar13);
      if ((uVar10 & 1) != 0) {
        (**(code **)(puVar7 + 8))(0,uVar10 - 1,0);
      }
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x1c],(ulong)*(uint *)((long)param_1 + 0xec) << 3);
  }
  lVar13 = param_1[0x19];
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar13,0);
    param_1[0x19] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x17],(ulong)*(uint *)((long)param_1 + 0xc4) << 3);
  }
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  param_1[0x17] = 0;
  puVar7 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0x16) != 0) {
    lVar9 = param_1[0x15];
    lVar13 = (long)*(int *)(param_1 + 0x16) << 3;
    do {
      uVar10 = *(ulong *)(lVar9 + -8 + lVar13);
      if ((uVar10 & 1) != 0) {
        (**(code **)(puVar7 + 8))(0,uVar10 - 1,0);
      }
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x15],(ulong)*(uint *)((long)param_1 + 0xb4) << 3);
  }
  lVar13 = param_1[0x12];
  param_1[0x15] = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0x80000000;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar13,0);
    param_1[0x12] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x10],(ulong)*(uint *)((long)param_1 + 0x8c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  param_1[0x10] = 0;
  puVar7 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0xf) != 0) {
    lVar9 = param_1[0xe];
    lVar13 = (long)*(int *)(param_1 + 0xf) << 3;
    do {
      uVar10 = *(ulong *)(lVar9 + -8 + lVar13);
      if ((uVar10 & 1) != 0) {
        (**(code **)(puVar7 + 8))(0,uVar10 - 1,0);
      }
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xe],(ulong)*(uint *)((long)param_1 + 0x7c) << 3);
  }
  lVar13 = param_1[0xb];
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar13,0);
    param_1[0xb] = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) << 3);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 3);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


