/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a5250; name: FUN_030a5250
 */


undefined8 FUN_030a5250(long param_1,undefined8 param_2,uint *param_3,uint *param_4,int *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  undefined *puVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int local_98 [2];
  int local_90 [2];
  uint local_88 [2];
  uint local_80 [2];
  long local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar17 = tpidr_el0;
  lVar9 = *(long *)(lVar17 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar17 + 0x1000b8) = lVar9;
  }
  plVar18 = *(long **)(lVar9 + 0x3e0);
  if (plVar18 != (long *)0x0) {
    lVar9 = *plVar18;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))("stepCompactOwnedFaces",0x15,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar2 = (undefined8 *)plVar18[2];
    uVar10 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar18[3]) && (plVar18[2] = uVar10, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtstepCompactOwnedFaces";
      uVar7 = nn::os::GetSystemTick();
      puVar2[1] = uVar7;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar18[6] != 0)) {
      puVar2 = (undefined8 *)plVar18[2];
      uVar10 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar18[3]) && (plVar18[2] = uVar10, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar18[6] + 8);
      }
    }
  }
  local_68 = plVar18;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar11 = *(long *)(param_1 + 0x20);
    lVar9 = lVar11;
  }
  else {
    lVar9 = FUN_0307d71c();
    lVar11 = *(long *)(param_1 + 0x20);
  }
  uVar4 = *(uint *)(lVar11 + 0xd8);
  uVar3 = *param_3;
  iVar5 = *(int *)(lVar11 + 0x20);
  iVar20 = *param_5;
  uVar22 = *param_4;
  local_78 = 0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0x80000000;
  if (0 < (int)(uVar4 - uVar3)) {
    FUN_03078498(&local_78,PTR_PTR_047d1a50 + 0x20,uVar4 - uVar3);
  }
  uVar25 = uVar3;
  if ((0 < iVar20) && ((int)uVar3 < (int)uVar4)) {
    do {
      lVar11 = *(long *)(lVar9 + 0x168);
      iVar13 = *(int *)(lVar11 + (long)(int)(uVar25 + iVar5) * 4);
      if (iVar13 < 0) {
        lVar11 = (long)(int)local_70;
        local_70._0_4_ = (int)local_70 + 1;
        uVar25 = uVar25 + 1;
        iVar20 = iVar20 + -2;
        *(undefined4 *)(local_78 + lVar11 * 4) = 0xffffffff;
      }
      else {
        uVar16 = uVar4;
        if ((int)uVar4 <= (int)uVar25) {
          uVar16 = uVar25 + 1;
        }
        lVar14 = 0;
        do {
          if ((long)(int)uVar4 <= (long)(int)uVar25 + 1 + lVar14) goto LAB_030a546c;
          lVar15 = lVar14 * 4;
          lVar14 = lVar14 + 1;
        } while (*(int *)(lVar11 + ((long)iVar5 + (long)(int)uVar25) * 4 + 4 + lVar15) == iVar13);
        uVar16 = uVar25 + (int)lVar14;
LAB_030a546c:
        uVar6 = uVar16 - uVar25;
        uVar10 = (ulong)uVar6;
        if (uVar25 == uVar22) {
LAB_030a5504:
          if (0 < (int)uVar6) {
            lVar11 = (long)(int)local_70;
            uVar23 = uVar6 & 3;
            if (uVar16 + ~uVar25 < 3) {
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              lVar15 = lVar11 * 4;
              do {
                iVar12 = (int)lVar14;
                iVar13 = iVar5 + uVar22 + iVar12;
                *(int *)(local_78 + lVar15 + lVar14 * 4) = iVar13;
                *(int *)(local_78 + lVar15 + lVar14 * 4 + 4) = iVar13 + 1;
                *(int *)(local_78 + lVar15 + lVar14 * 4 + 8) = iVar13 + 2;
                lVar1 = lVar14 * 4;
                lVar14 = lVar14 + 4;
                *(int *)(local_78 + lVar15 + lVar1 + 0xc) = iVar13 + 3;
              } while ((uVar6 & 0xfffffffc) != (uint)lVar14);
              lVar11 = lVar11 + lVar14;
              local_70._0_4_ = (int)local_70 + iVar12 + 4;
            }
            if ((uVar6 & 3) != 0) {
              iVar13 = iVar5 + uVar22 + (int)lVar14;
              do {
                *(int *)(local_78 + lVar11 * 4) = iVar13;
                lVar11 = lVar11 + 1;
                uVar23 = uVar23 - 1;
                iVar13 = iVar13 + 1;
                local_70._0_4_ = (int)lVar11;
              } while (uVar23 != 0);
            }
          }
        }
        else {
          uVar23 = uVar22 + iVar5;
          *(uint *)(lVar11 + (long)iVar13 * 4) = uVar23;
          if (0 < (int)uVar6) {
            lVar11 = (long)(int)(uVar25 + iVar5) << 2;
            uVar21 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar23 << 2;
            uVar24 = uVar22;
            uVar23 = uVar25;
            do {
              lVar14 = *(long *)(lVar9 + 0x168);
              *(undefined4 *)(lVar14 + uVar21) = *(undefined4 *)(lVar14 + lVar11);
              *(undefined4 *)(lVar14 + lVar11) = 0xfffffffd;
              local_88[0] = uVar23;
              local_80[0] = uVar24;
              FUN_0309c338(param_2,lVar9,local_80,local_88);
              lVar11 = lVar11 + 4;
              uVar21 = uVar21 + 4;
              uVar10 = uVar10 - 1;
              uVar23 = uVar23 + 1;
              uVar24 = uVar24 + 1;
            } while (uVar10 != 0);
            goto LAB_030a5504;
          }
        }
        uVar22 = uVar6 + uVar22;
        iVar20 = iVar20 + uVar6 * -9;
        uVar25 = uVar16;
      }
      iVar13 = *(int *)PTR_DAT_047e4f38;
      lVar11 = *(long *)(lVar17 + 0x1000b8);
      if (lVar11 == 0) {
        lVar11 = FUN_00e5d3b4();
        *(long *)(lVar17 + 0x1000b8) = lVar11;
      }
      if (*(long *)(lVar11 + (long)iVar13 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
    } while (((int)uVar25 < (int)uVar4) && (0 < iVar20));
  }
  *param_3 = uVar25;
  *param_4 = uVar22;
  *param_5 = iVar20;
  if (uVar25 == uVar4) {
    iVar20 = uVar22 + iVar5;
    *(uint *)(lVar9 + 0x160) =
         (uVar22 - *(int *)(*(long *)(param_1 + 0x20) + 0xd8)) + *(int *)(lVar9 + 0x160);
    local_90[0] = uVar3 + iVar5;
    FUN_03090238(param_1,&local_78,local_90,iVar20);
    puVar19 = PTR_PTR_047d1a50;
    if ((int)(*(uint *)(lVar9 + 0x174) & 0x7fffffff) < iVar20) {
      FUN_02e9b320(lVar9 + 0x168,PTR_PTR_047d1a50,(long)iVar20);
    }
    if (*(int *)(lVar9 + 0x170) != iVar20) {
      *(int *)(lVar9 + 0x170) = iVar20;
    }
    FUN_0309c260(lVar9,uVar22);
    uVar7 = 1;
  }
  else {
    local_98[0] = uVar3 + iVar5;
    FUN_03090238(param_1,&local_78,local_98,*(undefined4 *)(lVar9 + 0x170));
    uVar7 = 0;
    puVar19 = PTR_PTR_047d1a50;
  }
  uVar22 = local_70._4_4_;
  uVar10 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (int)uVar22) && (local_78 != 0)) {
    (**(code **)(*(long *)(puVar19 + 0x20) + 0x20))(puVar19 + 0x20,local_78,uVar10 << 2);
  }
  if (plVar18 != (long *)0x0) {
    lVar17 = *plVar18;
    if (((*(byte *)(lVar17 + 0x38) & 1) != 0) && (plVar18[6] != 0)) {
      puVar2 = (undefined8 *)plVar18[2];
      uVar10 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar18[3]) && (plVar18[2] = uVar10, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar18[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar18[2];
    uVar10 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar18[3]) && (plVar18[2] = uVar10, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar8 = nn::os::GetSystemTick();
      puVar2[1] = uVar8;
    }
    if (*(code **)(lVar17 + 0x20) != (code *)0x0) {
      (**(code **)(lVar17 + 0x20))(*(undefined8 *)(lVar17 + 0x28));
    }
  }
  return uVar7;
}


