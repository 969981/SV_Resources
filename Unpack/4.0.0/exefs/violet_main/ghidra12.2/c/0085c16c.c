/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0085c16c; name: FUN_0085c16c
 */


void FUN_0085c16c(long param_1,int param_2,long param_3,undefined4 param_4,uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 *local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar5 + 0x1f0) == 2) {
    iVar9 = *(int *)(param_3 + 0x20);
    iVar7 = 1;
    if ((param_5 & 1) != 0) {
      iVar7 = 2;
    }
    local_80 = (undefined4 *)0x0;
    local_78._0_4_ = 0;
    local_78._4_4_ = 0x80000000;
    lVar5 = (long)iVar9 + (long)*(int *)(lVar5 + 0x60);
    iVar11 = (int)lVar5;
    if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < iVar11) {
      FUN_02e8df28(param_3 + 0x18,PTR_PTR_047d1a50,lVar5);
    }
    *(int *)(param_3 + 0x20) = iVar11;
    lVar12 = *(long *)(param_3 + 0x18);
    iVar11 = *(int *)(param_3 + 0x30);
    lVar5 = (long)iVar11 + ((long)*(int *)(*(long *)(param_1 + 0x18) + 0x60) + -2) * (long)iVar7;
    iVar7 = (int)lVar5;
    if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < iVar7) {
      FUN_02ebb440(param_3 + 0x28,PTR_PTR_047d1a50,lVar5);
    }
    *(int *)(param_3 + 0x30) = iVar7;
    lVar5 = *(long *)(param_3 + 0x28);
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x60) < 1) {
      local_78._0_4_ = 0;
      plVar10 = *(long **)(*(long *)(param_1 + 0x18) + 0x58);
      uVar2 = local_78._4_4_;
    }
    else {
      FUN_0133bb88(&local_80,PTR_PTR_047d1a50);
      plVar10 = *(long **)(*(long *)(param_1 + 0x18) + 0x58);
      uVar2 = local_78._4_4_;
    }
    if (plVar10 != (long *)0x0) {
      pfVar8 = (float *)(lVar12 + (long)iVar9 * 0x10);
      iVar7 = (int)local_78;
      if (param_2 == 0) {
        do {
          local_78._0_4_ = iVar7 + 1;
          local_80[iVar7] = iVar7 + iVar9;
          auVar14 = *(undefined1 (*) [16])(plVar10 + 2);
          *(long *)(pfVar8 + 2) = auVar14._8_8_;
          *(long *)pfVar8 = auVar14._0_8_;
          plVar10 = (long *)*plVar10;
          pfVar8 = pfVar8 + 4;
          iVar7 = (int)local_78;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          local_80[(int)local_78] = (int)local_78 + iVar9;
          local_78._0_4_ = (int)local_78 + 1;
          lVar12 = *(long *)(param_1 + 0x18);
          uVar18 = *(undefined8 *)(lVar12 + 0x158);
          uVar16 = *(undefined8 *)(lVar12 + 0x150);
          auVar14 = NEON_scvtf(*(undefined1 (*) [16])(plVar10 + 4),4);
          uVar19 = *(undefined8 *)(lVar12 + 0x138);
          uVar17 = *(undefined8 *)(lVar12 + 0x130);
          pfVar8[2] = (float)uVar19 + (float)uVar18 * auVar14._8_4_;
          pfVar8[3] = (float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar18 >> 0x20) * 0.0;
          *pfVar8 = (float)uVar17 + (float)uVar16 * auVar14._0_4_;
          pfVar8[1] = (float)((ulong)uVar17 >> 0x20) +
                      (float)((ulong)uVar16 >> 0x20) * auVar14._4_4_;
          plVar10 = (long *)*plVar10;
          pfVar8 = pfVar8 + 4;
        } while (plVar10 != (long *)0x0);
      }
    }
    if (2 < (int)local_78) {
      puVar6 = (undefined4 *)(lVar5 + (long)iVar11 * 0x10);
      lVar5 = (ulong)((int)local_78 - 1) - 1;
      lVar12 = 0;
      if ((param_5 & 1) == 0) {
        do {
          puVar1 = puVar6 + lVar12;
          *puVar1 = *local_80;
          puVar1[1] = *(undefined4 *)((long)local_80 + lVar12 + 4);
          lVar5 = lVar5 + -1;
          puVar1[2] = *(undefined4 *)((long)local_80 + lVar12 + 8);
          puVar1[3] = param_4;
          lVar12 = lVar12 + 4;
        } while (lVar5 != 0);
      }
      else {
        do {
          *puVar6 = *local_80;
          lVar13 = lVar12 + 1;
          puVar6[1] = local_80[lVar12 + 1];
          puVar6[2] = local_80[lVar12 + 2];
          puVar6[3] = param_4;
          puVar6[4] = *local_80;
          puVar6[5] = local_80[lVar12 + 2];
          puVar6[6] = local_80[lVar12 + 1];
          puVar6[7] = param_4;
          puVar6 = puVar6 + 8;
          lVar12 = lVar13;
        } while (lVar5 != lVar13);
      }
    }
    local_78 = (ulong)uVar2 << 0x20;
    if ((-1 < (int)uVar2) && (local_80 != (undefined4 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_80,(ulong)uVar2 << 2);
    }
  }
  else if (*(int *)(lVar5 + 0x1f0) == 3) {
    lVar12 = (long)*(int *)(param_3 + 0x20);
    local_80 = (undefined4 *)0x0;
    local_78 = 0xffffffff00000000;
    lVar5 = lVar12 + *(int *)(lVar5 + 0x60);
    iVar7 = (int)lVar5;
    if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < iVar7) {
      FUN_02e8df28(param_3 + 0x18,PTR_PTR_047d1a50,lVar5);
    }
    *(int *)(param_3 + 0x20) = iVar7;
    iVar7 = *(int *)(param_3 + 0x30);
    lVar13 = *(long *)(param_3 + 0x18);
    lVar5 = (long)iVar7 + (long)*(int *)(*(long *)(param_1 + 0x18) + 0x78);
    iVar9 = (int)lVar5;
    if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < iVar9) {
      FUN_02ebb440(param_3 + 0x28,PTR_PTR_047d1a50,lVar5);
    }
    *(int *)(param_3 + 0x30) = iVar9;
    lVar5 = *(long *)(param_3 + 0x28);
    FUN_031c5614(&local_80,PTR_PTR_047d1a50,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x60));
    puVar3 = PTR_PTR_047d1a50;
    plVar10 = *(long **)(*(long *)(param_1 + 0x18) + 0x58);
    if (plVar10 != (long *)0x0) {
      puVar4 = (undefined8 *)(lVar13 + lVar12 * 0x10);
      if (param_2 == 0) {
        do {
          local_70 = (local_78 & 0x7fffffff) + lVar12;
          local_68 = plVar10;
          FUN_031c5350(&local_80,puVar3,&local_68,&local_70);
          auVar14 = *(undefined1 (*) [16])(plVar10 + 2);
          puVar4[1] = auVar14._8_8_;
          *puVar4 = auVar14._0_8_;
          plVar10 = (long *)*plVar10;
          puVar4 = puVar4 + 2;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          local_70 = (local_78 & 0x7fffffff) + lVar12;
          local_68 = plVar10;
          FUN_031c5350(&local_80,puVar3,&local_68,&local_70);
          lVar13 = *(long *)(param_1 + 0x18);
          auVar14 = NEON_scvtf(*(undefined1 (*) [16])(plVar10 + 4),4);
          auVar15._0_8_ =
               CONCAT44(*(float *)(lVar13 + 0x134) + *(float *)(lVar13 + 0x154) * auVar14._4_4_,
                        *(float *)(lVar13 + 0x130) + *(float *)(lVar13 + 0x150) * auVar14._0_4_);
          auVar15._8_4_ = *(float *)(lVar13 + 0x138) + *(float *)(lVar13 + 0x158) * auVar14._8_4_;
          auVar15._12_4_ = *(float *)(lVar13 + 0x13c) + *(float *)(lVar13 + 0x15c) * 0.0;
          puVar4[1] = auVar15._8_8_;
          *puVar4 = auVar15._0_8_;
          plVar10 = (long *)*plVar10;
          puVar4 = puVar4 + 2;
        } while (plVar10 != (long *)0x0);
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x18) + 0x70);
    if (plVar10 != (long *)0x0) {
      puVar6 = (undefined4 *)(lVar5 + (long)iVar7 * 0x10);
      do {
        local_68 = (long *)plVar10[2];
        local_70 = -1;
        puVar4 = (undefined8 *)FUN_031c5430(&local_80,&local_68,&local_70);
        *puVar6 = (int)*puVar4;
        local_68 = (long *)plVar10[3];
        local_70 = -1;
        puVar4 = (undefined8 *)FUN_031c5430(&local_80,&local_68,&local_70);
        puVar6[1] = (int)*puVar4;
        local_68 = (long *)plVar10[4];
        local_70 = -1;
        puVar4 = (undefined8 *)FUN_031c5430(&local_80,&local_68,&local_70);
        puVar6[2] = (int)*puVar4;
        puVar6[3] = param_4;
        plVar10 = (long *)*plVar10;
        puVar6 = puVar6 + 4;
      } while (plVar10 != (long *)0x0);
    }
    FUN_031c5580(&local_80,PTR_PTR_047d1a50);
    FUN_031c534c(&local_80);
  }
  return;
}


