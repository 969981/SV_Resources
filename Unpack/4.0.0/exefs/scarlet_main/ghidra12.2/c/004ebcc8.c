/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ebcc8; name: FUN_004ebcc8
 */


long * FUN_004ebcc8(long param_1,long param_2,undefined8 param_3,ulong *param_4,ulong *param_5,
                   undefined8 *param_6,long *param_7,ulong param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  ulong *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined **local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  long local_80;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  
  local_80 = param_2;
  if ((*(char *)(param_1 + 0x10) != '\0') &&
     (lVar27 = *(long *)(*(long *)(param_2 + 0x10) + 0x10), lVar8 = FUN_004a4558(), lVar27 == lVar8)
     ) {
    plVar9 = (long *)thunk_FUN_005021d8();
                    /* WARNING: Could not recover jumptable at 0x004ebdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar9 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,param_2);
    return plVar9;
  }
  plVar9 = (long *)FUN_004ed13c(*(undefined8 *)(param_1 + 0x18),&local_80);
  if (*plVar9 != 0) {
    return *(long **)(*plVar9 + 0x40);
  }
  puVar10 = (uint *)FUN_0049e770(PTR_FUN_047cba38,0x50);
  if (puVar10 != (uint *)0x0) {
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
  }
  *plVar9 = (long)puVar10;
  *(long *)(puVar10 + 8) = local_80;
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 == 0) {
    uVar16 = *(undefined8 *)(*(long *)(local_80 + 0x10) + 0x10);
    *(long *)(puVar10 + 4) = param_1;
    *(undefined8 *)(puVar10 + 6) = uVar16;
    uVar18 = *(uint *)(local_80 + 0x6c);
  }
  else {
    *(long *)(puVar10 + 4) = param_1;
    *(long *)(puVar10 + 6) = lVar8;
    uVar18 = *(uint *)(local_80 + 0x6c);
  }
  if ((int)uVar18 < 1) {
    iVar22 = 0;
  }
  else {
    uVar15 = (ulong)uVar18;
    if (uVar18 < 4) {
      uVar21 = 0;
      iVar22 = 0;
    }
    else {
      uVar21 = uVar15 & 0xfffffffc;
      iVar14 = 0;
      iVar24 = 0;
      iVar23 = 0;
      iVar22 = 0;
      piVar25 = (int *)(*(long *)(local_80 + 0x30) + 0x78);
      uVar26 = uVar21;
      do {
        iVar4 = piVar25[-0x18];
        iVar5 = piVar25[-0xc];
        iVar2 = *piVar25;
        iVar3 = piVar25[0xc];
        if (iVar4 == 1) {
          param_4 = *(ulong **)(piVar25 + -0x16);
          if (iVar5 != 1) goto LAB_004ebe78;
LAB_004ebed8:
          param_5 = *(ulong **)(piVar25 + -10);
          if (iVar2 != 1) goto LAB_004ebe80;
LAB_004ebee4:
          param_6 = *(undefined8 **)(piVar25 + 2);
          if (iVar3 != 1) goto LAB_004ebe88;
LAB_004ebef0:
          param_7 = *(long **)(piVar25 + 0xe);
          if (iVar4 != 1) goto LAB_004ebe90;
LAB_004ebefc:
          param_8 = *param_4;
          if (iVar5 != 1) goto LAB_004ebe98;
LAB_004ebf08:
          param_4 = (ulong *)*param_5;
          if (iVar2 != 1) goto LAB_004ebea0;
LAB_004ebf14:
          param_5 = (ulong *)*param_6;
          if (iVar3 != 1) goto LAB_004ebea8;
LAB_004ebf20:
          param_6 = (undefined8 *)*param_7;
          if (iVar4 != 1) goto LAB_004ebeb0;
LAB_004ebf2c:
          uVar18 = (uint)*(byte *)(param_8 + 0x41);
          uVar12 = (uint)*(byte *)(param_8 + 0x41);
          if (iVar5 != 1) goto LAB_004ebeb8;
LAB_004ebf38:
          uVar18 = uVar12;
          param_8 = (ulong)*(byte *)((long)param_4 + 0x41);
          if (iVar2 != 1) goto LAB_004ebec0;
LAB_004ebf44:
          uVar12 = (uint)*(byte *)((long)param_5 + 0x41);
        }
        else {
          if (iVar5 == 1) goto LAB_004ebed8;
LAB_004ebe78:
          if (iVar2 == 1) goto LAB_004ebee4;
LAB_004ebe80:
          if (iVar3 == 1) goto LAB_004ebef0;
LAB_004ebe88:
          if (iVar4 == 1) goto LAB_004ebefc;
LAB_004ebe90:
          if (iVar5 == 1) goto LAB_004ebf08;
LAB_004ebe98:
          if (iVar2 == 1) goto LAB_004ebf14;
LAB_004ebea0:
          if (iVar3 == 1) goto LAB_004ebf20;
LAB_004ebea8:
          if (iVar4 == 1) goto LAB_004ebf2c;
LAB_004ebeb0:
          uVar18 = (uint)param_7;
          uVar12 = uVar18;
          if (iVar5 == 1) goto LAB_004ebf38;
LAB_004ebeb8:
          if (iVar2 == 1) goto LAB_004ebf44;
LAB_004ebec0:
          uVar12 = (uint)param_4;
        }
        uVar13 = (uint)param_5;
        if (iVar3 == 1) {
          uVar13 = (uint)*(byte *)((long)param_6 + 0x41);
        }
        uVar18 = (uVar18 ^ 1) & 0xff;
        param_6 = (undefined8 *)(ulong)uVar18;
        uVar1 = ((uint)param_8 ^ 1) & 0xff;
        param_7 = (long *)(ulong)uVar1;
        if (iVar4 != 1) {
          uVar18 = 1;
        }
        uVar12 = (uVar12 ^ 1) & 0xff;
        param_4 = (ulong *)(ulong)uVar12;
        if (iVar5 != 1) {
          uVar1 = 1;
        }
        uVar13 = (uVar13 ^ 1) & 0xff;
        param_5 = (ulong *)(ulong)uVar13;
        if (iVar2 != 1) {
          uVar12 = 1;
        }
        if (iVar3 != 1) {
          uVar13 = 1;
        }
        iVar14 = iVar14 + uVar18;
        iVar24 = iVar24 + uVar1;
        iVar23 = iVar23 + uVar12;
        iVar22 = iVar22 + uVar13;
        uVar26 = uVar26 - 4;
        piVar25 = piVar25 + 0x30;
      } while (uVar26 != 0);
      iVar22 = iVar22 + iVar23 + iVar24 + iVar14;
      if (uVar21 == uVar15) goto LAB_004ebf6c;
    }
    puVar20 = (undefined8 *)(*(long *)(local_80 + 0x30) + uVar21 * 0x30 + 0x20);
    lVar8 = uVar15 - uVar21;
    do {
      if (*(int *)(puVar20 + -1) == 1) {
        uVar18 = *(byte *)(*(long *)*puVar20 + 0x41) ^ 1;
      }
      else {
        uVar18 = 1;
      }
      iVar22 = iVar22 + uVar18;
      puVar20 = puVar20 + 6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
LAB_004ebf6c:
  uVar18 = *(int *)(local_80 + 0x68) + iVar22;
  lVar8 = FUN_0049e7b0(PTR_FUN_047cba38,
                       -(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2);
  lVar27 = *(long *)(puVar10 + 10);
  *(long *)(puVar10 + 10) = lVar8;
  if (lVar27 != 0) {
    FUN_0049e800(lVar27);
    FUN_0049e7e0(PTR_LAB_047cba48,lVar27);
  }
  puVar10[1] = 0xffffffff;
  puVar7 = PTR_LAB_047cba48;
  puVar6 = PTR_FUN_047cba38;
  uVar12 = *(uint *)(local_80 + 0x68);
  uVar15 = (ulong)uVar12;
  uVar18 = 0x28;
  lVar27 = local_80;
  if (0 < (int)uVar12) {
    lVar28 = 0;
    iVar14 = 0;
    do {
      lVar19 = *(long *)(lVar27 + 0x28);
      if (*(char *)(lVar19 + lVar28 * 0x98 + 0x41) == '\0') {
        lVar29 = lVar19 + lVar28 * 0x98;
        iVar24 = *(int *)(lVar29 + 0x3c);
        if (*(int *)(*(long *)(lVar29 + 0x28) + 0x3c) == 2 && iVar24 == 1) {
          if (*(long *)(lVar19 + lVar28 * 0x98 + 0x58) == 0) goto LAB_004ec018;
        }
        else if (iVar24 == 2) goto LAB_004ec018;
      }
      else {
LAB_004ec018:
        if (*(char *)(*(long *)(lVar19 + lVar28 * 0x98 + 0x78) + 0x4f) == '\0') {
          if (puVar10[1] == 0xffffffff) {
            puVar10[1] = 0x28;
            lVar27 = FUN_0049e7b0(puVar6,-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 |
                                         (uVar15 & 0xffffffff) << 2);
            if (0 < *(int *)(local_80 + 0x68)) {
              lVar19 = 0;
              do {
                *(undefined4 *)(lVar27 + lVar19 * 4) = 0xffffffff;
                lVar19 = lVar19 + 1;
              } while (lVar19 < *(int *)(local_80 + 0x68));
            }
            lVar19 = *(long *)(puVar10 + 0xc);
            *(long *)(puVar10 + 0xc) = lVar27;
            lVar27 = local_80;
            if (lVar19 != 0) {
              FUN_0049e800(lVar19);
              FUN_0049e7e0(puVar7,lVar19);
              lVar27 = local_80;
            }
          }
          *(int *)(*(long *)(puVar10 + 0xc) + lVar28 * 4) = iVar14;
          iVar14 = iVar14 + 1;
        }
      }
      uVar12 = *(uint *)(lVar27 + 0x68);
      uVar15 = (ulong)(int)uVar12;
      lVar28 = lVar28 + 1;
    } while (lVar28 < (long)uVar15);
    iVar24 = iVar14 + 0x3e;
    if (-1 < iVar14 + 0x1f) {
      iVar24 = iVar14 + 0x1f;
    }
    iVar24 = (iVar24 >> 5) * 4;
    uVar13 = iVar24 + 0x2f;
    uVar18 = iVar24 + 0x36;
    if (-1 < (int)uVar13) {
      uVar18 = uVar13;
    }
    uVar18 = uVar18 & 0xfffffff8;
    if (iVar14 < 1) {
      uVar18 = 0x28;
    }
  }
  if (0 < iVar22) {
    iVar14 = uVar18 + iVar22 * 4;
    uVar13 = iVar14 + 7;
    uVar1 = iVar14 + 0xe;
    if (-1 < (int)uVar13) {
      uVar1 = uVar13;
    }
    puVar10[2] = uVar18;
    uVar18 = uVar1 & 0xfffffff8;
  }
  if (*(int *)(lVar27 + 0x7c) < 1) {
    puVar10[3] = 0xffffffff;
  }
  else {
    puVar10[3] = uVar18;
    uVar13 = uVar18 + 0x26;
    if (-1 < (int)(uVar18 + 0x1f)) {
      uVar13 = uVar18 + 0x1f;
    }
    uVar18 = uVar13 & 0xfffffff8;
  }
  puVar6 = PTR_DAT_047cd750;
  if (0 < (int)uVar12) {
    lVar19 = 0;
    lVar28 = 0;
    do {
      lVar29 = *(long *)(lVar27 + 0x28) + lVar19;
      lVar17 = *(long *)(lVar29 + 0x58);
      if ((lVar17 == 0) ||
         ((*(int *)(lVar17 + 0x18) == 1 && (*(char *)(**(long **)(lVar17 + 0x20) + 0x41) != '\0'))))
      {
        iVar14 = *(int *)(lVar29 + 0x3c);
        puVar11 = *(ulong **)(lVar29 + 0x30);
        if (puVar11 != (ulong *)0x0) {
          puStack_70 = PTR_LAB_047cd728;
          local_78 = lVar29;
          if (*puVar11 != 0xffffffffffffffff) {
            local_b0 = &puStack_70;
            local_a8 = &local_78;
            local_68 = &local_b0;
            std::__call_once(puVar11,&local_68,(_func_void_void_ptr *)&LAB_004ed5a0);
          }
        }
        uVar12 = *(uint *)(lVar29 + 0x38);
        uVar13 = *(uint *)(puVar6 + (ulong)uVar12 * 4);
        if (iVar14 == 3) {
          if (uVar13 - 1 < 8) {
            iVar14 = 0x10;
          }
          else {
            if (uVar13 != 9) {
              if (uVar13 != 10) goto LAB_004ec358;
              puVar11 = *(ulong **)(lVar29 + 0x30);
              if (puVar11 != (ulong *)0x0) {
                puStack_70 = PTR_LAB_047cd728;
                local_78 = lVar29;
                if (*puVar11 != 0xffffffffffffffff) {
                  local_b0 = &puStack_70;
                  local_a8 = &local_78;
                  local_68 = &local_b0;
                  std::__call_once(puVar11,&local_68,(_func_void_void_ptr *)&LAB_004ed5a0);
                }
                uVar12 = *(uint *)(lVar29 + 0x38);
              }
              if (uVar12 == 0xb) {
                uVar15 = FUN_004a64c0(lVar29);
                iVar14 = 0x60;
                if ((uVar15 & 1) == 0) {
                  iVar14 = 0x18;
                }
                goto LAB_004ec1c8;
              }
            }
            iVar14 = 0x18;
          }
LAB_004ec1c8:
          iVar24 = 8;
        }
        else if (uVar13 < 0xb) {
          uVar12 = 1 << (ulong)(uVar13 & 0x1f);
          if ((uVar12 & 0x634) != 0) {
            iVar14 = 8;
            goto LAB_004ec1c8;
          }
          if ((uVar12 & 0x14a) == 0) {
            if (uVar13 != 7) goto LAB_004ec358;
            iVar14 = 1;
            iVar24 = 1;
          }
          else {
            iVar14 = 4;
            iVar24 = 4;
          }
        }
        else {
LAB_004ec358:
          iVar14 = 0;
          iVar24 = 0;
        }
        iVar23 = 0;
        if (iVar24 != 0) {
          iVar23 = (int)(uVar18 + iVar24 + -1) / iVar24;
        }
        *(int *)(lVar8 + lVar28 * 4) = iVar23 * iVar24;
        uVar18 = iVar23 * iVar24 + iVar14;
        lVar27 = local_80;
      }
      lVar28 = lVar28 + 1;
      lVar19 = lVar19 + 0x98;
    } while (lVar28 < *(int *)(lVar27 + 0x68));
  }
  iVar14 = *(int *)(lVar27 + 0x6c);
  if (iVar14 < 1) {
    puVar10[0x12] = 0xffffffff;
    *puVar10 = uVar18;
  }
  else {
    lVar28 = 0;
    puVar20 = (undefined8 *)(*(long *)(lVar27 + 0x30) + 0x20);
    do {
      if ((*(int *)(puVar20 + -1) != 1) || (*(char *)(*(long *)*puVar20 + 0x41) == '\0')) {
        uVar12 = uVar18 + 0xe;
        if (-1 < (int)(uVar18 + 7)) {
          uVar12 = uVar18 + 7;
        }
        uVar18 = (uVar12 & 0xfffffff8) + 8;
        *(uint *)(lVar8 + (long)((int)lVar28 + *(int *)(lVar27 + 0x68)) * 4) = uVar12 & 0xfffffff8;
        iVar14 = *(int *)(lVar27 + 0x6c);
      }
      lVar28 = lVar28 + 1;
      puVar20 = puVar20 + 6;
    } while (lVar28 < iVar14);
    puVar10[0x12] = 0xffffffff;
    *puVar10 = uVar18;
    if (0 < iVar14) {
      lVar28 = 0;
      do {
        lVar19 = *(long *)(lVar27 + 0x30);
        iVar14 = *(int *)(lVar19 + lVar28 * 0x30 + 0x18);
        if (iVar14 == 1) {
          if (*(char *)(**(long **)(lVar19 + lVar28 * 0x30 + 0x20) + 0x41) == '\0')
          goto LAB_004ec458;
        }
        else if (0 < iVar14) {
LAB_004ec458:
          lVar29 = 0;
          do {
            lVar27 = *(long *)(*(long *)(lVar19 + lVar28 * 0x30 + 0x20) + lVar29 * 8);
            puVar11 = *(ulong **)(lVar27 + 0x30);
            if (puVar11 != (ulong *)0x0) {
              puStack_70 = PTR_LAB_047cd728;
              local_78 = lVar27;
              if (*puVar11 != 0xffffffffffffffff) {
                local_b0 = &puStack_70;
                local_a8 = &local_78;
                local_68 = &local_b0;
                std::__call_once(puVar11,&local_68,(_func_void_void_ptr *)&LAB_004ed5a0);
              }
            }
            uVar12 = *(int *)(puVar6 + (ulong)*(uint *)(lVar27 + 0x38) * 4) - 1;
            if (uVar12 < 10) {
              iVar14 = *(int *)(&DAT_03d088fc + (long)(int)uVar12 * 4);
            }
            else {
              iVar14 = 0;
            }
            iVar24 = 0;
            if (iVar14 != 0) {
              iVar24 = (int)(uVar18 + iVar14 + -1) / iVar14;
            }
            if (*(char *)(lVar27 + 0x43) == '\0') {
              plVar9 = (long *)(*(long *)(lVar27 + 0x50) + 0x28);
            }
            else if (*(long *)(lVar27 + 0x60) == 0) {
              plVar9 = (long *)(*(long *)(lVar27 + 0x28) + 0x80);
            }
            else {
              plVar9 = (long *)(*(long *)(lVar27 + 0x60) + 0x50);
            }
            uVar12 = (int)((ulong)(lVar27 - *plVar9) >> 3) * 0x286bca1b;
            uVar18 = iVar24 * iVar14 + iVar14;
            *(int *)(lVar8 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2)) =
                 iVar24 * iVar14;
            lVar19 = *(long *)(local_80 + 0x30);
            lVar29 = lVar29 + 1;
            lVar27 = local_80;
          } while (lVar29 < *(int *)(lVar19 + lVar28 * 0x30 + 0x18));
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 < *(int *)(lVar27 + 0x6c));
    }
  }
  uVar12 = uVar18 + 0xe;
  if (-1 < (int)(uVar18 + 7)) {
    uVar12 = uVar18 + 7;
  }
  plVar9 = (long *)FUN_0049e6c0((long)(int)(uVar12 & 0xfffffff8));
  memset(plVar9,0,(long)(int)(uVar12 & 0xfffffff8));
  puVar6 = PTR_DAT_047cda78;
  *(undefined4 *)(plVar9 + 4) = 0;
  *plVar9 = (long)(puVar6 + 0x10);
  plVar9[1] = 0;
  plVar9[2] = (long)puVar10;
  plVar9[3] = 0;
  *(long **)(puVar10 + 0x10) = plVar9;
  FUN_004eb984(plVar9,0);
  if (0 < iVar22) {
    FUN_004ed3bc(*(undefined8 *)(puVar10 + 8),*(undefined8 *)(puVar10 + 10),plVar9);
  }
  local_b0 = *(undefined ***)(puVar10 + 0x10);
  uStack_a0 = *(undefined8 *)(puVar10 + 0xc);
  local_a8 = *(long **)(puVar10 + 10);
  local_98 = puVar10[1];
  uStack_94 = 8;
  local_90 = NEON_rev64(*(undefined8 *)(puVar10 + 2),4);
  local_88 = *puVar10;
  uStack_84 = puVar10[0x12];
  lVar8 = FUN_0049e770(PTR_FUN_047cba38,0x50);
  if (lVar8 != 0) {
    FUN_004efbc4(lVar8,*(undefined8 *)(puVar10 + 8),&local_b0,*(undefined8 *)(puVar10 + 6),param_1);
  }
  lVar27 = *(long *)(puVar10 + 0xe);
  *(long *)(puVar10 + 0xe) = lVar8;
  if (lVar27 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  FUN_004ecbe8(plVar9);
  return plVar9;
}


