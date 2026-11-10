/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed6b4c; name: FUN_02ed6b4c
 */


void FUN_02ed6b4c(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *local_180;
  undefined8 local_178;
  undefined4 local_170 [64];
  long local_70;
  undefined8 local_68;
  
  if (*(int *)((long)param_2 + 0xc) < 0) {
    lVar9 = 0;
    if (*param_2 != 0) {
      lVar9 = *param_2 + (long)param_2;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar9,0);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_02ed42dc(param_2,*(int *)((long)param_1 + 0x14) << 1);
  if (*(int *)((long)param_1 + 0x1c) == 0) goto LAB_02ed6dd0;
  local_70 = 0;
  local_68 = -0x8000000000000000;
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    local_68._0_4_ = 0;
LAB_02ed6c28:
    if (iVar2 < (int)(uint)local_68) {
      local_68 = CONCAT44(local_68._4_4_,iVar2);
    }
  }
  else {
    FUN_02eb1f88(&local_70,PTR_PTR_047d1a50,iVar2);
    if (iVar2 <= (int)(uint)local_68) goto LAB_02ed6c28;
    lVar9 = (long)(int)(uint)local_68;
    uVar12 = ~(uint)local_68;
    local_68 = CONCAT44(local_68._4_4_,iVar2);
    memset((void *)(local_70 + lVar9 * 4),0,(ulong)(iVar2 + uVar12) * 4 + 4);
  }
  puVar4 = PTR_PTR_047d1a50;
  local_170[0] = 0;
  local_180 = local_170;
  local_178 = -0x7fffffbfffffffff;
  uVar12 = *(uint *)((long)param_1 + 0x1c);
  lVar9 = 0;
  do {
    lVar11 = 0;
    if (*param_1 != 0) {
      lVar11 = *param_1 + (long)param_1;
    }
    puVar6 = (undefined8 *)(lVar11 + (ulong)uVar12 * 0x30);
    uVar14 = puVar6[1];
    uVar13 = *puVar6;
    uVar16 = puVar6[3];
    uVar15 = puVar6[2];
    uVar3 = *(uint *)(local_70 + (long)(int)uVar12 * 4);
    uVar5 = *(uint *)(param_2 + 2);
    if (uVar5 == 0) {
      FUN_02ed42dc(param_2,1);
      uVar5 = *(uint *)(param_2 + 2);
    }
    lVar1 = *param_2 + (long)param_2;
    lVar7 = 0;
    if (*param_2 != 0) {
      lVar7 = lVar1;
    }
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + (long)(int)uVar5 * 0x30);
    puVar6 = (undefined8 *)(lVar7 + (ulong)uVar5 * 0x30);
    puVar6[1] = uVar14;
    *puVar6 = uVar13;
    puVar6[3] = uVar16;
    puVar6[2] = uVar15;
    *(uint *)(puVar6 + 4) = uVar3;
    puVar10 = (uint *)((long)param_2 + 0x1c);
    if (uVar3 != 0) {
      lVar1 = 0;
      if (*param_2 != 0) {
        lVar1 = *param_2 + (long)param_2;
      }
      puVar10 = (uint *)(lVar1 + (ulong)uVar3 * 0x30 + lVar9 * 4 + 0x24);
    }
    *puVar10 = uVar5;
    lVar11 = lVar11 + (ulong)uVar12 * 0x30;
    uVar12 = *(uint *)(lVar11 + 0x24);
    iVar2 = *(int *)(lVar11 + 0x28);
    if (uVar12 == 0) {
      lVar7 = lVar7 + (ulong)uVar5 * 0x30;
      *(undefined4 *)(lVar7 + 0x24) = 0;
      *(int *)(lVar7 + 0x28) = iVar2;
      lVar11 = (long)(int)local_178 + -1;
      uVar12 = local_180[lVar11];
      lVar9 = 1;
    }
    else {
      *(uint *)(local_70 + (long)(int)uVar12 * 4) = uVar5;
      *(uint *)(local_70 + (long)iVar2 * 4) = uVar5;
      lVar11 = (long)(int)local_178 + 1;
      if ((int)(local_178._4_4_ & 0x7fffffff) <= (int)local_178) {
        FUN_02ed686c(&local_180,puVar4,lVar11);
      }
      lVar9 = 0;
      local_180[(int)local_178] = iVar2;
    }
    lVar1 = local_178;
    local_178 = CONCAT44(local_178._4_4_,(int)lVar11);
  } while (uVar12 != 0);
  uVar8 = (ulong)local_178._4_4_;
  local_178 = (ulong)local_178._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_180 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4,local_180,uVar8 << 2);
  }
  lVar9 = local_68;
  uVar8 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_70 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4,local_70,uVar8 << 2);
  }
LAB_02ed6dd0:
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)((long)param_1 + 0x14);
  *(int *)(param_2 + 3) = (int)param_1[3];
  return;
}


