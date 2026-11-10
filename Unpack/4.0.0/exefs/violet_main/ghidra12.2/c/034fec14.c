/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034fec14; name: FUN_034fec14
 */


void FUN_034fec14(float param_1,long param_2,long param_3,uint param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  MutexType *pMVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  void *pvVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  uint uVar22;
  ulong *puVar23;
  float *pfVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  ulong *puVar28;
  long *plVar29;
  undefined4 uVar30;
  ulong uVar31;
  bool bVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  char *pcVar36;
  char *pcVar37;
  long lVar38;
  ulong *puVar39;
  float *pfVar40;
  long lVar41;
  ulong uVar42;
  undefined8 **ppuVar43;
  long lVar44;
  long *plVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 *local_190;
  undefined8 *local_188;
  ulong local_180;
  ulong local_178;
  uint local_16c;
  long local_168;
  long *local_160;
  long *local_158;
  long *local_150;
  ulong local_148;
  long *local_140;
  long local_138;
  float *local_130;
  long *local_128;
  uint local_11c;
  long local_118;
  ulong *local_110;
  long local_108;
  uint local_100;
  uint local_fc;
  ulong *local_f8;
  uint local_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  char acStack_b0 [16];
  
  ppuVar43 = &local_190;
  fVar51 = *(float *)(param_3 + 0x100);
  fVar50 = *(float *)(param_2 + 0x10);
  local_16c = param_4;
  local_138 = param_5;
  local_168 = param_2;
  if (*(float *)(param_3 + 0x114) == fVar51) {
    fVar52 = *(float *)(param_3 + 0x104);
    if ((((*(float *)(param_3 + 0x118) != fVar52) ||
         (*(float *)(param_3 + 0x11c) != *(float *)(param_3 + 0x108))) ||
        (*(float *)(param_3 + 0x120) != *(float *)(param_3 + 0x10c))) ||
       (bVar6 = *(byte *)(param_3 + 0x110) ^ *(byte *)(param_3 + 0x124), (bVar6 & 7) != 0))
    goto LAB_034fecc0;
    uVar35 = bVar6 >> 3 & 1;
  }
  else {
    fVar52 = *(float *)(param_3 + 0x104);
LAB_034fecc0:
    uVar35 = 1;
  }
  fVar55 = *(float *)(param_3 + 0x10c);
  fVar53 = *(float *)(param_3 + 0x108);
  fVar54 = *(float *)(param_3 + 0x128);
  bVar6 = *(byte *)(param_3 + 0x110);
  if ((bVar6 >> 3 & 1) == 0) {
    local_11c = 0;
LAB_034fecf0:
    local_158 = (long *)0x0;
    local_150 = (long *)0x0;
  }
  else {
    local_11c = *(ushort *)(param_3 + 0x13c) >> 3 & 7;
    if ((*(ushort *)(param_3 + 0x13c) >> 6 & 1) == 0) goto LAB_034fecf0;
    lVar44 = *(long *)(param_3 + 0x140);
    if (lVar44 != 0) {
LAB_03500004:
      if ((ulong)*(byte *)(lVar44 + 0xdd) == 0xff) {
        local_150 = (long *)0x0;
      }
      else {
        plVar45 = (long *)(lVar44 + (ulong)*(byte *)(lVar44 + 0xdd) * 0x18 + 0x30);
        local_150 = (long *)0x0;
        if (*plVar45 != 0) {
          local_150 = plVar45;
        }
      }
      if ((ulong)*(byte *)(lVar44 + 0xde) == 0xff) {
        local_158 = (long *)0x0;
      }
      else {
        plVar45 = (long *)(lVar44 + (ulong)*(byte *)(lVar44 + 0xde) * 0x18 + 0x30);
        local_158 = (long *)0x0;
        if (*plVar45 != 0) {
          local_158 = plVar45;
        }
      }
      local_ec = *(byte *)(lVar44 + 0xdf) >> 1 & 1;
      goto LAB_034fecf8;
    }
    uVar33 = *(uint *)(param_3 + 300);
    if (uVar33 == 0) goto LAB_034fecf0;
    lVar44 = *(long *)PTR_DAT_047e6f28;
    pMVar3 = (MutexType *)(lVar44 + 0x150);
    nn::os::LockMutex(pMVar3);
    uVar34 = *(uint *)(lVar44 + 0x178);
    if (uVar34 != 0) {
      uVar17 = 0;
      if (uVar34 != 0) {
        uVar17 = uVar33 / uVar34;
      }
      for (lVar44 = *(long *)(*(long *)(lVar44 + 0x170) + (ulong)(uVar33 - uVar17 * uVar34) * 8);
          lVar44 != 0; lVar44 = *(long *)(lVar44 + 8)) {
        if (*(uint *)(lVar44 + 0x10) == uVar33) {
          *(int *)(lVar44 + 0x14) = *(int *)(lVar44 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar3);
          *(long *)(param_3 + 0x140) = lVar44;
          goto LAB_03500004;
        }
      }
    }
    nn::os::UnlockMutex(pMVar3);
    local_158 = (long *)0x0;
    local_150 = (long *)0x0;
    *(undefined8 *)(param_3 + 0x140) = 0;
  }
  local_150 = (long *)0x0;
  local_158 = (long *)0x0;
  local_ec = 1;
LAB_034fecf8:
  local_190 = (undefined8 *)(param_3 + 0x100);
  local_188 = (undefined8 *)(param_3 + 0x114);
  lVar44 = *(long *)(local_168 + 0x28);
  if (lVar44 != 0) {
    fVar55 = fVar55 * 0.01;
    fVar51 = fVar51 * 0.01;
    fVar52 = fVar52 * 0.01;
    fVar53 = fVar53 * 0.01;
    fVar54 = fVar54 * 0.01;
    fVar56 = 0.0;
    local_f0 = bVar6 & 7;
    local_118 = param_3;
    local_100 = uVar35;
    do {
      if ((*(byte *)(lVar44 + 0x1d8) & 1) == 0) {
        *(float *)(lVar44 + 0xc) = fVar50 * param_1 * *(float *)(lVar44 + 0x1c8);
LAB_034fed88:
        if (((*(byte *)(param_3 + 0x110) >> 3 & 1) == 0) || (*(int *)(lVar44 + 0x1d4) == 3)) {
          uVar33 = *(uint *)(*(long *)(lVar44 + 0x198) + 0x158);
          uVar27 = (ulong)uVar33;
          if ((uVar33 & 0xf00) == 0) {
            uVar33 = *(uint *)(lVar44 + 0x188);
            uVar18 = uVar27 & 0xff;
            if (uVar33 == 0) {
              puVar10 = (ulong *)0x0;
              uVar42 = 0;
              uVar35 = 0;
              pcVar36 = acStack_b0;
              local_108 = *(long *)(lVar44 + 0x180);
              bVar32 = true;
LAB_034ffd04:
              uVar34 = (uint)uVar18;
              uVar33 = uVar34;
              if (uVar35 <= uVar34) {
                uVar33 = uVar35;
              }
              if (uVar33 != 0) {
                uVar27 = (uVar27 & 0xff) + 3;
                uVar18 = uVar27 >> 2;
                lVar38 = uVar18 * 0x40;
                lVar19 = uVar18 * 0x10;
                uVar35 = 0;
                uVar20 = 0;
                do {
                  uVar31 = puVar10[uVar20 * 2 + 1];
                  bVar6 = *(byte *)(uVar31 + 0x120);
                  uVar17 = (uint)bVar6;
                  if (uVar34 - uVar35 <= (uint)bVar6) {
                    uVar17 = uVar34 - uVar35;
                  }
                  if (uVar17 != 0) {
                    uVar13 = (ulong)uVar17;
                    puVar21 = puVar10 + uVar20 * 2 + 1;
                    if (uVar13 - 1 < 3) {
                      uVar11 = 0;
                    }
                    else {
                      lVar12 = 0;
                      uVar11 = 0;
                      uVar22 = uVar35 + 2;
                      uVar14 = uVar35 + 1;
                      uVar15 = uVar35 + 3;
                      lVar16 = (uVar18 * 2 + (uVar27 >> 2)) * 0x10;
                      lVar41 = lVar19;
                      lVar26 = uVar18 << 5;
                      uVar2 = uVar35;
                      do {
                        *(undefined4 *)(*(long *)(uVar31 + 0x138) + lVar12 + (ulong)uVar2 * 4) =
                             0x3f800000;
                        *(undefined4 *)(*(long *)(*puVar21 + 0x138) + lVar41 + (ulong)uVar14 * 4) =
                             0x3f800000;
                        lVar1 = lVar26 + (ulong)uVar22 * 4;
                        lVar26 = lVar26 + lVar38;
                        uVar22 = uVar22 + 4;
                        *(undefined4 *)(*(long *)(*puVar21 + 0x138) + lVar1) = 0x3f800000;
                        *(undefined4 *)(*(long *)(*puVar21 + 0x138) + lVar16 + (ulong)uVar15 * 4) =
                             0x3f800000;
                        uVar31 = *puVar21;
                        uVar11 = uVar11 + 4;
                        lVar41 = lVar41 + lVar38;
                        uVar14 = uVar14 + 4;
                        lVar16 = lVar16 + lVar38;
                        uVar15 = uVar15 + 4;
                        lVar12 = lVar12 + lVar38;
                        uVar2 = uVar2 + 4;
                      } while ((uVar13 & 0xfc) != uVar11);
                    }
                    if ((uVar17 & 3) != 0) {
                      uVar17 = uVar35 + (int)uVar11;
                      lVar41 = lVar19 * uVar11;
                      lVar26 = -(uVar13 & 3);
                      do {
                        uVar13 = (ulong)uVar17;
                        uVar17 = uVar17 + 1;
                        *(undefined4 *)(*(long *)(uVar31 + 0x138) + lVar41 + uVar13 * 4) =
                             0x3f800000;
                        uVar31 = *puVar21;
                        lVar41 = lVar41 + lVar19;
                        bVar7 = lVar26 != -1;
                        lVar26 = lVar26 + 1;
                      } while (bVar7);
                    }
                    bVar6 = *(byte *)(uVar31 + 0x120);
                  }
                  uVar35 = bVar6 + uVar35;
                  uVar20 = (ulong)((int)uVar20 + 1);
                } while (uVar35 < uVar33);
              }
              if (!bVar32) {
                pcVar37 = (char *)(local_108 + 0x148);
                do {
                  if ((*pcVar36 != '\0') && (*pcVar37 != '\0')) {
                    uVar35 = *(uint *)(pcVar37 + -0x28);
                    if ((*(uint *)(pcVar37 + -0x90) & 0xf00) != 0x300) {
                      uVar35 = *(uint *)(pcVar37 + -0x90);
                    }
                    lVar38 = ((ulong)((uVar35 & 0xff) + 3) & 0x1fc) *
                             ((ulong)*(uint *)(pcVar37 + -0x28) & 0xff);
                    if ((int)lVar38 != 0) {
                      memcpy(*(void **)(pcVar37 + -8),*(void **)(pcVar37 + -0x10),lVar38 * 4);
                    }
                  }
                  uVar42 = uVar42 - 1;
                  pcVar37 = pcVar37 + 0x158;
                  pcVar36 = pcVar36 + 1;
                } while (uVar42 != 0);
              }
              uVar35 = local_100;
            }
            else {
              local_178 = uVar27;
              local_128 = (long *)(ulong)uVar33;
              puVar10 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(long)(ulong)uVar33 << 4);
              if (puVar10 != (ulong *)0x0) {
                uVar42 = (ulong)*(uint *)(lVar44 + 0x188);
                lVar38 = *(long *)(lVar44 + 0x180);
                ppuVar43 = (undefined8 **)((long)ppuVar43 + -(uVar42 + 0xf & 0x1fffffff0));
                local_108 = lVar38;
                if (*(uint *)(lVar44 + 0x188) == 0) {
                  uVar42 = 0;
                  uVar35 = 0;
                  bVar32 = true;
                }
                else {
                  local_180 = uVar18;
                  uVar33 = 0;
                  uVar27 = 0;
                  uVar35 = 0;
                  local_148 = (ulong)((int)uVar18 + 3) & 0x1fc;
                  do {
                    puVar39 = (ulong *)(lVar38 + uVar27 * 0x158);
                    *(char *)((long)ppuVar43 + uVar27) = '\0';
                    uVar18 = (ulong)*(uint *)((long)puVar39 + 0x14c) & 0xff;
                    puVar21 = puVar39 + 0x24;
                    local_f8 = puVar10;
                    uVar34 = (uint)uVar18;
                    if (uVar34 == (byte)puVar39[0x24]) {
LAB_034ff188:
                      if (*(long *)(lVar38 + uVar27 * 0x158 + 0x128) != 0) {
                        lVar19 = lVar38 + uVar27 * 0x158;
                        uVar4 = *(undefined8 *)(lVar19 + 0x138);
                        pvVar9 = *(void **)(lVar19 + 0x140);
                        *(void **)(lVar19 + 0x138) = pvVar9;
                        *(undefined8 *)(lVar19 + 0x140) = uVar4;
                        uVar18 = *puVar21;
                        lVar19 = (byte)uVar18 * local_148;
                        if ((int)lVar19 != 0) {
                          memset(pvVar9,0,lVar19 * 4);
                          lVar38 = local_108;
                        }
                        uVar35 = (byte)uVar18 + uVar35;
                        uVar18 = *puVar39;
                        uVar34 = (uint)local_128;
                        puVar10 = local_f8;
                        if (uVar33 == 0) {
                          if (local_f8 != (ulong *)0x0) {
                            uVar20 = 0;
                            goto LAB_034ff248;
                          }
                          if (uVar34 == 0) {
                            puVar21 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,0x10);
                            local_128 = (long *)0x1;
                            lVar38 = local_108;
                            puVar10 = puVar21;
                            uVar34 = 1;
                          }
                          else {
                            puVar21 = (ulong *)0x0;
                            puVar10 = (ulong *)0x0;
                            uVar34 = 1;
                          }
                        }
                        else {
                          uVar17 = 0;
                          uVar22 = uVar33;
                          do {
                            uVar14 = uVar17 + (uVar22 >> 1);
                            uVar20 = *(ulong *)((long)local_f8 +
                                               (-(ulong)(uVar14 >> 0x1f) & 0xfffffff000000000 |
                                               (ulong)uVar14 << 4));
                            if (uVar20 == uVar18) {
                              puVar21 = local_f8 + (long)(int)uVar14 * 2;
                              goto LAB_034ff34c;
                            }
                            if (uVar20 < uVar18) {
                              uVar17 = uVar14 + 1;
                            }
                            uVar22 = uVar22 - (uVar20 < uVar18) >> 1;
                          } while (uVar22 != 0);
                          uVar20 = (ulong)uVar17;
LAB_034ff248:
                          if (uVar34 <= uVar33) {
                            iVar8 = uVar34 + (uVar34 >> 1);
                            if (uVar34 == 0) {
                              iVar8 = 1;
                            }
                            local_128 = (long *)(ulong)(iVar8 + uVar34);
                            puVar10 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))
                                                         (0,local_f8,(long)local_128 << 4);
                            lVar38 = local_108;
                          }
                          puVar21 = puVar10 + uVar20 * 2;
                          uVar34 = uVar33 + 1;
                          if ((uint)uVar20 < uVar33) {
                            puVar28 = puVar10 + (ulong)uVar33 * 2;
                            do {
                              puVar23 = puVar28 + -2;
                              *puVar28 = *puVar23;
                              puVar28[1] = puVar28[-1];
                              puVar28 = puVar23;
                            } while (puVar21 < puVar23);
                          }
                        }
                        uVar33 = uVar34;
                        *puVar21 = uVar18;
                        uVar18 = *puVar39;
LAB_034ff34c:
                        *puVar21 = uVar18;
                        puVar21[1] = (ulong)puVar39;
                      }
                    }
                    else {
                      local_110 = puVar21;
                      local_fc = uVar33;
                      iVar8 = FUN_034fab6c(lVar38 + uVar27 * 0x158 + 0xc0);
                      if (iVar8 == 1) {
                        uVar33 = *(uint *)(lVar38 + uVar27 * 0x158 + 0xb8);
                        uVar20 = (ulong)uVar33;
                        if ((uVar33 & 0xf00) == 0x300) {
                          uVar20 = (ulong)(byte)*local_110;
                        }
                        lVar19 = lVar38 + uVar27 * 0x158;
                        plVar45 = (long *)(lVar19 + 0x128);
                        local_130 = (float *)CONCAT44(local_130._4_4_,uVar35);
                        if (*(long *)(lVar19 + 0x128) != 0) {
                          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
                          lVar38 = local_108;
                        }
                        *plVar45 = 0;
                        lVar26 = lVar38 + uVar27 * 0x158;
                        uVar20 = (uVar20 & 0xff) + 3;
                        *(undefined4 *)(lVar26 + 0x130) = 0;
                        local_140 = (long *)(lVar26 + 0x138);
                        *(undefined8 *)(lVar26 + 0x138) = 0;
                        *(undefined8 *)(lVar26 + 0x140) = 0;
                        lVar19 = uVar18 * (uVar20 >> 2);
                        lVar41 = lVar19 * 0x20;
                        iVar8 = (int)lVar41;
                        if (iVar8 != 0) {
                          local_160 = plVar45;
                          lVar41 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,lVar41,0x10);
                          *local_160 = lVar41;
                          lVar38 = local_108;
                          if (lVar41 == 0) {
                            uVar35 = (uint)local_130;
                            goto LAB_034ff234;
                          }
                          *(int *)(lVar26 + 0x130) = iVar8;
                          *local_140 = lVar41;
                          *(long *)(local_108 + uVar27 * 0x158 + 0x140) = lVar41 + lVar19 * 0x10;
                        }
                        puVar21 = local_110;
                        iVar8 = ((uint)uVar20 & 0x1fc) * uVar34;
                        if (iVar8 != 0) {
                          uVar18 = (ulong)(uint)(iVar8 * 4);
                          memset(*(void **)(lVar38 + uVar27 * 0x158 + 0x140),0,uVar18);
                          memset((void *)*local_140,0,uVar18);
                          lVar38 = local_108;
                        }
                        puVar10 = local_f8;
                        uVar35 = (uint)local_130;
                        *(char *)((long)ppuVar43 + uVar27) = '\x01';
                        uVar33 = local_fc;
                        goto LAB_034ff188;
                      }
LAB_034ff234:
                      puVar10 = local_f8;
                      uVar33 = local_fc;
                    }
                    uVar27 = uVar27 + 1;
                  } while (uVar27 != uVar42);
                  bVar32 = false;
                  uVar18 = local_180;
                }
                uVar27 = local_178;
                pcVar36 = (char *)ppuVar43;
                goto LAB_034ffd04;
              }
            }
            if (puVar10 != (ulong *)0x0) {
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar10);
            }
          }
          else if (*(int *)(lVar44 + 0x188) != 0) {
            lVar38 = *(long *)(lVar44 + 0x180);
            do {
              uVar27 = (ulong)*(uint *)(lVar38 + 0x14c) & 0xff;
              uVar33 = (uint)uVar27;
              if (uVar33 == *(byte *)(lVar38 + 0x120)) {
                uVar33 = 0;
                bVar32 = true;
LAB_034feeb0:
                if (*(long *)(lVar38 + 0x128) != 0) {
                  uVar4 = *(undefined8 *)(lVar38 + 0x138);
                  *(undefined8 *)(lVar38 + 0x138) = *(undefined8 *)(lVar38 + 0x140);
                  *(undefined8 *)(lVar38 + 0x140) = uVar4;
                  *(float *)(lVar38 + 0x5c) = *(float *)(lVar38 + 0x5c) + fVar51;
                  *(float *)(lVar38 + 0x58) = *(float *)(lVar38 + 0x58) * fVar55;
                  *(float *)(lVar38 + 0x60) = *(float *)(lVar38 + 0x60) + fVar52;
                  *(float *)(lVar38 + 100) = *(float *)(lVar38 + 100) + fVar53;
                  *(float *)(lVar38 + 0x68) = *(float *)(lVar38 + 0x68) * fVar54;
                  uVar34 = local_f0;
                  if (local_f0 == 0) {
                    uVar34 = *(uint *)(lVar38 + 0x70);
                  }
                  *(uint *)(lVar38 + 0x70) = uVar34;
                  *(byte *)(lVar38 + 0x74) = *(byte *)(lVar38 + 0x74) & (byte)local_ec;
                  FUN_0344546c(uVar35 | uVar33,*(undefined4 *)(lVar38 + 0x120),lVar44,lVar38);
                  if ((!bVar32) && (*(char *)(lVar38 + 0x148) != '\0')) {
                    uVar33 = *(uint *)(lVar38 + 0x120);
                    if ((*(uint *)(lVar38 + 0xb8) & 0xf00) != 0x300) {
                      uVar33 = *(uint *)(lVar38 + 0xb8);
                    }
                    lVar19 = ((ulong)((uVar33 & 0xff) + 3) & 0x1fc) *
                             ((ulong)*(uint *)(lVar38 + 0x120) & 0xff);
                    if ((int)lVar19 != 0) {
                      memcpy(*(void **)(lVar38 + 0x140),*(void **)(lVar38 + 0x138),lVar19 * 4);
                    }
                  }
                }
              }
              else {
                iVar8 = FUN_034fab6c(lVar38 + 0xc0);
                if (iVar8 == 1) {
                  uVar18 = (ulong)*(uint *)(lVar38 + 0xb8);
                  if ((*(uint *)(lVar38 + 0xb8) & 0xf00) == 0x300) {
                    uVar18 = (ulong)*(byte *)(lVar38 + 0x120);
                  }
                  if (*(long *)(lVar38 + 0x128) != 0) {
                    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
                  }
                  uVar18 = (uVar18 & 0xff) + 3;
                  *(undefined8 *)(lVar38 + 0x138) = 0;
                  *(undefined8 *)(lVar38 + 0x140) = 0;
                  lVar19 = uVar27 * (uVar18 >> 2) * 0x20;
                  *(undefined8 *)(lVar38 + 0x128) = 0;
                  *(undefined4 *)(lVar38 + 0x130) = 0;
                  uVar34 = (uint)lVar19;
                  if (uVar34 == 0) {
                    pvVar9 = (void *)0x0;
                  }
                  else {
                    lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,lVar19,0x10);
                    *(long *)(lVar38 + 0x128) = lVar19;
                    if (lVar19 == 0) goto LAB_034fef70;
                    *(uint *)(lVar38 + 0x130) = uVar34;
                    pvVar9 = (void *)(lVar19 + (ulong)(uVar34 >> 1));
                    *(long *)(lVar38 + 0x138) = lVar19;
                    *(void **)(lVar38 + 0x140) = pvVar9;
                  }
                  iVar8 = ((uint)uVar18 & 0x1fc) * uVar33;
                  if (iVar8 != 0) {
                    uVar27 = (ulong)(uint)(iVar8 * 4);
                    memset(pvVar9,0,uVar27);
                    memset(*(void **)(lVar38 + 0x138),0,uVar27);
                  }
                  bVar32 = false;
                  uVar33 = 1;
                  goto LAB_034feeb0;
                }
              }
LAB_034fef70:
              lVar38 = lVar38 + 0x158;
            } while (lVar38 != *(long *)(lVar44 + 0x180) + (ulong)*(uint *)(lVar44 + 0x188) * 0x158)
            ;
          }
        }
        else {
          uVar27 = (ulong)*(uint *)(param_3 + 0x150);
          plVar45 = (long *)((long)ppuVar43 + -(uVar27 * 8 + 0xf & 0xffffffff0));
          pfVar40 = (float *)((long)plVar45 - (uVar27 * 4 + 0xf & 0x7fffffff0));
          fVar46 = 1.0 / *(float *)(lVar44 + 0x14);
          if (*(float *)(lVar44 + 0x14) <= *(float *)PTR_DAT_047e70f8) {
            fVar46 = 1.0;
          }
          if (*(uint *)(param_3 + 0x150) == 0) {
            uVar30 = 0;
            uVar33 = 0;
          }
          else {
            lVar19 = uVar27 * 0x78;
            lVar38 = *(long *)(param_3 + 0x148);
            uVar27 = 0;
            do {
              uVar18 = uVar27;
              if (*(long *)(lVar44 + 0x1b0) == *(long *)(lVar38 + 0x60)) {
                plVar45[uVar27] = lVar38;
                iVar8 = *(int *)(lVar44 + 0x1d4);
                if (iVar8 == 2) {
                  fVar47 = *(float *)(lVar38 + 0x38);
                }
                else if (iVar8 == 1) {
                  fVar47 = *(float *)(lVar38 + 0x34);
                }
                else {
                  fVar47 = 1.0;
                  if (iVar8 == 0) {
                    fVar47 = *(float *)(lVar38 + 0x30);
                  }
                }
                uVar18 = (ulong)((int)uVar27 + 1);
                pfVar40[uVar27] = fVar47 * fVar46;
              }
              uVar33 = (uint)uVar18;
              lVar38 = lVar38 + 0x78;
              lVar19 = lVar19 + -0x78;
              uVar27 = uVar18;
            } while (lVar19 != 0);
            if (uVar33 < 2) {
              uVar30 = 0;
            }
            else {
              if ((*(long **)(param_3 + 0x178) != (long *)0x0) &&
                 (uVar27 = (**(code **)(**(long **)(param_3 + 0x178) + 0x38))(), (uVar27 & 1) != 0))
              {
                fVar47 = (float)NEON_fminnm(*(undefined4 *)(lVar44 + 0x1c4),0x42c80000);
                fVar46 = (float)NEON_fminnm(*(undefined4 *)(lVar44 + 0x1c0),0x42c80000);
                if (fVar46 <= 0.0) {
                  fVar46 = fVar56;
                }
                if (fVar47 <= 0.0) {
                  fVar47 = fVar56;
                }
                fVar47 = (float)NEON_fminnm(fVar47 * (fVar47 * fVar47 * -1.3191276e-10 +
                                                     0.0031678583) + 0.98224795,0x3f800000);
                plVar25 = plVar45;
                pfVar24 = pfVar40;
                do {
                  uVar18 = uVar18 - 1;
                  fVar49 = (float)NEON_fminnm(*(undefined4 *)(*plVar25 + 0x6c),0x42c80000);
                  fVar48 = (float)NEON_fminnm(*(undefined4 *)(*plVar25 + 0x70),0x42c80000);
                  if (fVar48 <= 0.0) {
                    fVar48 = fVar56;
                  }
                  if (fVar49 <= 0.0) {
                    fVar49 = fVar56;
                  }
                  fVar48 = (float)NEON_fminnm(fVar48 * (fVar48 * fVar48 * -1.3191276e-10 +
                                                       0.0031678583) + 0.98224795,0x3f800000);
                  *pfVar24 = (fVar49 * (fVar49 * (fVar49 * 9.302722e-07 + -0.00017546544) +
                                       -0.0011517591) + 0.9843052) * *pfVar24 * fVar48 *
                             (1.0 / (fVar47 * (fVar46 * (fVar46 * (fVar46 * 9.302722e-07 +
                                                                  -0.00017546544) + -0.0011517591) +
                                              0.9843052)));
                  plVar25 = plVar25 + 1;
                  pfVar24 = pfVar24 + 1;
                } while (uVar18 != 0);
              }
              uVar30 = 1;
            }
          }
          uVar34 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
          if (uVar34 != 0) {
            uVar17 = 0;
            uVar22 = (uint)*(long *)(lVar44 + 0x1b0);
            if (uVar34 != 0) {
              uVar17 = uVar22 / uVar34;
            }
            for (plVar25 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                                     (ulong)(uVar22 - uVar17 * uVar34) * 8); plVar25 != (long *)0x0;
                plVar25 = (long *)*plVar25) {
              if (plVar25[1] == *(long *)(lVar44 + 0x1b0)) {
                if (plVar25[2] != 0) {
                  local_108 = *(long *)(plVar25[2] + 0x40);
                  goto LAB_034ff604;
                }
                break;
              }
            }
          }
          local_108 = 0;
LAB_034ff604:
          local_fc = uVar33;
          if ((*(uint *)(*(long *)(lVar44 + 0x198) + 0x158) & 0xf00) == 0x300) {
            local_130 = pfVar40;
            local_128 = plVar45;
            uVar34 = *(uint *)(lVar44 + 0x188);
            uVar27 = (ulong)uVar34;
            uVar18 = *(ulong *)(lVar44 + 0x180);
            ppuVar43 = (undefined8 **)((long)pfVar40 - (uVar27 + 0xf & 0x1fffffff0));
            local_160 = (long *)CONCAT44(local_160._4_4_,uVar30);
            if (uVar34 != 0) {
              uVar42 = 0;
              local_148 = uVar18;
              local_140 = (long *)(ulong)uVar33;
              do {
                lVar38 = uVar18 + uVar42 * 0x158;
                *(char *)((long)ppuVar43 + uVar42) = '\0';
                local_f8 = (ulong *)(lVar38 + 0x120);
                uVar20 = (ulong)*(uint *)(lVar38 + 0x14c) & 0xff;
                uVar35 = (uint)uVar20;
                if (uVar35 == *(byte *)(lVar38 + 0x120)) {
LAB_034ff790:
                  if (*(long *)(uVar18 + uVar42 * 0x158 + 0x128) != 0) {
                    lVar38 = uVar18 + uVar42 * 0x158;
                    plVar45 = (long *)(lVar38 + 0x138);
                    uVar4 = *(undefined8 *)(lVar38 + 0x138);
                    *(undefined8 *)(lVar38 + 0x138) = *(undefined8 *)(lVar38 + 0x140);
                    *(undefined8 *)(lVar38 + 0x140) = uVar4;
                    local_b8 = 0;
                    if (local_fc != 0) {
                      pfVar40 = local_130;
                      plVar25 = local_128;
                      plVar29 = local_140;
                      do {
                        lVar38 = *plVar25;
                        if (*(int *)(lVar38 + 0x5c) == *(int *)(uVar18 + uVar42 * 0x158 + 0x10)) {
                          local_b8 = lVar38;
                          if ((local_108 != 0) && (lVar38 != 0)) {
                            fVar48 = *pfVar40;
                            lVar38 = uVar18 + uVar42 * 0x158;
                            *(float *)(lVar38 + 0x5c) = *(float *)(lVar38 + 0x5c) + fVar51;
                            *(float *)(lVar38 + 0x58) = *(float *)(lVar38 + 0x58) * fVar55;
                            *(float *)(lVar38 + 0x60) = *(float *)(lVar38 + 0x60) + fVar52;
                            *(float *)(lVar38 + 100) = *(float *)(lVar38 + 100) + fVar53;
                            fVar46 = *(float *)(lVar38 + 0x68);
                            fVar47 = fVar46 * fVar54;
                            *(float *)(lVar38 + 0x68) = fVar47;
                            uVar35 = local_f0;
                            if (local_f0 == 0) {
                              uVar35 = *(uint *)(uVar18 + uVar42 * 0x158 + 0x70);
                            }
                            lVar38 = uVar18 + uVar42 * 0x158;
                            uVar33 = *(uint *)(lVar38 + 0x6c);
                            *(uint *)(lVar38 + 0x70) = uVar35;
                            *(byte *)(lVar38 + 0x74) = *(byte *)(lVar38 + 0x74) & (byte)local_ec;
                            local_e8 = 0;
                            uStack_e0 = 0x3f800000;
                            local_c0 = 0xffff3f800000;
                            local_d0 = 0;
                            uStack_c8 = 0x3f80000000000000;
                            local_d8 = 0x3f800000;
                            *(undefined8 **)((long)ppuVar43 + -0x10) = &local_e8;
                            uVar35 = local_11c;
                            local_110 = (ulong *)(lVar38 + 0x28);
                            FUN_03445c24(fVar46,fVar47,fVar55,fVar51,fVar52,fVar53,
                                         (ulong *)(lVar38 + 0x28),1,&local_b8,uVar33,local_11c,
                                         local_108,local_150,local_158);
                            if ((int)uVar33 < (int)uVar35) {
                              *(uint *)(lVar38 + 0x6c) = local_11c;
                            }
                            uVar20 = *local_f8;
                            uVar31 = (ulong)(uint)uVar20;
                            memcpy(local_110,&local_e8,0x30);
                            uVar33 = *(uint *)(uVar18 + uVar42 * 0x158 + 0xb8);
                            uVar35 = (uint)uVar20;
                            uVar20 = uVar31;
                            if ((uVar33 & 0xf00) != 0x300) {
                              uVar35 = uVar33;
                              uVar20 = (ulong)uVar33;
                            }
                            FUN_034d19bc(uVar31,uVar20,*plVar45);
                            lVar38 = ((ulong)((uVar35 & 0xff) + 3) & 0x1fc) * (uVar31 & 0xff);
                            if ((int)lVar38 != 0) {
                              pfVar40 = (float *)(*plVar45 + 8);
                              do {
                                pfVar40[-2] = pfVar40[-2] * fVar48;
                                pfVar40[-1] = pfVar40[-1] * fVar48;
                                *pfVar40 = *pfVar40 * fVar48;
                                pfVar40[1] = pfVar40[1] * fVar48;
                                lVar38 = lVar38 + -4;
                                pfVar40 = pfVar40 + 4;
                              } while (lVar38 != 0);
                            }
                            goto LAB_034ff9c0;
                          }
                          break;
                        }
                        pfVar40 = pfVar40 + 1;
                        plVar29 = (long *)((long)plVar29 + -1);
                        plVar25 = plVar25 + 1;
                      } while (plVar29 != (long *)0x0);
                    }
                    uVar33 = *(uint *)(uVar18 + uVar42 * 0x158 + 0xb8);
                    uVar35 = (uint)*local_f8;
                    if ((uVar33 & 0xf00) != 0x300) {
                      uVar35 = uVar33;
                    }
                    lVar38 = ((ulong)((uVar35 & 0xff) + 3) & 0x1fc) *
                             ((ulong)(uint)*local_f8 & 0xff);
                    if ((int)lVar38 != 0) {
                      memset((void *)*plVar45,0,lVar38 * 4);
                    }
                  }
                }
                else {
                  iVar8 = FUN_034fab6c(uVar18 + uVar42 * 0x158 + 0xc0);
                  if (iVar8 == 1) {
                    uVar33 = *(uint *)(uVar18 + uVar42 * 0x158 + 0xb8);
                    uVar31 = (ulong)uVar33;
                    if ((uVar33 & 0xf00) == 0x300) {
                      uVar31 = (ulong)(byte)*local_f8;
                    }
                    lVar38 = uVar18 + uVar42 * 0x158;
                    puVar10 = (ulong *)(lVar38 + 0x128);
                    if (*(long *)(lVar38 + 0x128) != 0) {
                      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
                    }
                    *puVar10 = 0;
                    lVar19 = uVar18 + uVar42 * 0x158;
                    uVar31 = (uVar31 & 0xff) + 3;
                    *(undefined4 *)(lVar19 + 0x130) = 0;
                    local_110 = (ulong *)(lVar19 + 0x138);
                    *(undefined8 *)(lVar19 + 0x138) = 0;
                    *(undefined8 *)(lVar19 + 0x140) = 0;
                    lVar38 = uVar20 * (uVar31 >> 2);
                    lVar26 = lVar38 * 0x20;
                    iVar8 = (int)lVar26;
                    if (iVar8 != 0) {
                      uVar20 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,lVar26,0x10);
                      *puVar10 = uVar20;
                      uVar18 = local_148;
                      if (uVar20 == 0) goto LAB_034ff9c0;
                      *(int *)(lVar19 + 0x130) = iVar8;
                      *local_110 = uVar20;
                      *(ulong *)(local_148 + uVar42 * 0x158 + 0x140) = uVar20 + lVar38 * 0x10;
                    }
                    iVar8 = ((uint)uVar31 & 0x1fc) * uVar35;
                    if (iVar8 != 0) {
                      uVar20 = (ulong)(uint)(iVar8 * 4);
                      memset(*(void **)(uVar18 + uVar42 * 0x158 + 0x140),0,uVar20);
                      memset((void *)*local_110,0,uVar20);
                    }
                    *(char *)((long)ppuVar43 + uVar42) = '\x01';
                    goto LAB_034ff790;
                  }
                }
LAB_034ff9c0:
                uVar42 = uVar42 + 1;
              } while (uVar42 != uVar27);
            }
            if ((((ulong)local_160 & 1) != 0) &&
               (((*(long **)(local_118 + 0x178) != (long *)0x0 &&
                 (uVar42 = (**(code **)(**(long **)(local_118 + 0x178) + 0x38))(), (uVar42 & 1) != 0
                 )) || ((*(byte *)(*(long *)(*(long *)(local_118 + 0x10) + 0x28) + 0x3a) & 7) != 1))
               )) {
              FUN_034460b4(local_fc,local_128,local_130,lVar44 + 0x28);
            }
            uVar35 = local_100;
            if (uVar34 != 0) {
              pcVar36 = (char *)(uVar18 + 0x148);
              pcVar37 = (char *)ppuVar43;
              do {
                if ((*pcVar37 != '\0') && (*pcVar36 != '\0')) {
                  uVar33 = *(uint *)(pcVar36 + -0x28);
                  if ((*(uint *)(pcVar36 + -0x90) & 0xf00) != 0x300) {
                    uVar33 = *(uint *)(pcVar36 + -0x90);
                  }
                  lVar38 = ((ulong)((uVar33 & 0xff) + 3) & 0x1fc) *
                           ((ulong)*(uint *)(pcVar36 + -0x28) & 0xff);
                  if ((int)lVar38 != 0) {
                    memcpy(*(void **)(pcVar36 + -8),*(void **)(pcVar36 + -0x10),lVar38 * 4);
                  }
                }
                uVar27 = uVar27 - 1;
                pcVar36 = pcVar36 + 0x158;
                pcVar37 = pcVar37 + 1;
              } while (uVar27 != 0);
            }
          }
          else {
            ppuVar43 = (undefined8 **)pfVar40;
            if (((uVar33 != 0) && (local_108 != 0)) && (*(int *)(lVar44 + 0x188) != 0)) {
              lVar38 = *(long *)(lVar44 + 0x180);
              local_f8 = (ulong *)(ulong)uVar33;
              do {
                uVar27 = (ulong)*(uint *)(lVar38 + 0x14c) & 0xff;
                uVar35 = (uint)uVar27;
                if (uVar35 == *(byte *)(lVar38 + 0x120)) {
                  uVar35 = 0;
                  bVar32 = true;
LAB_034ffba4:
                  if (*(long *)(lVar38 + 0x128) != 0) {
                    uVar4 = *(undefined8 *)(lVar38 + 0x138);
                    *(undefined8 *)(lVar38 + 0x138) = *(undefined8 *)(lVar38 + 0x140);
                    *(undefined8 *)(lVar38 + 0x140) = uVar4;
                    *(float *)(lVar38 + 0x58) = *(float *)(lVar38 + 0x58) * fVar55;
                    *(float *)(lVar38 + 0x5c) = *(float *)(lVar38 + 0x5c) + fVar51;
                    *(float *)(lVar38 + 0x60) = *(float *)(lVar38 + 0x60) + fVar52;
                    *(float *)(lVar38 + 100) = *(float *)(lVar38 + 100) + fVar53;
                    *(float *)(lVar38 + 0x68) = *(float *)(lVar38 + 0x68) * fVar54;
                    uVar33 = local_f0;
                    if (local_f0 == 0) {
                      uVar33 = *(uint *)(lVar38 + 0x70);
                    }
                    *(uint *)(lVar38 + 0x70) = uVar33;
                    *(byte *)(lVar38 + 0x74) = *(byte *)(lVar38 + 0x74) & (byte)local_ec;
                    ppuVar43 = (undefined8 **)((long)ppuVar43 + (long)local_f8 * -0xc * 4);
                    iVar8 = *(int *)(lVar38 + 0x6c);
                    *(undefined8 ***)((long)ppuVar43 + -0x10) = ppuVar43;
                    uVar33 = local_11c;
                    FUN_03445c24(lVar38 + 0x28,local_fc,plVar45,iVar8,local_11c,local_108,local_150,
                                 local_158);
                    if (iVar8 < (int)uVar33) {
                      *(uint *)(lVar38 + 0x6c) = local_11c;
                    }
                    uVar35 = local_100 | uVar35;
                    uVar30 = *(undefined4 *)(lVar38 + 0x120);
                    *(long *)((long)ppuVar43 + -0x10) = lVar38;
                    FUN_034463f8(local_108,local_fc,plVar45,pfVar40,ppuVar43,uVar35,uVar30,lVar44);
                    if ((!bVar32) && (*(char *)(lVar38 + 0x148) != '\0')) {
                      uVar35 = *(uint *)(lVar38 + 0x120);
                      if ((*(uint *)(lVar38 + 0xb8) & 0xf00) != 0x300) {
                        uVar35 = *(uint *)(lVar38 + 0xb8);
                      }
                      lVar19 = ((ulong)((uVar35 & 0xff) + 3) & 0x1fc) *
                               ((ulong)*(uint *)(lVar38 + 0x120) & 0xff);
                      if ((int)lVar19 != 0) {
                        memcpy(*(void **)(lVar38 + 0x140),*(void **)(lVar38 + 0x138),lVar19 * 4);
                      }
                    }
                  }
                }
                else {
                  iVar8 = FUN_034fab6c(lVar38 + 0xc0);
                  if (iVar8 == 1) {
                    uVar18 = (ulong)*(uint *)(lVar38 + 0xb8);
                    if ((*(uint *)(lVar38 + 0xb8) & 0xf00) == 0x300) {
                      uVar18 = (ulong)*(byte *)(lVar38 + 0x120);
                    }
                    if (*(long *)(lVar38 + 0x128) != 0) {
                      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
                    }
                    uVar18 = (uVar18 & 0xff) + 3;
                    *(undefined8 *)(lVar38 + 0x138) = 0;
                    *(undefined8 *)(lVar38 + 0x140) = 0;
                    lVar19 = uVar27 * (uVar18 >> 2) * 0x20;
                    *(undefined8 *)(lVar38 + 0x128) = 0;
                    *(undefined4 *)(lVar38 + 0x130) = 0;
                    uVar33 = (uint)lVar19;
                    if (uVar33 == 0) {
                      pvVar9 = (void *)0x0;
                    }
                    else {
                      lVar19 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,lVar19,0x10);
                      *(long *)(lVar38 + 0x128) = lVar19;
                      if (lVar19 == 0) goto LAB_034ffccc;
                      *(uint *)(lVar38 + 0x130) = uVar33;
                      pvVar9 = (void *)(lVar19 + (ulong)(uVar33 >> 1));
                      *(long *)(lVar38 + 0x138) = lVar19;
                      *(void **)(lVar38 + 0x140) = pvVar9;
                    }
                    iVar8 = ((uint)uVar18 & 0x1fc) * uVar35;
                    if (iVar8 != 0) {
                      uVar27 = (ulong)(uint)(iVar8 * 4);
                      memset(pvVar9,0,uVar27);
                      memset(*(void **)(lVar38 + 0x138),0,uVar27);
                    }
                    bVar32 = false;
                    uVar35 = 1;
                    goto LAB_034ffba4;
                  }
                }
LAB_034ffccc:
                lVar38 = lVar38 + 0x158;
                uVar35 = local_100;
              } while (lVar38 != *(long *)(lVar44 + 0x180) +
                                 (ulong)*(uint *)(lVar44 + 0x188) * 0x158);
            }
          }
        }
        if (local_138 != 0) {
          FUN_03447920(local_138,lVar44);
        }
        param_3 = local_118;
        if ((*(byte *)(lVar44 + 0x1d8) >> 1 & 1) == 0) {
          if ((*(byte *)(local_168 + 0x50) >> 1 & 1) == 0) {
            *(undefined4 *)(lVar44 + 8) = *(undefined4 *)(lVar44 + 0xc);
            *(undefined4 *)(lVar44 + 0x10) = *(undefined4 *)(lVar44 + 0x14);
            if ((local_16c & 1) != 0) {
              *(undefined4 *)(lVar44 + 8) = 0;
            }
          }
        }
        else {
          uVar33 = *(uint *)(lVar44 + 0x188);
          *(undefined4 *)(lVar44 + 8) = 0;
          if (uVar33 != 0) {
            lVar19 = *(long *)(lVar44 + 0x180);
            lVar38 = lVar19;
            do {
              if (*(long *)(lVar38 + 0x128) != 0) {
                uVar34 = *(uint *)(lVar38 + 0x120);
                if ((*(uint *)(lVar38 + 0xb8) & 0xf00) != 0x300) {
                  uVar34 = *(uint *)(lVar38 + 0xb8);
                }
                lVar26 = ((ulong)((uVar34 & 0xff) + 3) & 0x1fc) *
                         ((ulong)*(uint *)(lVar38 + 0x120) & 0xff);
                if ((int)lVar26 != 0) {
                  memcpy(*(void **)(lVar38 + 0x140),*(void **)(lVar38 + 0x138),lVar26 * 4);
                  lVar19 = *(long *)(lVar44 + 0x180);
                  uVar33 = *(uint *)(lVar44 + 0x188);
                }
              }
              lVar38 = lVar38 + 0x158;
            } while (lVar38 != lVar19 + (ulong)uVar33 * 0x158);
          }
        }
      }
      else {
        *(undefined4 *)(lVar44 + 0xc) = 0;
        if ((*(byte *)(lVar44 + 0x1d8) >> 1 & 1) == 0) goto LAB_034fed88;
      }
      lVar44 = *(long *)(lVar44 + 0x20);
    } while (lVar44 != 0);
  }
  uVar4 = *local_190;
  uVar5 = local_190[1];
  *(undefined4 *)(local_188 + 2) = *(undefined4 *)(local_190 + 2);
  *local_188 = uVar4;
  local_188[1] = uVar5;
  return;
}


