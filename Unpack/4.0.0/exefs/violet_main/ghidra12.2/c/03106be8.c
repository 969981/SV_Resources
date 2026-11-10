/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03106be8; name: FUN_03106be8
 */


/* WARNING: Removing unreachable block (ram,0x030d86c0) */
/* WARNING: Removing unreachable block (ram,0x030d8694) */
/* WARNING: Removing unreachable block (ram,0x030d86a4) */
/* WARNING: Removing unreachable block (ram,0x030d86c8) */

void FUN_03106be8(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  long lVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined2 local_64 [2];
  
  puVar5 = PTR_DAT_047e4f38;
  switch(*(undefined2 *)(param_1 + 4)) {
  case 0:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
    FUN_03079fe8(param_2,*(undefined8 *)(param_1 + 8),lVar12,
                 lVar12 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0x20) * 8,
                 *(undefined8 *)(param_1 + 0x18),lVar16,
                 lVar16 + (long)*(int *)(*(long *)(param_1 + 0x20) + 0x20) * 8,3);
    iVar6 = *(int *)puVar5;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    puVar4 = PTR_DAT_047d1a08;
    lVar12 = *(long *)(param_1 + 8);
    uVar30 = NEON_fmov(0x3f800000,4);
    fVar22 = (float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20);
    fVar19 = (float)*(undefined8 *)(lVar12 + 0x70);
    fVar29 = (float)*(undefined8 *)(lVar12 + 0x78);
    fVar25 = (float)*(undefined8 *)(lVar12 + 0x88);
    fVar18 = (float)*(undefined8 *)(lVar12 + 0x60);
    fVar27 = (float)((ulong)*(undefined8 *)(lVar12 + 0x60) >> 0x20);
    fVar28 = (float)*(undefined8 *)(lVar12 + 0x68);
    fVar31 = fVar25 + (float)uVar30;
    fVar32 = fVar27 - fVar19;
    fVar27 = fVar27 + fVar19;
    fVar23 = (float)*(undefined8 *)(lVar12 + 0x80);
    fVar19 = (float)uVar30 - fVar25;
    fVar24 = (float)((ulong)*(undefined8 *)(lVar12 + 0x80) >> 0x20);
    fVar33 = fVar29 - fVar24;
    fVar34 = fVar23 - fVar28;
    fVar28 = fVar28 + fVar23;
    fVar29 = fVar29 + fVar24;
    uVar30 = CONCAT44(fVar18 + fVar22 + fVar31,fVar32);
    if (fVar18 < -fVar22) {
      uVar30 = CONCAT44(fVar32,fVar31 - (fVar18 + fVar22));
    }
    uVar21 = CONCAT44(fVar34,fVar33);
    if (fVar18 < -fVar22) {
      uVar21 = CONCAT44(fVar29,fVar28);
    }
    uVar26 = CONCAT44(fVar34,fVar29);
    if (fVar22 < fVar18) {
      uVar26 = CONCAT44(fVar33,fVar28);
    }
    uVar20 = CONCAT44(fVar19 - (fVar18 - fVar22),fVar27);
    if (fVar22 < fVar18) {
      uVar20 = CONCAT44(fVar27,(fVar18 - fVar22) + fVar19);
    }
    if (fVar25 < 0.0) {
      uVar21 = uVar20;
      uVar30 = uVar26;
    }
    fVar27 = (float)uVar21;
    fVar28 = (float)((ulong)uVar21 >> 0x20);
    fVar22 = (float)uVar30;
    fVar23 = (float)((ulong)uVar30 >> 0x20);
    fVar29 = fVar27 * fVar27 + fVar28 * fVar28;
    fVar19 = fVar22 * fVar22 + fVar23 * fVar23;
    fVar18 = fVar29 + fVar19;
    if (fVar18 == 0.0) {
      local_b0 = 0;
      uStack_a8 = 0;
    }
    else {
      fVar18 = SQRT(fVar18);
      fVar29 = SQRT(fVar29 + fVar19);
      local_b0 = CONCAT44(fVar28 / fVar29,fVar27 / fVar18);
      uStack_a8 = CONCAT44(fVar23 / fVar29,fVar22 / fVar18);
    }
    uStack_98 = *(undefined8 *)(lVar12 + 0x98);
    local_a0 = *(undefined8 *)(lVar12 + 0x90);
    lVar16 = *(long *)(lVar12 + 0xc0);
    lVar12 = *(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0x20) + 0x68);
    local_88 = 0x28;
    plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_88,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(plVar7,"hkaiNavMeshQueryMediator");
    }
    plVar8 = *(long **)(lVar16 + 0x18);
    plVar7[1] = 0xffffffff;
    plVar17 = plVar7 + 2;
    *plVar17 = 1;
    puVar4 = PTR_DAT_047e4fd0;
    plVar7[3] = (long)plVar8;
    *plVar7 = (long)(puVar4 + 0x10);
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar8 = plVar8 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar8 = (long *)plVar7[3];
    }
    plVar7[4] = lVar12;
    (**(code **)(*plVar8 + 0x48))(plVar8,lVar12);
    local_68 = *(undefined4 *)(param_1 + 0x28);
    lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x20);
    FUN_030f7594(param_3,&local_68,*(undefined8 *)(lVar12 + 0x68),plVar7,&local_b0,
                 *(undefined4 *)(lVar12 + 0x180));
    iVar6 = *(int *)puVar5;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    local_70[0] = *(undefined4 *)(param_1 + 0x28);
    FUN_030d5d90(param_4,local_70,*(undefined8 *)(param_1 + 8));
    iVar6 = *(int *)puVar5;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    plVar8 = (long *)(param_5 + 0x18);
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x28));
    local_78 = (uint)local_78._2_2_ << 0x10;
    lVar12 = FUN_030d4c28(plVar8,&local_88,&local_78);
    lVar12 = *(long *)(param_5 + 0x18) + ((lVar12 << 0x20) >> 0x1d);
    *(byte *)(lVar12 + 4) = *(byte *)(lVar12 + 4) | 1;
    *(undefined1 *)(lVar12 + 5) = 1;
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar6 = *(int *)puVar5;
      lVar12 = *(long *)(lVar10 + 0x1000b8);
      if (lVar12 == 0) {
        lVar12 = FUN_00e5d3b4();
        *(long *)(lVar10 + 0x1000b8) = lVar12;
      }
      if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x28));
      local_78 = local_78 & 0xffff0000;
      lVar12 = FUN_030d4c28(plVar8,&local_88,&local_78);
      lVar12 = *plVar8 + ((lVar12 << 0x20) >> 0x1d);
      *(byte *)(lVar12 + 4) = *(byte *)(lVar12 + 4) | 4;
      *(undefined1 *)(lVar12 + 5) = 1;
    }
    iVar6 = *(int *)puVar5;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    if (plVar7[1] == 0) {
      return;
    }
    do {
      lVar10 = *plVar17;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar2) {
        *plVar17 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      return;
    }
    return;
  case 1:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 8));
    FUN_030d90bc(param_4,&local_88);
    iVar6 = *(int *)puVar5;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    local_68 = *(int *)(param_1 + 8);
    FUN_030d807c(param_4,&local_68);
    iVar6 = *(int *)puVar5;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    local_70[0] = *(undefined4 *)(param_1 + 8);
    FUN_030f7d68(param_3,local_70);
    iVar6 = *(int *)puVar5;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    local_78 = *(int *)(param_1 + 8);
    if (*(char *)(param_1 + 0xc) == '\0') {
      FUN_0307ab28(param_2,&local_78);
LAB_03107810:
      plVar7 = (long *)(param_5 + 0x18);
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 8));
      local_80 = (uint)local_80._2_2_ << 0x10;
      lVar16 = FUN_030d4c28(plVar7,&local_b0,&local_80);
      lVar12 = *(long *)(param_5 + 0x18);
      pbVar11 = (byte *)(lVar12 + ((lVar16 << 0x20) >> 0x1d) + 4);
      bVar15 = *pbVar11;
      iVar6 = (int)lVar16;
      if ((bVar15 & 1) == 0) {
        *pbVar11 = bVar15 | 2;
      }
      else {
        *pbVar11 = bVar15 & 0xfe;
        if ((bVar15 & 0xfe) == 0) {
          if ((*(uint *)(param_5 + 0x30) < (uint)((ulong)lVar16 >> 0x20)) ||
             (lVar16 = *(long *)(param_5 + 0x28) + (lVar16 >> 0x20) * 8,
             *(int *)(lVar16 + 4) != iVar6)) {
            lVar16 = FUN_030b04f4(plVar7,*plVar7 + (long)iVar6 * 8);
          }
          FUN_030d4f2c(plVar7,lVar16);
        }
      }
      lVar12 = lVar12 + (long)iVar6 * 8;
    }
    else {
      lVar12 = *(long *)(*(long *)(param_2 + 0x38) + (long)(int)local_78 * 0x100 + 0x10);
      FUN_0307ab28(param_2,&local_78);
      if (lVar12 == 0) goto LAB_03107810;
      local_80 = *(int *)(param_1 + 8);
      FUN_0307affc(param_2,&local_80);
      plVar7 = (long *)(param_5 + 0x18);
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 8));
      local_64[0] = 0;
      lVar12 = FUN_030d4c28(plVar7,&local_b0,local_64);
      lVar16 = *(long *)(param_5 + 0x18);
      pbVar11 = (byte *)(lVar16 + ((lVar12 << 0x20) >> 0x1d) + 4);
      bVar15 = *pbVar11;
      iVar6 = (int)lVar12;
      if ((bVar15 & 1) == 0) {
        *pbVar11 = bVar15 | 2;
      }
      else {
        *pbVar11 = bVar15 & 0xfe;
        if ((bVar15 & 0xfe) == 0) {
          if ((*(uint *)(param_5 + 0x30) < (uint)((ulong)lVar12 >> 0x20)) ||
             (lVar12 = *(long *)(param_5 + 0x28) + (lVar12 >> 0x20) * 8,
             *(int *)(lVar12 + 4) != iVar6)) {
            lVar12 = FUN_030b04f4(plVar7,*plVar7 + (long)iVar6 * 8);
          }
          FUN_030d4f2c(plVar7,lVar12);
        }
      }
      *(undefined1 *)(lVar16 + (long)iVar6 * 8 + 5) = 1;
      iVar6 = *(int *)puVar5;
      lVar12 = *(long *)(lVar10 + 0x1000b8);
      if (lVar12 == 0) {
        lVar12 = FUN_00e5d3b4();
        *(long *)(lVar10 + 0x1000b8) = lVar12;
      }
      if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 8));
      local_64[0] = 0;
      lVar16 = FUN_030d4c28(plVar7,&local_b0,local_64);
      lVar12 = *plVar7;
      pbVar11 = (byte *)(lVar12 + ((lVar16 << 0x20) >> 0x1d) + 4);
      bVar15 = *pbVar11;
      iVar6 = (int)lVar16;
      if ((bVar15 >> 2 & 1) == 0) {
        *pbVar11 = bVar15 | 8;
      }
      else {
        *pbVar11 = bVar15 & 0xfb;
        if ((bVar15 & 0xfb) == 0) {
          if ((*(uint *)(param_5 + 0x30) < (uint)((ulong)lVar16 >> 0x20)) ||
             (lVar16 = *(long *)(param_5 + 0x28) + (lVar16 >> 0x20) * 8,
             *(int *)(lVar16 + 4) != iVar6)) {
            lVar16 = FUN_030b04f4(plVar7,*plVar7 + (long)iVar6 * 8);
          }
          FUN_030d4f2c(plVar7,lVar16);
        }
      }
      lVar12 = lVar12 + (long)iVar6 * 8;
    }
    *(undefined1 *)(lVar12 + 5) = 1;
    lVar16 = (long)*(int *)puVar5;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    goto LAB_031077d0;
  case 2:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_0307adf0(param_2,*(undefined8 *)(param_1 + 8),lVar12,
                 lVar12 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0x20) * 8,1);
    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 0x18));
    local_88 = local_88 & 0xffffffffffff0000;
    lVar12 = FUN_030d4c28(param_5 + 0x18,&local_b0,&local_88);
    lVar12 = *(long *)(param_5 + 0x18) + ((lVar12 << 0x20) >> 0x1d);
    bVar15 = *(byte *)(lVar12 + 4) | 4;
    break;
  case 3:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 8));
    FUN_0307affc(param_2,&local_88);
    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 8));
    local_68 = (uint)local_68._2_2_ << 0x10;
    lVar12 = FUN_030d4c28(param_5 + 0x18,&local_b0,&local_68);
    lVar16 = *(long *)(param_5 + 0x18);
    pbVar11 = (byte *)(lVar16 + ((lVar12 << 0x20) >> 0x1d) + 4);
    bVar15 = *pbVar11;
    lVar14 = (long)(int)lVar12;
    if ((bVar15 >> 2 & 1) != 0) {
      bVar3 = bVar15 & 0xfb;
      bVar15 = bVar15 & 0xfb;
      goto LAB_0310775c;
    }
    bVar15 = bVar15 | 8;
LAB_031073e4:
    *pbVar11 = bVar15;
    goto LAB_031077a8;
  case 4:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_0307b29c(param_2,*(undefined8 *)(param_1 + 8),lVar12,
                 lVar12 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0x20) * 8,1);
    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 0x18));
    local_88 = local_88 & 0xffffffffffff0000;
    lVar12 = FUN_030d4c28(param_5 + 0x18,&local_b0,&local_88);
    lVar12 = *(long *)(param_5 + 0x18) + ((lVar12 << 0x20) >> 0x1d);
    bVar15 = *(byte *)(lVar12 + 4) | 0x10;
    break;
  case 5:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 8));
    FUN_0307b960(param_2,&local_88);
    local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(param_1 + 8));
    local_68 = (uint)local_68._2_2_ << 0x10;
    lVar12 = FUN_030d4c28(param_5 + 0x18,&local_b0,&local_68);
    lVar16 = *(long *)(param_5 + 0x18);
    pbVar11 = (byte *)(lVar16 + ((lVar12 << 0x20) >> 0x1d) + 4);
    bVar15 = *pbVar11;
    lVar14 = (long)(int)lVar12;
    if ((bVar15 >> 4 & 1) == 0) {
      bVar15 = bVar15 | 0x20;
      goto LAB_031073e4;
    }
    bVar3 = bVar15 & 0xef;
    bVar15 = bVar15 & 0xef;
LAB_0310775c:
    plVar7 = (long *)(param_5 + 0x18);
    *pbVar11 = bVar15;
    if (bVar3 == 0) {
      if ((*(uint *)(param_5 + 0x30) < (uint)((ulong)lVar12 >> 0x20)) ||
         (lVar9 = *(long *)(param_5 + 0x28) + (lVar12 >> 0x20) * 8,
         *(int *)(lVar9 + 4) != (int)lVar12)) {
        lVar9 = FUN_030b04f4(plVar7,*plVar7 + lVar14 * 8);
      }
      FUN_030d4f2c(plVar7,lVar9);
    }
LAB_031077a8:
    *(undefined1 *)(lVar16 + lVar14 * 8 + 5) = 1;
    goto LAB_031077b4;
  case 6:
    FUN_030d86f4(param_4 + 0xd0,local_64 + 0x1e,local_64 + 10);
    if (DAT_03d77030 != -2) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],&DAT_03d7702c,0);
    }
    return;
  case 7:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    iVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x20);
    if (*(int *)(param_1 + 8) == -1) {
      if (iVar6 != 0) {
        lVar16 = (long)iVar6 * 0x90;
        do {
          FUN_030d89b4(param_4,0,lVar12);
          iVar6 = *(int *)puVar5;
          lVar14 = *(long *)(lVar10 + 0x1000b8);
          if (lVar14 == 0) {
            lVar14 = FUN_00e5d3b4();
            *(long *)(lVar10 + 0x1000b8) = lVar14;
          }
          if (*(long *)(lVar14 + (long)iVar6 * 8 + 1000) != 0) {
            FUN_03231bdc();
          }
          lVar12 = lVar12 + 0x90;
          lVar16 = lVar16 + -0x90;
        } while (lVar16 != 0);
      }
    }
    else {
      FUN_030d88b0(param_4,*(int *)(param_1 + 8),lVar12,lVar12 + (long)iVar6 * 0x90);
    }
    goto LAB_03107644;
  case 8:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    local_b0 = 0;
    uStack_a8 = -0x8000000000000000;
    lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_03089ecc(0x3d4ccccd,lVar12,lVar12 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0x20) * 0x120
                 ,param_2,&local_b0);
    iVar6 = *(int *)puVar5;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    if (*(int *)(param_1 + 8) == -1) {
      if ((int)uStack_a8 != 0) {
        lVar16 = (long)(int)uStack_a8 * 0x90;
        lVar12 = local_b0;
        do {
          FUN_030d89b4(param_4,0,lVar12);
          iVar6 = *(int *)puVar5;
          lVar14 = *(long *)(lVar10 + 0x1000b8);
          if (lVar14 == 0) {
            lVar14 = FUN_00e5d3b4();
            *(long *)(lVar10 + 0x1000b8) = lVar14;
          }
          if (*(long *)(lVar14 + (long)iVar6 * 8 + 1000) != 0) {
            FUN_03231bdc();
          }
          lVar12 = lVar12 + 0x90;
          lVar16 = lVar16 + -0x90;
        } while (lVar16 != 0);
      }
    }
    else {
      FUN_030d88b0(param_4,*(int *)(param_1 + 8),local_b0,local_b0 + (long)(int)uStack_a8 * 0x90);
    }
    iVar6 = *(int *)puVar5;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    lVar10 = local_b0;
    puVar5 = PTR_PTR_047d1a50;
    if ((int)uStack_a8 != 0) {
      lVar12 = (long)(int)uStack_a8 * 0x90;
      do {
        lVar16 = lVar10 + lVar12;
        *(undefined4 *)(lVar16 + -0x28) = 0;
        if ((-1 < (int)*(uint *)(lVar16 + -0x24)) && (*(long *)(lVar16 + -0x30) != 0)) {
          (**(code **)(*(long *)puVar5 + 0x20))
                    (puVar5,*(long *)(lVar16 + -0x30),(ulong)*(uint *)(lVar16 + -0x24) << 2);
        }
        *(undefined8 *)(lVar16 + -0x30) = 0;
        *(undefined4 *)(lVar16 + -0x24) = 0x80000000;
        *(undefined4 *)(lVar16 + -0x48) = 0;
        if ((-1 < (int)*(uint *)(lVar16 + -0x44)) && (*(long *)(lVar16 + -0x50) != 0)) {
          (**(code **)(*(long *)puVar5 + 0x20))
                    (puVar5,*(long *)(lVar16 + -0x50),(ulong)*(uint *)(lVar16 + -0x44) << 2);
        }
        lVar12 = lVar12 + -0x90;
        *(undefined8 *)(lVar16 + -0x50) = 0;
        *(undefined4 *)(lVar16 + -0x44) = 0x80000000;
      } while (lVar12 != 0);
    }
    lVar10 = uStack_a8;
    uVar13 = (ulong)uStack_a8._4_4_;
    uStack_a8 = (ulong)uStack_a8._4_4_ << 0x20;
    if (lVar10 < 0) {
      return;
    }
    if (local_b0 == 0) {
      return;
    }
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_b0,uVar13 * 0x90);
    return;
  case 9:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    FUN_030d8e08(param_4,*(undefined4 *)(param_1 + 8));
LAB_03107644:
    iVar6 = *(int *)puVar5;
LAB_031076dc:
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) == 0) {
      return;
    }
    FUN_03231bdc();
    return;
  case 10:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    FUN_030f82ac(param_3,*(undefined8 *)(param_1 + 8));
    goto LAB_031076d8;
  case 0xb:
    iVar6 = *(int *)PTR_DAT_047e4f38;
    lVar10 = tpidr_el0;
    lVar12 = *(long *)(lVar10 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar6 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    FUN_030f85c4(param_3,*(undefined8 *)(param_1 + 8));
LAB_031076d8:
    iVar6 = *(int *)puVar5;
    goto LAB_031076dc;
  default:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)(lVar12 + 4) = bVar15;
  *(undefined1 *)(lVar12 + 5) = 1;
LAB_031077b4:
  lVar16 = (long)*(int *)puVar5;
  lVar12 = *(long *)(lVar10 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar12;
  }
LAB_031077d0:
  if (*(long *)(lVar12 + lVar16 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  return;
}


