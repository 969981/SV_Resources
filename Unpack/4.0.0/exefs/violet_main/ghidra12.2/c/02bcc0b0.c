/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bcc0b0; name: FUN_02bcc0b0
 */


/* WARNING: Removing unreachable block (ram,0x02bccbc0) */
/* WARNING: Removing unreachable block (ram,0x02bccbc4) */
/* WARNING: Removing unreachable block (ram,0x02bccbcc) */
/* WARNING: Removing unreachable block (ram,0x02bccbd4) */
/* WARNING: Removing unreachable block (ram,0x02bcdaa0) */
/* WARNING: Removing unreachable block (ram,0x02bccbd8) */

undefined8 FUN_02bcc0b0(long param_1,long *param_2,uint param_3,int param_4)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined4 uVar15;
  int iVar16;
  byte *pbVar17;
  long *plVar18;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  size_t sVar22;
  undefined4 uVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  bool bVar32;
  undefined *puVar33;
  undefined8 *puVar34;
  ulong uVar35;
  long lVar36;
  undefined8 uVar37;
  undefined1 *puVar38;
  long lVar39;
  long *plVar40;
  undefined *puVar41;
  long *plVar42;
  long lVar43;
  float fVar44;
  undefined1 *local_2f8;
  undefined1 local_2c8 [8];
  long *local_2c0;
  long *local_2b8;
  long *local_2b0;
  byte *local_2a8;
  undefined *local_2a0;
  long *local_298;
  long *local_290;
  long local_288;
  char *local_280;
  long local_278;
  long *local_270;
  undefined1 *local_268;
  byte *pbStack_260;
  size_t local_258;
  long *local_250;
  float local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  long *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  long *local_208;
  undefined1 *local_200;
  byte *pbStack_1f8;
  size_t local_1f0;
  long *local_1e8;
  long *local_1e0;
  long *local_1d8;
  byte *local_1d0;
  undefined *local_1c8;
  long *local_1c0;
  long *local_1b8;
  long *local_1b0;
  byte local_1a8 [32];
  long *local_188;
  undefined1 *local_180;
  byte *pbStack_178;
  size_t local_170;
  long *local_168;
  long *local_160;
  long local_158;
  long lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  long local_108;
  char *local_100;
  long local_f8;
  long *local_f0;
  long *local_e8;
  char local_e0 [8];
  undefined *local_d8;
  long local_d0;
  long local_c8;
  long *local_c0;
  undefined1 *local_b8;
  byte *pbStack_b0;
  size_t local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  long *local_80;
  undefined4 local_78;
  long *local_70 [2];
  
  auVar7._8_8_ = local_2c0;
  auVar7._0_8_ = local_2c8;
  local_70[0] = DAT_0485a0a0;
  if (DAT_0485a0a0 != (long *)0x0) {
    plVar40 = DAT_0485a0a0 + 5;
    do {
      lVar43 = *plVar40;
      cVar6 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar32) {
        *(int *)plVar40 = (int)lVar43 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar43 == -1) goto LAB_02bcdfa4;
  }
  lVar43 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar43 != 0) {
    (**(code **)(*(long *)(lVar43 + 0x20) + 0x10))();
  }
  pbVar17 = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,3);
  puVar41 = PTR_DAT_047d3e30;
  if (pbVar17 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar16 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar38 = *(undefined1 **)puVar41;
    pbVar17 = *(byte **)(puVar41 + 8);
    sVar22 = *(size_t *)(puVar41 + 0x10);
    plVar40 = *(long **)(puVar41 + 0x18);
    if (plVar40 != (long *)0x0) {
      (**(code **)(*plVar40 + 0x18))(plVar40);
    }
  }
  else {
    puVar38 = &DAT_cbf29ce484222645;
    sVar22 = strlen((char *)pbVar17);
    bVar5 = *pbVar17;
    pbVar20 = pbVar17;
    while (bVar5 != 0) {
      pbVar20 = pbVar20 + 1;
      puVar38 = (undefined1 *)(((ulong)puVar38 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar20;
    }
    plVar40 = (long *)0x0;
  }
  local_b8 = puVar38;
  pbStack_b0 = pbVar17;
  local_a8 = sVar22;
  local_a0 = plVar40;
  if (plVar40 != (long *)0x0) {
    (**(code **)(*plVar40 + 0x18))(plVar40);
  }
  pbVar17 = PTR_DAT_047d3e28;
  local_78 = 0;
  local_98 = 0xf644afd9efa28ae5;
  puStack_90 = &DAT_03c7144e;
  local_88 = 4;
  local_80 = (long *)0x0;
  lVar24 = *param_2;
  local_e0[0] = '\0';
  if (*(char *)(lVar24 + 0x128) == '\0') {
    uVar37 = 0;
  }
  else {
    puVar4 = *(undefined **)(lVar24 + 0x130);
    local_d0 = *(long *)(lVar24 + 0x138);
    local_c8 = *(long *)(lVar24 + 0x140);
    local_c0 = *(long **)(lVar24 + 0x148);
    local_d8 = puVar4;
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x18))();
    }
    local_e0[0] = '\x01';
    puVar25 = *(undefined **)(param_1 + 0x198);
    plVar1 = (long *)(param_1 + 400);
    if (puVar25 != (undefined *)0x0) {
      uVar30 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
      uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
      uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar30 < 2) {
        puVar26 = (undefined *)((ulong)(puVar25 + -1) & (ulong)puVar4);
      }
      else if (puVar4 < puVar25) {
        puVar26 = puVar4;
      }
      else {
        uVar31 = 0;
        if (puVar25 != (undefined *)0x0) {
          uVar31 = (ulong)puVar4 / (ulong)puVar25;
        }
        puVar26 = puVar4 + -(uVar31 * (long)puVar25);
      }
      puVar34 = *(undefined8 **)(*plVar1 + (long)puVar26 * 8);
      if (puVar34 != (undefined8 *)0x0) {
        plVar18 = (long *)*puVar34;
        if (plVar18 != (long *)0x0) {
          if (uVar30 < 2) {
            do {
              if ((undefined *)plVar18[1] == puVar4) {
                if ((undefined *)plVar18[2] == puVar4) goto LAB_02bcd328;
              }
              else if ((undefined *)((ulong)plVar18[1] & (ulong)(puVar25 + -1)) != puVar26) break;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              puVar33 = (undefined *)plVar18[1];
              if (puVar33 == puVar4) {
                if ((undefined *)plVar18[2] == puVar4) goto LAB_02bcd328;
              }
              else {
                if (puVar25 <= puVar33) {
                  uVar30 = 0;
                  if (puVar25 != (undefined *)0x0) {
                    uVar30 = (ulong)puVar33 / (ulong)puVar25;
                  }
                  puVar33 = puVar33 + -(uVar30 * (long)puVar25);
                }
                pbVar17 = PTR_DAT_047d3e28;
                if (puVar33 != puVar26) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
    }
    FUN_00c5ecb4(&local_e8,lVar43,local_e0);
    local_2c8 = (undefined1  [8])((ulong)local_2c8 & 0xffffffff00000000);
    if (((*(long *)(local_e8[0x15] + 0xf8) == 0) ||
        (plVar18 = (long *)(*(long *)(local_e8[0x15] + 0xf8) + 0x30),
        uVar30 = (**(code **)(*plVar18 + 0x30))(plVar18,local_2c8,PTR_s_EnableDirt_047e1fc8),
        (uVar30 & 1) == 0)) || (local_2c8._0_4_ != 0)) {
      plVar18 = (long *)local_e8[0x26];
      lVar24 = local_e8[0x27];
      if ((int)((ulong)(lVar24 - (long)plVar18) >> 5) == 0) goto LAB_02bcc380;
      uVar30 = (**(code **)(*DAT_0485a020 + 0xd8))(DAT_0485a020,plVar18);
      if ((uVar30 & 1) == 0) {
        lVar19 = 0;
        do {
          lVar36 = lVar19 + 0x20;
          if (((ulong)(lVar24 - (long)plVar18) >> 5 & 0xffffffff) * 0x20 == lVar36)
          goto LAB_02bcc380;
          lVar39 = local_e8[0x26];
          uVar30 = (**(code **)(*DAT_0485a020 + 0xd8))(DAT_0485a020,lVar39 + lVar19 + 0x20);
          lVar19 = lVar36;
        } while ((uVar30 & 1) == 0);
        plVar18 = (long *)(lVar39 + lVar36);
      }
    }
    else {
LAB_02bcc380:
      if ((*pbVar17 & 1) == 0) {
        iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28);
        plVar18 = (long *)PTR_DAT_047d3e30;
        if (iVar16 != 0) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        pbVar17 = PTR_DAT_047d3e28;
      }
      else {
        plVar18 = (long *)PTR_DAT_047d3e30;
      }
    }
    local_108 = *plVar18;
    local_100 = (char *)plVar18[1];
    local_f8 = plVar18[2];
    local_f0 = (long *)plVar18[3];
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x18))();
    }
    if (*local_100 != '\0') {
      FUN_01086da0(local_e8,&local_108,&local_b8);
      FUN_010f7c04(local_e8);
      auVar7._8_8_ = local_2c0;
      auVar7._0_8_ = local_2c8;
      local_138 = 1;
      uStack_130 = 2;
      local_148 = 0;
      uStack_140 = 0;
      local_11c = 0x500000004;
      local_124 = 0x300000002;
      local_114 = 0x800000000;
      local_10c = 2;
      local_158 = (long)*(int *)(param_1 + 0xc28);
      local_160 = (long *)0x0;
      local_128 = 0x38;
      lStack_150 = local_158;
      if (((int)param_3 < 0) || (param_4 == 0)) {
LAB_02bcc45c:
        local_1d8 = local_70[0];
        plVar18 = (long *)FUN_00cf3764(local_2c8,local_70[0][1],&local_1d8);
        auVar7._8_8_ = local_2c0;
        auVar7._0_8_ = local_2c8;
        if (plVar18 == (long *)0x0) {
          plVar42 = (long *)0x0;
        }
        else {
          plVar42 = plVar18 + 5;
          do {
            lVar24 = *plVar42;
            cVar6 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar42,0x10);
            if (bVar32) {
              *(int *)plVar42 = (int)lVar24 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar24 == -1) goto LAB_02bcdfa4;
          plVar42 = plVar18;
        }
        lVar24 = *(long *)(plVar42[0xe] + 0x30);
        local_2c8 = *(undefined1 (*) [8])(lVar24 + 8);
        local_2c0 = *(long **)(lVar24 + 0x6098);
        local_2b8 = (long *)(lVar24 + 0x10);
        _local_2c8 = FUN_0117e498(*(undefined8 *)(lVar24 + 0x6140),local_2c8,&local_158,1,0);
        local_2b8 = (long *)((ulong)local_2b8 & 0xffffffffffffff00);
        FUN_00d56380(plVar42 + 6,local_2c8);
        uVar15 = FUN_00d56320(plVar42 + 6);
        plVar27 = local_160;
        *(undefined4 *)(plVar42 + 0xf) = uVar15;
        local_160 = (long *)0x0;
        if (plVar27 != (long *)0x0) {
          plVar42 = plVar27 + 5;
          do {
            lVar24 = *plVar42;
            iVar16 = (int)lVar24 + -1;
            cVar6 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar42,0x10);
            if (bVar32) {
              *(int *)plVar42 = iVar16;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar16 == 0) {
            (**(code **)(*plVar27 + 0x10))();
          }
          else if ((int)lVar24 == 0) goto LAB_02bce01c;
        }
        local_1d8 = local_70[0];
        local_160 = plVar18;
        plVar42 = (long *)FUN_00cf3764(local_2c8,local_70[0][1],&local_1d8);
        if (plVar42 == (long *)0x0) {
          plVar18 = (long *)0x0;
        }
        else {
          plVar18 = plVar42 + 5;
          do {
            lVar24 = *plVar18;
            cVar6 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar32) {
              *(int *)plVar18 = (int)lVar24 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          auVar7 = _local_2c8;
          if ((int)lVar24 == -1) goto LAB_02bcdfa4;
          plVar18 = plVar42;
        }
        pbVar17 = PTR_DAT_047d3e28;
        lVar24 = *(long *)(plVar18[0xe] + 0x30);
        local_2c8 = *(undefined1 (*) [8])(lVar24 + 8);
        local_2c0 = *(long **)(lVar24 + 0x6098);
        local_2b8 = (long *)(lVar24 + 0x10);
        _local_2c8 = FUN_0117e498(*(undefined8 *)(lVar24 + 0x6140),local_2c8,&local_158,1,0);
        local_2b8 = (long *)((ulong)local_2b8 & 0xffffffffffffff00);
        FUN_00d56380(plVar18 + 6,local_2c8);
        uVar15 = FUN_00d56320(plVar18 + 6);
        *(undefined4 *)(plVar18 + 0xf) = uVar15;
      }
      else {
        uVar30 = (ulong)param_3;
        if ((ulong)(*(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158) >> 5) <= uVar30)
        goto LAB_02bcc45c;
        plVar18 = *(long **)(*(long *)(param_1 + 0x158) + uVar30 * 0x20);
        if (plVar18 != (long *)0x0) {
          plVar42 = plVar18 + 5;
          do {
            lVar24 = *plVar42;
            cVar6 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar42,0x10);
            if (bVar32) {
              *(int *)plVar42 = (int)lVar24 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar24 == -1) goto LAB_02bcdfa4;
        }
        plVar42 = *(long **)(*(long *)(param_1 + 0x158) + uVar30 * 0x20 + 8);
        local_160 = plVar18;
        if (plVar42 != (long *)0x0) {
          plVar18 = plVar42 + 5;
          do {
            lVar24 = *plVar18;
            cVar6 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar32) {
              *(int *)plVar18 = (int)lVar24 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          auVar7 = _local_2c8;
          if ((int)lVar24 == -1) goto LAB_02bcdfa4;
        }
      }
      pbStack_178 = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,2);
      if (pbStack_178 == (byte *)0x0) {
        if ((*pbVar17 & 1) == 0) {
          iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28);
          if (iVar16 != 0) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
        }
        local_180 = *(undefined1 **)puVar41;
        pbStack_178 = *(byte **)(puVar41 + 8);
        local_170 = *(size_t *)(puVar41 + 0x10);
        local_168 = *(long **)(puVar41 + 0x18);
        if (local_168 != (long *)0x0) {
          (**(code **)(*local_168 + 0x18))();
        }
      }
      else {
        local_170 = strlen((char *)pbStack_178);
        bVar5 = *pbStack_178;
        local_180 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          local_180 = &DAT_cbf29ce484222645;
          pbVar17 = pbStack_178;
          do {
            pbVar17 = pbVar17 + 1;
            local_180 = (undefined1 *)(((ulong)local_180 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar17;
          } while (bVar5 != 0);
        }
        local_168 = (long *)0x0;
      }
      plVar18 = (long *)&DAT_cbf29ce484222645;
      local_188 = (long *)FUN_00cd16dc(local_2c8,*(undefined8 *)(param_1 + 8),local_70);
      if (local_188 != (long *)0x0) {
        plVar27 = local_188 + 5;
        do {
          lVar24 = *plVar27;
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar32) {
            *(int *)plVar27 = (int)lVar24 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        auVar7 = _local_2c8;
        if ((int)lVar24 == -1) goto LAB_02bcdfa4;
      }
      FUN_01344120(local_188,param_1 + 0x138,param_1 + 0x130);
      FUN_01344120(local_188,&local_180,&local_160);
      do {
        cVar6 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(0x485daf8,0x10);
        if (bVar32) {
          cVar6 = ExclusiveMonitorsStatus();
          DAT_0485daf8 = DAT_0485daf8 + 1;
        }
      } while (cVar6 != '\0');
      snprintf((char *)local_1a8,0x20,"%d");
      lVar24 = local_e8[0x15];
      local_2c8 = (undefined1  [8])0x8dbb3c0c3555c0c5;
      local_2c0 = (long *)0x3c9a4aa;
      local_2b8 = (long *)0x6;
      local_2b0 = (long *)0x0;
      local_1c8 = (undefined *)strlen((char *)local_1a8);
      if (local_1a8[0] != 0) {
        pbVar17 = (byte *)((ulong)local_1a8 | 1);
        do {
          plVar18 = (long *)(((ulong)plVar18 ^ (ulong)local_1a8[0]) * 0x100000001b3);
          local_1a8[0] = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (local_1a8[0] != 0);
      }
      local_1c0 = (long *)0x0;
      local_1d8 = plVar18;
      local_1d0 = local_1a8;
      FUN_00d1ea9c(&local_1b0,lVar24 + 0x30,local_2c8,&local_1d8);
      if (local_1c0 != (long *)0x0) {
        (**(code **)(*local_1c0 + 0x20))();
      }
      if (local_2b0 != (long *)0x0) {
        (**(code **)(*local_2b0 + 0x20))();
      }
      plVar27 = local_1b0;
      plVar18 = (long *)PTR_DAT_047d8b70;
      if (local_1b0 != (long *)0x0) {
        plVar18 = local_1b0 + 6;
      }
      local_2c8 = (undefined1  [8])*plVar18;
      plVar18 = (long *)PTR_PTR_047d4508;
      if (local_1b0 != (long *)0x0) {
        plVar18 = local_1b0 + 7;
      }
      local_2c0 = (long *)*plVar18;
      if (local_1b0 == (long *)0x0) {
        local_2b8 = (long *)0x0;
      }
      else {
        local_2b8 = (long *)local_1b0[8];
      }
      local_2f8 = &DAT_cbf29ce484222645;
      local_2b0 = (long *)0x0;
      if (local_1b0 != (long *)0x0) {
        (**(code **)(*local_1b0 + 0x18))(local_1b0);
      }
      local_2b0 = plVar27;
      lVar24 = lVar43 + ((ulong)local_2c8 >> 0x37) * 0x20;
      plVar18 = (long *)(lVar24 + 0xd050);
      lVar19 = nn::os::GetCurrentThread();
      do {
        if (*plVar18 != 0 || *(long *)(lVar24 + 0xd058) != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0xd060));
            while (*plVar18 == 0 && *(long *)(lVar24 + 0xd058) == 0) {
              cVar6 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar32) {
                *plVar18 = lVar19;
                *(undefined8 *)(lVar24 + 0xd058) = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_02bcc808;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar32) {
          *plVar18 = lVar19;
          *(undefined8 *)(lVar24 + 0xd058) = 0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_02bcc808:
      FUN_00ec3aac(&local_1d8,lVar43,local_2c8,1,0);
      do {
        lVar19 = *plVar18;
        lVar36 = *(long *)(lVar24 + 0xd058);
        cVar6 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar32) {
          *plVar18 = lVar19;
          *(long *)(lVar24 + 0xd058) = lVar36;
          cVar6 = ExclusiveMonitorsStatus();
        }
        pbVar17 = PTR_DAT_047d3e28;
      } while (cVar6 != '\0');
      do {
        lVar39 = *plVar18;
        lVar21 = *(long *)(lVar24 + 0xd058);
        if (lVar39 != lVar19 || lVar21 != lVar36) {
          bVar32 = false;
          ClearExclusiveLocal();
          puVar4 = PTR_DAT_047d3e28;
          goto joined_r0x02bcc894;
        }
        cVar6 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar32) {
          *plVar18 = 0;
          *(long *)(lVar24 + 0xd054) = lVar36;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar32 = true;
      puVar4 = PTR_DAT_047d3e28;
joined_r0x02bcc894:
      puVar25 = PTR_DAT_047d3e28;
      PTR_DAT_047d3e28 = puVar4;
      if (!bVar32) {
        do {
          lVar19 = *plVar18;
          lVar36 = *(long *)(lVar24 + 0xd058);
          pbVar17 = puVar25;
          if (lVar19 != lVar39 || lVar36 != lVar21) {
            bVar32 = false;
            ClearExclusiveLocal();
            lVar39 = lVar19;
            lVar21 = lVar36;
            puVar4 = PTR_DAT_047d3e28;
            PTR_DAT_047d3e28 = puVar25;
            goto joined_r0x02bcc894;
          }
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar32) {
            *plVar18 = 0;
            *(long *)(lVar24 + 0xd054) = lVar21;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar32 = true;
        lVar39 = lVar19;
        lVar21 = lVar36;
        puVar4 = PTR_DAT_047d3e28;
        PTR_DAT_047d3e28 = puVar25;
        goto joined_r0x02bcc894;
      }
      nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0xd060));
      if (local_2b0 != (long *)0x0) {
        (**(code **)(*local_2b0 + 0x20))();
      }
      FUN_00fff1a4(&local_1e0,lVar43,&local_1d8);
      pbStack_1f8 = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,0);
      if (pbStack_1f8 == (byte *)0x0) {
        if (((*pbVar17 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar16 != 0))
        {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        local_200 = *(undefined1 **)puVar41;
        pbStack_1f8 = *(byte **)(puVar41 + 8);
        local_1f0 = *(size_t *)(puVar41 + 0x10);
        local_1e8 = *(long **)(puVar41 + 0x18);
        if (local_1e8 != (long *)0x0) {
          (**(code **)(*local_1e8 + 0x18))();
        }
      }
      else {
        local_1f0 = strlen((char *)pbStack_1f8);
        bVar5 = *pbStack_1f8;
        local_200 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          local_200 = &DAT_cbf29ce484222645;
          pbVar17 = pbStack_1f8;
          do {
            pbVar17 = pbVar17 + 1;
            local_200 = (undefined1 *)(((ulong)local_200 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar17;
          } while (bVar5 != 0);
        }
        local_1e8 = (long *)0x0;
        pbVar17 = PTR_DAT_047d3e28;
      }
      lVar24 = *(long *)(lVar43 + 0xd048);
      if (lVar24 == 0) {
        if ((*pbVar17 & 1) == 0) {
          iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28);
          puVar34 = (undefined8 *)PTR_DAT_047d3e30;
          if (iVar16 != 0) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          pbVar17 = PTR_DAT_047d3e28;
        }
        else {
          puVar34 = (undefined8 *)PTR_DAT_047d3e30;
        }
      }
      else {
        puVar34 = (undefined8 *)FUN_00ddd400(lVar24,&local_200);
      }
      local_220 = *puVar34;
      uStack_218 = puVar34[1];
      local_210 = puVar34[2];
      local_208 = (long *)puVar34[3];
      if (local_208 != (long *)0x0) {
        (**(code **)(*local_208 + 0x18))();
      }
      uVar15 = FUN_00ec32b4(local_1e0,&local_200,&local_220);
      lVar24 = *(long *)(lVar43 + 0xd048);
      if (lVar24 == 0) {
        if ((*pbVar17 & 1) == 0) {
          iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28);
          puVar34 = (undefined8 *)PTR_DAT_047d3e30;
          if (iVar16 != 0) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          pbVar17 = PTR_DAT_047d3e28;
        }
        else {
          puVar34 = (undefined8 *)PTR_DAT_047d3e30;
        }
      }
      else {
        puVar34 = (undefined8 *)FUN_00ddd214(lVar24,&local_200);
      }
      local_240 = *puVar34;
      uStack_238 = puVar34[1];
      local_230 = puVar34[2];
      local_228 = (long *)puVar34[3];
      if (local_228 != (long *)0x0) {
        (**(code **)(*local_228 + 0x18))();
      }
      FUN_00ec2b10(local_1e0,uVar15,0x1f,&local_240);
      FUN_02712d70(local_1e0,0,param_1 + 0x138,param_1 + 0x1f8);
      local_244 = 0.0;
      pbStack_260 = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,4);
      if (pbStack_260 == (byte *)0x0) {
        if (((*pbVar17 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar16 != 0))
        {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        local_268 = *(undefined1 **)puVar41;
        pbStack_260 = *(byte **)(puVar41 + 8);
        local_258 = *(size_t *)(puVar41 + 0x10);
        local_250 = *(long **)(puVar41 + 0x18);
        if (local_250 != (long *)0x0) {
          (**(code **)(*local_250 + 0x18))();
        }
      }
      else {
        local_258 = strlen((char *)pbStack_260);
        bVar5 = *pbStack_260;
        local_268 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          local_268 = &DAT_cbf29ce484222645;
          pbVar17 = pbStack_260;
          do {
            pbVar17 = pbVar17 + 1;
            local_268 = (undefined1 *)(((ulong)local_268 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar17;
          } while (bVar5 != 0);
        }
        local_250 = (long *)0x0;
        pbVar17 = PTR_DAT_047d3e28;
      }
      uVar30 = (**(code **)(*(long *)(local_e8[7] + 0x30) + 0x48))
                         ((long *)(local_e8[7] + 0x30),&local_244,&local_268);
      if ((uVar30 & 1) != 0) {
        pbVar17 = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,5);
        if (pbVar17 == (byte *)0x0) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar16 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          puVar38 = *(undefined1 **)puVar41;
          pbVar17 = *(byte **)(puVar41 + 8);
          plVar18 = *(long **)(puVar41 + 0x10);
          plVar27 = *(long **)(puVar41 + 0x18);
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x18))(plVar27);
          }
        }
        else {
          plVar18 = (long *)strlen((char *)pbVar17);
          bVar5 = *pbVar17;
          if (bVar5 == 0) {
            plVar27 = (long *)0x0;
            puVar38 = &DAT_cbf29ce484222645;
          }
          else {
            puVar38 = &DAT_cbf29ce484222645;
            pbVar20 = pbVar17;
            do {
              pbVar20 = pbVar20 + 1;
              puVar38 = (undefined1 *)(((ulong)puVar38 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar20;
            } while (bVar5 != 0);
            plVar27 = (long *)0x0;
          }
        }
        if ((int)(local_244 + 0.1) == 2) {
          local_2c8 = (undefined1  [8])puVar38;
          local_2c0 = (long *)pbVar17;
          local_2b8 = plVar18;
          local_2b0 = plVar27;
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x18))(plVar27);
          }
          local_2a8 = (byte *)0x27739326c1067f49;
          local_2a0 = &DAT_03c6bacc;
          uVar23 = 2;
LAB_02bccb10:
          local_290 = (long *)0x0;
          local_298 = (long *)0x3;
          local_288 = CONCAT44(local_288._4_4_,uVar23);
          FUN_00ec0dec(local_1e0,uVar15,local_2c8);
          if (local_290 != (long *)0x0) {
            (**(code **)(*local_290 + 0x20))();
          }
          if (local_2b0 != (long *)0x0) {
            (**(code **)(*local_2b0 + 0x20))();
          }
        }
        else if ((int)(local_244 + 0.1) == 1) {
          local_2c8 = (undefined1  [8])puVar38;
          local_2c0 = (long *)pbVar17;
          local_2b8 = plVar18;
          local_2b0 = plVar27;
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x18))(plVar27);
          }
          local_2a8 = (byte *)0xea686a269e55f7ef;
          local_2a0 = &DAT_03c8ce4d;
          uVar23 = 1;
          goto LAB_02bccb10;
        }
        pbVar17 = PTR_DAT_047d3e28;
        if (plVar27 != (long *)0x0) {
          (**(code **)(*plVar27 + 0x20))(plVar27);
        }
      }
      lVar24 = local_e8[0x26];
      lVar19 = local_e8[0x27];
      if ((int)((ulong)(lVar19 - lVar24) >> 5) != 0) {
        lVar36 = 0;
        while (iVar16 = (**(code **)(*DAT_0485a020 + 0xe8))(DAT_0485a020,local_e8[0x26] + lVar36),
              iVar16 == 0) {
          if (((ulong)(lVar19 - lVar24) >> 5 & 0xffffffff) * 0x20 + -0x20 == lVar36)
          goto LAB_02bcce1c;
          lVar36 = lVar36 + 0x20;
        }
        if (iVar16 == 2) {
          pbVar20 = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,5);
          if (pbVar20 == (byte *)0x0) {
            if (((*pbVar17 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar16 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_2f8 = *(undefined1 **)puVar41;
            pbVar20 = *(byte **)(puVar41 + 8);
            plVar18 = *(long **)(puVar41 + 0x10);
            plVar27 = *(long **)(puVar41 + 0x18);
            if (plVar27 != (long *)0x0) {
              (**(code **)(*plVar27 + 0x18))(plVar27);
            }
          }
          else {
            plVar18 = (long *)strlen((char *)pbVar20);
            bVar5 = *pbVar20;
            if (bVar5 == 0) {
              plVar27 = (long *)0x0;
              local_2f8 = &DAT_cbf29ce484222645;
            }
            else {
              pbVar17 = pbVar20;
              do {
                pbVar17 = pbVar17 + 1;
                local_2f8 = (undefined1 *)(((ulong)local_2f8 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar17;
              } while (bVar5 != 0);
              plVar27 = (long *)0x0;
            }
          }
          local_2c8 = (undefined1  [8])local_2f8;
          local_2c0 = (long *)pbVar20;
          local_2b8 = plVar18;
          local_2b0 = plVar27;
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x18))(plVar27);
          }
          local_2a8 = (byte *)0x27739326c1067f49;
          local_2a0 = &DAT_03c6bacc;
          uVar23 = 2;
        }
        else {
          if (iVar16 != 1) goto LAB_02bcce1c;
          pbVar20 = (byte *)(**(code **)(*DAT_0485a020 + 0xe0))(DAT_0485a020,5);
          if (pbVar20 == (byte *)0x0) {
            if (((*pbVar17 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar16 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_2f8 = *(undefined1 **)puVar41;
            pbVar20 = *(byte **)(puVar41 + 8);
            plVar18 = *(long **)(puVar41 + 0x10);
            plVar27 = *(long **)(puVar41 + 0x18);
            if (plVar27 != (long *)0x0) {
              (**(code **)(*plVar27 + 0x18))(plVar27);
            }
          }
          else {
            plVar18 = (long *)strlen((char *)pbVar20);
            bVar5 = *pbVar20;
            if (bVar5 == 0) {
              plVar27 = (long *)0x0;
              local_2f8 = &DAT_cbf29ce484222645;
            }
            else {
              pbVar17 = pbVar20;
              do {
                pbVar17 = pbVar17 + 1;
                local_2f8 = (undefined1 *)(((ulong)local_2f8 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar17;
              } while (bVar5 != 0);
              plVar27 = (long *)0x0;
            }
          }
          local_2c8 = (undefined1  [8])local_2f8;
          local_2c0 = (long *)pbVar20;
          local_2b8 = plVar18;
          local_2b0 = plVar27;
          if (plVar27 != (long *)0x0) {
            (**(code **)(*plVar27 + 0x18))(plVar27);
          }
          local_2a8 = (byte *)0xea686a269e55f7ef;
          local_2a0 = &DAT_03c8ce4d;
          uVar23 = 1;
        }
        local_290 = (long *)0x0;
        local_298 = (long *)0x3;
        local_288 = CONCAT44(local_288._4_4_,uVar23);
        FUN_00ec0dec(local_1e0,uVar15,local_2c8);
        if (local_290 != (long *)0x0) {
          (**(code **)(*local_290 + 0x20))();
        }
        if (local_2b0 != (long *)0x0) {
          (**(code **)(*local_2b0 + 0x20))();
        }
        if (plVar27 != (long *)0x0) {
          (**(code **)(*plVar27 + 0x20))(plVar27);
        }
      }
LAB_02bcce1c:
      FUN_00ec2ec4(local_1e0,&local_188);
      if (local_250 != (long *)0x0) {
        (**(code **)(*local_250 + 0x20))();
      }
      if (local_228 != (long *)0x0) {
        (**(code **)(*local_228 + 0x20))();
      }
      if (local_208 != (long *)0x0) {
        (**(code **)(*local_208 + 0x20))();
      }
      if (local_1e8 != (long *)0x0) {
        (**(code **)(*local_1e8 + 0x20))();
      }
      FUN_0189b3c0(local_e8,&local_1d8,1,0);
      FUN_010e88e0(local_e8,&local_180,&local_160,param_1 + 0x1f8);
      local_2c8 = (undefined1  [8])local_160;
      auVar9._8_8_ = plVar42;
      auVar9._0_8_ = local_160;
      auVar8._8_8_ = plVar42;
      auVar8._0_8_ = local_160;
      auVar7._8_8_ = local_2c0;
      auVar7._0_8_ = local_160;
      if (local_160 != (long *)0x0) {
        plVar18 = local_160 + 5;
        do {
          lVar24 = *plVar18;
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar32) {
            *(int *)plVar18 = (int)lVar24 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar24 == -1) goto LAB_02bcdfa4;
      }
      if (plVar42 != (long *)0x0) {
        plVar18 = plVar42 + 5;
        do {
          lVar24 = *plVar18;
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar32) {
            *(int *)plVar18 = (int)lVar24 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        auVar7 = auVar8;
        if ((int)lVar24 == -1) goto LAB_02bcdfa4;
      }
      local_2b8 = local_e8;
      if (local_e8 != (long *)0x0) {
        plVar18 = local_e8 + 5;
        do {
          lVar24 = *plVar18;
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar32) {
            *(int *)plVar18 = (int)lVar24 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        auVar7 = auVar9;
        if ((int)lVar24 == -1) {
LAB_02bcdfa4:
          _local_2c8 = auVar7;
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      local_2b0 = (long *)((ulong)local_2b0 & 0xffffffffffffff00);
      local_2c0 = plVar42;
      if ((char)local_1d8 != '\0') {
        local_2a8 = local_1d0;
        local_2a0 = local_1c8;
        local_298 = local_1c0;
        local_290 = local_1b8;
        if (local_1b8 != (long *)0x0) {
          (**(code **)(*local_1b8 + 0x18))();
        }
        local_2b0 = (long *)CONCAT71(local_2b0._1_7_,1);
      }
      local_288 = local_108;
      local_280 = local_100;
      local_278 = local_f8;
      local_270 = local_f0;
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x18))();
      }
      puVar4 = local_d8;
      puVar25 = *(undefined **)(param_1 + 0x198);
      if (puVar25 == (undefined *)0x0) {
LAB_02bccfb0:
        plVar18 = (long *)(**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))
                                    (*(long **)(param_1 + 0x1c8),0x90,8);
        if (plVar18 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x1c8) + 0xe8))();
        }
        uVar37 = *(undefined8 *)(param_1 + 0x1c8);
        if (((DAT_04865a38 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar24 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar24 != 0) {
          if (0xf < *(ulong *)(lVar24 + 0x80)) {
LAB_02bcdfcc:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar37;
          *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
        }
        plVar18[2] = (long)local_d8;
        plVar18[3] = local_d0;
        plVar18[4] = local_c8;
        plVar18[5] = (long)local_c0;
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x18))();
        }
        plVar14 = local_270;
        plVar13 = local_290;
        plVar12 = local_2b8;
        plVar27 = local_2c0;
        plVar18[6] = (long)local_2c8;
        local_2c8 = (undefined1  [8])0x0;
        local_2c0 = (long *)0x0;
        local_2b8 = (long *)0x0;
        plVar18[7] = (long)plVar27;
        plVar18[8] = (long)plVar12;
        *(undefined1 *)(plVar18 + 9) = 0;
        if ((char)local_2b0 != '\0') {
          plVar18[10] = (long)local_2a8;
          plVar18[0xb] = (long)local_2a0;
          local_290 = (long *)0x0;
          plVar18[0xc] = (long)local_298;
          plVar18[0xd] = (long)plVar13;
          *(undefined1 *)(plVar18 + 9) = 1;
        }
        plVar18[0xe] = local_288;
        plVar18[0xf] = (long)local_280;
        local_270 = (long *)0x0;
        plVar18[0x10] = local_278;
        plVar18[0x11] = (long)plVar14;
        if (lVar24 != 0) {
          *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
        }
        *plVar18 = 0;
        plVar18[1] = (long)puVar4;
        fVar44 = (float)(*(long *)(param_1 + 0x1e8) + 1);
        if ((puVar25 == (undefined *)0x0) || (*(float *)(param_1 + 0x1f0) * (float)puVar25 < fVar44)
           ) {
          uVar30 = (ulong)(puVar25 < (undefined *)0x3 ||
                          ((ulong)puVar25 & (ulong)(puVar25 + -1)) != 0) | (long)puVar25 << 1;
          uVar31 = (ulong)(fVar44 / *(float *)(param_1 + 0x1f0));
          if (uVar31 <= uVar30) {
            uVar31 = uVar30;
          }
          if (uVar31 - 1 == 0) {
            uVar31 = 2;
          }
          else if ((uVar31 & uVar31 - 1) != 0) {
            uVar31 = std::__next_prime(uVar31);
          }
          uVar30 = *(ulong *)(param_1 + 0x198);
          if (uVar30 < uVar31) {
            uVar35 = uVar31;
LAB_02bcd1ac:
            FUN_027604b8(plVar1,uVar35);
          }
          else if (uVar31 < uVar30) {
            uVar35 = (ulong)((float)*(ulong *)(param_1 + 0x1e8) / *(float *)(param_1 + 0x1f0));
            if ((uVar30 < 3) ||
               (uVar29 = uVar30 - (uVar30 >> 1 & 0x5555555555555555),
               uVar29 = (uVar29 & 0x3333333333333333) + (uVar29 >> 2 & 0x3333333333333333),
               1 < (uVar29 + (uVar29 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar35 = std::__next_prime(uVar35);
            }
            else if (1 < uVar35) {
              uVar35 = 1L << (-LZCOUNT(uVar35 - 1) & 0x3fU);
            }
            if (uVar35 <= uVar31) {
              uVar35 = uVar31;
            }
            if (uVar35 < uVar30) goto LAB_02bcd1ac;
          }
          puVar25 = *(undefined **)(param_1 + 0x198);
          if (((ulong)puVar25 & (ulong)(puVar25 + -1)) == 0) {
            puVar41 = (undefined *)((ulong)(puVar25 + -1) & (ulong)puVar4);
          }
          else if (puVar4 < puVar25) {
            puVar41 = puVar4;
          }
          else {
            uVar30 = 0;
            if (puVar25 != (undefined *)0x0) {
              uVar30 = (ulong)puVar4 / (ulong)puVar25;
            }
            puVar41 = puVar4 + -(uVar30 * (long)puVar25);
          }
        }
        plVar27 = *(long **)(*plVar1 + (long)puVar41 * 8);
        if (plVar27 == (long *)0x0) {
          *plVar18 = *(long *)(param_1 + 0x1c0);
          *(long **)(param_1 + 0x1c0) = plVar18;
          *(long *)(*(long *)(param_1 + 400) + (long)puVar41 * 8) = param_1 + 0x1c0;
          if (*plVar18 != 0) {
            puVar41 = *(undefined **)(*plVar18 + 8);
            if (((ulong)puVar25 & (ulong)(puVar25 + -1)) == 0) {
              puVar41 = (undefined *)((ulong)puVar41 & (ulong)(puVar25 + -1));
            }
            else if (puVar25 <= puVar41) {
              uVar30 = 0;
              if (puVar25 != (undefined *)0x0) {
                uVar30 = (ulong)puVar41 / (ulong)puVar25;
              }
              puVar41 = puVar41 + -(uVar30 * (long)puVar25);
            }
            plVar27 = (long *)(*plVar1 + (long)puVar41 * 8);
            goto LAB_02bcd234;
          }
        }
        else {
          *plVar18 = *plVar27;
LAB_02bcd234:
          *plVar27 = (long)plVar18;
        }
        *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 1;
      }
      else {
        puVar26 = puVar25 + -1;
        if (((ulong)puVar25 & (ulong)puVar26) == 0) {
          puVar41 = (undefined *)((ulong)puVar26 & (ulong)local_d8);
          plVar18 = *(long **)(*plVar1 + (long)puVar41 * 8);
          if (plVar18 == (long *)0x0) goto LAB_02bccfb0;
          do {
            plVar18 = (long *)*plVar18;
            if ((plVar18 == (long *)0x0) ||
               ((undefined *)plVar18[1] != local_d8 &&
                (undefined *)((ulong)plVar18[1] & (ulong)puVar26) != puVar41)) goto LAB_02bccfb0;
          } while ((undefined *)plVar18[2] != local_d8);
        }
        else {
          puVar41 = local_d8;
          if (puVar25 <= local_d8) {
            uVar30 = 0;
            if (puVar25 != (undefined *)0x0) {
              uVar30 = (ulong)local_d8 / (ulong)puVar25;
            }
            puVar41 = local_d8 + -(uVar30 * (long)puVar25);
          }
          plVar18 = *(long **)(*plVar1 + (long)puVar41 * 8);
          if (plVar18 == (long *)0x0) goto LAB_02bccfb0;
          do {
            plVar18 = (long *)*plVar18;
            if (plVar18 == (long *)0x0) goto LAB_02bccfb0;
            puVar26 = (undefined *)plVar18[1];
            if (puVar26 != local_d8) {
              if (puVar25 <= puVar26) {
                uVar30 = 0;
                if (puVar25 != (undefined *)0x0) {
                  uVar30 = (ulong)puVar26 / (ulong)puVar25;
                }
                puVar26 = puVar26 + -(uVar30 * (long)puVar25);
              }
              if (puVar26 != puVar41) goto LAB_02bccfb0;
            }
          } while ((undefined *)plVar18[2] != local_d8);
        }
      }
      FUN_015c8d6c(local_2c8);
      if (local_1e0 != (long *)0x0) {
        plVar1 = local_1e0 + 5;
        do {
          lVar24 = *plVar1;
          iVar16 = (int)lVar24 + -1;
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar32) {
            *(int *)plVar1 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_1e0 + 0x10))();
        }
        else if ((int)lVar24 == 0) goto LAB_02bce01c;
      }
      if ((char)local_1d8 != '\0') {
        if (local_1b8 != (long *)0x0) {
          (**(code **)(*local_1b8 + 0x20))();
        }
        local_1d8 = (long *)((ulong)local_1d8 & 0xffffffffffffff00);
      }
      if (local_1b0 != (long *)0x0) {
        (**(code **)(*local_1b0 + 0x20))();
      }
      if (local_188 != (long *)0x0) {
        plVar1 = local_188 + 5;
        do {
          lVar24 = *plVar1;
          iVar16 = (int)lVar24 + -1;
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar32) {
            *(int *)plVar1 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_188 + 0x10))();
        }
        else if ((int)lVar24 == 0) goto LAB_02bce01c;
      }
      if (local_168 != (long *)0x0) {
        (**(code **)(*local_168 + 0x20))();
      }
      if (plVar42 != (long *)0x0) {
        plVar1 = plVar42 + 5;
        do {
          lVar24 = *plVar1;
          iVar16 = (int)lVar24 + -1;
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar32) {
            *(int *)plVar1 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*plVar42 + 0x10))(plVar42);
        }
        else if ((int)lVar24 == 0) goto LAB_02bce01c;
      }
      if (local_160 != (long *)0x0) {
        plVar1 = local_160 + 5;
        do {
          lVar24 = *plVar1;
          iVar16 = (int)lVar24 + -1;
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar32) {
            *(int *)plVar1 = iVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar16 == 0) {
          (**(code **)(*local_160 + 0x10))();
        }
        else if ((int)lVar24 == 0) goto LAB_02bce01c;
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_e8 == (long *)0x0) {
LAB_02bcd328:
        lVar24 = *(long *)(plVar18[8] + 0x130);
        lVar19 = *(long *)(plVar18[8] + 0x138);
        lVar39 = *param_2;
        plVar1 = (long *)(lVar39 + 0x70);
        lVar36 = nn::os::GetCurrentThread();
        do {
          lVar21 = *plVar1;
          lVar28 = *(long *)(lVar39 + 0x78);
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar32) {
            *plVar1 = lVar21;
            *(long *)(lVar39 + 0x78) = lVar28;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_02bcd354:
        while( true ) {
          auVar11._8_8_ = local_2c0;
          auVar11._0_8_ = local_2c8;
          auVar10._8_8_ = local_2c0;
          auVar10._0_8_ = local_2c8;
          auVar7._8_8_ = local_2c0;
          auVar7._0_8_ = local_2c8;
          if ((lVar21 == 0) || (lVar36 == lVar21)) break;
          nn::os::WaitLightEvent((LightEventType *)(lVar39 + 0x80));
          do {
            lVar21 = *plVar1;
            lVar28 = *(long *)(lVar39 + 0x78);
            cVar6 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar32) {
              *plVar1 = lVar21;
              *(long *)(lVar39 + 0x78) = lVar28;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        do {
          if (*plVar1 != lVar21 || *(long *)(lVar39 + 0x78) != lVar28) goto LAB_02bcd38c;
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar32) {
            *plVar1 = lVar21;
            *(long *)(lVar39 + 0x74) = lVar28 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        uVar30 = (ulong)((int)((ulong)(lVar19 - lVar24) >> 5) - 1);
        lVar24 = *(long *)(lVar39 + 0x30);
        if (uVar30 < (ulong)(*(long *)(lVar39 + 0x38) - lVar24 >> 3)) {
          lVar19 = plVar18[6];
          if (lVar19 != 0) {
            piVar2 = (int *)(lVar19 + 0x28);
            do {
              iVar16 = *piVar2;
              cVar6 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar32) {
                *piVar2 = iVar16 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar16 == -1) goto LAB_02bcdfa4;
          }
          lVar36 = plVar18[7];
          if (lVar36 != 0) {
            piVar2 = (int *)(lVar36 + 0x28);
            do {
              iVar16 = *piVar2;
              cVar6 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar32) {
                *piVar2 = iVar16 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            auVar7 = auVar10;
            if (iVar16 == -1) goto LAB_02bcdfa4;
          }
          lVar24 = *(long *)(lVar24 + uVar30 * 8);
          if (lVar24 != 0) {
            piVar2 = (int *)(lVar24 + 0x28);
            do {
              iVar16 = *piVar2;
              cVar6 = '\x01';
              bVar32 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar32) {
                *piVar2 = iVar16 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            auVar7 = auVar11;
            if (iVar16 == -1) goto LAB_02bcdfa4;
          }
          plVar18 = *(long **)(param_1 + 0x160);
          if (plVar18 < *(long **)(param_1 + 0x168)) {
            uVar37 = *(undefined8 *)(param_1 + 0x170);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar21 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar21 == 0) {
              *plVar18 = lVar19;
              plVar18[1] = lVar36;
              plVar18[2] = lVar24;
              *(int *)(plVar18 + 3) = param_4;
            }
            else {
              if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_02bcdfcc;
              *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar37;
              *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
              plVar18[2] = lVar24;
              *plVar18 = lVar19;
              plVar18[1] = lVar36;
              *(int *)(plVar18 + 3) = param_4;
              *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
            }
            *(long **)(param_1 + 0x160) = plVar18 + 4;
          }
          else {
            uVar35 = *(ulong *)(param_1 + 0x178);
            lVar21 = (long)plVar18 - *(long *)(param_1 + 0x158) >> 5;
            uVar31 = lVar21 + 1;
            if (0x7ffffffffffffffe < uVar35) {
              uVar35 = 0x7fffffffffffffff;
            }
            if (uVar35 < uVar31) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar28 = (long)*(long **)(param_1 + 0x168) - *(long *)(param_1 + 0x158);
            uVar29 = lVar28 >> 4;
            if (uVar31 <= uVar29) {
              uVar31 = uVar29;
            }
            if (uVar35 >> 1 <= (ulong)(lVar28 >> 5)) {
              uVar31 = uVar35;
            }
            if (uVar31 == 0) {
              lVar28 = 0;
            }
            else {
              lVar28 = (**(code **)(**(long **)(param_1 + 0x170) + 0x10))
                                 (*(long **)(param_1 + 0x170),uVar31 << 5,8);
              if (lVar28 == 0) {
                (**(code **)(**(long **)(param_1 + 0x170) + 0xe8))();
              }
            }
            plVar18 = (long *)(lVar28 + lVar21 * 0x20);
            uVar37 = *(undefined8 *)(param_1 + 0x170);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar21 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar21 == 0) {
              *plVar18 = lVar19;
              plVar18[1] = lVar36;
              plVar18[2] = lVar24;
              *(int *)(plVar18 + 3) = param_4;
            }
            else {
              if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_02bcdfcc;
              *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar37;
              *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
              plVar18[2] = lVar24;
              *plVar18 = lVar19;
              plVar18[1] = lVar36;
              *(int *)(plVar18 + 3) = param_4;
              *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
            }
            lVar24 = *(long *)(param_1 + 0x158);
            lVar19 = *(long *)(param_1 + 0x160);
            if (lVar19 == lVar24) {
              plVar42 = plVar18;
              lVar19 = lVar24;
            }
            else {
              lVar36 = 0;
              do {
                uVar37 = *(undefined8 *)(param_1 + 0x170);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar16 = __cxa_guard_acquire(&DAT_04865a38), iVar16 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar21 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar21 != 0) {
                  if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_02bcdfcc;
                  *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar37;
                  *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
                }
                lVar3 = lVar19 + lVar36;
                uVar37 = *(undefined8 *)(lVar3 + -0x20);
                *(undefined8 *)(lVar3 + -0x20) = 0;
                *(undefined8 *)((long)plVar18 + lVar36 + -0x20) = uVar37;
                uVar37 = *(undefined8 *)(lVar3 + -0x18);
                *(undefined8 *)(lVar3 + -0x18) = 0;
                *(undefined8 *)((long)plVar18 + lVar36 + -0x18) = uVar37;
                uVar37 = *(undefined8 *)(lVar3 + -0x10);
                *(undefined8 *)(lVar3 + -0x10) = 0;
                *(undefined8 *)((long)plVar18 + lVar36 + -0x10) = uVar37;
                *(undefined4 *)((long)plVar18 + lVar36 + -8) = *(undefined4 *)(lVar3 + -8);
                if (lVar21 != 0) {
                  *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
                }
                lVar36 = lVar36 + -0x20;
              } while (lVar24 - lVar19 != lVar36);
              lVar24 = *(long *)(param_1 + 0x158);
              plVar42 = (long *)((long)plVar18 + lVar36);
              lVar19 = *(long *)(param_1 + 0x160);
            }
            lVar36 = *(long *)(param_1 + 0x168);
            *(long **)(param_1 + 0x158) = plVar42;
            *(long **)(param_1 + 0x160) = plVar18 + 4;
            *(ulong *)(param_1 + 0x168) = lVar28 + uVar31 * 0x20;
            while (lVar19 != lVar24) {
              lVar19 = lVar19 + -0x20;
              FUN_015c8b14(lVar19);
            }
            if (lVar24 != 0) {
              plVar18 = *(long **)(param_1 + 0x170);
              lVar36 = lVar36 - lVar24;
              uVar31 = (**(code **)(*plVar18 + 0xf8))(plVar18);
              if (((uVar31 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
                (**(code **)(*plVar18 + 0x18))(plVar18,lVar24,lVar36,8);
              }
              else {
                FUN_00c48fe8(plVar18,lVar24,lVar36,8);
              }
            }
          }
        }
        do {
          lVar24 = *plVar1;
          lVar19 = *(long *)(lVar39 + 0x78);
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar32) {
            *plVar1 = lVar24;
            *(long *)(lVar39 + 0x78) = lVar19;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        while( true ) {
          lVar36 = *plVar1;
          lVar21 = *(long *)(lVar39 + 0x78);
          if (lVar36 != lVar24 || lVar21 != lVar19) break;
          cVar6 = '\x01';
          bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar32) {
            *plVar1 = lVar24;
            *(long *)(lVar39 + 0x74) = lVar19 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02bcd798;
        }
        ClearExclusiveLocal();
        do {
          do {
            lVar24 = *plVar1;
            if (lVar24 != lVar36 || *(long *)(lVar39 + 0x78) != lVar21) {
              bVar32 = false;
              ClearExclusiveLocal();
              goto LAB_02bcd78c;
            }
            cVar6 = '\x01';
            bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar32) {
              *plVar1 = lVar36;
              *(long *)(lVar39 + 0x74) = lVar21 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar32 = true;
LAB_02bcd78c:
          lVar36 = lVar24;
          lVar21 = *(long *)(lVar39 + 0x78);
        } while (!bVar32);
LAB_02bcd798:
        nn::os::SignalLightEvent((LightEventType *)(lVar39 + 0x80));
        lVar24 = *(long *)(*param_2 + 0x90);
        iVar16 = *(int *)(lVar24 + uVar30 * 4);
        if (iVar16 == 3) {
          *(undefined1 *)(*param_2 + 0x19a) = 1;
LAB_02bcd7c0:
          *(undefined4 *)(lVar24 + uVar30 * 4) = 1;
        }
        else if (iVar16 != 1) goto LAB_02bcd7c0;
        uVar37 = 1;
        goto LAB_02bcd7cc;
      }
      plVar1 = local_e8 + 5;
      do {
        lVar24 = *plVar1;
        iVar16 = (int)lVar24 + -1;
        cVar6 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar32) {
          *(int *)plVar1 = iVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*local_e8 + 0x10))();
        goto LAB_02bcd328;
      }
      if ((int)lVar24 != 0) goto LAB_02bcd328;
      goto LAB_02bce01c;
    }
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x20))();
    }
    if (local_e8 != (long *)0x0) {
      plVar1 = local_e8 + 5;
      do {
        lVar24 = *plVar1;
        iVar16 = (int)lVar24 + -1;
        cVar6 = '\x01';
        bVar32 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar32) {
          *(int *)plVar1 = iVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      else if ((int)lVar24 == 0) goto LAB_02bce01c;
    }
    uVar37 = 0;
LAB_02bcd7cc:
    if (local_e0[0] != '\0') {
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x20))();
      }
      local_e0[0] = '\0';
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (plVar40 != (long *)0x0) {
    (**(code **)(*plVar40 + 0x20))(plVar40);
  }
  if (lVar43 != 0) {
    (**(code **)(*(long *)(lVar43 + 0x20) + 0x18))((long *)(lVar43 + 0x20));
  }
  if (local_70[0] != (long *)0x0) {
    plVar40 = local_70[0] + 5;
    do {
      lVar43 = *plVar40;
      iVar16 = (int)lVar43 + -1;
      cVar6 = '\x01';
      bVar32 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar32) {
        *(int *)plVar40 = iVar16;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    else if ((int)lVar43 == 0) {
LAB_02bce01c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return uVar37;
LAB_02bcd38c:
  ClearExclusiveLocal();
  lVar21 = *plVar1;
  lVar28 = *(long *)(lVar39 + 0x78);
  goto LAB_02bcd354;
}


