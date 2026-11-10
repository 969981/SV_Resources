/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca993c; name: FUN_00ca993c
 */


void FUN_00ca993c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  ulong *puVar20;
  long *plVar21;
  undefined8 local_250;
  char *pcStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined *puStack_228;
  undefined8 local_220;
  long *local_218;
  undefined8 local_210;
  char *pcStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined *puStack_1e8;
  undefined8 local_1e0;
  long *local_1d8;
  undefined8 local_1d0;
  undefined *puStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  long *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  char local_16c [4];
  undefined8 local_168;
  undefined *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *puStack_140;
  undefined8 local_138;
  long *local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 uStack_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if (DAT_0485a120 == '\0') {
    local_16c[0] = '\x01';
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = 0;
    FUN_00c6d220(param_2,&local_180,&local_190,local_16c,*(undefined8 *)(param_1 + 0x380),0);
    *(char *)(*(long *)(param_1 + 0x388) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x390) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x440) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x4e8) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x398) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x448) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x4f0) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x3a0) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x450) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x4f8) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x3a8) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x458) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x500) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x3b0) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x460) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x508) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x3b8) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x468) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x510) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x3c0) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x470) + 0x288) = local_16c[0];
    *(char *)(*(long *)(param_1 + 0x518) + 0x288) = local_16c[0];
    if (local_16c[0] != '\0') {
      iVar14 = (int)local_190;
      if ((int)local_190 < 0) {
        iVar14 = (int)local_190 + 1;
      }
      iVar14 = iVar14 >> 1;
      iVar15 = local_190._4_4_;
      if (local_190 < 0) {
        iVar15 = local_190._4_4_ + 1;
      }
      iVar15 = iVar15 >> 1;
      lVar19 = 0;
      iVar17 = (int)local_188;
      if ((int)local_188 < 0) {
        iVar17 = (int)local_188 + 1;
      }
      iVar17 = iVar17 >> 1;
      iVar18 = local_188._4_4_;
      if (local_188 < 0) {
        iVar18 = local_188._4_4_ + 1;
      }
      iVar18 = iVar18 >> 1;
      plVar21 = (long *)(param_1 + 0x588);
      do {
        if (iVar14 < 0) {
          iVar14 = iVar14 + 1;
        }
        iVar14 = iVar14 >> 1;
        if (iVar15 < 0) {
          iVar15 = iVar15 + 1;
        }
        iVar15 = iVar15 >> 1;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 1;
        }
        iVar17 = iVar17 >> 1;
        if (iVar18 < 0) {
          iVar18 = iVar18 + 1;
        }
        iVar18 = iVar18 >> 1;
        FUN_00caa46c(*(undefined8 *)(*(long *)(param_1 + 0x400 + lVar19) + 200),0,iVar14,iVar15,
                     iVar17,iVar18);
        FUN_00caa46c(*(undefined8 *)(plVar21[-0x15] + 200),0,iVar14,iVar15,iVar17,iVar18);
        FUN_00caa46c(*(undefined8 *)(*plVar21 + 200),0,iVar14,iVar15,iVar17,iVar18);
        FUN_00caa46c(*(undefined8 *)(*plVar21 + 200),1,iVar14,iVar15,iVar17,iVar18);
        lVar19 = lVar19 + 8;
        plVar21 = plVar21 + -1;
      } while (lVar19 != 0x38);
      local_1b0 = 0x9a33ee12e00dbfd0;
      puStack_1a8 = PTR_s_PassType_047e16d8;
      local_1a0 = 0x1f;
      local_198 = (long *)0x0;
      local_1d0 = 0x14ceec49aba2c182;
      puStack_1c8 = PTR_s_BlurVertical_047e1750;
      local_1c0 = 0x1f;
      uStack_1b8 = 0;
      FUN_00d0fefc(*(undefined8 *)(param_1 + 0x590),&local_1b0,&local_1d0);
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      local_1e0 = 0x1f;
      local_1d8 = (long *)0x0;
      local_1f0 = 0x1f82a69c6cc0d2cd;
      puStack_1e8 = PTR_s_CompositeBlur_047e1798;
      local_210 = 0x3dd19bc2820b81b8;
      pcStack_208 = "False";
      local_200 = 5;
      uStack_1f8 = 0;
      FUN_00d0fefc(*(undefined8 *)(param_1 + 0x590),&local_1f0,&local_210);
      if (local_1d8 != (long *)0x0) {
        (**(code **)(*local_1d8 + 0x20))();
      }
      local_250 = 0x3dd19bc2820b81b8;
      pcStack_248 = "False";
      local_220 = 0x1f;
      local_218 = (long *)0x0;
      local_230 = 0x687ab1cc4a463167;
      puStack_228 = PTR_s_CompositeBloom_047e17a0;
      local_240 = 5;
      uStack_238 = 0;
      FUN_00d0fefc(*(undefined8 *)(param_1 + 0x590),&local_230,&local_250);
      if (local_218 != (long *)0x0) {
        (**(code **)(*local_218 + 0x20))();
      }
      lVar19 = DAT_0485a0e8;
      plVar21 = (long *)(DAT_0485a0e8 + 0xd70);
      lVar6 = nn::os::GetCurrentThread();
      do {
        lVar7 = *plVar21;
        lVar9 = *(long *)(lVar19 + 0xd78);
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *plVar21 = lVar7;
          *(long *)(lVar19 + 0xd78) = lVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00ca9c7c:
      while ((lVar7 != 0 && (lVar6 != lVar7))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xd80));
        do {
          lVar7 = *plVar21;
          lVar9 = *(long *)(lVar19 + 0xd78);
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar11) {
            *plVar21 = lVar7;
            *(long *)(lVar19 + 0xd78) = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      do {
        lVar1 = *plVar21;
        lVar2 = *(long *)(lVar19 + 0xd78);
        if (lVar1 != lVar7 || lVar2 != lVar9) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto LAB_00ca9cac;
        }
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *plVar21 = lVar7;
          *(long *)(lVar19 + 0xd74) = lVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar11 = true;
LAB_00ca9cac:
      if (!bVar11) {
        lVar7 = lVar1;
        lVar9 = lVar2;
        goto LAB_00ca9c7c;
      }
      lVar6 = *(long *)(lVar19 + 0x38);
      lVar7 = *(long *)(lVar19 + 0x40);
      if (lVar7 != lVar6) {
        uVar16 = 0;
LAB_00ca9e78:
        uVar12 = 0xf33d018dbad61607;
        if (((*(long *)(lVar6 + (long)(int)uVar16 * 0x1d0 + 0x1c8) == 0) &&
            (*(long *)(lVar6 + uVar16 * 0x1d0 + 0x28) == 0x757527f9d900520e)) &&
           (*(char *)(lVar6 + uVar16 * 0x1d0 + 0x1b8) != '\0')) {
          puVar20 = (ulong *)(lVar6 + uVar16 * 0x1d0 + 0x88);
          uVar10 = *puVar20;
          if (uVar10 != 0) {
            uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
            uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
            uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar8 < 2) {
              uVar12 = uVar10 - 1 & 0xf33d018dbad61607;
            }
            else if (uVar10 < 0xf33d018dbad61608) {
              uVar12 = 0;
              if (uVar10 != 0) {
                uVar12 = 0xf33d018dbad61607 / uVar10;
              }
              uVar12 = 0xf33d018dbad61607 - uVar12 * uVar10;
            }
            plVar13 = *(long **)(*(long *)(lVar6 + uVar16 * 0x1d0 + 0x80) + uVar12 * 8);
            if ((plVar13 == (long *)0x0) || (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0)) {
LAB_00caa368:
              bVar11 = false;
            }
            else if (uVar8 < 2) {
              do {
                if (plVar13[1] == 0xf33d018dbad61607) {
                  if (plVar13[2] == -0xcc2fe724529e9f9) goto LAB_00ca9fa4;
                }
                else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_00caa368;
                plVar13 = (long *)*plVar13;
                bVar11 = false;
              } while (plVar13 != (long *)0x0);
            }
            else {
              do {
                uVar8 = plVar13[1];
                if (uVar8 == 0xf33d018dbad61607) {
                  if (plVar13[2] == -0xcc2fe724529e9f9) goto LAB_00ca9fa4;
                }
                else {
                  if (uVar10 <= uVar8) {
                    uVar4 = 0;
                    if (uVar10 != 0) {
                      uVar4 = uVar8 / uVar10;
                    }
                    uVar8 = uVar8 - uVar4 * uVar10;
                  }
                  if (uVar8 != uVar12) goto LAB_00caa368;
                }
                plVar13 = (long *)*plVar13;
                bVar11 = false;
              } while (plVar13 != (long *)0x0);
            }
            goto LAB_00caa028;
          }
          goto LAB_00ca9e58;
        }
        goto LAB_00ca9e60;
      }
LAB_00caa370:
      do {
        lVar6 = *plVar21;
        lVar7 = *(long *)(lVar19 + 0xd78);
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *plVar21 = lVar6;
          *(long *)(lVar19 + 0xd78) = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        lVar9 = *plVar21;
        lVar1 = *(long *)(lVar19 + 0xd78);
        if (lVar9 != lVar6 || lVar1 != lVar7) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto joined_r0x00caa3a0;
        }
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *plVar21 = lVar6;
          *(long *)(lVar19 + 0xd74) = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar11 = true;
joined_r0x00caa3a0:
      if (!bVar11) {
        do {
          lVar6 = *plVar21;
          lVar7 = *(long *)(lVar19 + 0xd78);
          if (lVar6 != lVar9 || lVar7 != lVar1) {
            bVar11 = false;
            ClearExclusiveLocal();
            lVar9 = lVar6;
            lVar1 = lVar7;
            goto joined_r0x00caa3a0;
          }
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar11) {
            *plVar21 = lVar9;
            *(long *)(lVar19 + 0xd74) = lVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar11 = true;
        lVar9 = lVar6;
        lVar1 = lVar7;
        goto joined_r0x00caa3a0;
      }
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xd80));
    }
  }
  return;
LAB_00ca9fa4:
  if (*(float *)(plVar13 + 6) <= 0.0) {
    bVar11 = false;
  }
  else {
    local_88 = 0x687ab1cc4a463167;
    local_80 = PTR_s_CompositeBloom_047e17a0;
    uStack_78 = 0x1f;
    local_a8 = 0xf644afd9efa28ae5;
    local_70 = (long *)0x0;
    local_a0 = &DAT_03c7144e;
    uStack_98 = 4;
    local_90 = 0;
    FUN_00d0fefc(*(undefined8 *)(param_1 + 0x590),&local_88,&local_a8);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    bVar11 = true;
  }
LAB_00caa028:
  uVar12 = *puVar20;
  if (uVar12 != 0) {
    uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar8 = uVar12 - 1 & 0x8f457f2507b3ad8e;
    }
    else if (uVar12 < 0x8f457f2507b3ad8f) {
      uVar8 = 0;
      if (uVar12 != 0) {
        uVar8 = 0x8f457f2507b3ad8e / uVar12;
      }
      uVar8 = 0x8f457f2507b3ad8e - uVar8 * uVar12;
    }
    else {
      uVar8 = 0x8f457f2507b3ad8e;
    }
    plVar13 = *(long **)(*(long *)(lVar6 + uVar16 * 0x1d0 + 0x80) + uVar8 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar13[1] == 0x8f457f2507b3ad8e) {
            if (plVar13[2] == -0x70ba80daf84c5272) goto LAB_00caa130;
          }
          else if ((plVar13[1] & uVar12 - 1) != uVar8) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar13[1];
          if (uVar10 == 0x8f457f2507b3ad8e) {
            if (plVar13[2] == -0x70ba80daf84c5272) goto LAB_00caa130;
          }
          else {
            if (uVar12 <= uVar10) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar4 * uVar12;
            }
            if (uVar10 != uVar8) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_00caa128:
  if (!bVar11) goto LAB_00ca9e58;
LAB_00caa1a0:
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x400));
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x408));
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x410));
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x418));
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x420));
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x428));
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x430));
  puVar5 = PTR_s_PassType_047e16d8;
  local_108 = 0x9a33ee12e00dbfd0;
  local_100 = PTR_s_PassType_047e16d8;
  uStack_f8 = 0x1f;
  local_f0 = (long *)0x0;
  local_128 = 0x24024789dc763388;
  local_110 = 0;
  local_120 = PTR_s_BlurHorizontal_047e1740;
  uStack_118 = 0x1f;
  FUN_00d0fefc(*(undefined8 *)(param_1 + 0x590),&local_108,&local_128);
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  FUN_00d100a8(*(undefined8 *)(param_1 + 0x590));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x4b0) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x4b0));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x4b8) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x4b8));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x4c0) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x4c0));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x4c8) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x4c8));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x4d0) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x4d0));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x4d8) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x4d8));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x4e0) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x4e0));
  local_168 = 0x14ceec49aba2c182;
  local_148 = 0x9a33ee12e00dbfd0;
  puStack_140 = puVar5;
  local_138 = 0x1f;
  local_130 = (long *)0x0;
  local_150 = 0;
  local_160 = PTR_s_BlurVertical_047e1750;
  uStack_158 = 0x1f;
  FUN_00d0fefc(*(undefined8 *)(param_1 + 0x590),&local_148,&local_168);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  FUN_00d100a8(*(undefined8 *)(param_1 + 0x590));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x558) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x558));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x560) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x560));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x568) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x568));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x570) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x570));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x578) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x578));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x580) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x580));
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x588) + 200),0,*(long *)(param_1 + 0x590) + 0xf0
              );
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x588));
LAB_00ca9e58:
  lVar6 = *(long *)(lVar19 + 0x38);
  lVar7 = *(long *)(lVar19 + 0x40);
LAB_00ca9e60:
  uVar16 = uVar16 + 1;
  if ((ulong)((lVar7 - lVar6 >> 4) * 0x34f72c234f72c235) <= uVar16) goto LAB_00caa370;
  goto LAB_00ca9e78;
LAB_00caa130:
  if (*(float *)(plVar13 + 6) <= 0.0) goto LAB_00caa128;
  local_c8 = 0x1f82a69c6cc0d2cd;
  local_c0 = PTR_s_CompositeBlur_047e1798;
  uStack_b8 = 0x1f;
  local_e8 = 0xf644afd9efa28ae5;
  local_b0 = (long *)0x0;
  local_e0 = &DAT_03c7144e;
  uStack_d8 = 4;
  local_d0 = 0;
  FUN_00d0fefc(*(undefined8 *)(param_1 + 0x590),&local_c8,&local_e8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  goto LAB_00caa1a0;
}


