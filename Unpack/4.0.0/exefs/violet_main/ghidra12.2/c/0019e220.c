/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0019e220; name: FUN_0019e220
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_0019e220(int *param_1,undefined8 *param_2,undefined8 param_3,long param_4,uint param_5,
                 long param_6,undefined8 param_7,long param_8,undefined4 *param_9,
                 undefined4 *param_10)

{
  uint uVar1;
  ulong *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  int iVar12;
  ulong *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte bVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  uint *puVar31;
  uint *puVar32;
  byte *pbVar33;
  byte *pbVar34;
  ulong uVar35;
  char *pcVar36;
  ulong uVar37;
  ulong *puVar38;
  long lVar39;
  long *plVar40;
  long lVar41;
  uint uVar42;
  long lVar43;
  long *plVar44;
  uint *puVar45;
  int iVar46;
  ulong *puVar47;
  uint uVar48;
  long lVar49;
  uint *puVar50;
  uint *__src;
  uint *puVar51;
  uint uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  int local_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int local_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  byte *local_100;
  byte *local_f8;
  byte *local_f0;
  byte *local_e8;
  byte *pbStack_e0;
  byte *local_d8;
  byte *pbStack_d0;
  byte *local_c8;
  byte *pbStack_c0;
  byte *local_b8;
  byte *pbStack_b0;
  int local_a8;
  int iStack_a4;
  uint local_a0;
  long local_98;
  uint local_90;
  uint local_8c;
  long local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  int iStack_70;
  int local_6c;
  
  *param_9 = 0xffffffff;
  *param_10 = 0x4e800000;
  if ((int)param_5 < 0x81) {
    return (long)(int)param_5;
  }
  uVar1 = (param_5 >> 1) + 8;
  uVar14 = param_5 >> 1 & 0x7ffffffc;
  iVar46 = *param_1;
  uVar52 = (uint)((ulong)param_5 * 0xaaaaaaab >> 0x20) & 0xfffffffe;
  plVar44 = *(long **)(param_1 + 8);
  iVar30 = param_5 + 8;
  iVar6 = 0;
  if (iVar46 != 0xb) {
    iVar6 = iVar30;
  }
  local_a8 = 0;
  iStack_a4 = 0;
  local_a0 = param_5;
  local_98 = param_4;
  FUN_00164c64(param_2 + 4,
               (long)(int)(param_5 + param_5 / 0x1d + uVar1 + uVar52 + uVar14 + iVar6 + 0x108),
               *param_2);
  local_118 = (undefined8 *)param_2[4];
  local_110 = local_118;
  local_108 = local_118;
  local_f0 = (byte *)((long)local_118 + (long)iVar30);
  if (iVar46 == 0xb) {
    local_100 = (byte *)0x0;
  }
  else {
    local_100 = local_f0;
    local_f0 = local_f0 + iVar30;
  }
  pbStack_e0 = local_f0 + uVar1;
  local_f8 = local_100;
  local_74 = 0;
  iStack_70 = 0;
  local_e8 = local_f0;
  local_7c = param_5;
  if (0xffff < (int)param_5) {
    local_7c = 0x10000;
  }
  pbStack_d0 = pbStack_e0 + uVar52;
  pbStack_c0 = pbStack_d0 + uVar14;
  local_6c = 0;
  local_78 = param_5 - local_7c;
  local_d8 = pbStack_e0;
  local_c8 = pbStack_d0;
  local_b8 = pbStack_c0;
  pbStack_b0 = pbStack_c0 + (ulong)param_5 / 0x1d;
  lVar21 = *(long *)(param_1 + 4);
  iVar30 = *(int *)(lVar21 + 4);
  local_198 = 0x2000000020;
  uStack_190 = 0x2000000020;
  if (iVar30 < 5) {
    iVar30 = 4;
  }
  local_188 = 0x2000000020;
  uStack_180 = 0x2000000020;
  local_178 = 0x2000000020;
  local_150 = iVar30;
  iStack_14c = iVar30;
  local_148 = iVar30;
  iStack_144 = iVar30;
  local_13c = iVar30;
  local_140 = iVar30;
  iVar6 = 0x40000000;
  if (*(int *)(lVar21 + 0x14) - 1U >> 0x1e == 0) {
    iVar6 = *(int *)(lVar21 + 0x14);
  }
  local_160 = 0xe;
  if (iVar46 != 0xb) {
    local_160 = 10;
  }
  local_170 = local_160 * 2 + -6;
  iStack_16c = local_170;
  iStack_15c = local_160;
  local_168 = local_160;
  iStack_164 = local_160;
  local_158 = iVar30;
  iStack_154 = iVar30;
  local_134 = iVar30;
  local_138 = iVar30;
  local_12c = iVar30;
  local_130 = iVar30;
  local_124 = iVar30;
  local_128 = iVar30;
  local_11c = iVar30;
  local_120 = iVar30;
  iVar20 = *(int *)(lVar21 + 0x40);
  if ((0 < iVar20) && (iVar20 < 0x20)) {
    iVar12 = *(int *)(lVar21 + 0x3c);
    iVar26 = iVar12;
    if (iVar12 < 0x21) {
      iVar26 = 0x20;
    }
    local_198 = CONCAT44(0x20,iVar26);
    if (iVar20 != 0x1f) {
      if (iVar12 < 0x21) {
        iVar12 = 0x20;
      }
      local_198 = CONCAT44(iVar12,iVar26);
      if (iVar20 < 0x1e) {
        uVar27 = 2;
        do {
          uVar37 = -(uVar27 >> 0x1f) & 0xfffffffc00000000 | uVar27 << 2;
          uVar1 = (int)uVar27 + 1;
          uVar27 = (ulong)uVar1;
          iVar26 = *(int *)((long)&local_198 + uVar37);
          if (iVar26 <= *(int *)(lVar21 + 0x3c)) {
            iVar26 = *(int *)(lVar21 + 0x3c);
          }
          *(int *)((long)&local_198 + uVar37) = iVar26;
        } while ((int)uVar1 <= 0x1f - iVar20);
      }
    }
  }
  uVar27 = (ulong)(param_8 == 0) * 8;
  if (iVar46 == 0xb) {
    local_110 = (undefined8 *)(param_6 + uVar27 + 3);
    local_108 = local_110;
  }
  iVar46 = 0;
  uVar1 = 8;
LAB_0019e53c:
  local_80 = (uint)uVar27;
  local_88 = local_98;
  local_8c = local_7c;
  local_90 = 0;
  uVar37 = uVar27;
  uVar28 = uVar27;
  do {
    puVar38 = (ulong *)(local_98 + (int)local_a0 + -0x10);
    if ((ulong *)(local_88 + (int)local_8c) <= puVar38) {
      puVar38 = (ulong *)(local_88 + (int)local_8c);
    }
    iVar20 = ((int)puVar38 - (int)param_4) + -5;
    __src = (uint *)(param_4 + uVar28);
    iStack_a4 = 0;
    if ((int)uVar37 < iVar20) {
      puVar51 = (uint *)(param_4 + iVar20);
      puVar47 = puVar38 + -1;
      plVar44[7] = (long)__src;
LAB_0019e5a4:
      pbVar23 = local_c8;
      pbVar24 = local_e8;
      lVar21 = (long)(int)uVar1;
      lVar49 = -lVar21;
      puVar31 = __src;
      do {
        puVar45 = puVar31;
        if ((long)puVar51 - (long)puVar45 < 2) goto LAB_001a0748;
        uVar52 = *puVar45;
        lVar43 = plVar44[4];
        uVar37 = (ulong)(*(long *)puVar45 * -0x485a9b9d00000000) >>
                 ((ulong)(uint)-*(int *)((long)plVar44 + 0x4c) & 0x3f);
        puVar31 = (uint *)((long)puVar45 + 1);
        lVar39 = *plVar44;
        Hint_Prefetch(lVar39 + ((ulong)(*(long *)puVar31 * -0x485a9b9d00000000) >>
                               ((ulong)(uint)-*(int *)((long)plVar44 + 0x4c) & 0x3f)) * 4,2,0,0);
        Hint_Prefetch(lVar43 + (ulong)((uint)((ulong)(*(long *)puVar31 * -0x30e44323485a9b9d) >>
                                             0x20) >> (ulong)(-(int)plVar44[10] & 0x1f)) * 4,0,0,0);
        uVar28 = (long)puVar45 - plVar44[6];
        uVar14 = *(uint *)((long)puVar45 + lVar49);
        iVar20 = (int)uVar28;
        if (uVar52 == uVar14) {
          puVar2 = (ulong *)(puVar45 + 1);
          puVar10 = (ulong *)((uint *)((long)puVar45 + lVar49) + 1);
          puVar11 = puVar2;
          if (puVar47 < puVar2) goto LAB_0019ed9c;
          uVar29 = *puVar10 ^ *puVar2;
          if (uVar29 != 0) goto LAB_0019ee4c;
          puVar13 = (ulong *)(puVar45 + 3);
          goto LAB_0019ee30;
        }
        uVar14 = uVar14 ^ uVar52;
        uVar14 = (uVar14 & 0xaaaaaaaa) >> 1 | (uVar14 & 0x55555555) << 1;
        uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        uVar7 = *(uint *)(lVar39 + uVar37 * 4);
        uVar17 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
        iVar26 = iVar30;
        if (0x3f < (long)puVar45 - (long)__src) {
          iVar26 = iVar30 + 1;
        }
        uVar42 = iVar20 - uVar7;
        uVar9 = (uint)((ulong)(*(long *)puVar45 * -0x30e44323485a9b9d) >> 0x20);
        uVar29 = (ulong)(uVar9 >> (ulong)(-(int)plVar44[10] & 0x1f));
        uVar14 = 0;
        if ((long)puVar45 - (long)__src < 0x40 || 0x17 < uVar17) {
          uVar14 = uVar17 >> 3;
        }
        if (uVar42 >> 0x10 == 0) {
          uVar17 = 0;
          uVar42 = uVar42 & 0xffff;
          if (uVar42 != 0) {
            uVar18 = 0;
            if ((int)uVar42 < iVar6) {
              puVar2 = (ulong *)(puVar45 + 1);
              lVar39 = (long)puVar38 - (long)puVar45;
              if (puVar2 <= puVar47) {
                uVar18 = 0;
                uVar17 = 0;
                iVar12 = 8;
                uVar16 = uVar7;
joined_r0x0019e914:
                if (8 < uVar42) {
                  puVar32 = (uint *)((long)puVar45 - (ulong)uVar42);
                  if ((*puVar32 == uVar52) &&
                     (((int)uVar18 < 4 ||
                      ((lVar41 = (long)(int)uVar18, lVar41 < lVar39 &&
                       (*(char *)((long)puVar45 + lVar41) == *(char *)((long)puVar32 + lVar41)))))))
                  {
                    puVar10 = (ulong *)(puVar32 + 1);
                    uVar35 = *puVar10 ^ *puVar2;
                    if (uVar35 == 0) {
                      puVar11 = (ulong *)(puVar45 + 3);
                      do {
                        puVar13 = puVar11;
                        if (puVar47 < puVar13) {
                          uVar35 = (long)puVar13 - (long)puVar2;
                          puVar11 = (ulong *)((long)puVar2 + (long)(int)uVar35);
                          if (puVar38 <= puVar11) goto LAB_0019e9f0;
                          uVar35 = (long)(int)uVar35;
                          goto LAB_0019ea34;
                        }
                        uVar35 = *(ulong *)((long)puVar13 + ((long)puVar10 - (long)puVar2)) ^
                                 *puVar13;
                        puVar11 = puVar13 + 1;
                      } while (uVar35 == 0);
                    }
                    else {
                      puVar13 = puVar2;
                    }
                    uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1
                    ;
                    uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2
                    ;
                    uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                    uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar35 & 0xffff0000ffff) << 0x10;
                    uVar35 = (ulong)(((int)puVar13 - (int)puVar2) +
                                    ((uint)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3));
                    goto LAB_0019e9f0;
                  }
                  uVar15 = 0;
                  goto LAB_0019e920;
                }
                goto LAB_0019e938;
              }
              if (puVar2 < puVar38) {
                uVar18 = 0;
                uVar17 = 0;
                iVar12 = 8;
                uVar16 = uVar7;
                do {
                  if (8 < uVar42) {
                    puVar32 = (uint *)((long)puVar45 - (ulong)uVar42);
                    if ((*puVar32 == uVar52) &&
                       (((int)uVar18 < 4 ||
                        ((lVar41 = (long)(int)uVar18, lVar41 < lVar39 &&
                         (*(char *)((long)puVar45 + lVar41) == *(char *)((long)puVar32 + lVar41)))))
                       )) {
                      uVar35 = 0;
                      puVar10 = puVar2;
                      do {
                        if ((char)*puVar10 != *(char *)((long)puVar32 + uVar35 + 4))
                        goto LAB_0019e814;
                        uVar15 = (int)uVar35 + 1;
                        uVar35 = (ulong)(int)uVar15;
                        puVar10 = (ulong *)((long)puVar2 + uVar35);
                      } while (puVar10 < puVar38);
                      uVar35 = (ulong)uVar15;
LAB_0019e814:
                      uVar15 = (int)uVar35 + 4;
                      if ((int)uVar15 <= (int)uVar18) {
                        uVar15 = 0;
                      }
                    }
                    else {
                      uVar15 = 0;
                    }
                    iVar12 = iVar12 + -1;
                    if (iVar26 <= (int)uVar15) {
                      uVar18 = uVar15;
                      uVar17 = uVar42;
                    }
                    if (iVar12 < 1) break;
                  }
                  uVar16 = (uint)*(ushort *)(plVar44[2] + (ulong)(uVar16 & 0xffff) * 2);
                  uVar15 = iVar20 - uVar16 & 0xffff;
                  bVar8 = uVar42 < uVar15;
                  uVar42 = uVar15;
                } while (bVar8 && (int)uVar15 < iVar6);
              }
              else {
                uVar18 = 0;
                uVar17 = 0;
                iVar12 = 8;
                uVar16 = uVar7;
                do {
                  if (8 < uVar42) {
                    if ((*(uint *)((long)puVar45 - (ulong)uVar42) == uVar52) &&
                       ((uVar18 < 4 ||
                        ((lVar41 = (long)(int)uVar18, lVar41 < lVar39 &&
                         (*(char *)((long)puVar45 + lVar41) ==
                          *(char *)((long)((long)puVar45 - (ulong)uVar42) + lVar41))))))) {
                      uVar15 = (uint)(uVar18 < 4) << 2;
                    }
                    else {
                      uVar15 = 0;
                    }
                    iVar12 = iVar12 + -1;
                    if (iVar26 <= (int)uVar15) {
                      uVar18 = uVar15;
                      uVar17 = uVar42;
                    }
                    if (iVar12 < 1) break;
                  }
                  uVar16 = (uint)*(ushort *)(plVar44[2] + (ulong)(uVar16 & 0xffff) * 2);
                  uVar15 = iVar20 - uVar16 & 0xffff;
                  bVar8 = uVar42 < uVar15;
                  uVar42 = uVar15;
                } while (bVar8 && (int)uVar15 < iVar6);
              }
            }
            goto LAB_0019eb80;
          }
          uVar18 = 0;
          uVar16 = *(uint *)(lVar43 + uVar29 * 4);
joined_r0x0019e8f4:
          if (((uVar16 ^ uVar9) & 0x3f) != 0) goto LAB_0019eb90;
LAB_0019e860:
          uVar42 = iVar20 - (uVar16 >> 6);
          if ((((int)uVar42 < 8) || (iVar6 <= (int)uVar42)) ||
             (uVar52 != *(uint *)((long)puVar45 - (long)(int)uVar42))) goto LAB_0019eb90;
          puVar2 = (ulong *)(puVar45 + 1);
          puVar10 = (ulong *)((uint *)((long)puVar45 - (long)(int)uVar42) + 1);
          puVar11 = puVar2;
          if (puVar47 < puVar2) {
LAB_0019e898:
            uVar35 = (ulong)(int)((long)puVar11 - (long)puVar2);
            puVar13 = (ulong *)((long)puVar2 + uVar35);
            uVar29 = (long)puVar11 - (long)puVar2;
            if (puVar38 <= puVar13) goto LAB_0019ec78;
            do {
              uVar29 = uVar35;
              if ((char)*puVar13 != *(char *)((long)puVar10 + uVar35)) goto LAB_0019ec78;
              iVar12 = (int)uVar35;
              uVar35 = (ulong)(iVar12 + 1);
              puVar13 = (ulong *)((long)puVar2 + uVar35);
            } while (puVar13 < puVar38);
            uVar9 = iVar12 + 5;
          }
          else {
            uVar29 = *puVar10 ^ *puVar2;
            if (uVar29 == 0) {
              puVar13 = (ulong *)(puVar45 + 3);
              do {
                puVar11 = puVar13;
                if (puVar47 < puVar11) goto LAB_0019e898;
                uVar29 = *(ulong *)((long)puVar11 + ((long)puVar10 - (long)puVar2)) ^ *puVar11;
                puVar13 = puVar11 + 1;
              } while (uVar29 == 0);
            }
            uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar29 = (ulong)(((int)puVar11 - (int)puVar2) +
                            ((uint)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3));
LAB_0019ec78:
            uVar9 = (int)uVar29 + 4;
          }
          if ((uVar9 == 0) || ((int)uVar9 < *(int *)((long)&local_198 + LZCOUNT(uVar42) * 4)))
          goto LAB_0019eb90;
          if (uVar9 == uVar18) {
            bVar8 = (int)uVar42 < (int)uVar17;
          }
          else if (((int)(uVar42 | uVar17) < 0x10000) ||
                  ((int)uVar17 < 0x10000 == (int)uVar42 < 0x10000)) {
            bVar8 = (int)uVar18 < (int)uVar9;
          }
          else if ((int)uVar17 < 0x10000) {
            bVar8 = (int)(uVar18 + 5) < (int)uVar9;
          }
          else {
            bVar8 = (int)(uVar18 - 5) <= (int)uVar9;
          }
          if (!bVar8) {
            uVar9 = uVar18;
            uVar42 = uVar17;
          }
          uVar17 = uVar42;
          if (puVar45[-2] == uVar52) goto LAB_0019eb9c;
LAB_0019ed04:
          uVar52 = 0;
        }
        else {
          if ((int)uVar42 < iVar6) {
            if (*(uint *)((long)puVar45 - (long)(int)uVar42) == uVar52) {
              puVar2 = (ulong *)(puVar45 + 1);
              puVar10 = (ulong *)((uint *)((long)puVar45 - (long)(int)uVar42) + 1);
              puVar11 = puVar2;
              if (puVar47 < puVar2) {
LAB_0019e6c8:
                uVar22 = (ulong)(int)((long)puVar11 - (long)puVar2);
                puVar13 = (ulong *)((long)puVar2 + uVar22);
                uVar35 = (long)puVar11 - (long)puVar2;
                if (puVar38 <= puVar13) goto LAB_0019eb6c;
                do {
                  uVar35 = uVar22;
                  if ((char)*puVar13 != *(char *)((long)puVar10 + uVar22)) goto LAB_0019eb6c;
                  iVar12 = (int)uVar22;
                  uVar22 = (ulong)(iVar12 + 1);
                  puVar13 = (ulong *)((long)puVar2 + uVar22);
                } while (puVar13 < puVar38);
                uVar18 = iVar12 + 5;
              }
              else {
                uVar35 = *puVar10 ^ *puVar2;
                if (uVar35 == 0) {
                  puVar13 = (ulong *)(puVar45 + 3);
                  do {
                    puVar11 = puVar13;
                    if (puVar47 < puVar11) goto LAB_0019e6c8;
                    uVar35 = *(ulong *)((long)puVar11 + ((long)puVar10 - (long)puVar2)) ^ *puVar11;
                    puVar13 = puVar11 + 1;
                  } while (uVar35 == 0);
                }
                uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
                uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
                uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
                uVar35 = (ulong)(((int)puVar11 - (int)puVar2) +
                                ((uint)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3));
LAB_0019eb6c:
                uVar18 = (int)uVar35 + 4;
              }
              if ((int)uVar18 < iVar26) goto LAB_0019eb78;
            }
            else {
              uVar18 = 0;
              if (0 < iVar26) goto LAB_0019eb78;
            }
            if ((int)uVar18 < *(int *)((long)&local_198 + LZCOUNT(uVar42) * 4)) {
              uVar42 = 0;
              uVar18 = 0;
            }
            uVar16 = *(uint *)(lVar43 + uVar29 * 4);
            uVar17 = uVar42;
            goto joined_r0x0019e8f4;
          }
LAB_0019eb78:
          uVar17 = 0;
          uVar18 = 0;
LAB_0019eb80:
          uVar16 = *(uint *)(lVar43 + uVar29 * 4);
          if (((uVar16 ^ uVar9) & 0x3f) == 0) goto LAB_0019e860;
LAB_0019eb90:
          uVar9 = uVar18;
          if (puVar45[-2] != uVar52) goto LAB_0019ed04;
LAB_0019eb9c:
          puVar2 = (ulong *)(puVar45 + 1);
          puVar10 = puVar2;
          if (puVar47 < puVar2) {
LAB_0019ebb0:
            uVar29 = (long)puVar10 - (long)puVar2;
            puVar10 = (ulong *)((long)puVar2 + (long)(int)uVar29);
            if (puVar10 < puVar38) {
              uVar29 = (long)(int)uVar29;
              do {
                if ((char)*puVar10 != *(char *)((long)(puVar45 + -1) + uVar29)) goto LAB_0019ec3c;
                uVar52 = (int)uVar29 + 1;
                uVar29 = (ulong)(int)uVar52;
                puVar10 = (ulong *)((long)puVar2 + uVar29);
              } while (puVar10 < puVar38);
              uVar29 = (ulong)uVar52;
            }
          }
          else {
            uVar29 = *(ulong *)(puVar45 + -1) ^ *puVar2;
            if (uVar29 == 0) {
              puVar11 = (ulong *)(puVar45 + 3);
              do {
                puVar10 = puVar11;
                if (puVar47 < puVar10) goto LAB_0019ebb0;
                uVar29 = puVar10[-1] ^ *puVar10;
                puVar11 = puVar10 + 1;
              } while (uVar29 == 0);
            }
            uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar29 = (ulong)(((int)puVar10 - (int)puVar2) +
                            ((uint)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3));
          }
LAB_0019ec3c:
          uVar52 = (int)uVar29 + 4;
        }
        if ((int)uVar9 <= (int)uVar52 && iVar26 <= (int)uVar52) {
          uVar17 = 8;
        }
        *(short *)(plVar44[2] + ((ulong)*(uint *)(plVar44 + 9) & uVar28 & 0xffffffff) * 2) =
             (short)uVar7;
        *(int *)(*plVar44 + uVar37 * 4) = iVar20;
        if ((int)uVar9 <= (int)uVar52 && iVar26 <= (int)uVar52) {
          uVar9 = uVar52;
        }
        plVar44[7] = (long)puVar31;
        if ((1 < uVar14) &&
           (((int)uVar9 <= (int)(uVar14 + 1) ||
            (((int)uVar9 <= (int)(uVar14 + 4) && (0xffff < (int)uVar17)))))) {
          uVar17 = 0;
          break;
        }
        uVar14 = uVar9;
      } while (uVar9 == 0);
      goto joined_r0x0019edf0;
    }
LAB_001a0748:
    uVar37 = (local_88 + (int)local_8c) - (long)__src;
    if (0 < (long)uVar37) {
      memcpy(local_108,__src,uVar37);
      local_108 = (undefined8 *)((long)local_108 + uVar37);
      if (local_f8 != (byte *)0x0) {
        lVar21 = -(long)(int)uVar1;
        pbVar24 = local_f8;
        if ((long)uVar37 < 0x10) {
          uVar35 = uVar37 - 1;
          uVar28 = uVar37 & 3;
          uVar29 = uVar37;
joined_r0x001a089c:
          for (; uVar28 != 0; uVar28 = uVar28 - 1) {
            uVar29 = uVar29 - 1;
            *pbVar24 = (char)*__src - *(char *)((long)__src + lVar21);
            __src = (uint *)((long)__src + 1);
            pbVar24 = pbVar24 + 1;
          }
          if (2 < uVar35) {
            pcVar36 = (char *)((long)__src + 1);
            do {
              pcVar3 = pcVar36 + lVar21;
              uVar29 = uVar29 - 4;
              *pbVar24 = pcVar36[-1] - pcVar3[-1];
              pbVar24[1] = *pcVar36 - *pcVar3;
              pbVar24[2] = pcVar36[1] - pcVar3[1];
              pbVar24[3] = pcVar36[2] - pcVar3[2];
              pcVar36 = pcVar36 + 4;
              pbVar24 = pbVar24 + 4;
            } while (uVar29 != 0);
          }
        }
        else {
          uVar14 = ((uint)(uVar37 - 0x10 >> 4) & 0xfffffff) + 1;
          uVar28 = uVar37;
          if ((uVar14 & 3) != 0) {
            lVar49 = -((ulong)uVar14 & 3);
            pbVar23 = local_f8;
            puVar51 = __src;
            do {
              uVar54 = ((undefined8 *)((long)puVar51 + lVar21))[1];
              uVar53 = *(undefined8 *)((long)puVar51 + lVar21);
              uVar28 = uVar28 - 0x10;
              __src = puVar51 + 4;
              uVar56 = *(undefined8 *)(puVar51 + 2);
              uVar55 = *(undefined8 *)puVar51;
              pbVar24 = pbVar23 + 0x10;
              *(ulong *)(pbVar23 + 8) =
                   CONCAT17((char)((ulong)uVar56 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                            CONCAT16((char)((ulong)uVar56 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                                     CONCAT15((char)((ulong)uVar56 >> 0x28) -
                                              (char)((ulong)uVar54 >> 0x28),
                                              CONCAT14((char)((ulong)uVar56 >> 0x20) -
                                                       (char)((ulong)uVar54 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar56 >> 0x18) -
                                                                (char)((ulong)uVar54 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar56 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar54 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar56 >> 8) - (char)((ulong)uVar54 >> 8),
                                                  (char)uVar56 - (char)uVar54)))))));
              *(ulong *)pbVar23 =
                   CONCAT17((char)((ulong)uVar55 >> 0x38) - (char)((ulong)uVar53 >> 0x38),
                            CONCAT16((char)((ulong)uVar55 >> 0x30) - (char)((ulong)uVar53 >> 0x30),
                                     CONCAT15((char)((ulong)uVar55 >> 0x28) -
                                              (char)((ulong)uVar53 >> 0x28),
                                              CONCAT14((char)((ulong)uVar55 >> 0x20) -
                                                       (char)((ulong)uVar53 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar55 >> 0x18) -
                                                                (char)((ulong)uVar53 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar55 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar53 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar55 >> 8) - (char)((ulong)uVar53 >> 8),
                                                  (char)uVar55 - (char)uVar53)))))));
              bVar8 = lVar49 != -1;
              lVar49 = lVar49 + 1;
              pbVar23 = pbVar24;
              puVar51 = __src;
            } while (bVar8);
          }
          if (0x2f < uVar37 - 0x10) {
            lVar49 = 0;
            do {
              puVar4 = (undefined8 *)((long)__src + lVar49 + lVar21);
              puVar5 = (undefined8 *)((long)__src + lVar49);
              uVar54 = puVar4[1];
              uVar53 = *puVar4;
              uVar56 = puVar5[1];
              uVar55 = *puVar5;
              pbVar23 = (byte *)((long)pbVar24 + lVar49);
              lVar49 = lVar49 + 0x40;
              uVar28 = uVar28 - 0x40;
              *(ulong *)(pbVar23 + 8) =
                   CONCAT17((char)((ulong)uVar56 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                            CONCAT16((char)((ulong)uVar56 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                                     CONCAT15((char)((ulong)uVar56 >> 0x28) -
                                              (char)((ulong)uVar54 >> 0x28),
                                              CONCAT14((char)((ulong)uVar56 >> 0x20) -
                                                       (char)((ulong)uVar54 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar56 >> 0x18) -
                                                                (char)((ulong)uVar54 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar56 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar54 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar56 >> 8) - (char)((ulong)uVar54 >> 8),
                                                  (char)uVar56 - (char)uVar54)))))));
              *(ulong *)pbVar23 =
                   CONCAT17((char)((ulong)uVar55 >> 0x38) - (char)((ulong)uVar53 >> 0x38),
                            CONCAT16((char)((ulong)uVar55 >> 0x30) - (char)((ulong)uVar53 >> 0x30),
                                     CONCAT15((char)((ulong)uVar55 >> 0x28) -
                                              (char)((ulong)uVar53 >> 0x28),
                                              CONCAT14((char)((ulong)uVar55 >> 0x20) -
                                                       (char)((ulong)uVar53 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar55 >> 0x18) -
                                                                (char)((ulong)uVar53 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar55 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar53 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar55 >> 8) - (char)((ulong)uVar53 >> 8),
                                                  (char)uVar55 - (char)uVar53)))))));
              uVar54 = puVar4[3];
              uVar53 = puVar4[2];
              uVar56 = puVar5[3];
              uVar55 = puVar5[2];
              *(ulong *)(pbVar23 + 0x18) =
                   CONCAT17((char)((ulong)uVar56 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                            CONCAT16((char)((ulong)uVar56 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                                     CONCAT15((char)((ulong)uVar56 >> 0x28) -
                                              (char)((ulong)uVar54 >> 0x28),
                                              CONCAT14((char)((ulong)uVar56 >> 0x20) -
                                                       (char)((ulong)uVar54 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar56 >> 0x18) -
                                                                (char)((ulong)uVar54 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar56 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar54 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar56 >> 8) - (char)((ulong)uVar54 >> 8),
                                                  (char)uVar56 - (char)uVar54)))))));
              *(ulong *)(pbVar23 + 0x10) =
                   CONCAT17((char)((ulong)uVar55 >> 0x38) - (char)((ulong)uVar53 >> 0x38),
                            CONCAT16((char)((ulong)uVar55 >> 0x30) - (char)((ulong)uVar53 >> 0x30),
                                     CONCAT15((char)((ulong)uVar55 >> 0x28) -
                                              (char)((ulong)uVar53 >> 0x28),
                                              CONCAT14((char)((ulong)uVar55 >> 0x20) -
                                                       (char)((ulong)uVar53 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar55 >> 0x18) -
                                                                (char)((ulong)uVar53 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar55 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar53 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar55 >> 8) - (char)((ulong)uVar53 >> 8),
                                                  (char)uVar55 - (char)uVar53)))))));
              uVar54 = puVar4[5];
              uVar53 = puVar4[4];
              uVar56 = puVar5[5];
              uVar55 = puVar5[4];
              *(ulong *)(pbVar23 + 0x28) =
                   CONCAT17((char)((ulong)uVar56 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                            CONCAT16((char)((ulong)uVar56 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                                     CONCAT15((char)((ulong)uVar56 >> 0x28) -
                                              (char)((ulong)uVar54 >> 0x28),
                                              CONCAT14((char)((ulong)uVar56 >> 0x20) -
                                                       (char)((ulong)uVar54 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar56 >> 0x18) -
                                                                (char)((ulong)uVar54 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar56 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar54 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar56 >> 8) - (char)((ulong)uVar54 >> 8),
                                                  (char)uVar56 - (char)uVar54)))))));
              *(ulong *)(pbVar23 + 0x20) =
                   CONCAT17((char)((ulong)uVar55 >> 0x38) - (char)((ulong)uVar53 >> 0x38),
                            CONCAT16((char)((ulong)uVar55 >> 0x30) - (char)((ulong)uVar53 >> 0x30),
                                     CONCAT15((char)((ulong)uVar55 >> 0x28) -
                                              (char)((ulong)uVar53 >> 0x28),
                                              CONCAT14((char)((ulong)uVar55 >> 0x20) -
                                                       (char)((ulong)uVar53 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar55 >> 0x18) -
                                                                (char)((ulong)uVar53 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar55 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar53 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar55 >> 8) - (char)((ulong)uVar53 >> 8),
                                                  (char)uVar55 - (char)uVar53)))))));
              uVar54 = puVar4[7];
              uVar53 = puVar4[6];
              uVar56 = puVar5[7];
              uVar55 = puVar5[6];
              *(ulong *)(pbVar23 + 0x38) =
                   CONCAT17((char)((ulong)uVar56 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                            CONCAT16((char)((ulong)uVar56 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                                     CONCAT15((char)((ulong)uVar56 >> 0x28) -
                                              (char)((ulong)uVar54 >> 0x28),
                                              CONCAT14((char)((ulong)uVar56 >> 0x20) -
                                                       (char)((ulong)uVar54 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar56 >> 0x18) -
                                                                (char)((ulong)uVar54 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar56 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar54 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar56 >> 8) - (char)((ulong)uVar54 >> 8),
                                                  (char)uVar56 - (char)uVar54)))))));
              *(ulong *)(pbVar23 + 0x30) =
                   CONCAT17((char)((ulong)uVar55 >> 0x38) - (char)((ulong)uVar53 >> 0x38),
                            CONCAT16((char)((ulong)uVar55 >> 0x30) - (char)((ulong)uVar53 >> 0x30),
                                     CONCAT15((char)((ulong)uVar55 >> 0x28) -
                                              (char)((ulong)uVar53 >> 0x28),
                                              CONCAT14((char)((ulong)uVar55 >> 0x20) -
                                                       (char)((ulong)uVar53 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar55 >> 0x18) -
                                                                (char)((ulong)uVar53 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar55 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar53 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar55 >> 8) - (char)((ulong)uVar53 >> 8),
                                                  (char)uVar55 - (char)uVar53)))))));
            } while (0xf < (long)uVar28);
            pbVar24 = (byte *)((long)pbVar24 + lVar49);
            __src = (uint *)((long)__src + lVar49);
          }
          if ((uVar37 & 0xf) != 0) {
            uVar29 = uVar37 & 0xf;
            uVar35 = uVar29 - 1;
            uVar28 = uVar37 & 3;
            goto joined_r0x001a089c;
          }
        }
        local_f8 = local_f8 + uVar37;
      }
    }
    if (iVar46 == 0) {
      iStack_70 = iStack_a4;
    }
    else {
      local_6c = iStack_a4;
      if (iVar46 == 1) goto LAB_001a0928;
    }
    iVar46 = iVar46 + 1;
    if (iVar46 == 0) goto LAB_0019e53c;
    local_74 = (int)local_e8 - (int)local_f0;
    if (local_78 == 0) {
LAB_001a0928:
      lVar21 = FUN_001a1f60(param_10,param_9,0,param_6,param_7,param_1,param_2,&local_118,param_8);
      return lVar21;
    }
    uVar37 = (ulong)local_7c;
    uVar28 = (ulong)(int)local_7c;
    local_88 = local_98 + uVar28;
    local_80 = local_7c;
    local_90 = local_7c;
    local_8c = local_78;
  } while( true );
  while( true ) {
    uVar29 = *(ulong *)((long)puVar11 + ((long)puVar10 - (long)puVar2)) ^ *puVar11;
    puVar13 = puVar11 + 1;
    if (uVar29 != 0) break;
LAB_0019ee30:
    puVar11 = puVar13;
    if (puVar47 < puVar11) goto LAB_0019ed9c;
  }
LAB_0019ee4c:
  uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
  uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
  uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
  uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
  uVar29 = (ulong)(((int)puVar11 - (int)puVar2) +
                  ((uint)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3));
  goto LAB_0019ee5c;
LAB_0019ed9c:
  uVar29 = (long)puVar11 - (long)puVar2;
  puVar11 = (ulong *)((long)puVar2 + (long)(int)uVar29);
  if (puVar11 < puVar38) {
    uVar29 = (long)(int)uVar29;
    do {
      if ((char)*puVar11 != *(char *)((long)puVar10 + uVar29)) goto LAB_0019ee5c;
      uVar14 = (int)uVar29 + 1;
      uVar29 = (ulong)(int)uVar14;
      puVar11 = (ulong *)((long)puVar2 + uVar29);
    } while (puVar11 < puVar38);
    uVar29 = (ulong)uVar14;
  }
LAB_0019ee5c:
  *(short *)(plVar44[2] + (uVar28 & *(uint *)(plVar44 + 9)) * 2) =
       (short)*(undefined4 *)(lVar39 + uVar37 * 4);
  *(int *)(*plVar44 + uVar37 * 4) = iVar20;
  plVar44[7] = (long)puVar31;
  uVar14 = (int)uVar29 + 4;
  uVar17 = 0;
joined_r0x0019edf0:
  do {
    puVar31 = puVar45;
    uVar7 = uVar17;
    uVar52 = uVar14;
    puVar45 = (uint *)((long)puVar31 + 1);
    if (puVar51 <= puVar45) goto LAB_001a0168;
    uVar42 = *puVar45;
    uVar37 = (ulong)(*(long *)puVar45 * -0x485a9b9d00000000) >>
             ((ulong)(uint)-*(int *)((long)plVar44 + 0x4c) & 0x3f);
    lVar39 = plVar44[4];
    puVar32 = (uint *)((long)puVar31 + 2);
    lVar43 = *plVar44;
    Hint_Prefetch(lVar43 + ((ulong)(*(long *)puVar32 * -0x485a9b9d00000000) >>
                           ((ulong)(uint)-*(int *)((long)plVar44 + 0x4c) & 0x3f)) * 4,2,0,0);
    Hint_Prefetch(lVar39 + (ulong)((uint)((ulong)(*(long *)puVar32 * -0x30e44323485a9b9d) >> 0x20)
                                  >> (ulong)(-(int)plVar44[10] & 0x1f)) * 4,0,0,0);
    uVar28 = (long)puVar45 - plVar44[6];
    uVar14 = *(uint *)((long)puVar45 + lVar49);
    iVar20 = (int)uVar28;
    if (uVar42 == uVar14) {
      puVar2 = (ulong *)((long)puVar31 + 5);
      puVar10 = (ulong *)((uint *)((long)puVar45 + lVar49) + 1);
      puVar11 = puVar2;
      if (puVar47 < puVar2) {
LAB_0019efdc:
        uVar29 = (long)puVar11 - (long)puVar2;
        puVar11 = (ulong *)((long)puVar2 + (long)(int)uVar29);
        if (puVar11 < puVar38) {
          uVar29 = (long)(int)uVar29;
          do {
            if ((char)*puVar11 != *(char *)((long)puVar10 + uVar29)) goto LAB_0019f258;
            uVar14 = (int)uVar29 + 1;
            uVar29 = (ulong)(int)uVar14;
            puVar11 = (ulong *)((long)puVar2 + uVar29);
          } while (puVar11 < puVar38);
          uVar29 = (ulong)uVar14;
        }
      }
      else {
        uVar29 = *puVar10 ^ *puVar2;
        if (uVar29 == 0) {
          puVar13 = (ulong *)((long)puVar31 + 0xd);
          do {
            puVar11 = puVar13;
            if (puVar47 < puVar11) goto LAB_0019efdc;
            uVar29 = *(ulong *)((long)puVar11 + ((long)puVar10 - (long)puVar2)) ^ *puVar11;
            puVar13 = puVar11 + 1;
          } while (uVar29 == 0);
        }
        uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
        uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
        uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
        uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
        uVar29 = (ulong)(((int)puVar11 - (int)puVar2) +
                        ((uint)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3));
      }
LAB_0019f258:
      *(short *)(plVar44[2] + (uVar28 & *(uint *)(plVar44 + 9)) * 2) =
           (short)*(undefined4 *)(lVar43 + uVar37 * 4);
      uVar17 = 0;
      *(int *)(*plVar44 + uVar37 * 4) = iVar20;
      plVar44[7] = (long)puVar32;
      uVar14 = (int)uVar29 + 4;
LAB_0019f868:
      iVar20 = 0x20;
      if ((uVar7 & 0xffff0000) == 0) {
        iVar20 = 0x10;
      }
      iVar26 = 0;
      if (0 < (int)uVar7) {
        iVar26 = iVar20;
      }
      iVar20 = -0x25;
      if ((uVar17 & 0xffff0000) == 0) {
        iVar20 = -0x15;
      }
      iVar12 = -5;
      if (0 < (int)uVar17) {
        iVar12 = iVar20;
      }
      if (0 < (int)((uVar14 - uVar52) * 5 + iVar26 + iVar12)) goto joined_r0x0019edf0;
    }
    else {
      uVar14 = uVar14 ^ uVar42;
      uVar14 = (uVar14 & 0xaaaaaaaa) >> 1 | (uVar14 & 0x55555555) << 1;
      uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
      uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
      uVar9 = *(uint *)(lVar43 + uVar37 * 4);
      iVar26 = iVar30;
      if (0x3f < (long)puVar45 - (long)__src) {
        iVar26 = iVar30 + 1;
      }
      uVar18 = iVar20 - uVar9;
      uVar15 = (uint)((ulong)(*(long *)puVar45 * -0x30e44323485a9b9d) >> 0x20);
      uVar29 = (ulong)(uVar15 >> (ulong)(-(int)plVar44[10] & 0x1f));
      uVar16 = 0;
      if ((long)puVar45 - (long)__src < 0x40 || 0x17 < uVar14) {
        uVar16 = uVar14 >> 3;
      }
      if (uVar18 >> 0x10 == 0) {
        uVar17 = 0;
        uVar18 = uVar18 & 0xffff;
        if (uVar18 != 0) {
          uVar48 = 0;
          if ((int)uVar18 < iVar6) {
            puVar2 = (ulong *)((long)puVar31 + 5);
            lVar43 = (long)puVar38 - (long)puVar45;
            if (puVar2 <= puVar47) {
              uVar48 = 0;
              uVar17 = 0;
              iVar12 = 8;
              uVar14 = uVar9;
joined_r0x0019f374:
              if (8 < uVar18) {
                puVar50 = (uint *)((long)puVar45 - (ulong)uVar18);
                if ((*puVar50 == uVar42) &&
                   (((int)uVar48 < 4 ||
                    ((lVar41 = (long)(int)uVar48, lVar41 < lVar43 &&
                     (*(char *)((long)puVar45 + lVar41) == *(char *)((long)puVar50 + lVar41))))))) {
                  puVar10 = (ulong *)(puVar50 + 1);
                  uVar35 = *puVar10 ^ *puVar2;
                  if (uVar35 == 0) {
                    puVar11 = (ulong *)((long)puVar31 + 0xd);
                    do {
                      puVar13 = puVar11;
                      if (puVar47 < puVar13) {
                        uVar35 = (long)puVar13 - (long)puVar2;
                        puVar11 = (ulong *)((long)puVar2 + (long)(int)uVar35);
                        if (puVar38 <= puVar11) goto LAB_0019f480;
                        uVar35 = (long)(int)uVar35;
                        goto LAB_0019f4cc;
                      }
                      uVar35 = *(ulong *)((long)puVar13 + ((long)puVar10 - (long)puVar2)) ^ *puVar13
                      ;
                      puVar11 = puVar13 + 1;
                    } while (uVar35 == 0);
                  }
                  else {
                    puVar13 = puVar2;
                  }
                  uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
                  uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
                  uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                  uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10
                  ;
                  uVar35 = (ulong)(((int)puVar13 - (int)puVar2) +
                                  ((uint)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3));
                  goto LAB_0019f480;
                }
                uVar19 = 0;
                goto LAB_0019f380;
              }
              goto LAB_0019f39c;
            }
            if (puVar2 < puVar38) {
              uVar48 = 0;
              uVar17 = 0;
              iVar12 = 8;
              uVar14 = uVar9;
              do {
                if (8 < uVar18) {
                  puVar50 = (uint *)((long)puVar45 - (ulong)uVar18);
                  if ((*puVar50 == uVar42) &&
                     (((int)uVar48 < 4 ||
                      ((lVar41 = (long)(int)uVar48, lVar41 < lVar43 &&
                       (*(char *)((long)puVar45 + lVar41) == *(char *)((long)puVar50 + lVar41)))))))
                  {
                    uVar35 = 0;
                    puVar10 = puVar2;
                    do {
                      if ((char)*puVar10 != *(char *)((long)puVar50 + uVar35 + 4))
                      goto LAB_0019f208;
                      uVar19 = (int)uVar35 + 1;
                      uVar35 = (ulong)(int)uVar19;
                      puVar10 = (ulong *)((long)puVar2 + uVar35);
                    } while (puVar10 < puVar38);
                    uVar35 = (ulong)uVar19;
LAB_0019f208:
                    uVar19 = (int)uVar35 + 4;
                    if ((int)uVar19 <= (int)uVar48) {
                      uVar19 = 0;
                    }
                  }
                  else {
                    uVar19 = 0;
                  }
                  iVar12 = iVar12 + -1;
                  if (iVar26 <= (int)uVar19) {
                    uVar48 = uVar19;
                    uVar17 = uVar18;
                  }
                  if (iVar12 < 1) break;
                }
                uVar14 = (uint)*(ushort *)(plVar44[2] + (ulong)(uVar14 & 0xffff) * 2);
                uVar19 = iVar20 - uVar14 & 0xffff;
                bVar8 = uVar18 < uVar19;
                uVar18 = uVar19;
              } while (bVar8 && (int)uVar19 < iVar6);
            }
            else {
              uVar48 = 0;
              uVar17 = 0;
              iVar12 = 8;
              uVar14 = uVar9;
              do {
                if (8 < uVar18) {
                  if ((*(uint *)((long)puVar45 - (ulong)uVar18) == uVar42) &&
                     ((uVar48 < 4 ||
                      ((lVar41 = (long)(int)uVar48, lVar41 < lVar43 &&
                       (*(char *)((long)puVar45 + lVar41) ==
                        *(char *)((long)((long)puVar45 - (ulong)uVar18) + lVar41))))))) {
                    uVar19 = (uint)(uVar48 < 4) << 2;
                  }
                  else {
                    uVar19 = 0;
                  }
                  iVar12 = iVar12 + -1;
                  if (iVar26 <= (int)uVar19) {
                    uVar48 = uVar19;
                    uVar17 = uVar18;
                  }
                  if (iVar12 < 1) break;
                }
                uVar14 = (uint)*(ushort *)(plVar44[2] + (ulong)(uVar14 & 0xffff) * 2);
                uVar19 = iVar20 - uVar14 & 0xffff;
                bVar8 = uVar18 < uVar19;
                uVar18 = uVar19;
              } while (bVar8 && (int)uVar19 < iVar6);
            }
          }
          goto LAB_0019f64c;
        }
        uVar48 = 0;
        uVar14 = *(uint *)(lVar39 + uVar29 * 4);
joined_r0x0019f350:
        if (((uVar14 ^ uVar15) & 0x3f) != 0) goto LAB_0019f65c;
LAB_0019f2bc:
        uVar18 = iVar20 - (uVar14 >> 6);
        if ((((int)uVar18 < 8) || (iVar6 <= (int)uVar18)) ||
           (uVar42 != *(uint *)((long)puVar45 - (long)(int)uVar18))) goto LAB_0019f65c;
        puVar2 = (ulong *)((long)puVar31 + 5);
        puVar10 = (ulong *)((uint *)((long)puVar45 - (long)(int)uVar18) + 1);
        puVar11 = puVar2;
        if (puVar47 < puVar2) {
LAB_0019f2f4:
          uVar35 = (ulong)(int)((long)puVar11 - (long)puVar2);
          puVar13 = (ulong *)((long)puVar2 + uVar35);
          uVar29 = (long)puVar11 - (long)puVar2;
          if (puVar38 <= puVar13) goto LAB_0019f748;
          do {
            uVar29 = uVar35;
            if ((char)*puVar13 != *(char *)((long)puVar10 + uVar35)) goto LAB_0019f748;
            iVar12 = (int)uVar35;
            uVar35 = (ulong)(iVar12 + 1);
            puVar13 = (ulong *)((long)puVar2 + uVar35);
          } while (puVar13 < puVar38);
          uVar14 = iVar12 + 5;
        }
        else {
          uVar29 = *puVar10 ^ *puVar2;
          if (uVar29 == 0) {
            puVar13 = (ulong *)((long)puVar31 + 0xd);
            do {
              puVar11 = puVar13;
              if (puVar47 < puVar11) goto LAB_0019f2f4;
              uVar29 = *(ulong *)((long)puVar11 + ((long)puVar10 - (long)puVar2)) ^ *puVar11;
              puVar13 = puVar11 + 1;
            } while (uVar29 == 0);
          }
          uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = (ulong)(((int)puVar11 - (int)puVar2) +
                          ((uint)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3));
LAB_0019f748:
          uVar14 = (int)uVar29 + 4;
        }
        if ((uVar14 == 0) || ((int)uVar14 < *(int *)((long)&local_198 + LZCOUNT(uVar18) * 4)))
        goto LAB_0019f65c;
        if (uVar14 == uVar48) {
          bVar8 = (int)uVar18 < (int)uVar17;
        }
        else if (((int)(uVar18 | uVar17) < 0x10000) ||
                ((int)uVar17 < 0x10000 == (int)uVar18 < 0x10000)) {
          bVar8 = (int)uVar48 < (int)uVar14;
        }
        else if ((int)uVar17 < 0x10000) {
          bVar8 = (int)(uVar48 + 5) < (int)uVar14;
        }
        else {
          bVar8 = (int)(uVar48 - 5) <= (int)uVar14;
        }
        if (!bVar8) {
          uVar14 = uVar48;
          uVar18 = uVar17;
        }
        uVar17 = uVar18;
        if (*(uint *)((long)puVar31 + -7) == uVar42) goto LAB_0019f668;
LAB_0019f7d4:
        uVar42 = 0;
      }
      else {
        if ((int)uVar18 < iVar6) {
          if (*(uint *)((long)puVar45 - (long)(int)uVar18) == uVar42) {
            puVar2 = (ulong *)((long)puVar31 + 5);
            puVar10 = (ulong *)((uint *)((long)puVar45 - (long)(int)uVar18) + 1);
            puVar11 = puVar2;
            if (puVar47 < puVar2) {
LAB_0019f098:
              uVar22 = (ulong)(int)((long)puVar11 - (long)puVar2);
              puVar13 = (ulong *)((long)puVar2 + uVar22);
              uVar35 = (long)puVar11 - (long)puVar2;
              if (puVar38 <= puVar13) goto LAB_0019f638;
              do {
                uVar35 = uVar22;
                if ((char)*puVar13 != *(char *)((long)puVar10 + uVar22)) goto LAB_0019f638;
                iVar12 = (int)uVar22;
                uVar22 = (ulong)(iVar12 + 1);
                puVar13 = (ulong *)((long)puVar2 + uVar22);
              } while (puVar13 < puVar38);
              uVar48 = iVar12 + 5;
            }
            else {
              uVar35 = *puVar10 ^ *puVar2;
              if (uVar35 == 0) {
                puVar13 = (ulong *)((long)puVar31 + 0xd);
                do {
                  puVar11 = puVar13;
                  if (puVar47 < puVar11) goto LAB_0019f098;
                  uVar35 = *(ulong *)((long)puVar11 + ((long)puVar10 - (long)puVar2)) ^ *puVar11;
                  puVar13 = puVar11 + 1;
                } while (uVar35 == 0);
              }
              uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
              uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
              uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
              uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
              uVar35 = (ulong)(((int)puVar11 - (int)puVar2) +
                              ((uint)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3));
LAB_0019f638:
              uVar48 = (int)uVar35 + 4;
            }
            if ((int)uVar48 < iVar26) goto LAB_0019f644;
          }
          else {
            uVar48 = 0;
            if (0 < iVar26) goto LAB_0019f644;
          }
          if ((int)uVar48 < *(int *)((long)&local_198 + LZCOUNT(uVar18) * 4)) {
            uVar18 = 0;
            uVar48 = 0;
          }
          uVar14 = *(uint *)(lVar39 + uVar29 * 4);
          uVar17 = uVar18;
          goto joined_r0x0019f350;
        }
LAB_0019f644:
        uVar17 = 0;
        uVar48 = 0;
LAB_0019f64c:
        uVar14 = *(uint *)(lVar39 + uVar29 * 4);
        if (((uVar14 ^ uVar15) & 0x3f) == 0) goto LAB_0019f2bc;
LAB_0019f65c:
        uVar14 = uVar48;
        if (*(uint *)((long)puVar31 + -7) != uVar42) goto LAB_0019f7d4;
LAB_0019f668:
        puVar2 = (ulong *)((long)puVar31 + 5);
        puVar10 = puVar2;
        if (puVar47 < puVar2) {
LAB_0019f680:
          uVar29 = (long)puVar10 - (long)puVar2;
          puVar10 = (ulong *)((long)puVar2 + (long)(int)uVar29);
          if (puVar10 < puVar38) {
            uVar29 = (long)(int)uVar29;
            do {
              if ((char)*puVar10 != *(char *)((long)puVar31 + -3 + uVar29)) goto LAB_0019f70c;
              uVar42 = (int)uVar29 + 1;
              uVar29 = (ulong)(int)uVar42;
              puVar10 = (ulong *)((long)puVar2 + uVar29);
            } while (puVar10 < puVar38);
            uVar29 = (ulong)uVar42;
          }
        }
        else {
          uVar29 = *(ulong *)((long)puVar31 + -3) ^ *puVar2;
          if (uVar29 == 0) {
            puVar11 = (ulong *)((long)puVar31 + 0xd);
            do {
              puVar10 = puVar11;
              if (puVar47 < puVar10) goto LAB_0019f680;
              uVar29 = puVar10[-1] ^ *puVar10;
              puVar11 = puVar10 + 1;
            } while (uVar29 == 0);
          }
          uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = (ulong)(((int)puVar10 - (int)puVar2) +
                          ((uint)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3));
        }
LAB_0019f70c:
        uVar42 = (int)uVar29 + 4;
      }
      if ((int)uVar14 <= (int)uVar42 && iVar26 <= (int)uVar42) {
        uVar17 = 8;
      }
      *(short *)(plVar44[2] + ((ulong)*(uint *)(plVar44 + 9) & uVar28 & 0xffffffff) * 2) =
           (short)uVar9;
      *(int *)(*plVar44 + uVar37 * 4) = iVar20;
      if ((int)uVar14 <= (int)uVar42 && iVar26 <= (int)uVar42) {
        uVar14 = uVar42;
      }
      plVar44[7] = (long)puVar32;
      if ((1 < uVar16) &&
         (((int)uVar14 <= (int)(uVar16 + 1) ||
          (((int)uVar14 <= (int)(uVar16 + 4) && (0xffff < (int)uVar17)))))) {
        uVar17 = 0;
        uVar14 = uVar16;
        goto LAB_0019f868;
      }
      if (uVar14 != 0) goto LAB_0019f868;
    }
    if ((uVar52 == 2) || (puVar51 < puVar32)) goto LAB_001a0168;
    plVar40 = (long *)((long)puVar31 + 3);
    lVar43 = *plVar44;
    lVar39 = plVar44[4];
    uVar42 = *(uint *)((long)puVar31 + 2);
    Hint_Prefetch(lVar43 + ((ulong)(*plVar40 * -0x485a9b9d00000000) >>
                           ((ulong)(uint)-*(int *)((long)plVar44 + 0x4c) & 0x3f)) * 4,2,0,0);
    Hint_Prefetch(lVar39 + (ulong)((uint)((ulong)(*plVar40 * -0x30e44323485a9b9d) >> 0x20) >>
                                  (ulong)(-(int)plVar44[10] & 0x1f)) * 4,0,0,0);
    uVar28 = (ulong)(*(long *)((long)puVar31 + 2) * -0x485a9b9d00000000) >>
             ((ulong)(uint)-*(int *)((long)plVar44 + 0x4c) & 0x3f);
    uVar37 = (long)puVar32 - plVar44[6];
    uVar14 = *(uint *)((long)puVar32 + lVar49);
    iVar20 = (int)uVar37;
    if (uVar42 == uVar14) {
      puVar2 = (ulong *)((long)puVar31 + 6);
      puVar10 = (ulong *)((uint *)((long)puVar32 + lVar49) + 1);
      puVar11 = puVar2;
      if (puVar47 < puVar2) {
LAB_0019f948:
        uVar29 = (long)puVar11 - (long)puVar2;
        puVar11 = (ulong *)((long)puVar2 + (long)(int)uVar29);
        if (puVar11 < puVar38) {
          uVar29 = (long)(int)uVar29;
          do {
            if ((char)*puVar11 != *(char *)((long)puVar10 + uVar29)) goto LAB_0019eec0;
            uVar14 = (int)uVar29 + 1;
            uVar29 = (ulong)(int)uVar14;
            puVar11 = (ulong *)((long)puVar2 + uVar29);
          } while (puVar11 < puVar38);
          uVar29 = (ulong)uVar14;
        }
      }
      else {
        uVar29 = *puVar10 ^ *puVar2;
        if (uVar29 == 0) {
          puVar13 = (ulong *)((long)puVar31 + 0xe);
          do {
            puVar11 = puVar13;
            if (puVar47 < puVar11) goto LAB_0019f948;
            uVar29 = *(ulong *)((long)puVar11 + ((long)puVar10 - (long)puVar2)) ^ *puVar11;
            puVar13 = puVar11 + 1;
          } while (uVar29 == 0);
        }
        uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
        uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
        uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
        uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
        uVar29 = (ulong)(((int)puVar11 - (int)puVar2) +
                        ((uint)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3));
      }
LAB_0019eec0:
      *(short *)(plVar44[2] + (uVar37 & *(uint *)(plVar44 + 9)) * 2) =
           (short)*(undefined4 *)(lVar43 + uVar28 * 4);
      uVar17 = 0;
      *(int *)(*plVar44 + uVar28 * 4) = iVar20;
      plVar44[7] = (long)plVar40;
      uVar14 = (int)uVar29 + 4;
    }
    else {
      uVar14 = uVar14 ^ uVar42;
      uVar14 = (uVar14 & 0xaaaaaaaa) >> 1 | (uVar14 & 0x55555555) << 1;
      uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
      uVar14 = (uint)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
      iVar26 = iVar30;
      if (0x3f < (long)puVar32 - (long)__src) {
        iVar26 = iVar30 + 1;
      }
      uVar16 = (uint)((ulong)(*(long *)((long)puVar31 + 2) * -0x30e44323485a9b9d) >> 0x20);
      uVar29 = (ulong)(uVar16 >> (ulong)(-(int)plVar44[10] & 0x1f));
      uVar18 = *(uint *)(lVar43 + uVar28 * 4);
      uVar9 = 0;
      if ((long)puVar32 - (long)__src < 0x40 || 0x17 < uVar14) {
        uVar9 = uVar14 >> 3;
      }
      uVar14 = iVar20 - uVar18;
      if (uVar14 >> 0x10 == 0) {
        uVar17 = 0;
        uVar14 = uVar14 & 0xffff;
        if (uVar14 != 0) {
          uVar15 = 0;
          if ((int)uVar14 < iVar6) {
            puVar2 = (ulong *)((long)puVar31 + 6);
            lVar43 = (long)puVar38 - (long)puVar32;
            if (puVar2 <= puVar47) {
              uVar15 = 0;
              uVar17 = 0;
              iVar12 = 8;
              uVar48 = uVar18;
joined_r0x0019fc64:
              if (8 < uVar14) {
                puVar45 = (uint *)((long)puVar32 - (ulong)uVar14);
                if ((*puVar45 == uVar42) &&
                   (((int)uVar15 < 4 ||
                    ((lVar41 = (long)(int)uVar15, lVar41 < lVar43 &&
                     (*(char *)((long)puVar32 + lVar41) == *(char *)((long)puVar45 + lVar41))))))) {
                  puVar10 = (ulong *)(puVar45 + 1);
                  uVar35 = *puVar10 ^ *puVar2;
                  if (uVar35 == 0) {
                    puVar11 = (ulong *)((long)puVar31 + 0xe);
                    do {
                      puVar13 = puVar11;
                      if (puVar47 < puVar13) {
                        uVar35 = (long)puVar13 - (long)puVar2;
                        puVar11 = (ulong *)((long)puVar2 + (long)(int)uVar35);
                        if (puVar38 <= puVar11) goto LAB_0019fd68;
                        uVar35 = (long)(int)uVar35;
                        goto LAB_0019fdb0;
                      }
                      uVar35 = *(ulong *)((long)puVar13 + ((long)puVar10 - (long)puVar2)) ^ *puVar13
                      ;
                      puVar11 = puVar13 + 1;
                    } while (uVar35 == 0);
                  }
                  else {
                    puVar13 = puVar2;
                  }
                  uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
                  uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
                  uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
                  uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10
                  ;
                  uVar35 = (ulong)(((int)puVar13 - (int)puVar2) +
                                  ((uint)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3));
                  goto LAB_0019fd68;
                }
                uVar19 = 0;
                goto LAB_0019fc70;
              }
              goto LAB_0019fc8c;
            }
            if (puVar2 < puVar38) {
              uVar15 = 0;
              uVar17 = 0;
              iVar12 = 8;
              uVar48 = uVar18;
              do {
                if (8 < uVar14) {
                  puVar45 = (uint *)((long)puVar32 - (ulong)uVar14);
                  if ((*puVar45 == uVar42) &&
                     (((int)uVar15 < 4 ||
                      ((lVar41 = (long)(int)uVar15, lVar41 < lVar43 &&
                       (*(char *)((long)puVar32 + lVar41) == *(char *)((long)puVar45 + lVar41)))))))
                  {
                    uVar35 = 0;
                    puVar10 = puVar2;
                    do {
                      if ((char)*puVar10 != *(char *)((long)puVar45 + uVar35 + 4))
                      goto LAB_0019fb5c;
                      uVar19 = (int)uVar35 + 1;
                      uVar35 = (ulong)(int)uVar19;
                      puVar10 = (ulong *)((long)puVar2 + uVar35);
                    } while (puVar10 < puVar38);
                    uVar35 = (ulong)uVar19;
LAB_0019fb5c:
                    uVar19 = (int)uVar35 + 4;
                    if ((int)uVar19 <= (int)uVar15) {
                      uVar19 = 0;
                    }
                  }
                  else {
                    uVar19 = 0;
                  }
                  iVar12 = iVar12 + -1;
                  if (iVar26 <= (int)uVar19) {
                    uVar15 = uVar19;
                    uVar17 = uVar14;
                  }
                  if (iVar12 < 1) break;
                }
                uVar48 = (uint)*(ushort *)(plVar44[2] + (ulong)(uVar48 & 0xffff) * 2);
                uVar19 = iVar20 - uVar48 & 0xffff;
                bVar8 = uVar14 < uVar19;
                uVar14 = uVar19;
              } while (bVar8 && (int)uVar19 < iVar6);
            }
            else {
              uVar15 = 0;
              uVar17 = 0;
              iVar12 = 8;
              uVar48 = uVar18;
              do {
                if (8 < uVar14) {
                  if ((*(uint *)((long)puVar32 - (ulong)uVar14) == uVar42) &&
                     ((uVar15 < 4 ||
                      ((lVar41 = (long)(int)uVar15, lVar41 < lVar43 &&
                       (*(char *)((long)puVar32 + lVar41) ==
                        *(char *)((long)((long)puVar32 - (ulong)uVar14) + lVar41))))))) {
                    uVar19 = (uint)(uVar15 < 4) << 2;
                  }
                  else {
                    uVar19 = 0;
                  }
                  iVar12 = iVar12 + -1;
                  if (iVar26 <= (int)uVar19) {
                    uVar15 = uVar19;
                    uVar17 = uVar14;
                  }
                  if (iVar12 < 1) break;
                }
                uVar48 = (uint)*(ushort *)(plVar44[2] + (ulong)(uVar48 & 0xffff) * 2);
                uVar19 = iVar20 - uVar48 & 0xffff;
                bVar8 = uVar14 < uVar19;
                uVar14 = uVar19;
              } while (bVar8 && (int)uVar19 < iVar6);
            }
          }
          goto LAB_0019ff10;
        }
        uVar15 = 0;
        uVar48 = *(uint *)(lVar39 + uVar29 * 4);
joined_r0x0019fc3c:
        if (((uVar48 ^ uVar16) & 0x3f) != 0) goto LAB_0019ff20;
LAB_0019fba8:
        uVar16 = iVar20 - (uVar48 >> 6);
        if ((((int)uVar16 < 8) || (iVar6 <= (int)uVar16)) ||
           (uVar42 != *(uint *)((long)puVar32 - (long)(int)uVar16))) goto LAB_0019ff20;
        puVar2 = (ulong *)((long)puVar31 + 6);
        puVar10 = (ulong *)((uint *)((long)puVar32 - (long)(int)uVar16) + 1);
        puVar11 = puVar2;
        if (puVar47 < puVar2) {
LAB_0019fbe0:
          uVar35 = (ulong)(int)((long)puVar11 - (long)puVar2);
          puVar13 = (ulong *)((long)puVar2 + uVar35);
          uVar29 = (long)puVar11 - (long)puVar2;
          if (puVar38 <= puVar13) goto LAB_001a001c;
          do {
            uVar29 = uVar35;
            if ((char)*puVar13 != *(char *)((long)puVar10 + uVar35)) goto LAB_001a001c;
            iVar12 = (int)uVar35;
            uVar35 = (ulong)(iVar12 + 1);
            puVar13 = (ulong *)((long)puVar2 + uVar35);
          } while (puVar13 < puVar38);
          uVar14 = iVar12 + 5;
        }
        else {
          uVar29 = *puVar10 ^ *puVar2;
          if (uVar29 == 0) {
            puVar13 = (ulong *)((long)puVar31 + 0xe);
            do {
              puVar11 = puVar13;
              if (puVar47 < puVar11) goto LAB_0019fbe0;
              uVar29 = *(ulong *)((long)puVar11 + ((long)puVar10 - (long)puVar2)) ^ *puVar11;
              puVar13 = puVar11 + 1;
            } while (uVar29 == 0);
          }
          uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = (ulong)(((int)puVar11 - (int)puVar2) +
                          ((uint)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3));
LAB_001a001c:
          uVar14 = (int)uVar29 + 4;
        }
        if ((uVar14 == 0) || ((int)uVar14 < *(int *)((long)&local_198 + LZCOUNT(uVar16) * 4)))
        goto LAB_0019ff20;
        if (uVar14 == uVar15) {
          bVar8 = (int)uVar16 < (int)uVar17;
        }
        else if (((int)(uVar16 | uVar17) < 0x10000) ||
                ((int)uVar17 < 0x10000 == (int)uVar16 < 0x10000)) {
          bVar8 = (int)uVar15 < (int)uVar14;
        }
        else if ((int)uVar17 < 0x10000) {
          bVar8 = (int)(uVar15 + 5) < (int)uVar14;
        }
        else {
          bVar8 = (int)(uVar15 - 5) <= (int)uVar14;
        }
        if (!bVar8) {
          uVar14 = uVar15;
          uVar16 = uVar17;
        }
        uVar17 = uVar16;
        if (*(uint *)((long)puVar31 + -6) == uVar42) goto LAB_0019ff2c;
LAB_001a00b0:
        uVar42 = 0;
      }
      else {
        if ((int)uVar14 < iVar6) {
          if (*(uint *)((long)puVar32 - (long)(int)uVar14) == uVar42) {
            puVar2 = (ulong *)((long)puVar31 + 6);
            puVar10 = (ulong *)((uint *)((long)puVar32 - (long)(int)uVar14) + 1);
            puVar11 = puVar2;
            if (puVar47 < puVar2) {
LAB_0019fa04:
              uVar22 = (ulong)(int)((long)puVar11 - (long)puVar2);
              puVar13 = (ulong *)((long)puVar2 + uVar22);
              uVar35 = (long)puVar11 - (long)puVar2;
              if (puVar38 <= puVar13) goto LAB_0019fefc;
              do {
                uVar35 = uVar22;
                if ((char)*puVar13 != *(char *)((long)puVar10 + uVar22)) goto LAB_0019fefc;
                iVar12 = (int)uVar22;
                uVar22 = (ulong)(iVar12 + 1);
                puVar13 = (ulong *)((long)puVar2 + uVar22);
              } while (puVar13 < puVar38);
              uVar15 = iVar12 + 5;
            }
            else {
              uVar35 = *puVar10 ^ *puVar2;
              if (uVar35 == 0) {
                puVar13 = (ulong *)((long)puVar31 + 0xe);
                do {
                  puVar11 = puVar13;
                  if (puVar47 < puVar11) goto LAB_0019fa04;
                  uVar35 = *(ulong *)((long)puVar11 + ((long)puVar10 - (long)puVar2)) ^ *puVar11;
                  puVar13 = puVar11 + 1;
                } while (uVar35 == 0);
              }
              uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
              uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
              uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
              uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
              uVar35 = (ulong)(((int)puVar11 - (int)puVar2) +
                              ((uint)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3));
LAB_0019fefc:
              uVar15 = (int)uVar35 + 4;
            }
            if ((int)uVar15 < iVar26) goto LAB_0019ff08;
          }
          else {
            uVar15 = 0;
            if (0 < iVar26) goto LAB_0019ff08;
          }
          if ((int)uVar15 < *(int *)((long)&local_198 + LZCOUNT(uVar14) * 4)) {
            uVar14 = 0;
            uVar15 = 0;
          }
          uVar48 = *(uint *)(lVar39 + uVar29 * 4);
          uVar17 = uVar14;
          goto joined_r0x0019fc3c;
        }
LAB_0019ff08:
        uVar17 = 0;
        uVar15 = 0;
LAB_0019ff10:
        uVar48 = *(uint *)(lVar39 + uVar29 * 4);
        if (((uVar48 ^ uVar16) & 0x3f) == 0) goto LAB_0019fba8;
LAB_0019ff20:
        uVar14 = uVar15;
        if (*(uint *)((long)puVar31 + -6) != uVar42) goto LAB_001a00b0;
LAB_0019ff2c:
        puVar2 = (ulong *)((long)puVar31 + 6);
        puVar10 = puVar2;
        if (puVar47 < puVar2) {
LAB_0019ff54:
          uVar29 = (long)puVar10 - (long)puVar2;
          puVar10 = (ulong *)((long)puVar2 + (long)(int)uVar29);
          if (puVar10 < puVar38) {
            uVar29 = (long)(int)uVar29;
            do {
              if ((char)*puVar10 != *(char *)((long)puVar31 + -2 + uVar29)) goto LAB_0019ffe0;
              uVar42 = (int)uVar29 + 1;
              uVar29 = (ulong)(int)uVar42;
              puVar10 = (ulong *)((long)puVar2 + uVar29);
            } while (puVar10 < puVar38);
            uVar29 = (ulong)uVar42;
          }
        }
        else {
          uVar29 = *(ulong *)((long)puVar31 + -2) ^ *puVar2;
          if (uVar29 == 0) {
            puVar11 = (ulong *)((long)puVar31 + 0xe);
            do {
              puVar10 = puVar11;
              if (puVar47 < puVar10) goto LAB_0019ff54;
              uVar29 = puVar10[-1] ^ *puVar10;
              puVar11 = puVar10 + 1;
            } while (uVar29 == 0);
          }
          uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
          uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
          uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
          uVar29 = (ulong)(((int)puVar10 - (int)puVar2) +
                          ((uint)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3));
        }
LAB_0019ffe0:
        uVar42 = (int)uVar29 + 4;
      }
      if ((int)uVar14 <= (int)uVar42 && iVar26 <= (int)uVar42) {
        uVar17 = 8;
      }
      *(short *)(plVar44[2] + ((ulong)*(uint *)(plVar44 + 9) & uVar37 & 0xffffffff) * 2) =
           (short)uVar18;
      *(int *)(*plVar44 + uVar28 * 4) = iVar20;
      if ((int)uVar14 <= (int)uVar42 && iVar26 <= (int)uVar42) {
        uVar14 = uVar42;
      }
      plVar44[7] = (long)plVar40;
      if ((uVar9 < 2) ||
         (((int)(uVar9 + 1) < (int)uVar14 &&
          (((int)(uVar9 + 4) < (int)uVar14 || ((int)uVar17 < 0x10000)))))) {
        if (uVar14 == 0) goto LAB_001a0168;
      }
      else {
        uVar17 = 0;
        uVar14 = uVar9;
      }
    }
    iVar20 = 0x20;
    if ((uVar7 & 0xffff0000) == 0) {
      iVar20 = 0x10;
    }
    iVar26 = 0;
    if (0 < (int)uVar7) {
      iVar26 = iVar20;
    }
    iVar20 = -0x25;
    if ((uVar17 & 0xffff0000) == 0) {
      iVar20 = -0x15;
    }
    iVar12 = -5;
    if (0 < (int)uVar17) {
      iVar12 = iVar20;
    }
    puVar45 = puVar32;
    if ((int)((uVar14 - uVar52) * 5 + iVar26 + iVar12) < 5) goto LAB_001a0168;
  } while( true );
  while( true ) {
    uVar15 = (int)uVar35 + 1;
    uVar35 = (ulong)(int)uVar15;
    puVar11 = (ulong *)((long)puVar2 + uVar35);
    if (puVar38 <= puVar11) break;
LAB_0019ea34:
    if ((char)*puVar11 != *(char *)((long)puVar10 + uVar35)) goto LAB_0019e9f0;
  }
  uVar35 = (ulong)uVar15;
LAB_0019e9f0:
  uVar15 = (int)uVar35 + 4;
  if ((int)uVar15 <= (int)uVar18) {
    uVar15 = 0;
  }
LAB_0019e920:
  iVar12 = iVar12 + -1;
  if (iVar26 <= (int)uVar15) {
    uVar18 = uVar15;
    uVar17 = uVar42;
  }
  if (iVar12 < 1) goto LAB_0019eb80;
LAB_0019e938:
  uVar16 = (uint)*(ushort *)(plVar44[2] + (ulong)(uVar16 & 0xffff) * 2);
  uVar15 = iVar20 - uVar16 & 0xffff;
  bVar8 = uVar15 <= uVar42;
  uVar42 = uVar15;
  if (bVar8 || iVar6 <= (int)uVar15) goto LAB_0019eb80;
  goto joined_r0x0019e914;
  while( true ) {
    uVar19 = (int)uVar35 + 1;
    uVar35 = (ulong)(int)uVar19;
    puVar11 = (ulong *)((long)puVar2 + uVar35);
    if (puVar38 <= puVar11) break;
LAB_0019f4cc:
    if ((char)*puVar11 != *(char *)((long)puVar10 + uVar35)) goto LAB_0019f480;
  }
  uVar35 = (ulong)uVar19;
LAB_0019f480:
  uVar19 = (int)uVar35 + 4;
  if ((int)uVar19 <= (int)uVar48) {
    uVar19 = 0;
  }
LAB_0019f380:
  iVar12 = iVar12 + -1;
  if (iVar26 <= (int)uVar19) {
    uVar48 = uVar19;
    uVar17 = uVar18;
  }
  if (iVar12 < 1) goto LAB_0019f64c;
LAB_0019f39c:
  uVar14 = (uint)*(ushort *)(plVar44[2] + (ulong)(uVar14 & 0xffff) * 2);
  uVar19 = iVar20 - uVar14 & 0xffff;
  bVar8 = uVar19 <= uVar18;
  uVar18 = uVar19;
  if (bVar8 || iVar6 <= (int)uVar19) goto LAB_0019f64c;
  goto joined_r0x0019f374;
  while( true ) {
    uVar19 = (int)uVar35 + 1;
    uVar35 = (ulong)(int)uVar19;
    puVar11 = (ulong *)((long)puVar2 + uVar35);
    if (puVar38 <= puVar11) break;
LAB_0019fdb0:
    if ((char)*puVar11 != *(char *)((long)puVar10 + uVar35)) goto LAB_0019fd68;
  }
  uVar35 = (ulong)uVar19;
LAB_0019fd68:
  uVar19 = (int)uVar35 + 4;
  if ((int)uVar19 <= (int)uVar15) {
    uVar19 = 0;
  }
LAB_0019fc70:
  iVar12 = iVar12 + -1;
  if (iVar26 <= (int)uVar19) {
    uVar15 = uVar19;
    uVar17 = uVar14;
  }
  if (iVar12 < 1) goto LAB_0019ff10;
LAB_0019fc8c:
  uVar48 = (uint)*(ushort *)(plVar44[2] + (ulong)(uVar48 & 0xffff) * 2);
  uVar19 = iVar20 - uVar48 & 0xffff;
  bVar8 = uVar19 <= uVar14;
  uVar14 = uVar19;
  if (bVar8 || iVar6 <= (int)uVar19) goto LAB_0019ff10;
  goto joined_r0x0019fc64;
LAB_001a0168:
  if (0 < (int)uVar7) {
    uVar1 = uVar7;
  }
  if (__src < puVar31) {
    do {
      if (((long)puVar31 - plVar44[6] <= (long)(int)uVar1) ||
         (puVar45 = (uint *)((long)puVar31 + -1),
         *(char *)puVar45 != *(char *)((long)puVar31 + ~(long)(int)uVar1))) goto LAB_001a01c0;
      uVar52 = uVar52 + 1;
      puVar31 = puVar45;
    } while (__src < puVar45);
  }
  else {
LAB_001a01c0:
    puVar45 = puVar31;
  }
  uVar37 = (long)puVar45 - (long)__src;
  uVar14 = (uint)uVar37;
  if (uVar14 - 8 < 0x38) {
    FUN_001a13d0(&local_118,uVar52,uVar37,(long)(int)uVar7,lVar21,__src);
    goto joined_r0x001a0670;
  }
  if ((((int)uVar7 < 0x10000) && ((int)uVar52 < 0x10)) && ((int)uVar14 < 8)) {
    *local_108 = *(undefined8 *)__src;
    local_108 = (undefined8 *)((long)local_108 + (long)(int)uVar14);
    if (local_f8 != (byte *)0x0) {
      uVar53 = *(undefined8 *)__src;
      uVar54 = *(undefined8 *)((long)__src + lVar49);
      *(ulong *)local_f8 =
           CONCAT17((char)((ulong)uVar53 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                    CONCAT16((char)((ulong)uVar53 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                             CONCAT15((char)((ulong)uVar53 >> 0x28) - (char)((ulong)uVar54 >> 0x28),
                                      CONCAT14((char)((ulong)uVar53 >> 0x20) -
                                               (char)((ulong)uVar54 >> 0x20),
                                               CONCAT13((char)((ulong)uVar53 >> 0x18) -
                                                        (char)((ulong)uVar54 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar53 >> 0x10) -
                                                                 (char)((ulong)uVar54 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar53 >> 8)
                                                                          - (char)((ulong)uVar54 >>
                                                                                  8),
                                                                          (char)uVar53 -
                                                                          (char)uVar54)))))));
      local_f8 = local_f8 + (int)uVar14;
    }
    local_e8 = local_e8 + 1;
    *pbVar24 = (char)uVar37 + (char)uVar52 * '\b' | (uVar7 == 0) << 7;
    if (uVar7 == 0) goto joined_r0x001a0670;
    *(short *)local_d8 = (short)uVar7;
  }
  else {
    lVar39 = (long)(int)uVar14;
    if (local_f8 != (byte *)0x0) {
      puVar31 = __src;
      pbVar34 = local_f8;
      lVar43 = lVar39;
      if (8 < (int)uVar14) {
        uVar29 = lVar39 - 9;
        uVar17 = ((uint)(uVar29 >> 4) & 0xfffffff) + 1;
        uVar28 = (ulong)uVar17 & 3;
        pbVar33 = local_f8;
        puVar32 = __src;
        if ((uVar17 & 3) != 0) {
          do {
            uVar54 = ((undefined8 *)((long)puVar32 + lVar49))[1];
            uVar53 = *(undefined8 *)((long)puVar32 + lVar49);
            lVar43 = lVar43 + -0x10;
            puVar31 = puVar32 + 4;
            uVar56 = *(undefined8 *)(puVar32 + 2);
            uVar55 = *(undefined8 *)puVar32;
            pbVar34 = pbVar33 + 0x10;
            *(ulong *)(pbVar33 + 8) =
                 CONCAT17((char)((ulong)uVar56 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                          CONCAT16((char)((ulong)uVar56 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                                   CONCAT15((char)((ulong)uVar56 >> 0x28) -
                                            (char)((ulong)uVar54 >> 0x28),
                                            CONCAT14((char)((ulong)uVar56 >> 0x20) -
                                                     (char)((ulong)uVar54 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar56 >> 0x18) -
                                                              (char)((ulong)uVar54 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar56 >> 0x10)
                                                                       - (char)((ulong)uVar54 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar56
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar54
                                                                                      >> 8),
                                                                                (char)uVar56 -
                                                                                (char)uVar54)))))));
            *(ulong *)pbVar33 =
                 CONCAT17((char)((ulong)uVar55 >> 0x38) - (char)((ulong)uVar53 >> 0x38),
                          CONCAT16((char)((ulong)uVar55 >> 0x30) - (char)((ulong)uVar53 >> 0x30),
                                   CONCAT15((char)((ulong)uVar55 >> 0x28) -
                                            (char)((ulong)uVar53 >> 0x28),
                                            CONCAT14((char)((ulong)uVar55 >> 0x20) -
                                                     (char)((ulong)uVar53 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar55 >> 0x18) -
                                                              (char)((ulong)uVar53 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar55 >> 0x10)
                                                                       - (char)((ulong)uVar53 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar55
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar53
                                                                                      >> 8),
                                                                                (char)uVar55 -
                                                                                (char)uVar53)))))));
            uVar28 = uVar28 - 1;
            pbVar33 = pbVar34;
            puVar32 = puVar31;
          } while (uVar28 != 0);
        }
        if (0x2f < uVar29) {
          lVar41 = 0;
          do {
            puVar4 = (undefined8 *)((long)puVar31 + lVar41 + lVar49);
            puVar5 = (undefined8 *)((long)puVar31 + lVar41);
            uVar54 = puVar4[1];
            uVar53 = *puVar4;
            uVar56 = puVar5[1];
            uVar55 = *puVar5;
            pbVar33 = pbVar34 + lVar41;
            lVar41 = lVar41 + 0x40;
            lVar43 = lVar43 + -0x40;
            *(ulong *)(pbVar33 + 8) =
                 CONCAT17((char)((ulong)uVar56 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                          CONCAT16((char)((ulong)uVar56 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                                   CONCAT15((char)((ulong)uVar56 >> 0x28) -
                                            (char)((ulong)uVar54 >> 0x28),
                                            CONCAT14((char)((ulong)uVar56 >> 0x20) -
                                                     (char)((ulong)uVar54 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar56 >> 0x18) -
                                                              (char)((ulong)uVar54 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar56 >> 0x10)
                                                                       - (char)((ulong)uVar54 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar56
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar54
                                                                                      >> 8),
                                                                                (char)uVar56 -
                                                                                (char)uVar54)))))));
            *(ulong *)pbVar33 =
                 CONCAT17((char)((ulong)uVar55 >> 0x38) - (char)((ulong)uVar53 >> 0x38),
                          CONCAT16((char)((ulong)uVar55 >> 0x30) - (char)((ulong)uVar53 >> 0x30),
                                   CONCAT15((char)((ulong)uVar55 >> 0x28) -
                                            (char)((ulong)uVar53 >> 0x28),
                                            CONCAT14((char)((ulong)uVar55 >> 0x20) -
                                                     (char)((ulong)uVar53 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar55 >> 0x18) -
                                                              (char)((ulong)uVar53 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar55 >> 0x10)
                                                                       - (char)((ulong)uVar53 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar55
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar53
                                                                                      >> 8),
                                                                                (char)uVar55 -
                                                                                (char)uVar53)))))));
            uVar54 = puVar4[3];
            uVar53 = puVar4[2];
            uVar56 = puVar5[3];
            uVar55 = puVar5[2];
            *(ulong *)(pbVar33 + 0x18) =
                 CONCAT17((char)((ulong)uVar56 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                          CONCAT16((char)((ulong)uVar56 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                                   CONCAT15((char)((ulong)uVar56 >> 0x28) -
                                            (char)((ulong)uVar54 >> 0x28),
                                            CONCAT14((char)((ulong)uVar56 >> 0x20) -
                                                     (char)((ulong)uVar54 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar56 >> 0x18) -
                                                              (char)((ulong)uVar54 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar56 >> 0x10)
                                                                       - (char)((ulong)uVar54 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar56
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar54
                                                                                      >> 8),
                                                                                (char)uVar56 -
                                                                                (char)uVar54)))))));
            *(ulong *)(pbVar33 + 0x10) =
                 CONCAT17((char)((ulong)uVar55 >> 0x38) - (char)((ulong)uVar53 >> 0x38),
                          CONCAT16((char)((ulong)uVar55 >> 0x30) - (char)((ulong)uVar53 >> 0x30),
                                   CONCAT15((char)((ulong)uVar55 >> 0x28) -
                                            (char)((ulong)uVar53 >> 0x28),
                                            CONCAT14((char)((ulong)uVar55 >> 0x20) -
                                                     (char)((ulong)uVar53 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar55 >> 0x18) -
                                                              (char)((ulong)uVar53 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar55 >> 0x10)
                                                                       - (char)((ulong)uVar53 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar55
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar53
                                                                                      >> 8),
                                                                                (char)uVar55 -
                                                                                (char)uVar53)))))));
            uVar54 = puVar4[5];
            uVar53 = puVar4[4];
            uVar56 = puVar5[5];
            uVar55 = puVar5[4];
            *(ulong *)(pbVar33 + 0x28) =
                 CONCAT17((char)((ulong)uVar56 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                          CONCAT16((char)((ulong)uVar56 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                                   CONCAT15((char)((ulong)uVar56 >> 0x28) -
                                            (char)((ulong)uVar54 >> 0x28),
                                            CONCAT14((char)((ulong)uVar56 >> 0x20) -
                                                     (char)((ulong)uVar54 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar56 >> 0x18) -
                                                              (char)((ulong)uVar54 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar56 >> 0x10)
                                                                       - (char)((ulong)uVar54 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar56
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar54
                                                                                      >> 8),
                                                                                (char)uVar56 -
                                                                                (char)uVar54)))))));
            *(ulong *)(pbVar33 + 0x20) =
                 CONCAT17((char)((ulong)uVar55 >> 0x38) - (char)((ulong)uVar53 >> 0x38),
                          CONCAT16((char)((ulong)uVar55 >> 0x30) - (char)((ulong)uVar53 >> 0x30),
                                   CONCAT15((char)((ulong)uVar55 >> 0x28) -
                                            (char)((ulong)uVar53 >> 0x28),
                                            CONCAT14((char)((ulong)uVar55 >> 0x20) -
                                                     (char)((ulong)uVar53 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar55 >> 0x18) -
                                                              (char)((ulong)uVar53 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar55 >> 0x10)
                                                                       - (char)((ulong)uVar53 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar55
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar53
                                                                                      >> 8),
                                                                                (char)uVar55 -
                                                                                (char)uVar53)))))));
            uVar54 = puVar4[7];
            uVar53 = puVar4[6];
            uVar56 = puVar5[7];
            uVar55 = puVar5[6];
            *(ulong *)(pbVar33 + 0x38) =
                 CONCAT17((char)((ulong)uVar56 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                          CONCAT16((char)((ulong)uVar56 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                                   CONCAT15((char)((ulong)uVar56 >> 0x28) -
                                            (char)((ulong)uVar54 >> 0x28),
                                            CONCAT14((char)((ulong)uVar56 >> 0x20) -
                                                     (char)((ulong)uVar54 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar56 >> 0x18) -
                                                              (char)((ulong)uVar54 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar56 >> 0x10)
                                                                       - (char)((ulong)uVar54 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar56
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar54
                                                                                      >> 8),
                                                                                (char)uVar56 -
                                                                                (char)uVar54)))))));
            *(ulong *)(pbVar33 + 0x30) =
                 CONCAT17((char)((ulong)uVar55 >> 0x38) - (char)((ulong)uVar53 >> 0x38),
                          CONCAT16((char)((ulong)uVar55 >> 0x30) - (char)((ulong)uVar53 >> 0x30),
                                   CONCAT15((char)((ulong)uVar55 >> 0x28) -
                                            (char)((ulong)uVar53 >> 0x28),
                                            CONCAT14((char)((ulong)uVar55 >> 0x20) -
                                                     (char)((ulong)uVar53 >> 0x20),
                                                     CONCAT13((char)((ulong)uVar55 >> 0x18) -
                                                              (char)((ulong)uVar53 >> 0x18),
                                                              CONCAT12((char)((ulong)uVar55 >> 0x10)
                                                                       - (char)((ulong)uVar53 >>
                                                                               0x10),
                                                                       CONCAT11((char)((ulong)uVar55
                                                                                      >> 8) -
                                                                                (char)((ulong)uVar53
                                                                                      >> 8),
                                                                                (char)uVar55 -
                                                                                (char)uVar53)))))));
          } while (8 < lVar43);
          pbVar34 = pbVar34 + lVar41;
          puVar31 = (uint *)((long)puVar31 + lVar41);
        }
        lVar43 = (lVar39 - (uVar29 & 0xfffffffffffffff0)) + -0x10;
      }
      if (0 < lVar43) {
        uVar53 = *(undefined8 *)puVar31;
        uVar54 = *(undefined8 *)((long)puVar31 + lVar49);
        *(ulong *)pbVar34 =
             CONCAT17((char)((ulong)uVar53 >> 0x38) - (char)((ulong)uVar54 >> 0x38),
                      CONCAT16((char)((ulong)uVar53 >> 0x30) - (char)((ulong)uVar54 >> 0x30),
                               CONCAT15((char)((ulong)uVar53 >> 0x28) -
                                        (char)((ulong)uVar54 >> 0x28),
                                        CONCAT14((char)((ulong)uVar53 >> 0x20) -
                                                 (char)((ulong)uVar54 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar53 >> 0x18) -
                                                          (char)((ulong)uVar54 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar53 >> 0x10) -
                                                                   (char)((ulong)uVar54 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar53 >>
                                                                                  8) -
                                                                            (char)((ulong)uVar54 >>
                                                                                  8),(char)uVar53 -
                                                                                     (char)uVar54)))
                                                ))));
      }
      local_f8 = local_f8 + lVar39;
    }
    puVar4 = (undefined8 *)((long)local_108 + lVar39);
    puVar31 = __src;
    do {
      *local_108 = *(undefined8 *)puVar31;
      local_108 = local_108 + 1;
      puVar31 = puVar31 + 2;
    } while (local_108 < puVar4);
    local_108 = puVar4;
    if ((int)uVar14 < 0x40) {
      while (iVar20 = (int)uVar37, 7 < (int)uVar14) {
        uVar14 = iVar20 - 7;
        uVar37 = (ulong)uVar14;
        *local_e8 = 0x87;
        local_e8 = local_e8 + 1;
      }
    }
    else {
      uVar14 = uVar14 - 0x40;
      if (uVar14 < 0xfc) {
        pbVar34 = local_b8 + 1;
        *local_b8 = (byte)uVar14;
      }
      else {
        uVar17 = uVar14 & 3 | 0xfc;
        *local_b8 = (byte)uVar17;
        *(short *)(local_b8 + 1) = (short)(uVar14 - uVar17 >> 2);
        pbVar34 = local_b8 + 3;
      }
      local_b8 = pbVar34;
      local_a8 = local_a8 + 1;
      iVar20 = 0;
      local_e8 = local_e8 + 1;
      *pbVar24 = 0;
      if (uVar52 == 0) goto joined_r0x001a0670;
    }
    pbVar24 = local_e8;
    if (((int)uVar7 < 0x10000) && ((int)uVar52 < 0x5b)) {
      uVar14 = uVar52;
      if (0xe < (int)uVar52) {
        uVar14 = 0xf;
      }
      bVar25 = (byte)iVar20 + (char)uVar14 * '\b';
      if (uVar7 == 0) {
        bVar25 = bVar25 + 0x80;
      }
      else {
        *(short *)local_d8 = (short)uVar7;
        local_d8 = local_d8 + 2;
      }
      local_e8 = local_e8 + 1;
      *pbVar24 = bVar25;
      pbVar24 = local_e8;
      for (iVar20 = uVar52 - uVar14; local_e8 = pbVar24, 0 < iVar20; iVar20 = iVar20 - iVar26) {
        iVar26 = iVar20;
        if (0xe < iVar20) {
          iVar26 = 0xf;
        }
        local_e8 = pbVar24 + 1;
        *pbVar24 = (byte)(iVar26 << 3) ^ 0x80;
        pbVar24 = local_e8;
      }
      goto joined_r0x001a0670;
    }
    local_a8 = local_a8 + 1;
    if (0 < iVar20) {
      *local_e8 = (byte)iVar20 | 0x80;
      local_e8 = local_e8 + 1;
    }
    pbVar24 = local_e8;
    if (uVar7 != 0) {
      lVar21 = (long)(int)uVar7;
    }
    if ((int)lVar21 < 0x10000) {
      uVar14 = uVar52 - 0x5b;
      bVar25 = 1;
LAB_001a0598:
      local_e8 = local_e8 + 1;
      *pbVar24 = bVar25;
      if (-1 < (int)uVar14) {
        if (uVar14 < 0xfc) {
          *local_b8 = (byte)uVar14;
          local_b8 = local_b8 + 1;
        }
        else {
          uVar17 = uVar14 & 3 | 0xfc;
          *local_b8 = (byte)uVar17;
          *(short *)(local_b8 + 1) = (short)(uVar14 - uVar17 >> 2);
          local_b8 = local_b8 + 3;
        }
      }
    }
    else {
      bVar25 = 2;
      if (0x17 < (int)(uVar52 - 5)) {
        uVar14 = uVar52 - 0x1d;
        goto LAB_001a0598;
      }
      local_e8 = local_e8 + 1;
      *pbVar24 = (byte)(uVar52 - 5);
    }
    if (0xffff < lVar21) {
      lVar21 = (lVar21 - ((long)__src + lVar39)) + local_98 + (long)(int)local_90;
      bVar25 = (byte)((ulong)lVar21 >> 8);
      if (lVar21 < 0xc00000) {
        *local_c8 = (byte)lVar21;
        local_c8[1] = bVar25;
        local_c8[2] = (byte)((ulong)lVar21 >> 0x10);
        local_c8 = local_c8 + 3;
      }
      else {
        *local_c8 = (byte)lVar21;
        local_c8[1] = bVar25;
        uVar14 = (uint)lVar21 & 0x3fffff | 0xc00000;
        local_c8[2] = (byte)(uVar14 >> 0x10);
        local_c8 = local_c8 + 4;
        pbVar23[3] = (byte)((uint)lVar21 - uVar14 >> 0x16);
      }
      iStack_a4 = iStack_a4 + 1;
      goto joined_r0x001a0670;
    }
    *(short *)local_d8 = (short)lVar21;
  }
  local_d8 = local_d8 + 2;
joined_r0x001a0670:
  __src = (uint *)((long)puVar45 + (long)(int)uVar52);
  if (puVar51 <= __src) goto LAB_001a0748;
  if (0 < (int)uVar52) {
    uVar14 = 0;
    do {
      lVar21 = (long)(int)uVar14;
      uVar17 = (uint)((ulong)(*(long *)((long)puVar45 + lVar21) * -0x30e44323485a9b9d) >> 0x20);
      uVar14 = uVar14 << 1 | 1;
      *(uint *)(plVar44[4] + (ulong)(uVar17 >> (ulong)(-(int)plVar44[10] & 0x1f)) * 4) =
           uVar17 & 0x3f | ((int)(long *)((long)puVar45 + lVar21) - (int)plVar44[6]) * 0x40;
    } while ((int)uVar14 < (int)uVar52);
  }
  puVar31 = (uint *)plVar44[7];
  if ((uint *)plVar44[7] < __src) {
    do {
      puVar45 = (uint *)((long)puVar31 + 1);
      lVar49 = plVar44[6];
      lVar21 = ((ulong)(*(long *)puVar31 * -0x485a9b9d00000000) >>
               ((ulong)(uint)-*(int *)((long)plVar44 + 0x4c) & 0x3f)) * 4;
      *(short *)(plVar44[2] + ((long)puVar31 - lVar49 & (ulong)*(uint *)(plVar44 + 9)) * 2) =
           (short)*(undefined4 *)(*plVar44 + lVar21);
      *(int *)(*plVar44 + lVar21) = (int)((long)puVar31 - lVar49);
      plVar44[7] = (long)puVar45;
      puVar31 = puVar45;
    } while (__src != puVar45);
  }
  goto LAB_0019e5a4;
}


