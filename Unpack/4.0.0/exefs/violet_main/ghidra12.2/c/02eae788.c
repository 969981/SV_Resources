/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eae788; name: FUN_02eae788
 */


void FUN_02eae788(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long local_120;
  undefined8 local_118;
  ushort local_110;
  undefined8 local_10c;
  ushort local_104;
  undefined2 *local_100;
  undefined8 local_f8;
  undefined2 local_f0 [64];
  long local_70;
  undefined8 local_68;
  
  if (*(short *)((long)param_1 + 0x1c) == 0) {
    return;
  }
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_104 = 0;
  local_10c = 0;
  FUN_02eac5d8(&local_120,*(int *)((long)param_1 + 0x14) << 1);
  if (*(short *)((long)param_1 + 0x1c) == 0) goto LAB_02eae9f0;
  local_70 = 0;
  local_68 = -0x8000000000000000;
  iVar5 = (int)param_1[1];
  if (iVar5 < 1) {
    local_68._0_4_ = 0;
LAB_02eae844:
    if (iVar5 < (int)(uint)local_68) {
      local_68 = CONCAT44(local_68._4_4_,iVar5);
    }
  }
  else {
    FUN_02e8bb18(&local_70,PTR_PTR_047d1a50,iVar5);
    if (iVar5 <= (int)(uint)local_68) goto LAB_02eae844;
    lVar13 = (long)(int)(uint)local_68;
    uVar11 = ~(uint)local_68;
    local_68 = CONCAT44(local_68._4_4_,iVar5);
    memset((void *)(local_70 + lVar13 * 2),0,(ulong)(iVar5 + uVar11) * 2 + 2);
  }
  puVar8 = PTR_PTR_047d1a50;
  local_f0[0] = 0;
  local_100 = local_f0;
  local_f8 = -0x7fffffbfffffffff;
  uVar15 = (ulong)*(ushort *)((long)param_1 + 0x1c);
  lVar13 = 0;
  do {
    lVar14 = 0;
    if (*param_1 != 0) {
      lVar14 = *param_1 + (long)param_1;
    }
    puVar1 = (undefined8 *)(lVar14 + uVar15 * 0x20);
    uVar6 = *(ushort *)(local_70 + uVar15 * 2);
    uVar19 = puVar1[1];
    uVar18 = *puVar1;
    uVar17 = puVar1[3];
    uVar16 = puVar1[2];
    uVar7 = local_110;
    if (local_110 == 0) {
      FUN_02eac5d8(&local_120,1);
      uVar7 = local_110;
    }
    lVar14 = (long)local_f0 + local_120 + -0x30;
    lVar4 = 0;
    if (local_120 != 0) {
      lVar4 = lVar14;
    }
    puVar2 = (undefined8 *)(lVar4 + (ulong)uVar7 * 0x20);
    local_110 = *(ushort *)(lVar14 + (ulong)uVar7 * 0x20);
    *(uint *)((long)puVar2 + 0xc) = uVar6 | 0x3f000000;
    puVar2[1] = CONCAT44(*(undefined4 *)((long)puVar2 + 0xc),(int)uVar19);
    *puVar2 = uVar18;
    puVar2[3] = CONCAT44(*(undefined4 *)((long)puVar2 + 0x1c),(int)uVar17);
    puVar2[2] = uVar16;
    if (uVar6 == 0) {
      local_104 = uVar7;
    }
    else {
      lVar14 = 0;
      if (local_120 != 0) {
        lVar14 = (long)local_f0 + local_120 + -0x30;
      }
      *(ushort *)(lVar14 + (ulong)uVar6 * 0x20 + lVar13 * 2 + 0x1c) = uVar7;
    }
    uVar15 = (ulong)*(ushort *)((long)puVar1 + 0x1c);
    uVar6 = *(ushort *)((long)puVar1 + 0x1e);
    if (uVar15 == 0) {
      *(undefined2 *)((long)puVar2 + 0x1c) = 0;
      lVar13 = 1;
      *(ushort *)((long)puVar2 + 0x1e) = uVar6;
      lVar14 = (long)(int)local_f8 + -1;
      uVar15 = (ulong)(ushort)local_100[lVar14];
    }
    else {
      *(ushort *)(local_70 + uVar15 * 2) = uVar7;
      *(ushort *)(local_70 + (ulong)uVar6 * 2) = uVar7;
      lVar14 = (long)(int)local_f8 + 1;
      if ((int)(local_f8._4_4_ & 0x7fffffff) <= (int)local_f8) {
        FUN_02eaee40(&local_100,puVar8,lVar14);
      }
      lVar13 = 0;
      local_100[(int)local_f8] = uVar6;
    }
    lVar4 = local_f8;
    local_f8 = CONCAT44(local_f8._4_4_,(int)lVar14);
  } while ((int)uVar15 != 0);
  uVar15 = (ulong)local_f8._4_4_;
  local_f8 = (ulong)local_f8._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_100 != (undefined2 *)0x0)) {
    (**(code **)(*(long *)puVar8 + 0x20))(puVar8,local_100,uVar15 << 1);
  }
  lVar13 = local_68;
  uVar15 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar13) && (local_70 != 0)) {
    (**(code **)(*(long *)puVar8 + 0x20))(puVar8,local_70,uVar15 << 1);
  }
LAB_02eae9f0:
  puVar8 = PTR_DAT_047d1a08;
  local_10c = *(undefined8 *)((long)param_1 + 0x14);
  if (&local_120 == param_1) {
    lVar13 = *param_1;
    uVar11 = *(uint *)((long)param_1 + 0xc);
  }
  else {
    uVar12 = local_118._4_4_;
    if (-1 < (long)local_118) {
      uVar11 = local_118._4_4_;
      if ((int)local_118._4_4_ <= (int)(uint)local_118) {
        uVar11 = (uint)local_118;
      }
      local_100 = (undefined2 *)(-(ulong)(uVar11 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar11 << 5)
      ;
      pvVar10 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_100,0);
      pvVar3 = (void *)0x0;
      if (local_120 != 0) {
        pvVar3 = (void *)(local_120 + (long)&local_120);
      }
      memcpy(pvVar10,pvVar3,(long)(int)(uint)local_118 << 5);
      if ((long)local_118 < 0) {
        lVar13 = 0;
        if (local_120 != 0) {
          lVar13 = local_120 + (long)&local_120;
        }
        (**(code **)(puVar8 + 8))(0,lVar13,0);
      }
      local_120 = 0;
      if (pvVar10 != (void *)0x0) {
        local_120 = (long)pvVar10 - (long)&local_120;
      }
      uVar12 = uVar11 | 0x80000000;
      local_118 = CONCAT44(uVar11,(uint)local_118) | 0x8000000000000000;
    }
    uVar11 = *(uint *)((long)param_1 + 0xc);
    if ((int)uVar11 < 0) {
      lVar13 = *param_1;
    }
    else {
      if ((int)uVar11 <= (int)*(uint *)(param_1 + 1)) {
        uVar11 = *(uint *)(param_1 + 1);
      }
      local_100 = (undefined2 *)(-(ulong)(uVar11 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar11 << 5)
      ;
      pvVar10 = (void *)(**(code **)puVar8)(0,&local_100,0);
      pvVar3 = (void *)0x0;
      if (*param_1 != 0) {
        pvVar3 = (void *)(*param_1 + (long)param_1);
      }
      memcpy(pvVar10,pvVar3,(long)(int)param_1[1] << 5);
      if (*(int *)((long)param_1 + 0xc) < 0) {
        lVar13 = 0;
        if (*param_1 != 0) {
          lVar13 = *param_1 + (long)param_1;
        }
        (**(code **)(puVar8 + 8))(0,lVar13,0);
      }
      lVar13 = 0;
      if (pvVar10 != (void *)0x0) {
        lVar13 = (long)pvVar10 - (long)param_1;
      }
      uVar11 = uVar11 | 0x80000000;
      *param_1 = lVar13;
      *(uint *)((long)param_1 + 0xc) = uVar11;
      uVar12 = local_118._4_4_;
    }
    lVar14 = 0;
    if (local_120 != 0) {
      lVar14 = local_120 + (long)&local_120;
    }
    lVar4 = 0;
    if (lVar13 != 0) {
      lVar4 = lVar13 + (long)param_1;
    }
    lVar13 = 0;
    if (lVar4 != 0) {
      lVar13 = lVar4 - (long)&local_120;
    }
    lVar4 = 0;
    if (lVar14 != 0) {
      lVar4 = lVar14 - (long)param_1;
    }
    *param_1 = lVar4;
    uVar9 = (uint)local_118;
    local_118 = CONCAT44(uVar11,(int)param_1[1]);
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(uint *)((long)param_1 + 0xc) = uVar12;
    local_120 = lVar13;
  }
  lVar14 = param_1[2];
  *(ushort *)(param_1 + 2) = local_110;
  *(undefined2 *)((long)param_1 + 0x1c) = 1;
  if ((int)uVar11 < 0) {
    lVar4 = 0;
    if (lVar13 != 0) {
      lVar4 = (long)local_f0 + lVar13 + -0x30;
    }
    local_110 = (short)lVar14;
    (**(code **)(puVar8 + 8))(0,lVar4,0);
  }
  return;
}


