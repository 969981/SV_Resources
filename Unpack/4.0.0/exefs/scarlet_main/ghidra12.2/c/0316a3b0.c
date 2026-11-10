/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0316a3b0; name: FUN_0316a3b0
 */


undefined8 FUN_0316a3b0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  ushort uVar14;
  bool bVar15;
  ushort uVar16;
  undefined2 uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  ushort *puVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  int iVar29;
  long lVar30;
  uint *puVar31;
  uint *puVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  short *psVar40;
  ulong uVar41;
  int *piVar42;
  undefined2 *puVar43;
  uint uVar44;
  ulong unaff_x25;
  uint uVar45;
  ulong unaff_x26;
  uint uVar46;
  ulong uVar47;
  uint uVar48;
  ulong uVar49;
  ushort local_7c [2];
  ushort local_78 [2];
  undefined2 local_74;
  ulong local_70;
  uint local_68;
  
  if (*(int *)(param_1 + 0x98) == 1) {
    return 1;
  }
  plVar2 = (long *)(param_1 + 0x90);
  while( true ) {
    lVar21 = *plVar2;
    uVar48 = *(uint *)(lVar21 + 0x10);
    if ((uVar48 & 3) != 0) break;
    lVar22 = *(long *)(param_1 + 0x100) + (ulong)*(ushort *)(lVar21 + 0x14) * 0x20;
    if (((*(short *)(lVar22 + 10) == *(short *)(lVar21 + 0x18)) &&
        (*(short *)(*(long *)(param_1 + 0x100) + (ulong)*(ushort *)(lVar21 + 0x16) * 0x20 + 10) ==
         *(short *)(lVar21 + 0x1a))) && (*(ushort *)(lVar22 + 0x10) == *(ushort *)(lVar21 + 0x16)))
    break;
    FUN_031653b0();
    if (*(int *)(param_1 + 0x98) == 1) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  uVar48 = uVar48 >> 2;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  puVar13 = PTR_PTR_047d1a50;
  uVar19 = *(uint *)(lVar21 + 0x10);
  uVar38 = 0xffff;
  uVar49 = 0xffff;
  if (uVar48 == uVar19 >> 2) {
    unaff_x25 = 0;
    uVar37 = 0xffff;
    unaff_x26 = 0xffff;
    do {
      uVar16 = *(ushort *)(lVar21 + 0x14);
      uVar41 = (ulong)uVar16;
      uVar19 = uVar19 & 3;
      uVar18 = (uint)uVar16;
      uVar45 = (uint)unaff_x26;
      uVar49 = unaff_x26;
      if (uVar19 == 2) {
        lVar21 = *(long *)(param_1 + 0x100);
        if ((~uVar45 & 0xffff) == 0) {
          piVar42 = (int *)(lVar21 + uVar41 * 0x20);
          if (*piVar42 == piVar42[1]) {
            uVar18 = 0xffffffff;
          }
          else {
            uVar37 = uVar18;
          }
          uVar49 = (ulong)uVar18;
        }
        uVar38 = (ulong)uVar37;
        uVar16 = *(ushort *)(lVar21 + uVar41 * 0x20 + 0xc);
        if ((ulong)uVar16 == 0xffff) {
          FUN_031653b0();
        }
        else {
          iVar25 = *(int *)(param_1 + 0xc0);
          *(ushort *)(*(long *)(param_1 + 0xb8) + (long)iVar25 * 2) = uVar16;
          *(int *)(param_1 + 0xc0) = iVar25 + 1;
          iVar25 = *(int *)(lVar21 + (ulong)uVar16 * 0x20 + 4);
          lVar21 = *(long *)(param_1 + 0x90);
          *(ushort *)(lVar21 + 0x14) = uVar16;
          *(uint *)(lVar21 + 0x10) = iVar25 << 2 | 2;
          FUN_03165534();
        }
      }
      else {
        uVar8 = *(ushort *)(lVar21 + 0x16);
        uVar47 = (ulong)uVar8;
        uVar46 = (uint)uVar8;
        if (uVar19 == 1) {
          iVar25 = *(int *)(param_1 + 0xc0);
          *(ushort *)(*(long *)(param_1 + 0xb8) + (long)iVar25 * 2) = uVar16;
          lVar21 = *(long *)(param_1 + 0x100) + uVar41 * 0x20;
          *(int *)(param_1 + 0xc0) = iVar25 + 1;
          if (*(short *)(lVar21 + 10) == 0) {
            lVar22 = *plVar2;
            *(ushort *)(lVar22 + 0x14) = uVar16;
            *(uint *)(lVar22 + 0x10) = *(int *)(lVar21 + 4) << 2 | 2;
            FUN_03165534();
          }
          else {
            FUN_031653b0();
          }
          if (uVar46 != 0xffff) {
            iVar11 = *(int *)(param_1 + 0xc0);
            *(ushort *)(*(long *)(param_1 + 0xb8) + (long)iVar11 * 2) = uVar8;
            iVar25 = *(int *)(param_1 + 0x98);
            lVar21 = (long)iVar25;
            *(int *)(param_1 + 0xc0) = iVar11 + 1;
            if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar25) {
              FUN_03165928(plVar2,puVar13,lVar21 + 1);
              iVar25 = *(int *)(param_1 + 0x98);
            }
            puVar28 = (uint *)(*(long *)(param_1 + 0x90) + (long)iVar25 * 0x10);
            *(int *)(param_1 + 0x98) = (int)(lVar21 + 1);
            *(ushort *)(puVar28 + 1) = uVar8;
            *puVar28 = *(int *)(*(long *)(param_1 + 0x100) + uVar47 * 0x20 + 4) << 2 | 2;
            lVar21 = *(long *)(param_1 + 0x90);
            uVar38 = (long)*(int *)(param_1 + 0x98) - 1;
            puVar28 = (uint *)(lVar21 + uVar38 * 0x10);
            uVar19 = *puVar28;
            local_70 = *(ulong *)(puVar28 + 1);
            local_68 = puVar28[3];
            iVar25 = (int)uVar38;
            while (iVar25 != 1) {
              iVar25 = (int)uVar38;
              uVar38 = uVar38 >> 1 & 0x7fffffff;
              if (*(uint *)(lVar21 + uVar38 * 0x10) <= uVar19) goto LAB_0316a6f4;
              puVar4 = (undefined8 *)(lVar21 + uVar38 * 0x10);
              puVar3 = (undefined8 *)(lVar21 + (long)iVar25 * 0x10);
              uVar6 = puVar4[1];
              *puVar3 = *puVar4;
              puVar3[1] = uVar6;
              lVar21 = *plVar2;
              iVar25 = (int)uVar38;
            }
            iVar25 = 1;
LAB_0316a6f4:
            puVar28 = (uint *)(lVar21 + (long)iVar25 * 0x10);
            *puVar28 = uVar19;
            puVar28[3] = local_68;
            *(ulong *)(puVar28 + 1) = local_70;
          }
        }
        else if (uVar19 == 0) {
          sVar9 = *(short *)(lVar21 + 0x1a);
          sVar10 = *(short *)(lVar21 + 0x18);
          FUN_031653b0();
          lVar22 = *(long *)(param_1 + 0x100);
          lVar21 = lVar22 + uVar41 * 0x20;
          if ((*(short *)(lVar21 + 10) == sVar10) &&
             (*(short *)(lVar22 + uVar47 * 0x20 + 10) == sVar9)) {
            bVar15 = *(ushort *)(lVar21 + 0x10) == uVar46;
            uVar44 = (uint)unaff_x25;
            uVar33 = uVar44 | bVar15;
            uVar19 = uVar37;
            if (bVar15) {
              uVar19 = uVar46;
            }
            uVar38 = (ulong)uVar19;
            uVar19 = uVar45;
            if (bVar15) {
              uVar19 = uVar18;
            }
            uVar49 = (ulong)uVar19;
            if (bVar15) {
              unaff_x25 = (ulong)uVar33;
              if (uVar44 == 1) {
                uVar38 = uVar41;
                uVar49 = unaff_x26;
                do {
                  if (uVar18 == ((uint)uVar49 & 0xffff)) {
LAB_0316a754:
                    uVar41 = unaff_x26;
                    goto LAB_0316a758;
                  }
                  if ((uint)uVar38 == (uVar45 & 0xffff)) break;
                  uVar16 = *(ushort *)(lVar22 + uVar38 * 0x20 + 0x10);
                  uVar38 = (ulong)uVar16;
                  if (uVar16 == 0xffff) goto LAB_0316a754;
                  uVar16 = *(ushort *)(lVar22 + (uVar49 & 0xffff) * 0x20 + 0x10);
                  uVar49 = (ulong)uVar16;
                } while (uVar16 != 0xffff);
LAB_0316a758:
                uVar26 = (ulong)uVar37;
                uVar38 = uVar47;
                do {
                  uVar49 = uVar41;
                  if ((uint)uVar38 == uVar37) {
LAB_0316a7a4:
                    unaff_x25 = 1;
                    uVar38 = (ulong)uVar37;
                    goto LAB_0316a728;
                  }
                  if (uVar46 == (uint)uVar26) break;
                  uVar16 = *(ushort *)(lVar22 + uVar26 * 0x20 + 0x10);
                  uVar26 = (ulong)uVar16;
                  if (uVar16 == 0xffff) goto LAB_0316a7a4;
                  uVar16 = *(ushort *)(lVar22 + uVar38 * 0x20 + 0x10);
                  uVar38 = (ulong)uVar16;
                } while (uVar16 != 0xffff);
                unaff_x25 = 1;
                uVar38 = uVar47;
              }
            }
            else {
              unaff_x25 = (ulong)uVar33;
            }
            goto LAB_0316a728;
          }
        }
        uVar38 = (ulong)uVar37;
      }
LAB_0316a728:
      if (*(int *)(param_1 + 0x98) == 1) break;
      lVar21 = *plVar2;
      uVar37 = (uint)uVar38;
      uVar19 = *(uint *)(lVar21 + 0x10);
      unaff_x26 = uVar49;
    } while (uVar48 == uVar19 >> 2);
  }
  if ((~(uint)uVar49 & 0xffff) == 0) {
    uVar16 = *(ushort *)(param_1 + 0xa0);
    if (uVar16 == 0xffff) {
      uVar49 = 0xffff;
      goto LAB_0316aa20;
    }
    lVar21 = *(long *)(param_1 + 0x100);
    uVar38 = 0xffff;
    do {
      uVar41 = (ulong)uVar16;
      uVar19 = (uint)uVar38;
      piVar42 = (int *)(lVar21 + uVar41 * 0x20);
      iVar25 = piVar42[1] - *piVar42;
      iVar11 = uVar48 - *piVar42;
      iVar25 = (iVar25 * 2 & 0x10000U) + iVar25;
      iVar11 = (iVar11 * 2 & 0x10000U) + iVar11;
      iVar29 = (int)(short)iVar11 * (iVar25 >> 0x10);
      iVar25 = (int)(short)iVar25 * (iVar11 >> 0x10);
      if (iVar29 - iVar25 < 1) {
        if (iVar29 == iVar25) {
          lVar21 = lVar21 + uVar41 * 0x20;
          iVar25 = *(int *)(param_1 + 0xb0);
          *(ushort *)(*(long *)(param_1 + 0xa8) + (long)iVar25 * 2) = uVar16;
          *(int *)(param_1 + 0xb0) = iVar25 + 1;
          psVar40 = (short *)(lVar21 + 10);
          sVar9 = *psVar40;
          if ((char)((ushort)sVar9 >> 8) == -1) {
            *psVar40 = sVar9 + 1;
          }
          else {
            iVar25 = *(int *)(param_1 + 0xc0);
            *(ushort *)(*(long *)(param_1 + 0xb8) + (long)iVar25 * 2) = uVar16;
            *(int *)(param_1 + 0xc0) = iVar25 + 1;
          }
          uVar49 = (ulong)*(ushort *)(lVar21 + 0x10);
        }
        else {
          uVar49 = uVar41;
        }
        goto LAB_0316a9d8;
      }
      uVar16 = *(ushort *)(piVar42 + 4);
      uVar38 = uVar41;
    } while (uVar16 != 0xffff);
    uVar49 = 0xffff;
LAB_0316a9ec:
    uVar38 = (ulong)*(ushort *)(lVar21 + uVar41 * 0x20 + 0x12);
    bVar15 = false;
  }
  else {
    lVar21 = *(long *)(param_1 + 0x100);
    uVar16 = *(ushort *)(lVar21 + (uVar49 & 0xffff) * 0x20 + 0xe);
    uVar19 = 0xffff;
    if (uVar16 != 0xffff) {
      do {
        uVar41 = (ulong)uVar16;
        uVar19 = (uint)uVar16;
        piVar42 = (int *)(lVar21 + uVar41 * 0x20);
        iVar25 = *piVar42 - piVar42[1];
        iVar11 = uVar48 - piVar42[1];
        iVar25 = (iVar25 * 2 & 0x10000U) + iVar25;
        iVar11 = (iVar11 * 2 & 0x10000U) + iVar11;
        iVar29 = iVar25 >> 0x10;
        iVar20 = iVar11 >> 0x10;
        iVar12 = (int)(short)iVar11;
        iVar25 = (int)(short)iVar25;
        iVar11 = iVar12 * iVar29 - iVar25 * iVar20;
        iVar25 = iVar29 * iVar20 + iVar25 * iVar12;
        if (iVar11 != 0) {
          iVar25 = iVar11;
        }
        if (iVar25 < 0) goto LAB_0316a874;
        uVar16 = *(ushort *)((long)piVar42 + 0xe);
        uVar49 = uVar41;
      } while (uVar16 != 0xffff);
      uVar19 = 0xffff;
    }
LAB_0316a874:
    do {
      uVar16 = *(ushort *)(lVar21 + uVar38 * 0x20 + 0x10);
      uVar38 = (ulong)uVar16;
      if (uVar38 == 0xffff) break;
      piVar42 = (int *)(lVar21 + uVar38 * 0x20);
      iVar11 = *piVar42;
      iVar25 = piVar42[1] - iVar11;
      iVar11 = uVar48 - iVar11;
      iVar25 = (iVar25 * 2 & 0x10000U) + iVar25;
      iVar11 = (iVar11 * 2 & 0x10000U) + iVar11;
      iVar29 = iVar25 >> 0x10;
      iVar20 = iVar11 >> 0x10;
      iVar12 = (int)(short)iVar11;
      iVar25 = (int)(short)iVar25;
      iVar11 = iVar12 * iVar29 - iVar25 * iVar20;
      iVar25 = iVar29 * iVar20 + iVar25 * iVar12;
      if (iVar11 != 0) {
        iVar25 = iVar11;
      }
    } while (-1 < iVar25);
    if ((uint)uVar16 != ((uint)uVar49 & 0xffff)) {
      while( true ) {
        lVar21 = lVar21 + (uVar49 & 0xffff) * 0x20;
        iVar25 = *(int *)(param_1 + 0xb0);
        *(short *)(*(long *)(param_1 + 0xa8) + (long)iVar25 * 2) = (short)uVar49;
        *(int *)(param_1 + 0xb0) = iVar25 + 1;
        sVar9 = *(short *)(lVar21 + 10);
        if ((char)((ushort)sVar9 >> 8) == -1) {
          *(short *)(lVar21 + 10) = sVar9 + 1;
        }
        else if (*(uint *)(lVar21 + 4) != uVar48) {
          iVar25 = *(int *)(param_1 + 0xc0);
          *(short *)(*(long *)(param_1 + 0xb8) + (long)iVar25 * 2) = (short)uVar49;
          *(int *)(param_1 + 0xc0) = iVar25 + 1;
        }
        uVar49 = (ulong)*(ushort *)(lVar21 + 0x10);
        if ((uint)*(ushort *)(lVar21 + 0x10) == (uint)uVar16) break;
        lVar21 = *(long *)(param_1 + 0x100);
      }
      uVar49 = uVar38;
    }
LAB_0316a9d8:
    if ((~uVar19 & 0xffff) != 0) {
      lVar21 = *(long *)(param_1 + 0x100);
      uVar41 = (ulong)uVar19;
      goto LAB_0316a9ec;
    }
LAB_0316aa20:
    bVar15 = true;
    uVar41 = 0xffff;
    uVar38 = 0xffff;
  }
  local_78[0] = (ushort)uVar38;
  uVar19 = *(uint *)(param_1 + 0xb0);
  if (uVar19 == 0) {
    local_7c[0] = local_78[0];
  }
  else {
    lVar22 = *(long *)(param_1 + 0xa8);
    lVar21 = *(long *)(param_1 + 0x100);
    local_7c[0] = *(ushort *)
                   (lVar21 + (ulong)*(ushort *)(lVar22 + (long)(int)(uVar19 - 1) * 2) * 0x20 + 0x12)
    ;
    if ((int)uVar19 < 1) {
      uVar16 = 1;
      uVar37 = 0xffff;
    }
    else {
      lVar39 = 0;
      uVar47 = 1;
      uVar37 = 0xffff;
      while( true ) {
        lVar21 = lVar21 + (ulong)*(ushort *)(lVar22 + lVar39) * 0x20;
        sVar9 = *(short *)(lVar21 + 8);
        uVar16 = sVar9 << 2;
        if (sVar9 == -1) {
          uVar16 = 1;
        }
        if ((~(uint)uVar38 & 0xffff) == 0) {
          uVar37 = 0xffff;
        }
        else {
          puVar23 = (ushort *)(*(long *)(param_1 + 0x110) + uVar38 * 8);
          if (lVar39 == 0) {
            uVar8 = *puVar23;
            if ((*(int *)(param_1 + 0x138) == 0) ||
               (uVar18 = *(int *)(param_1 + 0x138) - 1,
               *(uint *)(*(long *)(param_1 + 0x130) + (long)(int)uVar18 * 4) != uVar48)) {
              uVar18 = FUN_03168de8(param_1,uVar48);
            }
            lVar22 = *(long *)(param_1 + 0x120);
            if ((uint)*(ushort *)(lVar22 + (ulong)uVar8 * 8) == (uVar18 & 0xffff)) {
              uVar37 = 0xffff;
            }
            else {
              uVar37 = *(uint *)(param_1 + 0x128);
              if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) <= (int)uVar37) {
                FUN_03169f70(param_1 + 0x120,PTR_PTR_047d1a50,(long)(int)uVar37 + 1);
                lVar22 = *(long *)(param_1 + 0x120);
              }
              puVar43 = (undefined2 *)(lVar22 + (ulong)(ushort)uVar37 * 8);
              *(int *)(param_1 + 0x128) = (int)((long)(int)uVar37 + 1);
              *puVar43 = (short)uVar18;
              puVar43[1] = uVar8;
              *(uint *)(puVar43 + 2) = (uint)uVar16;
              *puVar23 = (ushort)uVar37;
            }
            local_70 = CONCAT62(local_70._2_6_,(short)uVar37);
          }
          else {
            unaff_x26 = unaff_x26 & 0xffffffff00000000 | (ulong)uVar16;
            unaff_x25 = uVar47 | unaff_x25 & 0xffffffff00000000;
            FUN_03169a70(param_1,puVar23,uVar48,unaff_x25,unaff_x26,&local_74,&local_70);
            if (((~uVar37 & 0xffff) != 0) && (local_74 != 0xffff)) {
              *(ushort *)(*(long *)(param_1 + 0x120) + (ulong)(ushort)uVar37 * 8 + 4) =
                   local_74 << 2 | 2;
              *(ushort *)(*(long *)(param_1 + 0x120) + (ulong)local_74 * 8 + 4) =
                   (ushort)(uVar37 << 2) | 2;
            }
            uVar37 = (uint)(ushort)local_70;
          }
        }
        uVar38 = (ulong)*(ushort *)(lVar21 + 0x12);
        if ((ulong)uVar19 * 2 + -2 == lVar39) break;
        lVar22 = *(long *)(param_1 + 0xa8);
        uVar47 = (ulong)uVar16;
        lVar39 = lVar39 + 2;
        lVar21 = *(long *)(param_1 + 0x100);
      }
    }
    if (((int)uVar38 != 0xffff) &&
       (FUN_03169c10(param_1,*(long *)(param_1 + 0x110) + uVar38 * 8,uVar48,uVar16,&local_70),
       (~uVar37 & 0xffff) != 0)) {
      if ((ushort)local_70 != -1) {
        *(ushort *)(*(long *)(param_1 + 0x120) + (ulong)(ushort)uVar37 * 8 + 4) =
             (ushort)local_70 << 2 | 2;
        *(ushort *)(*(long *)(param_1 + 0x120) + (local_70 & 0xffff) * 8 + 4) =
             (ushort)(uVar37 << 2) | 2;
      }
    }
    uVar38 = (ulong)local_78[0];
  }
  uVar14 = local_74;
  uVar8 = local_7c[0];
  uVar16 = local_74 >> 8;
  local_74 = uVar16 << 8;
  sVar9 = local_74;
  local_74._1_1_ = SUB21(uVar14,1);
  if ((int)uVar38 == 0xffff) {
    uVar19 = *(uint *)(param_1 + 0xc0);
LAB_0316acc8:
    if ((int)uVar19 < 1) {
      local_74 = (ushort)local_74._1_1_ << 8;
    }
    else {
      lVar21 = 0;
      do {
        puVar28 = (uint *)(*(long *)(param_1 + 0x100) +
                          (ulong)*(ushort *)(*(long *)(param_1 + 0xb8) + lVar21) * 0x20);
        iVar25 = uVar48 - *puVar28;
        if ((iVar25 != 0) &&
           (iVar11 = puVar28[1] - *puVar28, iVar25 = (iVar25 * 2 & 0x10000U) + iVar25,
           iVar11 = (iVar11 * 2 & 0x10000U) + iVar11,
           (iVar11 >> 0x10) * (int)(short)iVar25 != (int)(short)iVar11 * (iVar25 >> 0x10))) {
          *(short *)((long)puVar28 + 10) = *(short *)((long)puVar28 + 10) + 1;
        }
        lVar21 = lVar21 + 2;
        *puVar28 = uVar48;
      } while ((ulong)uVar19 * 2 != lVar21);
      local_74 = uVar16 << 8;
      if (1 < *(int *)(param_1 + 0xc0)) {
        FUN_0316c1b0(*(undefined8 *)(param_1 + 0xb8),0,*(int *)(param_1 + 0xc0) + -1,param_1,
                     &local_74);
        goto LAB_0316b05c;
      }
    }
  }
  else {
    uVar19 = *(uint *)(param_1 + 0xc0);
    puVar3 = (undefined8 *)(param_1 + 0xb8);
    if (uVar19 == 0) {
      uVar19 = *(uint *)(param_1 + 0x108);
      local_74 = sVar9;
      if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) <= (int)uVar19) {
        FUN_03168014(param_1 + 0x100,PTR_PTR_047d1a50,(long)(int)uVar19 + 1);
      }
      iVar25 = (int)((ulong)uVar19 & 0xffff) + 1;
      iVar11 = ((*(int *)(param_1 + 0xf8) >> 5) + 1) * iVar25;
      *(int *)(param_1 + 0x108) = (int)((long)(int)uVar19 + 1);
      if ((int)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) < iVar11) {
        FUN_02eb1f88(param_1 + 0xe8,PTR_PTR_047d1a50,(long)iVar11);
      }
      uVar37 = *(uint *)(param_1 + 0xf0);
      if ((int)uVar37 < iVar11) {
        *(int *)(param_1 + 0xf0) = iVar11;
        memset((void *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar37 * 4),0,
               (ulong)(iVar11 + ~uVar37) * 4 + 4);
      }
      else if (iVar11 < (int)uVar37) {
        *(int *)(param_1 + 0xf0) = iVar11;
      }
      iVar25 = ((*(int *)(param_1 + 0xe0) >> 5) + 1) * iVar25;
      if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar25) {
        FUN_02eb1f88(param_1 + 0xd0,PTR_PTR_047d1a50,(long)iVar25);
      }
      uVar37 = *(uint *)(param_1 + 0xd8);
      if ((int)uVar37 < iVar25) {
        *(int *)(param_1 + 0xd8) = iVar25;
        memset((void *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar37 * 4),0,
               (ulong)(iVar25 + ~uVar37) * 4 + 4);
      }
      else if (iVar25 < (int)uVar37) {
        *(int *)(param_1 + 0xd8) = iVar25;
      }
      puVar28 = (uint *)(*(long *)(param_1 + 0x100) + ((ulong)uVar19 & 0xffff) * 0x20);
      *puVar28 = uVar48;
      puVar28[1] = uVar48 | 0x3fff0000;
      *(undefined4 *)((long)puVar28 + 10) = 0xffffff00;
      *(ushort *)((long)puVar28 + 0x12) = uVar8;
LAB_0316b01c:
      iVar25 = *(int *)(param_1 + 0xc0);
      lVar21 = (long)iVar25 + 1;
      if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) <= iVar25) {
        FUN_02eaee40(puVar3,PTR_PTR_047d1a50,lVar21);
        iVar25 = *(int *)(param_1 + 0xc0);
      }
      *(short *)(*(long *)(param_1 + 0xb8) + (long)iVar25 * 2) = (short)uVar19;
LAB_0316b058:
      *(int *)(param_1 + 0xc0) = (int)lVar21;
    }
    else {
      if (*(int *)(param_1 + 0xb0) != 0) goto LAB_0316acc8;
      local_74 = (ushort)local_74._1_1_ << 8;
      if (1 < (int)uVar19) {
        FUN_0316c1b0(*(undefined8 *)(param_1 + 0xb8),0,uVar19 - 1,param_1,&local_74);
        uVar19 = *(uint *)(param_1 + 0xc0);
        uVar38 = (ulong)local_78[0];
      }
      lVar21 = *(long *)(param_1 + 0x100);
      uVar26 = (ulong)(*(ushort **)(param_1 + 0xb8))[(int)(uVar19 - 1)];
      uVar47 = (ulong)**(ushort **)(param_1 + 0xb8);
      puVar23 = (ushort *)(*(long *)(param_1 + 0x110) + uVar38 * 8);
      uVar37 = *(uint *)(lVar21 + uVar47 * 0x20);
      iVar29 = *(int *)(*(long *)(param_1 + 0x130) +
                       (ulong)*(ushort *)(*(long *)(param_1 + 0x120) + (ulong)*puVar23 * 8) * 4);
      iVar20 = *(int *)(*(long *)(param_1 + 0x130) +
                       (ulong)*(ushort *)(*(long *)(param_1 + 0x120) + (ulong)puVar23[1] * 8) * 4);
      piVar42 = (int *)(lVar21 + uVar47 * 0x20 + 4);
      iVar11 = *piVar42 - iVar29;
      iVar25 = ((uVar37 - iVar29) * 2 & 0x10000) + (uVar37 - iVar29);
      iVar12 = iVar25 >> 0x10;
      iVar25 = (int)(short)iVar25;
      iVar11 = (iVar11 * 2 & 0x10000U) + iVar11;
      if ((iVar11 >> 0x10) * iVar25 < (short)iVar11 * iVar12) {
        iVar25 = ((uVar37 - iVar20) * 2 & 0x10000) + (uVar37 - iVar20);
        iVar11 = iVar25 >> 0x10;
        iVar29 = (int)(short)iVar25;
        iVar25 = *(int *)(lVar21 + uVar26 * 0x20 + 4) - iVar20;
        iVar25 = (iVar25 * 2 & 0x10000U) + iVar25;
        if ((short)iVar25 * iVar11 < (iVar25 >> 0x10) * iVar29) {
          FUN_031697e0(param_1,uVar38,uVar37,local_78,local_7c);
        }
        else {
          local_78[0] = FUN_03169630(param_1,uVar38,uVar37);
          iVar20 = *piVar42 - iVar20;
          iVar20 = (iVar20 * 2 & 0x10000U) + iVar20;
          if ((iVar20 >> 0x10) * iVar29 < (short)iVar20 * iVar11) {
            uVar19 = *(uint *)(param_1 + 0x108);
            if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) <= (int)uVar19) {
              FUN_03168014(param_1 + 0x100,PTR_PTR_047d1a50,(long)(int)uVar19 + 1);
            }
            iVar25 = (int)((ulong)uVar19 & 0xffff) + 1;
            iVar11 = ((*(int *)(param_1 + 0xf8) >> 5) + 1) * iVar25;
            *(int *)(param_1 + 0x108) = (int)((long)(int)uVar19 + 1);
            if ((int)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) < iVar11) {
              FUN_02eb1f88(param_1 + 0xe8,PTR_PTR_047d1a50,(long)iVar11);
            }
            uVar18 = *(uint *)(param_1 + 0xf0);
            if ((int)uVar18 < iVar11) {
              *(int *)(param_1 + 0xf0) = iVar11;
              memset((void *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar18 * 4),0,
                     (ulong)(iVar11 + ~uVar18) * 4 + 4);
            }
            else if (iVar11 < (int)uVar18) {
              *(int *)(param_1 + 0xf0) = iVar11;
            }
            iVar25 = ((*(int *)(param_1 + 0xe0) >> 5) + 1) * iVar25;
            if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar25) {
              FUN_02eb1f88(param_1 + 0xd0,PTR_PTR_047d1a50,(long)iVar25);
            }
            uVar18 = *(uint *)(param_1 + 0xd8);
            if ((int)uVar18 < iVar25) {
              *(int *)(param_1 + 0xd8) = iVar25;
              memset((void *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar18 * 4),0,
                     (ulong)(iVar25 + ~uVar18) * 4 + 4);
            }
            else if (iVar25 < (int)uVar18) {
              *(int *)(param_1 + 0xd8) = iVar25;
            }
            puVar28 = (uint *)(*(long *)(param_1 + 0x100) + ((ulong)uVar19 & 0xffff) * 0x20);
            *puVar28 = uVar37;
            puVar28[1] = uVar37 + 0x10000 & 0xffff0000;
            *(undefined4 *)((long)puVar28 + 10) = 0xffffff00;
            *(undefined2 *)((long)puVar28 + 0x12) = 0xffff;
            uVar37 = *(uint *)(param_1 + 0xc0);
            lVar21 = (long)(int)uVar37 + 1;
            if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) <= (int)uVar37) {
              FUN_02e8bb18(puVar3,PTR_PTR_047d1a50,lVar21);
            }
            puVar43 = (undefined2 *)*puVar3;
            if (0 < (int)uVar37) {
              FUN_031d0240(puVar43 + 1,puVar43,(ulong)uVar37 << 1);
            }
            *puVar43 = (short)uVar19;
            goto LAB_0316b058;
          }
        }
      }
      else {
        uVar16 = FUN_03169490(param_1,uVar38,uVar37);
        iVar29 = *(int *)(lVar21 + uVar26 * 0x20 + 4) - iVar29;
        iVar29 = (iVar29 * 2 & 0x10000U) + iVar29;
        local_7c[0] = uVar16;
        if ((short)iVar29 * iVar12 < (iVar29 >> 0x10) * iVar25) {
          uVar19 = *(uint *)(param_1 + 0x108);
          if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) <= (int)uVar19) {
            FUN_03168014(param_1 + 0x100,PTR_PTR_047d1a50,(long)(int)uVar19 + 1);
          }
          iVar25 = (int)((ulong)uVar19 & 0xffff) + 1;
          iVar11 = ((*(int *)(param_1 + 0xf8) >> 5) + 1) * iVar25;
          *(int *)(param_1 + 0x108) = (int)((long)(int)uVar19 + 1);
          if ((int)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) < iVar11) {
            FUN_02eb1f88(param_1 + 0xe8,PTR_PTR_047d1a50,(long)iVar11);
          }
          uVar18 = *(uint *)(param_1 + 0xf0);
          if ((int)uVar18 < iVar11) {
            *(int *)(param_1 + 0xf0) = iVar11;
            memset((void *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar18 * 4),0,
                   (ulong)(iVar11 + ~uVar18) * 4 + 4);
          }
          else if (iVar11 < (int)uVar18) {
            *(int *)(param_1 + 0xf0) = iVar11;
          }
          iVar25 = ((*(int *)(param_1 + 0xe0) >> 5) + 1) * iVar25;
          if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar25) {
            FUN_02eb1f88(param_1 + 0xd0,PTR_PTR_047d1a50,(long)iVar25);
          }
          uVar18 = *(uint *)(param_1 + 0xd8);
          if ((int)uVar18 < iVar25) {
            *(int *)(param_1 + 0xd8) = iVar25;
            memset((void *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar18 * 4),0,
                   (ulong)(iVar25 + ~uVar18) * 4 + 4);
          }
          else if (iVar25 < (int)uVar18) {
            *(int *)(param_1 + 0xd8) = iVar25;
          }
          puVar28 = (uint *)(*(long *)(param_1 + 0x100) + ((ulong)uVar19 & 0xffff) * 0x20);
          *puVar28 = uVar37;
          puVar28[1] = uVar37 & 0xffff0000 | 0x3fff;
          *(undefined4 *)((long)puVar28 + 10) = 0xffffff00;
          *(ushort *)((long)puVar28 + 0x12) = uVar16;
          goto LAB_0316b01c;
        }
      }
    }
LAB_0316b05c:
    if ((char)local_74 != '\0') {
      uVar19 = *(uint *)(param_1 + 0xc0);
      if (0 < (int)uVar19) {
        puVar23 = *(ushort **)(param_1 + 0xb8);
        lVar21 = *(long *)(param_1 + 0x100);
        iVar25 = *(int *)(lVar21 + (ulong)*puVar23 * 0x20 + 4);
        iVar11 = *(int *)(lVar21 + (ulong)*puVar23 * 0x20);
        lVar22 = 0;
        uVar37 = 0;
        do {
          iVar25 = iVar25 - iVar11;
          lVar39 = (long)(int)uVar37;
          uVar18 = uVar19;
          if ((int)uVar19 <= (int)(uVar37 + 1)) {
            uVar18 = uVar37 + 1;
          }
          iVar29 = (iVar25 * 2 & 0x10000U) + iVar25;
          uVar18 = uVar18 - 1;
          uVar45 = uVar19;
          if ((int)uVar19 <= (int)uVar37) {
            uVar45 = uVar37 + 1;
          }
          uVar46 = uVar37;
          lVar35 = lVar39;
          do {
            uVar33 = uVar46;
            lVar35 = lVar35 + 1;
            if ((long)(ulong)uVar19 <= lVar35) {
              iVar25 = 0;
              goto LAB_0316b12c;
            }
            iVar25 = *(int *)(lVar21 + (ulong)puVar23[lVar35] * 0x20 + 4);
            iVar20 = iVar25 - iVar11;
            iVar20 = (iVar20 * 2 & 0x10000U) + iVar20;
            uVar46 = uVar33 + 1;
          } while ((int)(short)iVar20 * (iVar29 >> 0x10) == (iVar20 >> 0x10) * (int)(short)iVar29);
          uVar18 = uVar33;
          uVar45 = uVar46;
LAB_0316b12c:
          if ((uVar18 != uVar37) && (1 < (int)(uVar45 - uVar37))) {
            lVar35 = (long)(int)uVar18;
            do {
              uVar16 = puVar23[lVar35];
              lVar35 = lVar35 + -1;
              uVar8 = puVar23[lVar35];
              piVar42 = (int *)(lVar21 + (ulong)uVar16 * 0x20);
              lVar21 = lVar21 + (ulong)uVar8 * 0x20;
              iVar29 = *(int *)(lVar21 + 4);
              *(short *)((long)piVar42 + 10) = *(short *)((long)piVar42 + 10) + 1;
              *piVar42 = iVar29;
              if (piVar42[1] != iVar29) {
                iVar20 = *(int *)(param_1 + 0x98);
                lVar24 = (long)iVar20;
                if ((int)(*(uint *)(param_1 + 0x9c) & 0x7fffffff) <= iVar20) {
                  FUN_03165928(plVar2,PTR_PTR_047d1a50,lVar24 + 1);
                  iVar20 = *(int *)(param_1 + 0x98);
                }
                *(int *)(param_1 + 0x98) = (int)(lVar24 + 1);
                uVar38 = 1;
                puVar28 = (uint *)(*(long *)(param_1 + 0x90) + (long)iVar20 * 0x10);
                *puVar28 = iVar29 << 2 | 1;
                *(ushort *)(puVar28 + 1) = uVar16;
                *(undefined2 *)((long)puVar28 + 6) = 0xffff;
                lVar24 = *(long *)(param_1 + 0x90);
                uVar47 = (long)*(int *)(param_1 + 0x98) - 1;
                puVar28 = (uint *)(lVar24 + uVar47 * 0x10);
                uVar37 = *puVar28;
                local_70 = *(ulong *)(puVar28 + 1);
                local_68 = puVar28[3];
                iVar29 = (int)uVar47;
                while (iVar20 = (int)uVar38, iVar29 != 1) {
                  uVar38 = uVar47 >> 1 & 0x7fffffff;
                  iVar20 = (int)uVar47;
                  if (*(uint *)(lVar24 + uVar38 * 0x10) <= uVar37) break;
                  puVar4 = (undefined8 *)(lVar24 + uVar38 * 0x10);
                  puVar3 = (undefined8 *)(lVar24 + (long)iVar20 * 0x10);
                  uVar6 = puVar4[1];
                  *puVar3 = *puVar4;
                  puVar3[1] = uVar6;
                  lVar24 = *plVar2;
                  uVar47 = uVar38;
                  iVar29 = (int)uVar38;
                }
                puVar28 = (uint *)(lVar24 + (long)iVar20 * 0x10);
                *puVar28 = uVar37;
                puVar28[3] = local_68;
                *(ulong *)(puVar28 + 1) = local_70;
              }
              uVar37 = *(uint *)(param_1 + 0xe0);
              if (-1 < (int)uVar37) {
                lVar27 = *(long *)(param_1 + 0xd0);
                lVar24 = ((long)((ulong)uVar37 << 0x20) >> 0x25) + 1;
                lVar30 = lVar24 * (ulong)uVar8;
                lVar24 = lVar24 * (ulong)uVar16;
                uVar37 = ((int)uVar37 >> 5 & ((int)uVar37 >> 0x1f ^ 0xffffffffU)) + 1;
                uVar47 = (ulong)uVar37;
                uVar38 = uVar47 & 3;
                if (uVar47 - 1 < 3) {
                  uVar26 = 0;
                }
                else {
                  puVar31 = (uint *)(lVar27 + 8 + lVar30 * 4);
                  puVar28 = (uint *)(lVar27 + 8 + lVar24 * 4);
                  uVar26 = 0;
                  do {
                    uVar26 = uVar26 + 4;
                    puVar31[-2] = puVar31[-2] ^ puVar28[-2];
                    puVar31[-1] = puVar31[-1] ^ puVar28[-1];
                    *puVar31 = *puVar31 ^ *puVar28;
                    puVar32 = puVar28 + 1;
                    puVar28 = puVar28 + 4;
                    puVar31[1] = puVar31[1] ^ *puVar32;
                    puVar31 = puVar31 + 4;
                  } while ((uVar47 & 0x7ffffffc) != uVar26);
                }
                if ((uVar37 & 3) != 0) {
                  puVar28 = (uint *)(lVar27 + (uVar26 + lVar24) * 4);
                  puVar31 = (uint *)(lVar27 + (uVar26 + lVar30) * 4);
                  do {
                    uVar38 = uVar38 - 1;
                    *puVar31 = *puVar31 ^ *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar31 = puVar31 + 1;
                  } while (uVar38 != 0);
                }
              }
              psVar40 = (short *)(lVar21 + 8);
              if (*psVar40 == -1) {
                *psVar40 = (short)piVar42[2];
              }
              puVar23 = *(ushort **)(param_1 + 0xb8);
              if (lVar35 == lVar39) break;
              lVar21 = *(long *)(param_1 + 0x100);
            } while( true );
          }
          lVar35 = lVar22 + 1;
          puVar23[lVar22] = puVar23[lVar39];
          if ((int)uVar19 <= (int)uVar45) goto LAB_0316b384;
          puVar23 = *(ushort **)(param_1 + 0xb8);
          lVar21 = *(long *)(param_1 + 0x100);
          lVar22 = lVar35;
          uVar37 = uVar45;
        } while( true );
      }
      lVar35 = 0;
      goto LAB_0316b390;
    }
  }
LAB_0316b3a0:
  uVar16 = local_7c[0];
  if (*(int *)(param_1 + 0xb0) == 0) {
LAB_0316b8c0:
    uVar38 = (ulong)*(uint *)(param_1 + 0xc0);
  }
  else {
    puVar3 = (undefined8 *)(param_1 + 0xb8);
    if ((ulong)local_7c[0] != 0xffff) {
      piVar42 = (int *)(*(long *)(param_1 + 0x100) +
                       (ulong)*(ushort *)
                               (*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xc0) * 2 + -2)
                       * 0x20);
      piVar5 = (int *)(*(long *)(param_1 + 0x100) +
                      (ulong)*(ushort *)
                              (*(long *)(param_1 + 0xa8) + (long)(*(int *)(param_1 + 0xb0) + -1) * 2
                              ) * 0x20);
      iVar29 = *piVar42;
      iVar20 = piVar42[1];
      iVar25 = iVar20 - iVar29;
      iVar11 = piVar5[1] - *piVar5;
      iVar25 = (iVar25 * 2 & 0x10000U) + iVar25;
      iVar11 = (iVar11 * 2 & 0x10000U) + iVar11;
      if ((iVar11 >> 0x10) * (int)(short)iVar25 < (int)(short)iVar11 * (iVar25 >> 0x10)) {
        iVar25 = *(int *)(*(long *)(param_1 + 0x130) +
                         (ulong)*(ushort *)
                                 (*(long *)(param_1 + 0x120) +
                                 (ulong)*(ushort *)
                                         (*(long *)(param_1 + 0x110) + (ulong)local_7c[0] * 8) * 8)
                         * 4);
        iVar29 = iVar29 - iVar25;
        iVar20 = iVar20 - iVar25;
        iVar29 = (iVar29 * 2 & 0x10000U) + iVar29;
        iVar20 = (iVar20 * 2 & 0x10000U) + iVar20;
        if ((int)(short)iVar20 * (iVar29 >> 0x10) < (int)(short)iVar29 * (iVar20 >> 0x10)) {
          uVar19 = *(uint *)(param_1 + 0x108);
          if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) <= (int)uVar19) {
            FUN_03168014(param_1 + 0x100,PTR_PTR_047d1a50,(long)(int)uVar19 + 1);
          }
          *(int *)(param_1 + 0x108) = (int)((long)(int)uVar19 + 1);
          iVar25 = (int)((ulong)uVar19 & 0xffff) + 1;
          iVar11 = ((*(int *)(param_1 + 0xf8) >> 5) + 1) * iVar25;
          if ((int)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) < iVar11) {
            FUN_02eb1f88(param_1 + 0xe8,PTR_PTR_047d1a50,(long)iVar11);
          }
          uVar37 = *(uint *)(param_1 + 0xf0);
          if ((int)uVar37 < iVar11) {
            *(int *)(param_1 + 0xf0) = iVar11;
            memset((void *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar37 * 4),0,
                   (ulong)(iVar11 + ~uVar37) * 4 + 4);
          }
          else if (iVar11 < (int)uVar37) {
            *(int *)(param_1 + 0xf0) = iVar11;
          }
          iVar25 = ((*(int *)(param_1 + 0xe0) >> 5) + 1) * iVar25;
          if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar25) {
            FUN_02eb1f88(param_1 + 0xd0,PTR_PTR_047d1a50,(long)iVar25);
          }
          uVar37 = *(uint *)(param_1 + 0xd8);
          if ((int)uVar37 < iVar25) {
            *(int *)(param_1 + 0xd8) = iVar25;
            memset((void *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar37 * 4),0,
                   (ulong)(iVar25 + ~uVar37) * 4 + 4);
          }
          else if (iVar25 < (int)uVar37) {
            *(int *)(param_1 + 0xd8) = iVar25;
          }
          puVar28 = (uint *)(*(long *)(param_1 + 0x100) + ((ulong)uVar19 & 0xffff) * 0x20);
          *puVar28 = uVar48;
          puVar28[1] = uVar48 & 0x3fff0000 | 0x3fff;
          *(undefined4 *)((long)puVar28 + 10) = 0xffffff00;
          *(ushort *)((long)puVar28 + 0x12) = uVar16;
          iVar25 = *(int *)(param_1 + 0xc0);
          lVar21 = (long)iVar25;
          if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) <= iVar25) {
            FUN_02eaee40(puVar3,PTR_PTR_047d1a50,lVar21 + 1);
            iVar25 = *(int *)(param_1 + 0xc0);
          }
          *(short *)(*(long *)(param_1 + 0xb8) + (long)iVar25 * 2) = (short)uVar19;
          *(int *)(param_1 + 0xc0) = (int)(lVar21 + 1);
        }
        else {
          FUN_03169d30(param_1,local_7c);
        }
      }
    }
    if ((ulong)local_78[0] == 0xffff) goto LAB_0316b8c0;
    piVar42 = (int *)(*(long *)(param_1 + 0x100) + (ulong)**(ushort **)(param_1 + 0xa8) * 0x20);
    piVar5 = (int *)(*(long *)(param_1 + 0x100) + (ulong)**(ushort **)(param_1 + 0xb8) * 0x20);
    iVar29 = *piVar5;
    iVar20 = piVar5[1];
    iVar25 = piVar42[1] - *piVar42;
    iVar11 = iVar20 - iVar29;
    iVar25 = (iVar25 * 2 & 0x10000U) + iVar25;
    iVar11 = (iVar11 * 2 & 0x10000U) + iVar11;
    if ((int)(short)iVar11 * (iVar25 >> 0x10) <= (iVar11 >> 0x10) * (int)(short)iVar25)
    goto LAB_0316b8c0;
    iVar25 = *(int *)(*(long *)(param_1 + 0x130) +
                     (ulong)*(ushort *)
                             (*(long *)(param_1 + 0x120) +
                             (ulong)*(ushort *)
                                     (*(long *)(param_1 + 0x110) + (ulong)local_78[0] * 8 + 2) * 8)
                     * 4);
    iVar29 = iVar29 - iVar25;
    iVar20 = iVar20 - iVar25;
    iVar29 = (iVar29 * 2 & 0x10000U) + iVar29;
    iVar20 = (iVar20 * 2 & 0x10000U) + iVar20;
    if ((int)(short)iVar20 * (iVar29 >> 0x10) <= (int)(short)iVar29 * (iVar20 >> 0x10)) {
      FUN_03169e50(param_1,local_78);
      goto LAB_0316b8c0;
    }
    uVar19 = *(uint *)(param_1 + 0x108);
    if ((int)(*(uint *)(param_1 + 0x10c) & 0x7fffffff) <= (int)uVar19) {
      FUN_03168014(param_1 + 0x100,PTR_PTR_047d1a50,(long)(int)uVar19 + 1);
    }
    iVar25 = (int)((ulong)uVar19 & 0xffff) + 1;
    iVar11 = ((*(int *)(param_1 + 0xf8) >> 5) + 1) * iVar25;
    *(int *)(param_1 + 0x108) = (int)((long)(int)uVar19 + 1);
    if ((int)(*(uint *)(param_1 + 0xf4) & 0x7fffffff) < iVar11) {
      FUN_02eb1f88(param_1 + 0xe8,PTR_PTR_047d1a50,(long)iVar11);
    }
    uVar37 = *(uint *)(param_1 + 0xf0);
    if ((int)uVar37 < iVar11) {
      *(int *)(param_1 + 0xf0) = iVar11;
      memset((void *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar37 * 4),0,
             (ulong)(iVar11 + ~uVar37) * 4 + 4);
    }
    else if (iVar11 < (int)uVar37) {
      *(int *)(param_1 + 0xf0) = iVar11;
    }
    iVar25 = ((*(int *)(param_1 + 0xe0) >> 5) + 1) * iVar25;
    if ((int)(*(uint *)(param_1 + 0xdc) & 0x7fffffff) < iVar25) {
      FUN_02eb1f88(param_1 + 0xd0,PTR_PTR_047d1a50,(long)iVar25);
    }
    uVar37 = *(uint *)(param_1 + 0xd8);
    if ((int)uVar37 < iVar25) {
      *(int *)(param_1 + 0xd8) = iVar25;
      memset((void *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar37 * 4),0,
             (ulong)(iVar25 + ~uVar37) * 4 + 4);
    }
    else if (iVar25 < (int)uVar37) {
      *(int *)(param_1 + 0xd8) = iVar25;
    }
    puVar28 = (uint *)(*(long *)(param_1 + 0x100) + ((ulong)uVar19 & 0xffff) * 0x20);
    *puVar28 = uVar48;
    puVar28[1] = uVar48 + 0x10000 & 0x7fff0000;
    *(undefined4 *)((long)puVar28 + 10) = 0xffffff00;
    *(undefined2 *)((long)puVar28 + 0x12) = 0xffff;
    uVar48 = *(uint *)(param_1 + 0xc0);
    uVar38 = (long)(int)uVar48 + 1;
    if ((int)(*(uint *)(param_1 + 0xc4) & 0x7fffffff) <= (int)uVar48) {
      FUN_02e8bb18(puVar3,PTR_PTR_047d1a50,uVar38);
    }
    puVar43 = (undefined2 *)*puVar3;
    if (0 < (int)uVar48) {
      FUN_031d0240(puVar43 + 1,puVar43,(ulong)uVar48 << 1);
    }
    *puVar43 = (short)uVar19;
    *(int *)(param_1 + 0xc0) = (int)uVar38;
  }
  if ((int)uVar38 != 0) {
    *(ushort *)
     (*(long *)(param_1 + 0x100) +
      (ulong)*(ushort *)(*(long *)(param_1 + 0xb8) + (long)((int)uVar38 + -1) * 2) * 0x20 + 0x12) =
         local_7c[0];
  }
  uVar48 = (uint)uVar49;
  if (bVar15) {
    iVar25 = *(int *)(param_1 + 0xc0);
    if (iVar25 == 0) {
      puVar43 = (undefined2 *)(param_1 + 0xa0);
      goto LAB_0316bc90;
    }
    puVar23 = *(ushort **)(param_1 + 0xb8);
    *(ushort *)(param_1 + 0xa0) = *puVar23;
  }
  else {
    *(ushort *)(*(long *)(param_1 + 0x100) + uVar41 * 0x20 + 0x12) = local_78[0];
    if (*(int *)(param_1 + 0xc0) == 0) {
      puVar43 = (undefined2 *)(*(long *)(param_1 + 0x100) + uVar41 * 0x20 + 0x10);
LAB_0316bc90:
      *puVar43 = (short)uVar49;
      if ((~uVar48 & 0xffff) == 0) {
        *(short *)(param_1 + 0xa2) = (short)uVar41;
      }
      else {
        *(short *)(*(long *)(param_1 + 0x100) + (uVar49 & 0xffff) * 0x20 + 0xe) = (short)uVar41;
      }
      goto LAB_0316bcb8;
    }
    *(undefined2 *)(*(long *)(param_1 + 0x100) + uVar41 * 0x20 + 0x10) =
         **(undefined2 **)(param_1 + 0xb8);
    puVar23 = *(ushort **)(param_1 + 0xb8);
    iVar25 = *(int *)(param_1 + 0xc0);
  }
  uVar16 = *puVar23;
  uVar38 = 0;
  uVar47 = uVar41;
  while( true ) {
    uVar26 = (ulong)uVar16;
    lVar22 = *(long *)(param_1 + 0x100);
    lVar21 = lVar22 + uVar26 * 0x20;
    *(short *)(lVar21 + 0xe) = (short)uVar47;
    if ((~(uint)uVar47 & 0xffff) == 0) {
      iVar11 = *(int *)(param_1 + 0xf8);
      uVar19 = iVar11 >> 5;
      if (uVar19 == 0xffffffff) {
        iVar29 = 0;
        uVar19 = 0xffffffff;
      }
      else {
        memset((void *)(*(long *)(param_1 + 0xe8) + (long)(int)((uVar19 + 1) * (uint)uVar16) * 4),0,
               (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2) + 4);
        iVar11 = *(int *)(param_1 + 0xf8);
        uVar19 = iVar11 >> 5;
        iVar29 = uVar19 + 1;
      }
      if (-1 < iVar11) {
        uVar19 = (uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)) + 1;
        uVar36 = (ulong)uVar19;
        uVar47 = uVar36 & 3;
        lVar35 = *(long *)(param_1 + 0xd0);
        lVar24 = (((long)((ulong)*(uint *)(param_1 + 0xe0) << 0x20) >> 0x25) + 1) * uVar26;
        lVar39 = *(long *)(param_1 + 0xe8);
        if (uVar36 - 1 < 3) {
          uVar34 = 0;
        }
        else {
          uVar34 = 0;
          puVar28 = (uint *)(lVar35 + lVar24 * 4 + 8);
          puVar31 = (uint *)(lVar39 + (long)iVar29 * uVar26 * 4 + 8);
          do {
            uVar34 = uVar34 + 4;
            puVar31[-2] = puVar28[-2] ^ puVar31[-2];
            puVar31[-1] = puVar28[-1] ^ puVar31[-1];
            *puVar31 = *puVar28 ^ *puVar31;
            puVar32 = puVar28 + 1;
            puVar28 = puVar28 + 4;
            puVar31[1] = *puVar32 ^ puVar31[1];
            puVar31 = puVar31 + 4;
          } while ((uVar36 & 0x7ffffffc) != uVar34);
        }
        if ((uVar19 & 3) != 0) {
          puVar28 = (uint *)(lVar39 + (uVar34 + (long)iVar29 * uVar26) * 4);
          puVar31 = (uint *)(lVar35 + (uVar34 + lVar24) * 4);
          do {
            uVar47 = uVar47 - 1;
            *puVar28 = *puVar31 ^ *puVar28;
            puVar28 = puVar28 + 1;
            puVar31 = puVar31 + 1;
          } while (uVar47 != 0);
        }
      }
    }
    else {
      uVar19 = *(uint *)(param_1 + 0xf8);
      if (-1 < (int)uVar19) {
        lVar27 = *(long *)(param_1 + 0xd0);
        lVar39 = ((long)((ulong)uVar19 << 0x20) >> 0x25) + 1;
        lVar24 = lVar39 * uVar26;
        lVar39 = lVar39 * uVar47;
        lVar30 = (((long)((ulong)*(uint *)(param_1 + 0xe0) << 0x20) >> 0x25) + 1) * uVar26;
        lVar35 = *(long *)(param_1 + 0xe8);
        uVar19 = ((int)uVar19 >> 5 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)) + 1;
        uVar36 = (ulong)uVar19;
        uVar47 = uVar36 & 3;
        if (uVar36 - 1 < 3) {
          uVar34 = 0;
        }
        else {
          uVar34 = 0;
          puVar31 = (uint *)(lVar35 + 8 + lVar24 * 4);
          puVar28 = (uint *)(lVar27 + lVar30 * 4 + 8);
          puVar32 = (uint *)(lVar35 + 8 + lVar39 * 4);
          do {
            uVar34 = uVar34 + 4;
            puVar31[-2] = puVar28[-2] ^ puVar32[-2];
            puVar31[-1] = puVar28[-1] ^ puVar32[-1];
            *puVar31 = *puVar28 ^ *puVar32;
            puVar1 = puVar28 + 1;
            puVar28 = puVar28 + 4;
            puVar31[1] = *puVar1 ^ puVar32[1];
            puVar31 = puVar31 + 4;
            puVar32 = puVar32 + 4;
          } while ((uVar36 & 0x7ffffffc) != uVar34);
        }
        if ((uVar19 & 3) != 0) {
          puVar28 = (uint *)(lVar35 + (uVar34 + lVar39) * 4);
          puVar31 = (uint *)(lVar35 + (uVar34 + lVar24) * 4);
          puVar32 = (uint *)(lVar27 + (uVar34 + lVar30) * 4);
          do {
            uVar47 = uVar47 - 1;
            *puVar31 = *puVar32 ^ *puVar28;
            puVar28 = puVar28 + 1;
            puVar31 = puVar31 + 1;
            puVar32 = puVar32 + 1;
          } while (uVar47 != 0);
        }
      }
    }
    if (uVar38 == iVar25 - 1) break;
    if ((*(uint *)(*(long *)(param_1 + 0xe8) +
                  (long)(int)(((*(int *)(param_1 + 0xf8) >> 5) + 1) * (uint)uVar16) * 4) & 1) == 0)
    {
      uVar17 = 0xffff;
    }
    else {
      uVar7 = *(undefined4 *)(lVar22 + uVar26 * 0x20);
      uVar19 = (**(code **)**(undefined8 **)(param_1 + 200))
                         (*(undefined8 **)(param_1 + 200),param_1 + 0xe8,uVar26);
      if ((~uVar19 & 0xffff) == 0) {
        uVar17 = 0xffff;
      }
      else {
        uVar17 = FUN_031693a0(param_1,uVar7,uVar19);
      }
    }
    *(undefined2 *)(lVar21 + 0x12) = uVar17;
    uVar38 = uVar38 + 1;
    uVar16 = *(ushort *)(*(long *)(param_1 + 0xb8) + uVar38 * 2);
    *(ushort *)(lVar21 + 0x10) = uVar16;
    uVar47 = uVar26;
  }
  *(short *)(lVar21 + 0x10) = (short)uVar49;
  uVar17 = *(undefined2 *)(*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xc0) * 2 + -2);
  if ((~uVar48 & 0xffff) == 0) {
    *(undefined2 *)(param_1 + 0xa2) = uVar17;
  }
  else {
    *(undefined2 *)(*(long *)(param_1 + 0x100) + (uVar49 & 0xffff) * 0x20 + 0xe) = uVar17;
  }
LAB_0316bcb8:
  if (*(int *)(param_1 + 0xc0) == 0) {
    if (bVar15 || ((uVar48 ^ 0xffffffff) & 0xffff) == 0) {
      return 1;
    }
    piVar42 = (int *)(*(long *)(param_1 + 0x100) + (uVar49 & 0xffff) * 0x20);
    piVar5 = (int *)(*(long *)(param_1 + 0x100) + uVar41 * 0x20);
    iVar25 = piVar42[1] - *piVar42;
    iVar11 = piVar5[1] - *piVar5;
    iVar25 = (iVar25 * 2 & 0x10000U) + iVar25;
    iVar11 = (iVar11 * 2 & 0x10000U) + iVar11;
    if ((int)(short)iVar11 * (iVar25 >> 0x10) <= (iVar11 >> 0x10) * (int)(short)iVar25) {
      return 1;
    }
  }
  else {
    if (!bVar15) {
      FUN_0316a190(param_1,uVar41,**(undefined2 **)(param_1 + 0xb8));
    }
    if ((~uVar48 & 0xffff) == 0) {
      return 1;
    }
    uVar41 = (ulong)*(ushort *)(*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xc0) * 2 + -2)
    ;
  }
  FUN_0316a190(param_1,uVar41,uVar49);
  return 1;
LAB_0316b384:
  uVar19 = *(uint *)(param_1 + 0xc0);
LAB_0316b390:
  iVar25 = (int)lVar35;
  if (((int)uVar19 < iVar25) || (iVar25 < (int)uVar19)) {
    *(int *)(param_1 + 0xc0) = iVar25;
  }
  goto LAB_0316b3a0;
}


