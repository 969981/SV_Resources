/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309b83c; name: FUN_0309b83c
 */


undefined8 FUN_0309b83c(long param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  short sVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  uint *local_88;
  uint *puStack_80;
  uint local_78;
  undefined8 local_74;
  long *local_68;
  long local_48;
  
  lVar25 = tpidr_el0;
  lVar10 = *(long *)(lVar25 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar10;
  }
  plVar27 = *(long **)(lVar10 + 0x3e0);
  if (plVar27 != (long *)0x0) {
    lVar10 = *plVar27;
    if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
      (**(code **)(lVar10 + 0x18))("computeRegions",0xe,*(undefined8 *)(lVar10 + 0x28));
    }
    puVar3 = (undefined8 *)plVar27[2];
    uVar11 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar27[3]) && (plVar27[2] = uVar11, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TtcomputeRegions";
      uVar6 = nn::os::GetSystemTick();
      puVar3[1] = uVar6;
    }
    if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar27[6] != 0)) {
      puVar3 = (undefined8 *)plVar27[2];
      uVar11 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar27[3]) && (plVar27[2] = uVar11, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar27[6] + 8);
      }
    }
    lVar10 = *(long *)(lVar25 + 0x1000b8);
  }
  uVar23 = *(uint *)(param_1 + 0x20);
  uVar11 = (ulong)(int)uVar23;
  local_68 = plVar27;
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar10;
  }
  lVar26 = uVar11 * 4;
  lVar25 = *(long *)(*(long *)(lVar10 + 0x3d0) + 0x10);
  local_48 = lVar26;
  if ((*(long *)(lVar25 + 8) == 0) && (lVar25 != 0)) {
    local_88 = (uint *)(lVar26 + 0x3fU & 0xffffffffffffffc0);
    if (local_88 <= *(uint **)(lVar25 + 0x28)) {
      puVar7 = *(uint **)(lVar25 + 0x38);
      if ((ulong)((long)local_88 + (long)puVar7) <= *(ulong *)(lVar25 + 0x40)) {
        *(long *)(lVar25 + 0x38) = (long)local_88 + (long)puVar7;
        goto LAB_0309ba0c;
      }
    }
    puVar7 = (uint *)FUN_031cf3b4(lVar25,&local_88);
  }
  else {
    puVar7 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_48,0x40);
    lVar25 = 0;
  }
LAB_0309ba0c:
  puStack_80 = puVar7 + uVar11;
  local_88 = puVar7;
  local_78 = uVar23;
  if (0 < (int)uVar23) {
    *puVar7 = 0xffffffff;
    uVar11 = (ulong)uVar23;
    if (1 < (int)uVar23) {
      memset(puVar7 + 1,0xff,uVar11 * 4 - 4);
    }
  }
  iVar9 = (int)uVar11;
  iVar16 = *(int *)(param_1 + 0x20);
  if (0 < iVar16) {
    uVar12 = 0;
    do {
      piVar1 = (int *)(*(long *)(param_1 + 0x18) + uVar12 * 0x10);
      sVar19 = *(short *)((long)piVar1 + 10);
      piVar2 = piVar1 + 1;
      if (sVar19 < 1) {
        piVar2 = piVar1;
      }
      iVar22 = *piVar2;
      if (iVar22 != -1) {
        puVar13 = (uint *)((long)local_88 + ((long)(uVar12 << 0x20) >> 0x1e));
        do {
          lVar10 = *(long *)(param_1 + 0x28);
          lVar18 = (long)iVar22;
          bVar4 = *(byte *)(lVar10 + (long)iVar22 * 0x14 + 0x10);
          if ((bVar4 >> 6 & 1) == 0) {
            if ((bVar4 >> 4 & 1) == 0) {
              uVar23 = *(uint *)(lVar10 + lVar18 * 0x14 + 0xc);
              if (uVar23 != 0xffffffff) {
LAB_0309bac8:
                uVar21 = uVar12 & 0xffffffff;
                do {
                  uVar20 = (uint)uVar21;
                  uVar21 = (ulong)local_88[(int)uVar20];
                } while (-1 < (int)local_88[(int)uVar20]);
                uVar14 = *puVar13;
                uVar24 = (uint)uVar12;
                if (-1 < (int)uVar14) {
                  puVar8 = puVar13;
                  do {
                    uVar24 = uVar14;
                    *puVar8 = uVar20;
                    puVar8 = local_88 + uVar24;
                    uVar14 = *puVar8;
                  } while (-1 < (int)*puVar8);
                }
                uVar20 = uVar23 & 0x3fffff;
                do {
                  uVar14 = uVar20;
                  uVar20 = local_88[(int)uVar14];
                } while (-1 < (int)local_88[(int)uVar14]);
                uVar23 = uVar23 & 0x3fffff;
                while( true ) {
                  uVar20 = local_88[uVar23];
                  if ((int)uVar20 < 0) break;
                  local_88[uVar23] = uVar14;
                  uVar23 = uVar20;
                }
                if (uVar24 != uVar23) {
                  if ((int)uVar24 < (int)uVar23) {
                    local_88[(int)uVar24] = local_88[(int)uVar23] + local_88[(int)uVar24];
                    local_88[(int)uVar23] = uVar24;
                  }
                  else {
                    local_88[(int)uVar23] = local_88[(int)uVar23] + local_88[(int)uVar24];
                    local_88[(int)uVar24] = uVar23;
                  }
                }
                sVar19 = *(short *)((long)piVar1 + 10);
              }
            }
            else if ((((bVar4 >> 5 & 1) == 0) &&
                     (uVar23 = *(uint *)(lVar10 + lVar18 * 0x14 + 0xc), uVar23 != 0xffffffff)) &&
                    ((*(byte *)(lVar10 + ((ulong)*(uint *)(lVar10 + lVar18 * 0x14 + 8) & 0x3fffff) *
                                         0x14 + 0x10) >> 5 & 1) == 0)) goto LAB_0309bac8;
          }
          iVar16 = piVar1[1];
          iVar5 = iVar16 + sVar19 + -1;
          if ((iVar22 < iVar16) || (iVar5 <= iVar22)) {
            iVar16 = *piVar1;
            if (iVar5 != iVar22) {
              if ((iVar16 <= iVar22) && (iVar22 < iVar16 + (short)piVar1[2] + -1))
              goto LAB_0309bbdc;
              break;
            }
          }
          else {
LAB_0309bbdc:
            iVar16 = iVar22 + 1;
          }
          iVar22 = iVar16;
        } while (iVar22 != -1);
        iVar16 = *(int *)(param_1 + 0x20);
      }
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)iVar16);
  }
  uVar23 = *(uint *)(param_2 + 1);
  if (0 < (int)uVar23) {
    uVar12 = 0;
    do {
      puVar13 = (uint *)(*param_2 + uVar12 * 8);
      uVar20 = *puVar13;
      uVar14 = puVar13[1];
      uVar21 = (ulong)(int)uVar20;
      uVar15 = (ulong)(int)uVar14;
      uVar24 = uVar20;
      do {
        uVar17 = uVar24;
        uVar24 = local_88[(int)uVar17];
      } while (-1 < (int)local_88[(int)uVar17]);
      while( true ) {
        uVar24 = local_88[uVar21];
        if ((int)uVar24 < 0) break;
        local_88[uVar21] = uVar17;
        uVar21 = (ulong)uVar24;
        uVar20 = uVar24;
      }
      uVar24 = uVar14;
      do {
        uVar17 = uVar24;
        uVar24 = local_88[(int)uVar17];
      } while (-1 < (int)local_88[(int)uVar17]);
      while( true ) {
        uVar24 = local_88[uVar15];
        if ((int)uVar24 < 0) break;
        local_88[uVar15] = uVar17;
        uVar15 = (ulong)uVar24;
        uVar14 = uVar24;
      }
      if (uVar20 != uVar14) {
        if ((int)uVar20 < (int)uVar14) {
          local_88[(int)uVar20] = local_88[(int)uVar14] + local_88[(int)uVar20];
          local_88[(int)uVar14] = uVar20;
        }
        else {
          local_88[(int)uVar14] = local_88[(int)uVar14] + local_88[(int)uVar20];
          local_88[(int)uVar20] = uVar14;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar23);
  }
  if (iVar9 == 0) {
    local_74 = 1;
    iVar16 = 0;
  }
  else {
    puVar13 = local_88;
    do {
      if (-1 < (int)*puVar13) {
        uVar11 = (ulong)((int)uVar11 - 1);
        for (uVar23 = local_88[*puVar13]; -1 < (int)uVar23; uVar23 = local_88[uVar23]) {
          *puVar13 = uVar23;
        }
      }
      iVar16 = (int)uVar11;
      puVar13 = puVar13 + 1;
    } while (puVar13 != local_88 + iVar9);
    local_74 = CONCAT44(iVar16,1);
    uVar23 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
    if ((int)uVar23 < iVar16) {
      FUN_0133bb88(param_3,PTR_PTR_047d1a50,(long)iVar16);
      uVar23 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
    }
    if ((int)uVar23 < iVar16) {
      FUN_02e9b320(param_3,PTR_PTR_047d1a50,(long)iVar16);
    }
  }
  uVar23 = local_78;
  iVar9 = (int)param_3[1];
  if ((int)param_3[1] != iVar16) {
    *(int *)(param_3 + 1) = iVar16;
    iVar9 = iVar16;
  }
  uVar11 = (ulong)local_78;
  lVar10 = *param_3;
  if (0 < (int)local_78) {
    uVar20 = 0;
    puVar13 = local_88;
    do {
      uVar14 = *puVar13;
      if ((int)uVar14 < 0) {
        *(uint *)(lVar10 + (long)(int)uVar20 * 4) = -uVar14;
        uVar14 = uVar20;
        uVar20 = uVar20 + 1;
      }
      else {
        uVar14 = local_88[uVar14];
      }
      uVar11 = uVar11 - 1;
      *puVar13 = uVar14;
      puVar13 = puVar13 + 1;
    } while (uVar11 != 0);
    lVar10 = *param_3;
    iVar9 = (int)param_3[1];
  }
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < (int)local_78) {
    FUN_02e9b320(param_4,PTR_PTR_047d1a50,(long)(int)local_78);
  }
  uVar20 = *(uint *)(param_4 + 1);
  if (*(uint *)(param_4 + 1) != uVar23) {
    *(uint *)(param_4 + 1) = uVar23;
    uVar20 = uVar23;
  }
  FUN_031c1d04(&local_88,lVar10,lVar10 + (long)iVar9 * 4,*param_4,*param_4 + (long)(int)uVar20 * 4);
  if (lVar25 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar7,lVar26);
    goto LAB_0309bedc;
  }
  uVar11 = lVar26 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar25 + 0x28) < uVar11) || (*(long *)(lVar25 + 0x38) != uVar11 + (long)puVar7)) {
    if (puVar7 == (uint *)0x0) goto LAB_0309bedc;
    if (*(ulong *)(lVar25 + 0x28) < uVar11 + 0x40) {
      *(int *)(*(long *)(lVar25 + 0x30) + 0x20) = *(int *)(*(long *)(lVar25 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar25 + 0x10) + 0x18))
                (*(long **)(lVar25 + 0x10),(long)puVar7 - (long)(int)puVar7[-1],uVar11 + 0x44);
      goto LAB_0309bedc;
    }
    if (*(long *)(lVar25 + 0x38) != uVar11 + (long)puVar7) {
      FUN_031cf778(lVar25,puVar7);
      goto LAB_0309bedc;
    }
    *(uint **)(lVar25 + 0x38) = puVar7;
  }
  else {
    *(uint **)(lVar25 + 0x38) = puVar7;
    if (*(uint **)(lVar25 + 0x48) != puVar7) goto LAB_0309bedc;
  }
  FUN_031cf578(lVar25);
LAB_0309bedc:
  if (plVar27 != (long *)0x0) {
    lVar25 = *plVar27;
    if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar27[6] != 0)) {
      puVar3 = (undefined8 *)plVar27[2];
      uVar11 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar27[3]) && (plVar27[2] = uVar11, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar27[6] + 8);
      }
    }
    puVar3 = (undefined8 *)plVar27[2];
    uVar11 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar27[3]) && (plVar27[2] = uVar11, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03c2d363;
      uVar6 = nn::os::GetSystemTick();
      puVar3[1] = uVar6;
    }
    if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
      (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
    }
  }
  return 0xffffffff;
}


