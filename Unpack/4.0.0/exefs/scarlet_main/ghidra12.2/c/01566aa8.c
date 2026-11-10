/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01566aa8; name: FUN_01566aa8
 */


void FUN_01566aa8(long param_1,byte param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  long local_70 [3];
  long *local_58;
  undefined4 local_50;
  ulong uStack_4c;
  
  if (3 < param_3) {
    return;
  }
  puVar8 = (undefined8 *)(param_1 + 0x244);
  bVar7 = param_2 & 1;
  switch(param_3) {
  case 0:
    *(byte *)(param_1 + 0x66) = bVar7;
    if ((param_2 & 1) == 0) {
      puVar8 = (undefined8 *)(param_1 + 0x23c);
      *(undefined4 *)(param_1 + 0x238) = 0;
LAB_01566e3c:
      *puVar8 = 0;
      return;
    }
    FUN_0135d26c(local_70,param_1 + 0x278);
    plVar12 = local_58;
    local_50 = 0;
    uStack_4c = 0;
    plVar11 = *(long **)(param_1 + 400);
    plVar4 = *(long **)(param_1 + 0x198);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))(local_58);
    }
    if (plVar11 != plVar4) {
      do {
        plVar1 = (long *)PTR_DAT_047d8b70;
        if (*plVar11 != 0) {
          plVar1 = (long *)(*plVar11 + 0x30);
        }
        if (*plVar1 == local_70[0]) goto LAB_01566b68;
        plVar11 = plVar11 + 2;
      } while (plVar4 != plVar11);
      plVar11 = plVar4;
    }
LAB_01566b68:
    puVar8 = (undefined8 *)(param_1 + 0x238);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    if (plVar11 == *(long **)(param_1 + 0x198)) {
      if (*(int *)(param_1 + 0x238) != 0) {
        fVar13 = *(float *)(param_1 + 0x23c);
        local_50 = 0;
        if (fVar13 != 0.0) {
          local_50 = 3;
        }
        goto LAB_01566e7c;
      }
    }
    else if (*(int *)(param_1 + 0x238) != 2) {
      fVar13 = *(float *)(plVar11 + 1);
      local_50 = 2;
      if (fVar13 != 0.0) {
        local_50 = 1;
      }
LAB_01566e7c:
      puVar8 = (undefined8 *)&local_50;
      uStack_4c = (ulong)(uint)fVar13;
    }
    uVar6 = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(param_1 + 0x238) = *puVar8;
    *(undefined4 *)(param_1 + 0x240) = uVar6;
    goto LAB_01566dcc;
  case 2:
    *(byte *)(param_1 + 0x68) = bVar7;
    if ((param_2 & 1) == 0) {
      puVar8 = (undefined8 *)(param_1 + 0x254);
      *(undefined4 *)(param_1 + 0x250) = 0;
      goto LAB_01566e3c;
    }
    FUN_0135d26c(local_70,param_1 + 0x278);
    plVar4 = local_58;
    local_50 = 0;
    uStack_4c = 0;
    plVar11 = *(long **)(param_1 + 0x200);
    plVar12 = *(long **)(param_1 + 0x208);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))(local_58);
    }
    if (plVar11 != plVar12) {
      do {
        plVar1 = (long *)PTR_DAT_047d8b70;
        if (*plVar11 != 0) {
          plVar1 = (long *)(*plVar11 + 0x30);
        }
        if (*plVar1 == local_70[0]) goto LAB_01566cf4;
        plVar11 = plVar11 + 2;
      } while (plVar12 != plVar11);
      plVar11 = plVar12;
    }
LAB_01566cf4:
    puVar8 = (undefined8 *)(param_1 + 0x250);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
    if (plVar11 == *(long **)(param_1 + 0x208)) {
      if (*(int *)(param_1 + 0x250) != 0) {
        fVar13 = *(float *)(param_1 + 0x254);
        local_50 = 0;
        if (fVar13 != 0.0) {
          local_50 = 3;
        }
        goto LAB_01566ed8;
      }
    }
    else if (*(int *)(param_1 + 0x250) != 2) {
      fVar13 = *(float *)(plVar11 + 1);
      local_50 = 2;
      if (fVar13 != 0.0) {
        local_50 = 1;
      }
LAB_01566ed8:
      puVar8 = (undefined8 *)&local_50;
      uStack_4c = (ulong)(uint)fVar13;
    }
    uVar6 = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(param_1 + 0x250) = *puVar8;
    *(undefined4 *)(param_1 + 600) = uVar6;
    goto LAB_01566dcc;
  case 3:
    *(byte *)(param_1 + 0x69) = bVar7;
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x25c) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      return;
    }
    FUN_0135d26c(local_70,param_1 + 0x278);
    plVar12 = local_58;
    local_50 = 0;
    uStack_4c = 0;
    plVar11 = *(long **)(param_1 + 0x1c8);
    plVar4 = *(long **)(param_1 + 0x1d0);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))(local_58);
    }
    if (plVar11 != plVar4) {
      do {
        plVar1 = (long *)PTR_DAT_047d8b70;
        if (*plVar11 != 0) {
          plVar1 = (long *)(*plVar11 + 0x30);
        }
        if (*plVar1 == local_70[0]) goto LAB_01566d9c;
        plVar11 = plVar11 + 2;
      } while (plVar4 != plVar11);
      plVar11 = plVar4;
    }
LAB_01566d9c:
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    puVar8 = (undefined8 *)(param_1 + 0x25c);
    puVar10 = puVar8;
    if (plVar11 == *(long **)(param_1 + 0x1d0)) {
      if (*(int *)(param_1 + 0x25c) != 0) {
        fVar13 = *(float *)(param_1 + 0x260);
        local_50 = 0;
        if (fVar13 != 0.0) {
          local_50 = 3;
        }
        goto LAB_01566f08;
      }
    }
    else if (*(int *)(param_1 + 0x25c) != 2) {
      fVar13 = *(float *)(plVar11 + 1);
      local_50 = 2;
      if (fVar13 != 0.0) {
        local_50 = 1;
      }
LAB_01566f08:
      uStack_4c = (ulong)(uint)fVar13;
      puVar10 = (undefined8 *)&local_50;
    }
    uVar6 = *(undefined4 *)(puVar10 + 1);
    *puVar8 = *puVar10;
    *(undefined4 *)(param_1 + 0x264) = uVar6;
    goto LAB_01566dcc;
  }
  *(byte *)(param_1 + 0x67) = bVar7;
  if ((param_2 & 1) == 0) {
    iVar5 = *(int *)(param_1 + 0x244);
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    if (iVar5 == 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x150);
    lVar3 = *(long *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0xd0) {
      *(undefined8 *)(lVar2 + 0x6c) = 0;
      *(undefined8 *)(lVar2 + 0x80) = 0;
      *(undefined8 *)(lVar2 + 0x88) = 0;
      *(undefined8 *)(lVar2 + 0x90) = 0;
      *(undefined8 *)(lVar2 + 0x98) = 0;
    }
    return;
  }
  FUN_0135d26c(local_70,param_1 + 0x278);
  plVar12 = local_58;
  local_50 = 0;
  uStack_4c = 0;
  plVar11 = *(long **)(param_1 + 0x1c8);
  plVar4 = *(long **)(param_1 + 0x1d0);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))(local_58);
  }
  if (plVar11 != plVar4) {
    do {
      plVar1 = (long *)PTR_DAT_047d8b70;
      if (*plVar11 != 0) {
        plVar1 = (long *)(*plVar11 + 0x30);
      }
      if (*plVar1 == local_70[0]) goto LAB_01566c10;
      plVar11 = plVar11 + 2;
    } while (plVar4 != plVar11);
    plVar11 = plVar4;
  }
LAB_01566c10:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  iVar5 = *(int *)(param_1 + 0x244);
  puVar10 = puVar8;
  if (plVar11 == *(long **)(param_1 + 0x1d0)) {
    if (iVar5 != 0) {
      fVar13 = *(float *)(param_1 + 0x248);
      local_50 = 0;
      if (fVar13 != 0.0) {
        local_50 = 3;
      }
      goto LAB_01566eac;
    }
  }
  else if (iVar5 != 2) {
    fVar13 = *(float *)(plVar11 + 1);
    local_50 = 2;
    if (fVar13 != 0.0) {
      local_50 = 1;
    }
LAB_01566eac:
    uStack_4c = (ulong)(uint)fVar13;
    puVar10 = (undefined8 *)&local_50;
  }
  uVar6 = *(undefined4 *)(puVar10 + 1);
  uVar9 = *puVar10;
  *puVar8 = uVar9;
  *(undefined4 *)(param_1 + 0x24c) = uVar6;
  if ((iVar5 != 0) && ((int)uVar9 == 0)) {
    lVar2 = *(long *)(param_1 + 0x150);
    lVar3 = *(long *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0xd0) {
      *(undefined8 *)(lVar2 + 0x6c) = 0;
      *(undefined8 *)(lVar2 + 0x80) = 0;
      *(undefined8 *)(lVar2 + 0x88) = 0;
      *(undefined8 *)(lVar2 + 0x90) = 0;
      *(undefined8 *)(lVar2 + 0x98) = 0;
    }
  }
LAB_01566dcc:
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


