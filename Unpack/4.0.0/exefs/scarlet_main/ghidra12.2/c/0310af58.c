/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0310af58; name: FUN_0310af58
 */


void FUN_0310af58(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [64];
  int local_70;
  int local_6c;
  long *local_68;
  
  lVar9 = tpidr_el0;
  lVar4 = *(long *)(lVar9 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar4;
  }
  plVar11 = *(long **)(lVar4 + 0x3e0);
  if (plVar11 != (long *)0x0) {
    lVar4 = *plVar11;
    if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
      (**(code **)(lVar4 + 0x18))("ApplyAsyncWorldUpdates",0x16,*(undefined8 *)(lVar4 + 0x28));
    }
    puVar1 = (undefined8 *)plVar11[2];
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtApplyAsyncWorldUpdates";
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (((*(byte *)(lVar4 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar1 = (undefined8 *)plVar11[2];
      uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    lVar4 = *(long *)(lVar9 + 0x1000b8);
  }
  puVar12 = (uint *)**(undefined8 **)(*(long *)(*(long *)(param_1 + 0x28) + 0x30) + 0x10);
  uVar15 = *puVar12;
  iVar2 = *(int *)PTR_DAT_047e4f38;
  local_68 = plVar11;
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar4;
  }
  if (*(long *)(lVar4 + (long)iVar2 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if ((uVar15 & 0xffff) != 0) {
    puVar10 = puVar12 + 8;
    uVar15 = uVar15 & 0xffff;
    uVar14 = 0x7fffffff;
    do {
      if ((*(long **)(param_2 + 0x10) == (long *)0x0) ||
         (uVar5 = (**(code **)(**(long **)(param_2 + 0x10) + 0x10))(), (uVar5 & 1) == 0)) {
        lVar4 = *(long *)(param_1 + 0x28);
        FUN_03106be8(puVar10,*(undefined8 *)(lVar4 + 0x78),*(undefined8 *)(lVar4 + 0x60),
                     *(long *)(lVar4 + 0x90),*(undefined8 *)(*(long *)(lVar4 + 0x90) + 0xf0));
      }
      switch((short)puVar10[1]) {
      case 7:
        lVar13 = *(long *)(param_1 + 0x28);
        iVar2 = *(int *)(lVar13 + 0x168);
        lVar4 = (long)iVar2;
        if ((int)(*(uint *)(lVar13 + 0x16c) & 0x7fffffff) <= iVar2) {
          FUN_03114000(lVar13 + 0x160,lVar4 + 1);
          iVar2 = *(int *)(lVar13 + 0x168);
        }
        puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x160) + (long)iVar2 * 0x20);
        uVar3 = *(undefined8 *)(puVar10 + 6);
        puVar1[1] = *(undefined8 *)(puVar10 + 2);
        puVar1[3] = uVar3;
        uVar3 = *(undefined8 *)puVar10;
        puVar1[2] = *(undefined8 *)(puVar10 + 4);
        *puVar1 = uVar3;
        *(int *)(lVar13 + 0x168) = (int)(lVar4 + 1);
        break;
      case 8:
        lVar13 = *(long *)(param_1 + 0x28);
        iVar2 = *(int *)(lVar13 + 0x178);
        lVar4 = (long)iVar2;
        if ((int)(*(uint *)(lVar13 + 0x17c) & 0x7fffffff) <= iVar2) {
          FUN_03114194(lVar13 + 0x170,lVar4 + 1);
          iVar2 = *(int *)(lVar13 + 0x178);
        }
        puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x170) + (long)iVar2 * 0x20);
        uVar3 = *(undefined8 *)(puVar10 + 6);
        puVar1[1] = *(undefined8 *)(puVar10 + 2);
        puVar1[3] = uVar3;
        uVar3 = *(undefined8 *)puVar10;
        puVar1[2] = *(undefined8 *)(puVar10 + 4);
        *puVar1 = uVar3;
        *(int *)(lVar13 + 0x178) = (int)(lVar4 + 1);
        break;
      case 9:
        lVar13 = *(long *)(param_1 + 0x28);
        iVar2 = *(int *)(lVar13 + 0x188);
        lVar4 = (long)iVar2;
        if ((int)(*(uint *)(lVar13 + 0x18c) & 0x7fffffff) <= iVar2) {
          FUN_03114328(lVar13 + 0x180,lVar4 + 1);
          iVar2 = *(int *)(lVar13 + 0x188);
        }
        puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x180) + (long)iVar2 * 0x10);
        uVar3 = *(undefined8 *)(puVar10 + 2);
        *puVar1 = *(undefined8 *)puVar10;
        puVar1[1] = uVar3;
        *(int *)(lVar13 + 0x188) = (int)(lVar4 + 1);
        break;
      case 10:
        lVar13 = *(long *)(param_1 + 0x28);
        iVar2 = *(int *)(lVar13 + 0x198);
        lVar4 = (long)iVar2;
        if ((int)(*(uint *)(lVar13 + 0x19c) & 0x7fffffff) <= iVar2) {
          FUN_0311449c(lVar13 + 400,lVar4 + 1);
          iVar2 = *(int *)(lVar13 + 0x198);
        }
        puVar1 = (undefined8 *)(*(long *)(lVar13 + 400) + (long)iVar2 * 0x10);
        uVar3 = *(undefined8 *)(puVar10 + 2);
        *puVar1 = *(undefined8 *)puVar10;
        puVar1[1] = uVar3;
        *(int *)(lVar13 + 0x198) = (int)(lVar4 + 1);
        break;
      case 0xb:
        lVar13 = *(long *)(param_1 + 0x28);
        iVar2 = *(int *)(lVar13 + 0x1a8);
        lVar4 = (long)iVar2;
        if ((int)(*(uint *)(lVar13 + 0x1ac) & 0x7fffffff) <= iVar2) {
          FUN_03114610(lVar13 + 0x1a0,lVar4 + 1);
          iVar2 = *(int *)(lVar13 + 0x1a8);
        }
        puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x1a0) + (long)iVar2 * 0x20);
        uVar3 = *(undefined8 *)(puVar10 + 6);
        puVar1[1] = *(undefined8 *)(puVar10 + 2);
        puVar1[3] = uVar3;
        uVar3 = *(undefined8 *)puVar10;
        puVar1[2] = *(undefined8 *)(puVar10 + 4);
        *puVar1 = uVar3;
        *(int *)(lVar13 + 0x1a8) = (int)(lVar4 + 1);
        break;
      default:
        FUN_0310663c(puVar10);
      }
      iVar2 = *(int *)PTR_DAT_047e4f38;
      lVar4 = *(long *)(lVar9 + 0x1000b8);
      if (lVar4 == 0) {
        lVar4 = FUN_00e5d3b4();
        *(long *)(lVar9 + 0x1000b8) = lVar4;
      }
      if (*(long *)(lVar4 + (long)iVar2 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      if ((int)uVar15 < 2) {
        if ((uVar14 == 0) || (puVar12 = *(uint **)(puVar12 + 2), puVar12 == (uint *)0x0)) break;
        uVar15 = *puVar12 & 0xffff;
        if ((int)uVar14 <= (int)(*puVar12 & 0xffff)) {
          uVar15 = uVar14;
        }
        if ((int)uVar15 < 1) break;
        uVar14 = uVar14 - uVar15;
        puVar10 = puVar12 + 8;
        Hint_Prefetch(*(long *)(puVar12 + 2),0,0,0);
        Hint_Prefetch(*(long *)(puVar12 + 2) + 0x40,0,0,0);
        Hint_Prefetch(puVar12 + 0x20,0,0,0);
        Hint_Prefetch(puVar12 + 0x30,0,0,0);
      }
      else {
        uVar15 = uVar15 - 1;
        puVar10 = (uint *)((ulong)(ushort)*puVar10 + (long)puVar10);
      }
    } while (puVar10 != (uint *)0x0);
  }
  local_c8 = *(long **)(*(long *)(param_1 + 0x28) + 0x28);
  local_c0 = auStack_b0;
  local_b8 = -0x7ffffff800000000;
  local_70 = 0;
  iVar2 = (**(code **)(*local_c8 + 0x50))();
  if (7 < iVar2) {
    iVar2 = 8;
  }
  local_6c = iVar2;
  if ((int)(local_b8._4_4_ & 0x7fffffff) < iVar2) {
    FUN_031c2ad4(&local_c0,PTR_PTR_047d1a50,(long)iVar2);
  }
  if ((int)local_b8 != iVar2) {
    local_b8 = CONCAT44(local_b8._4_4_,iVar2);
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x30);
  uVar15 = *(uint *)(lVar9 + 0x18);
  if (*(char *)(lVar9 + 0xc) != '\0') {
    plVar6 = *(long **)(lVar9 + 0x10);
    if ((int)uVar15 < 1) {
      plVar8 = plVar6;
    }
    else {
      plVar8 = plVar6;
      if (uVar15 != 1) {
        iVar2 = -(uVar15 & 0xfffffffe);
        do {
          plVar7 = plVar6;
          if (*plVar8 != 0) {
            plVar7 = plVar6 + 1;
            *plVar6 = *plVar8;
          }
          plVar6 = plVar7;
          if (plVar8[1] != 0) {
            plVar6 = plVar7 + 1;
            *plVar7 = plVar8[1];
          }
          plVar8 = plVar8 + 2;
          iVar2 = iVar2 + 2;
        } while (iVar2 != 0);
      }
      plVar7 = plVar6;
      if (((uVar15 & 1) != 0) && (*plVar8 != 0)) {
        plVar7 = plVar6 + 1;
        *plVar6 = *plVar8;
      }
      plVar6 = plVar7;
      plVar8 = *(long **)(lVar9 + 0x10);
    }
    uVar15 = (uint)((ulong)((long)plVar6 - (long)plVar8) >> 3);
    *(undefined1 *)(lVar9 + 0xc) = 0;
  }
  if (uVar15 != 0) {
    FUN_031c2998(&local_c8,*(undefined8 *)(lVar9 + 0x10));
  }
  *(undefined4 *)(lVar9 + 0x18) = 0;
  *(undefined4 *)(lVar9 + 8) = 0;
  if (local_70 != 0) {
    (**(code **)(*local_c8 + 0x28))(local_c8,local_c0);
    local_70 = 0;
  }
  lVar9 = local_b8;
  uVar5 = (ulong)local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_c0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_c0,uVar5 << 3);
  }
  if (plVar11 != (long *)0x0) {
    lVar9 = *plVar11;
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar1 = (undefined8 *)plVar11[2];
      uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar11[2];
    uVar5 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar11[3]) && (plVar11[2] = uVar5, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar3 = nn::os::GetSystemTick();
      puVar1[1] = uVar3;
    }
    if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
      (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
    }
  }
  return;
}


