/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f094c; name: FUN_034f094c
 */


void FUN_034f094c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  byte bVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  float *pfVar17;
  ulong *puVar18;
  long *plVar19;
  float *pfVar20;
  int *piVar21;
  float *pfVar22;
  ulong uVar23;
  ulong uVar24;
  int *piVar25;
  long *plVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  char local_9c [4];
  float local_98;
  float local_94;
  
  uVar16 = (ulong)DAT_048b0840;
  if (DAT_048b0840 != 0) {
    plVar19 = DAT_048b0838;
    plVar6 = DAT_048b0838;
    do {
      if (*(int *)(*plVar6 + 0x130) == 1) {
        FUN_0350c830();
        uVar16 = (ulong)DAT_048b0840;
        plVar19 = DAT_048b0838;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar19 + uVar16);
  }
  puVar1 = PTR_DAT_047e7430;
  lVar28 = *(long *)PTR_DAT_047e7430;
  do {
    if (lVar28 == 0) {
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      lVar11 = lVar28;
      do {
        uVar16 = FUN_034fe974(*(undefined8 *)(lVar11 + 0x1a8));
        if ((uVar16 & 1) == 0) {
          lVar30 = 0;
          if (*(long *)(lVar11 + 0x48) != 0) {
            *(undefined8 *)(*(long *)(lVar11 + 0x48) + 0x1b0) = *(undefined8 *)(lVar11 + 0x1b0);
            lVar30 = *(long *)(lVar11 + 0x48);
          }
          plVar6 = (long *)puVar1;
          if (*(long *)puVar1 != lVar11) {
            plVar6 = (long *)(lVar29 + 0x48);
          }
          *plVar6 = lVar30;
          *(undefined8 *)(lVar11 + 0x1b0) = 0;
          *(undefined8 *)(lVar11 + 0x48) = 0;
        }
        else {
          lVar30 = *(long *)(lVar11 + 0x48);
          lVar29 = lVar11;
        }
        lVar11 = lVar30;
      } while (lVar30 != 0);
      lVar29 = *(long *)puVar1;
    }
    bVar4 = lVar28 != lVar29;
    lVar28 = lVar29;
  } while (bVar4);
  FUN_034f1510();
  if (DAT_048b0810 != 0) {
    uVar16 = 0;
    do {
      lVar28 = *(long *)(DAT_048b0808 + uVar16 * 8);
      if ((*(byte *)(lVar28 + 0x194) & 3) != 1) {
        uVar13 = 0xf;
        if ((*(byte *)(lVar28 + 0x194) & 1) != 0) {
          uVar13 = 0;
        }
        FUN_035054a0(lVar28,uVar13);
      }
      plVar6 = *(long **)(lVar28 + 8);
      if (plVar6 == (long *)0x0) {
        *(undefined4 *)(lVar28 + 0x10) = 0x3f800000;
LAB_034f0bcc:
        fVar33 = (float)(*(uint *)(lVar28 + 0x10) & 0x7fffff | 0x3f800000);
        fVar32 = fVar33 + 1.0;
        *(float *)(lVar28 + 0x14) =
             ((float)(*(uint *)(lVar28 + 0x10) >> 0x17 & 0xff) * 0.30103 + -38.230812 +
             (fVar33 * fVar33 * fVar33 * 1.1581186 + -1.1581186) / (fVar32 * fVar32 * fVar32)) *
             20.0;
      }
      else {
        if ((*(ushort *)(plVar6 + 0x33) & 1) == 0) {
          (**(code **)(*plVar6 + 0x58))(plVar6,0);
        }
        else if ((*(ushort *)(plVar6 + 0x33) >> 4 & 1) != 0) {
          (**(code **)(*plVar6 + 0x60))();
        }
        lVar29 = *(long *)(lVar28 + 8);
        fVar33 = 0.0;
        if (-37.0 <= *(float *)(lVar29 + 0x60) * 0.05) {
          uVar14 = (uint)(*(float *)(lVar29 + 0x60) * 1393317.6 + 1.0653532e+09);
          fVar33 = (float)(uVar14 & 0x7fffff | 0x3f800000);
          fVar33 = (fVar33 * (fVar33 * 0.32518977 + 0.020805772) + 0.65304345) *
                   (float)(uVar14 & 0xff800000);
        }
        *(float *)(lVar28 + 0x10) = *(float *)(lVar29 + 200) * fVar33;
        if (((*(byte *)(lVar29 + 0x110) >> 3 & 1) != 0) &&
           (iVar5 = FUN_0346ed14(lVar29), iVar5 != 0)) {
          FUN_03447470(lVar29,lVar29 + 0x148);
        }
        if ((*(long *)(lVar28 + 8) == 0) || (*(long *)(lVar28 + 0x28) == 0)) goto LAB_034f0bcc;
        FUN_034fde24(lVar28,0);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < DAT_048b0810);
  }
  FUN_034f1510();
  uVar16 = (ulong)DAT_048b0840;
  if (DAT_048b0840 != 0) {
    plVar19 = DAT_048b0838;
    plVar6 = DAT_048b0838;
    do {
      if (*(int *)(*plVar6 + 0x130) == 1) {
        FUN_034fde24(*plVar6,1);
        uVar16 = (ulong)DAT_048b0840;
        plVar19 = DAT_048b0838;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar19 + uVar16);
  }
  uVar14 = DAT_048b0810 - 1;
  if (-1 < (int)uVar14) {
    do {
      lVar28 = *(long *)(DAT_048b0808 + (ulong)uVar14 * 8);
      if ((*(byte *)(lVar28 + 0x1a4) >> 2 & 1) != 0) {
        lVar29 = *(long *)(lVar28 + 0x60);
        if (*(long *)(lVar28 + 0x70) == 0) {
          uVar16 = 0xffffffffffffffff;
        }
        else {
          uVar16 = *(ulong *)(*(long *)(lVar28 + 0x70) + 0x78);
        }
        fVar33 = *(float *)(lVar28 + 0x14);
        uVar7 = FUN_034f18ac(lVar29,&local_a8,&local_94);
        if ((uVar7 & 1) == 0) {
          fVar32 = *(float *)(lVar28 + 0x1bc);
        }
        else {
          *(float *)(lVar28 + 0x1b8) = (float)local_a8;
          fVar32 = 1.0 - 1.0 / local_94;
          *(float *)(lVar28 + 0x1bc) = fVar32;
        }
        fVar35 = *(float *)(lVar28 + 0x1a8) - (fVar33 + (float)local_a8);
        fVar32 = (float)local_a8 + fVar32 * fVar35;
        if (fVar35 <= 0.0) {
          fVar32 = (float)local_a8;
        }
        uVar7 = FUN_034f1b0c(lVar29,&local_98,local_9c);
        if ((uVar7 & 1) == 0) {
          fVar35 = *(float *)(lVar28 + 0x1b4);
        }
        else if (local_98 <= 0.0) {
          fVar35 = 0.0;
          *(undefined4 *)(lVar28 + 0x1b4) = 0;
        }
        else {
          fVar35 = expf((float)(int)-(uint)*(ushort *)PTR_DAT_047e6d08 / (local_98 * 48000.0));
          *(float *)(lVar28 + 0x1b4) = fVar35;
        }
        uVar7 = local_d8;
        if (local_9c[0] == '\0') {
          fVar34 = 0.0;
          if (-37.0 <= fVar32 * 0.05) {
            uVar10 = (uint)(fVar32 * 1393317.6 + 1.0653532e+09);
            fVar34 = (float)(uVar10 & 0x7fffff | 0x3f800000);
            fVar34 = (fVar34 * (fVar34 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar10 & 0xff800000);
          }
          fVar36 = *(float *)(lVar28 + 0x1ac);
          if (fVar36 <= fVar34) {
            bVar12 = *(byte *)(lVar28 + 0x1a4);
            bVar4 = fVar36 < fVar34;
            *(float *)(lVar28 + 0x1ac) = fVar34;
            goto LAB_034f0f10;
          }
          fVar34 = fVar34 + fVar35 * (fVar36 - fVar34);
          fVar35 = (float)((uint)fVar34 & 0x7fffff | 0x3f800000);
          *(float *)(lVar28 + 0x1ac) = fVar34;
          fVar36 = fVar35 + 1.0;
          fVar34 = ((float)((uint)fVar34 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                   (fVar35 * fVar35 * fVar35 * 1.1581186 + -1.1581186) / (fVar36 * fVar36 * fVar36))
                   * 20.0;
          if (0.5 <= fVar34 - fVar32) {
            *(byte *)(lVar28 + 0x1a4) = *(byte *)(lVar28 + 0x1a4) | 2;
          }
        }
        else {
          fVar34 = *(float *)(lVar28 + 0x1ac);
          if (fVar34 <= fVar32) {
            bVar12 = *(byte *)(lVar28 + 0x1a4);
            bVar4 = fVar34 < fVar32;
            *(float *)(lVar28 + 0x1ac) = fVar32;
LAB_034f0f10:
            bVar12 = bVar12 & 0xfd | bVar4 << 1;
            fVar34 = fVar32;
          }
          else {
            fVar35 = (fVar34 - fVar32) * fVar35;
            fVar34 = fVar35 + fVar32;
            *(float *)(lVar28 + 0x1ac) = fVar34;
            if (fVar35 < 0.5) goto LAB_034f0f1c;
            bVar12 = *(byte *)(lVar28 + 0x1a4) | 2;
          }
          *(byte *)(lVar28 + 0x1a4) = bVar12;
        }
LAB_034f0f1c:
        *(float *)(lVar28 + 0x1b0) = fVar34 + fVar33;
        uVar10 = DAT_048b0880;
        uVar24 = local_d8 >> 0x20;
        local_d8 = uVar24 << 0x20;
        pfVar17 = *(float **)(lVar29 + 0xb0);
        if (pfVar17 != (float *)0x0) {
          bVar12 = *(byte *)pfVar17;
          uVar31 = (uint)bVar12;
          if (bVar12 < 2) {
            uVar31 = 1;
          }
          uVar23 = (ulong)uVar31;
          pfVar20 = (float *)((long)pfVar17 + ((ulong)(bVar12 + 4) & 0x1fc));
          pfVar22 = pfVar17;
          do {
            pfVar22 = (float *)((long)pfVar22 + 1);
            if (*(char *)pfVar22 == '\x1e') goto LAB_034f0f6c;
            pfVar20 = pfVar20 + 1;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        pfVar20 = (float *)0x0;
LAB_034f0f6c:
        pfVar22 = (float *)&local_d8;
        if (pfVar20 != (float *)0x0) {
          pfVar22 = pfVar20;
        }
        fVar33 = *pfVar22;
        if (fVar33 == 0.0) goto LAB_034f11e0;
        local_d8 = uVar24 << 0x20;
        if (pfVar17 != (float *)0x0) {
          bVar12 = *(byte *)pfVar17;
          uVar31 = (uint)bVar12;
          if (bVar12 < 2) {
            uVar31 = 1;
          }
          uVar24 = (ulong)uVar31;
          pfVar20 = (float *)((long)pfVar17 + ((ulong)(bVar12 + 4) & 0x1fc));
          pfVar22 = pfVar17;
          do {
            pfVar22 = (float *)((long)pfVar22 + 1);
            if (*(char *)pfVar22 == '\x1f') goto LAB_034f0fc0;
            pfVar20 = pfVar20 + 1;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        pfVar20 = (float *)0x0;
LAB_034f0fc0:
        pfVar22 = (float *)&local_d8;
        if (pfVar20 != (float *)0x0) {
          pfVar22 = pfVar20;
        }
        local_d8 = CONCAT44((int)(uVar7 >> 0x20),0x43480000);
        if (pfVar17 != (float *)0x0) {
          bVar12 = *(byte *)pfVar17;
          uVar31 = (uint)bVar12;
          if (bVar12 < 2) {
            uVar31 = 1;
          }
          uVar7 = (ulong)uVar31;
          pfVar3 = (float *)((long)pfVar17 + ((ulong)(bVar12 + 4) & 0x1fc));
          pfVar20 = pfVar17;
          do {
            pfVar17 = pfVar3;
            pfVar20 = (float *)((long)pfVar20 + 1);
            if (*(char *)pfVar20 == ' ') goto LAB_034f1014;
            uVar7 = uVar7 - 1;
            pfVar3 = pfVar17 + 1;
          } while (uVar7 != 0);
          pfVar17 = (float *)0x0;
        }
LAB_034f1014:
        pfVar20 = (float *)&local_d8;
        if (pfVar17 != (float *)0x0) {
          pfVar20 = pfVar17;
        }
        fVar35 = (float)NEON_fminnm(fVar34,*pfVar20);
        fVar32 = *pfVar22;
        if (*pfVar22 <= fVar34) {
          fVar32 = fVar35;
        }
        if (DAT_048b0880 == 0) {
          if (DAT_048b0878 != (int *)0x0) {
            uVar31 = 0;
            goto LAB_034f1094;
          }
          if (DAT_048b0884 != 0) {
            DAT_048b0880 = 1;
            goto LAB_034f11e0;
          }
          piVar8 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,0,0x18);
          if (piVar8 == (int *)0x0) goto LAB_034f11e0;
          uVar7 = (ulong)DAT_048b0880;
          DAT_048b0880 = DAT_048b0880 + 1;
          puVar18 = (ulong *)(piVar8 + uVar7 * 6);
          DAT_048b0884 = 1;
          DAT_048b0878 = piVar8;
          *(int *)(puVar18 + 2) = -0x800001;
LAB_034f11cc:
          *puVar18 = (ulong)(uint)fVar33;
          puVar18[1] = uVar16;
LAB_034f11d0:
          if (*(float *)(puVar18 + 2) < fVar32) {
            *(float *)(puVar18 + 2) = fVar32;
          }
        }
        else {
          uVar31 = 0;
          uVar15 = DAT_048b0880;
          do {
            iVar5 = uVar31 + (uVar15 >> 1);
            fVar35 = (float)DAT_048b0878[(long)iVar5 * 6];
            uVar7 = *(ulong *)(DAT_048b0878 + (long)iVar5 * 6 + 2);
            if (fVar35 == fVar33 && uVar7 == uVar16) {
              puVar18 = (ulong *)(DAT_048b0878 + (long)iVar5 * 6);
              goto LAB_034f11d0;
            }
            if (((uint)fVar35 < (uint)fVar33) || ((fVar35 == fVar33 && (uVar7 < uVar16)))) {
              uVar31 = iVar5 + 1;
              uVar15 = uVar15 - 1;
            }
            uVar15 = uVar15 >> 1;
          } while (uVar15 != 0);
LAB_034f1094:
          if (DAT_048b0880 < DAT_048b0884) {
LAB_034f10dc:
            if (uVar10 < DAT_048b0884) {
              uVar7 = (ulong)DAT_048b0880;
              DAT_048b0880 = DAT_048b0880 + 1;
              piVar8[4] = -0x800001;
              piVar21 = DAT_048b0878;
              uVar7 = (ulong)uVar31;
              piVar25 = DAT_048b0878 + uVar7 * 6;
              for (piVar8 = DAT_048b0878 + uVar7 * 6; piVar25 < piVar8; piVar8 = piVar8 + -6) {
                *(undefined8 *)piVar8 = *(undefined8 *)(piVar8 + -6);
                *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + -4);
                piVar8[4] = piVar8[-2];
              }
              if (piVar21 != (int *)0x0) {
                piVar21[uVar7 * 6 + 4] = -0x800001;
                piVar21 = DAT_048b0878;
              }
              puVar18 = (ulong *)(piVar21 + uVar7 * 6);
              if (puVar18 != (ulong *)0x0) goto LAB_034f11cc;
            }
          }
          else {
            iVar5 = DAT_048b0884 + (DAT_048b0884 >> 1);
            if (DAT_048b0884 == 0) {
              iVar5 = 1;
            }
            uVar15 = iVar5 + DAT_048b0884;
            piVar8 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))
                                      (5,DAT_048b0878,(ulong)uVar15 * 0x18);
            if (piVar8 != (int *)0x0) {
              DAT_048b0878 = piVar8;
              DAT_048b0884 = uVar15;
              goto LAB_034f10dc;
            }
          }
        }
LAB_034f11e0:
        *(undefined4 *)(lVar28 + 0x1a8) = 0xc5800000;
      }
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  puVar2 = PTR_DAT_047e6fd8;
  puVar1 = PTR_DAT_047e6cc0;
  if (DAT_048b0880 != 0) {
    fVar33 = -3.4028235e+38;
    iVar5 = *DAT_048b0878;
    piVar8 = DAT_048b0878;
    iVar27 = iVar5;
    do {
      if (iVar27 == iVar5) {
        iVar27 = iVar5;
      }
      else {
        local_b0 = 0;
        local_a8 = 0x400000000;
        local_a0 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0xff;
        local_b8 = 0xff;
        local_d8 = 0;
        FUN_034b6d0c(fVar33,*(undefined8 *)puVar2,iVar27,&local_d8,&local_a8,1,0);
        fVar33 = -3.4028235e+38;
        iVar27 = *piVar8;
      }
      lVar28 = *(long *)(piVar8 + 2);
      fVar32 = (float)piVar8[4];
      local_a8 = 0x400000000;
      local_a0 = 0;
      if (lVar28 != -1) {
        uVar14 = *(uint *)(*(long *)puVar1 + 0x38);
        if (uVar14 != 0) {
          uVar10 = 0;
          if (uVar14 != 0) {
            uVar10 = (uint)lVar28 / uVar14;
          }
          for (plVar6 = *(long **)(*(long *)(*(long *)puVar1 + 0x30) +
                                  (ulong)((uint)lVar28 - uVar10 * uVar14) * 8);
              plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (plVar6[1] == lVar28) {
              local_d8 = plVar6[2];
              goto LAB_034f12e4;
            }
          }
        }
      }
      local_d8 = 0;
LAB_034f12e4:
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0xff;
      local_b8 = 0xff;
      local_b0 = 0;
      FUN_034b6d0c(fVar32,*(undefined8 *)puVar2,iVar27,&local_d8,&local_a8,1,0);
      if (fVar33 <= fVar32) {
        fVar33 = fVar32;
      }
      piVar8 = piVar8 + 6;
      if (piVar8 == DAT_048b0878 + (ulong)DAT_048b0880 * 6) goto LAB_034f1348;
      iVar5 = *piVar8;
    } while( true );
  }
LAB_034f1390:
  if (DAT_048b0840 != 0) {
    plVar19 = DAT_048b0838 + DAT_048b0840;
    fVar33 = *(float *)PTR_DAT_047e7100;
    plVar6 = DAT_048b0838;
    do {
      lVar28 = *plVar6;
      if ((*(int *)(lVar28 + 0x130) == 1) && (uVar14 = *(uint *)(lVar28 + 0x48), uVar14 != 0)) {
        plVar9 = *(long **)(lVar28 + 0x40);
        plVar26 = plVar9;
        do {
          lVar29 = *plVar26;
          fVar32 = *(float *)(lVar29 + 0x1b0);
          if (*(float *)(lVar29 + 0x1b0) <= *(float *)(plVar26 + 1)) {
            fVar32 = *(float *)(plVar26 + 1);
          }
          fVar32 = *(float *)(lVar29 + 0x14) - fVar32;
          fVar35 = 0.0;
          if (-37.0 <= fVar32 * 0.05) {
            uVar10 = (uint)(fVar32 * 1393317.6 + 1.0653532e+09);
            fVar35 = (float)(uVar10 & 0x7fffff | 0x3f800000);
            fVar35 = (fVar35 * (fVar35 * 0.32518977 + 0.020805772) + 0.65304345) *
                     (float)(uVar10 & 0xff800000);
          }
          lVar11 = *(long *)(lVar28 + 0x28);
          if (lVar11 != 0) {
            do {
              if (*(long *)(lVar11 + 0x1a0) == lVar29) {
                *(float *)(lVar11 + 0x1c8) = *(float *)(lVar11 + 0x1c8) * fVar35;
                fVar34 = *(float *)(lVar11 + 0x1cc) + fVar32;
                *(byte *)(lVar11 + 0x1d8) = *(byte *)(lVar11 + 0x1d8) & 0xfe | fVar34 <= fVar33;
                *(float *)(lVar11 + 0x1cc) = fVar34;
              }
              lVar11 = *(long *)(lVar11 + 0x20);
            } while (lVar11 != 0);
            plVar9 = *(long **)(lVar28 + 0x40);
            uVar14 = *(uint *)(lVar28 + 0x48);
          }
          plVar26 = plVar26 + 2;
        } while (plVar26 != plVar9 + (ulong)uVar14 * 2);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar19);
  }
  return;
LAB_034f1348:
  local_b0 = 0;
  local_a8 = 0x400000000;
  local_a0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0xff;
  local_b8 = 0xff;
  local_d8 = 0;
  FUN_034b6d0c(fVar33,*(undefined8 *)puVar2,iVar27,&local_d8,&local_a8,1,0);
  DAT_048b0880 = 0;
  goto LAB_034f1390;
}


