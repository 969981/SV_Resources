/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034064d0; name: FUN_034064d0
 */


char FUN_034064d0(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,long param_5,
                 long *param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar12;
  undefined2 uVar11;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  uint *puVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  size_t __n;
  undefined4 *__s;
  char cVar29;
  ulong uVar30;
  void *__s_00;
  long lVar31;
  int iVar32;
  ulong uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  uint *unaff_x26;
  ulong uVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  undefined8 local_150;
  uint local_148;
  int local_144;
  uint *local_140;
  uint local_138;
  undefined4 local_134;
  undefined8 local_130;
  ulong local_128;
  long local_120;
  size_t local_118;
  void *local_110;
  long *local_108;
  long local_100;
  uint local_f4;
  uint local_f0;
  uint auStack_ec [35];
  
  uVar27 = 1 << (ulong)(param_7 & 0x1f);
  uVar26 = (ulong)uVar27;
  *(short *)(param_1 + 3) = (short)uVar27 + -1;
  uVar7 = *(ushort *)(param_5 + 10);
  uVar19 = (uVar27 + (uint)uVar7 * 2) - 2;
  __s = (undefined4 *)
        ((long)auStack_ec +
        (-100 - ((-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2) + 0xf &
                0xfffffffffffffff0)));
  __n = (size_t)(int)uVar27;
  __s_00 = (void *)((long)__s - (__n + 0xf & 0xfffffffffffffff0));
  local_118 = __n;
  local_110 = __s_00;
  local_108 = param_1;
  if ((ulong)*(ushort *)(param_5 + 8) < 2) {
    *__s = 0x80000000;
    iVar21 = 0;
    iVar20 = 0;
  }
  else {
    local_134 = param_3;
    local_130 = param_4;
    local_128 = (ulong)*(ushort *)(param_5 + 8);
    local_120 = param_2;
    local_100 = param_5;
    local_f4 = param_7;
    memset(__s,0,__n << 2);
    memset(__s_00,0,__n);
    unaff_x26 = auStack_ec;
    memset(auStack_ec,0,0x84);
    uVar30 = 0;
    uVar19 = 0;
    uVar27 = 0;
    local_150 = uVar26;
    local_148 = ~local_f4;
    local_144 = 0;
    local_140 = auStack_ec + 1;
    lVar31 = local_120;
    uVar33 = local_128;
    param_7 = local_f4;
    do {
      bVar6 = *(byte *)(lVar31 + uVar30);
      uVar22 = (ulong)bVar6;
      if (uVar22 != 0) {
        uVar35 = unaff_x26[uVar22];
        if ((uVar19 != 0) && (uVar35 == 0)) {
          iVar21 = -1;
          goto LAB_034069b8;
        }
        uVar28 = (uint)bVar6;
        uVar15 = uVar28 - param_7;
        uVar39 = (uint)bVar6;
        uVar18 = uVar39;
        if ((int)param_7 <= (int)uVar28) {
          uVar18 = param_7;
        }
        if (uVar15 == 0 || (int)uVar28 < (int)param_7) {
          uVar15 = 0;
        }
        if ((int)param_7 < 1) {
          uVar15 = 0;
        }
        else {
          uVar28 = uVar18;
          if ((int)uVar18 < 2) {
            uVar28 = 1;
          }
          uVar16 = uVar35 >> (ulong)(uVar15 & 0x1f);
          uVar40 = uVar28 & 3;
          if (uVar28 - 1 < 3) {
            uVar23 = 0;
            uVar15 = 0;
          }
          else {
            uVar23 = 0;
            uVar15 = 0;
            uVar10 = uVar18;
            do {
              uVar9 = uVar23 & 0x1f;
              uVar1 = uVar23 + 1;
              uVar2 = uVar23 + 2;
              uVar3 = uVar23 + 3;
              uVar23 = uVar23 + 4;
              uVar15 = (uVar16 >> (ulong)(uVar3 & 0x1f) & 1) << (ulong)(uVar10 - 4 & 0x1f) |
                       (uVar16 >> (ulong)(uVar2 & 0x1f) & 1) << (ulong)(uVar10 - 3 & 0x1f) |
                       (uVar16 >> (ulong)(uVar1 & 0x1f) & 1) << (ulong)(uVar10 - 2 & 0x1f) |
                       (uVar16 >> (ulong)uVar9 & 1) << (ulong)(uVar10 - 1 & 0x1f) | uVar15;
              uVar10 = uVar10 - 4;
            } while ((uVar28 & 0x7ffffffc) != uVar23);
          }
          if (uVar40 != 0) {
            uVar18 = ~uVar23 + uVar18;
            do {
              uVar10 = uVar23 & 0x1f;
              uVar23 = uVar23 + 1;
              uVar28 = uVar18 & 0x1f;
              uVar18 = uVar18 - 1;
              uVar15 = (uVar16 >> (ulong)uVar10 & 1) << (ulong)uVar28 | uVar15;
              uVar40 = uVar40 - 1;
            } while (uVar40 != 0);
          }
        }
        uVar37 = (ulong)uVar15;
        uVar18 = (uint)bVar6;
        uVar40 = (uint)bVar6;
        uVar28 = local_f0;
        if (__s[uVar15] == 0) {
          if ((int)param_7 < (int)uVar39) {
            uVar15 = (uint)uVar26;
            __s[uVar37] = uVar15;
            *(char *)((long)__s_00 + uVar37) = (char)param_7;
            local_138 = param_7;
            goto LAB_03406710;
          }
          local_144 = local_144 + 1;
          local_f0 = uVar19 + 1;
          uVar16 = FUN_03407c80(uVar30 & 0xffffffff,uVar19,local_134,local_108,local_130,local_100);
          param_7 = local_f4;
          uVar19 = uVar16;
          if (uVar16 <= uVar27) {
            uVar19 = uVar27;
          }
          uVar16 = uVar16 | 0x80000000;
          __s[uVar37] = uVar16;
          *(byte *)((long)__s_00 + uVar37) = bVar6;
          uVar27 = uVar19;
          if (((int)uVar39 < (int)param_7) && (param_7 - uVar40 != 0x1f)) {
            uVar19 = 1 << (ulong)(param_7 - uVar40 & 0x1f);
            if ((int)uVar19 < 2) {
              uVar19 = 1;
            }
            uVar39 = uVar19 & 3;
            if (uVar19 - 1 < 3) {
              uVar23 = 0;
              uVar13 = local_128;
              lVar38 = local_120;
              uVar28 = local_f0;
            }
            else {
              uVar23 = 0;
              do {
                uVar28 = uVar23 << (ulong)(uVar40 & 0x1f) | uVar15;
                __s[(int)uVar28] = uVar16;
                *(byte *)((long)__s_00 + (long)(int)uVar28) = bVar6;
                uVar28 = uVar23 + 1 << (ulong)(uVar40 & 0x1f) | uVar15;
                __s[(int)uVar28] = uVar16;
                *(byte *)((long)__s_00 + (long)(int)uVar28) = bVar6;
                uVar28 = uVar23 + 2 << (ulong)(uVar40 & 0x1f) | uVar15;
                __s[(int)uVar28] = uVar16;
                *(byte *)((long)__s_00 + (long)(int)uVar28) = bVar6;
                iVar21 = uVar23 + 3;
                uVar23 = uVar23 + 4;
                uVar28 = iVar21 << (ulong)(uVar18 & 0x1f) | uVar15;
                __s[(int)uVar28] = uVar16;
                *(byte *)((long)__s_00 + (long)(int)uVar28) = bVar6;
                uVar13 = local_128;
                lVar38 = local_120;
                uVar28 = local_f0;
              } while ((uVar19 & 0x7ffffffc) != uVar23);
            }
            while( true ) {
              uVar19 = local_f0;
              lVar31 = local_120;
              uVar33 = local_128;
              local_128 = uVar13;
              local_120 = lVar38;
              if (uVar39 == 0) break;
              uVar10 = uVar23 << (ulong)(uVar18 & 0x1f);
              uVar23 = uVar23 + 1;
              uVar10 = uVar10 | uVar15;
              local_f0 = uVar28;
              __s[(int)uVar10] = uVar16;
              *(byte *)((long)__s_00 + (long)(int)uVar10) = bVar6;
              uVar39 = uVar39 - 1;
              uVar13 = local_128;
              lVar38 = local_120;
              uVar28 = local_f0;
              local_f0 = uVar19;
              local_120 = lVar31;
              local_128 = uVar33;
            }
            goto LAB_034066ec;
          }
LAB_034067e0:
          lVar31 = local_120;
          uVar33 = local_128;
          uVar19 = local_f0;
        }
        else {
LAB_034066ec:
          local_f0 = uVar28;
          if ((int)param_7 < (int)uVar18) {
            uVar15 = __s[uVar37];
            local_138 = param_7;
LAB_03406710:
            uVar33 = (ulong)uVar15;
            puVar24 = __s + uVar15;
            if ((int)local_138 < (int)(uVar18 - 1)) {
              local_138 = uVar18 - 1;
              uVar15 = local_148 + uVar40;
              do {
                uVar37 = (ulong)(uVar35 >> ((ulong)uVar15 & 0x3f)) & 1;
                uVar28 = (uint)uVar26;
                if ((long)uVar33 < (long)(int)uVar28) {
                  uVar39 = puVar24[uVar37];
                  if (puVar24[uVar37] == 0) {
                    puVar24[uVar37] = uVar28;
                    uVar39 = uVar28;
                  }
                }
                else {
                  uVar26 = (ulong)(uVar28 + 2);
                  *puVar24 = uVar28 + 2;
                  puVar24[1] = 0;
                  uVar39 = puVar24[uVar37];
                }
                puVar24 = __s + uVar39;
                uVar33 = (ulong)uVar39;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            local_f0 = uVar19 + 1;
            uVar15 = FUN_03407c80(uVar30 & 0xffffffff,uVar19,local_134,local_108,local_130,local_100
                                 );
            uVar19 = uVar15;
            if (uVar15 <= uVar27) {
              uVar19 = uVar27;
            }
            if ((long)uVar33 < (long)(int)uVar26) {
              puVar24[(ulong)(uVar35 >> ((ulong)(~local_138 + uVar40) & 0x3f)) & 1] =
                   uVar15 | 0x80000000;
            }
            else {
              uVar26 = (ulong)((int)uVar26 + 2);
              *puVar24 = uVar15 | 0x80000000;
              puVar24[1] = 0;
            }
            __s_00 = local_110;
            uVar27 = uVar19;
            param_7 = local_f4;
            goto LAB_034067e0;
          }
        }
        lVar38 = 0;
        do {
          uVar15 = uVar18 + (int)lVar38;
          if ((unaff_x26[uVar15] & 1) != 0) {
            unaff_x26[uVar15] = unaff_x26[(ulong)(uVar18 - 1) + lVar38] << 1;
            break;
          }
          lVar38 = lVar38 + -1;
          unaff_x26[uVar15] = unaff_x26[uVar15] + 1;
        } while (1 < (int)(uVar40 + (int)lVar38 + 1));
        if (uVar40 < 0x20) {
          uVar15 = unaff_x26[uVar22];
          if (uVar18 < 0x20) {
            uVar18 = 0x1f;
          }
          lVar38 = (uVar18 + 1) - uVar22;
          puVar24 = local_140 + uVar22;
          do {
            uVar18 = *puVar24;
            if (uVar35 != uVar18 >> 1) break;
            uVar15 = uVar15 << 1;
            lVar38 = lVar38 + -1;
            *puVar24 = uVar15;
            puVar24 = puVar24 + 1;
            uVar35 = uVar18;
          } while (lVar38 != 0);
        }
      }
      iVar21 = (int)uVar26;
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar33);
    uVar19 = 2;
    if (0x7fff < uVar27) {
      uVar19 = 4;
    }
    uVar35 = 1;
    if (0x7f < uVar27) {
      uVar35 = uVar19;
    }
    unaff_x26 = (uint *)(ulong)uVar35;
LAB_034069b8:
    uVar27 = (uint)local_150;
    uVar7 = *(ushort *)(local_100 + 10);
    param_1 = local_108;
    iVar20 = local_144;
  }
  uVar19 = 3 << (ulong)(param_7 & 0x1f);
  uVar26 = (ulong)uVar19;
  uVar35 = (uint)unaff_x26;
  *(char *)((long)param_1 + 0x1b) = (char)unaff_x26;
  iVar34 = 0;
  if ((uVar35 & 0xff) != 2) {
    iVar34 = (uint)uVar7 - iVar20;
  }
  local_120 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))
                        (5,((uVar19 - uVar27) + iVar21 + ((uint)uVar7 - iVar20) * uVar35) - iVar34);
  *param_1 = local_120;
  if (local_120 == 0) {
    cVar29 = '\x02';
  }
  else {
    lVar31 = local_120 + local_118 * 2;
    param_1[1] = lVar31;
    if (param_7 != 0x1f) {
      lVar38 = 0;
      local_f0 = uVar35;
      do {
        local_100 = lVar38;
        *(undefined1 *)(lVar31 + lVar38) = *(undefined1 *)((long)__s_00 + lVar38);
        uVar27 = __s[lVar38];
        if ((int)uVar27 < 0) {
          cVar29 = '\0';
          *(ushort *)(local_120 + lVar38 * 2) = (ushort)uVar27 | 0x8000;
        }
        else {
          uVar19 = (uint)uVar26;
          if ((int)uVar19 < 0) {
            uVar19 = uVar19 + 1;
          }
          *(short *)(local_120 + lVar38 * 2) = (short)(uVar19 >> 1);
          lVar31 = *param_1;
          if ((int)param_6[1] < 2) {
            puVar17 = (ushort *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x100);
            if (puVar17 != (ushort *)0x0) {
              if (*param_6 != 0) {
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
              }
              *(undefined4 *)(param_6 + 1) = 0x100;
              *param_6 = (long)puVar17;
              goto LAB_03406ad8;
            }
LAB_03406f24:
            cVar29 = '\x02';
            goto LAB_03406f28;
          }
          puVar17 = (ushort *)*param_6;
LAB_03406ad8:
          *puVar17 = (ushort)uVar27;
          uVar19 = __s[uVar27];
          uVar27 = (__s + uVar27)[1];
          if ((int)param_6[3] < 1) {
            lVar38 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x100);
            if (lVar38 == 0) goto LAB_03406f24;
            if (param_6[2] != 0) {
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
            }
            *(undefined4 *)(param_6 + 3) = 0x100;
            param_6[2] = lVar38;
          }
          uVar35 = 1;
          iVar21 = -((int)~uVar19 >> 0x1f) - ((int)~uVar27 >> 0x1f);
          iVar20 = (int)param_6[5];
          uVar30 = 1;
          do {
            if (iVar20 < iVar21 * 2) {
              iVar20 = iVar21 * 2;
              if (iVar20 < 0x101) {
                iVar20 = 0x100;
              }
              lVar38 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,iVar20);
              if (lVar38 == 0) {
                uVar27 = 0;
                cVar29 = '\x02';
              }
              else {
                if (param_6[4] != 0) {
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
                }
                cVar29 = '\0';
                uVar27 = 1;
                *(int *)(param_6 + 5) = iVar20;
                param_6[4] = lVar38;
              }
              unaff_x26 = (uint *)(ulong)local_f0;
            }
            else {
              cVar29 = '\0';
              uVar27 = 1;
            }
            iVar20 = (int)uVar30;
            iVar34 = (int)uVar26;
            if ((int)param_6[7] < iVar21 * 4) {
              iVar21 = iVar21 * 4;
              if (iVar21 < 0x101) {
                iVar21 = 0x100;
              }
              local_f4 = uVar27;
              lVar38 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,iVar21);
              if (lVar38 != 0) {
                if (param_6[6] != 0) {
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
                }
                *(int *)(param_6 + 7) = iVar21;
                param_6[6] = lVar38;
                unaff_x26 = (uint *)(ulong)local_f0;
                uVar27 = local_f4;
                goto LAB_03406c3c;
              }
              unaff_x26 = (uint *)(ulong)local_f0;
              iVar21 = 0;
              uVar19 = iVar34 + iVar20 * 2;
              cVar29 = '\x02';
              uVar33 = 0;
            }
            else {
LAB_03406c3c:
              uVar19 = iVar34 + iVar20 * 2;
              if (iVar20 < 1 || ((uVar27 ^ 1) & 1) != 0) {
                uVar33 = 0;
                iVar21 = 0;
              }
              else {
                uVar22 = 0;
                iVar21 = 0;
                iVar20 = -iVar34;
                uVar26 = (ulong)iVar34;
                uVar33 = 0;
                do {
                  piVar4 = __s + *(short *)(*param_6 + uVar22 * 2);
                  if (uVar35 < 2) {
                    cVar29 = false;
                  }
                  else {
                    sVar8 = *(short *)(param_6[2] + uVar22 * 2);
                    uVar18 = (int)uVar26 - ((int)sVar8 & 0xfffffffeU);
                    uVar27 = uVar18;
                    if ((int)uVar18 < 0) {
                      uVar27 = uVar18 + 1;
                    }
                    cVar29 = 0xff < (int)uVar18;
                    *(char *)(lVar31 + sVar8) = (char)(uVar27 >> 1);
                  }
                  iVar34 = *piVar4;
                  iVar5 = piVar4[1];
                  iVar32 = (int)uVar33;
                  iVar36 = (int)unaff_x26;
                  uVar11 = (undefined2)iVar34;
                  uVar12 = (undefined2)iVar5;
                  sVar8 = (short)uVar26;
                  if (iVar34 < 0) {
                    if (-1 < iVar5) {
                      *(short *)(param_6[6] + (long)iVar32 * 2) = sVar8 + 1;
                      if (iVar36 == 1) {
                        *(byte *)(lVar31 + uVar26) = (byte)iVar34 | 0x80;
                      }
                      else {
                        uVar27 = uVar19 + iVar20;
                        if ((int)uVar27 < 0) {
                          uVar27 = uVar27 + 1;
                        }
                        *(byte *)(lVar31 + uVar26) = (byte)(uVar27 >> 1) | 0x80;
                        *(undefined2 *)(lVar31 + (int)uVar19) = uVar11;
                        uVar19 = uVar19 + 2;
                      }
                      *(undefined2 *)(param_6[4] + (long)iVar32 * 2) = uVar12;
                      piVar4[1] = 0;
                      goto LAB_03406df4;
                    }
                    if (iVar36 == 1) {
                      *(byte *)(lVar31 + uVar26) = (byte)iVar34 | 0x80;
                      ((byte *)(lVar31 + uVar26))[1] = (byte)iVar5 | 0x80;
                    }
                    else {
                      uVar27 = uVar19 + iVar20;
                      uVar18 = uVar27;
                      if ((int)uVar27 < 0) {
                        uVar18 = uVar27 + 1;
                      }
                      *(byte *)(lVar31 + uVar26) = (byte)(uVar18 >> 1) | 0x80;
                      uVar18 = uVar27 + 3;
                      if (-1 < (int)(uVar27 + 2)) {
                        uVar18 = uVar27 + 2;
                      }
                      ((byte *)(lVar31 + uVar26))[1] = (byte)(uVar18 >> 1) | 0x80;
                      lVar38 = (long)(int)uVar19;
                      uVar19 = uVar19 + 4;
                      *(undefined2 *)(lVar31 + lVar38) = uVar11;
                      ((undefined2 *)(lVar31 + lVar38))[1] = uVar12;
                    }
                  }
                  else {
                    if (iVar5 < 0) {
                      *(short *)(param_6[6] + (long)iVar32 * 2) = sVar8;
                      if (iVar36 == 1) {
                        *(byte *)(lVar31 + uVar26 + 1) = (byte)iVar5 | 0x80;
                      }
                      else {
                        uVar27 = uVar19 + iVar20;
                        if ((int)uVar27 < 0) {
                          uVar27 = uVar27 + 1;
                        }
                        *(byte *)(lVar31 + uVar26 + 1) = (byte)(uVar27 >> 1) | 0x80;
                        *(undefined2 *)(lVar31 + (int)uVar19) = uVar12;
                        uVar19 = uVar19 + 2;
                      }
                      *(undefined2 *)(param_6[4] + (long)iVar32 * 2) = uVar11;
                      *piVar4 = 0;
LAB_03406df4:
                      uVar27 = iVar32 + 1;
                      uVar18 = (__s + *(short *)(param_6[4] + (long)iVar32 * 2))[1];
                      iVar21 = iVar21 - ((int)~__s[*(short *)(param_6[4] + (long)iVar32 * 2)] >>
                                        0x1f);
                    }
                    else {
                      *(undefined2 *)(param_6[4] + (long)iVar32 * 2) = uVar11;
                      lVar38 = (-(uVar33 >> 0x1f) & 0xfffffffe00000000 | uVar33 << 1) + 2;
                      *(undefined2 *)(param_6[4] + lVar38) = uVar12;
                      *(short *)(param_6[6] + (long)iVar32 * 2) = sVar8;
                      *(short *)(param_6[6] + lVar38) = sVar8 + 1;
                      piVar4[0] = 0;
                      piVar4[1] = 0;
                      uVar27 = iVar32 + 2;
                      uVar18 = (__s + *(short *)(param_6[4] + lVar38))[1];
                      iVar21 = ((iVar21 - ((int)~__s[*(short *)(param_6[4] + (long)iVar32 * 2)] >>
                                          0x1f)) -
                               ((int)~(__s + *(short *)(param_6[4] + (long)iVar32 * 2))[1] >> 0x1f))
                               - ((int)~__s[*(short *)(param_6[4] + lVar38)] >> 0x1f);
                    }
                    uVar33 = (ulong)uVar27;
                    iVar21 = iVar21 - ((int)~uVar18 >> 0x1f);
                  }
                  uVar22 = uVar22 + 1;
                  uVar26 = uVar26 + 2;
                } while ((uVar22 < uVar30) && (iVar20 = iVar20 + -2, (bool)cVar29 == false));
              }
            }
            if ((int)unaff_x26 != 2) {
              uVar19 = (uint)uVar26;
            }
            uVar26 = (ulong)uVar19;
            lVar38 = *param_6;
            *param_6 = param_6[4];
            iVar20 = (int)param_6[1];
            *(int *)(param_6 + 1) = (int)param_6[5];
            param_6[4] = lVar38;
            *(int *)(param_6 + 5) = iVar20;
            lVar25 = param_6[2];
            param_6[2] = param_6[6];
            lVar38 = param_6[3];
            *(int *)(param_6 + 3) = (int)param_6[7];
            param_6[6] = lVar25;
            *(int *)(param_6 + 7) = (int)lVar38;
            if (cVar29 != '\0') break;
            uVar35 = uVar35 + 1;
            uVar30 = uVar33;
          } while ((int)uVar33 != 0);
        }
        lVar38 = local_100 + 1;
        if (((long)local_118 <= lVar38) || (cVar29 != '\0')) {
          if (cVar29 == '\0') {
            return '\0';
          }
LAB_03406f28:
          plVar14 = local_108;
          if (*local_108 == 0) {
            return cVar29;
          }
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
          *plVar14 = 0;
          return cVar29;
        }
        lVar31 = local_108[1];
        param_1 = local_108;
        __s_00 = local_110;
      } while( true );
    }
    cVar29 = '\0';
  }
  return cVar29;
}


