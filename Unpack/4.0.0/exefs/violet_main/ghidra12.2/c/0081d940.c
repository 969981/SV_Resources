/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081d940; name: FUN_0081d940
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0081d940(void *param_1,long *param_2,short *param_3,uint param_4,int param_5,uint param_6)

{
  char *pcVar1;
  int iVar2;
  ulong *puVar3;
  uint *puVar4;
  char *pcVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  short sVar11;
  int iVar12;
  short *psVar13;
  long *plVar14;
  int *piVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  uint uVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  ulong *puVar33;
  long *plVar34;
  long *plVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  
  if (param_1 != (void *)0x0) {
    if (((ulong)param_1 & 7) == 0) {
      memset(param_1,0,0x4020);
    }
    else {
      param_1 = (void *)0x0;
    }
  }
  if ((int)param_6 < 2) {
    param_6 = 1;
  }
  if (0x10000 < (int)param_6) {
    param_6 = 0x10001;
  }
  iVar12 = 0;
  if (param_4 < 0x7e000001) {
    iVar12 = (uint)((ulong)param_4 * 0x8080808081 >> 0x27) + 0x10;
  }
  puVar4 = (uint *)((long)param_1 + 0x4000);
  iVar18 = (int)param_3;
  plVar35 = param_2;
  if (param_5 < iVar12) {
    if ((int)param_4 < 0x1000b) {
      if (param_4 < 0x7e000001) {
        if (param_4 == 0) {
          if (0 < param_5) goto LAB_0081e660;
        }
        else {
          uVar30 = *puVar4;
          iVar12 = pthread_once((pthread_once_t *)PTR_DAT_047d1998,
                                (__init_routine *)PTR_LAB_047d19a0);
          if (iVar12 == 0) {
            pcVar1 = (char *)((long)param_3 + (long)param_5);
            *(uint *)((long)param_1 + 0x4018) = *(int *)((long)param_1 + 0x4018) + param_4;
            *puVar4 = *puVar4 + param_4;
            *(undefined4 *)((long)param_1 + 0x4004) = 3;
            if (0xc < (int)param_4) {
              lVar37 = (long)param_2 - (ulong)uVar30;
              plVar22 = (long *)((long)param_2 + 2);
              plVar38 = (long *)((long)param_2 + ((ulong)param_4 - 0xb));
              plVar14 = (long *)((long)param_2 + 1);
              puVar33 = (ulong *)((long)param_2 + ((ulong)param_4 - 0xc));
              *(short *)((long)param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) =
                   (short)uVar30;
LAB_0081e7e8:
              uVar30 = param_6 << 6 | 1;
              iVar12 = (int)*plVar14;
              uVar20 = param_6;
              while( true ) {
                lVar28 = (ulong)((uint)(iVar12 * -0x61c8864f) >> 0x13) * 2;
                sVar11 = (short)lVar37;
                plVar17 = (long *)(lVar37 + (ulong)*(ushort *)((long)param_1 + lVar28));
                iVar12 = (int)*plVar22;
                *(short *)((long)param_1 + lVar28) = (short)plVar14 - sVar11;
                if ((int)*plVar17 == (int)*plVar14) break;
                plVar17 = (long *)((long)plVar22 + (long)(int)uVar20);
                uVar20 = uVar30 >> 6;
                uVar30 = uVar30 + 1;
                plVar14 = plVar22;
                plVar22 = plVar17;
                if (plVar38 < plVar17) goto LAB_0081da58;
              }
              do {
                plVar34 = plVar17;
                plVar22 = plVar14;
                if ((plVar34 <= param_2) || (plVar22 <= plVar35)) break;
                plVar14 = (long *)((long)plVar22 + -1);
                plVar17 = (long *)((long)plVar34 + -1);
              } while (*(char *)((long)plVar22 + -1) == *(char *)((long)plVar34 + -1));
              uVar36 = (long)plVar22 - (long)plVar35 & 0xffffffff;
              if (pcVar1 < (char *)((long)param_3 + uVar36 / 0xff + uVar36 + 9)) {
                return 0;
              }
              plVar14 = (long *)((long)param_3 + 1);
              uVar30 = (uint)((long)plVar22 - (long)plVar35);
              iVar12 = uVar30 - 0xf;
              if (uVar30 < 0xf) {
                *(char *)param_3 = (char)(uVar30 << 4);
              }
              else {
                *(char *)param_3 = -0x10;
                if (0xfe < iVar12) {
                  iVar19 = (int)plVar22 + 0xef;
                  if (0x1fc < iVar12) {
                    iVar12 = 0x1fd;
                  }
                  memset(plVar14,0xff,(ulong)((uint)((iVar19 - (int)plVar35) - iVar12) / 0xff + 1));
                  iVar19 = iVar19 - iVar12;
                  uVar21 = (ulong)(uint)(iVar19 - (int)plVar35);
                  plVar14 = (long *)((long)param_3 + uVar21 / 0xff + 2);
                  iVar12 = ((int)plVar22 - iVar19) + (uint)(uVar21 * 0x8080808081 >> 0x27) + -0x10e;
                }
                *(char *)plVar14 = (char)iVar12;
                plVar14 = (long *)((long)plVar14 + 1);
              }
              plVar16 = (long *)((long)plVar14 + uVar36);
              plVar17 = plVar14 + 1;
              plVar29 = plVar16;
              if (plVar16 <= plVar17) {
                plVar29 = plVar17;
              }
              pcVar5 = (char *)(~(ulong)plVar14 + (long)plVar29);
              psVar13 = param_3;
              if ((char *)0x37 < pcVar5) {
                plVar29 = plVar16;
                if (plVar16 <= plVar17) {
                  plVar29 = plVar17;
                }
                uVar36 = (ulong)(~(ulong)plVar14 + (long)plVar29) & 0xfffffffffffffff8;
                if (plVar14 < (long *)((long)plVar35 + uVar36 + 8)) {
                  if (plVar35 < (long *)((long)plVar17 + uVar36)) goto LAB_0081ea18;
                }
                uVar36 = ((ulong)pcVar5 >> 3) + 1;
                uVar23 = uVar36 & 0x3ffffffffffffff8;
                uVar21 = (uVar23 - 8 >> 3) + 1;
                lVar28 = 0;
                if (uVar23 - 8 != 0) {
                  lVar27 = -(uVar21 & 0x3ffffffffffffffe);
                  plVar17 = plVar14 + 8;
                  plVar29 = plVar35 + 8;
                  do {
                    lVar39 = plVar29[-8];
                    lVar41 = plVar29[-5];
                    lVar40 = plVar29[-6];
                    lVar28 = lVar28 + 0x10;
                    lVar27 = lVar27 + 2;
                    lVar43 = plVar29[-3];
                    lVar42 = plVar29[-4];
                    lVar45 = plVar29[-1];
                    lVar44 = plVar29[-2];
                    plVar17[-7] = plVar29[-7];
                    plVar17[-8] = lVar39;
                    plVar17[-5] = lVar41;
                    plVar17[-6] = lVar40;
                    plVar17[-3] = lVar43;
                    plVar17[-4] = lVar42;
                    plVar17[-1] = lVar45;
                    plVar17[-2] = lVar44;
                    lVar39 = *plVar29;
                    lVar41 = plVar29[3];
                    lVar40 = plVar29[2];
                    lVar43 = plVar29[5];
                    lVar42 = plVar29[4];
                    lVar45 = plVar29[7];
                    lVar44 = plVar29[6];
                    plVar17[1] = plVar29[1];
                    *plVar17 = lVar39;
                    plVar17[3] = lVar41;
                    plVar17[2] = lVar40;
                    plVar29 = plVar29 + 0x10;
                    plVar17[5] = lVar43;
                    plVar17[4] = lVar42;
                    plVar17[7] = lVar45;
                    plVar17[6] = lVar44;
                    plVar17 = plVar17 + 0x10;
                  } while (lVar27 != 0);
                }
                if ((uVar21 & 1) != 0) {
                  plVar17 = plVar35 + lVar28;
                  plVar29 = plVar14 + lVar28;
                  lVar28 = *plVar17;
                  lVar39 = plVar17[3];
                  lVar27 = plVar17[2];
                  lVar41 = plVar17[5];
                  lVar40 = plVar17[4];
                  lVar43 = plVar17[7];
                  lVar42 = plVar17[6];
                  plVar29[1] = plVar17[1];
                  *plVar29 = lVar28;
                  plVar29[3] = lVar39;
                  plVar29[2] = lVar27;
                  plVar29[5] = lVar41;
                  plVar29[4] = lVar40;
                  plVar29[7] = lVar43;
                  plVar29[6] = lVar42;
                }
                if (uVar36 == uVar23) goto LAB_0081ea28;
                plVar14 = plVar14 + uVar23;
                plVar35 = plVar35 + uVar23;
              }
LAB_0081ea18:
              do {
                plVar17 = plVar14 + 1;
                *plVar14 = *plVar35;
                plVar14 = plVar17;
                plVar35 = plVar35 + 1;
              } while (plVar17 < plVar16);
LAB_0081ea28:
              do {
                puVar3 = (ulong *)((long)plVar22 + 4);
                puVar26 = (ulong *)((long)plVar34 + 4);
                param_3 = (short *)((long)plVar16 + 2);
                *(short *)plVar16 = (short)plVar22 - (short)plVar34;
                if (puVar3 < puVar33) {
                  uVar36 = *puVar3 ^ *puVar26;
                  if (uVar36 == 0) {
                    puVar26 = (ulong *)((long)plVar34 + 0xc);
                    puVar24 = (ulong *)((long)plVar22 + 0xc);
                    goto LAB_0081ea6c;
                  }
                  uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
                  uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
                  uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
                  uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10
                  ;
                  uVar30 = (uint)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
                }
                else {
                  puVar24 = puVar3;
LAB_0081ea6c:
                  for (; puVar24 < puVar33; puVar24 = puVar24 + 1) {
                    uVar36 = *puVar24 ^ *puVar26;
                    if (uVar36 != 0) {
                      uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                               (uVar36 & 0x5555555555555555) << 1;
                      uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 |
                               (uVar36 & 0x3333333333333333) << 2;
                      uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar36 & 0xffff0000ffff) << 0x10;
                      uVar30 = ((int)puVar24 +
                               (int)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3)) -
                               (int)puVar3;
                      goto LAB_0081eaa4;
                    }
                    puVar26 = puVar26 + 1;
                  }
                  if (puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 8))) {
                    if ((int)*puVar26 == (int)*puVar24) {
                      puVar24 = (ulong *)((long)puVar24 + 4);
                      puVar26 = (ulong *)((long)puVar26 + 4);
                    }
                  }
                  if (puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 6))) {
                    if ((short)*puVar26 == (short)*puVar24) {
                      puVar24 = (ulong *)((long)puVar24 + 2);
                      puVar26 = (ulong *)((long)puVar26 + 2);
                    }
                  }
                  puVar25 = puVar24;
                  if ((puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 5))) &&
                     (puVar25 = (ulong *)((long)puVar24 + 1), (char)*puVar26 != (char)*puVar24)) {
                    puVar25 = puVar24;
                  }
                  uVar30 = (int)puVar25 - (int)puVar3;
                }
LAB_0081eaa4:
                if (pcVar1 < (char *)((long)plVar16 + (ulong)(uVar30 + 0xf0) / 0xff + 8)) {
                  return 0;
                }
                plVar35 = (long *)((long)plVar22 + (ulong)uVar30 + 4);
                uVar20 = uVar30 - 0xf;
                if (uVar30 < 0xf) {
                  *(char *)psVar13 = (char)*psVar13 + (char)uVar30;
                }
                else {
                  *(char *)psVar13 = (char)*psVar13 + '\x0f';
                  param_3[0] = -1;
                  param_3[1] = -1;
                  if (0x3fb < uVar20) {
                    uVar7 = ((uVar30 - 0x40b) / 0x3fc) * 4;
                    memset((short *)((long)plVar16 + 6),0xff,(ulong)(uVar7 + 4));
                    uVar20 = (uVar30 - 0x40b) % 0x3fc;
                    param_3 = (short *)((long)plVar16 + 6 + (ulong)uVar7);
                  }
                  pcVar5 = (char *)((long)param_3 + (ulong)(uVar20 & 0xffff) / 0xff);
                  param_3 = (short *)(pcVar5 + 1);
                  *pcVar5 = (char)uVar20 + (char)((uVar20 & 0xffff) / 0xff);
                }
                if (plVar38 <= plVar35) break;
                piVar15 = (int *)((long)plVar22 + (ulong)uVar30 + 2);
                *(short *)((long)param_1 + (ulong)((uint)(*piVar15 * -0x61c8864f) >> 0x13) * 2) =
                     (short)piVar15 - sVar11;
                lVar28 = (ulong)((uint)((int)*plVar35 * -0x61c8864f) >> 0x13) * 2;
                uVar6 = *(ushort *)((long)param_1 + lVar28);
                *(short *)((long)param_1 + lVar28) = (short)plVar35 - sVar11;
                plVar34 = (long *)(lVar37 + (ulong)uVar6);
                if ((int)*plVar34 != (int)*plVar35) goto LAB_0081ec48;
                plVar16 = (long *)((long)param_3 + 1);
                *(char *)param_3 = '\0';
                plVar22 = plVar35;
                psVar13 = param_3;
              } while( true );
            }
LAB_0081da58:
            puVar31 = (undefined1 *)((long)param_2 + ((ulong)param_4 - (long)plVar35));
            if ((char *)((long)param_3 + (long)(puVar31 + (ulong)(puVar31 + 0xf0) / 0xff + 1)) <=
                pcVar1) {
              puVar32 = puVar31 + -0xf;
              if (puVar31 < (undefined1 *)0xf) {
                *(char *)param_3 = (char)((int)puVar31 << 4);
              }
              else {
                psVar13 = (short *)((long)param_3 + 1);
                *(char *)param_3 = -0x10;
                if ((undefined1 *)0xfe < puVar32) {
                  uVar36 = (ulong)(puVar31 + -0x10e) / 0xff;
                  memset(psVar13,0xff,uVar36 + 1);
                  psVar13 = (short *)((long)param_3 + uVar36 + 2);
                  puVar32 = (undefined1 *)((ulong)(puVar31 + -0x10e) % 0xff);
                }
                *(char *)psVar13 = (char)puVar32;
                param_3 = psVar13;
              }
              memcpy((char *)((long)param_3 + 1),plVar35,(size_t)puVar31);
              return ((int)(char *)((long)param_3 + 1) + (int)puVar31) - iVar18;
            }
          }
        }
      }
    }
    else if (param_4 < 0x7e000001) {
      uVar30 = *puVar4;
      iVar12 = pthread_once((pthread_once_t *)PTR_DAT_047d1998,(__init_routine *)PTR_LAB_047d19a0);
      if (iVar12 == 0) {
        plVar38 = (long *)((long)param_2 + ((ulong)param_4 - 0xb));
        *(uint *)((long)param_1 + 0x4018) = *(int *)((long)param_1 + 0x4018) + param_4;
        *puVar4 = *puVar4 + param_4;
        *(undefined4 *)((long)param_1 + 0x4004) = 2;
        plVar22 = (long *)((long)param_2 + 2);
        pcVar1 = (char *)((long)param_3 + (long)param_5);
        plVar14 = (long *)((long)param_2 + 1);
        lVar37 = (long)param_2 - (ulong)uVar30;
        puVar33 = (ulong *)((long)param_2 + ((ulong)param_4 - 0xc));
        *(uint *)((long)param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
             uVar30;
LAB_0081e198:
        lVar28 = *plVar14;
        uVar20 = param_6;
        uVar30 = param_6 << 6 | 1;
        do {
          uVar36 = lVar28 * -0x30e4432345000000;
          lVar28 = *plVar22;
          uVar36 = uVar36 >> 0x32 & 0x3ffc;
          iVar12 = (int)lVar37;
          uVar8 = (int)plVar14 - iVar12;
          uVar7 = *(uint *)((long)param_1 + uVar36);
          *(uint *)((long)param_1 + uVar36) = uVar8;
          if (uVar8 <= uVar7 + 0xffff) {
            plVar17 = (long *)(lVar37 + (ulong)uVar7);
            if ((int)*plVar17 == (int)*plVar14) goto LAB_0081e200;
          }
          plVar17 = (long *)((long)plVar22 + (long)(int)uVar20);
          uVar20 = uVar30 >> 6;
          uVar30 = uVar30 + 1;
          plVar14 = plVar22;
          plVar22 = plVar17;
          if (plVar38 < plVar17) goto LAB_0081e6a4;
        } while( true );
      }
    }
LAB_0081e6d0:
    return 0;
  }
  if (0x1000a < (int)param_4) {
    if (0x7e000000 < param_4) {
      return 0;
    }
    uVar30 = *puVar4;
    iVar12 = pthread_once((pthread_once_t *)PTR_DAT_047d1998,(__init_routine *)PTR_LAB_047d19a0);
    if (iVar12 != 0) {
      return 0;
    }
    plVar38 = (long *)((long)param_2 + ((ulong)param_4 - 0xb));
    *puVar4 = *puVar4 + param_4;
    *(uint *)((long)param_1 + 0x4018) = *(int *)((long)param_1 + 0x4018) + param_4;
    *(undefined4 *)((long)param_1 + 0x4004) = 2;
    plVar22 = (long *)((long)param_2 + 2);
    lVar37 = (long)param_2 - (ulong)uVar30;
    plVar14 = (long *)((long)param_2 + 1);
    puVar33 = (ulong *)((long)param_2 + ((ulong)param_4 - 0xc));
    *(uint *)((long)param_1 + ((ulong)(*param_2 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) = uVar30;
LAB_0081dd2c:
    uVar30 = param_6 << 6 | 1;
    lVar28 = *plVar14;
    uVar20 = param_6;
    do {
      uVar36 = lVar28 * -0x30e4432345000000;
      lVar28 = *plVar22;
      uVar36 = uVar36 >> 0x32 & 0x3ffc;
      iVar12 = (int)lVar37;
      uVar8 = (int)plVar14 - iVar12;
      uVar7 = *(uint *)((long)param_1 + uVar36);
      *(uint *)((long)param_1 + uVar36) = uVar8;
      if (uVar8 <= uVar7 + 0xffff) {
        plVar17 = (long *)(lVar37 + (ulong)uVar7);
        if ((int)*plVar17 == (int)*plVar14) goto LAB_0081dd94;
      }
      plVar17 = (long *)((long)plVar22 + (long)(int)uVar20);
      uVar20 = uVar30 >> 6;
      uVar30 = uVar30 + 1;
      plVar14 = plVar22;
      plVar22 = plVar17;
      if (plVar38 < plVar17) goto LAB_0081e66c;
    } while( true );
  }
  if (0x7e000000 < param_4) {
    return 0;
  }
  if (param_4 == 0) {
LAB_0081e660:
    *(char *)param_3 = '\0';
    return 1;
  }
  uVar30 = *puVar4;
  iVar12 = pthread_once((pthread_once_t *)PTR_DAT_047d1998,(__init_routine *)PTR_LAB_047d19a0);
  if (iVar12 != 0) {
    return 0;
  }
  *(uint *)((long)param_1 + 0x4018) = *(int *)((long)param_1 + 0x4018) + param_4;
  *puVar4 = *puVar4 + param_4;
  *(undefined4 *)((long)param_1 + 0x4004) = 3;
  if (0xc < (int)param_4) {
    lVar37 = (long)param_2 - (ulong)uVar30;
    plVar38 = (long *)((long)param_2 + ((ulong)param_4 - 0xb));
    plVar22 = (long *)((long)param_2 + 2);
    plVar14 = (long *)((long)param_2 + 1);
    puVar33 = (ulong *)((long)param_2 + ((ulong)param_4 - 0xc));
    *(short *)((long)param_1 + (ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x13) * 2) =
         (short)uVar30;
LAB_0081ece4:
    uVar30 = param_6 << 6 | 1;
    iVar12 = (int)*plVar14;
    uVar20 = param_6;
    while( true ) {
      lVar28 = (ulong)((uint)(iVar12 * -0x61c8864f) >> 0x13) * 2;
      sVar11 = (short)lVar37;
      plVar17 = (long *)(lVar37 + (ulong)*(ushort *)((long)param_1 + lVar28));
      iVar12 = (int)*plVar22;
      *(short *)((long)param_1 + lVar28) = (short)plVar14 - sVar11;
      if ((int)*plVar17 == (int)*plVar14) break;
      plVar17 = (long *)((long)plVar22 + (long)(int)uVar20);
      uVar20 = uVar30 >> 6;
      uVar30 = uVar30 + 1;
      plVar14 = plVar22;
      plVar22 = plVar17;
      if (plVar38 < plVar17) goto LAB_0081db48;
    }
    do {
      plVar34 = plVar17;
      plVar22 = plVar14;
      if ((plVar34 <= param_2) || (plVar22 <= plVar35)) break;
      plVar14 = (long *)((long)plVar22 + -1);
      plVar17 = (long *)((long)plVar34 + -1);
    } while (*(char *)((long)plVar22 + -1) == *(char *)((long)plVar34 + -1));
    plVar14 = (long *)((long)param_3 + 1);
    uVar30 = (uint)((long)plVar22 - (long)plVar35);
    iVar12 = uVar30 - 0xf;
    if (uVar30 < 0xf) {
      *(char *)param_3 = (char)(uVar30 << 4);
    }
    else {
      *(char *)param_3 = -0x10;
      if (0xfe < iVar12) {
        if (0x1fc < iVar12) {
          iVar12 = 0x1fd;
        }
        iVar19 = (int)plVar22 + 0xef;
        memset(plVar14,0xff,(ulong)((uint)((iVar19 - (int)plVar35) - iVar12) / 0xff + 1));
        iVar19 = iVar19 - iVar12;
        uVar36 = (ulong)(uint)(iVar19 - (int)plVar35);
        plVar14 = (long *)((long)param_3 + uVar36 / 0xff + 2);
        iVar12 = ((int)plVar22 - iVar19) + (uint)(uVar36 * 0x8080808081 >> 0x27) + -0x10e;
      }
      *(char *)plVar14 = (char)iVar12;
      plVar14 = (long *)((long)plVar14 + 1);
    }
    plVar17 = (long *)((long)plVar14 + ((long)plVar22 - (long)plVar35 & 0xffffffffU));
    plVar16 = plVar14 + 1;
    plVar29 = plVar17;
    if (plVar17 <= plVar16) {
      plVar29 = plVar16;
    }
    pcVar1 = (char *)(~(ulong)plVar14 + (long)plVar29);
    psVar13 = param_3;
    if ((char *)0x37 < pcVar1) {
      plVar29 = plVar17;
      if (plVar17 <= plVar16) {
        plVar29 = plVar16;
      }
      uVar36 = (ulong)(~(ulong)plVar14 + (long)plVar29) & 0xfffffffffffffff8;
      if (plVar14 < (long *)((long)plVar35 + uVar36 + 8)) {
        if (plVar35 < (long *)((long)plVar16 + uVar36)) goto LAB_0081ef00;
      }
      uVar36 = ((ulong)pcVar1 >> 3) + 1;
      uVar23 = uVar36 & 0x3ffffffffffffff8;
      uVar21 = (uVar23 - 8 >> 3) + 1;
      lVar28 = 0;
      if (uVar23 - 8 != 0) {
        lVar27 = -(uVar21 & 0x3ffffffffffffffe);
        plVar16 = plVar14 + 8;
        plVar29 = plVar35 + 8;
        do {
          lVar39 = plVar29[-8];
          lVar41 = plVar29[-5];
          lVar40 = plVar29[-6];
          lVar28 = lVar28 + 0x10;
          lVar27 = lVar27 + 2;
          lVar43 = plVar29[-3];
          lVar42 = plVar29[-4];
          lVar45 = plVar29[-1];
          lVar44 = plVar29[-2];
          plVar16[-7] = plVar29[-7];
          plVar16[-8] = lVar39;
          plVar16[-5] = lVar41;
          plVar16[-6] = lVar40;
          plVar16[-3] = lVar43;
          plVar16[-4] = lVar42;
          plVar16[-1] = lVar45;
          plVar16[-2] = lVar44;
          lVar39 = *plVar29;
          lVar41 = plVar29[3];
          lVar40 = plVar29[2];
          lVar43 = plVar29[5];
          lVar42 = plVar29[4];
          lVar45 = plVar29[7];
          lVar44 = plVar29[6];
          plVar16[1] = plVar29[1];
          *plVar16 = lVar39;
          plVar16[3] = lVar41;
          plVar16[2] = lVar40;
          plVar29 = plVar29 + 0x10;
          plVar16[5] = lVar43;
          plVar16[4] = lVar42;
          plVar16[7] = lVar45;
          plVar16[6] = lVar44;
          plVar16 = plVar16 + 0x10;
        } while (lVar27 != 0);
      }
      if ((uVar21 & 1) != 0) {
        plVar16 = plVar35 + lVar28;
        plVar29 = plVar14 + lVar28;
        lVar28 = *plVar16;
        lVar39 = plVar16[3];
        lVar27 = plVar16[2];
        lVar41 = plVar16[5];
        lVar40 = plVar16[4];
        lVar43 = plVar16[7];
        lVar42 = plVar16[6];
        plVar29[1] = plVar16[1];
        *plVar29 = lVar28;
        plVar29[3] = lVar39;
        plVar29[2] = lVar27;
        plVar29[5] = lVar41;
        plVar29[4] = lVar40;
        plVar29[7] = lVar43;
        plVar29[6] = lVar42;
      }
      if (uVar36 == uVar23) goto LAB_0081ef10;
      plVar14 = plVar14 + uVar23;
      plVar35 = plVar35 + uVar23;
    }
LAB_0081ef00:
    do {
      plVar16 = plVar14 + 1;
      *plVar14 = *plVar35;
      plVar14 = plVar16;
      plVar35 = plVar35 + 1;
    } while (plVar16 < plVar17);
LAB_0081ef10:
    do {
      puVar3 = (ulong *)((long)plVar22 + 4);
      puVar26 = (ulong *)((long)plVar34 + 4);
      param_3 = (short *)((long)plVar17 + 2);
      *(short *)plVar17 = (short)plVar22 - (short)plVar34;
      if (puVar3 < puVar33) {
        uVar36 = *puVar3 ^ *puVar26;
        if (uVar36 == 0) {
          puVar26 = (ulong *)((long)plVar34 + 0xc);
          puVar24 = (ulong *)((long)plVar22 + 0xc);
          goto LAB_0081ef54;
        }
        uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
        uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
        uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
        uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
        uVar36 = (ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3;
      }
      else {
        puVar24 = puVar3;
LAB_0081ef54:
        for (; puVar24 < puVar33; puVar24 = puVar24 + 1) {
          uVar36 = *puVar24 ^ *puVar26;
          if (uVar36 != 0) {
            uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
            uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
            uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
            uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
            uVar36 = (ulong)(uint)(((int)puVar24 +
                                   (int)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3)) -
                                  (int)puVar3);
            goto LAB_0081ef8c;
          }
          puVar26 = puVar26 + 1;
        }
        if (puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 8))) {
          if ((int)*puVar26 == (int)*puVar24) {
            puVar24 = (ulong *)((long)puVar24 + 4);
            puVar26 = (ulong *)((long)puVar26 + 4);
          }
        }
        if (puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 6))) {
          if ((short)*puVar26 == (short)*puVar24) {
            puVar24 = (ulong *)((long)puVar24 + 2);
            puVar26 = (ulong *)((long)puVar26 + 2);
          }
        }
        puVar25 = puVar24;
        if ((puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 5))) &&
           (puVar25 = (ulong *)((long)puVar24 + 1), (char)*puVar26 != (char)*puVar24)) {
          puVar25 = puVar24;
        }
        uVar36 = (ulong)(uint)((int)puVar25 - (int)puVar3);
      }
LAB_0081ef8c:
      plVar35 = (long *)((long)plVar22 + uVar36 + 4);
      uVar20 = (uint)uVar36;
      uVar30 = uVar20 - 0xf;
      if (uVar20 < 0xf) {
        *(char *)psVar13 = (char)*psVar13 + (char)uVar36;
      }
      else {
        *(char *)psVar13 = (char)*psVar13 + '\x0f';
        param_3[0] = -1;
        param_3[1] = -1;
        if (0x3fb < uVar30) {
          uVar7 = ((uVar20 - 0x40b) / 0x3fc) * 4;
          memset((short *)((long)plVar17 + 6),0xff,(ulong)(uVar7 + 4));
          uVar30 = (uVar20 - 0x40b) % 0x3fc;
          param_3 = (short *)((long)plVar17 + 6 + (ulong)uVar7);
        }
        pcVar1 = (char *)((long)param_3 + (ulong)(uVar30 & 0xffff) / 0xff);
        param_3 = (short *)(pcVar1 + 1);
        *pcVar1 = (char)uVar30 + (char)((uVar30 & 0xffff) / 0xff);
      }
      if (plVar38 <= plVar35) break;
      piVar15 = (int *)((long)plVar22 + uVar36 + 2);
      *(short *)((long)param_1 + (ulong)((uint)(*piVar15 * -0x61c8864f) >> 0x13) * 2) =
           (short)piVar15 - sVar11;
      lVar28 = (ulong)((uint)((int)*plVar35 * -0x61c8864f) >> 0x13) * 2;
      uVar6 = *(ushort *)((long)param_1 + lVar28);
      *(short *)((long)param_1 + lVar28) = (short)plVar35 - sVar11;
      plVar34 = (long *)(lVar37 + (ulong)uVar6);
      if ((int)*plVar34 != (int)*plVar35) goto LAB_0081f114;
      plVar17 = (long *)((long)param_3 + 1);
      *(char *)param_3 = '\0';
      plVar22 = plVar35;
      psVar13 = param_3;
    } while( true );
  }
LAB_0081db48:
  lVar37 = (ulong)param_4 - (long)plVar35;
joined_r0x0081e678:
  puVar31 = (undefined1 *)((long)param_2 + lVar37);
  if (puVar31 < (undefined1 *)0xf) {
LAB_0081e748:
    *(char *)param_3 = (char)((int)puVar31 << 4);
  }
  else {
    puVar32 = puVar31 + -0xf;
    psVar13 = (short *)((long)param_3 + 1);
    *(char *)param_3 = -0x10;
    if ((undefined1 *)0xfe < puVar32) {
      puVar32 = puVar31 + -0x10e;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = puVar32;
      uVar36 = SUB168(auVar9 * ZEXT816(0x8080808080808081),8);
LAB_0081e718:
      uVar36 = uVar36 >> 7;
      memset(psVar13,0xff,uVar36 + 1);
      psVar13 = (short *)((long)param_3 + uVar36 + 2);
      puVar32 = puVar32 + uVar36 * -0xff;
    }
LAB_0081e738:
    *(char *)psVar13 = (char)puVar32;
    param_3 = psVar13;
  }
  memcpy((char *)((long)param_3 + 1),plVar35,(size_t)puVar31);
  return ((int)(char *)((long)param_3 + 1) + (int)puVar31) - iVar18;
LAB_0081ec48:
  plVar14 = (long *)((long)plVar22 + (ulong)uVar30 + 5);
  plVar22 = (long *)((long)plVar22 + (ulong)uVar30 + 6);
  if ((long *)((long)param_2 + ((ulong)param_4 - 0xc)) < plVar14) goto LAB_0081da58;
  goto LAB_0081e7e8;
  while( true ) {
    plVar14 = (long *)((long)plVar22 + -1);
    plVar17 = (long *)((long)plVar34 + -1);
    if (*(char *)((long)plVar22 + -1) != *(char *)((long)plVar34 + -1)) break;
LAB_0081e200:
    plVar34 = plVar17;
    plVar22 = plVar14;
    if ((plVar34 <= param_2) || (plVar22 <= plVar35)) break;
  }
  uVar36 = (long)plVar22 - (long)plVar35 & 0xffffffff;
  if (pcVar1 < (char *)((long)param_3 + uVar36 / 0xff + uVar36 + 9)) goto LAB_0081e6d0;
  plVar14 = (long *)((long)param_3 + 1);
  uVar30 = (uint)((long)plVar22 - (long)plVar35);
  iVar19 = uVar30 - 0xf;
  if (uVar30 < 0xf) {
    *(char *)param_3 = (char)(uVar30 << 4);
  }
  else {
    *(char *)param_3 = -0x10;
    if (0xfe < iVar19) {
      if (0x1fc < iVar19) {
        iVar19 = 0x1fd;
      }
      iVar2 = (int)plVar22 + 0xef;
      memset(plVar14,0xff,(ulong)((uint)((iVar2 - (int)plVar35) - iVar19) / 0xff + 1));
      iVar2 = iVar2 - iVar19;
      uVar21 = (ulong)(uint)(iVar2 - (int)plVar35);
      plVar14 = (long *)((long)param_3 + uVar21 / 0xff + 2);
      iVar19 = ((int)plVar22 - iVar2) + (uint)(uVar21 * 0x8080808081 >> 0x27) + -0x10e;
    }
    *(char *)plVar14 = (char)iVar19;
    plVar14 = (long *)((long)plVar14 + 1);
  }
  plVar16 = (long *)((long)plVar14 + uVar36);
  plVar17 = plVar14 + 1;
  plVar29 = plVar16;
  if (plVar16 <= plVar17) {
    plVar29 = plVar17;
  }
  pcVar5 = (char *)(~(ulong)plVar14 + (long)plVar29);
  if ((char *)0x37 < pcVar5) {
    plVar29 = plVar16;
    if (plVar16 <= plVar17) {
      plVar29 = plVar17;
    }
    uVar36 = (ulong)(~(ulong)plVar14 + (long)plVar29) & 0xfffffffffffffff8;
    if (plVar14 < (long *)((long)plVar35 + uVar36 + 8)) {
      if (plVar35 < (long *)((long)plVar17 + uVar36)) goto LAB_0081e3ec;
    }
    uVar36 = ((ulong)pcVar5 >> 3) + 1;
    uVar23 = uVar36 & 0x3ffffffffffffff8;
    uVar21 = (uVar23 - 8 >> 3) + 1;
    lVar28 = 0;
    if (uVar23 - 8 != 0) {
      lVar27 = -(uVar21 & 0x3ffffffffffffffe);
      plVar17 = plVar14 + 8;
      plVar29 = plVar35 + 8;
      do {
        lVar39 = plVar29[-8];
        lVar41 = plVar29[-5];
        lVar40 = plVar29[-6];
        lVar28 = lVar28 + 0x10;
        lVar27 = lVar27 + 2;
        lVar43 = plVar29[-3];
        lVar42 = plVar29[-4];
        lVar45 = plVar29[-1];
        lVar44 = plVar29[-2];
        plVar17[-7] = plVar29[-7];
        plVar17[-8] = lVar39;
        plVar17[-5] = lVar41;
        plVar17[-6] = lVar40;
        plVar17[-3] = lVar43;
        plVar17[-4] = lVar42;
        plVar17[-1] = lVar45;
        plVar17[-2] = lVar44;
        lVar39 = *plVar29;
        lVar41 = plVar29[3];
        lVar40 = plVar29[2];
        lVar43 = plVar29[5];
        lVar42 = plVar29[4];
        lVar45 = plVar29[7];
        lVar44 = plVar29[6];
        plVar17[1] = plVar29[1];
        *plVar17 = lVar39;
        plVar17[3] = lVar41;
        plVar17[2] = lVar40;
        plVar29 = plVar29 + 0x10;
        plVar17[5] = lVar43;
        plVar17[4] = lVar42;
        plVar17[7] = lVar45;
        plVar17[6] = lVar44;
        plVar17 = plVar17 + 0x10;
      } while (lVar27 != 0);
    }
    if ((uVar21 & 1) != 0) {
      plVar17 = plVar35 + lVar28;
      plVar29 = plVar14 + lVar28;
      lVar28 = *plVar17;
      lVar39 = plVar17[3];
      lVar27 = plVar17[2];
      lVar41 = plVar17[5];
      lVar40 = plVar17[4];
      lVar43 = plVar17[7];
      lVar42 = plVar17[6];
      plVar29[1] = plVar17[1];
      *plVar29 = lVar28;
      plVar29[3] = lVar39;
      plVar29[2] = lVar27;
      plVar29[5] = lVar41;
      plVar29[4] = lVar40;
      plVar29[7] = lVar43;
      plVar29[6] = lVar42;
    }
    if (uVar36 == uVar23) goto LAB_0081e3fc;
    plVar14 = plVar14 + uVar23;
    plVar35 = plVar35 + uVar23;
  }
LAB_0081e3ec:
  do {
    plVar17 = plVar14 + 1;
    *plVar14 = *plVar35;
    plVar14 = plVar17;
    plVar35 = plVar35 + 1;
  } while (plVar17 < plVar16);
LAB_0081e3fc:
  do {
    puVar3 = (ulong *)((long)plVar22 + 4);
    puVar26 = (ulong *)((long)plVar34 + 4);
    psVar13 = (short *)((long)plVar16 + 2);
    *(short *)plVar16 = (short)plVar22 - (short)plVar34;
    if (puVar3 < puVar33) {
      uVar36 = *puVar3 ^ *puVar26;
      if (uVar36 == 0) {
        puVar26 = (ulong *)((long)plVar34 + 0xc);
        puVar24 = (ulong *)((long)plVar22 + 0xc);
        goto LAB_0081e448;
      }
      uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
      uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
      uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
      uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
      uVar30 = (uint)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3);
    }
    else {
      puVar24 = puVar3;
LAB_0081e448:
      for (; puVar24 < puVar33; puVar24 = puVar24 + 1) {
        uVar36 = *puVar24 ^ *puVar26;
        if (uVar36 != 0) {
          uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
          uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
          uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
          uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
          uVar30 = ((int)puVar24 + (int)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3)) -
                   (int)puVar3;
          goto LAB_0081e480;
        }
        puVar26 = puVar26 + 1;
      }
      if (puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 8))) {
        if ((int)*puVar26 == (int)*puVar24) {
          puVar24 = (ulong *)((long)puVar24 + 4);
          puVar26 = (ulong *)((long)puVar26 + 4);
        }
      }
      if (puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 6))) {
        if ((short)*puVar26 == (short)*puVar24) {
          puVar24 = (ulong *)((long)puVar24 + 2);
          puVar26 = (ulong *)((long)puVar26 + 2);
        }
      }
      puVar25 = puVar24;
      if ((puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 5))) &&
         (puVar25 = (ulong *)((long)puVar24 + 1), (char)*puVar26 != (char)*puVar24)) {
        puVar25 = puVar24;
      }
      uVar30 = (int)puVar25 - (int)puVar3;
    }
LAB_0081e480:
    if (pcVar1 < (char *)((long)plVar16 + (ulong)(uVar30 + 0xf0) / 0xff + 8)) {
      return 0;
    }
    plVar35 = (long *)((long)plVar22 + (ulong)uVar30 + 4);
    uVar20 = uVar30 - 0xf;
    if (uVar30 < 0xf) {
      *(char *)param_3 = (char)*param_3 + (char)uVar30;
      param_3 = psVar13;
    }
    else {
      *(char *)param_3 = (char)*param_3 + '\x0f';
      psVar13[0] = -1;
      psVar13[1] = -1;
      if (0x3fb < uVar20) {
        uVar7 = ((uVar30 - 0x40b) / 0x3fc) * 4;
        memset((short *)((long)plVar16 + 6),0xff,(ulong)(uVar7 + 4));
        uVar20 = (uVar30 - 0x40b) % 0x3fc;
        psVar13 = (short *)((long)plVar16 + 6 + (ulong)uVar7);
      }
      pcVar5 = (char *)((long)psVar13 + (ulong)(uVar20 & 0xffff) / 0xff);
      param_3 = (short *)(pcVar5 + 1);
      *pcVar5 = (char)uVar20 + (char)((uVar20 & 0xffff) / 0xff);
    }
    if (plVar38 <= plVar35) goto LAB_0081e6a4;
    plVar14 = (long *)((long)plVar22 + (ulong)uVar30 + 2);
    *(int *)((long)param_1 + ((ulong)(*plVar14 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
         (int)plVar14 - iVar12;
    uVar36 = (ulong)(*plVar35 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
    uVar20 = *(uint *)((long)param_1 + uVar36);
    uVar7 = (int)plVar35 - iVar12;
    *(uint *)((long)param_1 + uVar36) = uVar7;
    if ((uVar20 + 0xffff < uVar7) ||
       (plVar34 = (long *)(lVar37 + (ulong)uVar20), (int)*plVar34 != (int)*plVar35)) break;
    plVar16 = (long *)((long)param_3 + 1);
    *(char *)param_3 = '\0';
    plVar22 = plVar35;
  } while( true );
  plVar14 = (long *)((long)plVar22 + (ulong)uVar30 + 5);
  plVar22 = (long *)((long)plVar22 + (ulong)uVar30 + 6);
  if ((long *)((long)param_2 + ((ulong)param_4 - 0xc)) < plVar14) goto LAB_0081e6a4;
  goto LAB_0081e198;
LAB_0081e6a4:
  puVar31 = (undefined1 *)((long)param_2 + ((ulong)param_4 - (long)plVar35));
  if (pcVar1 < (char *)((long)param_3 + (long)(puVar31 + (ulong)(puVar31 + 0xf0) / 0xff + 1))) {
    return 0;
  }
  puVar32 = puVar31 + -0xf;
  if (puVar31 < (undefined1 *)0xf) goto LAB_0081e748;
  psVar13 = (short *)((long)param_3 + 1);
  *(char *)param_3 = -0x10;
  if ((undefined1 *)0xfe < puVar32) {
    puVar32 = puVar31 + -0x10e;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = puVar32;
    uVar36 = SUB168(auVar10 * ZEXT816(0x8080808080808081),8);
    goto LAB_0081e718;
  }
  goto LAB_0081e738;
  while( true ) {
    plVar14 = (long *)((long)plVar22 + -1);
    plVar17 = (long *)((long)plVar34 + -1);
    if (*(char *)((long)plVar22 + -1) != *(char *)((long)plVar34 + -1)) break;
LAB_0081dd94:
    plVar34 = plVar17;
    plVar22 = plVar14;
    if ((plVar34 <= param_2) || (plVar22 <= plVar35)) break;
  }
  plVar14 = (long *)((long)param_3 + 1);
  uVar30 = (uint)((long)plVar22 - (long)plVar35);
  iVar19 = uVar30 - 0xf;
  if (uVar30 < 0xf) {
    *(char *)param_3 = (char)(uVar30 << 4);
  }
  else {
    *(char *)param_3 = -0x10;
    if (0xfe < iVar19) {
      if (0x1fc < iVar19) {
        iVar19 = 0x1fd;
      }
      iVar2 = (int)plVar22 + 0xef;
      memset(plVar14,0xff,(ulong)((uint)((iVar2 - (int)plVar35) - iVar19) / 0xff + 1));
      iVar2 = iVar2 - iVar19;
      uVar36 = (ulong)(uint)(iVar2 - (int)plVar35);
      plVar14 = (long *)((long)param_3 + uVar36 / 0xff + 2);
      iVar19 = ((int)plVar22 - iVar2) + (uint)(uVar36 * 0x8080808081 >> 0x27) + -0x10e;
    }
    *(char *)plVar14 = (char)iVar19;
    plVar14 = (long *)((long)plVar14 + 1);
  }
  plVar17 = (long *)((long)plVar14 + ((long)plVar22 - (long)plVar35 & 0xffffffffU));
  plVar16 = plVar14 + 1;
  plVar29 = plVar17;
  if (plVar17 <= plVar16) {
    plVar29 = plVar16;
  }
  pcVar1 = (char *)(~(ulong)plVar14 + (long)plVar29);
  if ((char *)0x37 < pcVar1) {
    plVar29 = plVar17;
    if (plVar17 <= plVar16) {
      plVar29 = plVar16;
    }
    uVar36 = (ulong)(~(ulong)plVar14 + (long)plVar29) & 0xfffffffffffffff8;
    if (plVar14 < (long *)((long)plVar35 + uVar36 + 8)) {
      if (plVar35 < (long *)((long)plVar16 + uVar36)) goto LAB_0081df50;
    }
    uVar36 = ((ulong)pcVar1 >> 3) + 1;
    uVar23 = uVar36 & 0x3ffffffffffffff8;
    uVar21 = (uVar23 - 8 >> 3) + 1;
    lVar28 = 0;
    if (uVar23 - 8 != 0) {
      lVar27 = -(uVar21 & 0x3ffffffffffffffe);
      plVar16 = plVar14 + 8;
      plVar29 = plVar35 + 8;
      do {
        lVar39 = plVar29[-8];
        lVar41 = plVar29[-5];
        lVar40 = plVar29[-6];
        lVar28 = lVar28 + 0x10;
        lVar27 = lVar27 + 2;
        lVar43 = plVar29[-3];
        lVar42 = plVar29[-4];
        lVar45 = plVar29[-1];
        lVar44 = plVar29[-2];
        plVar16[-7] = plVar29[-7];
        plVar16[-8] = lVar39;
        plVar16[-5] = lVar41;
        plVar16[-6] = lVar40;
        plVar16[-3] = lVar43;
        plVar16[-4] = lVar42;
        plVar16[-1] = lVar45;
        plVar16[-2] = lVar44;
        lVar39 = *plVar29;
        lVar41 = plVar29[3];
        lVar40 = plVar29[2];
        lVar43 = plVar29[5];
        lVar42 = plVar29[4];
        lVar45 = plVar29[7];
        lVar44 = plVar29[6];
        plVar16[1] = plVar29[1];
        *plVar16 = lVar39;
        plVar16[3] = lVar41;
        plVar16[2] = lVar40;
        plVar29 = plVar29 + 0x10;
        plVar16[5] = lVar43;
        plVar16[4] = lVar42;
        plVar16[7] = lVar45;
        plVar16[6] = lVar44;
        plVar16 = plVar16 + 0x10;
      } while (lVar27 != 0);
    }
    if ((uVar21 & 1) != 0) {
      plVar16 = plVar35 + lVar28;
      plVar29 = plVar14 + lVar28;
      lVar28 = *plVar16;
      lVar39 = plVar16[3];
      lVar27 = plVar16[2];
      lVar41 = plVar16[5];
      lVar40 = plVar16[4];
      lVar43 = plVar16[7];
      lVar42 = plVar16[6];
      plVar29[1] = plVar16[1];
      *plVar29 = lVar28;
      plVar29[3] = lVar39;
      plVar29[2] = lVar27;
      plVar29[5] = lVar41;
      plVar29[4] = lVar40;
      plVar29[7] = lVar43;
      plVar29[6] = lVar42;
    }
    if (uVar36 == uVar23) goto LAB_0081df60;
    plVar14 = plVar14 + uVar23;
    plVar35 = plVar35 + uVar23;
  }
LAB_0081df50:
  do {
    plVar16 = plVar14 + 1;
    *plVar14 = *plVar35;
    plVar14 = plVar16;
    plVar35 = plVar35 + 1;
  } while (plVar16 < plVar17);
LAB_0081df60:
  do {
    puVar3 = (ulong *)((long)plVar22 + 4);
    puVar26 = (ulong *)((long)plVar34 + 4);
    psVar13 = (short *)((long)plVar17 + 2);
    *(short *)plVar17 = (short)plVar22 - (short)plVar34;
    if (puVar3 < puVar33) {
      uVar36 = *puVar3 ^ *puVar26;
      if (uVar36 == 0) {
        puVar26 = (ulong *)((long)plVar34 + 0xc);
        puVar24 = (ulong *)((long)plVar22 + 0xc);
        goto LAB_0081dfac;
      }
      uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
      uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
      uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
      uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
      uVar36 = (ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3;
    }
    else {
      puVar24 = puVar3;
LAB_0081dfac:
      for (; puVar24 < puVar33; puVar24 = puVar24 + 1) {
        uVar36 = *puVar24 ^ *puVar26;
        if (uVar36 != 0) {
          uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
          uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
          uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
          uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
          uVar36 = (ulong)(uint)(((int)puVar24 +
                                 (int)((ulong)LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) >> 3)) -
                                (int)puVar3);
          goto LAB_0081dfe4;
        }
        puVar26 = puVar26 + 1;
      }
      if (puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 8))) {
        if ((int)*puVar26 == (int)*puVar24) {
          puVar24 = (ulong *)((long)puVar24 + 4);
          puVar26 = (ulong *)((long)puVar26 + 4);
        }
      }
      if (puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 6))) {
        if ((short)*puVar26 == (short)*puVar24) {
          puVar24 = (ulong *)((long)puVar24 + 2);
          puVar26 = (ulong *)((long)puVar26 + 2);
        }
      }
      puVar25 = puVar24;
      if ((puVar24 < (ulong *)((long)param_2 + ((ulong)param_4 - 5))) &&
         (puVar25 = (ulong *)((long)puVar24 + 1), (char)*puVar26 != (char)*puVar24)) {
        puVar25 = puVar24;
      }
      uVar36 = (ulong)(uint)((int)puVar25 - (int)puVar3);
    }
LAB_0081dfe4:
    plVar35 = (long *)((long)plVar22 + uVar36 + 4);
    uVar20 = (uint)uVar36;
    uVar30 = uVar20 - 0xf;
    if (uVar20 < 0xf) {
      *(char *)param_3 = (char)*param_3 + (char)uVar36;
      param_3 = psVar13;
    }
    else {
      *(char *)param_3 = (char)*param_3 + '\x0f';
      psVar13[0] = -1;
      psVar13[1] = -1;
      if (0x3fb < uVar30) {
        uVar7 = ((uVar20 - 0x40b) / 0x3fc) * 4;
        memset((short *)((long)plVar17 + 6),0xff,(ulong)(uVar7 + 4));
        uVar30 = (uVar20 - 0x40b) % 0x3fc;
        psVar13 = (short *)((long)plVar17 + 6 + (ulong)uVar7);
      }
      pcVar1 = (char *)((long)psVar13 + (ulong)(uVar30 & 0xffff) / 0xff);
      param_3 = (short *)(pcVar1 + 1);
      *pcVar1 = (char)uVar30 + (char)((uVar30 & 0xffff) / 0xff);
    }
    if (plVar38 <= plVar35) goto LAB_0081e66c;
    plVar14 = (long *)((long)plVar22 + uVar36 + 2);
    *(int *)((long)param_1 + ((ulong)(*plVar14 * -0x30e4432345000000) >> 0x32 & 0x3ffc)) =
         (int)plVar14 - iVar12;
    uVar21 = (ulong)(*plVar35 * -0x30e4432345000000) >> 0x32 & 0x3ffc;
    uVar30 = *(uint *)((long)param_1 + uVar21);
    uVar20 = (int)plVar35 - iVar12;
    *(uint *)((long)param_1 + uVar21) = uVar20;
    if ((uVar30 + 0xffff < uVar20) ||
       (plVar34 = (long *)(lVar37 + (ulong)uVar30), (int)*plVar34 != (int)*plVar35)) break;
    plVar17 = (long *)((long)param_3 + 1);
    *(char *)param_3 = '\0';
    plVar22 = plVar35;
  } while( true );
  plVar14 = (long *)((long)plVar22 + uVar36 + 5);
  plVar22 = (long *)((long)plVar22 + uVar36 + 6);
  if ((long *)((long)param_2 + ((ulong)param_4 - 0xc)) < plVar14) goto LAB_0081e66c;
  goto LAB_0081dd2c;
LAB_0081e66c:
  lVar37 = (ulong)param_4 - (long)plVar35;
  goto joined_r0x0081e678;
LAB_0081f114:
  plVar14 = (long *)((long)plVar22 + uVar36 + 5);
  plVar22 = (long *)((long)plVar22 + uVar36 + 6);
  if ((long *)((long)param_2 + ((ulong)param_4 - 0xc)) < plVar14) goto LAB_0081db48;
  goto LAB_0081ece4;
}


