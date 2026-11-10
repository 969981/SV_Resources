/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a5864; name: FUN_030a5864
 */


bool FUN_030a5864(long param_1,undefined8 param_2,int *param_3,int *param_4,int *param_5,
                 long *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  long *plVar22;
  long *plVar23;
  int iVar24;
  int *piVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long *local_80;
  int local_78 [2];
  int local_70 [4];
  
  lVar20 = tpidr_el0;
  lVar13 = *(long *)(lVar20 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar13;
  }
  plVar22 = *(long **)(lVar13 + 0x3e0);
  if (plVar22 != (long *)0x0) {
    lVar13 = *plVar22;
    if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
      (**(code **)(lVar13 + 0x18))("stepCompactOwnedEdges",0x15,*(undefined8 *)(lVar13 + 0x28));
    }
    puVar2 = (undefined8 *)plVar22[2];
    uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar22[3]) && (plVar22[2] = uVar14, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtstepCompactOwnedEdges";
      uVar10 = nn::os::GetSystemTick();
      puVar2[1] = uVar10;
    }
    if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar22[6] != 0)) {
      puVar2 = (undefined8 *)plVar22[2];
      uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar22[3]) && (plVar22[2] = uVar14, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar22[6] + 8);
      }
    }
  }
  local_80 = plVar22;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar13 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar13 = FUN_0307d71c();
  }
  local_90 = 0;
  local_88 = -0x8000000000000000;
  FUN_03099700(lVar13,&local_90);
  iVar27 = *(int *)PTR_DAT_047e4f38;
  lVar15 = *(long *)(lVar20 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar15;
  }
  if (*(long *)(lVar15 + (long)iVar27 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  local_a0 = 0;
  local_98 = -0x8000000000000000;
  FUN_03099938(lVar13,&local_a0);
  iVar3 = *(int *)(*(long *)(param_1 + 0x20) + 0x30);
  iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0xe8);
  iVar21 = *param_5;
  iVar5 = *param_3;
  iVar27 = *param_4;
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  if (0 < iVar4) {
    FUN_0309d278(&local_b0,PTR_PTR_047d1a50 + 0x20,iVar4);
  }
  iVar24 = *(int *)PTR_DAT_047e4f38;
  local_c0 = 0;
  local_b8 = -0x8000000000000000;
  lVar15 = *(long *)(lVar20 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar15;
  }
  if (*(long *)(lVar15 + (long)iVar24 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  iVar24 = iVar5;
  if ((0 < iVar21) && (iVar5 < iVar4)) {
    uVar18 = 0;
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    do {
      uVar6 = *(uint *)(local_90 + (long)iVar24 * 4);
      if ((int)uVar6 < 0) {
        uVar6 = *(uint *)(local_a0 + (long)iVar24 * 4);
        if (-1 < (int)uVar6) {
          uVar16 = *(uint *)(*(long *)(lVar13 + 0xa0) + (ulong)uVar6 * 4);
          piVar25 = (int *)(*(long *)(lVar13 + 0xb0) + (ulong)uVar6 * 0x10);
          uVar17 = uVar16;
          if (piVar25 != (int *)0x0) goto LAB_030a5af8;
        }
LAB_030a5bf4:
        *(undefined4 *)(local_b0 + (long)(int)local_a8 * 4) = 0xffffffff;
        uVar6 = uVar18 + 0x38db40;
        iVar24 = iVar24 + 1;
        iVar21 = iVar21 + -2;
        bVar9 = 0xffc724bf < uVar18;
        local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
        uVar18 = uVar6;
        if (bVar9) {
          iVar12 = *(int *)PTR_DAT_047e4f38;
          lVar15 = *(long *)(lVar20 + 0x1000b8);
          if (lVar15 == 0) {
            lVar15 = FUN_00e5d3b4();
            *(long *)(lVar20 + 0x1000b8) = lVar15;
          }
          if (*(long *)(lVar15 + (long)iVar12 * 8 + 1000) != 0) goto LAB_030a5e40;
        }
      }
      else {
        uVar16 = *(int *)(lVar13 + 0x20) + uVar6;
        uVar17 = *(uint *)(*(long *)(lVar13 + 0x168) + (long)(int)uVar16 * 4);
        if ((int)uVar17 < 0) {
          uVar17 = 0xffffffff;
        }
        piVar25 = (int *)(*(long *)(lVar13 + 0xd0) + (ulong)uVar6 * 0x10);
        if (piVar25 == (int *)0x0) goto LAB_030a5bf4;
LAB_030a5af8:
        if (*piVar25 == iVar24 + iVar3) {
          iVar12 = *(int *)(lVar13 + 0x30);
          iVar28 = piVar25[2];
          *piVar25 = iVar12 + iVar27;
          if (0xffc12ca4 < uVar18) {
            iVar26 = *(int *)PTR_DAT_047e4f38;
            lVar15 = *(long *)(lVar20 + 0x1000b8);
            if (lVar15 == 0) {
              lVar15 = FUN_00e5d3b4();
              *(long *)(lVar20 + 0x1000b8) = lVar15;
            }
            if (*(long *)(lVar15 + (long)iVar26 * 8 + 1000) != 0) {
              FUN_03231bdc();
            }
          }
          uVar6 = uVar18 + 0x3ed35b;
          iVar19 = (int)(short)iVar28;
          iVar26 = iVar19;
          if (0 < iVar19) {
            do {
              *(int *)(local_b0 + (long)(int)local_a8 * 4) = iVar12 + iVar27;
              local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
              local_78[0] = iVar24;
              local_70[0] = iVar27;
              FUN_0309c6ec(param_2,lVar13,local_70,local_78);
              iVar27 = iVar27 + 1;
              iVar24 = iVar24 + 1;
              iVar26 = iVar26 + -1;
            } while (iVar26 != 0);
          }
          iVar21 = (short)iVar28 * -3 + iVar21;
          uVar18 = uVar6 + iVar19 * 0x48d3a2;
          if (!CARRY4(uVar6,iVar19 * 0x48d3a2)) goto LAB_030a5df8;
          iVar12 = *(int *)PTR_DAT_047e4f38;
          lVar15 = *(long *)(lVar20 + 0x1000b8);
          if (lVar15 == 0) {
            lVar15 = FUN_00e5d3b4();
            *(long *)(lVar20 + 0x1000b8) = lVar15;
          }
          if (*(long *)(lVar15 + (long)iVar12 * 8 + 1000) == 0) goto LAB_030a5df8;
LAB_030a5e40:
          FUN_03231bdc();
        }
        else {
          iVar12 = *(int *)(lVar13 + 0x30);
          sVar7 = *(short *)((long)piVar25 + 10);
          piVar25[1] = iVar12 + iVar27;
          if (0xffc158fb < uVar18) {
            iVar28 = *(int *)PTR_DAT_047e4f38;
            lVar15 = *(long *)(lVar20 + 0x1000b8);
            if (lVar15 == 0) {
              lVar15 = FUN_00e5d3b4();
              *(long *)(lVar20 + 0x1000b8) = lVar15;
            }
            if (*(long *)(lVar15 + (long)iVar28 * 8 + 1000) != 0) {
              FUN_03231bdc();
            }
          }
          iVar26 = (int)sVar7;
          uVar6 = uVar18 + 0x3ea704;
          iVar28 = iVar26;
          if (iVar26 < 1) {
            bVar9 = false;
          }
          else {
            lVar15 = (long)iVar24 * 0x14 + 0x10;
            bVar9 = false;
            do {
              if ((*(byte *)(*(long *)(lVar13 + 0xe0) + lVar15) >> 3 & 1) == 0) {
                *(int *)(local_b0 + (long)(int)local_a8 * 4) = iVar27 + iVar12;
                local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
                local_78[0] = iVar24;
                local_70[0] = iVar27;
                FUN_0309c6ec(param_2,lVar13,local_70,local_78);
                iVar27 = iVar27 + 1;
              }
              else {
                *(undefined4 *)(local_b0 + (long)(int)local_a8 * 4) = 0xffffffff;
                local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + 1);
                iVar28 = iVar28 + -1;
                bVar9 = true;
              }
              iVar24 = iVar24 + 1;
              lVar15 = lVar15 + 0x14;
              iVar26 = iVar26 + -1;
            } while (iVar26 != 0);
          }
          uVar8 = sVar7 * 0x492f70;
          uVar18 = uVar6 + uVar8;
          if (CARRY4(uVar6,uVar8)) {
            iVar12 = *(int *)PTR_DAT_047e4f38;
            lVar15 = *(long *)(lVar20 + 0x1000b8);
            if (lVar15 == 0) {
              lVar15 = FUN_00e5d3b4();
              *(long *)(lVar20 + 0x1000b8) = lVar15;
            }
            if (*(long *)(lVar15 + (long)iVar12 * 8 + 1000) != 0) {
              FUN_03231bdc();
            }
          }
          iVar21 = sVar7 * -3 + iVar21;
          *(short *)((long)piVar25 + 10) = (short)iVar28;
          if (iVar28 == 0) {
            piVar25[1] = -1;
          }
          if (bVar9) {
            if (uVar17 != 0xffffffff) {
              iVar28 = *(int *)(*(long *)(param_1 + 0x20) + 0x17c);
              iVar12 = (int)param_6[1];
              lVar15 = (long)iVar12;
              if ((int)(*(uint *)((long)param_6 + 0xc) & 0x7fffffff) <= iVar12) {
                FUN_0305c42c(param_6,PTR_PTR_047d1a50 + 0x20,lVar15 + 1);
                iVar12 = (int)param_6[1];
              }
              *(uint *)(*param_6 + (long)iVar12 * 4) = uVar17 | iVar28 << 0x16;
              *(int *)(param_6 + 1) = (int)(lVar15 + 1);
            }
            lVar15 = (long)(int)local_b8;
            if ((int)(local_b8._4_4_ & 0x7fffffff) <= (int)local_b8) {
              FUN_03078498(&local_c0,puVar1,lVar15 + 1);
            }
            *(uint *)(local_c0 + (long)(int)local_b8 * 4) = uVar16;
            local_b8 = CONCAT44(local_b8._4_4_,(int)(lVar15 + 1));
          }
        }
      }
LAB_030a5df8:
    } while ((iVar24 < iVar4) && (0 < iVar21));
  }
  *param_5 = iVar21;
  *param_3 = iVar24;
  *param_4 = iVar27;
  iVar21 = *(int *)PTR_DAT_047e4f38;
  lVar15 = *(long *)(lVar20 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar15;
  }
  if (*(long *)(lVar15 + (long)iVar21 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (iVar24 == iVar4) {
    *(int *)(lVar13 + 0x164) =
         (iVar27 - *(int *)(*(long *)(param_1 + 0x20) + 0xe8)) + *(int *)(lVar13 + 0x164);
    if ((int)(*(uint *)(lVar13 + 0xec) & 0x7fffffff) < iVar27) {
      FUN_0309515c(lVar13 + 0xe0,PTR_PTR_047d1a50,(long)iVar27);
    }
    if (*(int *)(lVar13 + 0xe8) != iVar27) {
      *(int *)(lVar13 + 0xe8) = iVar27;
    }
    if ((int)(*(uint *)(lVar13 + 0x11c) & 0x7fffffff) < iVar27) {
      FUN_03095650(lVar13 + 0x110,PTR_PTR_047d1a50,(long)iVar27);
    }
    if (*(int *)(lVar13 + 0x118) != iVar27) {
      *(int *)(lVar13 + 0x118) = iVar27;
    }
    lVar15 = (long)*(int *)(lVar13 + 0x60) * (long)iVar27;
    iVar21 = (int)lVar15;
    if ((int)(*(uint *)(lVar13 + 0x15c) & 0x7fffffff) < iVar21) {
      FUN_02e9b320(lVar13 + 0x150,PTR_PTR_047d1a50,lVar15);
    }
    if (*(int *)(lVar13 + 0x158) != iVar21) {
      *(int *)(lVar13 + 0x158) = iVar21;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar13 = (long)*(int *)(param_1 + 0x40) * 0x18;
      plVar23 = *(long **)(param_1 + 0x38);
      do {
        lVar15 = *plVar23;
        if (lVar15 != 0) {
          if ((char)plVar23[2] != '\x01') {
            lVar15 = FUN_03065a74(plVar23);
          }
          local_70[0] = iVar5 + iVar3;
          FUN_030772ec(lVar15,&local_b0,local_70,iVar27 + iVar3);
        }
        plVar23 = plVar23 + 3;
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != 0);
    }
  }
  else if (*(int *)(param_1 + 0x40) != 0) {
    lVar13 = (long)*(int *)(param_1 + 0x40) * 0x18;
    plVar23 = *(long **)(param_1 + 0x38);
    iVar27 = *(int *)(*(long *)(param_1 + 0x20) + 0x30);
    iVar21 = *(int *)(*(long *)(param_1 + 0x20) + 0xe8);
    do {
      lVar15 = *plVar23;
      if (lVar15 != 0) {
        if ((char)plVar23[2] != '\x01') {
          lVar15 = FUN_03065a74(plVar23);
        }
        local_70[0] = iVar5 + iVar3;
        FUN_030772ec(lVar15,&local_b0,local_70,iVar21 + iVar27);
      }
      plVar23 = plVar23 + 3;
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != 0);
  }
  iVar27 = *(int *)PTR_DAT_047e4f38;
  lVar13 = *(long *)(lVar20 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar13;
  }
  if (*(long *)(lVar13 + (long)iVar27 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (0 < (int)local_b8) {
    lVar13 = 0;
    iVar27 = (int)local_b8;
    do {
      if (*(int *)(param_1 + 0x40) != 0) {
        iVar27 = *(int *)(local_c0 + lVar13 * 4);
        plVar23 = *(long **)(param_1 + 0x38);
        lVar15 = (long)*(int *)(param_1 + 0x40) * 0x18;
        do {
          lVar11 = *plVar23;
          if (lVar11 != 0) {
            if ((char)plVar23[2] != '\x01') {
              lVar11 = FUN_03065a74(plVar23);
            }
            local_70[0] = iVar27;
            FUN_03077488(lVar11,param_1,local_70);
          }
          plVar23 = plVar23 + 3;
          lVar15 = lVar15 + -0x18;
        } while (lVar15 != 0);
        iVar27 = (int)local_b8;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar27);
  }
  iVar27 = *(int *)PTR_DAT_047e4f38;
  lVar13 = *(long *)(lVar20 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar20 + 0x1000b8) = lVar13;
  }
  if (*(long *)(lVar13 + (long)iVar27 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  lVar20 = local_b8;
  uVar14 = (ulong)local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < lVar20) && (local_c0 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_c0,uVar14 << 2);
  }
  lVar20 = local_a8;
  uVar14 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar20) && (local_b0 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_b0,uVar14 << 2);
  }
  lVar20 = local_98;
  uVar14 = (ulong)local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < lVar20) && (local_a0 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_a0,uVar14 << 2);
  }
  lVar20 = local_88;
  uVar14 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar20) && (local_90 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_90,uVar14 << 2);
  }
  if (plVar22 != (long *)0x0) {
    lVar20 = *plVar22;
    if (((*(byte *)(lVar20 + 0x38) & 1) != 0) && (plVar22[6] != 0)) {
      puVar2 = (undefined8 *)plVar22[2];
      uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar22[3]) && (plVar22[2] = uVar14, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar22[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar22[2];
    uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar22[3]) && (plVar22[2] = uVar14, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar10 = nn::os::GetSystemTick();
      puVar2[1] = uVar10;
    }
    if (*(code **)(lVar20 + 0x20) != (code *)0x0) {
      (**(code **)(lVar20 + 0x20))(*(undefined8 *)(lVar20 + 0x28));
    }
  }
  return iVar24 == iVar4;
}


