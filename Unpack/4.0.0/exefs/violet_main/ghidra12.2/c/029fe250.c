/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fe250; name: FUN_029fe250
 */


void FUN_029fe250(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  short *psVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  char cVar5;
  ushort uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 *puVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  long local_960;
  long lStack_958;
  undefined4 local_950;
  long local_948;
  long lStack_940;
  undefined4 local_938;
  undefined8 local_930;
  undefined8 uStack_928;
  long local_910;
  long lStack_908;
  undefined8 local_900;
  long local_8e0;
  long lStack_8d8;
  long *local_8d0;
  undefined8 local_8c0;
  undefined4 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined4 local_8a0;
  undefined1 *local_898;
  undefined8 local_890;
  undefined1 auStack_888 [408];
  undefined1 auStack_6f0 [16];
  long local_6e0;
  long local_6d8;
  long local_6d0;
  int local_6c4;
  undefined1 auStack_6c0 [16];
  int local_6b0 [3];
  undefined4 local_6a4;
  int local_6a0;
  undefined8 *local_698;
  undefined8 *local_690;
  int local_678;
  int local_674;
  int local_340;
  long local_298;
  undefined4 local_290;
  uint local_28c;
  long local_e0;
  long lStack_d8;
  uint local_d0;
  uint uStack_cc;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long *local_70;
  
  uVar14 = *(uint *)(param_2 + 1);
  if ((int)uVar14 < 1) {
    bVar8 = 0;
  }
  else {
    if (uVar14 == 1) {
      uVar16 = 0;
      bVar8 = 0;
    }
    else {
      uVar16 = 0;
      bVar8 = 0;
      do {
        puVar2 = (uint *)(*param_2 + uVar16 * 4);
        uVar16 = uVar16 + 2;
        bVar8 = (*puVar2 & puVar2[1]) != 0xffffffff | bVar8;
      } while (((ulong)uVar14 & 0xfffffffe) != uVar16);
    }
    if ((uVar14 & 1) != 0) {
      bVar8 = bVar8 | *(int *)(*param_2 + uVar16 * 4) != -1;
    }
  }
  uVar14 = *(uint *)(param_2 + 5);
  if (0 < (int)uVar14) {
    if (uVar14 == 1) {
      uVar16 = 0;
      bVar7 = 0;
    }
    else {
      uVar16 = 0;
      bVar7 = 0;
      do {
        puVar2 = (uint *)(param_2[4] + uVar16 * 4);
        uVar16 = uVar16 + 2;
        bVar7 = (*puVar2 & puVar2[1]) != 0xffffffff | bVar7;
      } while (((ulong)uVar14 & 0xfffffffe) != uVar16);
    }
    if ((uVar14 & 1) != 0) {
      bVar7 = bVar7 | *(int *)(param_2[4] + uVar16 * 4) != -1;
    }
    if ((bool)(bVar8 & bVar7)) {
      lVar21 = tpidr_el0;
      lVar12 = *(long *)(lVar21 + 0x1000b8);
      if (lVar12 == 0) {
        lVar12 = FUN_00e5d3b4();
        *(long *)(lVar21 + 0x1000b8) = lVar12;
      }
      plVar22 = *(long **)(lVar12 + 0x3e0);
      if (plVar22 != (long *)0x0) {
        lVar12 = *plVar22;
        if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
          (**(code **)(lVar12 + 0x18))("FindGraphPath",0xd,*(undefined8 *)(lVar12 + 0x28));
          if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
            (**(code **)(lVar12 + 0x18))("init",4,*(undefined8 *)(lVar12 + 0x28));
          }
        }
        puVar4 = (undefined8 *)plVar22[2];
        uVar16 = (long)puVar4 + 0x1fU & 0xfffffffffffffff8;
        if ((uVar16 <= (ulong)plVar22[3]) && (plVar22[2] = uVar16, puVar4 != (undefined8 *)0x0)) {
          *puVar4 = "LtFindGraphPath";
          puVar4[2] = "Stinit";
          uVar10 = nn::os::GetSystemTick();
          puVar4[1] = uVar10;
        }
        if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar22[6] != 0)) {
          puVar4 = (undefined8 *)plVar22[2];
          uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
          if ((uVar16 <= (ulong)plVar22[3]) && (plVar22[2] = uVar16, puVar4 != (undefined8 *)0x0)) {
            *puVar4 = &DAT_03c4e575;
            puVar4[1] = *(undefined8 *)(plVar22[6] + 8);
          }
        }
      }
      cVar5 = *(char *)((long)param_2 + 0x5c);
      local_90 = 0;
      local_88 = 0x8000000000000000;
      local_80 = 0;
      local_78._0_4_ = 0;
      local_78._4_4_ = 0x80000000;
      local_70 = plVar22;
      if (cVar5 == '\0') {
        local_98 = 0;
      }
      else {
        uVar14 = *(uint *)(param_2 + 0xf);
        if ((int)uVar14 < 1) {
          uVar14 = 0x8000;
        }
        uVar20 = *(uint *)((long)param_2 + 0x7c);
        if ((int)*(uint *)((long)param_2 + 0x7c) < 1) {
          uVar20 = 0x24200;
        }
        if (param_2[0x12] == 0) {
          FUN_030b4a20(&local_90,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar14);
          if (((int)local_88 < (int)uVar14) || ((int)uVar14 < (int)local_88)) {
            local_88 = CONCAT44(local_88._4_4_,uVar14);
          }
        }
        else {
          local_88 = (ulong)(uVar14 | 0x80000000) << 0x20;
          local_90 = param_2[0x12];
        }
        if (param_2[0x13] == 0) {
          if ((int)(local_78._4_4_ & 0x7fffffff) < (int)uVar20) {
            FUN_030b4a20(&local_80,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar20);
          }
          if (((int)(uint)local_78 < (int)uVar20) || ((int)uVar20 < (int)(uint)local_78)) {
            local_78._0_4_ = uVar20;
          }
        }
        else {
          local_78._4_4_ = uVar20 | 0x80000000;
          local_78._0_4_ = 0;
          local_80 = param_2[0x13];
        }
        local_98 = CONCAT44(local_78._4_4_,local_88._4_4_) & 0x7fffffff7fffffff;
      }
      local_c8 = 0;
      local_c0 = 0x8000000000000000;
      local_b8 = 0;
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0x80000000;
      uVar14 = *(uint *)(param_2 + 0xe);
      if ((int)uVar14 < 1) {
        uVar14 = 0x20000;
      }
      uVar20 = *(uint *)((long)param_2 + 0x74);
      if ((int)*(uint *)((long)param_2 + 0x74) < 1) {
        uVar20 = 0x90200;
      }
      local_a8 = local_90;
      local_a0 = local_80;
      if (param_2[0x10] == 0) {
        FUN_030b4a20(&local_c8,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar14);
        if (((int)local_c0 < (int)uVar14) || ((int)uVar14 < (int)local_c0)) {
          local_c0 = CONCAT44(local_c0._4_4_,uVar14);
        }
      }
      else {
        local_c0 = (ulong)(uVar14 | 0x80000000) << 0x20;
        local_c8 = param_2[0x10];
      }
      if (param_2[0x11] == 0) {
        if ((int)(local_b0._4_4_ & 0x7fffffff) < (int)uVar20) {
          FUN_030b4a20(&local_b8,PTR_PTR_047d1a50 + 0x20,(long)(int)uVar20);
        }
        if (((int)(uint)local_b0 < (int)uVar20) || ((int)uVar20 < (int)(uint)local_b0)) {
          local_b0._0_4_ = uVar20;
        }
      }
      else {
        local_b0._4_4_ = uVar20 | 0x80000000;
        local_b0._0_4_ = 0;
        local_b8 = param_2[0x11];
      }
      local_e0 = local_c8;
      lStack_d8 = local_b8;
      local_d0 = local_c0._4_4_ & 0x7fffffff;
      uStack_cc = local_b0._4_4_ & 0x7fffffff;
      FUN_030c6f58(auStack_6f0,&local_e0,&local_a8);
      local_8a0 = 0;
      local_898 = auStack_888;
      local_890 = -0x7fffffce00000000;
      local_900 = 0xffffffffffffffff;
      if (param_4 == 0 || cVar5 == '\0') {
        param_4 = 0;
      }
      local_8c0 = 0xffffffffffffffff;
      uStack_928 = 0;
      local_8b8 = 0xffffffff;
      local_8b0 = 0;
      uStack_8a8 = 0;
      local_910 = param_2[0xc];
      lStack_908 = param_2[0xd];
      local_8e0 = param_2[9];
      lStack_8d8 = param_2[10];
      local_8d0 = &local_6e0;
      local_6a4 = (undefined4)param_2[0xb];
      local_950 = (undefined4)param_2[1];
      local_960 = *param_2;
      lStack_958 = param_2[2];
      local_938 = (undefined4)param_2[5];
      local_948 = param_2[4];
      lStack_940 = param_2[6];
      local_930 = param_1;
      FUN_030c7238(auStack_6f0,&local_930,param_4,&local_960);
      lVar12 = *(long *)(lVar21 + 0x1000b8);
      if (lVar12 == 0) {
        lVar12 = FUN_00e5d3b4();
        *(long *)(lVar21 + 0x1000b8) = lVar12;
      }
      plVar22 = *(long **)(lVar12 + 0x3e0);
      if (plVar22 != (long *)0x0) {
        lVar12 = *plVar22;
        if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar22[6] != 0)) {
          puVar4 = (undefined8 *)plVar22[2];
          uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
          if ((uVar16 <= (ulong)plVar22[3]) && (plVar22[2] = uVar16, puVar4 != (undefined8 *)0x0)) {
            *puVar4 = &DAT_03c4e575;
            puVar4[1] = *(undefined8 *)(plVar22[6] + 8);
          }
        }
        puVar4 = (undefined8 *)plVar22[2];
        uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= (ulong)plVar22[3]) && (plVar22[2] = uVar16, puVar4 != (undefined8 *)0x0)) {
          *puVar4 = "StAStar";
          uVar10 = nn::os::GetSystemTick();
          puVar4[1] = uVar10;
        }
        if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
          (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
        }
        if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
          (**(code **)(lVar12 + 0x18))("AStar",5,*(undefined8 *)(lVar12 + 0x28));
        }
      }
      uVar20 = *(uint *)(param_2 + 8) & ((int)*(uint *)(param_2 + 8) >> 0x1f ^ 0xffffffffU);
      uVar14 = 0;
      uVar17 = 0;
      do {
        if (uVar20 == uVar14) {
          uVar9 = 3;
          uVar18 = 1;
          goto LAB_029fe830;
        }
        uVar14 = uVar14 + 1;
        uVar9 = FUN_030c79bc(auStack_6f0);
        uVar18 = 2;
        if (local_678 < local_674) {
          uVar18 = 3;
        }
        if (uVar9 != 3) {
          uVar18 = uVar17;
        }
        uVar17 = uVar18;
      } while (uVar9 == 0);
      uVar20 = uVar14;
LAB_029fe830:
      *(uint *)(param_3 + 2) = uVar20;
      *(char *)((long)param_3 + 0x1c) = (char)uVar9;
      *(undefined1 *)((long)param_3 + 0x1d) = uVar18;
      if ((int)*(uint *)(param_2 + 5) < 1) {
        iVar11 = -1;
      }
      else {
        uVar16 = 0;
        iVar11 = -1;
        do {
          if (*(int *)(param_2[4] + uVar16 * 4) == local_340) {
            iVar11 = (int)uVar16;
            break;
          }
          uVar16 = uVar16 + 1;
        } while (*(uint *)(param_2 + 5) != uVar16);
      }
      *(int *)((long)param_3 + 0x14) = iVar11;
      if ((uVar9 & 0xfffffffd) == 1) {
        piVar3 = (int *)(param_2[4] + (long)iVar11 * 4);
        if (uVar9 != 1) {
          piVar3 = local_6b0;
        }
        iVar11 = *piVar3;
        uVar16 = (ulong)((uint)(iVar11 * -0x61c8864f) >> 0x18);
        for (uVar6 = *(ushort *)(local_6d0 + uVar16 * 2); -1 < (short)uVar6;
            uVar6 = *(ushort *)(local_6d8 + (ulong)uVar6 * 2)) {
          if (*(int *)(local_6e0 + (ulong)uVar6 * 0x10 + 8) == iVar11) {
            local_698 = (undefined8 *)(local_6e0 + (ulong)uVar6 * 0x10);
            goto LAB_029fe93c;
          }
        }
        local_698 = (undefined8 *)(local_6e0 + (long)local_6c4 * 0x10);
        *local_698 = 0x7f7fffee7f7fffee;
        *(int *)(local_698 + 1) = iVar11;
        *(undefined4 *)((long)local_698 + 0xc) = 0xffff;
        *(undefined2 *)(local_6d8 + (long)(short)local_6c4 * 2) =
             *(undefined2 *)(local_6d0 + uVar16 * 2);
        *(short *)(local_6d0 + uVar16 * 2) = (short)local_6c4;
        local_6c4 = local_6c4 + 1;
LAB_029fe93c:
        local_6a0 = ((int)local_698 - (int)local_6e0) * 0x1000 >> 0x10;
        local_690 = local_698;
        *(undefined4 *)(param_3 + 3) = *(undefined4 *)local_698;
        lVar12 = *(long *)(lVar21 + 0x1000b8);
        if (lVar12 == 0) {
          lVar12 = FUN_00e5d3b4();
          *(long *)(lVar21 + 0x1000b8) = lVar12;
        }
        plVar22 = *(long **)(lVar12 + 0x3e0);
        if (plVar22 != (long *)0x0) {
          lVar21 = *plVar22;
          if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (plVar22[6] != 0)) {
            puVar4 = (undefined8 *)plVar22[2];
            uVar15 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
            if ((uVar15 <= (ulong)plVar22[3]) && (plVar22[2] = uVar15, puVar4 != (undefined8 *)0x0))
            {
              *puVar4 = &DAT_03c4e575;
              puVar4[1] = *(undefined8 *)(plVar22[6] + 8);
            }
          }
          puVar4 = (undefined8 *)plVar22[2];
          uVar15 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
          if ((uVar15 <= (ulong)plVar22[3]) && (plVar22[2] = uVar15, puVar4 != (undefined8 *)0x0)) {
            *puVar4 = "Stoutput";
            uVar10 = nn::os::GetSystemTick();
            puVar4[1] = uVar10;
          }
          if (*(code **)(lVar21 + 0x20) != (code *)0x0) {
            (**(code **)(lVar21 + 0x20))(*(undefined8 *)(lVar21 + 0x28));
          }
          if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
            (**(code **)(lVar21 + 0x18))("output",6,*(undefined8 *)(lVar21 + 0x28));
          }
        }
        for (uVar6 = *(ushort *)(local_6d0 + uVar16 * 2); -1 < (short)uVar6;
            uVar6 = *(ushort *)(local_6d8 + (ulong)uVar6 * 2)) {
          if (*(int *)(local_6e0 + (ulong)uVar6 * 0x10 + 8) == iVar11) {
            puVar19 = (undefined1 *)(local_6e0 + (ulong)uVar6 * 0x10);
            goto LAB_029fea5c;
          }
        }
        puVar19 = auStack_6c0;
LAB_029fea5c:
        uVar6 = *(ushort *)(puVar19 + 0xe);
        if ((uVar6 >> 2 & 1) == 0) {
          uVar16 = (ulong)(uVar6 >> 3) & 1;
          puVar13 = puVar19;
          uVar14 = (uVar6 >> 3 & 1) - 1;
          do {
            uVar20 = uVar14;
            psVar1 = (short *)(puVar13 + 0xc);
            puVar13 = (undefined1 *)0x0;
            if (*psVar1 != -1) {
              puVar13 = (undefined1 *)(local_6e0 + (long)*psVar1 * 0x10);
            }
            uVar14 = uVar20 + 1;
            uVar16 = uVar16 + 1;
          } while (((byte)puVar13[0xe] >> 2 & 1) == 0);
          if ((*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= uVar14) {
            FUN_030bb974(param_3,uVar16);
          }
          if (((int)param_3[1] <= (int)uVar14) || ((int)uVar16 < (int)param_3[1])) {
            *(int *)(param_3 + 1) = (int)uVar16;
          }
          uVar6 = *(ushort *)(puVar19 + 0xe);
          if ((uVar6 >> 3 & 1) != 0) {
            *(undefined4 *)(*param_3 + uVar16 * 4 + -4) = *(undefined4 *)(puVar19 + 8);
            uVar6 = *(ushort *)(puVar19 + 0xe);
            uVar14 = uVar20;
          }
          if ((uVar6 >> 2 & 1) == 0) {
            lVar21 = (long)(int)uVar14;
            do {
              psVar1 = (short *)(puVar19 + 0xc);
              puVar19 = (undefined1 *)0x0;
              if (*psVar1 != -1) {
                puVar19 = (undefined1 *)(local_6e0 + (long)*psVar1 * 0x10);
              }
              if (lVar21 < (long)uVar16) {
                *(undefined4 *)(*param_3 + lVar21 * 4) = *(undefined4 *)(puVar19 + 8);
              }
              lVar21 = lVar21 + -1;
            } while (((byte)puVar19[0xe] >> 2 & 1) == 0);
          }
        }
        else {
          if ((*(uint *)((long)param_3 + 0xc) & 0x7fffffff) == 0) {
            FUN_030bb974(param_3,1);
          }
          if ((int)param_3[1] != 1) {
            *(undefined4 *)(param_3 + 1) = 1;
          }
          *(int *)*param_3 = iVar11;
        }
      }
      lVar21 = local_890;
      uVar16 = (ulong)local_890._4_4_;
      local_890 = (ulong)local_890._4_4_ << 0x20;
      if ((-1 < lVar21) && (local_898 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_898,uVar16 << 3);
      }
      local_290 = 0;
      if ((-1 < (int)local_28c) && (local_298 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,local_298,(ulong)local_28c << 3);
      }
      uVar14 = local_b0._4_4_;
      local_b0 = (ulong)local_b0._4_4_ << 0x20;
      if ((-1 < (int)uVar14) && (local_b8 != 0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      uVar16 = local_c0;
      local_b8 = 0;
      local_b0 = CONCAT44(0x80000000,(uint)local_b0);
      local_c0 = local_c0 & 0xffffffff00000000;
      if ((-1 < (long)uVar16) && (local_c8 != 0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      uVar14 = local_78._4_4_;
      local_78 = (ulong)local_78._4_4_ << 0x20;
      if ((-1 < (int)uVar14) && (local_80 != 0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      uVar16 = local_88;
      local_80 = 0;
      local_78 = CONCAT44(0x80000000,(uint)local_78);
      local_88 = local_88 & 0xffffffff00000000;
      if ((-1 < (long)uVar16) && (local_90 != 0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      if (local_70 == (long *)0x0) {
        return;
      }
      lVar21 = *local_70;
      if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (local_70[6] != 0)) {
        puVar4 = (undefined8 *)local_70[2];
        uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= (ulong)local_70[3]) && (local_70[2] = uVar16, puVar4 != (undefined8 *)0x0)) {
          *puVar4 = &DAT_03c4e575;
          puVar4[1] = *(undefined8 *)(local_70[6] + 8);
        }
      }
      puVar4 = (undefined8 *)local_70[2];
      uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)local_70[3]) && (local_70[2] = uVar16, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c3697b;
        uVar10 = nn::os::GetSystemTick();
        puVar4[1] = uVar10;
      }
      if (*(code **)(lVar21 + 0x20) == (code *)0x0) {
        return;
      }
      (**(code **)(lVar21 + 0x20))(*(undefined8 *)(lVar21 + 0x28));
      if (*(code **)(lVar21 + 0x20) == (code *)0x0) {
        return;
      }
      (**(code **)(lVar21 + 0x20))(*(undefined8 *)(lVar21 + 0x28));
      return;
    }
  }
  param_3[2] = -0x100000000;
  *(undefined1 *)((long)param_3 + 0x1c) = 5;
  return;
}


