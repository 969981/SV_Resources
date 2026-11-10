/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ecd0c; name: FUN_034ecd0c
 */


void FUN_034ecd0c(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  long local_c0;
  long *local_b8;
  long *local_b0;
  uint local_a8 [2];
  long local_a0;
  long lStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  ulong uStack_78;
  long *local_68;
  
  plVar15 = param_1 + 0x2c;
  if ((short)param_1[0x32] == 0) {
    if ((*(char *)((long)param_1 + 0x14f) == '\0') && (*(short *)((long)param_1 + 0x154) == 0)) {
      lVar9 = 3;
    }
    else if ((*(char *)((long)param_1 + 0x11f) == '\0') && (*(short *)((long)param_1 + 0x124) == 0))
    {
      lVar9 = 2;
    }
    else if ((*(char *)((long)param_1 + 0xef) == '\0') && (*(short *)((long)param_1 + 0xf4) == 0)) {
      lVar9 = 1;
    }
    else {
      if ((*(char *)((long)param_1 + 0xbf) != '\0') || (*(short *)((long)param_1 + 0xc4) != 0))
      goto LAB_034ecdac;
      lVar9 = 0;
    }
    plVar15 = param_1 + lVar9 * 6 + 0x15;
  }
LAB_034ecdac:
  if ((int)plVar15[1] == 0) {
    return;
  }
  local_b8 = param_1;
  if (((int)plVar15[1] == 1) && (*(char *)(param_2 + 0x470) == '\0')) {
    plVar20 = (long *)*plVar15;
    uVar8 = *(uint *)(plVar20 + 1);
    if (*(uint *)(param_2 + 100) == uVar8) {
      uVar22 = (ulong)uVar8 & 0xff;
      uVar7 = *(ushort *)((long)plVar20 + 0x12);
      uVar10 = (ulong)uVar7;
      uVar3 = *(ushort *)(plVar20 + 2);
      uVar11 = (ulong)uVar3;
      uVar1 = (uint)uVar7;
      if ((uint)uVar3 <= (uint)uVar7) {
        uVar1 = (uint)uVar3;
      }
      uVar19 = (ulong)uVar1;
      if (uVar3 - uVar1 == 0) {
        plVar15 = plVar20;
      }
      else {
        uVar10 = uVar11;
        if ((int)uVar22 != 0) {
          uVar21 = (ulong)((uVar3 - uVar1) * 4);
          if ((int)uVar22 == 1) {
            uVar22 = 0;
          }
          else {
            uVar22 = 0;
            lVar9 = 4;
            do {
              memset((void *)(*plVar20 + (lVar9 + -4) * uVar10 + uVar19 * 4),0,uVar21);
              memset((void *)(*plVar20 + lVar9 * (ulong)*(ushort *)(plVar20 + 2) + uVar19 * 4),0,
                     uVar21);
              uVar10 = (ulong)*(ushort *)(plVar20 + 2);
              uVar22 = uVar22 + 2;
              lVar9 = lVar9 + 8;
            } while (((ulong)uVar8 & 0xfe) != uVar22);
          }
          if ((uVar8 & 1) != 0) {
            memset((void *)(*plVar20 + uVar22 * uVar10 * 4 + uVar19 * 4),0,uVar21);
            uVar10 = (ulong)*(ushort *)(plVar20 + 2);
          }
          uVar22 = (ulong)*(byte *)(plVar20 + 1);
        }
        *(short *)((long)plVar20 + 0x12) = (short)uVar10;
        uVar11 = uVar10;
        plVar15 = (long *)*plVar15;
      }
      uVar8 = (uint)uVar10;
      fVar26 = *(float *)(plVar15[3] + 0x58);
      fVar27 = *(float *)(plVar15[3] + 0x5c);
      if (fVar27 == fVar26) {
        if (((int)uVar22 != 0) && (fVar26 != 1.0)) {
          if (uVar8 < 4) {
            uVar21 = uVar10 * 4 - 1;
            uVar8 = ((uint)(uVar21 >> 2) & 0x3fffffff) + 1;
            uVar19 = 0;
            while( true ) {
              pfVar14 = (float *)(*plVar20 + uVar19 * uVar11 * 4);
              pfVar12 = pfVar14 + uVar10;
              if (pfVar14 < pfVar12) {
                if ((uVar8 & 7) != 0) {
                  pfVar13 = pfVar14;
                  lVar9 = -((ulong)uVar8 & 7);
                  do {
                    bVar5 = lVar9 != -1;
                    lVar9 = lVar9 + 1;
                    pfVar14 = pfVar13 + 1;
                    *pfVar13 = *pfVar13 * fVar26;
                    pfVar13 = pfVar14;
                  } while (bVar5);
                }
                if (0x1b < uVar21) {
                  do {
                    *pfVar14 = *pfVar14 * fVar26;
                    pfVar14[1] = pfVar14[1] * fVar26;
                    pfVar14[2] = pfVar14[2] * fVar26;
                    pfVar14[3] = pfVar14[3] * fVar26;
                    pfVar14[4] = pfVar14[4] * fVar26;
                    pfVar14[5] = pfVar14[5] * fVar26;
                    pfVar14[6] = pfVar14[6] * fVar26;
                    pfVar14[7] = pfVar14[7] * fVar26;
                    pfVar14 = pfVar14 + 8;
                  } while (pfVar14 < pfVar12);
                }
              }
              uVar19 = uVar19 + 1;
              if (uVar19 == uVar22) break;
              uVar11 = (ulong)*(ushort *)(plVar20 + 2);
            }
          }
          else if ((uVar10 & 0xfffc) == 0) {
            uVar21 = uVar10 * 4 - 1;
            uVar8 = ((uint)(uVar21 >> 2) & 0x3fffffff) + 1;
            uVar19 = 0;
            while( true ) {
              pfVar14 = (float *)(*plVar20 + uVar19 * uVar11 * 4);
              pfVar12 = pfVar14 + uVar10;
              if (pfVar14 < pfVar12) {
                if ((uVar8 & 7) != 0) {
                  pfVar13 = pfVar14;
                  lVar9 = -((ulong)uVar8 & 7);
                  do {
                    bVar5 = lVar9 != -1;
                    lVar9 = lVar9 + 1;
                    pfVar14 = pfVar13 + 1;
                    *pfVar13 = *pfVar13 * fVar26;
                    pfVar13 = pfVar14;
                  } while (bVar5);
                }
                if (0x1b < uVar21) {
                  do {
                    *pfVar14 = *pfVar14 * fVar26;
                    pfVar14[1] = pfVar14[1] * fVar26;
                    pfVar14[2] = pfVar14[2] * fVar26;
                    pfVar14[3] = pfVar14[3] * fVar26;
                    pfVar14[4] = pfVar14[4] * fVar26;
                    pfVar14[5] = pfVar14[5] * fVar26;
                    pfVar14[6] = pfVar14[6] * fVar26;
                    pfVar14[7] = pfVar14[7] * fVar26;
                    pfVar14 = pfVar14 + 8;
                  } while (pfVar14 < pfVar12);
                }
              }
              uVar19 = uVar19 + 1;
              if (uVar19 == uVar22) break;
              uVar11 = (ulong)*(ushort *)(plVar20 + 2);
            }
          }
          else {
            uVar19 = 0;
            while( true ) {
              pfVar14 = (float *)(*plVar20 + uVar19 * uVar11 * 4);
              pfVar12 = pfVar14;
              do {
                pfVar13 = pfVar12 + 4;
                *(ulong *)(pfVar12 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20) * fVar26,
                              (float)*(undefined8 *)(pfVar12 + 2) * fVar26);
                *(ulong *)pfVar12 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * fVar26,
                              (float)*(undefined8 *)pfVar12 * fVar26);
                pfVar12 = pfVar13;
              } while (pfVar13 < pfVar14 + (uVar8 & 0xfffc));
              for (; pfVar13 < pfVar14 + uVar10; pfVar13 = pfVar13 + 1) {
                *pfVar13 = *pfVar13 * fVar26;
              }
              uVar19 = uVar19 + 1;
              if (uVar19 == uVar22) break;
              uVar11 = (ulong)*(ushort *)(plVar20 + 2);
            }
          }
        }
      }
      else if ((int)uVar22 != 0) {
        fVar27 = fVar27 - fVar26;
        fVar28 = fVar27 / (float)uVar10;
        if (uVar8 < 4) {
          uVar21 = uVar10 * 4 - 1;
          uVar8 = ((uint)(uVar21 >> 2) & 0x3fffffff) + 1;
          uVar19 = 0;
          while( true ) {
            pfVar14 = (float *)(*plVar20 + uVar19 * uVar11 * 4);
            pfVar12 = pfVar14 + uVar10;
            if (pfVar14 < pfVar12) {
              fVar27 = fVar26;
              if ((uVar8 & 3) != 0) {
                pfVar13 = pfVar14;
                lVar9 = -((ulong)uVar8 & 3);
                do {
                  fVar30 = *pfVar13 * fVar27;
                  fVar27 = fVar27 + fVar28;
                  pfVar14 = pfVar13 + 1;
                  *pfVar13 = fVar30;
                  bVar5 = lVar9 != -1;
                  lVar9 = lVar9 + 1;
                  pfVar13 = pfVar14;
                } while (bVar5);
              }
              if (0xb < uVar21) {
                do {
                  *pfVar14 = *pfVar14 * fVar27;
                  fVar30 = fVar27 + fVar28 + fVar28;
                  fVar29 = fVar30 + fVar28;
                  pfVar14[1] = pfVar14[1] * (fVar27 + fVar28);
                  fVar27 = fVar29 + fVar28;
                  pfVar14[2] = pfVar14[2] * fVar30;
                  pfVar14[3] = pfVar14[3] * fVar29;
                  pfVar14 = pfVar14 + 4;
                } while (pfVar14 < pfVar12);
              }
            }
            uVar19 = uVar19 + 1;
            if (uVar19 == uVar22) break;
            uVar11 = (ulong)*(ushort *)(plVar20 + 2);
          }
        }
        else if ((uVar10 & 0xfffc) == 0) {
          uVar21 = uVar10 * 4 - 1;
          uVar8 = ((uint)(uVar21 >> 2) & 0x3fffffff) + 1;
          uVar19 = 0;
          while( true ) {
            pfVar14 = (float *)(*plVar20 + uVar19 * uVar11 * 4);
            pfVar12 = pfVar14 + uVar10;
            if (pfVar14 < pfVar12) {
              fVar27 = fVar26;
              if ((uVar8 & 3) != 0) {
                pfVar13 = pfVar14;
                lVar9 = -((ulong)uVar8 & 3);
                do {
                  fVar30 = *pfVar13 * fVar27;
                  fVar27 = fVar27 + fVar28;
                  pfVar14 = pfVar13 + 1;
                  *pfVar13 = fVar30;
                  bVar5 = lVar9 != -1;
                  lVar9 = lVar9 + 1;
                  pfVar13 = pfVar14;
                } while (bVar5);
              }
              if (0xb < uVar21) {
                do {
                  *pfVar14 = *pfVar14 * fVar27;
                  fVar30 = fVar27 + fVar28 + fVar28;
                  fVar29 = fVar30 + fVar28;
                  pfVar14[1] = pfVar14[1] * (fVar27 + fVar28);
                  fVar27 = fVar29 + fVar28;
                  pfVar14[2] = pfVar14[2] * fVar30;
                  pfVar14[3] = pfVar14[3] * fVar29;
                  pfVar14 = pfVar14 + 4;
                } while (pfVar14 < pfVar12);
              }
            }
            uVar19 = uVar19 + 1;
            if (uVar19 == uVar22) break;
            uVar11 = (ulong)*(ushort *)(plVar20 + 2);
          }
        }
        else {
          fVar27 = fVar27 / (float)(uVar8 & 0xfffc);
          fVar29 = fVar27 + fVar26 + fVar27;
          fVar30 = fVar27 * 4.0;
          uVar19 = 0;
          while( true ) {
            pfVar14 = (float *)(*plVar20 + uVar19 * uVar11 * 4);
            pfVar12 = pfVar14;
            fVar31 = fVar26;
            fVar32 = fVar27 + fVar26;
            fVar33 = fVar29;
            fVar34 = fVar29 + fVar27;
            do {
              fVar35 = (float)*(undefined8 *)pfVar12 * fVar31;
              fVar36 = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20) * fVar32;
              fVar37 = (float)*(undefined8 *)(pfVar12 + 2) * fVar33;
              fVar38 = (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20) * fVar34;
              fVar31 = fVar31 + fVar30;
              fVar32 = fVar32 + fVar30;
              fVar33 = fVar33 + fVar30;
              fVar34 = fVar34 + fVar30;
              pfVar13 = pfVar12 + 4;
              *(ulong *)(pfVar12 + 2) = CONCAT44(fVar38,fVar37);
              *(ulong *)pfVar12 = CONCAT44(fVar36,fVar35);
              pfVar12 = pfVar13;
            } while (pfVar13 < pfVar14 + (uVar8 & 0xfffc));
            if (pfVar13 < pfVar14 + uVar10) {
              fVar31 = fVar26;
              do {
                fVar32 = *pfVar13 * fVar31;
                fVar31 = fVar31 + fVar28;
                pfVar12 = pfVar13 + 1;
                *pfVar13 = fVar32;
                pfVar13 = pfVar12;
              } while (pfVar12 < pfVar14 + uVar10);
            }
            uVar19 = uVar19 + 1;
            if (uVar19 == uVar22) break;
            uVar11 = (ulong)*(ushort *)(plVar20 + 2);
          }
        }
      }
      lVar9 = 0;
      lVar16 = 0;
      local_68 = (long *)0x0;
      uVar8 = 0;
      param_1 = local_b8;
      goto LAB_034ed6cc;
    }
  }
  local_80 = *(undefined8 *)(param_2 + 0x118);
  uVar10 = *(ulong *)(param_2 + 0x120);
  plVar20 = (long *)(param_2 + 0x400);
  *(ushort *)(param_2 + 0x412) = *(ushort *)(param_2 + 0x410);
  uStack_78 = uVar10;
  memset(*(void **)(param_2 + 0x400),0,
         (ulong)*(ushort *)(param_2 + 0x410) * (ulong)*(byte *)(param_2 + 0x408) * 4);
  local_c0 = param_2;
  if ((uVar10 & 0xff00000000) == 0) {
    local_68 = (long *)0x0;
  }
  else {
    local_68 = (long *)(param_2 + 0x430);
    *(ushort *)(param_2 + 0x442) = *(ushort *)(param_2 + 0x440);
    memset(*(void **)(param_2 + 0x430),0,
           (ulong)*(ushort *)(param_2 + 0x440) * (ulong)*(byte *)(param_2 + 0x438) * 4);
  }
  if ((int)plVar15[1] != 0) {
    fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(local_c0 + 0x412));
    plVar23 = (long *)*plVar15;
    lVar9 = local_c0 + 0x128;
    local_b0 = plVar20;
    do {
      lVar24 = plVar23[3];
      local_90 = FUN_034a1550(lVar9,plVar23,lVar24,&local_80);
      lVar16 = FUN_034a1750(lVar9,local_90,plVar23,lVar24,&local_80);
      uVar6 = local_90._8_8_;
      uVar8 = *(uint *)(plVar23 + 1);
      local_90._0_8_ = lVar16;
      local_90._8_8_ = uVar6;
      if (local_90._8_4_ == 3) {
        uVar7 = *(ushort *)(plVar23 + 2);
        uVar10 = (ulong)uVar7;
        uVar1 = (uint)*(ushort *)((long)plVar23 + 0x12);
        if ((uint)uVar7 <= (uint)*(ushort *)((long)plVar23 + 0x12)) {
          uVar1 = (uint)uVar7;
        }
        uVar11 = (ulong)uVar1;
        if (uVar7 - uVar1 != 0) {
          uVar22 = (ulong)(uVar8 & 0xff);
          if ((uVar8 & 0xff) != 0) {
            uVar21 = (ulong)((uVar7 - uVar1) * 4);
            uVar19 = uVar22 & 3;
            if (uVar22 - 1 < 3) {
              uVar25 = 0;
            }
            else {
              uVar25 = 0;
              lVar16 = 8;
              do {
                memset((void *)(*plVar23 + (lVar16 + -8) * uVar10 + uVar11 * 4),0,uVar21);
                memset((void *)(*plVar23 + (lVar16 + -4) * (ulong)*(ushort *)(plVar23 + 2) +
                               uVar11 * 4),0,uVar21);
                memset((void *)(*plVar23 + lVar16 * (ulong)*(ushort *)(plVar23 + 2) + uVar11 * 4),0,
                       uVar21);
                memset((void *)(*plVar23 + (lVar16 + 4) * (ulong)*(ushort *)(plVar23 + 2) +
                               uVar11 * 4),0,uVar21);
                uVar10 = (ulong)*(ushort *)(plVar23 + 2);
                uVar25 = uVar25 + 4;
                lVar16 = lVar16 + 0x10;
              } while ((uVar22 & 0xfc) != uVar25);
            }
            param_1 = local_b8;
            uVar7 = (ushort)uVar10;
            if ((uVar8 & 3) != 0) {
              lVar16 = uVar25 << 2;
              do {
                memset((void *)(*plVar23 + lVar16 * uVar10 + uVar11 * 4),0,uVar21);
                uVar7 = *(ushort *)(plVar23 + 2);
                uVar10 = (ulong)uVar7;
                uVar19 = uVar19 - 1;
                lVar16 = lVar16 + 4;
              } while (uVar19 != 0);
            }
          }
          *(ushort *)((long)plVar23 + 0x12) = uVar7;
          plVar20 = local_b0;
        }
      }
      else {
        plVar2 = local_68;
        if (local_90._8_4_ != 2) {
          plVar2 = plVar20;
        }
        if (*(long *)(lVar16 + 0xb8) == 0) {
          uVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))
                            (0,((ulong)*(byte *)(plVar2 + 1) + 3 >> 2) *
                               ((ulong)(uVar8 << 4) & 0xff0),0x10);
          *(undefined8 *)(lVar16 + 0xb8) = uVar6;
          if (*(long *)(local_90._0_8_ + 0xb8) == 0) goto LAB_034ed0ac;
        }
        (**(code **)(*param_1 + 0x90))(param_1,lVar24 + 8,uVar8,(int)plVar2[1]);
        FUN_034f5860(1.0 / fVar26,plVar23,plVar2,lVar24 + 0x58,
                     *(undefined8 *)(local_90._0_8_ + 0xb8),*(undefined8 *)(local_90._0_8_ + 0xb8),
                     *(undefined2 *)((long)plVar23 + 0x12));
        *(short *)((long)plVar2 + 0x12) = (short)plVar2[2];
      }
LAB_034ed0ac:
      plVar23 = plVar23 + 6;
    } while (plVar23 != (long *)(*plVar15 + (ulong)*(uint *)(plVar15 + 1) * 0x30));
  }
  param_2 = local_c0;
  uVar8 = *(uint *)(local_c0 + 0x148);
  if (uVar8 == 0) {
    lVar9 = 0;
    lVar16 = 0;
  }
  else {
    uVar10 = (ulong)uVar8 * 8 + 0xf & 0xffffffff0;
    lVar16 = (long)local_a8 + (-0x18 - uVar10);
    lVar9 = lVar16 - uVar10;
    if (*(uint *)(local_c0 + 0x130) != 0) {
      uVar11 = (ulong)*(uint *)(local_c0 + 0x130) * 0xc0 - 0xc0;
      lVar24 = *(long *)(local_c0 + 0x128);
      uVar10 = uVar11 / 0xc0 + 1;
      if (uVar11 < 0xc0) {
        iVar17 = 0;
      }
      else {
        iVar17 = 0;
        lVar18 = -(uVar10 & 0x3fffffffffffffe);
        lVar4 = lVar24 + 0xc0;
        do {
          lVar24 = lVar4;
          if (*(int *)(lVar24 + -0x10) == 3) {
            *(long *)(lVar16 + (long)iVar17 * 8) = lVar24 + -0x28;
            *(long *)(lVar9 + (long)iVar17 * 8) = lVar24 + -0xc0;
            iVar17 = iVar17 + 1;
          }
          if (*(int *)(lVar24 + 0xb0) == 3) {
            *(long *)(lVar16 + (long)iVar17 * 8) = lVar24 + 0x98;
            *(long *)(lVar9 + (long)iVar17 * 8) = lVar24;
            iVar17 = iVar17 + 1;
          }
          lVar18 = lVar18 + 2;
          lVar4 = lVar24 + 0x180;
        } while (lVar18 != 0);
        lVar24 = lVar24 + 0xc0;
      }
      if (((uVar10 & 1) != 0) && (*(int *)(lVar24 + 0xb0) == 3)) {
        *(long *)(lVar16 + (long)iVar17 * 8) = lVar24 + 0x98;
        *(long *)(lVar9 + (long)iVar17 * 8) = lVar24;
      }
    }
  }
LAB_034ed6cc:
  local_a8[0] = uVar8;
  local_a0 = lVar16;
  lStack_98 = lVar9;
  FUN_0349c2c4((int)param_1[0x10],*(undefined4 *)((long)param_1 + 0x84),param_2,plVar20,local_68,
               local_a8);
  return;
}


