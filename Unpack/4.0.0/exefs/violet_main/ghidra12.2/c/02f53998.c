/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f53998; name: FUN_02f53998
 */


void FUN_02f53998(long *param_1,long param_2,undefined8 *param_3,long *param_4,undefined8 param_5,
                 long *param_6,long *param_7)

{
  ushort *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  uint *puVar27;
  uint *puVar28;
  int *piVar29;
  long lVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  uint *puVar35;
  long lVar36;
  long *plVar37;
  long *plVar38;
  ushort *puVar39;
  undefined4 *local_a40;
  undefined8 local_a38;
  undefined4 auStack_a30 [32];
  undefined1 *local_9b0;
  int local_9a8;
  uint local_9a4;
  undefined1 local_9a0 [256];
  long local_8a0;
  undefined8 local_898;
  undefined1 *local_890;
  int local_888;
  uint local_884;
  undefined1 auStack_880 [1024];
  undefined1 *local_480;
  undefined8 local_478;
  undefined1 local_470 [1024];
  undefined8 local_70 [2];
  
  lVar33 = *(long *)(param_2 + 8);
  if (param_7 != (long *)0x0) {
    lVar32 = *param_7;
    if (((*(byte *)(lVar32 + 0x38) & 1) != 0) && (param_7[6] != 0)) {
      puVar13 = (undefined8 *)param_7[2];
      uVar23 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar23 <= (ulong)param_7[3]) && (param_7[2] = uVar23, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_03c4e575;
        puVar13[1] = *(undefined8 *)(param_7[6] + 8);
      }
    }
    puVar13 = (undefined8 *)param_7[2];
    uVar23 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= (ulong)param_7[3]) && (param_7[2] = uVar23, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "StMakeGroups";
      uVar12 = nn::os::GetSystemTick();
      puVar13[1] = uVar12;
    }
    if (*(code **)(lVar32 + 0x20) != (code *)0x0) {
      (**(code **)(lVar32 + 0x20))(*(undefined8 *)(lVar32 + 0x28));
    }
    if (*(code **)(lVar32 + 0x18) != (code *)0x0) {
      (**(code **)(lVar32 + 0x18))("MakeGroups",10,*(undefined8 *)(lVar32 + 0x28));
    }
  }
  plVar37 = (long *)*param_3;
  local_480 = local_470;
  local_478 = -0x7fffff0000000000;
  if (*(int *)((long)plVar37 + 0x14) == 0) {
    uVar23 = (ulong)(int)plVar37[2];
    if ((int)plVar37[2] == 0) {
      iVar31 = 0;
    }
    else {
      puVar27 = (uint *)*plVar37;
      puVar35 = puVar27 + uVar23;
      puVar28 = puVar27;
      do {
        if (-1 < (int)*puVar27) {
          uVar23 = (ulong)((int)uVar23 - 1);
          for (uVar14 = puVar28[*puVar27]; -1 < (int)uVar14; uVar14 = puVar28[uVar14]) {
            *puVar27 = uVar14;
            puVar28 = (uint *)*plVar37;
          }
        }
        iVar31 = (int)uVar23;
        puVar27 = puVar27 + 1;
      } while (puVar27 != puVar35);
    }
    *(undefined4 *)((long)plVar37 + 0x14) = 1;
    *(int *)(plVar37 + 3) = iVar31;
  }
  else {
    iVar31 = (int)plVar37[3];
  }
  uVar14 = 0x100;
  if (0x100 < iVar31) {
    FUN_0133bb88(&local_480,PTR_PTR_047d1a50 + 0x20,(long)iVar31);
    uVar14 = local_478._4_4_ & 0x7fffffff;
  }
  if ((int)uVar14 < iVar31) {
    FUN_02e9b320(&local_480,PTR_PTR_047d1a50 + 0x20,(long)iVar31);
  }
  puVar10 = local_480;
  iVar15 = (int)local_478;
  if ((int)local_478 != iVar31) {
    local_478 = CONCAT44(local_478._4_4_,iVar31);
    iVar15 = iVar31;
  }
  iVar31 = (int)plVar37[2];
  if (0 < iVar31) {
    lVar32 = 0;
    iVar15 = 0;
    do {
      lVar30 = *plVar37;
      uVar14 = *(uint *)(lVar30 + lVar32 * 4);
      if ((int)uVar14 < 0) {
        *(uint *)(local_480 + (long)iVar15 * 4) = -uVar14;
        *(int *)(*plVar37 + lVar32 * 4) = iVar15;
        iVar15 = iVar15 + 1;
      }
      else {
        *(undefined4 *)(lVar30 + lVar32 * 4) = *(undefined4 *)(lVar30 + (ulong)uVar14 * 4);
      }
      iVar31 = (int)plVar37[2];
      lVar32 = lVar32 + 1;
    } while (lVar32 < iVar31);
    iVar15 = (int)local_478;
  }
  puVar2 = local_480 + (long)iVar15 * 4;
  local_890 = auStack_880;
  local_888 = 0;
  local_884 = 0x80000100;
  if (0x100 < iVar31) {
    FUN_02e9b320(&local_890,PTR_PTR_047d1a50 + 0x20,iVar31);
  }
  if (local_888 != iVar31) {
    local_888 = iVar31;
  }
  FUN_031c1d04(plVar37,puVar10,puVar2,local_890,local_890 + (long)local_888 * 4);
  local_898 = -0x8000000000000000;
  local_8a0 = 0;
  if (param_7 != (long *)0x0) {
    lVar32 = *param_7;
    if (((*(byte *)(lVar32 + 0x38) & 1) != 0) && (param_7[6] != 0)) {
      puVar13 = (undefined8 *)param_7[2];
      uVar23 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar23 <= (ulong)param_7[3]) && (param_7[2] = uVar23, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_03c4e575;
        puVar13[1] = *(undefined8 *)(param_7[6] + 8);
      }
    }
    puVar13 = (undefined8 *)param_7[2];
    uVar23 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= (ulong)param_7[3]) && (param_7[2] = uVar23, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "StIterateGroups";
      uVar12 = nn::os::GetSystemTick();
      puVar13[1] = uVar12;
    }
    if (*(code **)(lVar32 + 0x20) != (code *)0x0) {
      (**(code **)(lVar32 + 0x20))(*(undefined8 *)(lVar32 + 0x28));
    }
    if (*(code **)(lVar32 + 0x18) != (code *)0x0) {
      (**(code **)(lVar32 + 0x18))("IterateGroups",0xd,*(undefined8 *)(lVar32 + 0x28));
    }
  }
  puVar2 = local_480;
  puVar10 = local_890;
  local_9b0 = local_9a0;
  local_9a8 = 0;
  local_9a4 = 0x80000020;
  if (1 < (int)local_478) {
    lVar32 = param_1[0x71];
    uVar23 = 1;
    puVar3 = PTR_PTR_047d1a50 + 0x20;
    uVar14 = 1;
    do {
      local_a38 = 0x8000002000000000;
      local_a40 = auStack_a30;
      if (*(int *)(puVar2 + uVar23 * 4) < 1) {
        iVar31 = 0;
LAB_02f53edc:
        puVar26 = local_a40;
        lVar30 = (long)(int)local_898;
        iVar15 = (int)local_898 + iVar31;
        if ((int)(local_898._4_4_ & 0x7fffffff) < iVar15) {
          FUN_02f5f01c(&local_8a0,PTR_PTR_047d1a50 + 0x20,(long)iVar15);
        }
        if (iVar31 != 0) {
          uVar22 = (long)iVar31 * 4 - 4;
          uVar16 = ((uint)(uVar22 >> 2) & 0x3fffffff) + 1;
          puVar19 = (undefined4 *)(local_8a0 + lVar30 * 4);
          if ((uVar16 & 7) == 0) {
            puVar25 = puVar26;
          }
          else {
            lVar30 = -((ulong)uVar16 & 7);
            puVar18 = puVar19;
            puVar24 = puVar26;
            do {
              puVar25 = puVar24 + 1;
              bVar11 = lVar30 != -1;
              lVar30 = lVar30 + 1;
              puVar19 = puVar18 + 1;
              *puVar18 = *puVar24;
              puVar18 = puVar19;
              puVar24 = puVar25;
            } while (bVar11);
          }
          if (0x1b < uVar22) {
            do {
              *puVar19 = *puVar25;
              puVar19[1] = puVar25[1];
              puVar19[2] = puVar25[2];
              puVar19[3] = puVar25[3];
              puVar19[4] = puVar25[4];
              puVar19[5] = puVar25[5];
              puVar19[6] = puVar25[6];
              puVar18 = puVar25 + 7;
              puVar25 = puVar25 + 8;
              puVar19[7] = *puVar18;
              puVar19 = puVar19 + 8;
            } while (puVar25 != puVar26 + iVar31);
          }
        }
        local_898 = CONCAT44(local_898._4_4_,iVar15);
      }
      else {
        lVar30 = 0;
        iVar31 = 0;
        iVar15 = 0;
        do {
          uVar8 = *(uint *)(puVar10 + lVar30 * 4 + (long)(int)uVar14 * 4);
          uVar16 = *(uint *)(*param_6 + (long)(int)uVar8 * 4);
          if ((uVar16 <= *(uint *)(lVar33 + 0x174)) &&
             (uVar16 != 0 &&
              *(char *)(*(long *)(lVar33 + 0x150) + (long)(int)uVar16 * 0x80 + 0x5f) != '\0')) {
            iVar31 = iVar31 + 1;
            iVar15 = (*(uint *)(*param_4 + (long)((int)uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1
                     ) + iVar15;
            cVar5 = *(char *)(lVar32 + (ulong)uVar16 * 0x20 + 0xe);
            if (cVar5 == '\x02') {
              lVar17 = (long)(int)local_a38;
              if ((int)(local_a38._4_4_ & 0x7fffffff) <= (int)local_a38) {
                FUN_02f1dbfc(&local_a40,puVar3,lVar17 + 1);
              }
              local_a40[(int)local_a38] = uVar16;
              local_a38 = CONCAT44(local_a38._4_4_,(int)(lVar17 + 1));
            }
            else if (cVar5 == '\x01') {
              iVar15 = -1;
            }
          }
          lVar30 = lVar30 + 1;
        } while (lVar30 < *(int *)(puVar2 + uVar23 * 4));
        if ((iVar31 < 1) || (iVar15 != *(int *)(local_480 + uVar23 * 4))) {
          iVar31 = (int)local_a38;
          goto LAB_02f53edc;
        }
        lVar30 = (long)local_9a8;
        if ((int)(local_9a4 & 0x7fffffff) <= local_9a8) {
          FUN_02f5eea4(&local_9b0,lVar30 + 1);
        }
        *(ulong *)(local_9b0 + (long)local_9a8 * 8) = uVar23 | (ulong)uVar14 << 0x20;
        local_9a8 = (int)(lVar30 + 1);
      }
      uVar16 = local_a38._4_4_;
      uVar22 = (ulong)local_a38._4_4_;
      local_a38 = uVar22 << 0x20;
      uVar14 = *(int *)(local_480 + uVar23 * 4) + uVar14;
      if ((-1 < (int)uVar16) && (local_a40 != (undefined4 *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                  (PTR_PTR_047d1a50 + 0x20,local_a40,uVar22 << 2);
      }
      uVar23 = uVar23 + 1;
    } while ((long)uVar23 < (long)(int)local_478);
  }
  if (param_7 != (long *)0x0) {
    lVar32 = *param_7;
    if (((*(byte *)(lVar32 + 0x38) & 1) != 0) && (param_7[6] != 0)) {
      puVar13 = (undefined8 *)param_7[2];
      uVar23 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar23 <= (ulong)param_7[3]) && (param_7[2] = uVar23, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_03c4e575;
        puVar13[1] = *(undefined8 *)(param_7[6] + 8);
      }
    }
    puVar13 = (undefined8 *)param_7[2];
    uVar23 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= (ulong)param_7[3]) && (param_7[2] = uVar23, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "StAssignStatesAndIslands";
      uVar12 = nn::os::GetSystemTick();
      puVar13[1] = uVar12;
    }
    if (*(code **)(lVar32 + 0x20) != (code *)0x0) {
      (**(code **)(lVar32 + 0x20))(*(undefined8 *)(lVar32 + 0x28));
    }
    if (*(code **)(lVar32 + 0x18) != (code *)0x0) {
      (**(code **)(lVar32 + 0x18))("AssignStatesAndIslands",0x16,*(undefined8 *)(lVar32 + 0x28));
    }
  }
  plVar37 = param_1 + 0x73;
  uVar14 = local_9a8 - (int)param_1[0x69];
  if ((int)(*(uint *)((long)param_1 + 0x3a4) & 0x7fffffff) <
      (int)((int)param_1[0x74] + (uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU)))) {
    FUN_02f5e87c(plVar37);
  }
  lVar32 = *plVar37;
  local_a40 = (undefined4 *)0x0;
  local_a38 = 0x8000000000000000;
  if (0 < local_9a8) {
    FUN_02f5f190(&local_a40,PTR_PTR_047d1a50 + 0x20,local_9a8);
    if (local_9a8 < 1) {
      uVar23 = local_a38 & 0xffffffff;
    }
    else {
      lVar30 = 0;
      do {
        puVar3 = PTR_DAT_047d1a08;
        if ((int)param_1[0x69] == 0) {
          local_70[0] = 0x70;
          puVar13 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
          if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
            (**(code **)(puVar3 + 0x10))(puVar13,"hknpDeactivatedIsland");
          }
          *(int *)(puVar13 + 4) = (int)param_1[0x74];
          puVar13[5] = 0xffffffffffffffff;
          puVar13[6] = puVar13 + 8;
          *(undefined4 *)(puVar13 + 10) = 0;
          *puVar13 = 0;
          puVar13[1] = 0x8000000000000000;
          puVar13[2] = 0;
          puVar13[3] = 0x8000000000000000;
          *(undefined2 *)((long)puVar13 + 0x24) = 0;
          *(undefined4 *)(puVar13 + 0xd) = 0;
          puVar13[7] = 0x8000000100000000;
          puVar13[0xb] = 0;
          puVar13[0xc] = 0x8000000000000000;
          iVar15 = (int)param_1[0x74];
          iVar31 = iVar15;
          if ((int)(*(uint *)((long)param_1 + 0x3a4) & 0x7fffffff) <= iVar15) {
            FUN_02f5e87c(plVar37,(long)iVar15 + 1);
            iVar31 = (int)param_1[0x74];
          }
          *(undefined8 **)(param_1[0x73] + (long)iVar31 * 8) = puVar13;
          *(int *)(param_1 + 0x74) = (int)((long)iVar15 + 1);
        }
        else {
          iVar31 = (int)param_1[0x69] + -1;
          iVar15 = *(int *)(param_1[0x68] + (long)iVar31 * 4);
          *(int *)(param_1 + 0x69) = iVar31;
          puVar3 = PTR_DAT_047d1a08;
          local_70[0] = 0x70;
          puVar13 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,local_70,0);
          if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
            (**(code **)(puVar3 + 0x10))(puVar13,"hknpDeactivatedIsland");
          }
          *(undefined2 *)((long)puVar13 + 0x24) = 0;
          puVar13[5] = 0xffffffffffffffff;
          puVar13[6] = puVar13 + 8;
          *puVar13 = 0;
          puVar13[1] = 0x8000000000000000;
          *(int *)(puVar13 + 4) = iVar15;
          puVar13[7] = 0x8000000100000000;
          *(undefined4 *)(puVar13 + 10) = 0;
          *(undefined4 *)(puVar13 + 0xd) = 0;
          puVar13[2] = 0;
          puVar13[3] = 0x8000000000000000;
          puVar13[0xb] = 0;
          puVar13[0xc] = 0x8000000000000000;
          *(undefined8 **)(param_1[0x73] + (long)iVar15 * 8) = puVar13;
        }
        iVar9 = *(int *)(local_9b0 + lVar30 * 8);
        iVar31 = *(int *)(puVar2 + (long)iVar9 * 4);
        if (0 < iVar31) {
          iVar7 = *(int *)(local_9b0 + lVar30 * 8 + 4);
          lVar17 = 0;
          do {
            uVar14 = *(uint *)(*param_6 + (long)*(int *)(puVar10 + (lVar17 + iVar7) * 4) * 4);
            lVar36 = *(long *)(lVar33 + 0x150) + (ulong)uVar14 * 0x80;
            iVar4 = *(int *)(lVar36 + 0x4c);
            if ((iVar4 != 0 && iVar4 != 0x7fffffff) &&
               (piVar29 = (int *)(param_1[0x71] + (long)(int)uVar14 * 0x20 + 0x10),
               *piVar29 != iVar15)) {
              *piVar29 = iVar15;
              lVar34 = *param_1;
              uVar14 = *(uint *)(lVar36 + 0x48);
              lVar36 = *(long *)(lVar34 + 0x38);
              plVar38 = *(long **)(lVar32 + (long)iVar15 * 8);
              uVar16 = uVar14;
              do {
                uVar23 = (ulong)(uVar16 & 0xffffff);
                if ((*(byte *)(lVar36 + uVar23 * 0xc0 + 0x88) & 1) != 0) {
                  iVar31 = (int)plVar38[1];
                  lVar20 = (long)iVar31;
                  if ((int)(*(uint *)((long)plVar38 + 0xc) & 0x7fffffff) <= iVar31) {
                    FUN_02f23d90(plVar38,PTR_PTR_047d1a50,lVar20 + 1);
                    iVar31 = (int)plVar38[1];
                  }
                  lVar36 = lVar36 + uVar23 * 0xc0;
                  *(undefined4 *)(*plVar38 + (long)iVar31 * 4) = *(undefined4 *)(lVar36 + 0x50);
                  *(int *)(plVar38 + 1) = (int)(lVar20 + 1);
                  uVar16 = *(uint *)(lVar36 + 0x50);
                  if (uVar16 < *(uint *)((long)plVar38 + 0x2c)) {
                    *(uint *)((long)plVar38 + 0x2c) = uVar16;
                    *(undefined4 *)(plVar38 + 5) = *(undefined4 *)(lVar34 + 0x5bc);
                  }
                }
                lVar36 = *(long *)(lVar34 + 0x38);
                uVar16 = *(uint *)(lVar36 + uVar23 * 0xc0 + 0x84);
              } while (uVar16 != uVar14);
              iVar31 = *(int *)(puVar2 + (long)iVar9 * 4);
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 < iVar31);
        }
        uVar23 = (long)(int)local_a38 + 1;
        if ((int)(local_a38._4_4_ & 0x7fffffff) <= (int)local_a38) {
          FUN_0133bb88(&local_a40,PTR_PTR_047d1a50 + 0x20,uVar23);
        }
        local_a40[(int)local_a38] = iVar15;
        lVar30 = lVar30 + 1;
        local_a38 = CONCAT44(local_a38._4_4_,(int)uVar23);
      } while (lVar30 < local_9a8);
    }
    if (0 < (int)uVar23) {
      lVar32 = 0;
      do {
        plVar38 = *(long **)(*plVar37 + (long)(int)local_a40[lVar32] * 8);
        iVar31 = (int)plVar38[1];
        if (0 < iVar31) {
          lVar30 = 0;
          do {
            lVar17 = *(long *)(*param_1 + 0x38);
            uVar23 = (ulong)*(uint *)(*plVar38 + lVar30 * 4) & 0xffffff;
            if ((*(byte *)(lVar17 + uVar23 * 0xc0 + 0x54) >> 3 & 1) != 0) {
              FUN_02f35f08(*param_1,*(undefined4 *)(lVar17 + uVar23 * 0xc0 + 0x50),1);
              iVar31 = (int)plVar38[1];
            }
            lVar30 = lVar30 + 1;
          } while (lVar30 < iVar31);
          uVar23 = local_a38 & 0xffffffff;
        }
        lVar32 = lVar32 + 1;
      } while (lVar32 < (int)uVar23);
    }
  }
  if (0 < (int)local_898) {
    lVar32 = 0;
    do {
      FUN_02f35f08(*param_1,*(undefined4 *)
                             (*(long *)(*param_1 + 0x38) +
                              ((ulong)*(uint *)(*(long *)(lVar33 + 0x150) +
                                                (ulong)*(uint *)(local_8a0 + lVar32 * 4) * 0x80 +
                                               0x48) & 0xffffff) * 0xc0 + 0x50),1);
      *(undefined4 *)(param_1[0x71] + (long)*(int *)(local_8a0 + lVar32 * 4) * 0x20 + 0x10) =
           0xffffffff;
      lVar32 = lVar32 + 1;
    } while (lVar32 < (int)local_898);
  }
  if (param_7 != (long *)0x0) {
    lVar33 = *param_7;
    if (((*(byte *)(lVar33 + 0x38) & 1) != 0) && (param_7[6] != 0)) {
      puVar13 = (undefined8 *)param_7[2];
      uVar23 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
      if ((uVar23 <= (ulong)param_7[3]) && (param_7[2] = uVar23, puVar13 != (undefined8 *)0x0)) {
        *puVar13 = &DAT_03c4e575;
        puVar13[1] = *(undefined8 *)(param_7[6] + 8);
      }
    }
    puVar13 = (undefined8 *)param_7[2];
    uVar23 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= (ulong)param_7[3]) && (param_7[2] = uVar23, puVar13 != (undefined8 *)0x0)) {
      *puVar13 = "StRaiseEvents";
      uVar12 = nn::os::GetSystemTick();
      puVar13[1] = uVar12;
    }
    if (*(code **)(lVar33 + 0x20) != (code *)0x0) {
      (**(code **)(lVar33 + 0x20))(*(undefined8 *)(lVar33 + 0x28));
    }
    if (*(code **)(lVar33 + 0x18) != (code *)0x0) {
      (**(code **)(lVar33 + 0x18))("RaiseEvents",0xb,*(undefined8 *)(lVar33 + 0x28));
    }
  }
  if (0 < (int)param_1[0x6b]) {
    lVar33 = 0;
    do {
      puVar39 = (ushort *)(param_1[0x6a] + lVar33 * 0x20);
      puVar35 = *(uint **)(*(long *)(param_2 + 0x540) + (long)*(int *)(param_2 + 0x548) * 8 + -8);
      uVar6 = *puVar39;
      puVar13 = *(undefined8 **)(param_2 + 0x4e0);
      uVar14 = *puVar35;
      iVar31 = 4000 - (uint)uVar6;
      puVar27 = puVar35;
      if (iVar31 <= (int)(uVar14 >> 0x10)) {
        do {
          uVar14 = *(int *)(puVar13 + 0xb) - 1;
          if (*(int *)(puVar13 + 0xb) < 1) {
            lVar32 = puVar13[1];
            (**(code **)(*(long *)*puVar13 + 0x20))((long *)*puVar13,lVar32,6);
            *(undefined4 *)(puVar13 + 0xb) = 5;
            puVar21 = (undefined8 *)(lVar32 + 0x28);
          }
          else {
            *(uint *)(puVar13 + 0xb) = uVar14;
            puVar21 = (undefined8 *)(puVar13[1] + (ulong)uVar14 * 8);
          }
          puVar35 = (uint *)*puVar21;
          puVar35[4] = 0;
          puVar35[5] = 0;
          puVar35[6] = 0;
          puVar35[7] = 0;
          puVar35[0] = 0;
          puVar35[1] = 0;
          puVar35[2] = 0;
          puVar35[3] = 0;
          puVar35[1] = *(uint *)(param_2 + 0x548);
          iVar15 = *(int *)(param_2 + 0x548);
          lVar32 = (long)iVar15;
          if ((int)(*(uint *)(param_2 + 0x54c) & 0x7fffffff) <= iVar15) {
            FUN_031c25b4(param_2 + 0x540,PTR_PTR_047d1a50,lVar32 + 1);
            iVar15 = *(int *)(param_2 + 0x548);
          }
          *(uint **)(*(long *)(param_2 + 0x540) + (long)iVar15 * 8) = puVar35;
          *(int *)(param_2 + 0x548) = (int)(lVar32 + 1);
          *(uint **)(puVar27 + 2) = puVar35;
          uVar14 = *puVar35;
          puVar27 = puVar35;
        } while (iVar31 <= (int)(uVar14 >> 0x10));
      }
      do {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar35,0x10);
        if (bVar11) {
          *puVar35 = *puVar35 + ((uint)uVar6 << 0x10 | 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar16 = (uint)(uVar6 >> 2);
      *(int *)(param_2 + 0x538) = *(int *)(param_2 + 0x538) + 1;
      if (uVar16 != 0) {
        puVar26 = (undefined4 *)((long)puVar35 + (ulong)(uVar14 >> 0x10) + 0x20);
        uVar14 = uVar6 >> 2 & 7;
        if (6 < uVar16 - 1) {
          iVar31 = -(uVar16 & 0x3ff8);
          puVar19 = puVar26;
          do {
            *puVar19 = *(undefined4 *)puVar39;
            puVar19[1] = *(undefined4 *)(puVar39 + 2);
            puVar19[2] = *(undefined4 *)(puVar39 + 4);
            puVar19[3] = *(undefined4 *)(puVar39 + 6);
            puVar19[4] = *(undefined4 *)(puVar39 + 8);
            puVar19[5] = *(undefined4 *)(puVar39 + 10);
            puVar19[6] = *(undefined4 *)(puVar39 + 0xc);
            puVar1 = puVar39 + 0xe;
            puVar39 = puVar39 + 0x10;
            puVar26 = puVar19 + 8;
            iVar31 = iVar31 + 8;
            puVar19[7] = *(undefined4 *)puVar1;
            puVar19 = puVar26;
          } while (iVar31 != 0);
        }
        if ((uVar6 >> 2 & 7) != 0) {
          do {
            uVar14 = uVar14 - 1;
            *puVar26 = *(undefined4 *)puVar39;
            puVar26 = puVar26 + 1;
            puVar39 = puVar39 + 2;
          } while (uVar14 != 0);
        }
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 < (int)param_1[0x6b]);
  }
  uVar23 = local_a38;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  puVar3 = PTR_PTR_047d1a50;
  uVar22 = (ulong)local_a38._4_4_;
  local_a38 = (ulong)local_a38._4_4_ << 0x20;
  if ((-1 < (long)uVar23) && (local_a40 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_a40,uVar22 << 2);
  }
  local_9a8 = 0;
  if ((-1 < (int)local_9a4) && (local_9b0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))(puVar3 + 0x20,local_9b0,(ulong)local_9a4 << 3);
  }
  lVar33 = local_898;
  uVar23 = (ulong)local_898._4_4_;
  local_898 = (ulong)local_898._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_8a0 != 0)) {
    (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))(puVar3 + 0x20,local_8a0,uVar23 << 2);
  }
  local_888 = 0;
  if ((-1 < (int)local_884) && (local_890 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))(puVar3 + 0x20,local_890,(ulong)local_884 << 2);
  }
  lVar33 = local_478;
  uVar23 = (ulong)local_478._4_4_;
  local_478 = (ulong)local_478._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_480 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))(puVar3 + 0x20,local_480,uVar23 << 2);
  }
  return;
}


