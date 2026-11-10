/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb0288; name: FUN_02fb0288
 */


void FUN_02fb0288(long *param_1,long param_2,ulong *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  char cVar21;
  undefined8 uVar22;
  char cVar23;
  ulong in_x16;
  ulong extraout_x16;
  ulong extraout_x16_00;
  ulong extraout_x16_01;
  ulong extraout_x16_02;
  int iVar24;
  uint uVar25;
  ulong *puVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  undefined4 *local_80;
  undefined8 local_78;
  long local_70;
  ulong local_68;
  
  iVar12 = *(int *)(*(long *)(param_2 + 0x488) + 0x58);
  lVar30 = *(long *)PTR_DAT_047e34d8;
  if (0 < (int)param_4) {
    uVar22 = *(undefined8 *)(param_2 + 0x698);
    uVar28 = (ulong)param_4;
    puVar26 = param_3;
    do {
      if (((*(byte *)((long)puVar26 + 0x42) >> 2 & 1) != 0) &&
         (((~(uint)puVar26[1] & 0xffffff) != 0 || ((~(uint)puVar26[3] & 0xffffff) != 0)))) {
        uVar10 = *puVar26;
        uVar25 = (uint)puVar26[1];
        uVar20 = uVar25 & 0xffffff;
        if ((uVar20 == 0xffffff) ||
           (((*(uint *)(param_2 + 0x40) <= uVar20 ||
             ((*(byte *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0)) ||
            (*(uint *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x50) != uVar25)))) {
          if ((long)uVar10 < 0) {
            uVar10 = uVar10 & 0xffffffff;
          }
          else {
            uVar11 = FUN_00dbb6c8(param_2 + 0x960,uVar10,&local_80);
            uVar10 = (ulong)local_80 & 0xffffffff;
            if ((uVar11 & 1) == 0) {
              uVar10 = 0xffffff;
            }
            in_x16 = extraout_x16_00;
          }
          uVar25 = (uint)uVar10;
          uVar20 = uVar25 & 0xffffff;
          if (uVar20 == 0xffffff) {
            bVar6 = false;
          }
          else {
            if (((uVar20 < *(uint *)(param_2 + 0x40)) &&
                ((*(byte *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x54) & 3) != 0)) &&
               (*(uint *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x50) == uVar25)) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            *(uint *)(puVar26 + 1) = uVar25;
          }
        }
        else {
          uVar10 = puVar26[1] & 0xffffffff;
          bVar6 = true;
        }
        uVar11 = puVar26[2];
        uVar25 = (uint)puVar26[3];
        uVar20 = uVar25 & 0xffffff;
        if (((uVar20 == 0xffffff) || (*(uint *)(param_2 + 0x40) <= uVar20)) ||
           (((*(byte *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0 ||
            (*(uint *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x50) != uVar25)))) {
          if ((long)uVar11 < 0) {
            uVar11 = uVar11 & 0xffffffff;
          }
          else {
            uVar8 = FUN_00dbb6c8(param_2 + 0x960,uVar11,&local_80);
            uVar11 = (ulong)local_80 & 0xffffffff;
            if ((uVar8 & 1) == 0) {
              uVar11 = 0xffffff;
            }
            in_x16 = extraout_x16_01;
          }
          uVar25 = (uint)uVar11;
          uVar20 = uVar25 & 0xffffff;
          if (uVar20 == 0xffffff) goto LAB_02fb0430;
          if (((uVar20 < *(uint *)(param_2 + 0x40)) &&
              ((*(byte *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x54) & 3) != 0)) &&
             (*(uint *)(*(long *)(param_2 + 0x38) + (ulong)uVar20 * 0xc0 + 0x50) == uVar25)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          *(uint *)(puVar26 + 3) = uVar25;
        }
        else {
          uVar11 = puVar26[3] & 0xffffffff;
          bVar7 = true;
        }
        if (((bVar6) && (bVar7)) && (*(long *)(param_2 + 0x698) != 0)) {
          lVar14 = *(long *)(param_2 + 0x38);
          uVar10 = uVar10 & 0xffffff;
          if (((((*(byte *)(lVar14 + uVar10 * 0xc0 + 0x88) & 1) != 0) &&
               (uVar11 = uVar11 & 0xffffff, (*(byte *)(lVar14 + uVar11 * 0xc0 + 0x88) & 1) != 0)) &&
              (((*(byte *)(lVar14 + uVar10 * 0xc0 + 0x54) & 5) == 0 ||
               ((*(byte *)(lVar14 + uVar11 * 0xc0 + 0x54) & 5) == 0)))) &&
             (*(int *)(lVar14 + uVar10 * 0xc0 + 0x80) != *(int *)(lVar14 + uVar11 * 0xc0 + 0x80))) {
            FUN_02f56b6c(uVar22);
            in_x16 = extraout_x16;
          }
        }
      }
LAB_02fb0430:
      uVar28 = uVar28 - 1;
      puVar26 = puVar26 + 0xd;
    } while (uVar28 != 0);
  }
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < (int)param_4) {
    FUN_02fb25f4(param_1,(long)(int)param_4);
    in_x16 = extraout_x16_02;
  }
  local_80 = (undefined4 *)0x0;
  local_78 = 0x8000000000000000;
  if (0 < (int)param_4) {
    puVar15 = (undefined4 *)0x0;
    iVar24 = 0;
    uVar28 = 0;
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    do {
      if (((*(byte *)((long)param_3 + 0x42) >> 2 & 1) != 0) &&
         (((~(uint)param_3[1] & 0xffffff) != 0 || ((~(uint)param_3[3] & 0xffffff) != 0)))) {
        lVar14 = lVar30 + 0x9c0;
        if (*param_3 != 0xffffffffffffffff) {
          uVar25 = (uint)param_3[1];
          uVar20 = uVar25 & 0xffffff;
          if ((((uVar20 == 0xffffff) || (*(uint *)(param_2 + 0x40) <= uVar20)) ||
              (lVar14 = *(long *)(param_2 + 0x38),
              (*(byte *)(lVar14 + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0)) ||
             ((*(uint *)(lVar14 + (ulong)uVar20 * 0xc0 + 0x50) != uVar25 ||
              (lVar14 = lVar14 + (param_3[1] & 0xffffff) * 0xc0, (*(byte *)(lVar14 + 0x88) & 1) == 0
              )))) goto LAB_02fb05bc;
        }
        lVar17 = lVar30 + 0x9c0;
        if (param_3[2] != 0xffffffffffffffff) {
          uVar25 = (uint)param_3[3];
          uVar20 = uVar25 & 0xffffff;
          if (((uVar20 == 0xffffff) || (*(uint *)(param_2 + 0x40) <= uVar20)) ||
             ((lVar17 = *(long *)(param_2 + 0x38),
              (*(byte *)(lVar17 + (ulong)uVar20 * 0xc0 + 0x54) & 3) == 0 ||
              ((*(uint *)(lVar17 + (ulong)uVar20 * 0xc0 + 0x50) != uVar25 ||
               (lVar17 = lVar17 + (param_3[3] & 0xffffff) * 0xc0,
               (*(byte *)(lVar17 + 0x88) & 1) == 0)))))) goto LAB_02fb05bc;
        }
        if (((*(byte *)(lVar14 + 0x54) & 5) == 0) || ((*(byte *)(lVar17 + 0x54) & 5) == 0)) {
          if (*(uint *)(lVar14 + 0x80) != *(uint *)(lVar17 + 0x80)) {
            uVar10 = param_3[1] & 0xffffff;
            if (uVar10 == 0xffffff) {
              bVar6 = false;
              cVar21 = -1;
            }
            else {
              cVar21 = *(char *)(*(long *)(param_2 + 0xf8) + uVar10);
              bVar6 = (*(byte *)(*(long *)(param_2 + 0x38) + uVar10 * 0xc0 + 0x54) & 9) == 0;
            }
            uVar10 = param_3[3] & 0xffffff;
            if (uVar10 == 0xffffff) {
              bVar7 = false;
              cVar23 = -1;
            }
            else {
              cVar23 = *(char *)(*(long *)(param_2 + 0xf8) + uVar10);
              bVar7 = (*(byte *)(*(long *)(param_2 + 0x38) + uVar10 * 0xc0 + 0x54) & 9) == 0;
            }
            if ((cVar21 != -1) || (cVar23 != -1)) {
              in_x16 = (ulong)*(ushort *)
                               (*(long *)PTR_DAT_047e34d8 +
                                (ulong)((uint)(byte)(cVar23 + 1U) * 0x20 + (uint)(byte)(cVar23 + 1U)
                                       + (uint)(byte)(cVar21 + 1)) * 2 + 0x18);
            }
            if ((!(bool)(bVar7 | bVar6)) || (*(long *)(param_2 + 0x698) == 0)) {
              lVar14 = param_1[1];
              *(int *)(param_1 + 1) = (int)lVar14 + 1;
              puVar16 = (uint *)(*param_1 + (long)(int)lVar14 * 0xc);
              *(short *)((long)puVar16 + 2) = (short)in_x16;
              *(undefined2 *)puVar16 = 0xffff;
              *(int *)(param_1 + 2) = (int)param_1[2] + 1;
            }
            else {
              lVar29 = *(long *)(*(long *)(param_2 + 0x698) + 0x388);
              uVar25 = *(uint *)(lVar29 + (ulong)*(uint *)(lVar14 + 0x80) * 0x20 + 0x10);
              uVar20 = *(uint *)(lVar29 + (ulong)*(uint *)(lVar17 + 0x80) * 0x20 + 0x10);
              if (uVar25 != 0xffffffff) {
                uVar20 = uVar25;
              }
              if (uVar20 < 0xffff) {
                lVar14 = param_1[1];
                *(int *)(param_1 + 1) = (int)lVar14 + 1;
                puVar16 = (uint *)(*param_1 + (long)(int)lVar14 * 0xc);
                *(undefined2 *)((long)puVar16 + 2) = 0xffff;
                *(short *)puVar16 = (short)uVar20;
              }
              else {
                iVar13 = iVar24 + 1;
                if ((int)(local_78._4_4_ & 0x7fffffff) <= iVar24) {
                  FUN_02fb2720(&local_80,puVar2,(long)iVar13);
                  in_x16 = in_x16 & 0xffffffff;
                  puVar15 = local_80;
                }
                puVar16 = puVar15 + (long)iVar24 * 3;
                local_78 = CONCAT44(local_78._4_4_,iVar13);
                *puVar16 = uVar20;
                iVar24 = iVar13;
              }
            }
            uVar20 = *(uint *)((long)param_3 + 0x34);
            puVar16[1] = (uint)uVar28;
            puVar16[2] = uVar20;
          }
        }
      }
LAB_02fb05bc:
      uVar28 = uVar28 + 1;
      param_3 = param_3 + 0xd;
    } while (param_4 != uVar28);
  }
  if (iVar12 != 0) {
    FUN_02fb15b0(*param_1,(int)param_1[1]);
    iVar24 = 0;
    goto LAB_02fb0890;
  }
  lVar14 = param_1[1];
  lVar29 = (long)(int)lVar14;
  lVar30 = tpidr_el0;
  lVar17 = *(long *)(lVar30 + 0x1000b8);
  if (lVar17 == 0) {
    lVar17 = FUN_00e5d3b4();
    *(long *)(lVar30 + 0x1000b8) = lVar17;
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0x3d0) + 0x10);
  if ((*(long *)(lVar17 + 8) == 0) && (local_70 = lVar29 * 0xc, lVar17 != 0)) {
    local_68 = local_70 + 0x3fU & 0xffffffffffffffc0;
    if (local_68 <= *(ulong *)(lVar17 + 0x28)) {
      lVar9 = *(long *)(lVar17 + 0x38);
      if (local_68 + lVar9 <= *(ulong *)(lVar17 + 0x40)) {
        *(ulong *)(lVar17 + 0x38) = local_68 + lVar9;
        goto LAB_02fb0b7c;
      }
    }
    lVar9 = FUN_031cf3b4(lVar17,&local_68);
  }
  else {
    local_70 = lVar29 * 0xc;
    lVar9 = (**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
    lVar17 = 0;
  }
LAB_02fb0b7c:
  FUN_02fb0ed0(*param_1,(int)lVar14,lVar9);
  if (lVar17 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar9,lVar29 * 0xc);
  }
  else {
    uVar28 = lVar29 * 0xc + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar17 + 0x28) < uVar28) || (*(long *)(lVar17 + 0x38) != uVar28 + lVar9)) {
      if (lVar9 != 0) {
        if (*(ulong *)(lVar17 + 0x28) < uVar28 + 0x40) {
          *(int *)(*(long *)(lVar17 + 0x30) + 0x20) = *(int *)(*(long *)(lVar17 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar17 + 0x10) + 0x18))
                    (*(long **)(lVar17 + 0x10),lVar9 - *(int *)(lVar9 + -4),uVar28 + 0x44);
        }
        else {
          if (*(long *)(lVar17 + 0x38) == uVar28 + lVar9) {
            *(long *)(lVar17 + 0x38) = lVar9;
            goto LAB_02fb0c4c;
          }
          FUN_031cf778(lVar17,lVar9);
        }
      }
    }
    else {
      *(long *)(lVar17 + 0x38) = lVar9;
      if (*(long *)(lVar17 + 0x48) == lVar9) {
LAB_02fb0c4c:
        FUN_031cf578(lVar17);
      }
    }
  }
  uVar28 = local_78;
  iVar13 = (int)local_78;
  lVar14 = (long)(int)local_78;
  iVar24 = (int)param_1[1];
  if ((int)local_78 == 0) goto LAB_02fb0890;
  lVar17 = *(long *)(lVar30 + 0x1000b8);
  if (lVar17 == 0) {
    lVar17 = FUN_00e5d3b4();
    *(long *)(lVar30 + 0x1000b8) = lVar17;
  }
  lVar30 = *(long *)(*(long *)(lVar17 + 0x3d0) + 0x10);
  if ((*(long *)(lVar30 + 8) == 0) && (local_70 = lVar14 * 0xc, lVar30 != 0)) {
    local_68 = local_70 + 0x3fU & 0xffffffffffffffc0;
    if (local_68 <= *(ulong *)(lVar30 + 0x28)) {
      lVar17 = *(long *)(lVar30 + 0x38);
      if (local_68 + lVar17 <= *(ulong *)(lVar30 + 0x40)) {
        *(ulong *)(lVar30 + 0x38) = local_68 + lVar17;
        goto LAB_02fb0d2c;
      }
    }
    lVar17 = FUN_031cf3b4(lVar30,&local_68);
  }
  else {
    local_70 = lVar14 * 0xc;
    lVar17 = (**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
    lVar30 = 0;
  }
LAB_02fb0d2c:
  puVar15 = local_80;
  uVar10 = lVar14 * 0xc;
  FUN_02fb0ed0(local_80,uVar28 & 0xffffffff,lVar17);
  iVar13 = iVar24 + iVar13;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < iVar13) {
    FUN_02fb2720(param_1,PTR_PTR_047d1a50,(long)iVar13);
  }
  if ((int)param_1[1] != iVar13) {
    *(int *)(param_1 + 1) = iVar13;
  }
  uVar20 = (uint)(uVar10 >> 2);
  if (0 < (int)uVar20) {
    puVar18 = (undefined4 *)(*param_1 + (long)iVar24 * 0xc);
    uVar25 = uVar20 & 3;
    if (2 < uVar20 - 1) {
      iVar13 = -(uVar20 & 0xfffffffc);
      puVar19 = puVar18;
      do {
        *puVar19 = *puVar15;
        puVar19[1] = puVar15[1];
        puVar19[2] = puVar15[2];
        puVar1 = puVar15 + 3;
        puVar15 = puVar15 + 4;
        puVar18 = puVar19 + 4;
        iVar13 = iVar13 + 4;
        puVar19[3] = *puVar1;
        puVar19 = puVar18;
      } while (iVar13 != 0);
    }
    if ((uVar10 >> 2 & 3) != 0) {
      do {
        uVar25 = uVar25 - 1;
        *puVar18 = *puVar15;
        puVar18 = puVar18 + 1;
        puVar15 = puVar15 + 1;
      } while (uVar25 != 0);
    }
  }
  if (lVar30 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar17,uVar10);
    goto LAB_02fb0890;
  }
  uVar28 = uVar10 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar30 + 0x28) < uVar28) || (*(long *)(lVar30 + 0x38) != uVar28 + lVar17)) {
    if (lVar17 == 0) goto LAB_02fb0890;
    if (*(ulong *)(lVar30 + 0x28) < uVar28 + 0x40) {
      *(int *)(*(long *)(lVar30 + 0x30) + 0x20) = *(int *)(*(long *)(lVar30 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar30 + 0x10) + 0x18))
                (*(long **)(lVar30 + 0x10),lVar17 - *(int *)(lVar17 + -4),uVar28 + 0x44);
      goto LAB_02fb0890;
    }
    if (*(long *)(lVar30 + 0x38) != uVar28 + lVar17) {
      FUN_031cf778(lVar30,lVar17);
      goto LAB_02fb0890;
    }
    *(long *)(lVar30 + 0x38) = lVar17;
  }
  else {
    *(long *)(lVar30 + 0x38) = lVar17;
    if (*(long *)(lVar30 + 0x48) != lVar17) goto LAB_02fb0890;
  }
  FUN_031cf578(lVar30);
LAB_02fb0890:
  iVar13 = (int)param_1[1];
  lVar30 = (long)(int)param_1[2];
  if ((int)param_1[2] < iVar13) {
    lVar17 = *param_1;
    lVar14 = lVar17 + lVar30 * 0xc;
    uVar4 = *(undefined4 *)(param_2 + 0x5bc);
    iVar27 = 0;
    if (iVar12 == 0) {
      lVar29 = lVar30 * 0xc;
      uVar20 = 0xffffffff;
      do {
        if (lVar30 < iVar24) {
          uVar25 = (uint)*(ushort *)(lVar17 + lVar29);
        }
        else {
          uVar25 = *(uint *)(lVar17 + lVar29);
        }
        if (uVar25 == uVar20) {
          iVar27 = iVar27 + 1;
          uVar25 = uVar20;
        }
        else {
          if (uVar20 != 0xffffffff) {
            iVar12 = 0;
            lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x698) + 0x398) + (long)(int)uVar20 * 8
                              );
            *(undefined4 *)(lVar17 + 0x38) = 0;
            if ((*(uint *)(lVar17 + 0x3c) & 0x7fffffff) == 0) {
              FUN_02fb284c(lVar17 + 0x30);
              iVar12 = *(int *)(lVar17 + 0x38);
            }
            plVar3 = (long *)(*(long *)(lVar17 + 0x30) + (long)iVar12 * 0x10);
            *plVar3 = lVar14;
            *(int *)(plVar3 + 1) = iVar27;
            *(undefined4 *)(lVar17 + 0x38) = 1;
            *(undefined4 *)(lVar17 + 0x50) = uVar4;
            lVar17 = *param_1;
            iVar13 = (int)param_1[1];
          }
          lVar14 = lVar17 + lVar29;
          iVar27 = 1;
        }
        lVar30 = lVar30 + 1;
        lVar29 = lVar29 + 0xc;
        uVar20 = uVar25;
      } while (lVar30 < iVar13);
    }
    else {
      lVar29 = lVar30 * 0xc;
      uVar25 = 0xffffffff;
      do {
        uVar5 = *(ushort *)(lVar17 + lVar29);
        if (uVar25 == uVar5) {
          iVar27 = iVar27 + 1;
        }
        else {
          if (uVar25 != 0xffffffff) {
            iVar12 = 0;
            lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x698) + 0x398) + (long)(int)uVar25 * 8
                              );
            *(undefined4 *)(lVar17 + 0x38) = 0;
            if ((*(uint *)(lVar17 + 0x3c) & 0x7fffffff) == 0) {
              FUN_02fb284c(lVar17 + 0x30);
              iVar12 = *(int *)(lVar17 + 0x38);
            }
            plVar3 = (long *)(*(long *)(lVar17 + 0x30) + (long)iVar12 * 0x10);
            *plVar3 = lVar14;
            *(int *)(plVar3 + 1) = iVar27;
            *(undefined4 *)(lVar17 + 0x38) = 1;
            *(undefined4 *)(lVar17 + 0x50) = uVar4;
            lVar17 = *param_1;
            iVar13 = (int)param_1[1];
          }
          lVar14 = lVar17 + lVar29;
          iVar27 = 1;
          uVar25 = (uint)uVar5;
        }
        lVar30 = lVar30 + 1;
        lVar29 = lVar29 + 0xc;
      } while (lVar30 < iVar13);
    }
    if (uVar25 != 0xffffffff) {
      lVar30 = *(long *)(*(long *)(*(long *)(param_2 + 0x698) + 0x398) + (long)(int)uVar25 * 8);
      *(undefined4 *)(lVar30 + 0x38) = 0;
      if ((*(uint *)(lVar30 + 0x3c) & 0x7fffffff) == 0) {
        FUN_02fb284c(lVar30 + 0x30);
        lVar17 = (long)*(int *)(lVar30 + 0x38);
      }
      else {
        lVar17 = 0;
      }
      plVar3 = (long *)(*(long *)(lVar30 + 0x30) + lVar17 * 0x10);
      *plVar3 = lVar14;
      *(int *)(plVar3 + 1) = iVar27;
      *(undefined4 *)(lVar30 + 0x38) = 1;
      *(undefined4 *)(lVar30 + 0x50) = uVar4;
    }
  }
  uVar28 = local_78;
  uVar10 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (long)uVar28) && (local_80 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_80,uVar10 * 0xc);
  }
  return;
}


