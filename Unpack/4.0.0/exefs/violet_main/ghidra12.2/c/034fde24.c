/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034fde24; name: FUN_034fde24
 */


void FUN_034fde24(long *param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  long *plVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  undefined4 uVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  float *pfVar21;
  ulong *puVar22;
  float *pfVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  lVar31 = param_1[1];
  if ((*(byte *)(lVar31 + 0xef) & 1) == 0) {
    fVar35 = 0.0;
  }
  else {
    fVar35 = (float)(**(code **)(*param_1 + 0x60))(param_1);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  fVar36 = *(float *)(param_1 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = 0xc5800000;
  puVar10 = PTR_DAT_047e6958;
  fVar40 = 1.0;
  if ((*(long **)(lVar31 + 0x50) != (long *)0x0) &&
     (plVar15 = (long *)**(long **)(lVar31 + 0x50), plVar15 != (long *)0x0)) {
    fVar40 = 1.0;
    do {
      uVar16 = *(uint *)(plVar15 + 3);
      if (uVar16 != 0) {
        uVar25 = (ulong)uVar16 * 0xc - 0xc;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar25;
        pfVar23 = (float *)plVar15[2];
        if ((SUB164(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
          if (pfVar23[2] == 0.0) {
            lVar27 = *(long *)(plVar15[1] + 0x60);
            pfVar21 = (float *)(plVar15[1] + 0x80);
            if (lVar27 != 0) {
              pfVar21 = (float *)(lVar27 + 0x10);
            }
            fVar40 = (*pfVar23 + *pfVar21 * pfVar23[1]) * fVar40;
          }
          pfVar21 = pfVar23 + 3;
        }
        else {
          pfVar21 = pfVar23;
        }
        if (0xb < uVar25) {
          do {
            if (pfVar21[2] == 0.0) {
              lVar27 = *(long *)(plVar15[1] + 0x60);
              pfVar6 = (float *)(plVar15[1] + 0x80);
              if (lVar27 != 0) {
                pfVar6 = (float *)(lVar27 + 0x10);
              }
              fVar40 = (*pfVar21 + *pfVar6 * pfVar21[1]) * fVar40;
            }
            if (pfVar21[5] == 0.0) {
              lVar27 = *(long *)(plVar15[1] + 0x60);
              pfVar6 = (float *)(plVar15[1] + 0x80);
              if (lVar27 != 0) {
                pfVar6 = (float *)(lVar27 + 0x10);
              }
              fVar40 = (pfVar21[3] + *pfVar6 * pfVar21[4]) * fVar40;
            }
            pfVar21 = pfVar21 + 6;
          } while (pfVar23 + (ulong)uVar16 * 3 != pfVar21);
        }
      }
      plVar15 = (long *)*plVar15;
    } while (plVar15 != (long *)0x0);
  }
  puVar32 = (undefined8 *)param_1[5];
  if (puVar32 != (undefined8 *)0x0) {
    puVar34 = (undefined8 *)0x0;
    puVar1 = PTR_DAT_047e6e40 + 0x10;
    puVar2 = PTR_DAT_047e6e48 + 0x10;
    do {
      uVar25 = puVar32[0x36];
      iVar8 = *(int *)((long)puVar32 + 0x1d4);
      lVar27 = *(long *)(lVar31 + 0x148);
      if (iVar8 == 0) {
        fVar38 = *(float *)(lVar31 + 0x8c);
        if (fVar38 == *(float *)(lVar31 + 0x1a0)) {
          fVar39 = *(float *)(lVar31 + 0x19c);
        }
        else {
          fVar39 = 0.0;
          *(float *)(lVar31 + 0x1a0) = fVar38;
          if (-37.0 <= fVar38 * 0.05) {
            uVar16 = (uint)(fVar38 * 1393317.6 + 1.0653532e+09);
            fVar38 = (float)(uVar16 & 0x7fffff | 0x3f800000);
            fVar39 = (fVar38 * (fVar38 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar16 & 0xff800000);
          }
          *(float *)(lVar31 + 0x19c) = fVar39;
        }
        if ((*(byte *)(lVar31 + 0x110) >> 3 & 1) == 0) {
          fVar38 = 1.0;
        }
        else {
          uVar16 = *(uint *)(lVar31 + 0x150);
          fVar38 = 0.0;
          if (uVar16 != 0) {
            uVar24 = (ulong)uVar16 * 0x78 - 0x78;
            uVar13 = ((uint)(uVar24 / 0x78) & 0x3ffffff) + 1;
            lVar28 = lVar27;
            if ((uVar13 & 3) == 0) {
              fVar38 = 0.0;
            }
            else {
              fVar38 = 0.0;
              lVar30 = -((ulong)uVar13 & 3);
              do {
                if ((uVar25 == *(ulong *)(lVar28 + 0x60)) && (fVar38 < *(float *)(lVar28 + 0x30))) {
                  fVar38 = *(float *)(lVar28 + 0x30);
                }
                lVar28 = lVar28 + 0x78;
                bVar11 = lVar30 != -1;
                lVar30 = lVar30 + 1;
              } while (bVar11);
            }
            if (0x167 < uVar24) {
              do {
                if ((uVar25 == *(ulong *)(lVar28 + 0x60)) && (fVar38 < *(float *)(lVar28 + 0x30))) {
                  fVar38 = *(float *)(lVar28 + 0x30);
                }
                if ((uVar25 == *(ulong *)(lVar28 + 0xd8)) && (fVar38 < *(float *)(lVar28 + 0xa8))) {
                  fVar38 = *(float *)(lVar28 + 0xa8);
                }
                if ((uVar25 == *(ulong *)(lVar28 + 0x150)) && (fVar38 < *(float *)(lVar28 + 0x120)))
                {
                  fVar38 = *(float *)(lVar28 + 0x120);
                }
                if ((uVar25 == *(ulong *)(lVar28 + 0x1c8)) && (fVar38 < *(float *)(lVar28 + 0x198)))
                {
                  fVar38 = *(float *)(lVar28 + 0x198);
                }
                lVar28 = lVar28 + 0x1e0;
              } while (lVar27 + (ulong)uVar16 * 0x78 != lVar28);
            }
          }
          plVar15 = *(long **)(*(long *)(lVar31 + 0x10) + 0x30);
          if ((plVar15 == (long *)0x0) &&
             (plVar15 = *(long **)PTR_DAT_047e6cb8, plVar15 == (long *)0x0)) {
            plVar15 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
            *plVar15 = (long)puVar1;
            plVar15[1] = 0;
            lVar27 = *(long *)(puVar10 + 8);
            plVar15[2] = 0;
            plVar15[3] = lVar27;
            plVar7 = (long *)(puVar10 + 0x10);
            if (*(long *)(puVar10 + 0x10) != 0) {
              plVar7 = (long *)(lVar27 + 0x10);
            }
            *plVar7 = (long)plVar15;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(long **)(puVar10 + 8) = plVar15;
            *plVar15 = (long)puVar2;
            plVar15[8] = 0;
            plVar15[9] = 0;
            plVar15[0xc] = 0;
            plVar15[0xd] = 0;
            plVar15[0x12] = 0;
            plVar15[0x13] = 0;
            plVar15[0x16] = 0;
            plVar15[0x17] = 0;
            plVar15[0x1a] = 0;
            plVar15[0x1b] = 0;
            *(long **)PTR_DAT_047e6cb8 = plVar15;
            *(undefined2 *)(plVar15 + 0x1c) = 0x101;
          }
          if ((char)plVar15[0x1c] == '\0') {
            plVar15 = *(long **)PTR_DAT_047e6cb8;
            do {
              if (plVar15 == (long *)0x0) {
                plVar15 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
                *plVar15 = (long)(PTR_DAT_047e6e40 + 0x10);
                plVar15[1] = 0;
                lVar27 = *(long *)(puVar10 + 8);
                plVar15[2] = 0;
                plVar15[3] = lVar27;
                plVar7 = (long *)(puVar10 + 0x10);
                if (*(long *)(puVar10 + 0x10) != 0) {
                  plVar7 = (long *)(lVar27 + 0x10);
                }
                *plVar7 = (long)plVar15;
                puVar3 = PTR_DAT_047e6e48 + 0x10;
                *(long **)(puVar10 + 8) = plVar15;
                *(int *)puVar10 = *(int *)puVar10 + 1;
                *plVar15 = (long)puVar3;
                plVar15[8] = 0;
                plVar15[9] = 0;
                plVar15[0xc] = 0;
                plVar15[0xd] = 0;
                plVar15[0x12] = 0;
                plVar15[0x13] = 0;
                plVar15[0x16] = 0;
                plVar15[0x17] = 0;
                plVar15[0x1a] = 0;
                plVar15[0x1b] = 0;
                *(long **)PTR_DAT_047e6cb8 = plVar15;
                *(undefined2 *)(plVar15 + 0x1c) = 0x101;
              }
            } while ((char)plVar15[0x1c] == '\0');
          }
          uVar16 = *(uint *)(plVar15 + 9);
          fVar37 = 1.0;
          if (uVar16 != 0) {
            iVar29 = 0;
            do {
              iVar4 = iVar29 + (uVar16 >> 1);
              puVar26 = (ulong *)(plVar15[8] + (long)iVar4 * 0x18);
              uVar24 = *puVar26;
              if (uVar24 == uVar25 && (int)puVar26[1] == 0) {
                fVar37 = *(float *)(plVar15[8] + (long)iVar4 * 0x18 + 0x10);
                goto LAB_034fe59c;
              }
              if (uVar24 < uVar25) {
                iVar29 = iVar4 + 1;
              }
              uVar16 = uVar16 - (uVar24 < uVar25) >> 1;
            } while (uVar16 != 0);
            fVar37 = 1.0;
          }
LAB_034fe59c:
          fVar39 = fVar37 * fVar39;
        }
        *(undefined4 *)(puVar32 + 0x37) = *(undefined4 *)(lVar31 + 0x94);
        *(undefined4 *)((long)puVar32 + 0x1bc) = *(undefined4 *)(lVar31 + 0x90);
        goto LAB_034fe5b0;
      }
      fVar38 = 0.0;
      fVar37 = 0.0;
      if (*(uint *)(param_1 + 7) == 0) {
LAB_034fe0ac:
        fVar39 = 0.0;
        if ((*(byte *)(puVar32 + 0x3b) & 1) == 0) goto LAB_034fe0b8;
        if (param_1[1] != 0) {
          *(undefined4 *)(param_1[1] + 0x114) = 0x42ca0000;
        }
        if ((*(byte *)(param_1 + 10) >> 2 & 1) != 0) {
          *PTR_DAT_047e7450 = 1;
        }
        lVar27 = puVar32[0x33];
        puVar19 = (undefined8 *)0x0;
        puVar33 = (undefined8 *)(lVar27 + 0x20);
        do {
          puVar18 = puVar19;
          puVar19 = (undefined8 *)*puVar33;
          puVar33 = puVar19 + 3;
        } while (puVar19 != (undefined8 *)0x0 && puVar32 != puVar19);
        if (puVar19 != (undefined8 *)0x0) {
          puVar33 = (undefined8 *)(lVar27 + 0x20);
          if (*(undefined8 **)(lVar27 + 0x20) != puVar19) {
            puVar33 = puVar18 + 3;
          }
          *puVar33 = puVar19[3];
          if (*(undefined8 **)(lVar27 + 0x18) == puVar19) {
            *(undefined8 **)(lVar27 + 0x18) = puVar18;
          }
        }
        puVar33 = (undefined8 *)puVar32[4];
        plVar15 = param_1 + 5;
        if ((undefined8 *)param_1[5] != puVar32) {
          plVar15 = puVar34 + 4;
        }
        *plVar15 = (long)puVar33;
        (**(code **)*puVar32)(puVar32);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar32);
      }
      else {
        fVar39 = 0.0;
        fVar37 = 0.0;
        plVar15 = (long *)param_1[6];
        plVar7 = plVar15 + (ulong)*(uint *)(param_1 + 7) * 4;
        lVar28 = *(long *)(puVar32[0x33] + 0x60);
        fVar38 = 0.0;
        bVar11 = false;
        do {
          while( true ) {
            if (lVar28 == 0) {
              iVar29 = 0;
            }
            else {
              iVar29 = *(int *)(lVar28 + 0x18);
            }
            if ((int)plVar15[1] == iVar29) break;
LAB_034fe070:
            plVar15 = plVar15 + 4;
            if (plVar7 == plVar15) {
              if (!bVar11) goto LAB_034fe0ac;
              goto LAB_034fe0b8;
            }
          }
          lVar30 = *(long *)(puVar32[0x33] + 0x70);
          if (lVar30 == 0) {
            lVar30 = -1;
          }
          else {
            lVar30 = *(long *)(lVar30 + 0x78);
          }
          if (*plVar15 != lVar30) goto LAB_034fe070;
          fVar39 = *(float *)((long)plVar15 + 0xc) + fVar39;
          bVar12 = plVar7 + -4 != plVar15;
          pfVar23 = (float *)((long)plVar15 + 0x14);
          pfVar21 = (float *)(plVar15 + 3);
          plVar15 = plVar15 + 4;
          fVar38 = *pfVar21 + fVar38;
          fVar37 = *pfVar23 + fVar37;
          bVar11 = true;
        } while (bVar12);
LAB_034fe0b8:
        *(float *)(puVar32 + 0x37) = fVar37;
        *(float *)((long)puVar32 + 0x1bc) = fVar38;
        if ((*(byte *)(lVar31 + 0x110) >> 3 & 1) == 0) {
LAB_034fe138:
          fVar38 = 1.0;
        }
        else if (iVar8 == 1) {
          lVar28 = *(long *)(lVar31 + 0x148) + (ulong)*(uint *)(lVar31 + 0x150) * 0x78;
          if (lVar27 == lVar28) {
LAB_034fe358:
            fVar38 = 0.0;
          }
          else {
            fVar38 = 0.0;
            do {
              if ((uVar25 == *(ulong *)(lVar27 + 0x60)) && (fVar38 < *(float *)(lVar27 + 0x34))) {
                fVar38 = *(float *)(lVar27 + 0x34);
              }
              lVar27 = lVar27 + 0x78;
            } while (lVar28 != lVar27);
          }
        }
        else {
          if (iVar8 != 2) goto LAB_034fe138;
          lVar28 = *(long *)(lVar31 + 0x148) + (ulong)*(uint *)(lVar31 + 0x150) * 0x78;
          if (lVar27 == lVar28) goto LAB_034fe358;
          fVar38 = 0.0;
          do {
            if ((uVar25 == *(ulong *)(lVar27 + 0x60)) && (fVar38 < *(float *)(lVar27 + 0x38))) {
              fVar38 = *(float *)(lVar27 + 0x38);
            }
            lVar27 = lVar27 + 0x78;
          } while (lVar28 != lVar27);
        }
LAB_034fe5b0:
        fVar37 = fVar40 * fVar36 * fVar38 * fVar39;
        if (fVar37 <= 0.0) {
          fVar37 = *(float *)PTR_DAT_047e7100;
          *(undefined4 *)((long)puVar32 + 0x1cc) = 0xc5800000;
          *(undefined4 *)(puVar32 + 1) = *(undefined4 *)((long)puVar32 + 0xc);
          *(undefined4 *)((long)puVar32 + 0xc) = 0;
          *(byte *)(puVar32 + 0x3b) =
               *(byte *)(puVar32 + 0x3b) & 0xfc | (*(byte *)(puVar32 + 0x3b) & 1) << 1 |
               -4096.0 <= fVar37;
          uVar14 = *(undefined4 *)((long)puVar32 + 0x14);
          *(float *)(puVar32 + 0x39) = fVar39;
LAB_034fe750:
          *(undefined4 *)(puVar32 + 2) = uVar14;
          *(float *)((long)puVar32 + 0x14) = fVar38;
        }
        else {
          fVar42 = (float)((uint)fVar37 & 0x7fffff | 0x3f800000);
          fVar41 = fVar42 + 1.0;
          fVar37 = *(float *)(puVar32[0x33] + 0x14) +
                   ((float)((uint)fVar37 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                   (fVar42 * fVar42 * fVar42 * 1.1581186 + -1.1581186) / (fVar41 * fVar41 * fVar41))
                   * 20.0;
          fVar42 = *(float *)PTR_DAT_047e7100;
          *(float *)((long)puVar32 + 0x1cc) = fVar37;
          *(float *)(puVar32 + 0x39) = fVar39;
          *(byte *)(puVar32 + 0x3b) =
               *(byte *)(puVar32 + 0x3b) & 0xfc | (*(byte *)(puVar32 + 0x3b) & 1) << 1 |
               fVar37 <= fVar42 & param_2;
          *(undefined4 *)(puVar32 + 1) = *(undefined4 *)((long)puVar32 + 0xc);
          *(undefined4 *)((long)puVar32 + 0xc) = 0;
          uVar14 = *(undefined4 *)((long)puVar32 + 0x14);
          *(float *)((long)puVar32 + 0x14) = fVar38;
          *(undefined4 *)(puVar32 + 2) = uVar14;
          if (*(float *)((long)param_1 + 0x14) < fVar37) {
            *(float *)((long)param_1 + 0x14) = fVar37;
          }
          uVar25 = puVar32[0x34];
          if ((uVar25 != 0) && (*(char *)(lVar31 + 0x198) < '\0')) {
            if ((-fVar35 < *(float *)(lVar31 + 0x98)) &&
               (*(float *)(uVar25 + 0x1a8) < fVar37 + fVar35)) {
              *(float *)(uVar25 + 0x1a8) = fVar37 + fVar35;
              uVar25 = puVar32[0x34];
            }
            uVar16 = *(uint *)(param_1 + 9);
            lVar27 = param_1[8];
            if (uVar16 == 0) {
              if (lVar27 != 0) {
                uVar24 = 0;
                goto LAB_034fe7a4;
              }
              iVar29 = *(int *)((long)param_1 + 0x4c);
              if (iVar29 != 0) {
                lVar27 = 0;
LAB_034fe894:
                if (iVar29 == 0) goto LAB_034fe8f8;
                puVar26 = (ulong *)(lVar27 + (ulong)*(uint *)(param_1 + 9) * 0x10);
                *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) + 1;
                if (puVar26 == (ulong *)0x0) goto LAB_034fe8f8;
LAB_034fe8b0:
                *puVar26 = uVar25;
                bVar11 = true;
LAB_034fe8b8:
                fVar38 = *(float *)(uVar25 + 0x1b8) + *(float *)(uVar25 + 0x14);
                fVar39 = *(float *)((long)puVar32 + 0x1cc) - fVar38;
                if (0.0 < fVar39) {
                  fVar38 = fVar38 + fVar39 * *(float *)(uVar25 + 0x1bc);
                }
                if ((bVar11) || (*(float *)(puVar26 + 1) < fVar38)) {
                  *(float *)(puVar26 + 1) = fVar38;
                }
                goto LAB_034fe758;
              }
              iVar29 = 1;
              lVar27 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,0,0x10);
              if (lVar27 != 0) {
                param_1[8] = lVar27;
                *(undefined4 *)((long)param_1 + 0x4c) = 1;
                goto LAB_034fe894;
              }
            }
            else {
              uVar13 = 0;
              uVar17 = uVar16;
              do {
                uVar5 = uVar13 + (uVar17 >> 1);
                uVar24 = *(ulong *)(lVar27 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 |
                                             (ulong)uVar5 << 4));
                if (uVar24 == uVar25) {
                  puVar26 = (ulong *)(lVar27 + (long)(int)uVar5 * 0x10);
                  bVar11 = false;
                  goto LAB_034fe8b8;
                }
                if (uVar24 < uVar25) {
                  uVar13 = uVar5 + 1;
                }
                uVar17 = uVar17 - (uVar24 < uVar25) >> 1;
              } while (uVar17 != 0);
              uVar24 = (ulong)uVar13;
LAB_034fe7a4:
              uVar13 = *(uint *)((long)param_1 + 0x4c);
              if (uVar13 <= uVar16) {
                iVar29 = uVar13 + (uVar13 >> 1);
                if (uVar13 == 0) {
                  iVar29 = 1;
                }
                uVar13 = iVar29 + uVar13;
                lVar27 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,lVar27,(ulong)uVar13 << 4);
                if (lVar27 == 0) goto LAB_034fe8f8;
                param_1[8] = lVar27;
                *(uint *)((long)param_1 + 0x4c) = uVar13;
              }
              if (uVar16 < uVar13) {
                uVar16 = *(uint *)(param_1 + 9);
                *(uint *)(param_1 + 9) = uVar16 + 1;
                if ((uint)uVar24 < uVar16) {
                  puVar22 = (ulong *)(lVar27 + (ulong)uVar16 * 0x10);
                  do {
                    puVar20 = puVar22 + -2;
                    *puVar22 = *puVar20;
                    puVar22[1] = puVar22[-1];
                    puVar26 = (ulong *)(param_1[8] + uVar24 * 0x10);
                    puVar22 = puVar20;
                  } while (puVar26 < puVar20);
                }
                else {
                  puVar26 = (ulong *)(lVar27 + uVar24 * 0x10);
                }
                if (puVar26 != (ulong *)0x0) goto LAB_034fe8b0;
              }
            }
LAB_034fe8f8:
            fVar39 = *(float *)PTR_DAT_047e7100;
            puVar32[0x39] = 0xc580000000000000;
            *(undefined4 *)(puVar32 + 1) = *(undefined4 *)((long)puVar32 + 0xc);
            *(undefined4 *)((long)puVar32 + 0xc) = 0;
            *(byte *)(puVar32 + 0x3b) =
                 *(byte *)(puVar32 + 0x3b) & 0xfc | (*(byte *)(puVar32 + 0x3b) & 1) << 1 |
                 -4096.0 <= fVar39;
            uVar14 = *(undefined4 *)((long)puVar32 + 0x14);
            goto LAB_034fe750;
          }
        }
LAB_034fe758:
        if (((iVar8 != 3) && ((~*(byte *)(puVar32 + 0x3b) & 3) != 0)) &&
           (*(int *)(lVar31 + 0x150) != 0)) {
          FUN_03446ee0(lVar31,(long *)(lVar31 + 0x148),puVar32);
        }
        puVar33 = (undefined8 *)puVar32[4];
        puVar34 = puVar32;
      }
      puVar32 = puVar33;
    } while (puVar32 != (undefined8 *)0x0);
  }
  return;
}


