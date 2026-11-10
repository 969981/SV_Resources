/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e86a0; name: FUN_011e86a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_011e86a0(long param_1,long *param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  long *plVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  char *pcVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long lVar32;
  float fVar33;
  undefined1 local_240;
  undefined7 uStack_23f;
  undefined1 *local_238;
  undefined1 *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  long local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  long local_168;
  undefined4 local_160;
  long local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  long local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long local_98;
  undefined4 local_90;
  undefined2 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulong local_70 [2];
  
  plVar1 = (long *)(param_1 + 0xd70);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0xd78) == 0) {
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0xd78) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_011e86f0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xd78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xd78) == 0) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar10;
            *(undefined8 *)(param_1 + 0xd78) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_011e86f0;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0xd78) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_011e86f0:
  plVar25 = (long *)(param_1 + 0x38);
  lVar10 = *plVar25;
  uVar18 = (*(long *)(param_1 + 0x40) - lVar10 >> 4) * 0x34f72c234f72c235;
  if ((int)uVar18 == 0) {
LAB_011e8748:
    local_1b0 = *(undefined8 *)(param_1 + 8);
    local_240 = 0;
    local_1a0 = 0;
    local_238 = &DAT_cbf29ce484222645;
    local_230 = &DAT_03c886bc;
    local_218 = &DAT_cbf29ce484222645;
    local_210 = &DAT_03c886bc;
    uStack_1a8 = 0x666666666666666;
    local_190 = 0;
    local_198 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0x3f800000;
    local_138 = 0;
    local_130 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0x3f800000;
    local_d0 = 0;
    local_c8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0x3f800000;
    local_78 = 0;
    uStack_140 = 0x555555555555555;
    local_128 = 0;
    uStack_d8 = 0x666666666666666;
    local_c0 = 0;
    local_88 = 1;
    local_80 = 1;
    local_228 = 0;
    local_220 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_180 = 0x666666666666666;
    uStack_178 = 0;
    local_158 = 0;
    local_150 = 0;
    local_118 = 0x555555555555555;
    uStack_110 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_b0 = 0x666666666666666;
    uStack_a8 = 0;
    uStack_1e8 = _UNK_03caa988;
    local_1f0 = _DAT_03caa980;
    uStack_1d8 = _UNK_03cabe58;
    uStack_1e0 = _DAT_03cabe50;
    puVar26 = *(undefined8 **)(param_1 + 0x40);
    uStack_188 = local_1b0;
    local_148 = local_1b0;
    uStack_120 = local_1b0;
    local_e0 = local_1b0;
    uStack_b8 = local_1b0;
    if (puVar26 < *(undefined8 **)(param_1 + 0x48)) {
      uVar19 = *(undefined8 *)(param_1 + 0x50);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      uVar8 = local_200;
      uVar7 = local_220;
      if (lVar10 == 0) {
        *puVar26 = CONCAT71(uStack_23f,local_240);
        puVar26[1] = local_238;
        puVar26[2] = local_230;
        puVar26[3] = local_228;
        local_220 = 0;
        puVar26[4] = uVar7;
        puVar26[5] = local_218;
        puVar26[6] = local_210;
        puVar26[7] = local_208;
        local_200 = 0;
        puVar26[8] = uVar8;
        memcpy(puVar26 + 10,&local_1f0,0x30);
        lVar10 = local_1c0;
        local_1c0 = 0;
        puVar26[0x10] = lVar10;
        memcpy(puVar26 + 0x11,&local_1b8,0x28);
        local_1b8 = 0;
        memcpy(puVar26 + 0x16,&local_190,0x28);
        lVar10 = local_158;
        puVar26[0x1b] = local_168;
        *(undefined4 *)(puVar26 + 0x1c) = local_160;
        if (local_168 != 0) {
          uVar14 = puVar26[0x11];
          uVar16 = *(ulong *)(puVar26[0x16] + 8);
          if ((uVar14 & uVar14 - 1) == 0) {
            uVar16 = uVar14 - 1 & uVar16;
          }
          else if (uVar14 <= uVar16) {
            uVar15 = 0;
            if (uVar14 != 0) {
              uVar15 = uVar16 / uVar14;
            }
            uVar16 = uVar16 - uVar15 * uVar14;
          }
          *(undefined8 **)(puVar26[0x10] + uVar16 * 8) = puVar26 + 0x16;
          local_190 = 0;
          local_168 = 0;
        }
        local_158 = 0;
        puVar26[0x1d] = lVar10;
        memcpy(puVar26 + 0x1e,&local_150,0x28);
        local_150 = 0;
        memcpy(puVar26 + 0x23,&local_128,0x28);
        uVar19 = local_f0;
        puVar26[0x28] = local_100;
        *(undefined4 *)(puVar26 + 0x29) = local_f8;
        if (local_100 != 0) {
          uVar14 = puVar26[0x1e];
          uVar16 = *(ulong *)(puVar26[0x23] + 8);
          if ((uVar14 & uVar14 - 1) == 0) {
            uVar16 = uVar14 - 1 & uVar16;
          }
          else if (uVar14 <= uVar16) {
            uVar15 = 0;
            if (uVar14 != 0) {
              uVar15 = uVar16 / uVar14;
            }
            uVar16 = uVar16 - uVar15 * uVar14;
          }
          *(undefined8 **)(puVar26[0x1d] + uVar16 * 8) = puVar26 + 0x23;
          local_128 = 0;
          local_100 = 0;
        }
        local_f0 = 0;
        puVar26[0x2a] = uVar19;
        memcpy(puVar26 + 0x2b,&local_e8,0x28);
        local_e8 = 0;
        memcpy(puVar26 + 0x30,&local_c0,0x28);
        puVar26[0x35] = local_98;
        *(undefined4 *)(puVar26 + 0x36) = local_90;
        if (local_98 != 0) {
          uVar14 = puVar26[0x2b];
          uVar16 = *(ulong *)(puVar26[0x30] + 8);
          if ((uVar14 & uVar14 - 1) == 0) {
            uVar16 = uVar14 - 1 & uVar16;
          }
          else if (uVar14 <= uVar16) {
            uVar15 = 0;
            if (uVar14 != 0) {
              uVar15 = uVar16 / uVar14;
            }
            uVar16 = uVar16 - uVar15 * uVar14;
          }
          *(undefined8 **)(puVar26[0x2a] + uVar16 * 8) = puVar26 + 0x30;
          local_c0 = 0;
          local_98 = 0;
        }
        *(undefined2 *)(puVar26 + 0x37) = local_88;
        puVar26[0x39] = local_78;
        puVar26[0x38] = CONCAT44(uStack_7c,local_80);
      }
      else {
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_011e98d4;
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar19;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *puVar26 = CONCAT71(uStack_23f,local_240);
        puVar26[1] = local_238;
        puVar26[2] = local_230;
        puVar26[3] = local_228;
        local_220 = 0;
        puVar26[4] = uVar7;
        puVar26[5] = local_218;
        puVar26[6] = local_210;
        puVar26[7] = local_208;
        local_200 = 0;
        puVar26[8] = uVar8;
        memcpy(puVar26 + 10,&local_1f0,0x30);
        lVar24 = local_1c0;
        local_1c0 = 0;
        puVar26[0x10] = lVar24;
        memcpy(puVar26 + 0x11,&local_1b8,0x28);
        local_1b8 = 0;
        memcpy(puVar26 + 0x16,&local_190,0x28);
        lVar24 = local_158;
        puVar26[0x1b] = local_168;
        *(undefined4 *)(puVar26 + 0x1c) = local_160;
        if (local_168 != 0) {
          uVar14 = puVar26[0x11];
          uVar16 = *(ulong *)(puVar26[0x16] + 8);
          if ((uVar14 & uVar14 - 1) == 0) {
            uVar16 = uVar14 - 1 & uVar16;
          }
          else if (uVar14 <= uVar16) {
            uVar15 = 0;
            if (uVar14 != 0) {
              uVar15 = uVar16 / uVar14;
            }
            uVar16 = uVar16 - uVar15 * uVar14;
          }
          *(undefined8 **)(puVar26[0x10] + uVar16 * 8) = puVar26 + 0x16;
          local_190 = 0;
          local_168 = 0;
        }
        local_158 = 0;
        puVar26[0x1d] = lVar24;
        memcpy(puVar26 + 0x1e,&local_150,0x28);
        local_150 = 0;
        memcpy(puVar26 + 0x23,&local_128,0x28);
        uVar19 = local_f0;
        puVar26[0x28] = local_100;
        *(undefined4 *)(puVar26 + 0x29) = local_f8;
        if (local_100 != 0) {
          uVar14 = puVar26[0x1e];
          uVar16 = *(ulong *)(puVar26[0x23] + 8);
          if ((uVar14 & uVar14 - 1) == 0) {
            uVar16 = uVar14 - 1 & uVar16;
          }
          else if (uVar14 <= uVar16) {
            uVar15 = 0;
            if (uVar14 != 0) {
              uVar15 = uVar16 / uVar14;
            }
            uVar16 = uVar16 - uVar15 * uVar14;
          }
          *(undefined8 **)(puVar26[0x1d] + uVar16 * 8) = puVar26 + 0x23;
          local_128 = 0;
          local_100 = 0;
        }
        local_f0 = 0;
        puVar26[0x2a] = uVar19;
        memcpy(puVar26 + 0x2b,&local_e8,0x28);
        local_e8 = 0;
        memcpy(puVar26 + 0x30,&local_c0,0x28);
        puVar26[0x35] = local_98;
        *(undefined4 *)(puVar26 + 0x36) = local_90;
        if (local_98 != 0) {
          uVar14 = puVar26[0x2b];
          uVar16 = *(ulong *)(puVar26[0x30] + 8);
          if ((uVar14 & uVar14 - 1) == 0) {
            uVar16 = uVar14 - 1 & uVar16;
          }
          else if (uVar14 <= uVar16) {
            uVar15 = 0;
            if (uVar14 != 0) {
              uVar15 = uVar16 / uVar14;
            }
            uVar16 = uVar16 - uVar15 * uVar14;
          }
          *(undefined8 **)(puVar26[0x2a] + uVar16 * 8) = puVar26 + 0x30;
          local_c0 = 0;
          local_98 = 0;
        }
        *(undefined2 *)(puVar26 + 0x37) = local_88;
        puVar26[0x39] = local_78;
        puVar26[0x38] = CONCAT44(uStack_7c,local_80);
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      *(undefined8 **)(param_1 + 0x40) = puVar26 + 0x3a;
    }
    else {
      lVar24 = (long)puVar26 - lVar10 >> 4;
      uVar16 = *(ulong *)(param_1 + 0x58);
      if (0x7ffffffffffffffe < uVar16) {
        uVar16 = 0x7fffffffffffffff;
      }
      uVar14 = lVar24 * 0x34f72c234f72c235 + 1;
      if (uVar16 < uVar14) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = (long)*(undefined8 **)(param_1 + 0x48) - lVar10 >> 4;
      uVar15 = lVar10 * 0x69ee58469ee5846a;
      if (uVar14 <= uVar15) {
        uVar14 = uVar15;
      }
      if (uVar16 >> 1 <= (ulong)(lVar10 * 0x34f72c234f72c235)) {
        uVar14 = uVar16;
      }
      if (uVar14 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = (**(code **)(**(long **)(param_1 + 0x50) + 0x10))
                           (*(long **)(param_1 + 0x50),uVar14 * 0x1d0,0x10);
        if (lVar10 == 0) {
          (**(code **)(**(long **)(param_1 + 0x50) + 0xe8))();
        }
      }
      puVar26 = (undefined8 *)(lVar10 + lVar24 * 0x10);
      uVar19 = *(undefined8 *)(param_1 + 0x50);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar32 = nn::os::GetTlsValue(DAT_04865a30);
      uVar8 = local_200;
      uVar7 = local_220;
      if (lVar32 == 0) {
        *puVar26 = CONCAT71(uStack_23f,local_240);
        lVar21 = lVar10 + lVar24 * 0x10;
        *(undefined1 **)(lVar21 + 8) = local_238;
        *(undefined1 **)(lVar21 + 0x10) = local_230;
        *(undefined8 *)(lVar21 + 0x18) = local_228;
        local_220 = 0;
        *(undefined8 *)(lVar21 + 0x20) = uVar7;
        *(undefined1 **)(lVar21 + 0x28) = local_218;
        *(undefined1 **)(lVar21 + 0x30) = local_210;
        *(undefined8 *)(lVar21 + 0x38) = local_208;
        local_200 = 0;
        *(undefined8 *)(lVar21 + 0x40) = uVar8;
        memcpy((void *)(lVar21 + 0x50),&local_1f0,0x30);
        lVar32 = local_1c0;
        local_1c0 = 0;
        *(long *)(lVar21 + 0x80) = lVar32;
        memcpy((void *)(lVar21 + 0x88),&local_1b8,0x28);
        plVar23 = (long *)(lVar21 + 0xb0);
        local_1b8 = 0;
        memcpy(plVar23,&local_190,0x28);
        lVar32 = local_158;
        *(long *)(lVar21 + 0xd8) = local_168;
        *(undefined4 *)(lVar21 + 0xe0) = local_160;
        if (local_168 != 0) {
          uVar16 = *(ulong *)(*plVar23 + 8);
          uVar15 = *(ulong *)(lVar10 + lVar24 * 0x10 + 0x88);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar16 = uVar15 - 1 & uVar16;
          }
          else if (uVar15 <= uVar16) {
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar4 * uVar15;
          }
          *(long **)(*(long *)(lVar21 + 0x80) + uVar16 * 8) = plVar23;
          local_190 = 0;
          local_168 = 0;
        }
        lVar21 = lVar10 + lVar24 * 0x10;
        local_158 = 0;
        *(long *)(lVar21 + 0xe8) = lVar32;
        memcpy((void *)(lVar21 + 0xf0),&local_150,0x28);
        plVar23 = (long *)(lVar21 + 0x118);
        local_150 = 0;
        memcpy(plVar23,&local_128,0x28);
        uVar19 = local_f0;
        *(long *)(lVar21 + 0x140) = local_100;
        *(undefined4 *)(lVar21 + 0x148) = local_f8;
        if (local_100 != 0) {
          uVar16 = *(ulong *)(*plVar23 + 8);
          uVar15 = *(ulong *)(lVar10 + lVar24 * 0x10 + 0xf0);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar16 = uVar15 - 1 & uVar16;
          }
          else if (uVar15 <= uVar16) {
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar4 * uVar15;
          }
          *(long **)(*(long *)(lVar21 + 0xe8) + uVar16 * 8) = plVar23;
          local_128 = 0;
          local_100 = 0;
        }
        lVar32 = lVar10 + lVar24 * 0x10;
        local_f0 = 0;
        *(undefined8 *)(lVar32 + 0x150) = uVar19;
        memcpy((void *)(lVar32 + 0x158),&local_e8,0x28);
        plVar23 = (long *)(lVar32 + 0x180);
        local_e8 = 0;
        memcpy(plVar23,&local_c0,0x28);
        *(long *)(lVar32 + 0x1a8) = local_98;
        *(undefined4 *)(lVar32 + 0x1b0) = local_90;
        if (local_98 != 0) {
          uVar16 = *(ulong *)(*plVar23 + 8);
          uVar15 = *(ulong *)(lVar10 + lVar24 * 0x10 + 0x158);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar16 = uVar15 - 1 & uVar16;
          }
          else if (uVar15 <= uVar16) {
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar4 * uVar15;
          }
          *(long **)(*(long *)(lVar32 + 0x150) + uVar16 * 8) = plVar23;
          local_c0 = 0;
          local_98 = 0;
        }
        lVar24 = lVar10 + lVar24 * 0x10;
        *(undefined2 *)(lVar24 + 0x1b8) = local_88;
        *(undefined8 *)(lVar24 + 0x1c8) = local_78;
        *(ulong *)(lVar24 + 0x1c0) = CONCAT44(uStack_7c,local_80);
      }
      else {
        if (0xf < *(ulong *)(lVar32 + 0x80)) goto LAB_011e98d4;
        *(undefined8 *)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = uVar19;
        *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
        *puVar26 = CONCAT71(uStack_23f,local_240);
        lVar22 = lVar10 + lVar24 * 0x10;
        *(undefined1 **)(lVar22 + 8) = local_238;
        *(undefined1 **)(lVar22 + 0x10) = local_230;
        *(undefined8 *)(lVar22 + 0x18) = local_228;
        local_220 = 0;
        *(undefined8 *)(lVar22 + 0x20) = uVar7;
        *(undefined1 **)(lVar22 + 0x28) = local_218;
        *(undefined1 **)(lVar22 + 0x30) = local_210;
        *(undefined8 *)(lVar22 + 0x38) = local_208;
        local_200 = 0;
        *(undefined8 *)(lVar22 + 0x40) = uVar8;
        memcpy((void *)(lVar22 + 0x50),&local_1f0,0x30);
        lVar21 = local_1c0;
        local_1c0 = 0;
        *(long *)(lVar22 + 0x80) = lVar21;
        memcpy((void *)(lVar22 + 0x88),&local_1b8,0x28);
        plVar23 = (long *)(lVar22 + 0xb0);
        local_1b8 = 0;
        memcpy(plVar23,&local_190,0x28);
        lVar21 = local_158;
        *(long *)(lVar22 + 0xd8) = local_168;
        *(undefined4 *)(lVar22 + 0xe0) = local_160;
        if (local_168 != 0) {
          uVar16 = *(ulong *)(*plVar23 + 8);
          uVar15 = *(ulong *)(lVar10 + lVar24 * 0x10 + 0x88);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar16 = uVar15 - 1 & uVar16;
          }
          else if (uVar15 <= uVar16) {
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar4 * uVar15;
          }
          *(long **)(*(long *)(lVar22 + 0x80) + uVar16 * 8) = plVar23;
          local_190 = 0;
          local_168 = 0;
        }
        lVar22 = lVar10 + lVar24 * 0x10;
        local_158 = 0;
        *(long *)(lVar22 + 0xe8) = lVar21;
        memcpy((void *)(lVar22 + 0xf0),&local_150,0x28);
        plVar23 = (long *)(lVar22 + 0x118);
        local_150 = 0;
        memcpy(plVar23,&local_128,0x28);
        uVar19 = local_f0;
        *(long *)(lVar22 + 0x140) = local_100;
        *(undefined4 *)(lVar22 + 0x148) = local_f8;
        if (local_100 != 0) {
          uVar16 = *(ulong *)(*plVar23 + 8);
          uVar15 = *(ulong *)(lVar10 + lVar24 * 0x10 + 0xf0);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar16 = uVar15 - 1 & uVar16;
          }
          else if (uVar15 <= uVar16) {
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar4 * uVar15;
          }
          *(long **)(*(long *)(lVar22 + 0xe8) + uVar16 * 8) = plVar23;
          local_128 = 0;
          local_100 = 0;
        }
        lVar21 = lVar10 + lVar24 * 0x10;
        local_f0 = 0;
        *(undefined8 *)(lVar21 + 0x150) = uVar19;
        memcpy((void *)(lVar21 + 0x158),&local_e8,0x28);
        plVar23 = (long *)(lVar21 + 0x180);
        local_e8 = 0;
        memcpy(plVar23,&local_c0,0x28);
        *(long *)(lVar21 + 0x1a8) = local_98;
        *(undefined4 *)(lVar21 + 0x1b0) = local_90;
        if (local_98 != 0) {
          uVar16 = *(ulong *)(*plVar23 + 8);
          uVar15 = *(ulong *)(lVar10 + lVar24 * 0x10 + 0x158);
          if ((uVar15 & uVar15 - 1) == 0) {
            uVar16 = uVar15 - 1 & uVar16;
          }
          else if (uVar15 <= uVar16) {
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = uVar16 / uVar15;
            }
            uVar16 = uVar16 - uVar4 * uVar15;
          }
          *(long **)(*(long *)(lVar21 + 0x150) + uVar16 * 8) = plVar23;
          local_c0 = 0;
          local_98 = 0;
        }
        lVar24 = lVar10 + lVar24 * 0x10;
        *(undefined2 *)(lVar24 + 0x1b8) = local_88;
        *(undefined8 *)(lVar24 + 0x1c8) = local_78;
        *(ulong *)(lVar24 + 0x1c0) = CONCAT44(uStack_7c,local_80);
        *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
      }
      lVar24 = *(long *)(param_1 + 0x38);
      lVar32 = *(long *)(param_1 + 0x40);
      if (lVar32 == lVar24) {
        puVar20 = puVar26;
        lVar32 = lVar24;
      }
      else {
        lVar21 = 0;
        do {
          uVar19 = *(undefined8 *)(param_1 + 0x50);
          if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar22 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar22 == 0) {
            lVar22 = lVar32 + lVar21;
            FUN_011ea0a0((long)puVar26 + lVar21 + -0x1d0,lVar22 + -0x1d0);
            *(undefined8 *)((long)puVar26 + lVar21 + -8) = *(undefined8 *)(lVar22 + -8);
            *(undefined8 *)((long)puVar26 + lVar21 + -0x10) = *(undefined8 *)(lVar22 + -0x10);
          }
          else {
            if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_011e98d4;
            *(undefined8 *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = uVar19;
            lVar2 = lVar32 + lVar21;
            *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
            FUN_011ea0a0((long)puVar26 + lVar21 + -0x1d0,lVar2 + -0x1d0);
            *(undefined8 *)((long)puVar26 + lVar21 + -8) = *(undefined8 *)(lVar2 + -8);
            *(undefined8 *)((long)puVar26 + lVar21 + -0x10) = *(undefined8 *)(lVar2 + -0x10);
            *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
          }
          lVar21 = lVar21 + -0x1d0;
        } while (lVar24 - lVar32 != lVar21);
        lVar24 = *(long *)(param_1 + 0x40);
        puVar20 = (undefined8 *)((long)puVar26 + lVar21);
        lVar32 = *(long *)(param_1 + 0x38);
      }
      *(undefined8 **)(param_1 + 0x38) = puVar20;
      *(undefined8 **)(param_1 + 0x40) = puVar26 + 0x3a;
      lVar21 = *(long *)(param_1 + 0x48);
      *(ulong *)(param_1 + 0x48) = lVar10 + uVar14 * 0x1d0;
      while (lVar24 != lVar32) {
        lVar24 = lVar24 + -0x1d0;
        FUN_011e9dd4(lVar24);
      }
      if (lVar32 != 0) {
        plVar23 = *(long **)(param_1 + 0x50);
        lVar21 = lVar21 - lVar32;
        uVar16 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar16 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,lVar32,lVar21,0x10);
        }
        else {
          FUN_00c48fe8(plVar23,lVar32,lVar21,0x10);
        }
      }
    }
    FUN_011e9dd4(&local_240);
  }
  else {
    uVar16 = 0;
    piVar17 = (int *)(lVar10 + 0x1c0);
    while (*piVar17 != 0) {
      uVar16 = uVar16 + 1;
      piVar17 = piVar17 + 0x74;
      if ((uVar18 & 0xffffffff) == uVar16) goto LAB_011e8748;
    }
    *piVar17 = 1;
    uVar18 = uVar16 & 0xffffffff;
  }
  *(ulong *)(*plVar25 + (uVar18 & 0xffffffff) * 0x1d0 + 0x1c8) = param_4;
  if (param_4 < 0x20) {
    lVar10 = param_1 + param_4 * 0x68;
    puVar26 = (undefined8 *)(lVar10 + 0x78);
    plVar31 = (long *)*puVar26;
    plVar28 = (long *)*param_2;
    plVar29 = (long *)(lVar10 + 0x70);
    plVar23 = param_2;
    if (plVar31 == (long *)0x0) {
LAB_011e8b48:
      puVar20 = (undefined8 *)(param_1 + param_4 * 0x68 + 0xa8);
      plVar30 = (long *)(**(code **)(*(long *)*puVar20 + 0x10))((long *)*puVar20,0x38,8);
      if (plVar30 == (long *)0x0) {
        (**(code **)(*(long *)*puVar20 + 0xe8))();
      }
      uVar19 = *puVar20;
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar10 != 0) {
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_011e98d4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar19;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      }
      plVar30[2] = *param_2;
      plVar30[3] = param_2[1];
      plVar30[4] = param_2[2];
      plVar12 = (long *)param_2[3];
      plVar30[5] = (long)plVar12;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))();
      }
      *(undefined4 *)(plVar30 + 6) = 0;
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      }
      *plVar30 = 0;
      plVar30[1] = (long)plVar28;
      lVar10 = param_1 + param_4 * 0x68;
      plVar12 = (long *)(lVar10 + 200);
      fVar33 = *(float *)(lVar10 + 0xd0);
      if ((plVar31 == (long *)0x0) || (fVar33 * (float)plVar31 < (float)(*plVar12 + 1))) {
        uVar16 = (ulong)(plVar31 < (long *)0x3 || ((ulong)plVar31 & (long)plVar31 - 1U) != 0) |
                 (long)plVar31 << 1;
        uVar14 = (ulong)((float)(*plVar12 + 1) / fVar33);
        if (uVar14 <= uVar16) {
          uVar14 = uVar16;
        }
        FUN_011e9f9c(plVar29,uVar14);
        plVar31 = (long *)*puVar26;
        if (((ulong)plVar31 & (long)plVar31 - 1U) == 0) {
          plVar23 = (long *)((long)plVar31 - 1U & (ulong)plVar28);
        }
        else if (plVar28 < plVar31) {
          plVar23 = plVar28;
        }
        else {
          uVar16 = 0;
          if (plVar31 != (long *)0x0) {
            uVar16 = (ulong)plVar28 / (ulong)plVar31;
          }
          plVar23 = (long *)((long)plVar28 - uVar16 * (long)plVar31);
        }
      }
      plVar28 = *(long **)(*plVar29 + (long)plVar23 * 8);
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)(param_1 + param_4 * 0x68 + 0xa0);
        *plVar30 = *plVar28;
        *plVar28 = (long)plVar30;
        *(long **)(*plVar29 + (long)plVar23 * 8) = plVar28;
        if (*plVar30 != 0) {
          plVar23 = *(long **)(*plVar30 + 8);
          if (((ulong)plVar31 & (long)plVar31 - 1U) == 0) {
            plVar23 = (long *)((ulong)plVar23 & (long)plVar31 - 1U);
          }
          else if (plVar31 <= plVar23) {
            uVar16 = 0;
            if (plVar31 != (long *)0x0) {
              uVar16 = (ulong)plVar23 / (ulong)plVar31;
            }
            plVar23 = (long *)((long)plVar23 - uVar16 * (long)plVar31);
          }
          plVar28 = (long *)(*plVar29 + (long)plVar23 * 8);
          goto LAB_011e8c44;
        }
      }
      else {
        *plVar30 = *plVar28;
LAB_011e8c44:
        *plVar28 = (long)plVar30;
      }
      *plVar12 = *plVar12 + 1;
    }
    else {
      uVar16 = (long)plVar31 - 1;
      if (((ulong)plVar31 & uVar16) == 0) {
        plVar23 = (long *)(uVar16 & (ulong)plVar28);
        plVar30 = *(long **)(*plVar29 + (long)plVar23 * 8);
        if (plVar30 != (long *)0x0) {
          while ((plVar30 = (long *)*plVar30, plVar30 != (long *)0x0 &&
                 ((long *)plVar30[1] == plVar28 || (long *)((ulong)plVar30[1] & uVar16) == plVar23))
                ) {
            if ((long *)plVar30[2] == plVar28) goto LAB_011e8c58;
          }
        }
        goto LAB_011e8b48;
      }
      plVar23 = plVar28;
      if (plVar31 <= plVar28) {
        uVar16 = 0;
        if (plVar31 != (long *)0x0) {
          uVar16 = (ulong)plVar28 / (ulong)plVar31;
        }
        plVar23 = (long *)((long)plVar28 - uVar16 * (long)plVar31);
      }
      plVar30 = *(long **)(*plVar29 + (long)plVar23 * 8);
      if (plVar30 == (long *)0x0) goto LAB_011e8b48;
      do {
        plVar30 = (long *)*plVar30;
        if (plVar30 == (long *)0x0) goto LAB_011e8b48;
        plVar12 = (long *)plVar30[1];
        if (plVar12 != plVar28) {
          if (plVar31 <= plVar12) {
            uVar16 = 0;
            if (plVar31 != (long *)0x0) {
              uVar16 = (ulong)plVar12 / (ulong)plVar31;
            }
            plVar12 = (long *)((long)plVar12 - uVar16 * (long)plVar31);
          }
          if (plVar12 != plVar23) goto LAB_011e8b48;
        }
      } while ((long *)plVar30[2] != plVar28);
    }
LAB_011e8c58:
    *(int *)(plVar30 + 6) = (int)uVar18;
  }
  lVar10 = *plVar25;
  uVar16 = uVar18 & 0xffffffff;
  puVar13 = (ulong *)(lVar10 + uVar16 * 0x1d0);
  *(undefined1 *)(puVar13 + 0x37) = 1;
  puVar6 = PTR_DAT_047d4250;
  puVar5 = PTR_DAT_047d4248;
  pcVar27 = (char *)param_2[1];
  if (*pcVar27 == '\0') {
    plVar25 = (long *)FUN_00d44228();
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar19 = *(undefined8 *)puVar5;
    *(undefined8 *)puVar6 = uVar19;
    FUN_00cf9884(&local_240,uVar19,pcVar27);
    plVar25 = (long *)CONCAT71(uStack_23f,local_240);
  }
  plVar28 = (long *)PTR_DAT_047d8b70;
  plVar29 = (long *)PTR_PTR_047d4508;
  plVar23 = (long *)PTR_DAT_047d8b70;
  if (plVar25 != (long *)0x0) {
    plVar23 = plVar25 + 6;
  }
  lVar24 = *plVar23;
  plVar23 = (long *)PTR_PTR_047d4508;
  if (plVar25 != (long *)0x0) {
    plVar23 = plVar25 + 7;
  }
  lVar32 = *plVar23;
  if (plVar25 == (long *)0x0) {
    lVar21 = 0;
  }
  else {
    lVar21 = plVar25[8];
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  lVar22 = lVar10 + uVar16 * 0x1d0;
  plVar23 = *(long **)(lVar22 + 0x20);
  *(long *)(lVar22 + 8) = lVar24;
  *(long *)(lVar22 + 0x10) = lVar32;
  *(long *)(lVar22 + 0x18) = lVar21;
  *(undefined8 *)(lVar22 + 0x20) = 0;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))();
  }
  *(long **)(lVar22 + 0x20) = plVar25;
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  pcVar27 = *(char **)(param_3 + 8);
  if (*pcVar27 == '\0') {
    plVar25 = (long *)FUN_00d44228();
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar19 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar19;
    FUN_00cf9884(&local_240,uVar19,pcVar27);
    plVar25 = (long *)CONCAT71(uStack_23f,local_240);
  }
  if (plVar25 != (long *)0x0) {
    plVar28 = plVar25 + 6;
  }
  lVar24 = *plVar28;
  if (plVar25 != (long *)0x0) {
    plVar29 = plVar25 + 7;
  }
  lVar32 = *plVar29;
  if (plVar25 == (long *)0x0) {
    lVar21 = 0;
  }
  else {
    lVar21 = plVar25[8];
    (**(code **)(*plVar25 + 0x18))(plVar25);
  }
  lVar10 = lVar10 + uVar16 * 0x1d0;
  plVar23 = *(long **)(lVar10 + 0x40);
  *(long *)(lVar10 + 0x28) = lVar24;
  *(long *)(lVar10 + 0x30) = lVar32;
  *(long *)(lVar10 + 0x38) = lVar21;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))();
  }
  *(long **)(lVar10 + 0x40) = plVar25;
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))(plVar25);
  }
  local_70[0] = uVar18 << 0x20 | 1;
  *puVar13 = local_70[0];
  plVar25 = *(long **)(param_1 + 0xd90);
  plVar23 = *(long **)(param_1 + 0xd98);
  if (plVar25 != plVar23) {
    puVar26 = (undefined8 *)*plVar25;
    if (puVar26[1] == param_4) {
      (**(code **)*puVar26)(puVar26,local_70,puVar13);
    }
    if (plVar25 + 1 != plVar23) {
      puVar26 = (undefined8 *)plVar25[1];
      if (puVar26[1] == param_4) {
        (**(code **)*puVar26)(puVar26,local_70,puVar13);
      }
      if (plVar25 + 2 != plVar23) {
        puVar26 = (undefined8 *)plVar25[2];
        if (puVar26[1] == param_4) {
          (**(code **)*puVar26)(puVar26,local_70,puVar13);
        }
        if (plVar25 + 3 != plVar23) {
          puVar26 = (undefined8 *)plVar25[3];
          if (puVar26[1] == param_4) {
            (**(code **)*puVar26)(puVar26,local_70,puVar13);
          }
          if (plVar25 + 4 != plVar23) {
            puVar26 = (undefined8 *)plVar25[4];
            if (puVar26[1] == param_4) {
              (**(code **)*puVar26)(puVar26,local_70,puVar13);
            }
            for (plVar25 = plVar25 + 5; plVar25 != plVar23; plVar25 = plVar25 + 1) {
              puVar26 = (undefined8 *)*plVar25;
              if (puVar26[1] == param_4) {
                (**(code **)*puVar26)(puVar26,local_70,puVar13);
              }
            }
          }
        }
      }
    }
  }
  do {
    lVar10 = *plVar1;
    lVar24 = *(long *)(param_1 + 0xd78);
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar10;
      *(long *)(param_1 + 0xd78) = lVar24;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar32 = *plVar1;
    lVar21 = *(long *)(param_1 + 0xd78);
    if (lVar32 != lVar10 || lVar21 != lVar24) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_011e8f1c;
    }
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xd74) = lVar24;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar11 = true;
LAB_011e8f1c:
  if (!bVar11) {
    do {
      lVar10 = *plVar1;
      lVar24 = *(long *)(param_1 + 0xd78);
      if (lVar10 != lVar32 || lVar24 != lVar21) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x011e9890;
      }
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xd74) = lVar21;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar11 = true;
joined_r0x011e9890:
    if (!bVar11) {
      do {
        lVar32 = *plVar1;
        lVar21 = *(long *)(param_1 + 0xd78);
        if (lVar32 != lVar10 || lVar21 != lVar24) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar10 = lVar32;
          lVar24 = lVar21;
          goto joined_r0x011e9890;
        }
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)(param_1 + 0xd74) = lVar24;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar11 = true;
      lVar10 = lVar32;
      lVar24 = lVar21;
      goto joined_r0x011e9890;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd80));
  return local_70[0];
}


