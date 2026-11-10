/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d852dc; name: FUN_00d852dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d852dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  char *pcVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  bool bVar24;
  ulong uVar25;
  char *pcVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  long *plVar35;
  undefined8 uVar36;
  long *plVar37;
  float fVar38;
  float fVar39;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  long local_148;
  long local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  long *local_108;
  long *local_100;
  undefined1 local_f8 [16];
  undefined8 *local_e8;
  long *local_e0;
  undefined8 *local_d8;
  long *local_d0;
  ulong local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0 [2];
  undefined1 local_90 [2] [16];
  
  plVar17 = DAT_0485a0e8;
  if (DAT_0485a0e8 == (long *)0x0) {
    plVar35 = (long *)0x0;
  }
  else {
    plVar35 = DAT_0485a0e8 + 5;
    do {
      lVar20 = *plVar35;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar24) {
        *(int *)plVar35 = (int)lVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar20 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar35 = DAT_0485a0e8;
  }
  plVar1 = plVar35 + 0x1ae;
  lVar20 = nn::os::GetCurrentThread();
  do {
    lVar32 = *plVar1;
    lVar33 = plVar35[0x1af];
    cVar3 = '\x01';
    bVar24 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar24) {
      *plVar1 = lVar32;
      plVar35[0x1af] = lVar33;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while( true ) {
      if ((lVar32 == 0) || (lVar20 == lVar32)) break;
      nn::os::WaitLightEvent((LightEventType *)(plVar35 + 0x1b0));
      do {
        lVar32 = *plVar1;
        lVar33 = plVar35[0x1af];
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar24) {
          *plVar1 = lVar32;
          plVar35[0x1af] = lVar33;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar21 = *plVar1;
      if (lVar21 != lVar32 || plVar35[0x1af] != lVar33) {
        bVar24 = false;
        ClearExclusiveLocal();
        goto LAB_00d85380;
      }
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar24) {
        *plVar1 = lVar32;
        *(long *)((long)plVar35 + 0xd74) = lVar33 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar24 = true;
LAB_00d85380:
    uVar16 = _UNK_03cabe68;
    uVar15 = _DAT_03cabe60;
    uVar14 = _UNK_03cabe58;
    uVar13 = _DAT_03cabe50;
    uVar12 = DAT_03cab628;
    uVar11 = DAT_03cab620;
    uVar10 = _UNK_03caa948;
    lVar32 = _DAT_03caa940;
    uVar9 = _UNK_03caa5b8;
    uVar8 = _DAT_03caa5b0;
    if (bVar24) break;
    lVar32 = lVar21;
    lVar33 = plVar35[0x1af];
  } while( true );
  if (plVar35[8] != plVar35[7]) {
    auVar48 = NEON_fmov(0x3f800000,4);
    lVar33 = plVar35[7];
    uVar23 = 0;
    lVar20 = param_1 + 0x88;
LAB_00d854c4:
    uVar30 = 0xfa0ab18a19e0e8db;
    if ((*(long *)(lVar33 + (long)(int)uVar23 * 0x1d0 + 0x1c8) == 0) &&
       (*(long *)(lVar33 + uVar23 * 0x1d0 + 0x28) == -0xc49bc97886c90f)) {
      pcVar26 = (char *)(lVar33 + uVar23 * 0x1d0);
      fVar39 = 0.0;
      puVar27 = (ulong *)(pcVar26 + 0x88);
      uVar28 = *puVar27;
      if (uVar28 != 0) {
        uVar29 = uVar28 - (uVar28 >> 1 & 0x5555555555555555);
        uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333);
        uVar29 = (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar29 < 2) {
          uVar30 = uVar28 - 1 & 0xfa0ab18a19e0e8db;
        }
        else if (uVar28 < 0xfa0ab18a19e0e8dc) {
          uVar30 = 0;
          if (uVar28 != 0) {
            uVar30 = 0xfa0ab18a19e0e8db / uVar28;
          }
          uVar30 = 0xfa0ab18a19e0e8db - uVar30 * uVar28;
        }
        fVar39 = 0.0;
        plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar30 * 8);
        if (plVar31 != (long *)0x0) {
          plVar31 = (long *)*plVar31;
          fVar39 = 0.0;
          if (plVar31 != (long *)0x0) {
            if (uVar29 < 2) {
              do {
                if (plVar31[1] == 0xfa0ab18a19e0e8db) {
                  if (plVar31[2] == -0x5f54e75e61f1725) goto LAB_00d855ec;
                }
                else if ((plVar31[1] & uVar28 - 1) != uVar30) break;
                plVar31 = (long *)*plVar31;
              } while (plVar31 != (long *)0x0);
            }
            else {
              do {
                uVar29 = plVar31[1];
                if (uVar29 == 0xfa0ab18a19e0e8db) {
                  if (plVar31[2] == -0x5f54e75e61f1725) goto LAB_00d855ec;
                }
                else {
                  if (uVar28 <= uVar29) {
                    uVar25 = 0;
                    if (uVar28 != 0) {
                      uVar25 = uVar29 / uVar28;
                    }
                    uVar29 = uVar29 - uVar25 * uVar28;
                  }
                  if (uVar29 != uVar30) break;
                }
                plVar31 = (long *)*plVar31;
              } while (plVar31 != (long *)0x0);
            }
            fVar39 = 0.0;
          }
        }
      }
      goto LAB_00d855f0;
    }
    goto LAB_00d854a8;
  }
LAB_00d85a68:
  do {
    lVar20 = *plVar1;
    lVar32 = plVar35[0x1af];
    cVar3 = '\x01';
    bVar24 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar24) {
      *plVar1 = lVar20;
      plVar35[0x1af] = lVar32;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar33 = *plVar1;
    lVar21 = plVar35[0x1af];
    if (lVar33 != lVar20 || lVar21 != lVar32) {
      bVar24 = false;
      ClearExclusiveLocal();
      goto joined_r0x00d85a98;
    }
    cVar3 = '\x01';
    bVar24 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar24) {
      *plVar1 = lVar20;
      *(long *)((long)plVar35 + 0xd74) = lVar32 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar24 = true;
joined_r0x00d85a98:
  do {
    if (bVar24) {
      nn::os::SignalLightEvent((LightEventType *)(plVar35 + 0x1b0));
      local_e0 = *(long **)(param_1 + 0xa0);
      local_d8 = *(undefined8 **)(param_1 + 0xa8);
      local_f8._0_8_ = local_f8;
      lVar20 = param_1 + 0x88;
      local_e8 = (undefined8 *)0x0;
      local_c8 = local_c8 & 0xffffffff00000000;
      local_d0 = (long *)0x0;
      local_f8._8_8_ = local_f8._0_8_;
      if (lVar20 != *(long *)(param_1 + 0x90)) {
        lVar32 = *(long *)(param_1 + 0x90);
        do {
          uVar23 = FUN_00d8a5bc(DAT_0485a0e8,lVar32 + 0x10);
          lVar33 = *(long *)(lVar32 + 8);
          if ((uVar23 & 1) == 0) {
            for (; lVar20 != lVar33; lVar33 = *(long *)(lVar33 + 8)) {
              uVar23 = FUN_00d8a5bc(DAT_0485a0e8,lVar33 + 0x10);
              if ((uVar23 & 1) != 0) {
                FUN_02739564(local_f8,local_f8,lVar20,lVar32,lVar33);
                lVar33 = *(long *)(lVar33 + 8);
                goto LAB_00d85cb4;
              }
            }
            FUN_02739564(local_f8,local_f8,lVar20,lVar32,lVar33);
          }
LAB_00d85cb4:
          lVar32 = lVar33;
        } while (lVar20 != lVar33);
      }
      FUN_00d87628(local_f8);
      for (lVar32 = *(long *)(param_1 + 0x90); lVar32 != lVar20; lVar32 = *(long *)(lVar32 + 8)) {
        if (*(char *)(lVar32 + 0x30) != '\0') {
          FUN_00c4cf3c(*(undefined8 *)(lVar32 + 0x18));
        }
      }
      if (plVar17 != (long *)0x0) {
        plVar35 = plVar17 + 5;
        do {
          lVar20 = *plVar35;
          iVar4 = (int)lVar20 + -1;
          cVar3 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar24) {
            *(int *)plVar35 = iVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar17 + 0x10))();
        }
        else {
          auVar7 = local_90[0];
          if ((int)lVar20 == 0) {
LAB_00d87430:
            local_90[0] = auVar7;
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      return;
    }
    do {
      lVar20 = *plVar1;
      lVar32 = plVar35[0x1af];
      if (lVar20 != lVar33 || lVar32 != lVar21) {
        bVar24 = false;
        ClearExclusiveLocal();
        lVar33 = lVar20;
        lVar21 = lVar32;
        goto joined_r0x00d85a98;
      }
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar24) {
        *plVar1 = lVar33;
        *(long *)((long)plVar35 + 0xd74) = lVar21 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar24 = true;
    lVar33 = lVar20;
    lVar21 = lVar32;
  } while( true );
LAB_00d855ec:
  fVar39 = *(float *)(plVar31 + 6);
LAB_00d855f0:
  local_148 = *(long *)(param_1 + 0x90);
  if (lVar20 != local_148) {
    if (*pcVar26 == '\0') {
      cVar3 = *(char *)(local_148 + 0x10);
      while (cVar3 != '\0') {
        local_148 = *(long *)(local_148 + 8);
        if (lVar20 == local_148) goto LAB_00d855fc;
        cVar3 = *(char *)(local_148 + 0x10);
      }
LAB_00d85e4c:
      if (*(char *)(lVar33 + uVar23 * 0x1d0 + 0x1b8) == '\0') {
        FUN_02739154(lVar20,local_148);
        goto LAB_00d854a4;
      }
      uVar36 = 0;
      uVar43 = 0;
      if (*(char *)(lVar33 + uVar23 * 0x1d0 + 0x1b9) == '\0') goto LAB_00d854a4;
      lVar21 = lVar33 + uVar23 * 0x1d0;
      uVar44 = uVar11;
      uVar45 = uVar12;
      uVar46 = uVar15;
      uVar47 = uVar16;
      FUN_00dfcd7c(lVar21 + 0x50);
      fVar49 = *(float *)(lVar21 + 0x54);
      local_f8._0_8_ = 0xa9467a944c3c2678;
      local_e0 = (long *)0x0;
      local_f8._8_8_ = PTR_s_Color_047dcf48;
      local_e8 = (undefined8 *)0x1f;
      local_130 = auVar48._0_8_;
      pcStack_128 = auVar48._8_8_;
      uVar30 = FUN_02739258(pcVar26,local_f8,&local_130);
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      pcVar18 = pcStack_128;
      lVar21 = local_130;
      if ((uVar30 & 1) != 0) {
        fVar38 = (float)local_130;
        if (fVar38 <= 0.0405) {
          fVar38 = fVar38 / 12.92;
        }
        else {
          fVar38 = powf((fVar38 + 0.055) / 1.055,2.4);
        }
        fStack_1fc = (float)((ulong)lVar21 >> 0x20);
        if (fStack_1fc <= 0.0405) {
          fStack_1fc = fStack_1fc / 12.92;
        }
        else {
          fStack_1fc = powf((fStack_1fc + 0.055) / 1.055,2.4);
        }
        fStack_1f8 = SUB84(pcVar18,0);
        if (fStack_1f8 <= 0.0405) {
          fStack_1f8 = fStack_1f8 / 12.92;
        }
        else {
          fStack_1f8 = powf((fStack_1f8 + 0.055) / 1.055,2.4);
        }
        fStack_1f4 = (float)((ulong)pcVar18 >> 0x20);
        local_130 = CONCAT44(fStack_1fc * fStack_1f4,fVar38 * fStack_1f4);
        pcStack_128 = (char *)(ulong)(uint)(fStack_1f8 * fStack_1f4);
      }
      uVar30 = *puVar27;
      if (uVar30 != 0) {
        uVar28 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
        uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
        uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar28 < 2) {
          uVar29 = uVar30 - 1 & 0xc90901343789790e;
        }
        else if (uVar30 < 0xc90901343789790f) {
          uVar29 = 0;
          if (uVar30 != 0) {
            uVar29 = 0xc90901343789790e / uVar30;
          }
          uVar29 = 0xc90901343789790e - uVar29 * uVar30;
        }
        else {
          uVar29 = 0xc90901343789790e;
        }
        plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar29 * 8);
        if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
          if (uVar28 < 2) {
            do {
              if (plVar31[1] == 0xc90901343789790e) {
                if (plVar31[2] == -0x36f6fecbc87686f2) goto LAB_00d86200;
              }
              else if ((plVar31[1] & uVar30 - 1) != uVar29) break;
              plVar31 = (long *)*plVar31;
            } while (plVar31 != (long *)0x0);
          }
          else {
            do {
              uVar28 = plVar31[1];
              if (uVar28 == 0xc90901343789790e) {
                if (plVar31[2] == -0x36f6fecbc87686f2) goto LAB_00d86200;
              }
              else {
                if (uVar30 <= uVar28) {
                  uVar25 = 0;
                  if (uVar30 != 0) {
                    uVar25 = uVar28 / uVar30;
                  }
                  uVar28 = uVar28 - uVar25 * uVar30;
                }
                if (uVar28 != uVar29) break;
              }
              plVar31 = (long *)*plVar31;
            } while (plVar31 != (long *)0x0);
          }
        }
      }
      goto LAB_00d86210;
    }
    do {
      if ((*(char *)(local_148 + 0x10) != '\0') &&
         (*(int *)(local_148 + 0x14) == *(int *)(lVar33 + uVar23 * 0x1d0 + 4))) goto LAB_00d85e4c;
      local_148 = *(long *)(local_148 + 8);
    } while (lVar20 != local_148);
  }
LAB_00d855fc:
  if ((fVar39 != 0.0) && (*(char *)(lVar33 + uVar23 * 0x1d0 + 0x1b8) != '\0')) {
    lVar21 = FUN_00d8a968(lVar20,lVar20);
    puVar22 = (undefined8 *)FUN_00e31554();
    local_f8._0_8_ = *puVar22;
    FUN_00d8a768(&local_130,local_f8._0_8_,local_f8);
    plVar37 = (long *)(lVar21 + 0x20);
    local_f8._0_8_ = *plVar37;
    *plVar37 = 0;
    FUN_00d8a360(local_f8);
    lVar33 = local_130;
    local_130 = 0;
    *plVar37 = lVar33;
    FUN_00d8a360(&local_130);
    puVar22 = (undefined8 *)FUN_00e31554();
    local_f8._0_8_ = *puVar22;
    FUN_00d8a7c8(&local_130,local_f8._0_8_,local_f8);
    plVar34 = (long *)(lVar21 + 0x28);
    local_f8._0_8_ = *plVar34;
    *plVar34 = 0;
    FUN_00d8a3cc(local_f8);
    lVar33 = local_130;
    local_130 = 0;
    *plVar34 = lVar33;
    FUN_00d8a3cc(&local_130);
    lVar33 = *plVar37;
    FUN_00c41540(lVar33);
    *(undefined8 *)(lVar33 + 0x84) = uVar12;
    *(undefined8 *)(lVar33 + 0x7c) = uVar11;
    *(undefined8 *)(lVar33 + 0x94) = uVar16;
    *(undefined8 *)(lVar33 + 0x8c) = uVar15;
    *(undefined8 *)(lVar33 + 0xa4) = uVar9;
    *(undefined8 *)(lVar33 + 0x9c) = uVar8;
    *(undefined8 *)(lVar33 + 0xbc) = 0;
    *(undefined8 *)(lVar33 + 0xc4) = 0x3f80000000000000;
    *(undefined8 *)(lVar33 + 0xb4) = uVar14;
    *(undefined8 *)(lVar33 + 0xac) = uVar13;
    lVar33 = *plVar34;
    FUN_00c41540(lVar33);
    *(undefined8 *)(lVar33 + 0x7c) = 0x3f8000003f800000;
    *(undefined8 *)(lVar33 + 0x84) = 0;
    *(undefined8 *)(lVar33 + 0x8c) = 0;
    *(undefined8 *)(lVar33 + 0x94) = 0;
    *(undefined8 *)(lVar33 + 0x9c) = 0x3f8000003f800000;
    *(undefined8 *)(lVar33 + 0xa4) = 0;
    *(undefined8 *)(lVar33 + 0xac) = 0;
    puVar22 = (undefined8 *)FUN_0166cefc();
    local_f8._0_8_ = &DAT_c1df119e63c556a;
    local_130 = -0x5ed9d716b38bb3d;
    pcStack_128 = "[PointLightProjectionTexture]";
    local_120 = 0x1d;
    local_118 = (long *)0x0;
    local_e0 = (long *)0x0;
    local_f8._8_8_ = PTR_s_LightPrepare_047e14f0;
    local_e8 = (undefined8 *)0x1f;
    FUN_00dfeda8(local_90,*puVar22,local_f8,&local_130,0);
    plVar31 = *(long **)(lVar21 + 0x18);
    *(undefined8 *)(lVar21 + 0x18) = 0;
    if (plVar31 != (long *)0x0) {
      plVar2 = plVar31 + 5;
      do {
        lVar33 = *plVar2;
        iVar4 = (int)lVar33 + -1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar24) {
          *(int *)plVar2 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar31 + 0x10))();
      }
      else {
        auVar7 = local_90[0];
        if ((int)lVar33 == 0) goto LAB_00d87430;
      }
    }
    uVar36 = local_90[0]._0_8_;
    local_90[0]._0_8_ = 0;
    *(undefined8 *)(lVar21 + 0x18) = uVar36;
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 0x20))();
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    FUN_00c751c8(*(undefined8 *)(lVar21 + 0x18),param_1 + 0x30,1,1);
    FUN_00c97970(*(undefined8 *)(*(long *)(lVar21 + 0x18) + 200),param_1 + 0x78,0x10);
    FUN_00c7504c(*(undefined8 *)(*(long *)(lVar21 + 0x18) + 200),*(undefined4 *)(param_1 + 0x80),0,0
                );
    plVar31 = (long *)FUN_0145966c();
    uVar19 = (**(code **)(*plVar31 + 0x88))();
    uVar36 = *(undefined8 *)(*(long *)(lVar21 + 0x18) + 200);
    FUN_00d8a828(local_f8,plVar37);
    FUN_00c4b998(uVar36,1,uVar19,local_f8);
    auVar7._8_8_ = local_90[0]._8_8_;
    auVar7._0_8_ = local_90[0]._0_8_;
    if ((long *)local_f8._0_8_ != (long *)0x0) {
      plVar31 = (long *)(local_f8._0_8_ + 0x28);
      do {
        lVar33 = *plVar31;
        iVar4 = (int)lVar33 + -1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar24) {
          *(int *)plVar31 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*(long *)local_f8._0_8_ + 0x10))();
      }
      else if ((int)lVar33 == 0) goto LAB_00d87430;
    }
    uVar36 = *(undefined8 *)(*(long *)(lVar21 + 0x18) + 200);
    FUN_00d8a888(local_f8,plVar34);
    FUN_00c4b998(uVar36,2,uVar19,local_f8);
    auVar7._8_8_ = local_90[0]._8_8_;
    auVar7._0_8_ = local_90[0]._0_8_;
    if ((long *)local_f8._0_8_ != (long *)0x0) {
      plVar31 = (long *)(local_f8._0_8_ + 0x28);
      do {
        lVar33 = *plVar31;
        iVar4 = (int)lVar33 + -1;
        cVar3 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar24) {
          *(int *)plVar31 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*(long *)local_f8._0_8_ + 0x10))();
      }
      else if ((int)lVar33 == 0) goto LAB_00d87430;
    }
    local_f8._0_8_ = 0x9a33ee12e00dbfd0;
    local_e0 = (long *)0x0;
    local_f8._8_8_ = "PassType";
    local_e8 = (undefined8 *)0x8;
    local_130 = 0x134d61b65204b34;
    local_118 = (long *)0x0;
    pcStack_128 = "Texture";
    local_120 = 7;
    FUN_00d0fefc(*(undefined8 *)(param_1 + 0xc0),local_f8,&local_130);
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 0x20))();
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    FUN_00d100a8(*(undefined8 *)(param_1 + 0xc0));
    lVar33 = *(long *)(lVar21 + 0x18);
    uVar36 = FUN_015f804c(*(undefined8 *)(param_1 + 0xc0));
    FUN_00d10690(*(undefined8 *)(lVar33 + 200),0,uVar36);
    FUN_00eb2d18(*(undefined8 *)(*(long *)(lVar21 + 0x18) + 200),1,1);
    FUN_00eb3bec(*(undefined8 *)(*(long *)(lVar21 + 0x18) + 200),1);
    FUN_00eb6a8c(*(undefined8 *)(*(long *)(lVar21 + 0x18) + 200),4);
    FUN_00eb4900(*(undefined8 *)(*(long *)(lVar21 + 0x18) + 200),0);
    FUN_00eacd1c(*(undefined8 *)(lVar21 + 0x18),0,4,0);
    puVar22 = (undefined8 *)FUN_0166cefc();
    local_90[0] = FUN_0166cf08(*puVar22,2,6);
    FUN_00ead0d0(*(undefined8 *)(*(long *)(lVar21 + 0x18) + 200),2,10,local_90);
    FUN_00ead0d0(*(undefined8 *)(*(long *)(lVar21 + 0x18) + 200),2,0xb,local_90);
    *(undefined1 *)(lVar21 + 0x30) = 0;
    *(undefined8 *)(lVar21 + 0x10) = *(undefined8 *)pcVar26;
  }
  goto LAB_00d854a4;
LAB_00d86200:
  auVar41._8_8_ = pcStack_128;
  auVar41._0_8_ = local_130;
  auVar40._0_12_ = auVar41._0_12_;
  auVar40._12_4_ = (undefined4)plVar31[6];
  pcStack_128 = auVar40._8_8_;
LAB_00d86210:
  lVar21 = *(long *)(local_148 + 0x20);
  FUN_00c41540(lVar21);
  *(undefined8 *)(lVar21 + 0x84) = extraout_var;
  *(undefined8 *)(lVar21 + 0x7c) = extraout_d0;
  *(undefined8 *)(lVar21 + 0x94) = uVar43;
  *(undefined8 *)(lVar21 + 0x8c) = uVar36;
  *(undefined8 *)(lVar21 + 0xa4) = uVar45;
  *(undefined8 *)(lVar21 + 0x9c) = uVar44;
  *(undefined8 *)(lVar21 + 0xb4) = uVar47;
  *(undefined8 *)(lVar21 + 0xac) = uVar46;
  auVar6._8_8_ = pcStack_128;
  auVar6._0_8_ = local_130;
  *(long *)(lVar21 + 0xbc) = local_130;
  auVar41 = NEON_ext(auVar6,auVar6,8,1);
  *(long *)(lVar21 + 0xc4) = auVar41._0_8_;
  local_f8._0_8_ = 0xb6ae05e761a7a677;
  local_f8._8_8_ = PTR_s_PointUVScaleOffset_047e1568;
  local_e8 = (undefined8 *)0x1f;
  local_e0 = (long *)0x0;
  local_90[0]._8_8_ = uVar10;
  local_90[0]._0_8_ = lVar32;
  FUN_02739258(pcVar26,local_f8,local_90);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8._0_8_ = 0xb1f895661b186013;
  local_f8._8_8_ = PTR_s_PointMaskUVScaleOffset_047e1570;
  local_e8 = (undefined8 *)0x1f;
  local_e0 = (long *)0x0;
  local_a0[1] = uVar10;
  local_a0[0] = lVar32;
  FUN_02739258(pcVar26,local_f8,local_a0);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  uVar30 = *puVar27;
  if (uVar30 != 0) {
    uVar29 = uVar30 >> 1;
    uVar28 = uVar30 - (uVar29 & 0x5555555555555555);
    uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
    uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar28 < 2) {
      uVar25 = uVar30 - 1 & 0x417f7c3456b126d;
    }
    else if (uVar30 < 0x417f7c3456b126e) {
      uVar25 = 0;
      if (uVar30 != 0) {
        uVar25 = 0x417f7c3456b126d / uVar30;
      }
      uVar25 = 0x417f7c3456b126d - uVar25 * uVar30;
    }
    else {
      uVar25 = 0x417f7c3456b126d;
    }
    plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar25 * 8);
    if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
      if (uVar28 < 2) {
        do {
          if (plVar31[1] == 0x417f7c3456b126d) {
            if (plVar31[2] == 0x417f7c3456b126d) goto LAB_00d86458;
          }
          else if ((plVar31[1] & uVar30 - 1) != uVar25) break;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          uVar28 = plVar31[1];
          if (uVar28 == 0x417f7c3456b126d) {
            if (plVar31[2] == 0x417f7c3456b126d) goto LAB_00d86458;
          }
          else {
            if (uVar30 <= uVar28) {
              uVar5 = 0;
              if (uVar30 != 0) {
                uVar5 = uVar28 / uVar30;
              }
              uVar28 = uVar28 - uVar5 * uVar30;
            }
            if (uVar28 != uVar25) break;
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      goto LAB_00d86460;
    }
    goto LAB_00d86464;
  }
  goto LAB_00d86b7c;
LAB_00d86458:
  local_a8 = (ulong)*(uint *)(plVar31 + 6) << 0x20;
LAB_00d86460:
  if (uVar30 != 0) {
LAB_00d86464:
    uVar28 = uVar30 - (uVar29 & 0x5555555555555555);
    uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
    uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar28 < 2) {
      uVar25 = uVar30 - 1 & 0x417f4c3456b0d54;
    }
    else if (uVar30 < 0x417f4c3456b0d55) {
      uVar25 = 0;
      if (uVar30 != 0) {
        uVar25 = 0x417f4c3456b0d54 / uVar30;
      }
      uVar25 = 0x417f4c3456b0d54 - uVar25 * uVar30;
    }
    else {
      uVar25 = 0x417f4c3456b0d54;
    }
    plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar25 * 8);
    if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
      if (uVar28 < 2) {
        do {
          if (plVar31[1] == 0x417f4c3456b0d54) {
            if (plVar31[2] == 0x417f4c3456b0d54) goto LAB_00d865c4;
          }
          else if ((plVar31[1] & uVar30 - 1) != uVar25) break;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          uVar28 = plVar31[1];
          if (uVar28 == 0x417f4c3456b0d54) {
            if (plVar31[2] == 0x417f4c3456b0d54) goto LAB_00d865c4;
          }
          else {
            if (uVar30 <= uVar28) {
              uVar5 = 0;
              if (uVar30 != 0) {
                uVar5 = uVar28 / uVar30;
              }
              uVar28 = uVar28 - uVar5 * uVar30;
            }
            if (uVar28 != uVar25) break;
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      goto LAB_00d865cc;
    }
    goto LAB_00d865d0;
  }
  goto LAB_00d86b7c;
LAB_00d865c4:
  local_a8 = CONCAT44(local_a8._4_4_,(int)plVar31[6]);
LAB_00d865cc:
  if (uVar30 != 0) {
LAB_00d865d0:
    uVar28 = uVar30 - (uVar29 & 0x5555555555555555);
    uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
    uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar28 < 2) {
      uVar25 = uVar30 - 1 & 0x995ea6fa9feb3631;
    }
    else if (uVar30 < 0x995ea6fa9feb3632) {
      uVar25 = 0;
      if (uVar30 != 0) {
        uVar25 = 0x995ea6fa9feb3631 / uVar30;
      }
      uVar25 = 0x995ea6fa9feb3631 - uVar25 * uVar30;
    }
    else {
      uVar25 = 0x995ea6fa9feb3631;
    }
    plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar25 * 8);
    if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
      if (uVar28 < 2) {
        do {
          if (plVar31[1] == 0x995ea6fa9feb3631) {
            if (plVar31[2] == -0x66a159056014c9cf) goto LAB_00d86730;
          }
          else if ((plVar31[1] & uVar30 - 1) != uVar25) break;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          uVar28 = plVar31[1];
          if (uVar28 == 0x995ea6fa9feb3631) {
            if (plVar31[2] == -0x66a159056014c9cf) goto LAB_00d86730;
          }
          else {
            if (uVar30 <= uVar28) {
              uVar5 = 0;
              if (uVar30 != 0) {
                uVar5 = uVar28 / uVar30;
              }
              uVar28 = uVar28 - uVar5 * uVar30;
            }
            if (uVar28 != uVar25) break;
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      goto LAB_00d86738;
    }
    goto LAB_00d8673c;
  }
  goto LAB_00d86b7c;
LAB_00d86730:
  local_b0 = (ulong)*(uint *)(plVar31 + 6) << 0x20;
LAB_00d86738:
  if (uVar30 != 0) {
LAB_00d8673c:
    uVar28 = uVar30 - (uVar29 & 0x5555555555555555);
    uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
    uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar28 < 2) {
      uVar25 = uVar30 - 1 & 0x995ea3fa9feb3118;
    }
    else if (uVar30 < 0x995ea3fa9feb3119) {
      uVar25 = 0;
      if (uVar30 != 0) {
        uVar25 = 0x995ea3fa9feb3118 / uVar30;
      }
      uVar25 = 0x995ea3fa9feb3118 - uVar25 * uVar30;
    }
    else {
      uVar25 = 0x995ea3fa9feb3118;
    }
    plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar25 * 8);
    if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
      if (uVar28 < 2) {
        do {
          if (plVar31[1] == 0x995ea3fa9feb3118) {
            if (plVar31[2] == -0x66a15c056014cee8) goto LAB_00d8689c;
          }
          else if ((plVar31[1] & uVar30 - 1) != uVar25) break;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          uVar28 = plVar31[1];
          if (uVar28 == 0x995ea3fa9feb3118) {
            if (plVar31[2] == -0x66a15c056014cee8) goto LAB_00d8689c;
          }
          else {
            if (uVar30 <= uVar28) {
              uVar5 = 0;
              if (uVar30 != 0) {
                uVar5 = uVar28 / uVar30;
              }
              uVar28 = uVar28 - uVar5 * uVar30;
            }
            if (uVar28 != uVar25) break;
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      goto LAB_00d868a4;
    }
    goto LAB_00d868a8;
  }
  goto LAB_00d86b7c;
LAB_00d8689c:
  local_b0 = CONCAT44(local_b0._4_4_,(int)plVar31[6]);
LAB_00d868a4:
  if (uVar30 != 0) {
LAB_00d868a8:
    uVar28 = uVar30 - (uVar29 & 0x5555555555555555);
    uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
    uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar28 < 2) {
      uVar25 = uVar30 - 1 & 0x503c7ecb5d881821;
    }
    else if (uVar30 < 0x503c7ecb5d881822) {
      uVar25 = 0;
      if (uVar30 != 0) {
        uVar25 = 0x503c7ecb5d881821 / uVar30;
      }
      uVar25 = 0x503c7ecb5d881821 - uVar25 * uVar30;
    }
    else {
      uVar25 = 0x503c7ecb5d881821;
    }
    plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar25 * 8);
    if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
      if (uVar28 < 2) {
        do {
          if (plVar31[1] == 0x503c7ecb5d881821) {
            if (plVar31[2] == 0x503c7ecb5d881821) goto LAB_00d86a08;
          }
          else if ((plVar31[1] & uVar30 - 1) != uVar25) break;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          uVar28 = plVar31[1];
          if (uVar28 == 0x503c7ecb5d881821) {
            if (plVar31[2] == 0x503c7ecb5d881821) goto LAB_00d86a08;
          }
          else {
            if (uVar30 <= uVar28) {
              uVar5 = 0;
              if (uVar30 != 0) {
                uVar5 = uVar28 / uVar30;
              }
              uVar28 = uVar28 - uVar5 * uVar30;
            }
            if (uVar28 != uVar25) break;
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      goto LAB_00d86a10;
    }
    goto LAB_00d86a14;
  }
  goto LAB_00d86b7c;
LAB_00d86a08:
  local_b8 = (ulong)*(uint *)(plVar31 + 6) << 0x20;
LAB_00d86a10:
  if (uVar30 != 0) {
LAB_00d86a14:
    uVar28 = uVar30 - (uVar29 & 0x5555555555555555);
    uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
    uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar28 < 2) {
      uVar29 = uVar30 - 1 & 0xf23af44c62df7877;
    }
    else if (uVar30 < 0xf23af44c62df7878) {
      uVar29 = 0;
      if (uVar30 != 0) {
        uVar29 = 0xf23af44c62df7877 / uVar30;
      }
      uVar29 = 0xf23af44c62df7877 - uVar29 * uVar30;
    }
    else {
      uVar29 = 0xf23af44c62df7877;
    }
    plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar29 * 8);
    if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
      if (uVar28 < 2) {
        do {
          if (plVar31[1] == 0xf23af44c62df7877) {
            if (plVar31[2] == -0xdc50bb39d208789) goto LAB_00d86b74;
          }
          else if ((plVar31[1] & uVar30 - 1) != uVar29) break;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          uVar28 = plVar31[1];
          if (uVar28 == 0xf23af44c62df7877) {
            if (plVar31[2] == -0xdc50bb39d208789) goto LAB_00d86b74;
          }
          else {
            if (uVar30 <= uVar28) {
              uVar25 = 0;
              if (uVar30 != 0) {
                uVar25 = uVar28 / uVar30;
              }
              uVar28 = uVar28 - uVar25 * uVar30;
            }
            if (uVar28 != uVar29) break;
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
    }
  }
  goto LAB_00d86b7c;
LAB_00d86b74:
  local_b8 = CONCAT44(local_b8._4_4_,(int)plVar31[6]);
LAB_00d86b7c:
  lVar21 = *(long *)(local_148 + 0x28);
  local_f8._0_8_ = local_90;
  local_f8._8_8_ = (long)&local_a8 + 4;
  local_e8 = &local_a8;
  local_e0 = (long *)((long)&local_b0 + 4);
  local_d8 = &local_b0;
  local_d0 = local_a0;
  local_c8 = (long)&local_b8 + 4;
  local_c0 = &local_b8;
  FUN_00c41540(lVar21);
  FUN_0273937c(local_f8,lVar21 + 0x7c);
  local_f8._0_8_ = 0x60dd749b656aa7c0;
  local_f8._8_8_ = PTR_s_PointTexture_047e1578;
  local_e8 = (undefined8 *)0x1f;
  local_e0 = (long *)0x0;
  FUN_027393e8(&local_100,pcVar26,local_f8);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  local_f8._0_8_ = 0xd909bf865b3c983c;
  local_f8._8_8_ = PTR_s_PointMaskTexture_047e1580;
  local_e8 = (undefined8 *)0x1f;
  local_e0 = (long *)0x0;
  FUN_027393e8(&local_108,pcVar26,local_f8);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  *(undefined1 *)(local_148 + 0x30) = 0;
  local_f8._0_8_ = (long *)0x0;
  FUN_00d101e0(*(undefined8 *)(*(long *)(local_148 + 0x18) + 200),2,10,local_f8);
  auVar7._8_8_ = local_90[0]._8_8_;
  auVar7._0_8_ = local_90[0]._0_8_;
  if ((long *)local_f8._0_8_ != (long *)0x0) {
    plVar31 = (long *)(local_f8._0_8_ + 0x28);
    do {
      lVar21 = *plVar31;
      iVar4 = (int)lVar21 + -1;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar24) {
        *(int *)plVar31 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*(long *)local_f8._0_8_ + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_00d87430;
  }
  local_f8._0_8_ = (long *)0x0;
  FUN_00d101e0(*(undefined8 *)(*(long *)(local_148 + 0x18) + 200),2,0xb,local_f8);
  auVar7._8_8_ = local_90[0]._8_8_;
  auVar7._0_8_ = local_90[0]._0_8_;
  if ((long *)local_f8._0_8_ != (long *)0x0) {
    plVar31 = (long *)(local_f8._0_8_ + 0x28);
    do {
      lVar21 = *plVar31;
      iVar4 = (int)lVar21 + -1;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar24) {
        *(int *)plVar31 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*(long *)local_f8._0_8_ + 0x10))();
    }
    else if ((int)lVar21 == 0) goto LAB_00d87430;
  }
  if (((local_108 != (long *)0x0) && (0.0 < fVar39)) && (local_100 != (long *)0x0)) {
    *(undefined1 *)(local_148 + 0x30) = 1;
    FUN_00d101e0(*(undefined8 *)(*(long *)(local_148 + 0x18) + 200),2,10,&local_100);
    FUN_00d101e0(*(undefined8 *)(*(long *)(local_148 + 0x18) + 200),2,0xb,&local_108);
  }
  uVar30 = *puVar27;
  if (uVar30 != 0) {
    uVar28 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
    uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
    uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar28 < 2) {
      uVar29 = uVar30 - 1 & 0xccfdef336cffc7ab;
    }
    else if (uVar30 < 0xccfdef336cffc7ac) {
      uVar29 = 0;
      if (uVar30 != 0) {
        uVar29 = 0xccfdef336cffc7ab / uVar30;
      }
      uVar29 = 0xccfdef336cffc7ab - uVar29 * uVar30;
    }
    else {
      uVar29 = 0xccfdef336cffc7ab;
    }
    plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar29 * 8);
    fVar39 = 0.0;
    if (plVar31 == (long *)0x0) {
LAB_00d86ec0:
      uVar28 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
      uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
      uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar28 < 2) {
        uVar29 = uVar30 - 1 & 0x325d76aa53849747;
      }
      else if (uVar30 < 0x325d76aa53849748) {
        uVar29 = 0;
        if (uVar30 != 0) {
          uVar29 = 0x325d76aa53849747 / uVar30;
        }
        uVar29 = 0x325d76aa53849747 - uVar29 * uVar30;
      }
      else {
        uVar29 = 0x325d76aa53849747;
      }
      plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar29 * 8);
      if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
        if (uVar28 < 2) {
          do {
            if (plVar31[1] == 0x325d76aa53849747) {
              if (plVar31[2] == 0x325d76aa53849747) goto LAB_00d87024;
            }
            else if ((plVar31[1] & uVar30 - 1) != uVar29) break;
            plVar31 = (long *)*plVar31;
          } while (plVar31 != (long *)0x0);
        }
        else {
          do {
            uVar28 = plVar31[1];
            if (uVar28 == 0x325d76aa53849747) {
              if (plVar31[2] == 0x325d76aa53849747) goto LAB_00d87024;
            }
            else {
              if (uVar30 <= uVar28) {
                uVar25 = 0;
                if (uVar30 != 0) {
                  uVar25 = uVar28 / uVar30;
                }
                uVar28 = uVar28 - uVar25 * uVar30;
              }
              if (uVar28 != uVar29) break;
            }
            plVar31 = (long *)*plVar31;
          } while (plVar31 != (long *)0x0);
        }
      }
      fVar38 = 0.0;
    }
    else {
      plVar31 = (long *)*plVar31;
      fVar39 = 0.0;
      if (plVar31 == (long *)0x0) goto LAB_00d86ec0;
      if (uVar28 < 2) {
        do {
          if (plVar31[1] == 0xccfdef336cffc7ab) {
            if (plVar31[2] == -0x330210cc93003855) goto LAB_00d86eb4;
          }
          else if ((plVar31[1] & uVar30 - 1) != uVar29) break;
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      else {
        do {
          uVar28 = plVar31[1];
          if (uVar28 == 0xccfdef336cffc7ab) {
            if (plVar31[2] == -0x330210cc93003855) goto LAB_00d86eb4;
          }
          else {
            if (uVar30 <= uVar28) {
              uVar25 = 0;
              if (uVar30 != 0) {
                uVar25 = uVar28 / uVar30;
              }
              uVar28 = uVar28 - uVar25 * uVar30;
            }
            if (uVar28 != uVar29) break;
          }
          plVar31 = (long *)*plVar31;
        } while (plVar31 != (long *)0x0);
      }
      fVar39 = 0.0;
LAB_00d86eb8:
      fVar38 = 0.0;
      if (uVar30 != 0) goto LAB_00d86ec0;
    }
LAB_00d87028:
    if (fVar39 <= 0.0) {
      if (0.0 < fVar38) {
        puVar22 = (undefined8 *)FUN_0166cefc();
        uVar36 = *puVar22;
        uVar43 = 9;
        goto LAB_00d87040;
      }
    }
    else {
      puVar22 = (undefined8 *)FUN_0166cefc();
      uVar36 = *puVar22;
      uVar43 = 6;
LAB_00d87040:
      local_f8 = FUN_0166cf08(uVar36,2,uVar43);
      FUN_00ead0d0(*(undefined8 *)(*(long *)(local_148 + 0x18) + 200),2,10,local_f8);
    }
    uVar30 = *puVar27;
    if (uVar30 != 0) {
      uVar28 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
      uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
      uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar28 < 2) {
        uVar29 = uVar30 - 1 & 0x4fea2bd5f4f3fe17;
      }
      else if (uVar30 < 0x4fea2bd5f4f3fe18) {
        uVar29 = 0;
        if (uVar30 != 0) {
          uVar29 = 0x4fea2bd5f4f3fe17 / uVar30;
        }
        uVar29 = 0x4fea2bd5f4f3fe17 - uVar29 * uVar30;
      }
      else {
        uVar29 = 0x4fea2bd5f4f3fe17;
      }
      plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar29 * 8);
      fVar39 = 0.0;
      if (plVar31 != (long *)0x0) {
        plVar31 = (long *)*plVar31;
        fVar39 = 0.0;
        if (plVar31 != (long *)0x0) {
          if (uVar28 < 2) {
            do {
              if (plVar31[1] == 0x4fea2bd5f4f3fe17) {
                if (plVar31[2] == 0x4fea2bd5f4f3fe17) goto LAB_00d87200;
              }
              else if ((plVar31[1] & uVar30 - 1) != uVar29) break;
              plVar31 = (long *)*plVar31;
            } while (plVar31 != (long *)0x0);
          }
          else {
            do {
              uVar28 = plVar31[1];
              if (uVar28 == 0x4fea2bd5f4f3fe17) {
                if (plVar31[2] == 0x4fea2bd5f4f3fe17) goto LAB_00d87200;
              }
              else {
                if (uVar30 <= uVar28) {
                  uVar25 = 0;
                  if (uVar30 != 0) {
                    uVar25 = uVar28 / uVar30;
                  }
                  uVar28 = uVar28 - uVar25 * uVar30;
                }
                if (uVar28 != uVar29) break;
              }
              plVar31 = (long *)*plVar31;
            } while (plVar31 != (long *)0x0);
          }
          fVar39 = 0.0;
          if (uVar30 == 0) goto LAB_00d873b0;
        }
      }
LAB_00d8720c:
      uVar28 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
      uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
      uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar28 < 2) {
        uVar29 = uVar30 - 1 & 0x6f1299e1eee26a3b;
      }
      else if (uVar30 < 0x6f1299e1eee26a3c) {
        uVar29 = 0;
        if (uVar30 != 0) {
          uVar29 = 0x6f1299e1eee26a3b / uVar30;
        }
        uVar29 = 0x6f1299e1eee26a3b - uVar29 * uVar30;
      }
      else {
        uVar29 = 0x6f1299e1eee26a3b;
      }
      plVar31 = *(long **)(*(long *)(lVar33 + uVar23 * 0x1d0 + 0x80) + uVar29 * 8);
      if ((plVar31 != (long *)0x0) && (plVar31 = (long *)*plVar31, plVar31 != (long *)0x0)) {
        if (uVar28 < 2) {
          do {
            if (plVar31[1] == 0x6f1299e1eee26a3b) {
              if (plVar31[2] == 0x6f1299e1eee26a3b) goto LAB_00d87370;
            }
            else if ((plVar31[1] & uVar30 - 1) != uVar29) break;
            plVar31 = (long *)*plVar31;
          } while (plVar31 != (long *)0x0);
        }
        else {
          do {
            uVar28 = plVar31[1];
            if (uVar28 == 0x6f1299e1eee26a3b) {
              if (plVar31[2] == 0x6f1299e1eee26a3b) goto LAB_00d87370;
            }
            else {
              if (uVar30 <= uVar28) {
                uVar25 = 0;
                if (uVar30 != 0) {
                  uVar25 = uVar28 / uVar30;
                }
                uVar28 = uVar28 - uVar25 * uVar30;
              }
              if (uVar28 != uVar29) break;
            }
            plVar31 = (long *)*plVar31;
          } while (plVar31 != (long *)0x0);
        }
      }
      fVar38 = 0.0;
LAB_00d87374:
      if (fVar39 <= 0.0) {
        if (fVar38 <= 0.0) goto LAB_00d873b0;
        puVar22 = (undefined8 *)FUN_0166cefc();
        uVar36 = *puVar22;
        uVar43 = 9;
      }
      else {
        puVar22 = (undefined8 *)FUN_0166cefc();
        uVar36 = *puVar22;
        uVar43 = 6;
      }
      auVar41 = FUN_0166cf08(uVar36,2,uVar43);
      local_f8 = auVar41;
      FUN_00ead0d0(*(undefined8 *)(*(long *)(local_148 + 0x18) + 200),2,0xb,local_f8);
    }
  }
LAB_00d873b0:
  auVar41 = *(undefined1 (*) [16])(lVar33 + uVar23 * 0x1d0 + 0x70);
  lVar33 = *(long *)(local_148 + 0x18);
  auVar42._0_12_ = auVar41._0_12_;
  auVar42._12_4_ = fVar49 + fVar49;
  *(long *)(lVar33 + 0xe8) = auVar42._8_8_;
  *(long *)(lVar33 + 0xe0) = auVar41._0_8_;
  FUN_02739548(DAT_0485a0e8,pcVar26,0);
  auVar7._8_8_ = local_90[0]._8_8_;
  auVar7._0_8_ = local_90[0]._0_8_;
  if (local_108 != (long *)0x0) {
    plVar31 = local_108 + 5;
    do {
      lVar33 = *plVar31;
      iVar4 = (int)lVar33 + -1;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar24) {
        *(int *)plVar31 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
    else if ((int)lVar33 == 0) goto LAB_00d87430;
  }
  auVar7._8_8_ = local_90[0]._8_8_;
  auVar7._0_8_ = local_90[0]._0_8_;
  if (local_100 != (long *)0x0) {
    plVar31 = local_100 + 5;
    do {
      lVar33 = *plVar31;
      iVar4 = (int)lVar33 + -1;
      cVar3 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar24) {
        *(int *)plVar31 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_100 + 0x10))();
    }
    else {
      local_90[0] = auVar7;
      if ((int)lVar33 == 0) goto LAB_00d87430;
    }
  }
LAB_00d854a4:
  lVar33 = plVar35[7];
LAB_00d854a8:
  uVar23 = uVar23 + 1;
  if ((ulong)((plVar35[8] - lVar33 >> 4) * 0x34f72c234f72c235) <= uVar23) goto LAB_00d85a68;
  goto LAB_00d854c4;
LAB_00d86eb4:
  fVar39 = *(float *)(plVar31 + 6);
  goto LAB_00d86eb8;
LAB_00d87024:
  fVar38 = *(float *)(plVar31 + 6);
  goto LAB_00d87028;
LAB_00d87200:
  fVar39 = *(float *)(plVar31 + 6);
  fVar38 = 0.0;
  if (uVar30 == 0) goto LAB_00d87374;
  goto LAB_00d8720c;
LAB_00d87370:
  fVar38 = *(float *)(plVar31 + 6);
  goto LAB_00d87374;
}


