/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d83f60; name: FUN_00d83f60
 */


void FUN_00d83f60(long param_1)

{
  uint *puVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [12];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined4 uVar25;
  long lVar26;
  ulong uVar27;
  char *__s1;
  long lVar28;
  long *plVar29;
  ulong *puVar30;
  undefined4 uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  float fVar60;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  string local_98;
  undefined7 uStack_97;
  char local_90;
  undefined4 uStack_8f;
  undefined1 uStack_8b;
  undefined2 uStack_8a;
  void *local_88;
  long *local_80;
  
  *(undefined4 *)(param_1 + 0xc0) = 0;
  lVar9 = DAT_0485a0e8;
  plVar2 = (long *)(DAT_0485a0e8 + 0xd70);
  lVar15 = nn::os::GetCurrentThread();
  do {
    lVar28 = *plVar2;
    lVar26 = *(long *)(lVar9 + 0xd78);
    cVar3 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar20) {
      *plVar2 = lVar28;
      *(long *)(lVar9 + 0xd78) = lVar26;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d83fb8:
  while ((lVar28 != 0 && (lVar15 != lVar28))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xd80));
    do {
      lVar28 = *plVar2;
      lVar26 = *(long *)(lVar9 + 0xd78);
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *plVar2 = lVar28;
        *(long *)(lVar9 + 0xd78) = lVar26;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    lVar24 = *plVar2;
    lVar23 = *(long *)(lVar9 + 0xd78);
    if (lVar24 != lVar28 || lVar23 != lVar26) {
      bVar20 = false;
      ClearExclusiveLocal();
      goto LAB_00d83fe8;
    }
    cVar3 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar20) {
      *plVar2 = lVar28;
      *(long *)(lVar9 + 0xd74) = lVar26 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar20 = true;
LAB_00d83fe8:
  if (!bVar20) {
    lVar28 = lVar24;
    lVar26 = lVar23;
    goto LAB_00d83fb8;
  }
  lVar15 = *(long *)(lVar9 + 0x38);
  lVar28 = *(long *)(lVar9 + 0x40);
  if (lVar28 != lVar15) {
    auVar33 = NEON_fmov(0x3f800000,4);
    uVar27 = 0;
LAB_00d840b4:
    uVar19 = 0xc90901343789790e;
    if (*(long *)(lVar15 + (long)(int)uVar27 * 0x1d0 + 0x1c8) == 0) {
      if (*(char *)(lVar15 + uVar27 * 0x1d0 + 0x1b8) != '\0') {
        __s1 = *(char **)(lVar15 + uVar27 * 0x1d0 + 0x30);
        iVar13 = strcmp(__s1,PTR_s_Point_047dcf18);
        if (iVar13 != 0) {
          iVar13 = strcmp(__s1,PTR_s_Directional_047e12e8);
          if (iVar13 != 0) goto LAB_00d84084;
          fVar60 = 0.0;
          uVar19 = *(ulong *)(lVar15 + uVar27 * 0x1d0 + 0x88);
          if (uVar19 != 0) {
            uVar16 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
            uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
            uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar16 < 2) {
              uVar17 = uVar19 - 1 & 0x6f96bc6f892816d8;
            }
            else if (uVar19 < 0x6f96bc6f892816d9) {
              uVar17 = 0;
              if (uVar19 != 0) {
                uVar17 = 0x6f96bc6f892816d8 / uVar19;
              }
              uVar17 = 0x6f96bc6f892816d8 - uVar17 * uVar19;
            }
            else {
              uVar17 = 0x6f96bc6f892816d8;
            }
            fVar60 = 0.0;
            plVar21 = *(long **)(*(long *)(lVar15 + uVar27 * 0x1d0 + 0x80) + uVar17 * 8);
            if (plVar21 != (long *)0x0) {
              fVar60 = 0.0;
              plVar21 = (long *)*plVar21;
              if (plVar21 != (long *)0x0) {
                if (uVar16 < 2) {
                  do {
                    if (plVar21[1] == 0x6f96bc6f892816d8) {
                      if (plVar21[2] == 0x6f96bc6f892816d8) goto LAB_00d84cd4;
                    }
                    else if ((plVar21[1] & uVar19 - 1) != uVar17) break;
                    plVar21 = (long *)*plVar21;
                  } while (plVar21 != (long *)0x0);
                }
                else {
                  do {
                    uVar16 = plVar21[1];
                    if (uVar16 == 0x6f96bc6f892816d8) {
                      if (plVar21[2] == 0x6f96bc6f892816d8) goto LAB_00d84cd4;
                    }
                    else {
                      if (uVar19 <= uVar16) {
                        uVar18 = 0;
                        if (uVar19 != 0) {
                          uVar18 = uVar16 / uVar19;
                        }
                        uVar16 = uVar16 - uVar18 * uVar19;
                      }
                      if (uVar16 != uVar17) break;
                    }
                    plVar21 = (long *)*plVar21;
                  } while (plVar21 != (long *)0x0);
                }
                fVar60 = 0.0;
              }
            }
          }
          goto LAB_00d84cd8;
        }
        if (0xff < *(uint *)(param_1 + 0xc0)) goto LAB_00d84084;
        lVar26 = lVar15 + uVar27 * 0x1d0;
        fVar60 = *(float *)(lVar26 + 0x50);
        fVar41 = *(float *)(lVar26 + 0x54);
        fVar35 = *(float *)(lVar26 + 0x58);
        pauVar5 = (undefined1 (*) [12])(lVar26 + 0x60);
        fVar40 = (float)*(undefined8 *)(lVar26 + 0x68);
        fVar44 = (float)((ulong)*(undefined8 *)(lVar26 + 0x68) >> 0x20);
        fVar36 = (float)*(undefined8 *)*pauVar5;
        fVar43 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
        auVar50._12_4_ = fVar44;
        auVar50._0_12_ = *pauVar5;
        auVar6._12_4_ = fVar44;
        auVar6._0_12_ = *pauVar5;
        auVar50 = NEON_ext(auVar50,auVar6,0xc,1);
        uVar31 = SUB124(*pauVar5,0);
        auVar51._4_12_ = auVar50._4_12_;
        auVar51._0_4_ = uVar31;
        auVar53._12_4_ = auVar50._12_4_;
        auVar53._0_8_ = auVar51._0_8_;
        auVar53._8_4_ = SUB124(*pauVar5,4);
        auVar52._8_8_ = auVar53._8_8_;
        auVar52._4_4_ = auVar50._0_4_;
        auVar52._0_4_ = uVar31;
        auVar54._0_12_ = auVar52._0_12_;
        auVar54._12_4_ = auVar50._4_4_;
        auVar50 = NEON_ext(auVar54,auVar54,8,1);
        fVar60 = (float)((uint)fVar60 ^ ((uint)fVar60 ^ 0x2b8cbccc) & -(uint)(ABS(fVar60) < 1e-12));
        fVar48 = fVar43 * fVar43 + fVar43 * fVar43;
        fVar49 = fVar40 * fVar40 + fVar40 * fVar40;
        fVar45 = fVar36 * fVar44 + fVar36 * fVar44;
        fVar46 = fVar43 * fVar44 + fVar43 * fVar44;
        fVar47 = fVar40 * fVar44 + fVar40 * fVar44;
        fVar40 = auVar50._0_4_ * SUB124(*pauVar5,8);
        fVar42 = auVar50._4_4_ * SUB124(*pauVar5,8);
        fVar43 = auVar50._8_4_ * fVar43;
        local_110 = auVar33._0_4_;
        fStack_10c = auVar33._4_4_;
        fStack_108 = auVar33._8_4_;
        fStack_104 = auVar33._12_4_;
        auVar55._0_4_ = local_110 - (fVar36 * fVar36 + fVar36 * fVar36);
        auVar55._4_4_ = fStack_10c - fVar48;
        auVar55._8_4_ = fStack_108 - fVar49;
        auVar55._12_4_ = fStack_104 - (fVar44 * fVar44 + fVar44 * fVar44);
        auVar56._4_12_ = auVar55._4_12_;
        auVar56._0_4_ = auVar55._0_4_;
        auVar58._0_8_ = auVar56._0_8_;
        auVar58._8_4_ = auVar55._4_4_;
        auVar58._12_4_ = auVar55._12_4_;
        auVar57._8_8_ = auVar58._8_8_;
        auVar57._4_4_ = auVar55._0_4_;
        auVar57._0_4_ = auVar55._0_4_;
        auVar59._0_12_ = auVar57._0_12_;
        auVar59._12_4_ = auVar55._4_4_;
        auVar50 = NEON_ext(auVar59,auVar59,0xc,1);
        fVar40 = fVar40 + fVar40;
        fVar42 = fVar42 + fVar42;
        fVar43 = fVar43 + fVar43;
        fVar41 = (float)((uint)fVar41 ^ ((uint)fVar41 ^ 0x2b8cbccc) & -(uint)(ABS(fVar41) < 1e-12));
        fVar35 = (float)((uint)fVar35 ^ ((uint)fVar35 ^ 0x2b8cbccc) & -(uint)(ABS(fVar35) < 1e-12));
        uVar8 = *(undefined8 *)(lVar26 + 0x78);
        uVar7 = *(undefined8 *)(lVar26 + 0x70);
        auVar38._0_8_ = CONCAT44((auVar50._4_4_ - fVar49) * fVar41,(fVar43 - fVar47) * fVar41);
        auVar38._8_4_ = (fVar40 + fVar45) * fVar41;
        auVar38._12_4_ = fVar41 * 0.0;
        auVar34._0_8_ = CONCAT44((fVar40 - fVar45) * fVar35,(fVar42 + fVar46) * fVar35);
        auVar34._8_4_ = (auVar50._8_4_ - fVar48) * fVar35;
        auVar34._12_4_ = fVar35 * 0.0;
        lVar28 = *(long *)(param_1 + 0x88);
        FUN_00c41540(lVar28);
        lVar28 = lVar28 + (ulong)*(uint *)(param_1 + 0xc0) * 0x40;
        *(ulong *)(lVar28 + 0x84) = CONCAT44(fVar60 * 0.0,(fVar42 - fVar46) * fVar60);
        *(ulong *)(lVar28 + 0x7c) =
             CONCAT44((fVar43 + fVar47) * fVar60,(auVar50._0_4_ - fVar49) * fVar60);
        *(long *)(lVar28 + 0x94) = auVar38._8_8_;
        *(undefined8 *)(lVar28 + 0x8c) = auVar38._0_8_;
        *(long *)(lVar28 + 0xa4) = auVar34._8_8_;
        *(undefined8 *)(lVar28 + 0x9c) = auVar34._0_8_;
        *(ulong *)(lVar28 + 0xb4) = CONCAT44(0x3f800000,(int)uVar8);
        *(undefined8 *)(lVar28 + 0xac) = uVar7;
        uVar16 = *(ulong *)(lVar26 + 0xf0);
        auVar39 = ZEXT816(0);
        if (uVar16 != 0) {
          uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
          uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar17 < 2) {
            uVar18 = uVar16 - 1 & 0xa9467a944c3c2678;
          }
          else {
            uVar18 = 0xa9467a944c3c2678;
            if (uVar16 < 0xa9467a944c3c2679) {
              uVar18 = 0;
              if (uVar16 != 0) {
                uVar18 = 0xa9467a944c3c2678 / uVar16;
              }
              uVar18 = 0xa9467a944c3c2678 - uVar18 * uVar16;
            }
          }
          auVar39 = ZEXT816(0);
          plVar21 = *(long **)(*(long *)(lVar15 + uVar27 * 0x1d0 + 0xe8) + uVar18 * 8);
          if (plVar21 != (long *)0x0) {
            plVar21 = (long *)*plVar21;
            auVar39 = ZEXT816(0);
            if (plVar21 != (long *)0x0) {
              if (uVar17 < 2) {
                do {
                  if (plVar21[1] == 0xa9467a944c3c2678) {
                    if (plVar21[2] == -0x56b9856bb3c3d988) goto LAB_00d84330;
                  }
                  else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
                  plVar21 = (long *)*plVar21;
                } while (plVar21 != (long *)0x0);
              }
              else {
                do {
                  uVar17 = plVar21[1];
                  if (uVar17 == 0xa9467a944c3c2678) {
                    if (plVar21[2] == -0x56b9856bb3c3d988) goto LAB_00d84330;
                  }
                  else {
                    if (uVar16 <= uVar17) {
                      uVar4 = 0;
                      if (uVar16 != 0) {
                        uVar4 = uVar17 / uVar16;
                      }
                      uVar17 = uVar17 - uVar4 * uVar16;
                    }
                    if (uVar17 != uVar18) break;
                  }
                  plVar21 = (long *)*plVar21;
                } while (plVar21 != (long *)0x0);
              }
              auVar39 = ZEXT816(0);
            }
          }
        }
        goto LAB_00d84428;
      }
      goto LAB_00d84084;
    }
    goto LAB_00d8408c;
  }
LAB_00d8509c:
  do {
    lVar15 = *plVar2;
    lVar28 = *(long *)(lVar9 + 0xd78);
    cVar3 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar20) {
      *plVar2 = lVar15;
      *(long *)(lVar9 + 0xd78) = lVar28;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar26 = *plVar2;
    lVar24 = *(long *)(lVar9 + 0xd78);
    if (lVar26 != lVar15 || lVar24 != lVar28) {
      bVar20 = false;
      ClearExclusiveLocal();
      goto joined_r0x00d850d0;
    }
    cVar3 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar20) {
      *plVar2 = lVar15;
      *(long *)(lVar9 + 0xd74) = lVar28 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar20 = true;
joined_r0x00d850d0:
  do {
    if (bVar20) {
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xd80));
      return;
    }
    do {
      lVar15 = *plVar2;
      lVar28 = *(long *)(lVar9 + 0xd78);
      if (lVar15 != lVar26 || lVar28 != lVar24) {
        bVar20 = false;
        ClearExclusiveLocal();
        lVar26 = lVar15;
        lVar24 = lVar28;
        goto joined_r0x00d850d0;
      }
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar20) {
        *plVar2 = lVar26;
        *(long *)(lVar9 + 0xd74) = lVar24 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar20 = true;
    lVar26 = lVar15;
    lVar24 = lVar28;
  } while( true );
LAB_00d84cd4:
  fVar60 = *(float *)(plVar21 + 6);
LAB_00d84cd8:
  local_98 = (string)0xd7;
  uStack_97 = 0xef2fed89a983fb;
  local_90 = (char)PTR_s_LightType_047e1550;
  uStack_8f = (undefined4)((ulong)PTR_s_LightType_047e1550 >> 8);
  uStack_8b = (undefined1)((ulong)PTR_s_LightType_047e1550 >> 0x28);
  uStack_8a = (undefined2)((ulong)PTR_s_LightType_047e1550 >> 0x30);
  local_88 = (void *)0x1f;
  local_80 = (long *)0x0;
  local_b8 = 0x757527f9d900520e;
  local_b0 = PTR_s_Global_047e12f0;
  uStack_a8 = 0x1f;
  local_a0 = 0;
  FUN_00d0fefc(*(undefined8 *)(param_1 + 0xa0),&local_98,&local_b8);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  lVar15 = *(long *)(param_1 + 0xa0);
  plVar21 = *(long **)(*(long *)(lVar15 + 0x30) + 0x110);
  plVar29 = *(long **)(*(long *)(lVar15 + 0x30) + 0x118);
  plVar22 = plVar21;
  if ((plVar21 != plVar29) && (*plVar21 != 0x74148161ded6600)) {
    do {
      plVar22 = plVar22 + 0xc;
      if (plVar29 == plVar22) {
        plVar22 = plVar29;
        goto LAB_00d84d94;
      }
    } while (*plVar22 != 0x74148161ded6600);
  }
LAB_00d84d94:
  if (plVar29 != plVar22) {
    iVar13 = (int)((ulong)((long)plVar22 - (long)plVar21) >> 5) * -0x55555555;
    lVar28 = plVar21[(long)iVar13 * 0xc + 4];
    lVar26 = plVar21[(long)iVar13 * 0xc + 5];
    lVar24 = lVar28;
    if (lVar28 != lVar26) {
      lVar23 = lVar28;
      if (*(uint *)(lVar28 + 0x20) != (uint)(0.0 < fVar60)) {
        do {
          lVar24 = lVar23 + 0x28;
          if (lVar26 == lVar24) {
            lVar24 = lVar26;
            goto LAB_00d84dd0;
          }
          puVar1 = (uint *)(lVar23 + 0x48);
          lVar23 = lVar24;
        } while (*puVar1 != (uint)(0.0 < fVar60));
      }
    }
LAB_00d84dd0:
    if (lVar26 != lVar24) {
      lVar23 = (long)iVar13;
      uVar19 = (ulong)*(byte *)((long)plVar21 + lVar23 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar21 + lVar23 * 0x60 + 0x59);
      lVar26 = *(long *)(lVar15 + 0x80);
      if ((ulong)(*(long *)(lVar15 + 0x88) - lVar26 >> 2) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(uint *)(lVar26 + uVar19 * 4) =
           (int)((ulong)(lVar24 - lVar28) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar21 + lVar23 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar26 + uVar19 * 4) &
           (*(uint *)((long)plVar21 + lVar23 * 0x60 + 0x5c) ^ 0xffffffff);
      lVar15 = *(long *)(param_1 + 0xa0);
    }
  }
  FUN_00d100a8(lVar15);
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 200),0,*(long *)(param_1 + 0xa0) + 0xf0);
  *(ulong *)(*(long *)(param_1 + 0xa8) + 0x108) =
       *(ulong *)(*(long *)(param_1 + 0xa8) + 0x108) & 0xfffffffffffffffe | (ulong)(0.0 < fVar60);
  goto LAB_00d84084;
LAB_00d84330:
  fVar35 = (float)plVar21[7];
  fVar36 = (float)((ulong)plVar21[7] >> 0x20);
  fVar60 = (float)plVar21[6];
  fVar41 = (float)((ulong)plVar21[6] >> 0x20);
  if (fVar60 <= 0.0405) {
    fVar60 = fVar60 / 12.92;
  }
  else {
    fVar60 = powf((fVar60 + 0.055) / 1.055,2.4);
  }
  if (fVar41 <= 0.0405) {
    fVar41 = fVar41 / 12.92;
  }
  else {
    fVar41 = powf((fVar41 + 0.055) / 1.055,2.4);
  }
  if (fVar35 <= 0.0405) {
    fVar35 = fVar35 / 12.92;
  }
  else {
    fVar35 = powf((fVar35 + 0.055) / 1.055,2.4);
  }
  auVar39._0_4_ = fVar60 * fVar36;
  auVar39._4_4_ = fVar41 * fVar36;
  auVar39._8_4_ = fVar35 * fVar36;
  auVar39._12_4_ = 0;
LAB_00d84428:
  puVar30 = (ulong *)(lVar15 + uVar27 * 0x1d0 + 0x88);
  uVar16 = *puVar30;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar19 = uVar16 - 1 & 0xc90901343789790e;
    }
    else if (uVar16 < 0xc90901343789790f) {
      uVar19 = 0;
      if (uVar16 != 0) {
        uVar19 = 0xc90901343789790e / uVar16;
      }
      uVar19 = 0xc90901343789790e - uVar19 * uVar16;
    }
    plVar21 = *(long **)(*(long *)(lVar15 + uVar27 * 0x1d0 + 0x80) + uVar19 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar21[1] == 0xc90901343789790e) {
            if (plVar21[2] == -0x36f6fecbc87686f2) goto LAB_00d84538;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar19) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar21[1];
          if (uVar17 == 0xc90901343789790e) {
            if (plVar21[2] == -0x36f6fecbc87686f2) goto LAB_00d84538;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar18 = 0;
              if (uVar16 != 0) {
                uVar18 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar18 * uVar16;
            }
            if (uVar17 != uVar19) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_00d84540:
  uVar16 = 0xd73b8e15a696d524;
  lVar28 = *(long *)(param_1 + 0x90);
  FUN_00c41540(lVar28);
  lVar28 = lVar28 + (ulong)*(uint *)(param_1 + 0xc0) * 0x10;
  *(long *)(lVar28 + 0x7c) = auVar39._0_8_;
  auVar50 = NEON_ext(auVar39,auVar39,8,1);
  *(long *)(lVar28 + 0x84) = auVar50._0_8_;
  uVar19 = *puVar30;
  if (uVar19 != 0) {
    uVar17 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar16 = uVar19 - 1 & 0xd73b8e15a696d524;
    }
    else if (uVar19 < 0xd73b8e15a696d525) {
      uVar16 = 0;
      if (uVar19 != 0) {
        uVar16 = 0xd73b8e15a696d524 / uVar19;
      }
      uVar16 = 0xd73b8e15a696d524 - uVar16 * uVar19;
    }
    plVar21 = *(long **)(*(long *)(lVar15 + uVar27 * 0x1d0 + 0x80) + uVar16 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar21[1] == 0xd73b8e15a696d524) {
            if (plVar21[2] == -0x28c471ea59692adc) goto LAB_00d84668;
          }
          else if ((plVar21[1] & uVar19 - 1) != uVar16) goto LAB_00d84b2c;
          plVar21 = (long *)*plVar21;
          uVar31 = 0;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar21[1];
          if (uVar17 == 0xd73b8e15a696d524) {
            if (plVar21[2] == -0x28c471ea59692adc) goto LAB_00d84668;
          }
          else {
            if (uVar19 <= uVar17) {
              uVar18 = 0;
              if (uVar19 != 0) {
                uVar18 = uVar17 / uVar19;
              }
              uVar17 = uVar17 - uVar18 * uVar19;
            }
            if (uVar17 != uVar16) goto LAB_00d84b2c;
          }
          plVar21 = (long *)*plVar21;
          uVar31 = 0;
        } while (plVar21 != (long *)0x0);
      }
      goto LAB_00d8466c;
    }
    uVar31 = 0;
    goto LAB_00d84670;
  }
  uVar31 = 0;
  goto LAB_00d84a38;
LAB_00d84538:
  auVar39._12_4_ = SUB84(plVar21[6],0);
  goto LAB_00d84540;
LAB_00d84668:
  uVar31 = (undefined4)plVar21[6];
  goto LAB_00d8466c;
LAB_00d84b2c:
  uVar31 = 0;
LAB_00d8466c:
  if (uVar19 != 0) {
LAB_00d84670:
    uVar16 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar19 - 1 & 0x31641eed5d5a2af7;
    }
    else {
      uVar17 = 0x31641eed5d5a2af7;
      if (uVar19 < 0x31641eed5d5a2af8) {
        uVar17 = 0;
        if (uVar19 != 0) {
          uVar17 = 0x31641eed5d5a2af7 / uVar19;
        }
        uVar17 = 0x31641eed5d5a2af7 - uVar17 * uVar19;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar15 + uVar27 * 0x1d0 + 0x80) + uVar17 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar16 < 2) {
        do {
          if (plVar21[1] == 0x31641eed5d5a2af7) {
            if (plVar21[2] == 0x31641eed5d5a2af7) goto LAB_00d8476c;
          }
          else if ((plVar21[1] & uVar19 - 1) != uVar17) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar21[1];
          if (uVar16 == 0x31641eed5d5a2af7) {
            if (plVar21[2] == 0x31641eed5d5a2af7) goto LAB_00d8476c;
          }
          else {
            if (uVar19 <= uVar16) {
              uVar18 = 0;
              if (uVar19 != 0) {
                uVar18 = uVar16 / uVar19;
              }
              uVar16 = uVar16 - uVar18 * uVar19;
            }
            if (uVar16 != uVar17) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_00d84a38:
  uVar25 = 0;
LAB_00d84770:
  uVar19 = (ulong)*(uint *)(param_1 + 0xc0);
  lVar28 = param_1 + uVar19 * 8;
  dVar37 = ((double)*(long *)(*(long *)(DAT_0485a0a0 + 0x70) + 0x150) / 1000000.0) / 1000.0;
  dVar32 = *(double *)(lVar28 + 0x20c8) + (dVar37 - *(double *)(lVar28 + 200));
  *(double *)(lVar28 + 0x20c8) = dVar32;
  *(double *)(lVar28 + 200) = dVar37;
  uVar16 = *puVar30;
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar16 - 1 & 0x66427ea72319c017;
    }
    else {
      uVar18 = 0x66427ea72319c017;
      if (uVar16 < 0x66427ea72319c018) {
        uVar18 = 0;
        if (uVar16 != 0) {
          uVar18 = 0x66427ea72319c017 / uVar16;
        }
        uVar18 = 0x66427ea72319c017 - uVar18 * uVar16;
      }
    }
    plVar29 = (long *)(lVar15 + uVar27 * 0x1d0 + 0x80);
    plVar21 = *(long **)(*plVar29 + uVar18 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar21[1] == 0x66427ea72319c017) {
            if (plVar21[2] == 0x66427ea72319c017) goto LAB_00d84914;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar18) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar21[1];
          if (uVar17 == 0x66427ea72319c017) {
            if (plVar21[2] == 0x66427ea72319c017) goto LAB_00d84914;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar4 = 0;
              if (uVar16 != 0) {
                uVar4 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar4 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  lVar15 = param_1 + uVar19 * 4;
  *(undefined4 *)(lVar15 + 0x50c8) = 0;
  *(undefined4 *)(lVar15 + 0x40c8) = 0;
LAB_00d84924:
  fVar60 = 0.0;
  goto LAB_00d84930;
LAB_00d8476c:
  uVar25 = (undefined4)plVar21[6];
  goto LAB_00d84770;
LAB_00d84914:
  fVar60 = *(float *)(plVar21 + 6);
  if (0.0 < fVar60) {
    if ((double)fVar60 < dVar32) {
      *(undefined8 *)(lVar28 + 0x20c8) = 0;
      if (((DAT_0485c008 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0485c008), iVar13 != 0)) {
        local_98 = (string)0x18;
        uStack_8f = 0x6d6f646e;
        uStack_8b = 0;
        uStack_97 = s__dev_urandom_03c1765b._0_7_;
        local_90 = s__dev_urandom_03c1765b[7];
        std::random_device::random_device((random_device *)&DAT_0485b640,&local_98);
        if (((byte)local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        FUN_00100190(PTR__random_device_047dcb28,&DAT_0485b640,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0485c008);
      }
      uVar19 = 0xacc7a4ffecac8f3e;
      if (((DAT_0485c018 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0485c018), iVar13 != 0)) {
        uVar14 = std::random_device::operator()((random_device *)&DAT_0485b640);
        iVar13 = (int)((ulong)uVar14 * 2 + (ulong)uVar14 >> 0x20);
        DAT_0485c010 = uVar14 + (iVar13 + (uVar14 - iVar13 >> 1) >> 0x1e) * -0x7fffffff;
        if (DAT_0485c010 == 0) {
          DAT_0485c010 = 1;
        }
        __cxa_guard_release(&DAT_0485c018);
      }
      local_98 = (string)0x1;
      uStack_97 = 0xa000000;
      iVar13 = FUN_010d96e0(&local_98,&DAT_0485c010,&local_98);
      uVar16 = *puVar30;
      if (uVar16 != 0) {
        uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 < 2) {
          uVar19 = uVar16 - 1 & 0xacc7a4ffecac8f3e;
        }
        else if (uVar16 < 0xacc7a4ffecac8f3f) {
          uVar19 = 0;
          if (uVar16 != 0) {
            uVar19 = 0xacc7a4ffecac8f3e / uVar16;
          }
          uVar19 = 0xacc7a4ffecac8f3e - uVar19 * uVar16;
        }
        plVar21 = *(long **)(*plVar29 + uVar19 * 8);
        if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
          if (uVar17 < 2) {
            do {
              if (plVar21[1] == 0xacc7a4ffecac8f3e) {
                if (plVar21[2] == -0x53385b00135370c2) goto LAB_00d84ed4;
              }
              else if ((plVar21[1] & uVar16 - 1) != uVar19) break;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              uVar17 = plVar21[1];
              if (uVar17 == 0xacc7a4ffecac8f3e) {
                if (plVar21[2] == -0x53385b00135370c2) goto LAB_00d84ed4;
              }
              else {
                if (uVar16 <= uVar17) {
                  uVar18 = 0;
                  if (uVar16 != 0) {
                    uVar18 = uVar17 / uVar16;
                  }
                  uVar17 = uVar17 - uVar18 * uVar16;
                }
                if (uVar17 != uVar19) break;
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          fVar41 = 0.0;
          goto LAB_00d84ed8;
        }
        fVar36 = 0.0;
        fVar41 = 0.0;
        bVar20 = false;
        goto LAB_00d84f2c;
      }
      fVar36 = 0.0;
      fVar41 = 0.0;
      bVar20 = false;
      fVar35 = fVar36;
      goto LAB_00d85014;
    }
    lVar15 = param_1 + uVar19 * 4;
    fVar41 = *(float *)(lVar15 + 0x50c8);
    fVar35 = *(float *)(lVar15 + 0x40c8);
    goto LAB_00d849bc;
  }
  goto LAB_00d84924;
LAB_00d84ed4:
  fVar41 = *(float *)(plVar21 + 6);
LAB_00d84ed8:
  fVar35 = 100.0;
  if (fVar41 <= 100.1) {
    fVar35 = fVar41;
  }
  fVar36 = 0.0;
  if (fVar35 >= -0.1) {
    fVar36 = fVar35;
  }
  bVar20 = 100.1 < fVar41 || fVar35 < -0.1;
  fVar35 = 0.0;
  if (uVar16 != 0) {
LAB_00d84f2c:
    uVar17 = 0xc25e33503173b1e4;
    uVar19 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar17 = uVar16 - 1 & 0xc25e33503173b1e4;
    }
    else if (uVar16 < 0xc25e33503173b1e5) {
      uVar17 = 0;
      if (uVar16 != 0) {
        uVar17 = 0xc25e33503173b1e4 / uVar16;
      }
      uVar17 = 0xc25e33503173b1e4 - uVar17 * uVar16;
    }
    plVar21 = *(long **)(*plVar29 + uVar17 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar21[1] == 0xc25e33503173b1e4) {
            if (plVar21[2] == -0x3da1ccafce8c4e1c) goto LAB_00d85010;
          }
          else if ((plVar21[1] & uVar16 - 1) != uVar17) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar21[1];
          if (uVar19 == 0xc25e33503173b1e4) {
            if (plVar21[2] == -0x3da1ccafce8c4e1c) goto LAB_00d85010;
          }
          else {
            if (uVar16 <= uVar19) {
              uVar18 = 0;
              if (uVar16 != 0) {
                uVar18 = uVar19 / uVar16;
              }
              uVar19 = uVar19 - uVar18 * uVar16;
            }
            if (uVar19 != uVar17) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
    fVar35 = 0.0;
  }
  goto LAB_00d85014;
LAB_00d85010:
  fVar35 = *(float *)(plVar21 + 6);
LAB_00d85014:
  uVar14 = *(uint *)(param_1 + 0xc0);
  lVar15 = param_1 + (ulong)uVar14 * 4;
  fVar40 = 100.0;
  if (fVar35 <= 100.1) {
    fVar40 = fVar35;
  }
  fVar43 = 0.0;
  if (-0.1 <= fVar40) {
    fVar43 = fVar40;
  }
  bVar10 = false;
  bVar11 = false;
  bVar12 = false;
  if (-0.1 <= fVar40) {
    bVar10 = false;
    bVar11 = false;
    bVar12 = true;
    if (!NAN(fVar35)) {
      bVar10 = fVar35 < 100.1;
      bVar11 = fVar35 == 100.1;
      bVar12 = false;
    }
  }
  if (bVar11 || bVar10 != bVar12) {
    fVar43 = fVar35;
  }
  if (!bVar20) {
    fVar36 = fVar41;
  }
  fVar35 = (1.0 - (float)iVar13 * 0.1) * fVar36 + (float)iVar13 * 0.1 * fVar43;
  fVar41 = *(float *)(lVar15 + 0x40c8);
  *(float *)(lVar15 + 0x50c8) = fVar41;
  *(float *)(lVar15 + 0x40c8) = fVar35;
  dVar32 = *(double *)(param_1 + (ulong)uVar14 * 8 + 0x20c8);
LAB_00d849bc:
  fVar60 = fVar35 * ((float)dVar32 / fVar60) + fVar41 * (1.0 - (float)dVar32 / fVar60);
LAB_00d84930:
  lVar15 = *(long *)(param_1 + 0x90);
  FUN_00c41540(lVar15);
  lVar15 = lVar15 + 0x407c;
  *(undefined4 *)(lVar15 + (ulong)*(uint *)(param_1 + 0xc0) * 0x10) = uVar31;
  *(undefined4 *)(lVar15 + (ulong)*(uint *)(param_1 + 0xc0) * 0x10 + 4) = uVar25;
  *(float *)(lVar15 + (ulong)*(uint *)(param_1 + 0xc0) * 0x10 + 8) = fVar60;
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
LAB_00d84084:
  lVar15 = *(long *)(lVar9 + 0x38);
  lVar28 = *(long *)(lVar9 + 0x40);
LAB_00d8408c:
  uVar27 = uVar27 + 1;
  if ((ulong)((lVar28 - lVar15 >> 4) * 0x34f72c234f72c235) <= uVar27) goto LAB_00d8509c;
  goto LAB_00d840b4;
}


