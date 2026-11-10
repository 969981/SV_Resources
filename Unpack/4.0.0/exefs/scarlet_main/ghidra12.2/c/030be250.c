/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030be250; name: FUN_030be250
 */


undefined1  [16] FUN_030be250(long *param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  undefined8 uVar8;
  uint uVar9;
  long *plVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  float *pfVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar41;
  undefined8 uVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  long *local_60;
  undefined1 auStack_54 [4];
  
  if ((param_2 & 0xffc00000) == 0xff800000) {
    fVar42 = (float)param_1[0x2d];
    lVar15 = param_1[0x2c];
    puVar11 = (uint *)(param_1 + 0x2e);
  }
  else {
    plVar10 = (long *)*param_1;
    if ((*(byte *)(plVar10 + 0x16) >> 4 & 1) == 0) {
      fVar42 = (float)plVar10[0x1d];
      lVar15 = plVar10[0x1c];
    }
    else {
      uVar14 = (ulong)*(uint *)(plVar10 + 0x15) & 0x3fffff;
      lVar15 = *(long *)(*(long *)(*plVar10 + 0x38) +
                        ((ulong)(*(uint *)(plVar10 + 0x15) >> 0xe) & 0x3ff00));
      lVar13 = *(long *)(lVar15 + 0x20);
      iVar16 = (int)uVar14;
      iVar19 = iVar16 - *(int *)(lVar13 + 0x30);
      if (iVar16 < *(int *)(lVar13 + 0x30)) {
        iVar19 = iVar16;
        if ((*(int *)(lVar13 + 0x78) == 0) ||
           (iVar19 = *(int *)(*(long *)(lVar13 + 0x70) + uVar14 * 4), iVar19 != -1)) {
          lVar22 = *(long *)(lVar13 + 0xc0);
          goto LAB_030be2e8;
        }
        piVar17 = (int *)(*(long *)(lVar13 + 0x28) + uVar14 * 0x14);
      }
      else {
        lVar22 = *(long *)(lVar13 + 0xe0);
LAB_030be2e8:
        piVar17 = (int *)(lVar22 + (long)iVar19 * 0x14);
      }
      iVar3 = *(int *)(lVar13 + 0x40);
      iVar19 = *piVar17;
      iVar16 = piVar17[1];
      lVar22 = 0x38;
      if (iVar3 <= iVar19) {
        lVar22 = 0xf0;
      }
      iVar1 = 0;
      if (iVar3 <= iVar19) {
        iVar1 = iVar3;
      }
      puVar12 = (undefined8 *)(*(long *)(lVar13 + lVar22) + (long)(iVar19 - iVar1) * 0x10);
      uVar8 = *puVar12;
      lVar22 = 0x38;
      if (iVar3 <= iVar16) {
        lVar22 = 0xf0;
      }
      iVar19 = 0;
      if (iVar3 <= iVar16) {
        iVar19 = iVar3;
      }
      puVar2 = (undefined8 *)(*(long *)(lVar13 + lVar22) + (long)(iVar16 - iVar19) * 0x10);
      uVar31 = *puVar2;
      fVar42 = (float)uVar8;
      fVar35 = (float)*(undefined8 *)(lVar15 + 0x60);
      fVar36 = (float)((ulong)*(undefined8 *)(lVar15 + 0x60) >> 0x20);
      fVar30 = (float)*(undefined8 *)(lVar15 + 0x68);
      fVar41 = (float)((ulong)uVar8 >> 0x20);
      fVar37 = (float)*(undefined8 *)(lVar15 + 0x70);
      fVar39 = (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20);
      fVar43 = (float)*(undefined8 *)(lVar15 + 0x78);
      fVar34 = (float)uVar31;
      fVar29 = (float)((ulong)uVar31 >> 0x20);
      fVar32 = (float)puVar12[1];
      fVar44 = (float)*(undefined8 *)(lVar15 + 0x80);
      fVar46 = (float)((ulong)*(undefined8 *)(lVar15 + 0x80) >> 0x20);
      fVar47 = (float)*(undefined8 *)(lVar15 + 0x88);
      fVar33 = (float)puVar2[1];
      fVar49 = (float)*(undefined8 *)(lVar15 + 0x90);
      fVar38 = fVar49 + fVar44 * fVar32 + fVar35 * fVar42 + fVar37 * fVar41;
      fVar50 = (float)((ulong)*(undefined8 *)(lVar15 + 0x90) >> 0x20);
      fVar28 = fVar50 + fVar46 * fVar32 + fVar36 * fVar42 + fVar39 * fVar41;
      fVar51 = (float)*(undefined8 *)(lVar15 + 0x98);
      fVar42 = fVar51 + fVar47 * fVar32 + fVar30 * fVar42 + fVar43 * fVar41;
      lVar15 = CONCAT44(fVar28 + ((fVar50 + fVar46 * fVar33 + fVar36 * fVar34 + fVar39 * fVar29) -
                                 fVar28) * 0.5,
                        fVar38 + ((fVar49 + fVar44 * fVar33 + fVar35 * fVar34 + fVar37 * fVar29) -
                                 fVar38) * 0.5);
      fVar42 = fVar42 + ((fVar51 + fVar47 * fVar33 + fVar30 * fVar34 + fVar43 * fVar29) - fVar42) *
                        0.5;
    }
    puVar11 = (uint *)((long)plVar10 + 0xac);
  }
  fVar38 = (float)lVar15;
  fVar41 = (float)((ulong)lVar15 >> 0x20);
  if (((param_1[1] == 0) || ((int)param_1[3] == -1)) || (*(char *)((long)param_1 + 0x14) == '\0')) {
    uVar14 = (ulong)*(uint *)(param_1 + 2);
    uVar26 = 0x7f7fffee7f7fffee;
    if (0 < (int)*(uint *)(param_1 + 2)) {
      puVar12 = (undefined8 *)param_1[0x46];
      do {
        uVar14 = uVar14 - 1;
        fVar28 = fVar38 - (float)*puVar12;
        fVar32 = fVar41 - (float)((ulong)*puVar12 >> 0x20);
        fVar34 = fVar42 - (float)puVar12[1];
        fVar28 = fVar28 * fVar28;
        fVar32 = fVar32 * fVar32;
        fVar34 = fVar34 * fVar34;
        uVar26 = NEON_fmin(uVar26,CONCAT44(SQRT(fVar28 + fVar32 + fVar34),
                                           SQRT(fVar28 + fVar32 + fVar34)),4);
        puVar12 = puVar12 + 2;
      } while (uVar14 != 0);
    }
    goto LAB_030be450;
  }
  uVar25 = *puVar11;
  uVar9 = (uint)*(short *)(*param_1 + 0x2c);
  uVar24 = uVar9 | *(int *)(*param_1 + 0x288) << 0x16;
  if (uVar9 == 0xffffffff) {
    uVar24 = 0xffffffff;
  }
  if (uVar25 == 0xffffffff) {
    uVar25 = 0xffffffff;
  }
  else {
    uVar9 = uVar25 & 0x3fffff;
    lVar15 = *(long *)(*(long *)(*(long *)(param_1[0x44] + 0x38) +
                                ((ulong)(uVar25 >> 0xe) & 0x3ff00)) + 0x20);
    uVar20 = uVar9 - *(int *)(lVar15 + 0x20);
    if ((int)uVar9 < *(int *)(lVar15 + 0x20)) {
      if (*(int *)(lVar15 + 0x98) == 0) {
        uVar20 = uVar9;
LAB_030be490:
        lVar15 = *(long *)(lVar15 + 0xb0);
        goto LAB_030be494;
      }
      uVar20 = *(uint *)(*(long *)(lVar15 + 0x90) + (ulong)uVar9 * 4);
      if (uVar20 != 0xffffffff) goto LAB_030be490;
      lVar15 = *(long *)(lVar15 + 0x18) + (ulong)uVar9 * 0x10;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0xd0);
LAB_030be494:
      lVar15 = lVar15 + (long)(int)uVar20 * 0x10;
    }
    uVar25 = uVar25 & 0xffc00000 | (int)*(short *)(lVar15 + 0xc);
    if ((int)*(short *)(lVar15 + 0xc) == 0xffffffff) {
      uVar25 = 0xffffffff;
    }
  }
  uVar14 = (ulong)*(uint *)(param_1 + 2);
  if (0 < (int)*(uint *)(param_1 + 2)) {
    uVar21 = 0;
    uVar26 = 0x7f7fffee7f7fffee;
    bVar23 = false;
    do {
      while (uVar9 = *(uint *)((long)param_1 + uVar21 * 4 + 0x1c),
            !(uVar9 == uVar25 || uVar9 == uVar24)) {
        uVar21 = uVar21 + 1;
        if (uVar14 == uVar21) {
          if (!bVar23) {
            if ((uVar24 == 0xffffffff) || (uVar25 == 0xffffffff)) {
              uVar26 = 0x7f7fffee7f7fffee;
              puVar12 = (undefined8 *)param_1[0x46];
              do {
                uVar14 = uVar14 - 1;
                fVar28 = fVar38 - (float)*puVar12;
                fVar32 = fVar41 - (float)((ulong)*puVar12 >> 0x20);
                fVar34 = fVar42 - (float)puVar12[1];
                fVar28 = fVar28 * fVar28;
                fVar32 = fVar32 * fVar32;
                fVar34 = fVar34 * fVar34;
                uVar26 = NEON_fmin(uVar26,CONCAT44(SQRT(fVar28 + fVar32 + fVar34),
                                                   SQRT(fVar28 + fVar32 + fVar34)),4);
                puVar12 = puVar12 + 2;
              } while (uVar14 != 0);
              goto LAB_030be450;
            }
            goto LAB_030be590;
          }
          goto LAB_030be450;
        }
      }
      bVar7 = uVar14 - 1 != uVar21;
      puVar12 = (undefined8 *)(param_1[0x46] + uVar21 * 0x10);
      uVar8 = *puVar12;
      uVar21 = uVar21 + 1;
      fVar28 = fVar38 - (float)uVar8;
      fVar32 = fVar41 - (float)((ulong)uVar8 >> 0x20);
      fVar34 = fVar42 - (float)puVar12[1];
      bVar23 = true;
      fVar28 = fVar28 * fVar28;
      fVar32 = fVar32 * fVar32;
      fVar34 = fVar34 * fVar34;
      uVar26 = NEON_fmin(uVar26,CONCAT44(SQRT(fVar28 + fVar32 + fVar34),
                                         SQRT(fVar28 + fVar32 + fVar34)),4);
    } while (bVar7);
    goto LAB_030be450;
  }
  uVar26 = 0x7f7fffee7f7fffee;
  if ((uVar24 == 0xffffffff) || (uVar25 == 0xffffffff)) goto LAB_030be450;
LAB_030be590:
  local_60 = (long *)CONCAT44(local_60._4_4_,0xffffffff);
  uVar14 = FUN_030bed80(uVar26,param_1,uVar25,&local_60,auStack_54);
  if ((uVar14 & 1) == 0) {
    if ((uVar25 == uVar24) ||
       (uVar14 = FUN_030bed80(param_1,uVar24,&local_60,auStack_54), (uVar14 & 1) == 0)) {
      iVar19 = *(int *)((long)param_1 + 0x1ac);
      if (iVar19 < (int)param_1[0x35]) {
        uVar14 = (ulong)(uVar25 * -0x61c8864f >> 0x18);
        lVar15 = param_1[0x32];
        for (uVar4 = *(ushort *)(param_1[0x34] + uVar14 * 2); -1 < (short)uVar4;
            uVar4 = *(ushort *)(param_1[0x33] + (ulong)uVar4 * 2)) {
          if (*(uint *)(lVar15 + (ulong)uVar4 * 0x10 + 8) == uVar25) {
            puVar12 = (undefined8 *)(lVar15 + (ulong)uVar4 * 0x10);
            goto LAB_030be6f0;
          }
        }
        puVar12 = (undefined8 *)(lVar15 + (long)iVar19 * 0x10);
        *(int *)((long)param_1 + 0x1ac) = iVar19 + 1;
        *puVar12 = 0x7f7fffee7f7fffee;
        *(uint *)(puVar12 + 1) = uVar25;
        *(undefined4 *)((long)puVar12 + 0xc) = 0xffff;
        *(undefined2 *)(param_1[0x33] + (long)(short)iVar19 * 2) =
             *(undefined2 *)(param_1[0x34] + uVar14 * 2);
        *(short *)(param_1[0x34] + uVar14 * 2) = (short)iVar19;
LAB_030be6f0:
        if (puVar12 != (undefined8 *)0x0) {
          if ((*(byte *)((long)puVar12 + 0xe) >> 1 & 1) == 0) {
            lVar15 = tpidr_el0;
            lVar13 = *(long *)(lVar15 + 0x1000b8);
            if (lVar13 == 0) {
              lVar13 = FUN_00e5d3b4();
              *(long *)(lVar15 + 0x1000b8) = lVar13;
            }
            plVar10 = *(long **)(lVar13 + 0x3e0);
            if (plVar10 != (long *)0x0) {
              lVar15 = *plVar10;
              if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
                (**(code **)(lVar15 + 0x18))("AbstractSearch",0xe,*(undefined8 *)(lVar15 + 0x28));
              }
              puVar2 = (undefined8 *)plVar10[2];
              uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
              if ((uVar14 <= (ulong)plVar10[3]) &&
                 (plVar10[2] = uVar14, puVar2 != (undefined8 *)0x0)) {
                *puVar2 = "TtAbstractSearch";
                uVar8 = nn::os::GetSystemTick();
                puVar2[1] = uVar8;
              }
              if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
                puVar2 = (undefined8 *)plVar10[2];
                uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
                if ((uVar14 <= (ulong)plVar10[3]) &&
                   (plVar10[2] = uVar14, puVar2 != (undefined8 *)0x0)) {
                  *puVar2 = &DAT_03c4e575;
                  puVar2[1] = *(undefined8 *)(plVar10[6] + 8);
                }
              }
            }
            local_60 = plVar10;
            if ((*(byte *)((long)puVar12 + 0xe) >> 1 & 1) == 0) {
              do {
                if ((int)param_1[0x3f] == 0) {
                  bVar23 = false;
                  bVar7 = true;
                  goto joined_r0x030beb18;
                }
                if ((*(int *)((long)param_1 + 0x1fc) <= (int)param_1[0x3f]) ||
                   ((int)param_1[0x35] <= *(int *)((long)param_1 + 0x1ac))) {
                  bVar7 = false;
                  goto LAB_030be804;
                }
                FUN_030bfb7c(param_1 + 0x30);
              } while ((*(byte *)((long)puVar12 + 0xe) >> 1 & 1) == 0);
            }
            bVar7 = true;
LAB_030be804:
            bVar23 = true;
joined_r0x030beb18:
            if (plVar10 != (long *)0x0) {
              lVar15 = *plVar10;
              if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
                puVar2 = (undefined8 *)plVar10[2];
                uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
                if ((uVar14 <= (ulong)plVar10[3]) &&
                   (plVar10[2] = uVar14, puVar2 != (undefined8 *)0x0)) {
                  *puVar2 = &DAT_03c4e575;
                  puVar2[1] = *(undefined8 *)(plVar10[6] + 8);
                }
              }
              puVar2 = (undefined8 *)plVar10[2];
              uVar14 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
              if ((uVar14 <= (ulong)plVar10[3]) &&
                 (plVar10[2] = uVar14, puVar2 != (undefined8 *)0x0)) {
                *puVar2 = &DAT_03c2d363;
                uVar8 = nn::os::GetSystemTick();
                puVar2[1] = uVar8;
              }
              if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
                (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
              }
            }
            if (!bVar23) {
              uVar26 = 0x7f7fffee;
              goto LAB_030be450;
            }
            if (!bVar7) goto LAB_030be934;
          }
          lVar13 = param_1[0x32];
          lVar15 = lVar13 + (long)*(short *)((long)puVar12 + 0xc) * 0x10;
          uVar24 = *(uint *)(param_1 + 2);
          fVar28 = *(float *)(lVar15 + 8);
          if (uVar24 == 1) {
            uVar14 = (ulong)((uint)((int)fVar28 * -0x61c8864f) >> 0x18);
            for (uVar4 = *(ushort *)(param_1[0x34] + uVar14 * 2); -1 < (short)uVar4;
                uVar4 = *(ushort *)(param_1[0x33] + (ulong)uVar4 * 2)) {
              if (*(float *)(lVar13 + (ulong)uVar4 * 0x10 + 8) == fVar28) {
                pfVar18 = (float *)(lVar13 + (ulong)uVar4 * 0x10);
                goto LAB_030beadc;
              }
            }
            iVar19 = *(int *)((long)param_1 + 0x1ac);
            pfVar18 = (float *)(lVar13 + (long)iVar19 * 0x10);
            *(int *)((long)param_1 + 0x1ac) = iVar19 + 1;
            pfVar18[0] = 3.40282e+38;
            pfVar18[1] = 3.40282e+38;
            pfVar18[2] = fVar28;
            pfVar18[3] = 9.18341e-41;
            *(undefined2 *)(param_1[0x33] + (long)(short)iVar19 * 2) =
                 *(undefined2 *)(param_1[0x34] + uVar14 * 2);
            *(short *)(param_1[0x34] + uVar14 * 2) = (short)iVar19;
            lVar13 = param_1[0x32];
LAB_030beadc:
            *(int *)(param_1 + 0x3a) = ((int)pfVar18 - (int)lVar13) * 0x1000 >> 0x10;
            param_1[0x3b] = (long)pfVar18;
            param_1[0x3c] = (long)pfVar18;
            uVar25 = *(uint *)((long)param_1 + 0x1c);
            fVar32 = *pfVar18;
            uVar14 = 0;
            fVar34 = fVar32;
          }
          else {
            if ((long)*(short *)(lVar15 + 0xc) == -1) {
              piVar17 = (int *)(lVar15 + 8);
              fVar32 = 0.0;
              fVar34 = 0.0;
            }
            else {
              lVar13 = lVar13 + (long)*(short *)(lVar15 + 0xc) * 0x10;
              if ((*(byte *)(lVar13 + 0xe) >> 2 & 1) == 0) {
                plVar10 = (long *)param_1[1];
                fVar32 = 0.0;
                fVar34 = 0.0;
                uVar14 = (ulong)(uint)fVar28;
                do {
                  lVar15 = lVar13;
                  uVar24 = (uint)(uVar14 >> 0x16);
                  if (*(uint *)(plVar10 + 0xf) != (uint)uVar14 >> 0x16) {
                    plVar10[3] = *(long *)(*(long *)(*plVar10 + 0x38) + (uVar14 >> 0x16) * 0x100 +
                                          0x10);
                    *(uint *)(plVar10 + 0xf) = uVar24;
                    plVar10 = (long *)param_1[1];
                    uVar24 = *(uint *)(plVar10 + 0xf);
                  }
                  lVar22 = plVar10[3];
                  uVar31 = *(undefined8 *)(lVar22 + 0x40);
                  uVar40 = *(undefined8 *)(lVar22 + 0x50);
                  lVar13 = *(long *)(*(long *)(lVar22 + 0x20) + 0x38);
                  puVar12 = (undefined8 *)(lVar13 + (ulong)((uint)uVar14 & 0x3fffff) * 0x10);
                  uVar8 = *puVar12;
                  fVar29 = (float)uVar8;
                  fVar30 = (float)uVar31;
                  uVar26 = (ulong)uVar31 >> 0x20;
                  fVar37 = (float)*(undefined8 *)(lVar22 + 0x48);
                  fVar33 = (float)((ulong)uVar8 >> 0x20);
                  fVar39 = (float)uVar40;
                  uVar21 = (ulong)uVar40 >> 0x20;
                  fVar43 = (float)*(undefined8 *)(lVar22 + 0x58);
                  uVar48 = *(undefined8 *)(lVar22 + 0x60);
                  uVar8 = *(undefined8 *)(lVar22 + 0x70);
                  uVar25 = *(uint *)(lVar15 + 8);
                  uVar9 = uVar25 >> 0x16;
                  fVar35 = (float)puVar12[1];
                  fVar47 = (float)uVar48;
                  uVar5 = (ulong)uVar48 >> 0x20;
                  fVar49 = (float)*(undefined8 *)(lVar22 + 0x68);
                  fVar44 = (float)uVar8;
                  uVar6 = (ulong)uVar8 >> 0x20;
                  fVar46 = (float)*(undefined8 *)(lVar22 + 0x78);
                  fVar36 = fVar46 + fVar49 * fVar35 + fVar37 * fVar29 + fVar43 * fVar33;
                  if (uVar24 == uVar9) {
                    uVar14 = (ulong)uVar25;
                  }
                  else {
                    plVar10[3] = *(long *)(*(long *)(*plVar10 + 0x38) + (ulong)uVar9 * 0x100 + 0x10)
                    ;
                    *(uint *)(plVar10 + 0xf) = uVar9;
                    plVar10 = (long *)param_1[1];
                    lVar13 = plVar10[3];
                    fVar37 = (float)*(undefined8 *)(lVar13 + 0x48);
                    uVar31 = *(undefined8 *)(lVar13 + 0x40);
                    fVar43 = (float)*(undefined8 *)(lVar13 + 0x58);
                    uVar40 = *(undefined8 *)(lVar13 + 0x50);
                    fVar49 = (float)*(undefined8 *)(lVar13 + 0x68);
                    uVar48 = *(undefined8 *)(lVar13 + 0x60);
                    fVar46 = (float)*(undefined8 *)(lVar13 + 0x78);
                    uVar8 = *(undefined8 *)(lVar13 + 0x70);
                    uVar14 = (ulong)*(uint *)(lVar15 + 8);
                    lVar13 = *(long *)(*(long *)(lVar13 + 0x20) + 0x38);
                  }
                  puVar12 = (undefined8 *)(lVar13 + ((ulong)uVar25 & 0x3fffff) * 0x10);
                  uVar45 = *puVar12;
                  fVar50 = (float)uVar45;
                  fVar51 = (float)((ulong)uVar45 >> 0x20);
                  fVar52 = (float)puVar12[1];
                  fVar30 = (fVar44 + fVar47 * fVar35 + fVar30 * fVar29 + fVar39 * fVar33) -
                           ((float)uVar8 +
                           (float)uVar48 * fVar52 + (float)uVar31 * fVar50 + (float)uVar40 * fVar51)
                  ;
                  fVar29 = ((float)uVar6 +
                           (float)uVar5 * fVar35 + (float)uVar26 * fVar29 + (float)uVar21 * fVar33)
                           - ((float)((ulong)uVar8 >> 0x20) +
                             (float)((ulong)uVar48 >> 0x20) * fVar52 +
                             (float)((ulong)uVar31 >> 0x20) * fVar50 +
                             (float)((ulong)uVar40 >> 0x20) * fVar51);
                  fVar36 = fVar36 - (fVar46 + fVar49 * fVar52 + fVar37 * fVar50 + fVar43 * fVar51);
                  fVar30 = fVar30 * fVar30;
                  fVar29 = fVar29 * fVar29;
                  fVar36 = fVar36 * fVar36;
                  fVar32 = fVar32 + SQRT(fVar30 + fVar29 + fVar36);
                  fVar34 = fVar34 + SQRT(fVar30 + fVar29 + fVar36);
                  if (((long)*(short *)(lVar15 + 0xc) == -1) || (param_1[0x32] == 0)) {
                    uVar24 = *(uint *)(param_1 + 2);
                    piVar17 = (int *)(lVar15 + 8);
                    goto LAB_030beb34;
                  }
                  lVar13 = param_1[0x32] + (long)*(short *)(lVar15 + 0xc) * 0x10;
                } while ((*(byte *)(lVar13 + 0xe) >> 2 & 1) == 0);
                uVar24 = *(uint *)(param_1 + 2);
              }
              else {
                fVar32 = 0.0;
                fVar34 = 0.0;
              }
              piVar17 = (int *)(lVar13 + 8);
            }
LAB_030beb34:
            uVar25 = *(uint *)(lVar15 + 8);
            if ((int)uVar24 < 1) {
              uVar14 = 0xffffffffffffffff;
            }
            else {
              uVar14 = 0;
              do {
                if (*(int *)((long)param_1 + uVar14 * 4 + 0x1c) == *piVar17) goto LAB_030beb78;
                uVar14 = uVar14 + 1;
              } while (uVar24 != uVar14);
              uVar14 = 0xffffffffffffffff;
            }
LAB_030beb78:
            uVar26 = (ulong)((uint)((int)fVar28 * -0x61c8864f) >> 0x18);
            lVar15 = param_1[0x32];
            for (uVar4 = *(ushort *)(param_1[0x34] + uVar26 * 2); -1 < (short)uVar4;
                uVar4 = *(ushort *)(param_1[0x33] + (ulong)uVar4 * 2)) {
              if (*(float *)(lVar15 + (ulong)uVar4 * 0x10 + 8) == fVar28) {
                pfVar18 = (float *)(lVar15 + (ulong)uVar4 * 0x10);
                goto LAB_030bebfc;
              }
            }
            iVar19 = *(int *)((long)param_1 + 0x1ac);
            pfVar18 = (float *)(lVar15 + (long)iVar19 * 0x10);
            *(int *)((long)param_1 + 0x1ac) = iVar19 + 1;
            pfVar18[0] = 3.40282e+38;
            pfVar18[1] = 3.40282e+38;
            pfVar18[2] = fVar28;
            pfVar18[3] = 9.18341e-41;
            *(undefined2 *)(param_1[0x33] + (long)(short)iVar19 * 2) =
                 *(undefined2 *)(param_1[0x34] + uVar26 * 2);
            *(short *)(param_1[0x34] + uVar26 * 2) = (short)iVar19;
            lVar15 = param_1[0x32];
LAB_030bebfc:
            *(int *)(param_1 + 0x3a) = ((int)pfVar18 - (int)lVar15) * 0x1000 >> 0x10;
            param_1[0x3b] = (long)pfVar18;
            param_1[0x3c] = (long)pfVar18;
            uVar8 = NEON_fmov(0x40400000,4);
            fVar29 = *pfVar18 * (float)uVar8;
            uVar8 = NEON_fmov(0x3e800000,4);
            fVar32 = (fVar32 + fVar29) * (float)uVar8;
            fVar34 = (fVar34 + fVar29) * (float)((ulong)uVar8 >> 0x20);
          }
          plVar10 = (long *)param_1[1];
          uVar24 = (uint)fVar28 >> 0x16;
          if (*(uint *)(plVar10 + 0xf) != uVar24) {
            plVar10[3] = *(long *)(*(long *)(*plVar10 + 0x38) + (ulong)uVar24 * 0x100 + 0x10);
            *(uint *)(plVar10 + 0xf) = uVar24;
            plVar10 = (long *)param_1[1];
            uVar24 = *(uint *)(plVar10 + 0xf);
          }
          lVar13 = plVar10[3];
          lVar15 = *(long *)(*(long *)(lVar13 + 0x20) + 0x38);
          puVar12 = (undefined8 *)(lVar15 + ((ulong)(uint)fVar28 & 0x3fffff) * 0x10);
          uVar8 = *puVar12;
          uVar31 = *(undefined8 *)(lVar13 + 0x40);
          uVar40 = *(undefined8 *)(lVar13 + 0x50);
          fVar28 = (float)uVar8;
          fVar36 = (float)uVar31;
          uVar26 = (ulong)uVar31 >> 0x20;
          fVar30 = (float)*(undefined8 *)(lVar13 + 0x48);
          fVar29 = (float)((ulong)uVar8 >> 0x20);
          fVar37 = (float)uVar40;
          uVar21 = (ulong)uVar40 >> 0x20;
          fVar39 = (float)*(undefined8 *)(lVar13 + 0x58);
          uVar48 = *(undefined8 *)(lVar13 + 0x60);
          uVar8 = *(undefined8 *)(lVar13 + 0x70);
          fVar33 = (float)puVar12[1];
          fVar46 = (float)uVar48;
          uVar5 = (ulong)uVar48 >> 0x20;
          fVar47 = (float)*(undefined8 *)(lVar13 + 0x68);
          fVar43 = (float)uVar8;
          uVar6 = (ulong)uVar8 >> 0x20;
          fVar44 = (float)*(undefined8 *)(lVar13 + 0x78);
          fVar35 = fVar44 + fVar47 * fVar33 + fVar30 * fVar28 + fVar39 * fVar29;
          if (uVar24 != uVar25 >> 0x16) {
            plVar10[3] = *(long *)(*(long *)(*plVar10 + 0x38) + (ulong)(uVar25 >> 0x16) * 0x100 +
                                  0x10);
            *(uint *)(plVar10 + 0xf) = uVar25 >> 0x16;
            lVar13 = *(long *)(param_1[1] + 0x18);
            lVar15 = *(long *)(*(long *)(lVar13 + 0x20) + 0x38);
            fVar30 = (float)*(undefined8 *)(lVar13 + 0x48);
            uVar31 = *(undefined8 *)(lVar13 + 0x40);
            fVar39 = (float)*(undefined8 *)(lVar13 + 0x58);
            uVar40 = *(undefined8 *)(lVar13 + 0x50);
            fVar47 = (float)*(undefined8 *)(lVar13 + 0x68);
            uVar48 = *(undefined8 *)(lVar13 + 0x60);
            fVar44 = (float)*(undefined8 *)(lVar13 + 0x78);
            uVar8 = *(undefined8 *)(lVar13 + 0x70);
          }
          puVar12 = (undefined8 *)(lVar15 + (ulong)(uVar25 & 0x3fffff) * 0x10);
          uVar45 = *puVar12;
          fVar49 = (float)uVar45;
          fVar50 = (float)((ulong)uVar45 >> 0x20);
          fVar51 = (float)puVar12[1];
          fVar38 = fVar38 - (fVar43 + fVar46 * fVar33 + fVar36 * fVar28 + fVar37 * fVar29);
          fVar41 = fVar41 - ((float)uVar6 +
                            (float)uVar5 * fVar33 + (float)uVar26 * fVar28 + (float)uVar21 * fVar29)
          ;
          fVar42 = fVar42 - fVar35;
          puVar12 = (undefined8 *)
                    (param_1[0x46] +
                    (-(uVar14 >> 0x1f & 1) & 0xfffffff000000000 | (uVar14 & 0xffffffff) << 4));
          uVar45 = *puVar12;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar42 = fVar42 * fVar42;
          fVar28 = ((float)uVar8 +
                   (float)uVar48 * fVar51 + (float)uVar31 * fVar49 + (float)uVar40 * fVar50) -
                   (float)uVar45;
          fVar29 = ((float)((ulong)uVar8 >> 0x20) +
                   (float)((ulong)uVar48 >> 0x20) * fVar51 +
                   (float)((ulong)uVar31 >> 0x20) * fVar49 + (float)((ulong)uVar40 >> 0x20) * fVar50
                   ) - (float)((ulong)uVar45 >> 0x20);
          fVar33 = (fVar44 + fVar47 * fVar51 + fVar30 * fVar49 + fVar39 * fVar50) -
                   (float)puVar12[1];
          fVar28 = fVar28 * fVar28;
          fVar29 = fVar29 * fVar29;
          fVar33 = fVar33 * fVar33;
          uVar26 = CONCAT44(fVar34 + SQRT(fVar42 + fVar38 + fVar41) + SQRT(fVar28 + fVar29 + fVar33)
                            ,fVar32 + SQRT(fVar42 + fVar38 + fVar41) +
                             SQRT(fVar28 + fVar29 + fVar33));
          goto LAB_030be450;
        }
      }
LAB_030be934:
      uVar14 = (ulong)*(uint *)(param_1 + 2);
      uVar26 = 0x7f7fffee7f7fffee;
      if (0 < (int)*(uint *)(param_1 + 2)) {
        puVar12 = (undefined8 *)param_1[0x46];
        do {
          uVar14 = uVar14 - 1;
          fVar28 = fVar38 - (float)*puVar12;
          fVar32 = fVar41 - (float)((ulong)*puVar12 >> 0x20);
          fVar34 = fVar42 - (float)puVar12[1];
          fVar28 = fVar28 * fVar28;
          fVar32 = fVar32 * fVar32;
          fVar34 = fVar34 * fVar34;
          uVar26 = NEON_fmin(uVar26,CONCAT44(SQRT(fVar28 + fVar32 + fVar34),
                                             SQRT(fVar28 + fVar32 + fVar34)),4);
          puVar12 = puVar12 + 2;
        } while (uVar14 != 0);
      }
      goto LAB_030be450;
    }
  }
  else {
    uVar24 = uVar25;
  }
  plVar10 = (long *)param_1[1];
  if (*(uint *)(plVar10 + 0xf) != uVar24 >> 0x16) {
    plVar10[3] = *(long *)(*(long *)(*plVar10 + 0x38) + (ulong)(uVar24 >> 0x16) * 0x100 + 0x10);
    *(uint *)(plVar10 + 0xf) = uVar24 >> 0x16;
  }
  lVar15 = (long)(int)local_60;
  puVar12 = (undefined8 *)(param_1[0x46] + lVar15 * 0x10);
  uVar8 = *puVar12;
  fVar28 = (float)uVar8;
  fVar29 = fVar38 - fVar28;
  fVar32 = (float)((ulong)uVar8 >> 0x20);
  fVar33 = fVar41 - fVar32;
  fVar34 = (float)puVar12[1];
  fVar35 = fVar42 - fVar34;
  fVar36 = (float)param_1[lVar15 * 2 + 0xc];
  fVar28 = fVar36 - fVar28;
  fVar30 = (float)((ulong)param_1[lVar15 * 2 + 0xc] >> 0x20);
  fVar32 = fVar30 - fVar32;
  fVar34 = (float)param_1[lVar15 * 2 + 0xd] - fVar34;
  fVar38 = fVar38 - fVar36;
  fVar41 = fVar41 - fVar30;
  fVar42 = fVar42 - (float)param_1[lVar15 * 2 + 0xd];
  uVar26 = (ulong)(uint)((SQRT(fVar29 * fVar29 + fVar33 * fVar33 + fVar35 * fVar35) +
                         SQRT(fVar38 * fVar38 + fVar41 * fVar41 + fVar42 * fVar42) +
                         SQRT(fVar28 * fVar28 + fVar32 * fVar32 + fVar34 * fVar34)) * 0.5);
LAB_030be450:
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar26;
  return auVar27;
}


