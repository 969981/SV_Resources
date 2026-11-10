/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f641c8; name: FUN_02f641c8
 */


void FUN_02f641c8(long param_1,long *param_2,uint param_3,uint param_4,char *param_5,long *param_6,
                 long param_7,long *param_8,long *param_9,long param_10,long param_11,long param_12,
                 long param_13,long param_14,long *param_15,long param_16,ulong param_17,
                 ulong param_18,long param_19)

{
  int *piVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  int iVar21;
  uint **ppuVar22;
  uint5 uVar23;
  undefined *puVar24;
  uint *puVar25;
  short sVar26;
  int iVar27;
  uint uVar28;
  undefined4 *puVar29;
  long *plVar30;
  ulong uVar31;
  long *plVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  uint *puVar38;
  int iVar39;
  long lVar40;
  uint uVar41;
  uint uVar42;
  undefined1 (*pauVar43) [16];
  uint uVar44;
  undefined4 *puVar45;
  undefined1 (*pauVar46) [16];
  ulong uVar47;
  undefined8 *puVar48;
  ulong uVar49;
  uint *puVar50;
  undefined8 *puVar51;
  undefined1 (*pauVar52) [16];
  uint *puVar53;
  long lVar54;
  ulong uVar55;
  uint *puVar56;
  long lVar57;
  byte bVar58;
  ushort uVar59;
  int iVar60;
  float fVar61;
  undefined8 uVar62;
  int iVar67;
  int iVar69;
  undefined1 auVar63 [16];
  float fVar68;
  float fVar70;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined4 uVar81;
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  long local_398;
  uint *local_358;
  uint *puStack_350;
  uint local_344;
  long *local_340;
  ulong local_338;
  ulong local_330;
  long local_328;
  long *local_320;
  undefined1 (*local_318) [16];
  long local_310;
  undefined1 (*local_308) [16];
  long local_300;
  long *local_2f8;
  uint local_2ec;
  ulong local_2e8;
  long local_2e0;
  uint local_2d8;
  uint local_2d4;
  uint *local_2d0;
  long *local_2c8;
  uint local_2bc;
  char *local_2b8;
  long local_2b0;
  long local_2a8;
  long *local_2a0;
  long local_298;
  uint local_28c;
  uint *local_288;
  ulong local_280;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  undefined1 (*local_258) [16];
  uint local_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  uint *local_238;
  undefined1 (*local_230) [16];
  ulong local_228;
  ulong local_220;
  ulong local_218;
  undefined1 (*local_210) [16];
  long *local_208;
  long local_200;
  uint *local_1f8;
  long local_1f0;
  long *local_1e8;
  long local_1e0;
  long local_1d8 [2];
  undefined8 *local_1c8;
  uint *local_1c0;
  uint local_1b8;
  int local_1b4;
  undefined4 local_1b0 [2];
  uint local_1a8 [2];
  undefined1 (*local_1a0) [16];
  long local_198;
  long local_190;
  uint local_188;
  long local_180;
  long local_178;
  undefined1 (*local_170) [16];
  undefined1 (*local_168) [16];
  long local_160;
  long local_158;
  uint local_150;
  long local_148;
  long local_140;
  undefined1 (*local_138) [16];
  long local_130 [2];
  undefined8 *local_120;
  uint *local_118;
  uint local_110;
  int local_10c;
  uint local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  long lStack_e8;
  float local_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  uint *local_a0;
  undefined8 local_98;
  long local_90;
  ulong local_68;
  
  local_1c8 = *(undefined8 **)(param_1 + 0x4e0);
  local_1d8[0] = *param_2;
  local_1c0 = (uint *)0x0;
  local_1b4 = 0;
  puVar29 = *(undefined4 **)(param_1 + 0x4b0);
  *puVar29 = 0xffffff;
  *(undefined2 *)(puVar29 + 1) = 0;
  puVar29[2] = 0;
  puVar29[0x1d] = 0;
  *(long **)(puVar29 + 4) = local_1d8;
  local_328 = param_19;
  *(long *)(puVar29 + 8) = param_19;
  *(long **)(puVar29 + 0x12) = param_15;
  *(long **)(puVar29 + 0xe) = param_15;
  *(long *)(puVar29 + 0x10) = param_16;
  if (param_15 != (long *)0x0) {
    iVar39 = *(int *)(*param_15 + 8);
    lVar40 = param_15[3];
    iVar27 = *(int *)((long)param_15 + 0x1c);
    *(long *)(puVar29 + 0x14) = param_15[2];
    *(short *)(puVar29 + 0x16) = (short)lVar40;
    *(short *)((long)puVar29 + 0x5a) = (short)iVar27;
    puVar29[0x17] = -(iVar27 + iVar39);
  }
  if (param_16 == 0) {
    *(long **)(puVar29 + 0x10) = param_15;
  }
  *(int *)(*(long *)(param_1 + 0x4b0) + 8) = (int)param_2[5];
  local_120 = *(undefined8 **)(param_1 + 0x4e0);
  local_130[0] = *param_2;
  local_118 = (uint *)0x0;
  local_10c = 0;
  local_2e0 = *(long *)(param_1 + 8);
  local_28c = *(uint *)(local_2e0 + 0x5c);
  puVar56 = *(uint **)(param_1 + 0x4b0);
  *(undefined1 (***) [16])(puVar56 + 10) = &local_168;
  *(undefined1 (***) [16])(puVar56 + 0xc) = &local_1a0;
  local_278 = param_2[2];
  plVar30 = *(long **)(*(long *)(param_1 + 8) + 0x4b8);
  pauVar43 = (undefined1 (*) [16])param_6[1];
  local_2f8 = param_8;
  local_2ec = param_3;
  local_2b8 = param_5;
  local_260 = param_1;
  local_208 = param_6;
  local_1f8 = puVar56;
  local_1e8 = param_2;
  local_1e0 = param_7;
  if (*(int *)(param_1 + 0x770) == 0) {
    local_320 = (long *)0x0;
LAB_02f64310:
    local_344 = 0;
  }
  else {
    lVar40 = tpidr_el0;
    lVar36 = *(long *)(lVar40 + 0x1000b8);
    if (lVar36 == 0) {
      lVar36 = FUN_00e5d3b4();
      *(long *)(lVar40 + 0x1000b8) = lVar36;
    }
    puVar24 = PTR_DAT_047e48d8;
    local_320 = *(long **)(lVar36 + 0x3e0);
    puVar48 = (undefined8 *)local_320[2];
    if ((undefined8 *)local_320[4] <= puVar48) goto LAB_02f64310;
    if (*(int *)(param_1 + 0x770) == 0) {
      local_344 = 1;
    }
    else {
      if (local_320 == (long *)0x0) {
        local_320 = (long *)0x0;
      }
      else {
        lVar40 = (long)*(int *)(param_1 + 0x770) * 4;
        puVar29 = *(undefined4 **)(param_1 + 0x768);
        while( true ) {
          lVar40 = lVar40 + -4;
          if (puVar48 != (undefined8 *)0x0) {
            puVar45 = (undefined4 *)((long)puVar48 + 0x13U & 0xfffffffffffffffc);
            uVar49 = (long)puVar45 + 0xbU & 0xfffffffffffffff8;
            if (uVar49 <= (ulong)local_320[3]) {
              uVar81 = *puVar29;
              local_320[2] = uVar49;
              *puVar48 = &DAT_03c1a9df;
              puVar48[1] = puVar24;
              if (puVar45 != (undefined4 *)0x0) {
                *puVar45 = uVar81;
              }
            }
          }
          if (lVar40 == 0) break;
          puVar48 = (undefined8 *)local_320[2];
          puVar29 = puVar29 + 1;
        }
        param_6 = local_208;
        param_7 = local_1e0;
        puVar56 = local_1f8;
        param_1 = local_260;
        param_3 = local_2ec;
      }
      local_344 = 1;
    }
  }
  if (pauVar43 == (undefined1 (*) [16])0x0) {
    uVar49 = 0xff000000ff000000;
  }
  else {
    uVar49 = (ulong)*(uint *)*pauVar43 & 0xffffff |
             (ulong)(*(uint *)(*pauVar43 + 4) & 0xffffff) << 0x20;
  }
  plVar33 = *(long **)(param_7 + 8);
  if (plVar33 == (long *)0x0) {
    pauVar46 = (undefined1 (*) [16])0x0;
LAB_02f64368:
    uVar55 = 0xff000000ff000000;
  }
  else {
    pauVar46 = (undefined1 (*) [16])(*plVar33 + (ulong)*(ushort *)(plVar33 + 1) + 0x20);
    if (pauVar46 == (undefined1 (*) [16])0x0) goto LAB_02f64368;
    uVar55 = (ulong)*(uint *)*pauVar46 & 0xffffff |
             (ulong)(*(uint *)(*plVar33 + (ulong)*(ushort *)(plVar33 + 1) + 0x24) & 0xffffff) <<
             0x20;
  }
  if ((uVar55 | uVar49) != 0xff000000ff000000) {
    local_2c8 = param_6 + 7;
    local_2d0 = puVar56 + 0x18;
    local_2e8 = param_17;
    local_288 = puVar56 + 0x14;
    local_358 = puVar56 + 0x10;
    puStack_350 = puVar56 + 0xe;
    lVar40 = local_328 + 0x58;
    uVar28 = local_344 & local_320 != (long *)0x0;
    local_298 = param_12;
    local_2bc = param_4 & 1;
    local_270 = param_14 + 0x10;
    local_2d4 = 0xffffff;
    local_68 = 0xffffffffffffffff;
    local_200 = param_10;
    local_2a0 = param_9;
    local_2d8 = 1;
    local_228 = param_18;
    local_300 = param_11;
    local_1f0 = param_14;
    do {
      plVar33 = local_320;
      pauVar52 = pauVar43;
      if (uVar55 <= uVar49) {
        pauVar52 = pauVar46;
      }
      uVar31 = (ulong)(byte)(*pauVar52)[9];
      local_268 = uVar31 << 4;
      uVar47 = uVar49;
      if (uVar55 <= uVar49) {
        uVar47 = uVar55;
      }
      local_258 = pauVar46;
      local_230 = pauVar43;
      local_220 = uVar49;
      if (uVar47 == local_68) {
        plVar33 = local_2c8;
        if (uVar55 <= uVar49) {
          plVar33 = local_2a0;
        }
        local_100 = CONCAT44(local_100._4_4_,*(undefined4 *)(*pauVar52 + 4));
        local_108 = *(uint *)*pauVar52;
        if (*(long *)(puVar56 + 0x18) != 0) {
          if (*(char *)((long)puVar56 + 0x7b) == '\0') {
            FUN_02f24e3c(puVar56,param_1,local_1e8);
          }
          else {
            uVar82 = **(undefined8 **)(puVar56 + 0x12);
            *(undefined4 *)(*(long *)(puVar56 + 0x18) + 8) = 0x7777;
            plVar32 = *(long **)(puVar56 + 0x12);
            uVar41 = *(uint *)((long)plVar32 + 0x1c);
            uVar44 = uVar41 + *(int *)(*plVar32 + 8) + puVar56[0x17];
            if (uVar44 != 0) {
              puVar53 = *(uint **)local_288;
              if (puVar53 == (uint *)plVar32[2]) {
                uVar59 = *(ushort *)((long)puVar56 + 0x5a);
              }
              else {
                uVar59 = *(ushort *)((long)puVar56 + 0x5a);
                puVar50 = puVar53;
                puVar37 = (uint *)plVar32[2];
                if ((uint)uVar59 == (*puVar53 & 0xffff)) {
                  puVar50 = *(uint **)(puVar53 + 2);
                  puVar56[0x16] = 0;
                  uVar59 = 0;
                  puVar37 = (uint *)plVar32[2];
                }
                puVar53 = puVar37;
                if (puVar50 == puVar53) {
                  uVar41 = *(uint *)((long)plVar32 + 0x1c);
                }
                else {
                  uVar41 = *puVar50;
                  puVar53 = puVar50;
                }
              }
              *(ushort *)((long)puVar56 + 0x5a) = (short)uVar41 - uVar59;
              *(uint **)(puVar56 + 0x14) = puVar53;
            }
            puVar56[0x17] = uVar44;
            FUN_031c34c8();
            FUN_031c35ac(*(undefined8 *)(puVar56 + 0x12),uVar82,local_288);
            plVar32 = *(long **)(puVar56 + 0x12);
            lVar36 = plVar32[3];
            iVar27 = *(int *)((long)plVar32 + 0x1c);
            iVar39 = *(int *)(*plVar32 + 8);
            *(long *)(puVar56 + 0x14) = plVar32[2];
            *(short *)(puVar56 + 0x16) = (short)lVar36;
            *(short *)((long)puVar56 + 0x5a) = (short)iVar27;
            puVar56[0x17] = -(iVar27 + iVar39);
            local_2d0[0] = 0;
            local_2d0[1] = 0;
            local_2d0[2] = 0;
            local_2d0[3] = 0;
            param_11 = local_300;
          }
        }
        local_1a8[0] = 0xffffffff;
        local_1b0[0] = 0xffffffff;
        plVar32 = *(long **)(*(long *)(param_1 + 0x40) + (ulong)(byte)(*pauVar52)[8] * 8 + 0x13b8);
        (**(code **)(*plVar32 + 0x18))
                  (plVar32,param_1,local_1e8,pauVar52,plVar33,&local_100,&local_108,local_1a8,
                   local_1b0);
LAB_02f6635c:
        pauVar43 = (undefined1 (*) [16])param_6[1];
        if (pauVar52 != pauVar43) {
          puVar50 = (uint *)**(undefined8 **)(param_7 + 8);
          puVar53 = (uint *)local_2f8[3];
          if (puVar53 == puVar50) {
            iVar27 = (int)local_2f8[4] + 1;
          }
          else {
            if ((puVar53 != (uint *)0x0) && (lVar36 = *local_2f8, lVar36 != 0)) {
              uVar44 = *(uint *)(local_2f8 + 4);
              if (uVar44 == (*puVar53 & 0xffff)) {
                puVar48 = (undefined8 *)local_2f8[2];
                *(undefined8 *)(*(long *)(lVar36 + 0x10) + (long)(int)puVar53[1] * 8) = 0;
                *(undefined1 *)(lVar36 + 0xc) = 1;
                iVar27 = *(int *)(puVar48 + 0xb);
                lVar36 = puVar48[1];
                *(uint **)(lVar36 + (long)iVar27 * 8) = puVar53;
                *(int *)(puVar48 + 0xb) = iVar27 + 1;
                if (*(int *)((long)puVar48 + 0x5c) <= iVar27 + 1) {
                  (**(code **)(*(long *)*puVar48 + 0x28))
                            ((long *)*puVar48,lVar36 + (long)(iVar27 + -5) * 8,6);
                  *(int *)(puVar48 + 0xb) = iVar27 + -5;
                  param_3 = local_2ec;
                }
              }
              else {
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar53,0x10);
                  if (bVar8) {
                    *puVar53 = *puVar53 - uVar44;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
            }
            iVar27 = 1;
            local_2f8[3] = (long)puVar50;
          }
          uVar49 = local_220;
          *(int *)(local_2f8 + 4) = iVar27;
          iVar27 = *(int *)(param_7 + 0x14);
          *(int *)(param_7 + 0x14) = iVar27 + -1;
          if (iVar27 < 2) {
            FUN_031c37e8(param_7);
            plVar33 = *(long **)(param_7 + 8);
          }
          else {
            plVar33 = (long *)(*(long *)(param_7 + 8) + 0x10);
            *(long **)(param_7 + 8) = plVar33;
          }
          goto LAB_02f64964;
        }
        iVar27 = *(int *)((long)param_6 + 0x14);
        *(int *)((long)param_6 + 0x14) = iVar27 + -1;
LAB_02f64938:
        if (iVar27 < 2) {
          FUN_031c3900(param_6);
          pauVar43 = (undefined1 (*) [16])param_6[1];
        }
        else {
          pauVar43 = (undefined1 (*) [16])(*pauVar43 + local_268);
          param_6[1] = (long)pauVar43;
        }
        pauVar46 = local_258;
        if (pauVar43 == (undefined1 (*) [16])0x0) {
          uVar49 = 0xff000000ff000000;
        }
        else {
          uVar49 = (ulong)*(uint *)*pauVar43 & 0xffffff |
                   (ulong)(*(uint *)(*pauVar43 + 4) & 0xffffff) << 0x20;
        }
      }
      else {
        if ((*local_2b8 != '\0') && ((local_2d8 != 0 || (*(uint *)(*pauVar52 + 4) != local_2d4)))) {
          if (local_320 != (long *)0x0) {
            lVar40 = *local_320;
            if (*(code **)(lVar40 + 0x18) != (code *)0x0) {
              (**(code **)(lVar40 + 0x18))("GenerateWorkItems",0x11,*(undefined8 *)(lVar40 + 0x28));
            }
            puVar48 = (undefined8 *)plVar33[2];
            uVar49 = (long)puVar48 + 0x17U & 0xfffffffffffffff8;
            if ((uVar49 <= (ulong)plVar33[3]) && (plVar33[2] = uVar49, puVar48 != (undefined8 *)0x0)
               ) {
              *puVar48 = "TtGenerateWorkItems";
              uVar82 = nn::os::GetSystemTick();
              puVar48[1] = uVar82;
            }
            if (((*(byte *)(lVar40 + 0x38) & 1) != 0) && (plVar33[6] != 0)) {
              puVar48 = (undefined8 *)plVar33[2];
              uVar49 = (long)puVar48 + 0x17U & 0xfffffffffffffff8;
              if ((uVar49 <= (ulong)plVar33[3]) &&
                 (plVar33[2] = uVar49, puVar48 != (undefined8 *)0x0)) {
                *puVar48 = &DAT_03c4e575;
                puVar48[1] = *(undefined8 *)(plVar33[6] + 8);
              }
            }
          }
          goto LAB_02f667d8;
        }
        if (*(int *)(local_298 + 0x18) < 0xec1) {
          puVar53 = (uint *)(*(long *)(local_298 + 0x10) + (long)*(int *)(local_298 + 0x18) + 0x20);
        }
        else {
          puVar53 = (uint *)FUN_031c36f4();
          uVar31 = (ulong)(byte)(*pauVar52)[9];
        }
        param_7 = local_1e0;
        puVar50 = local_1f8;
        uVar49 = local_228;
        param_1 = local_260;
        lVar36 = local_278;
        pauVar43 = pauVar52;
        pauVar46 = pauVar52;
        puVar37 = puVar53;
        puVar38 = puVar53;
        switch((int)uVar31) {
        case 0xe:
          pauVar43 = pauVar52 + 1;
          uVar82 = *(undefined8 *)*pauVar52;
          puVar37 = puVar53 + 4;
          *(undefined8 *)(puVar53 + 2) = *(undefined8 *)(*pauVar52 + 8);
          *(undefined8 *)puVar53 = uVar82;
        case 0xd:
          pauVar46 = pauVar43 + 1;
          uVar82 = *(undefined8 *)*pauVar43;
          puVar38 = puVar37 + 4;
          *(undefined8 *)(puVar37 + 2) = *(undefined8 *)(*pauVar43 + 8);
          *(undefined8 *)puVar37 = uVar82;
        case 0xc:
          pauVar43 = pauVar46 + 1;
          uVar82 = *(undefined8 *)*pauVar46;
          puVar37 = puVar38 + 4;
          *(undefined8 *)(puVar38 + 2) = *(undefined8 *)(*pauVar46 + 8);
          *(undefined8 *)puVar38 = uVar82;
        case 0xb:
          pauVar46 = pauVar43 + 1;
          uVar82 = *(undefined8 *)*pauVar43;
          puVar38 = puVar37 + 4;
          *(undefined8 *)(puVar37 + 2) = *(undefined8 *)(*pauVar43 + 8);
          *(undefined8 *)puVar37 = uVar82;
        case 10:
          pauVar43 = pauVar46 + 1;
          uVar82 = *(undefined8 *)*pauVar46;
          puVar37 = puVar38 + 4;
          *(undefined8 *)(puVar38 + 2) = *(undefined8 *)(*pauVar46 + 8);
          *(undefined8 *)puVar38 = uVar82;
        case 9:
          pauVar46 = pauVar43 + 1;
          uVar82 = *(undefined8 *)*pauVar43;
          puVar38 = puVar37 + 4;
          *(undefined8 *)(puVar37 + 2) = *(undefined8 *)(*pauVar43 + 8);
          *(undefined8 *)puVar37 = uVar82;
        case 8:
          pauVar43 = pauVar46 + 1;
          uVar82 = *(undefined8 *)*pauVar46;
          puVar37 = puVar38 + 4;
          *(undefined8 *)(puVar38 + 2) = *(undefined8 *)(*pauVar46 + 8);
          *(undefined8 *)puVar38 = uVar82;
        case 7:
          pauVar46 = pauVar43 + 1;
          uVar82 = *(undefined8 *)*pauVar43;
          puVar38 = puVar37 + 4;
          *(undefined8 *)(puVar37 + 2) = *(undefined8 *)(*pauVar43 + 8);
          *(undefined8 *)puVar37 = uVar82;
        case 6:
          pauVar43 = pauVar46 + 1;
          uVar82 = *(undefined8 *)*pauVar46;
          puVar37 = puVar38 + 4;
          *(undefined8 *)(puVar38 + 2) = *(undefined8 *)(*pauVar46 + 8);
          *(undefined8 *)puVar38 = uVar82;
        case 5:
          pauVar46 = pauVar43 + 1;
          uVar82 = *(undefined8 *)*pauVar43;
          puVar38 = puVar37 + 4;
          *(undefined8 *)(puVar37 + 2) = *(undefined8 *)(*pauVar43 + 8);
          *(undefined8 *)puVar37 = uVar82;
        case 4:
          pauVar43 = pauVar46 + 1;
          uVar82 = *(undefined8 *)*pauVar46;
          puVar37 = puVar38 + 4;
          *(undefined8 *)(puVar38 + 2) = *(undefined8 *)(*pauVar46 + 8);
          *(undefined8 *)puVar38 = uVar82;
        case 3:
          pauVar46 = pauVar43 + 1;
          uVar82 = *(undefined8 *)*pauVar43;
          puVar38 = puVar37 + 4;
          *(undefined8 *)(puVar37 + 2) = *(undefined8 *)(*pauVar43 + 8);
          *(undefined8 *)puVar37 = uVar82;
        case 2:
          pauVar43 = pauVar46 + 1;
          uVar82 = *(undefined8 *)*pauVar46;
          puVar37 = puVar38 + 4;
          *(undefined8 *)(puVar38 + 2) = *(undefined8 *)(*pauVar46 + 8);
          *(undefined8 *)puVar38 = uVar82;
        case 1:
          auVar66 = *pauVar43;
          *(long *)(puVar37 + 2) = auVar66._8_8_;
          *(long *)puVar37 = auVar66._0_8_;
        }
        local_108 = puVar53[1];
        local_1a8[0] = *puVar53;
        uVar31 = (ulong)local_108 & 0xffffff;
        plVar33 = local_2c8;
        local_238 = puVar53;
        local_218 = uVar55;
        local_68 = uVar47;
        if ((local_28c < (uint)uVar31) ||
           (uVar47 = (ulong)local_1a8[0] & 0xffffff, local_28c < (uint)uVar47)) {
          if (uVar55 <= local_220) {
            plVar33 = local_2a0;
          }
          lVar36 = *(long *)(puVar56 + 0x18);
joined_r0x02f65038:
          if (lVar36 != 0) {
            if (*(char *)((long)puVar56 + 0x7b) == '\0') {
              FUN_02f24e3c(puVar56,local_260,local_1e8);
            }
            else {
              uVar82 = **(undefined8 **)(puVar56 + 0x12);
              *(undefined4 *)(lVar36 + 8) = 0x7777;
              plVar32 = *(long **)(puVar56 + 0x12);
              uVar41 = *(uint *)((long)plVar32 + 0x1c);
              uVar44 = uVar41 + *(int *)(*plVar32 + 8) + puVar56[0x17];
              if (uVar44 != 0) {
                puVar53 = *(uint **)local_288;
                if (puVar53 == (uint *)plVar32[2]) {
                  uVar59 = *(ushort *)((long)puVar56 + 0x5a);
                }
                else {
                  uVar59 = *(ushort *)((long)puVar56 + 0x5a);
                  puVar50 = puVar53;
                  puVar37 = (uint *)plVar32[2];
                  if ((uint)uVar59 == (*puVar53 & 0xffff)) {
                    puVar50 = *(uint **)(puVar53 + 2);
                    puVar56[0x16] = 0;
                    uVar59 = 0;
                    puVar37 = (uint *)plVar32[2];
                  }
                  puVar53 = puVar37;
                  if (puVar50 == puVar53) {
                    uVar41 = *(uint *)((long)plVar32 + 0x1c);
                  }
                  else {
                    uVar41 = *puVar50;
                    puVar53 = puVar50;
                  }
                }
                *(ushort *)((long)puVar56 + 0x5a) = (short)uVar41 - uVar59;
                *(uint **)(puVar56 + 0x14) = puVar53;
              }
              puVar56[0x17] = uVar44;
              FUN_031c34c8();
              FUN_031c35ac(*(undefined8 *)(puVar56 + 0x12),uVar82,local_288);
              plVar32 = *(long **)(puVar56 + 0x12);
              lVar36 = plVar32[3];
              iVar27 = *(int *)((long)plVar32 + 0x1c);
              iVar39 = *(int *)(*plVar32 + 8);
              *(long *)(puVar56 + 0x14) = plVar32[2];
              *(short *)(puVar56 + 0x16) = (short)lVar36;
              *(short *)((long)puVar56 + 0x5a) = (short)iVar27;
              puVar56[0x17] = -(iVar27 + iVar39);
              local_2d0[0] = 0;
              local_2d0[1] = 0;
              local_2d0[2] = 0;
              local_2d0[3] = 0;
              param_11 = local_300;
            }
          }
          local_100 = CONCAT44(local_100._4_4_,0xffffffff);
          local_1b0[0] = 0xffffffff;
          plVar32 = *(long **)(*(long *)(param_1 + 0x40) + (ulong)(byte)local_238[2] * 8 + 0x13b8);
          (**(code **)(*plVar32 + 0x18))
                    (plVar32,param_1,local_1e8,local_238,plVar33,&local_108,local_1a8,&local_100,
                     local_1b0);
LAB_02f66358:
          goto LAB_02f6635c;
        }
        lVar54 = local_278 + uVar31 * 0xc0;
        lVar57 = local_278 + uVar47 * 0xc0;
        uVar41 = *(uint *)(lVar54 + 0x80);
        uVar5 = *(uint *)(lVar57 + 0x80);
        local_2a8 = local_1e8[3] + (ulong)uVar41 * 0x80;
        local_2b0 = local_1e8[3] + (ulong)uVar5 * 0x80;
        Hint_Prefetch(local_2a8,0,0,0);
        Hint_Prefetch(local_2a8 + 0x40,0,0,0);
        Hint_Prefetch(local_2b0,0,0,0);
        Hint_Prefetch(local_2b0 + 0x40,0,0,0);
        uVar42 = *(uint *)(lVar54 + 0x54);
        local_250 = *(uint *)(lVar57 + 0x54);
        uVar59 = *(ushort *)(lVar57 + 0x58) | *(ushort *)(lVar54 + 0x58);
        uVar44 = local_250 & uVar42;
        local_250 = local_250 | uVar42;
        puVar56 = local_1f8;
        local_280 = uVar47;
        local_210 = pauVar52;
        if ((uVar59 & 0xfbfd) == 0) {
          local_340 = local_2c8;
          if (uVar55 <= local_220) {
            local_340 = local_2a0;
          }
          local_318 = (undefined1 (*) [16])(local_278 + uVar31 * 0xc0);
          local_308 = (undefined1 (*) [16])(local_278 + uVar47 * 0xc0);
          if ((uVar44 >> 1 & 1) == 0) {
            local_310 = local_298;
          }
          else {
            if ((*(byte *)((long)puVar53 + 0xf) >> 1 & 1) == 0) {
              local_310 = local_298;
              uVar49 = local_2e8;
              goto LAB_02f64a38;
            }
            puVar53 = *(uint **)(*(long *)(local_1f0 + 0x10) + (long)*(int *)(local_1f0 + 0x18) * 8
                                + -8);
            puVar48 = *(undefined8 **)(local_260 + 0x4e0);
            uVar44 = *puVar53;
            lVar36 = local_1f0;
            puVar56 = puVar53;
            if (uVar44 >> 0x13 < 499) {
            }
            else {
              do {
                uVar44 = *(int *)(puVar48 + 0xb) - 1;
                if (*(int *)(puVar48 + 0xb) < 1) {
                  lVar36 = puVar48[1];
                  (**(code **)(*(long *)*puVar48 + 0x20))((long *)*puVar48,lVar36,6);
                  *(undefined4 *)(puVar48 + 0xb) = 5;
                  puVar51 = (undefined8 *)(lVar36 + 0x28);
                  lVar36 = local_1f0;
                }
                else {
                  *(uint *)(puVar48 + 0xb) = uVar44;
                  puVar51 = (undefined8 *)(puVar48[1] + (ulong)uVar44 * 8);
                }
                puVar53 = (uint *)*puVar51;
                puVar53[4] = 0;
                puVar53[5] = 0;
                puVar53[6] = 0;
                puVar53[7] = 0;
                puVar53[0] = 0;
                puVar53[1] = 0;
                puVar53[2] = 0;
                puVar53[3] = 0;
                puVar53[1] = *(uint *)(lVar36 + 0x18);
                iVar27 = *(int *)(lVar36 + 0x18);
                lVar54 = (long)iVar27;
                if ((int)(*(uint *)(lVar36 + 0x1c) & 0x7fffffff) <= iVar27) {
                  FUN_031c25b4(local_270,PTR_PTR_047d1a50,lVar54 + 1);
                  iVar27 = *(int *)(local_1f0 + 0x18);
                  lVar36 = local_1f0;
                }
                *(uint **)(*(long *)(lVar36 + 0x10) + (long)iVar27 * 8) = puVar53;
                *(int *)(lVar36 + 0x18) = (int)(lVar54 + 1);
                *(uint **)(puVar56 + 2) = puVar53;
                uVar44 = *puVar53;
                puVar56 = puVar53;
              } while (0x1f2 < uVar44 >> 0x13);
              param_11 = local_300;
            }
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar53,0x10);
              if (bVar8) {
                *puVar53 = *puVar53 + 0x80001;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            *(int *)(lVar36 + 8) = *(int *)(lVar36 + 8) + 1;
            *(uint *)((long)puVar53 + (ulong)(uVar44 >> 0x10) + 0x20) = uVar41;
            *(uint *)((long)puVar53 + (ulong)(uVar44 >> 0x10) + 0x24) = uVar5;
            local_310 = local_298;
            uVar49 = local_2e8;
            lVar36 = local_278;
            puVar56 = local_1f8;
            param_3 = local_2ec;
          }
LAB_02f64d98:
          param_7 = local_1e0;
          if ((ushort)local_238[3] == 0) {
LAB_02f65570:
            local_338 = (ulong)*(ushort *)(lVar36 + uVar31 * 0xc0 + 0x8a);
            lVar54 = *(long *)(local_260 + 0x20);
            local_330 = (ulong)*(ushort *)(lVar36 + local_280 * 0xc0 + 0x8a);
            if (*(long *)local_2d0 != 0) {
              if (*(char *)((long)puVar56 + 0x7b) == '\0') {
                FUN_02f24e3c(puVar56,local_260,local_1e8);
              }
              else {
                uVar82 = **(undefined8 **)(puVar56 + 0x12);
                *(undefined4 *)(*(long *)local_2d0 + 8) = 0x7777;
                plVar33 = *(long **)(puVar56 + 0x12);
                uVar41 = *(uint *)((long)plVar33 + 0x1c);
                uVar44 = uVar41 + *(int *)(*plVar33 + 8) + puVar56[0x17];
                if (uVar44 != 0) {
                  puVar53 = *(uint **)local_288;
                  if (puVar53 == (uint *)plVar33[2]) {
                    uVar59 = *(ushort *)((long)puVar56 + 0x5a);
                  }
                  else {
                    uVar59 = *(ushort *)((long)puVar56 + 0x5a);
                    puVar50 = puVar53;
                    puVar37 = (uint *)plVar33[2];
                    if ((uint)uVar59 == (*puVar53 & 0xffff)) {
                      puVar50 = *(uint **)(puVar53 + 2);
                      puVar56[0x16] = 0;
                      uVar59 = 0;
                      puVar37 = (uint *)plVar33[2];
                    }
                    puVar53 = puVar37;
                    if (puVar50 == puVar53) {
                      uVar41 = *(uint *)((long)plVar33 + 0x1c);
                    }
                    else {
                      uVar41 = *puVar50;
                      puVar53 = puVar50;
                    }
                  }
                  *(ushort *)((long)puVar56 + 0x5a) = (short)uVar41 - uVar59;
                  *(uint **)(puVar56 + 0x14) = puVar53;
                }
                puVar56[0x17] = uVar44;
                FUN_031c34c8();
                FUN_031c35ac(*(undefined8 *)(puVar56 + 0x12),uVar82,local_288);
                plVar33 = *(long **)(puVar56 + 0x12);
                lVar57 = plVar33[3];
                iVar27 = *(int *)((long)plVar33 + 0x1c);
                iVar39 = *(int *)(*plVar33 + 8);
                *(long *)(puVar56 + 0x14) = plVar33[2];
                *(short *)(puVar56 + 0x16) = (short)lVar57;
                *(short *)((long)puVar56 + 0x5a) = (short)iVar27;
                puVar56[0x17] = -(iVar27 + iVar39);
                local_2d0[0] = 0;
                local_2d0[1] = 0;
                local_2d0[2] = 0;
                local_2d0[3] = 0;
                param_11 = local_300;
              }
            }
            *(ulong *)(puVar56 + 6) = uVar49;
            *(bool *)((long)puVar56 + 5) = uVar49 == local_228;
            ppuVar22 = &puStack_350;
            if (uVar49 != local_228) {
              ppuVar22 = &local_358;
            }
            plVar33 = *(long **)*ppuVar22;
            *(long **)(puVar56 + 0x12) = plVar33;
            if ((puVar56[2] & local_250) == 0) {
              if (uVar49 == local_228) {
                *(bool *)(puVar56 + 0x1e) = (*(ushort *)((long)local_238 + 10) & 0x90) != 0;
                goto LAB_02f6572c;
              }
              *(undefined1 *)(puVar56 + 0x1e) = 0;
LAB_02f65700:
              *(undefined1 *)((long)puVar56 + 0x79) = 0;
              bVar58 = *(byte *)((long)local_238 + 0xb) >> 6 & 1;
            }
            else {
              *(undefined1 *)(puVar56 + 0x1e) = 1;
              if (uVar49 != local_228) goto LAB_02f65700;
LAB_02f6572c:
              bVar58 = 0;
              *(byte *)((long)puVar56 + 0x79) = *(byte *)((long)local_238 + 10) >> 4 & 1;
            }
            *(byte *)((long)puVar56 + 0x7a) = bVar58;
            iVar39 = *(int *)(*plVar33 + 8);
            lVar57 = plVar33[3];
            iVar27 = *(int *)((long)plVar33 + 0x1c);
            *(long *)(puVar56 + 0x14) = plVar33[2];
            *(short *)(puVar56 + 0x16) = (short)lVar57;
            *(short *)((long)puVar56 + 0x5a) = (short)iVar27;
            puVar56[0x17] = -(iVar27 + iVar39);
            if ((int)plVar33[3] < 0xe91) {
              lVar57 = plVar33[2] + (long)(int)plVar33[3] + 0x20;
            }
            else {
              lVar57 = FUN_031c36f4();
              plVar33 = *(long **)(puVar56 + 0x12);
            }
            *(long *)(puVar56 + 0x18) = lVar57;
            *(int *)(plVar33 + 3) = (int)plVar33[3] + 0x10;
            *(int *)((long)plVar33 + 0x1c) = *(int *)((long)plVar33 + 0x1c) + 1;
            *(uint *)(*(long *)(puVar56 + 0x18) + 4) = local_238[1];
            **(uint **)(puVar56 + 0x18) = *local_238;
            *(undefined4 *)(*(long *)(puVar56 + 0x18) + 8) = 0;
            *(undefined1 *)(*(long *)(puVar56 + 0x18) + 0xe) = 0;
            *(undefined2 *)(*(long *)(puVar56 + 0x18) + 0xc) = *(undefined2 *)((long)local_238 + 10)
            ;
            puVar56[0x1c] = 0;
            uVar44 = *puVar56;
            uVar41 = local_238[1];
            if (uVar44 != uVar41) {
              if ((char)puVar56[1] != '\0') {
                plVar33 = *(long **)(*(long *)(local_260 + 8) + 0x658);
                (**(code **)(*plVar33 + 0x60))
                          (plVar33,local_228,
                           *(long *)(local_260 + 0x500) + ((ulong)uVar44 & 0xffffff) * 0x20);
                *(undefined1 *)(puVar56 + 1) = 0;
                uVar44 = *puVar56;
                uVar41 = local_238[1];
              }
              if ((uVar44 == uVar41) || (uVar49 != local_228)) {
                uVar44 = uVar41;
              }
              else {
                plVar33 = *(long **)(*(long *)(local_260 + 8) + 0x658);
                (**(code **)(*plVar33 + 0x58))
                          (plVar33,local_228,
                           *(long *)(local_260 + 0x500) + (ulong)(uVar41 & 0xffffff) * 0x20);
                *(undefined1 *)(puVar56 + 1) = 1;
                uVar44 = local_238[1];
              }
            }
            plVar33 = local_320;
            *puVar56 = uVar44;
            puVar56[0x1d] = local_250;
            if ((local_344 != 0) && (local_320 != (long *)0x0)) {
              lVar57 = lVar36 + uVar31 * 0xc0;
              uStack_248 = *(undefined8 *)(lVar57 + 0x68);
              uVar82 = *(undefined8 *)(lVar57 + 0x70);
              lVar36 = lVar36 + local_280 * 0xc0;
              local_250 = (uint)*(undefined8 *)(lVar57 + 0x60);
              uStack_24c = (undefined4)((ulong)*(undefined8 *)(lVar57 + 0x60) >> 0x20);
              auVar66 = *(undefined1 (*) [16])(lVar36 + 0x60);
              lVar57 = *local_320;
              auVar85._0_8_ = *(undefined8 *)(lVar36 + 0x70);
              if (*(code **)(lVar57 + 0x18) != (code *)0x0) {
                (**(code **)(lVar57 + 0x18))(&DAT_03c7fb74,0,*(undefined8 *)(lVar57 + 0x28));
              }
              puVar48 = (undefined8 *)plVar33[2];
              uVar55 = (long)puVar48 + 0x17U & 0xfffffffffffffff8;
              if ((uVar55 <= (ulong)plVar33[3]) &&
                 (local_320[2] = uVar55, puVar48 != (undefined8 *)0x0)) {
                *puVar48 = &DAT_03c7fb72;
                uVar62 = nn::os::GetSystemTick();
                puVar48[1] = uVar62;
              }
              if (((*(byte *)(lVar57 + 0x38) & 1) == 0) || (local_320[6] == 0)) {
LAB_02f66590:
                puVar51 = (undefined8 *)local_320[2];
              }
              else {
                puVar48 = (undefined8 *)local_320[2];
                puVar51 = (undefined8 *)((long)puVar48 + 0x17U & 0xfffffffffffffff8);
                if ((undefined8 *)local_320[3] < puVar51) goto LAB_02f66590;
                local_320[2] = (long)puVar51;
                if (puVar48 != (undefined8 *)0x0) {
                  *puVar48 = &DAT_03c4e575;
                  puVar48[1] = *(undefined8 *)(local_320[6] + 8);
                  goto LAB_02f66590;
                }
              }
              lVar36 = local_278;
              param_3 = local_2ec;
              if (puVar51 != (undefined8 *)0x0) {
                puVar48 = (undefined8 *)((long)puVar51 + 0x13U & 0xfffffffffffffffc);
                uVar55 = (long)puVar48 + 0x1fU & 0xfffffffffffffff8;
                if (uVar55 <= (ulong)local_320[3]) {
                  local_320[2] = uVar55;
                  *puVar51 = &DAT_03c1a9df;
                  puVar51[1] = PTR_DAT_047e48d0;
                  if (puVar48 != (undefined8 *)0x0) {
                    auVar86._4_4_ = uStack_24c;
                    auVar86._0_4_ = local_250;
                    auVar86._8_8_ = uStack_248;
                    uVar81 = (undefined4)((ulong)uStack_248 >> 0x20);
                    auVar84._12_4_ = uVar81;
                    auVar84._8_4_ = uVar81;
                    auVar84._0_8_ = uVar82;
                    auVar85[0xc] = auVar66[0xc];
                    auVar85._8_4_ = auVar66._12_4_;
                    auVar85[0xd] = auVar66[0xd];
                    auVar85[0xe] = auVar66[0xe];
                    auVar85[0xf] = auVar66[0xf];
                    auVar65 = NEON_fmax(auVar84,auVar85,4);
                    *puVar48 = auVar65._0_8_;
                    *(int *)(puVar48 + 1) = auVar65._8_4_;
                    auVar66 = NEON_fmin(auVar86,auVar66,4);
                    *(long *)((long)puVar48 + 0xc) = auVar66._0_8_;
                    *(int *)((long)puVar48 + 0x14) = auVar66._8_4_;
                  }
                }
              }
            }
            uVar55 = local_218;
            puVar53 = local_238;
            param_1 = local_260;
            lVar57 = local_310;
            local_158 = lVar54 + local_338 * 0x50;
            Hint_Prefetch(local_318 + 8,0,0,0);
            Hint_Prefetch(local_318 + 0xc,0,0,0);
            Hint_Prefetch(local_308 + 8,0,0,0);
            Hint_Prefetch(local_308 + 0xc,0,0,0);
            local_168 = local_318;
            local_148 = *(long *)(lVar36 + uVar31 * 0xc0 + 0x78);
            if ((local_148 == 0) || (*(char *)(local_148 + 0x18) != '\x15')) {
              local_150 = 0xffffffff;
            }
            else {
              bVar58 = *(byte *)((long)local_238 + 0xe) >> 5;
              plVar33 = (long *)(local_148 + (ulong)bVar58 * 8 + 0x48);
              lVar34 = *plVar33;
              local_148 = 0;
              if (lVar34 != 0) {
                local_148 = lVar34 + (long)plVar33;
              }
              local_150 = (uint)bVar58 << 0x1d | 0x1fffffff;
            }
            local_1a0 = local_308;
            local_190 = lVar54 + local_330 * 0x50;
            local_180 = *(long *)(lVar36 + local_280 * 0xc0 + 0x78);
            if ((local_180 == 0) || (*(char *)(local_180 + 0x18) != '\x15')) {
              local_188 = 0xffffffff;
            }
            else {
              uVar44 = (uint)(*(byte *)((long)local_238 + 0xe) >> 2);
              plVar33 = (long *)(local_180 + (ulong)(uVar44 & 7) * 8 + 0x48);
              lVar36 = *plVar33;
              local_180 = 0;
              if (lVar36 != 0) {
                local_180 = lVar36 + (long)plVar33;
              }
              local_188 = uVar44 << 0x1d | 0x1fffffff;
            }
            local_160 = local_2a8;
            local_138 = local_318;
            local_198 = local_2b0;
            local_170 = local_308;
            if ((ulong)(byte)local_238[2] == 2) {
              uVar47 = *(ulong *)(*(long *)(local_260 + 0x40) + 0x13c8);
              iVar27 = *(int *)(local_328 + 0x738);
              local_178 = local_180;
              local_140 = local_148;
              if (iVar27 != 0) {
                local_398 = nn::os::GetSystemTick();
              }
              uVar49 = local_228;
              if ((((*(byte *)((long)local_238 + 9) < 3) ||
                   (lVar36 = *(long *)(puVar56 + 6), lVar36 == 0)) ||
                  (*(long *)(local_238 + 8) == 0)) ||
                 ((*(byte *)((long)local_238 + 0xb) >> 2 & 1) == 0)) {
LAB_02f65e80:
                puVar48 = *(undefined8 **)(puVar56 + 0x18);
                lVar36 = *(long *)(puVar56 + 0x12);
                iVar39 = *(int *)(lVar36 + 0x18);
                if (*(char *)((long)puVar48 + 0xe) != '\0') {
                  if (iVar39 < 0xf91) {
                    puVar51 = (undefined8 *)(*(long *)(lVar36 + 0x10) + (long)iVar39 + 0x20);
                  }
                  else {
                    puVar51 = (undefined8 *)FUN_031c36f4(lVar36);
                  }
                  uVar82 = puVar48[1];
                  *puVar51 = *puVar48;
                  puVar51[1] = uVar82;
                  *(undefined8 **)local_2d0 = puVar51;
                  *(undefined4 *)(puVar51 + 1) = 0;
                  *(undefined1 *)((long)puVar51 + 0xe) = 0;
                  iVar39 = *(int *)(lVar36 + 0x18) + 0x10;
                  *(int *)(lVar36 + 0x18) = iVar39;
                  *(int *)(lVar36 + 0x1c) = *(int *)(lVar36 + 0x1c) + 1;
                }
                param_3 = local_2ec;
                if (iVar39 < 0xda1) {
                  lVar54 = *(long *)(lVar36 + 0x10) + (long)iVar39 + 0x20;
                }
                else {
                  lVar54 = FUN_031c36f4(lVar36);
                }
                if (*(int *)(local_328 + 0x738) != 0) {
                  local_218 = uVar47;
                  nn::os::GetSystemTick();
                  uVar47 = local_218;
                }
                uVar59 = *(ushort *)local_1a0[9];
                uVar62 = NEON_scvtf((ulong)CONCAT24(*(ushort *)local_168[9],
                                                    (uint)*(ushort *)local_168[9]),4);
                uVar82 = NEON_scvtf((ulong)CONCAT15((char)(uVar59 >> 8),
                                                    CONCAT14((char)uVar59,(uint)uVar59)),4);
                lStack_e8 = CONCAT44((float)((ulong)*(undefined8 *)(local_1e8[1] + 0x50) >> 0x20) *
                                     ((float)((ulong)uVar62 >> 0x20) +
                                     (float)((ulong)uVar82 >> 0x20)),
                                     (float)*(undefined8 *)(local_1e8[1] + 0x50) *
                                     ((float)uVar62 + (float)uVar82));
                fVar61 = *(float *)(local_140 + 0x20);
                local_100 = CONCAT44(fVar61,fVar61);
                fVar68 = *(float *)(local_178 + 0x20);
                uStack_f8 = CONCAT17((char)((uint)fVar68 >> 0x18),
                                     CONCAT16((char)((uint)fVar68 >> 0x10),
                                              CONCAT15((char)((uint)fVar68 >> 8),
                                                       CONCAT14(SUB41(fVar68,0),fVar68))));
                local_f0 = CONCAT44(fVar61 + fVar68,fVar61 + fVar68);
                uVar82 = *(undefined8 *)(local_170[1] + 8);
                uVar71 = (undefined1)((ulong)uVar82 >> 8);
                uVar72 = (undefined1)((ulong)uVar82 >> 0x10);
                uVar73 = (undefined1)((ulong)uVar82 >> 0x18);
                uVar74 = (undefined1)((ulong)uVar82 >> 0x20);
                uVar75 = (undefined1)((ulong)uVar82 >> 0x28);
                uVar76 = (undefined1)((ulong)uVar82 >> 0x30);
                uVar77 = (undefined1)((ulong)uVar82 >> 0x38);
                auVar10[9] = uVar71;
                auVar10._0_9_ = *(unkbyte9 *)local_170[1];
                auVar10[10] = uVar72;
                auVar10[0xb] = uVar73;
                auVar10[0xc] = uVar74;
                auVar10[0xd] = uVar75;
                auVar10[0xe] = uVar76;
                auVar10[0xf] = uVar77;
                auVar11[9] = uVar71;
                auVar11._0_9_ = *(unkbyte9 *)local_170[1];
                auVar11[10] = uVar72;
                auVar11[0xb] = uVar73;
                auVar11[0xc] = uVar74;
                auVar11[0xd] = uVar75;
                auVar11[0xe] = uVar76;
                auVar11[0xf] = uVar77;
                NEON_ext(auVar10,auVar11,8,1);
                NEON_ext(*local_170,*local_170,8,1);
                NEON_ext(local_170[2],local_170[2],8,1);
                auVar66 = *local_170;
                pauVar43 = local_170 + 1;
                uVar82 = *(undefined8 *)(local_170[1] + 8);
                uVar71 = (undefined1)((ulong)uVar82 >> 8);
                uVar72 = (undefined1)((ulong)uVar82 >> 0x10);
                uVar73 = (undefined1)((ulong)uVar82 >> 0x18);
                uVar74 = (undefined1)((ulong)uVar82 >> 0x20);
                uVar75 = (undefined1)((ulong)uVar82 >> 0x28);
                uVar76 = (undefined1)((ulong)uVar82 >> 0x30);
                uVar77 = (undefined1)((ulong)uVar82 >> 0x38);
                auVar65 = local_170[2];
                auVar12[9] = uVar71;
                auVar12._0_9_ = *(unkbyte9 *)*pauVar43;
                auVar12[10] = uVar72;
                auVar12[0xb] = uVar73;
                auVar12[0xc] = uVar74;
                auVar12[0xd] = uVar75;
                auVar12[0xe] = uVar76;
                auVar12[0xf] = uVar77;
                auVar13[9] = uVar71;
                auVar13._0_9_ = *(unkbyte9 *)*pauVar43;
                auVar13[10] = uVar72;
                auVar13[0xb] = uVar73;
                auVar13[0xc] = uVar74;
                auVar13[0xd] = uVar75;
                auVar13[0xe] = uVar76;
                auVar13[0xf] = uVar77;
                auVar85 = NEON_ext(auVar12,auVar13,8,1);
                auVar83 = NEON_ext(auVar66,auVar66,8,1);
                auVar86 = NEON_ext(auVar65,auVar65,8,1);
                fVar61 = (float)*(undefined8 *)local_138[2];
                fVar68 = (float)((ulong)*(undefined8 *)local_138[2] >> 0x20);
                fVar70 = (float)*(undefined8 *)(local_138[2] + 8);
                uStack_b8 = CONCAT44(auVar86._4_4_ * fVar70 +
                                     auVar65._4_4_ * fVar61 + auVar86._4_4_ * fVar68,
                                     auVar86._0_4_ * fVar70 +
                                     auVar65._0_4_ * fVar61 + auVar65._4_4_ * fVar68);
                local_c0 = CONCAT44(auVar85._0_4_ * fVar70 +
                                    (float)*(undefined8 *)*pauVar43 * fVar61 +
                                    (float)((ulong)*(undefined8 *)*pauVar43 >> 0x20) * fVar68,
                                    auVar83._0_4_ * fVar70 +
                                    auVar66._0_4_ * fVar61 + auVar66._4_4_ * fVar68);
                auVar66 = *local_170;
                pauVar43 = local_170 + 1;
                uVar82 = *(undefined8 *)(local_170[1] + 8);
                uVar71 = (undefined1)((ulong)uVar82 >> 8);
                uVar72 = (undefined1)((ulong)uVar82 >> 0x10);
                uVar73 = (undefined1)((ulong)uVar82 >> 0x18);
                uVar74 = (undefined1)((ulong)uVar82 >> 0x20);
                uVar75 = (undefined1)((ulong)uVar82 >> 0x28);
                uVar76 = (undefined1)((ulong)uVar82 >> 0x30);
                uVar77 = (undefined1)((ulong)uVar82 >> 0x38);
                auVar65 = local_170[2];
                auVar14[9] = uVar71;
                auVar14._0_9_ = *(unkbyte9 *)*pauVar43;
                auVar14[10] = uVar72;
                auVar14[0xb] = uVar73;
                auVar14[0xc] = uVar74;
                auVar14[0xd] = uVar75;
                auVar14[0xe] = uVar76;
                auVar14[0xf] = uVar77;
                auVar15[9] = uVar71;
                auVar15._0_9_ = *(unkbyte9 *)*pauVar43;
                auVar15[10] = uVar72;
                auVar15[0xb] = uVar73;
                auVar15[0xc] = uVar74;
                auVar15[0xd] = uVar75;
                auVar15[0xe] = uVar76;
                auVar15[0xf] = uVar77;
                auVar85 = NEON_ext(auVar14,auVar15,8,1);
                auVar83 = NEON_ext(auVar66,auVar66,8,1);
                auVar86 = NEON_ext(auVar65,auVar65,8,1);
                fVar61 = (float)*(undefined8 *)local_138[1];
                fVar68 = (float)((ulong)*(undefined8 *)local_138[1] >> 0x20);
                fVar70 = (float)*(undefined8 *)(local_138[1] + 8);
                fStack_c8 = auVar86._0_4_ * fVar70 + auVar65._0_4_ * fVar61 + auVar65._4_4_ * fVar68
                ;
                fStack_c4 = auVar86._4_4_ * fVar70 + auVar65._4_4_ * fVar61 + auVar86._4_4_ * fVar68
                ;
                local_d0 = (undefined1 (*) [16])
                           CONCAT44(auVar85._0_4_ * fVar70 +
                                    (float)*(undefined8 *)*pauVar43 * fVar61 +
                                    (float)((ulong)*(undefined8 *)*pauVar43 >> 0x20) * fVar68,
                                    auVar83._0_4_ * fVar70 +
                                    auVar66._0_4_ * fVar61 + auVar66._4_4_ * fVar68);
                auVar66 = *local_170;
                pauVar43 = local_170 + 1;
                uVar82 = *(undefined8 *)(local_170[1] + 8);
                uVar71 = (undefined1)((ulong)uVar82 >> 8);
                uVar72 = (undefined1)((ulong)uVar82 >> 0x10);
                uVar73 = (undefined1)((ulong)uVar82 >> 0x18);
                uVar74 = (undefined1)((ulong)uVar82 >> 0x20);
                uVar75 = (undefined1)((ulong)uVar82 >> 0x28);
                uVar76 = (undefined1)((ulong)uVar82 >> 0x30);
                uVar77 = (undefined1)((ulong)uVar82 >> 0x38);
                auVar65 = local_170[2];
                auVar16[9] = uVar71;
                auVar16._0_9_ = *(unkbyte9 *)*pauVar43;
                auVar16[10] = uVar72;
                auVar16[0xb] = uVar73;
                auVar16[0xc] = uVar74;
                auVar16[0xd] = uVar75;
                auVar16[0xe] = uVar76;
                auVar16[0xf] = uVar77;
                auVar17[9] = uVar71;
                auVar17._0_9_ = *(unkbyte9 *)*pauVar43;
                auVar17[10] = uVar72;
                auVar17[0xb] = uVar73;
                auVar17[0xc] = uVar74;
                auVar17[0xd] = uVar75;
                auVar17[0xe] = uVar76;
                auVar17[0xf] = uVar77;
                auVar85 = NEON_ext(auVar16,auVar17,8,1);
                auVar83 = NEON_ext(auVar66,auVar66,8,1);
                auVar86 = NEON_ext(auVar65,auVar65,8,1);
                fVar61 = (float)*(undefined8 *)*local_138;
                fVar68 = (float)((ulong)*(undefined8 *)*local_138 >> 0x20);
                fVar70 = (float)*(undefined8 *)(*local_138 + 8);
                local_e0 = auVar83._0_4_ * fVar70 + auVar66._0_4_ * fVar61 + auVar66._4_4_ * fVar68;
                fStack_dc = auVar85._0_4_ * fVar70 +
                            (float)*(undefined8 *)*pauVar43 * fVar61 +
                            (float)((ulong)*(undefined8 *)*pauVar43 >> 0x20) * fVar68;
                uStack_d8 = (undefined1 (*) [16])
                            CONCAT44(auVar86._4_4_ * fVar70 +
                                     auVar65._4_4_ * fVar61 + auVar86._4_4_ * fVar68,
                                     auVar86._0_4_ * fVar70 +
                                     auVar65._0_4_ * fVar61 + auVar65._4_4_ * fVar68);
                auVar66 = local_170[2];
                fVar61 = (*(float *)local_138[3] - *(float *)local_170[3]) +
                         ((float)*(undefined8 *)local_138[4] - *(float *)local_170[4]);
                fVar68 = (*(float *)(local_138[3] + 4) - *(float *)(local_170[3] + 4)) +
                         ((float)((ulong)*(undefined8 *)local_138[4] >> 0x20) -
                         *(float *)(local_170[4] + 4));
                fVar70 = (*(float *)(local_138[3] + 8) - *(float *)(local_170[3] + 8)) +
                         ((float)*(undefined8 *)(local_138[4] + 8) - *(float *)(local_170[4] + 8));
                uVar82 = *(undefined8 *)(*local_170 + 8);
                uVar71 = (undefined1)((ulong)uVar82 >> 8);
                uVar72 = (undefined1)((ulong)uVar82 >> 0x10);
                uVar73 = (undefined1)((ulong)uVar82 >> 0x18);
                uVar74 = (undefined1)((ulong)uVar82 >> 0x20);
                uVar75 = (undefined1)((ulong)uVar82 >> 0x28);
                uVar76 = (undefined1)((ulong)uVar82 >> 0x30);
                uVar77 = (undefined1)((ulong)uVar82 >> 0x38);
                auVar65 = local_170[1];
                auVar85 = NEON_ext(auVar65,auVar65,8,1);
                auVar18[9] = uVar71;
                auVar18._0_9_ = *(unkbyte9 *)*local_170;
                auVar18[10] = uVar72;
                auVar18[0xb] = uVar73;
                auVar18[0xc] = uVar74;
                auVar18[0xd] = uVar75;
                auVar18[0xe] = uVar76;
                auVar18[0xf] = uVar77;
                auVar19[9] = uVar71;
                auVar19._0_9_ = *(unkbyte9 *)*local_170;
                auVar19[10] = uVar72;
                auVar19[0xb] = uVar73;
                auVar19[0xc] = uVar74;
                auVar19[0xd] = uVar75;
                auVar19[0xe] = uVar76;
                auVar19[0xf] = uVar77;
                auVar83 = NEON_ext(auVar18,auVar19,8,1);
                auVar86 = NEON_ext(auVar66,auVar66,8,1);
                auVar64._0_8_ =
                     CONCAT44(auVar85._0_4_ * fVar70 +
                              auVar65._0_4_ * fVar61 + auVar65._4_4_ * fVar68,
                              auVar83._0_4_ * fVar70 +
                              (float)*(undefined8 *)*local_170 * fVar61 +
                              (float)((ulong)*(undefined8 *)*local_170 >> 0x20) * fVar68);
                auVar64._8_4_ =
                     auVar86._0_4_ * fVar70 + auVar66._0_4_ * fVar61 + auVar66._4_4_ * fVar68;
                auVar64._12_4_ =
                     auVar86._4_4_ * fVar70 + auVar66._4_4_ * fVar61 + auVar86._4_4_ * fVar68;
                uStack_a8 = auVar64._8_8_;
                local_a0 = local_238;
                local_98 = *(undefined8 *)(puVar56 + 4);
                plVar33 = *(long **)(uVar47 + (ulong)*(byte *)(local_140 + 0x18) * 0xf8 +
                                     (ulong)*(byte *)(local_178 + 0x18) * 8 + 0x10);
                local_b0 = auVar64._0_8_;
                local_90 = lVar40;
                uVar44 = (**(code **)(*plVar33 + 0x20))
                                   (plVar33,param_1,local_1e8,&local_100,&local_168,&local_1a0,
                                    local_238,lVar54,&local_108);
                if (iVar27 != 0) {
                  local_218 = CONCAT44(uStack_104,local_108);
                  lVar54 = nn::os::GetSystemTick();
                  *(long *)(local_218 + 8) = (lVar54 - local_398) + *(long *)(local_218 + 8);
                  *(int *)(local_218 + 0x10) = *(int *)(local_218 + 0x10) + 1;
                }
                pauVar52 = local_210;
                if (0 < (int)uVar44) {
                  lVar54 = *(long *)(lVar36 + 0x10);
                  if (*(long *)(puVar56 + 0x1a) == 0) {
                    iVar39 = *(int *)(lVar36 + 0x18);
                    *(long *)(puVar56 + 0x1a) = lVar54 + iVar39 + 0x20;
                  }
                  else {
                    iVar39 = *(int *)(lVar36 + 0x18);
                  }
                  uVar41 = puVar56[0x1c];
                  lVar54 = lVar54 + iVar39;
                  if (uVar44 == 1) {
                    uVar47 = 0;
                  }
                  else {
                    uVar47 = 0;
                    plVar33 = (long *)(lVar54 + 0x1c8);
                    do {
                      plVar32 = plVar33 + -0x20;
                      plVar3 = plVar33 + -0x1f;
                      uVar47 = uVar47 + 2;
                      lVar57 = *plVar33;
                      plVar4 = plVar33 + 1;
                      plVar33 = plVar33 + 0x40;
                      uVar41 = *(uint *)(lVar57 + 0x14) |
                               *(uint *)(*plVar32 + 0x14) | uVar41 | *(uint *)(*plVar3 + 0x14) |
                               *(uint *)(*plVar4 + 0x14);
                    } while (((ulong)uVar44 & 0xfffffffe) != uVar47);
                  }
                  if ((uVar44 & 1) != 0) {
                    lVar54 = lVar54 + 0x20 + uVar47 * 0x100;
                    uVar41 = *(uint *)(*(long *)(lVar54 + 0xa8) + 0x14) | uVar41 |
                             *(uint *)(*(long *)(lVar54 + 0xb0) + 0x14);
                  }
                  puVar56[0x1c] = uVar41;
                  *(uint *)(lVar36 + 0x18) = iVar39 + uVar44 * 0x100;
                  *(int *)(lVar36 + 0x1c) = *(int *)(lVar36 + 0x1c) + 1;
                  *(uint *)(*(long *)(puVar56 + 0x18) + 8) =
                       *(int *)(*(long *)(puVar56 + 0x18) + 8) + uVar44;
                  *(undefined1 *)((long)puVar56 + 0x7b) = 0;
                  if (1 < (int)uVar44) {
                    *(uint *)(lVar36 + 0x1c) = uVar44 + *(int *)(lVar36 + 0x1c) + -1;
                  }
                }
                *(byte *)((long)local_238 + 0xf) =
                     *(byte *)((long)local_238 + 0xf) & 0xf7 | (0 < (int)uVar44) << 3;
                if (iVar27 != 0) {
                  lVar36 = nn::os::GetSystemTick();
                  *(long *)(local_328 + 8) = (lVar36 - local_398) + *(long *)(local_328 + 8);
                  *(int *)(local_328 + 0x10) = *(int *)(local_328 + 0x10) + 1;
                }
                param_11 = local_300;
              }
              else {
                uVar41 = (uint)*(byte *)((long)local_238 + 0x96) * 0x100;
                uVar44 = (uint)(ushort)local_238[0x25];
                if (uVar41 <= (ushort)local_238[0x25]) {
                  uVar44 = uVar41;
                }
                iVar39 = uVar44 - ((uint)*(ushort *)(local_1a0[5] + 10) +
                                  (uint)*(ushort *)(local_168[5] + 10));
                if (iVar39 < 1) {
                  *(int *)(local_328 + 0x30) = *(int *)(local_328 + 0x30) + 1;
                  *(undefined2 *)((long)local_238 + 0x86) = 0;
                  goto LAB_02f65e80;
                }
                uVar59 = *(ushort *)(local_1a0[5] + 8) | *(ushort *)(local_168[5] + 8);
                if ((uVar59 >> 2 & 1) != 0) {
LAB_02f65e78:
                  *(undefined2 *)((long)local_238 + 0x86) = 0;
                  goto LAB_02f65e80;
                }
                lVar54 = local_1e8[1];
                if (((uVar59 >> 10 & 1) != 0) &&
                   (((short)local_238[0xf] != 0x3f80 ||
                    ((*(byte *)((long)local_238 + 0x2e) >> 5 & 1) != 0)))) {
                  uVar59 = *(ushort *)((long)local_238 + 0x86);
                  fVar78 = (float)*(undefined8 *)(local_160 + 0x38) -
                           (float)*(undefined8 *)(local_198 + 0x38);
                  fVar80 = (float)((ulong)*(undefined8 *)(local_160 + 0x38) >> 0x20) -
                           (float)((ulong)*(undefined8 *)(local_198 + 0x38) >> 0x20);
                  fVar68 = (float)((ulong)*(undefined8 *)(local_160 + 0x30) >> 0x20) -
                           (float)((ulong)*(undefined8 *)(local_198 + 0x30) >> 0x20);
                  fVar61 = *(float *)(lVar54 + 0x20);
                  fVar70 = (float)*(undefined8 *)(lVar54 + 0x48);
                  if (uVar59 == 0) {
                    fVar20 = *(float *)(*(long *)(param_1 + 0x10) +
                                        (ulong)(byte)local_168[8][9] * 0x50 + 0x24) *
                             (float)((uint)*(ushort *)(local_168[9] + 4) << 0x10);
                    fVar79 = *(float *)(*(long *)(param_1 + 0x10) +
                                        (ulong)(byte)local_1a0[8][9] * 0x50 + 0x24) *
                             (float)((uint)*(ushort *)(local_1a0[9] + 4) << 0x10);
                    uVar82 = NEON_fmin(CONCAT17((char)((uint)fVar20 >> 0x18),
                                                CONCAT16((char)((uint)fVar20 >> 0x10),
                                                         CONCAT15((char)((uint)fVar20 >> 8),
                                                                  CONCAT14(SUB41(fVar20,0),fVar20)))
                                               ),CONCAT44(fVar79,fVar79),4);
                    auVar63._0_8_ =
                         CONCAT44((int)((float)((ulong)*(undefined8 *)(lVar54 + 0x48) >> 0x20) *
                                       (float)((ulong)uVar82 >> 0x20)),(int)(fVar70 * (float)uVar82)
                                 );
                    auVar63._8_8_ = auVar63._0_8_;
                    uVar82 = NEON_sqxtun(auVar63._0_8_,auVar63,4);
                    uVar59 = (ushort)uVar82;
                    *(ushort *)((long)local_238 + 0x86) = uVar59;
                  }
                  iVar21 = ~(int)(fVar61 * fVar70 * 1.03 *
                                 (float)(((int)(fVar78 * fVar78 + fVar80 * fVar80 + fVar68 * fVar68)
                                         >> 1) + 0x1fbb4000)) + (uint)uVar59;
                  if (iVar21 < 1) {
                    *(int *)(local_328 + 0x34) = *(int *)(local_328 + 0x34) + 1;
                    goto LAB_02f65e78;
                  }
                  *(short *)((long)local_238 + 0x86) = (short)iVar21;
                }
                *(short *)(local_238 + 0x25) = (short)iVar39;
                if ((*(char *)((long)puVar56 + 0x79) == '\0') &&
                   ((*(char *)((long)puVar56 + 0x7a) == '\0' ||
                    (*(short *)((long)local_238 + 0x9a) == -1)))) {
                  plVar33 = *(long **)(*(long *)(param_1 + 8) + 0x658);
                  (**(code **)(*plVar33 + 0x68))
                            (plVar33,param_1,lVar54,local_238,&local_168,&local_1a0,0,
                             *(undefined8 *)(puVar56 + 4),lVar36);
                }
                else {
                  puVar51 = *(undefined8 **)local_2d0;
                  puVar48 = puVar51;
                  if (*(char *)((long)puVar51 + 0xe) == '\0') {
                    if (*(int *)(puVar51 + 1) != 0) {
                      lVar36 = *(long *)(puVar56 + 0x12);
                      if (*(int *)(lVar36 + 0x18) < 0xf91) {
                        puVar48 = (undefined8 *)
                                  (*(long *)(lVar36 + 0x10) + (long)*(int *)(lVar36 + 0x18) + 0x20);
                      }
                      else {
                        puVar48 = (undefined8 *)FUN_031c36f4(lVar36);
                      }
                      uVar82 = puVar51[1];
                      *puVar48 = *puVar51;
                      puVar48[1] = uVar82;
                      *(undefined8 **)local_2d0 = puVar48;
                      *(int *)(lVar36 + 0x18) = *(int *)(lVar36 + 0x18) + 0x10;
                      *(int *)(lVar36 + 0x1c) = *(int *)(lVar36 + 0x1c) + 1;
                    }
                    iVar39 = 1;
                    *(undefined1 *)((long)puVar48 + 0xe) = 1;
                  }
                  else {
                    iVar39 = *(int *)(puVar51 + 1) + 1;
                  }
                  *(int *)(puVar48 + 1) = iVar39;
                  *(undefined1 *)((long)puVar56 + 0x7b) = 0;
                  lVar36 = local_158 - *(long *)(param_1 + 0x20);
                  lVar57 = *(long *)(puVar56 + 0x12);
                  lVar54 = local_190 - *(long *)(param_1 + 0x20);
                  if (*(int *)(lVar57 + 0x18) < 0xf91) {
                    puVar48 = (undefined8 *)
                              (*(long *)(lVar57 + 0x10) + (long)*(int *)(lVar57 + 0x18) + 0x20);
                  }
                  else {
                    puVar48 = (undefined8 *)FUN_031c36f4(lVar57);
                  }
                  *puVar48 = local_238;
                  *(short *)(puVar48 + 1) = (short)(lVar36 >> 4) * -0x3333;
                  *(short *)((long)puVar48 + 10) = (short)(lVar54 >> 4) * -0x3333;
                  *(int *)(lVar57 + 0x18) = *(int *)(lVar57 + 0x18) + 0x10;
                  *(int *)(lVar57 + 0x1c) = *(int *)(lVar57 + 0x1c) + 1;
                  param_11 = local_300;
                  param_3 = local_2ec;
                }
                pauVar52 = local_210;
                if (iVar27 != 0) {
                  lVar36 = nn::os::GetSystemTick();
                  *(long *)(local_328 + 8) = *(long *)(local_328 + 8) + (lVar36 - local_398);
                  *(int *)(local_328 + 0x10) = *(int *)(local_328 + 0x10) + 1;
                  *(long *)(local_328 + 0x40) = *(long *)(local_328 + 0x40) + (lVar36 - local_398);
                  *(int *)(local_328 + 0x48) = *(int *)(local_328 + 0x48) + 1;
                }
              }
              puVar53 = local_238;
            }
            else {
              plVar33 = *(long **)(*(long *)(local_260 + 0x40) + (ulong)(byte)local_238[2] * 8 +
                                  0x13b8);
              if ((int)plVar33[1] == 0) {
                (**(code **)(*plVar33 + 0x10))
                          (plVar33,local_260,local_1e8,&local_168,local_148,&local_1a0,local_180,
                           local_238,uVar49);
              }
              else {
                plVar32 = (long *)(local_310 + 0x28);
                uVar44 = *(uint *)(local_310 + 0x44);
                iVar27 = uVar44 + *(int *)(*plVar32 + 8);
                local_218 = CONCAT44(local_218._4_4_,*(undefined4 *)(local_310 + 0x40));
                puVar50 = *(uint **)(local_310 + 0x38);
                (**(code **)(*plVar33 + 0x28))
                          (plVar33,local_260,local_1e8,&local_168,&local_1a0,local_238,local_340,
                           plVar32,local_130,uVar49,puVar56,local_328,0);
                *(uint **)(puVar53 + 8) = puVar50;
                *(short *)((long)puVar53 + 0x2a) = (short)uVar44;
                puVar53[0xb] = -iVar27;
                *(short *)(puVar53 + 10) = (short)local_218;
                uVar41 = *(uint *)(lVar57 + 0x44);
                uVar5 = (uVar41 + *(int *)(*plVar32 + 8)) - iVar27;
                if (uVar5 != 0) {
                  puVar53 = puVar50;
                  if (*(uint **)(local_310 + 0x38) != puVar50) {
                    if ((uVar44 & 0xffff) == (*puVar50 & 0xffff)) {
                      uVar44 = 0;
                      puVar50 = *(uint **)(puVar50 + 2);
                      local_238[10] = 0;
                      puVar53 = *(uint **)(local_310 + 0x38);
                    }
                    else {
                      puVar53 = *(uint **)(local_310 + 0x38);
                    }
                    if (puVar50 == puVar53) {
                      uVar41 = *(uint *)(local_310 + 0x44);
                    }
                    else {
                      uVar41 = *puVar50;
                      puVar53 = puVar50;
                    }
                  }
                  *(short *)((long)local_238 + 0x2a) = (short)uVar41 - (short)uVar44;
                  *(uint **)(local_238 + 8) = puVar53;
                  puVar53 = local_238;
                }
                puVar53[0xb] = uVar5;
                param_6 = local_208;
                param_11 = local_300;
                param_3 = local_2ec;
              }
              pauVar52 = local_210;
              uVar49 = local_228;
            }
            if (puVar53[1] != local_2d4) {
              local_2d8 = (*(ushort *)((long)local_238 + 10) >> 7 ^ 0xffffffff) & 1;
              local_2d4 = puVar53[1];
            }
            puVar50 = puVar56;
            if (uVar28 != 0) {
              lVar36 = *local_320;
              if (((*(byte *)(lVar36 + 0x38) & 1) == 0) || (local_320[6] == 0)) {
LAB_02f662ec:
                puVar51 = (undefined8 *)local_320[2];
              }
              else {
                puVar48 = (undefined8 *)local_320[2];
                puVar51 = (undefined8 *)((long)puVar48 + 0x17U & 0xfffffffffffffff8);
                if ((undefined8 *)local_320[3] < puVar51) goto LAB_02f662ec;
                local_320[2] = (long)puVar51;
                if (puVar48 != (undefined8 *)0x0) {
                  *puVar48 = &DAT_03c4e575;
                  puVar48[1] = *(undefined8 *)(local_320[6] + 8);
                  goto LAB_02f662ec;
                }
              }
              uVar47 = (long)puVar51 + 0x17U & 0xfffffffffffffff8;
              if ((uVar47 <= (ulong)local_320[3]) &&
                 (local_320[2] = uVar47, puVar51 != (undefined8 *)0x0)) {
                *puVar51 = &DAT_03c2d363;
                uVar82 = nn::os::GetSystemTick();
                puVar51[1] = uVar82;
              }
              if (*(code **)(lVar36 + 0x20) != (code *)0x0) {
                (**(code **)(lVar36 + 0x20))(*(undefined8 *)(lVar36 + 0x28));
              }
              pauVar52 = local_210;
            }
          }
          else {
            if (((char)local_238[2] == '\x02') && ((local_238[6] & 0xffffff) != 0x7f7f7f)) {
              uVar82 = *(undefined8 *)(local_238 + 6);
              fVar61 = (float)((ulong)*(undefined8 *)(local_2b0 + 0x30) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(local_2a8 + 0x30) >> 0x20);
              bVar58 = (byte)((ulong)uVar82 >> 8);
              auVar83._0_4_ = (CONCAT12(bVar58,(ushort)(byte)uVar82) & 0xffff) - 0x7f;
              auVar83._4_4_ = bVar58 - 0x7f;
              auVar83._8_4_ = (byte)((ulong)uVar82 >> 0x10) - 0x7f;
              auVar83._12_4_ = (byte)((ulong)uVar82 >> 0x18) - 0x7f;
              lVar54 = local_1e8[1];
              auVar66 = NEON_scvtf(auVar83,4);
              fVar68 = auVar66._0_4_ * 0.007874016;
              fVar70 = auVar66._4_4_ * 0.007874016;
              fVar78 = auVar66._8_4_ * 0.007874016;
              fVar80 = auVar66._12_4_ * 0.007874016;
              auVar65._0_4_ =
                   ((float)*(undefined8 *)(local_2b0 + 0x38) -
                   (float)*(undefined8 *)(local_2a8 + 0x38)) * fVar68;
              auVar65._4_4_ =
                   ((float)((ulong)*(undefined8 *)(local_2b0 + 0x38) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(local_2a8 + 0x38) >> 0x20)) * fVar70;
              auVar65._8_4_ = fVar61 * fVar78;
              auVar65._12_4_ = fVar61 * fVar80;
              auVar85 = NEON_ext(auVar65,auVar65,8,1);
              fVar61 = (float)*(undefined8 *)(lVar54 + 0x48);
              auVar66._0_4_ = fVar68 * (*(float *)(local_2b0 + 0x60) - *(float *)(local_2a8 + 0x60))
              ;
              auVar66._4_4_ = fVar70 * (*(float *)(local_2b0 + 100) - *(float *)(local_2a8 + 100));
              auVar66._8_4_ = fVar78 * (*(float *)(local_2b0 + 0x68) - *(float *)(local_2a8 + 0x68))
              ;
              auVar66._12_4_ =
                   fVar80 * (*(float *)(local_2b0 + 0x6c) - *(float *)(local_2a8 + 0x6c));
              auVar83 = NEON_ext(auVar66,auVar66,8,1);
              lVar57 = lVar36 + uVar31 * 0xc0;
              lVar34 = lVar36 + local_280 * 0xc0;
              iVar27 = (uint)*(ushort *)(lVar34 + 0x5e) + (uint)*(ushort *)(lVar57 + 0x5e) +
                       (int)((float)*(undefined8 *)(lVar54 + 0x20) * fVar61 *
                            (auVar65._0_4_ + auVar65._4_4_ + auVar85._0_4_));
              uVar44 = (uint)*(ushort *)(lVar34 + 0x92) + (uint)*(ushort *)(lVar57 + 0x92);
              uVar41 = (uint)((float)*(undefined8 *)(lVar54 + 0x10) *
                              (auVar66._0_4_ + auVar66._4_4_ + auVar83._0_4_) * fVar61);
            }
            else {
              lVar54 = lVar36 + uVar31 * 0xc0;
              lVar57 = lVar36 + local_280 * 0xc0;
              uVar41 = (uint)*(ushort *)(lVar54 + 0x90);
              uVar44 = (uint)*(ushort *)(lVar57 + 0x90);
              iVar27 = (uint)*(ushort *)(lVar57 + 0x5c) + (uint)*(ushort *)(lVar54 + 0x5c);
            }
            iVar27 = ((uint)(ushort)local_238[3] - iVar27) - (uVar59 >> 10 & 1);
            if (iVar27 <= (int)(uVar44 + uVar41)) goto LAB_02f65570;
            *(short *)(local_238 + 3) = (short)iVar27;
            pauVar52 = local_210;
            uVar49 = local_228;
            uVar55 = local_218;
            puVar50 = puVar56;
          }
          iVar39 = *(int *)(local_310 + 0x1c);
          iVar27 = *(int *)(local_310 + 0x18) + (uint)*(byte *)((long)local_238 + 9) * 0x10;
          lVar36 = local_310;
LAB_02f6634c:
          *(int *)(lVar36 + 0x18) = iVar27;
          *(int *)(lVar36 + 0x1c) = iVar39 + 1;
          param_18 = uVar49;
          puVar56 = puVar50;
          goto LAB_02f66358;
        }
        lVar34 = local_278 + uVar31 * 0xc0;
        lVar35 = local_278 + uVar47 * 0xc0;
        uVar82 = *(undefined8 *)(lVar35 + 0x70);
        auVar66 = *(undefined1 (*) [16])(lVar35 + 0x60);
        iVar27 = -(uint)((float)*(undefined8 *)(lVar34 + 0x70) <= auVar66._0_4_);
        iVar39 = -(uint)((float)((ulong)*(undefined8 *)(lVar34 + 0x70) >> 0x20) <= auVar66._4_4_);
        iVar21 = -(uint)(*(float *)(lVar34 + 0x6c) <= auVar66._8_4_);
        iVar60 = -(uint)((float)uVar82 <= *(float *)(lVar34 + 0x60));
        iVar67 = -(uint)((float)((ulong)uVar82 >> 0x20) <= *(float *)(lVar34 + 100));
        iVar69 = -(uint)(auVar66._12_4_ <= *(float *)(lVar34 + 0x68));
        if ((local_2bc & uVar59) != 0 ||
            CONCAT13((byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar39 >> 0x18) &
                     (byte)((uint)iVar60 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                     (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
                     CONCAT12((byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar39 >> 0x10) &
                              (byte)((uint)iVar60 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                              (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar21 >> 0x10),
                              CONCAT11((byte)((uint)iVar67 >> 8) & (byte)((uint)iVar39 >> 8) &
                                       (byte)((uint)iVar60 >> 8) & (byte)((uint)iVar27 >> 8) &
                                       (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar21 >> 8),
                                       (byte)iVar67 & (byte)iVar39 & (byte)iVar60 & (byte)iVar27 &
                                       (byte)iVar69 & (byte)iVar21))) == 0) {
          if (uVar55 <= local_220) {
            plVar33 = local_2a0;
          }
          lVar36 = *(long *)(local_1f8 + 0x18);
          param_18 = local_228;
          goto joined_r0x02f65038;
        }
        if (param_11 == 0) {
          if ((local_250 >> 3 & 1) != 0) goto LAB_02f64690;
          local_340 = local_2c8;
          if (uVar55 <= local_220) {
            local_340 = local_2a0;
          }
          if (*(short *)((long)puVar53 + 10) < 0) {
            if (*(int *)(param_13 + 0x18) < 0xec1) {
              local_238 = (uint *)(*(long *)(param_13 + 0x10) + (long)*(int *)(param_13 + 0x18) +
                                  0x20);
            }
            else {
              local_238 = (uint *)FUN_031c36f4();
            }
            lVar34 = 0;
            iVar27 = (byte)(*local_210)[9] + 1;
            do {
              puVar48 = (undefined8 *)(*local_210 + lVar34);
              iVar27 = iVar27 + -1;
              uVar81 = *(undefined4 *)(puVar48 + 1);
              uVar2 = *(undefined4 *)((long)puVar48 + 0xc);
              puVar51 = (undefined8 *)((long)local_238 + lVar34);
              lVar34 = lVar34 + 0x10;
              *puVar51 = *puVar48;
              *(undefined4 *)(puVar51 + 1) = uVar81;
              *(undefined4 *)((long)puVar51 + 0xc) = uVar2;
            } while (1 < iVar27);
            uVar49 = 0;
            local_310 = param_13;
            puVar56 = puVar50;
            goto LAB_02f64a14;
          }
          lVar36 = *(long *)(local_260 + 0x40);
          if (((ulong)(byte)puVar53[2] == 2) && (2 < *(byte *)((long)puVar53 + 9))) {
            if (*(long *)(puVar53 + 8) != 0) {
              *(byte *)((long)puVar53 + 0xf) = *(byte *)((long)puVar53 + 0xf) | 8;
            }
            puVar53[8] = 0;
            puVar53[9] = 0;
            *(undefined2 *)(puVar53 + 10) = 0;
          }
          plVar33 = *(long **)(lVar36 + (ulong)(byte)puVar53[2] * 8 + 0x13b8);
          if ((int)plVar33[1] != 0) {
            (**(code **)(*plVar33 + 0x30))(plVar33,puVar53,local_340,param_13 + 0x28);
          }
          bVar58 = *(byte *)((long)puVar53 + 9);
          if ((int)(*(int *)(param_13 + 0x18) + (uint)bVar58 * 0x10) < 0xfa1) {
            puVar48 = (undefined8 *)
                      (*(long *)(param_13 + 0x10) + (long)*(int *)(param_13 + 0x18) + 0x20);
          }
          else {
            puVar48 = (undefined8 *)FUN_031c36f4();
          }
          iVar27 = bVar58 + 1;
          puVar56 = local_238;
          do {
            iVar27 = iVar27 + -1;
            uVar44 = puVar56[2];
            uVar41 = puVar56[3];
            *puVar48 = *(undefined8 *)puVar56;
            *(uint *)(puVar48 + 1) = uVar44;
            *(uint *)((long)puVar48 + 0xc) = uVar41;
            puVar56 = puVar56 + 4;
            puVar48 = puVar48 + 2;
          } while (1 < iVar27);
          iVar39 = *(int *)(param_13 + 0x1c);
          iVar27 = *(int *)(param_13 + 0x18) + (uint)bVar58 * 0x10;
          lVar36 = param_13;
          goto LAB_02f6634c;
        }
        if ((uVar59 & 0x808) == 0) {
LAB_02f64690:
          if ((uVar44 >> 1 & 1) != 0) {
            uVar49 = local_2e8;
            if (((byte)(*pauVar52)[0xf] >> 1 & 1) != 0) {
              puVar48 = *(undefined8 **)(local_260 + 0x4e0);
              puVar53 = *(uint **)(*(long *)(local_1f0 + 0x10) +
                                   (long)*(int *)(local_1f0 + 0x18) * 8 + -8);
              uVar44 = *puVar53;
              lVar36 = local_1f0;
              puVar56 = puVar53;
              if (uVar44 >> 0x13 < 499) {
              }
              else {
                do {
                  uVar44 = *(int *)(puVar48 + 0xb) - 1;
                  if (*(int *)(puVar48 + 0xb) < 1) {
                    lVar36 = puVar48[1];
                    (**(code **)(*(long *)*puVar48 + 0x20))((long *)*puVar48,lVar36,6);
                    *(undefined4 *)(puVar48 + 0xb) = 5;
                    puVar51 = (undefined8 *)(lVar36 + 0x28);
                    lVar36 = local_1f0;
                  }
                  else {
                    *(uint *)(puVar48 + 0xb) = uVar44;
                    puVar51 = (undefined8 *)(puVar48[1] + (ulong)uVar44 * 8);
                  }
                  puVar53 = (uint *)*puVar51;
                  puVar53[4] = 0;
                  puVar53[5] = 0;
                  puVar53[6] = 0;
                  puVar53[7] = 0;
                  puVar53[0] = 0;
                  puVar53[1] = 0;
                  puVar53[2] = 0;
                  puVar53[3] = 0;
                  puVar53[1] = *(uint *)(lVar36 + 0x18);
                  iVar27 = *(int *)(lVar36 + 0x18);
                  lVar34 = (long)iVar27;
                  if ((int)(*(uint *)(lVar36 + 0x1c) & 0x7fffffff) <= iVar27) {
                    FUN_031c25b4(local_270,PTR_PTR_047d1a50,lVar34 + 1);
                    iVar27 = *(int *)(local_1f0 + 0x18);
                    lVar36 = local_1f0;
                  }
                  *(uint **)(*(long *)(lVar36 + 0x10) + (long)iVar27 * 8) = puVar53;
                  *(int *)(lVar36 + 0x18) = (int)(lVar34 + 1);
                  *(uint **)(puVar56 + 2) = puVar53;
                  uVar44 = *puVar53;
                  puVar56 = puVar53;
                } while (0x1f2 < uVar44 >> 0x13);
                param_11 = local_300;
              }
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar53,0x10);
                if (bVar8) {
                  *puVar53 = *puVar53 + 0x80001;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              *(int *)(lVar36 + 8) = *(int *)(lVar36 + 8) + 1;
              *(uint *)((long)puVar53 + (ulong)(uVar44 >> 0x10) + 0x20) = uVar41;
              *(uint *)((long)puVar53 + (ulong)(uVar44 >> 0x10) + 0x24) = uVar5;
              uVar49 = local_2e8;
              param_6 = local_208;
              param_3 = local_2ec;
            }
          }
          if ((param_11 != 0) && ((uVar59 >> 5 & 1) != 0)) {
            bVar58 = *(char *)(*(long *)(local_2e0 + 0xf8) + ((ulong)local_1a8[0] & 0xffffff)) + 1;
            if (*(ushort *)
                 (*(long *)PTR_DAT_047e34d8 +
                  ((ulong)bVar58 * 0x20 + (ulong)bVar58 +
                  (ulong)(byte)(*(char *)(*(long *)(local_2e0 + 0xf8) +
                                         ((ulong)local_108 & 0xffffff)) + 1)) * 2 + 0x18) != param_3
               ) goto LAB_02f64838;
          }
          local_340 = local_2c8;
          if (local_218 <= local_220) {
            local_340 = local_2a0;
          }
          local_310 = local_298;
          lVar36 = local_278;
          puVar56 = local_1f8;
LAB_02f64a14:
          local_308 = (undefined1 (*) [16])(lVar36 + (local_280 & 0xffffffff) * 0xc0);
          local_318 = (undefined1 (*) [16])(lVar36 + uVar31 * 0xc0);
          if ((uVar59 >> 6 & 1) == 0) {
LAB_02f64a38:
            param_1 = local_260;
            goto LAB_02f64d98;
          }
          if (plVar30 == (long *)0x0) {
            uVar55 = 0x24;
          }
          else {
            uVar55 = (**(code **)(*plVar30 + 0x48))(plVar30,local_318,local_308);
          }
          pauVar52 = local_210;
          uVar44 = (uint)uVar55 >> 5;
          uVar41 = uVar44 & 7;
          if ((uVar41 == *(byte *)((long)local_238 + 0xe) >> 5) &&
             ((((uint)*(byte *)((long)local_238 + 0xe) ^ (uint)uVar55) & 0x1c) == 0))
          goto LAB_02f64a38;
          local_338 = uVar49;
          local_330 = uVar55;
          if (*(long *)(puVar56 + 0x18) != 0) {
            if (*(char *)((long)puVar56 + 0x7b) == '\0') {
              FUN_02f24e3c(puVar56,local_260,local_1e8);
            }
            else {
              uVar82 = **(undefined8 **)(puVar56 + 0x12);
              *(undefined4 *)(*(long *)(puVar56 + 0x18) + 8) = 0x7777;
              plVar33 = *(long **)(puVar56 + 0x12);
              uVar42 = *(uint *)((long)plVar33 + 0x1c);
              uVar5 = uVar42 + *(int *)(*plVar33 + 8) + puVar56[0x17];
              if (uVar5 != 0) {
                puVar53 = *(uint **)local_288;
                if (puVar53 == (uint *)plVar33[2]) {
                  uVar59 = *(ushort *)((long)puVar56 + 0x5a);
                }
                else {
                  uVar59 = *(ushort *)((long)puVar56 + 0x5a);
                  puVar50 = puVar53;
                  puVar37 = (uint *)plVar33[2];
                  if ((uint)uVar59 == (*puVar53 & 0xffff)) {
                    puVar50 = *(uint **)(puVar53 + 2);
                    puVar56[0x16] = 0;
                    uVar59 = 0;
                    puVar37 = (uint *)plVar33[2];
                  }
                  puVar53 = puVar37;
                  if (puVar50 == puVar53) {
                    uVar42 = *(uint *)((long)plVar33 + 0x1c);
                  }
                  else {
                    uVar42 = *puVar50;
                    puVar53 = puVar50;
                  }
                  lVar36 = local_278;
                  param_6 = local_208;
                  puVar56 = local_1f8;
                  param_3 = local_2ec;
                }
                *(ushort *)((long)puVar56 + 0x5a) = (short)uVar42 - uVar59;
                *(uint **)(puVar56 + 0x14) = puVar53;
              }
              puVar56[0x17] = uVar5;
              FUN_031c34c8();
              FUN_031c35ac(*(undefined8 *)(puVar56 + 0x12),uVar82,local_288);
              plVar33 = *(long **)(puVar56 + 0x12);
              lVar34 = plVar33[3];
              iVar27 = *(int *)((long)plVar33 + 0x1c);
              iVar39 = *(int *)(*plVar33 + 8);
              *(long *)(puVar56 + 0x14) = plVar33[2];
              *(short *)(puVar56 + 0x16) = (short)lVar34;
              *(short *)((long)puVar56 + 0x5a) = (short)iVar27;
              puVar56[0x17] = -(iVar27 + iVar39);
              local_2d0[0] = 0;
              local_2d0[1] = 0;
              local_2d0[2] = 0;
              local_2d0[3] = 0;
              param_11 = local_300;
            }
          }
          local_100 = CONCAT44(local_100._4_4_,0xffffffff);
          local_1b0[0] = 0xffffffff;
          plVar33 = *(long **)(*(long *)(local_260 + 0x40) + (ulong)(byte)local_238[2] * 8 + 0x13b8)
          ;
          (**(code **)(*plVar33 + 0x18))
                    (plVar33,local_260,local_1e8,local_238,local_340,&local_108,local_1a8,&local_100
                     ,local_1b0);
          param_7 = local_1e0;
          param_18 = local_228;
          local_168 = local_318;
          local_148 = *(long *)(lVar36 + uVar31 * 0xc0 + 0x78);
          if ((local_148 == 0) || (*(char *)(local_148 + 0x18) != '\x15')) {
            local_150 = 0xffffffff;
          }
          else {
            plVar33 = (long *)(local_148 + (ulong)uVar41 * 8 + 0x48);
            lVar34 = *plVar33;
            local_150 = uVar44 << 0x1d | 0x1fffffff;
            local_148 = 0;
            if (lVar34 != 0) {
              local_148 = lVar34 + (long)plVar33;
            }
          }
          local_1a0 = local_308;
          local_180 = *(long *)(lVar36 + local_280 * 0xc0 + 0x78);
          uVar44 = (uint)local_330;
          if ((local_180 == 0) || (*(char *)(local_180 + 0x18) != '\x15')) {
            local_188 = 0xffffffff;
          }
          else {
            plVar33 = (long *)(local_180 + (ulong)(uVar44 >> 2 & 7) * 8 + 0x48);
            lVar34 = *plVar33;
            local_188 = (uVar44 >> 2) << 0x1d | 0x1fffffff;
            local_180 = 0;
            if (lVar34 != 0) {
              local_180 = lVar34 + (long)plVar33;
            }
          }
          lStack_e8 = *(long *)(local_260 + 8);
          local_100 = *(undefined8 *)(lStack_e8 + 0x8b8);
          uStack_f8 = *(undefined8 *)(lStack_e8 + 0x8a8);
          local_f0 = *(long *)(lStack_e8 + 0x508);
          lStack_e8 = lStack_e8 + 0x530;
          bVar9 = (byte)local_330;
          uStack_d8 = local_318;
          local_d0 = local_308;
          local_e0 = (float)CONCAT31(local_e0._1_3_,1);
          bVar58 = *(byte *)(local_148 + 0x19);
          uVar41 = (uint)bVar58;
          bVar6 = *(byte *)(local_180 + 0x19);
          uVar23 = CONCAT14(bVar6,uVar41);
          if (((*(byte *)(lVar54 + 0x54) & 1) == 0) &&
             (((uint)uVar31 <= (uint)local_280 || ((*(uint *)(lVar57 + 0x54) >> 1 & 1) == 0)))) {
            local_c0 = local_148;
            uStack_b8 = local_180;
          }
          else {
            bVar9 = (byte)(uVar44 >> 3) & 0x1c | bVar9 & 3 | (byte)((uVar44 >> 2 & 7) << 5);
            uStack_d8 = local_308;
            local_d0 = local_318;
            uVar23 = CONCAT14(bVar58,(uint)bVar6);
            uVar41 = (uint)bVar6;
            local_c0 = local_180;
            uStack_b8 = local_148;
            bVar6 = bVar58;
          }
          local_b0 = (ulong)uVar23;
          fStack_c8 = (float)CONCAT31(fStack_c8._1_3_,bVar9);
          puVar53 = (uint *)(**(code **)(local_f0 + (ulong)uVar41 * 0x68 + (ulong)bVar6 * 8 + 8))
                                      (&local_100,local_298);
          if (puVar53 == (uint *)0x0) {
            uVar55 = local_218;
            param_1 = local_260;
            goto LAB_02f6635c;
          }
          if (*(byte *)((long)puVar53 + 9) != 0) {
            *(uint *)(local_298 + 0x18) =
                 *(int *)(local_298 + 0x18) + (uint)*(byte *)((long)puVar53 + 9) * -0x10;
            *(int *)(local_298 + 0x1c) = *(int *)(local_298 + 0x1c) + -1;
          }
          *(undefined2 *)(puVar53 + 3) = 0;
          uVar49 = local_338;
          local_238 = puVar53;
          goto LAB_02f65570;
        }
LAB_02f64838:
        param_7 = local_1e0;
        puVar56 = local_1f8;
        lVar36 = local_200;
        pauVar46 = local_210;
        uVar55 = local_218;
        param_18 = local_228;
        param_1 = local_260;
        if (*(int *)(local_200 + 0x18) < 0xf91) {
          plVar33 = (long *)(*(long *)(local_200 + 0x10) + (long)*(int *)(local_200 + 0x18) + 0x20);
        }
        else {
          plVar33 = (long *)FUN_031c36f4(local_200);
        }
        if (pauVar46 == (undefined1 (*) [16])param_6[1]) {
          sVar26 = ((short)pauVar46 - (short)*param_6) + -0x20;
          *plVar33 = *param_6;
        }
        else {
          plVar32 = *(long **)(param_7 + 8);
          *plVar33 = *plVar32;
          sVar26 = (short)plVar32[1];
        }
        *(short *)(plVar33 + 1) = sVar26;
        *(undefined1 *)((long)plVar33 + 0xb) = 2;
        *(uint *)((long)plVar33 + 0xc) = param_3;
        uVar44 = *(uint *)(param_11 + 0x1000);
        if (uVar44 == 0x100) {
          FUN_02f63610(*(undefined8 *)(param_11 + 0x1008),param_11,0x100);
          uVar44 = 0;
          *(undefined4 *)(param_11 + 0x1000) = 0;
        }
        puVar48 = (undefined8 *)(param_11 + (ulong)uVar44 * 0x10);
        *(uint *)(param_11 + 0x1000) = uVar44 + 1;
        *puVar48 = *(undefined8 *)(lVar36 + 0x10);
        *(short *)(puVar48 + 1) = (short)*(undefined4 *)(lVar36 + 0x18);
        *(int *)(lVar36 + 0x18) = *(int *)(lVar36 + 0x18) + 0x10;
        *(int *)(lVar36 + 0x1c) = *(int *)(lVar36 + 0x1c) + 1;
        pauVar43 = (undefined1 (*) [16])param_6[1];
        if (pauVar46 == pauVar43) {
          iVar27 = *(int *)((long)param_6 + 0x14);
          *(int *)((long)param_6 + 0x14) = iVar27 + -1;
          *(int *)(param_6 + 5) = (int)param_6[5] + -1;
          goto LAB_02f64938;
        }
        iVar27 = *(int *)(param_7 + 0x14);
        *(int *)(param_7 + 0x14) = iVar27 + -1;
        if (iVar27 < 2) {
          FUN_031c37e8(param_7);
          plVar33 = *(long **)(param_7 + 8);
        }
        else {
          plVar33 = (long *)(*(long *)(param_7 + 8) + 0x10);
          *(long **)(param_7 + 8) = plVar33;
        }
        uVar49 = local_220;
LAB_02f64964:
        pauVar43 = local_230;
        if (plVar33 == (long *)0x0) {
          pauVar46 = (undefined1 (*) [16])0x0;
        }
        else {
          pauVar46 = (undefined1 (*) [16])(*plVar33 + (ulong)*(ushort *)(plVar33 + 1) + 0x20);
          if (pauVar46 != (undefined1 (*) [16])0x0) {
            uVar55 = (ulong)*(uint *)*pauVar46 & 0xffffff |
                     (ulong)(*(uint *)(*plVar33 + (ulong)*(ushort *)(plVar33 + 1) + 0x24) & 0xffffff
                            ) << 0x20;
            goto LAB_02f649e0;
          }
        }
        uVar55 = 0xff000000ff000000;
      }
LAB_02f649e0:
    } while ((uVar49 | uVar55) != 0xff000000ff000000);
    goto LAB_02f66c30;
  }
LAB_02f66c74:
  puVar53 = puVar56 + 0x18;
  if (*(long *)puVar53 == 0) goto LAB_02f66d7c;
  if (*(char *)((long)puVar56 + 0x7b) == '\0') {
    FUN_02f24e3c(puVar56,param_1,local_1e8);
    goto LAB_02f66d7c;
  }
  puVar50 = puVar56 + 0x14;
  uVar82 = **(undefined8 **)(puVar56 + 0x12);
  *(undefined4 *)(*(long *)puVar53 + 8) = 0x7777;
  plVar30 = *(long **)(puVar56 + 0x12);
  iVar27 = *(int *)((long)plVar30 + 0x1c);
  uVar28 = iVar27 + *(int *)(*plVar30 + 8) + puVar56[0x17];
  if (uVar28 != 0) {
    puVar37 = *(uint **)puVar50;
    if (puVar37 == (uint *)plVar30[2]) {
      uVar59 = *(ushort *)((long)puVar56 + 0x5a);
LAB_02f66d24:
      sVar26 = (short)iVar27;
    }
    else {
      uVar59 = *(ushort *)((long)puVar56 + 0x5a);
      puVar38 = puVar37;
      puVar25 = (uint *)plVar30[2];
      if ((uint)uVar59 == (*puVar37 & 0xffff)) {
        puVar38 = *(uint **)(puVar37 + 2);
        puVar56[0x16] = 0;
        uVar59 = 0;
        puVar25 = (uint *)plVar30[2];
      }
      puVar37 = puVar25;
      if (puVar38 == puVar37) {
        iVar27 = *(int *)((long)plVar30 + 0x1c);
        goto LAB_02f66d24;
      }
      sVar26 = (short)*puVar38;
      puVar37 = puVar38;
    }
    *(ushort *)((long)puVar56 + 0x5a) = sVar26 - uVar59;
    *(uint **)puVar50 = puVar37;
  }
  puVar56[0x17] = uVar28;
  FUN_031c34c8();
  FUN_031c35ac(*(undefined8 *)(puVar56 + 0x12),uVar82,puVar50);
  plVar30 = *(long **)(puVar56 + 0x12);
  lVar40 = plVar30[3];
  iVar27 = *(int *)((long)plVar30 + 0x1c);
  iVar39 = *(int *)(*plVar30 + 8);
  *(long *)(puVar56 + 0x14) = plVar30[2];
  *(short *)(puVar56 + 0x16) = (short)lVar40;
  *(short *)((long)puVar56 + 0x5a) = (short)iVar27;
  puVar56[0x17] = -(iVar27 + iVar39);
  puVar53[0] = 0;
  puVar53[1] = 0;
  puVar56[0x1a] = 0;
  puVar56[0x1b] = 0;
LAB_02f66d7c:
  puVar48 = local_120;
  if (local_118 != (uint *)0x0) {
    if (local_130[0] != 0) {
      if (local_110 == (*local_118 & 0xffff)) {
        *(undefined8 *)(*(long *)(local_130[0] + 0x10) + (long)(int)local_118[1] * 8) = 0;
        *(undefined1 *)(local_130[0] + 0xc) = 1;
        iVar27 = *(int *)(local_120 + 0xb);
        lVar40 = local_120[1];
        *(uint **)(lVar40 + (long)iVar27 * 8) = local_118;
        *(int *)(local_120 + 0xb) = iVar27 + 1;
        if (*(int *)((long)local_120 + 0x5c) <= iVar27 + 1) {
          (**(code **)(*(long *)*local_120 + 0x28))
                    ((long *)*local_120,lVar40 + (long)(iVar27 + -5) * 8,6);
          *(int *)(puVar48 + 0xb) = iVar27 + -5;
        }
      }
      else {
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(local_118,0x10);
          if (bVar8) {
            *local_118 = *local_118 - local_110;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
    }
    local_118 = (uint *)0x0;
  }
  puVar48 = local_1c8;
  if ((local_10c != 0) && (*(char *)(local_130[0] + 0xc) == '\0')) {
    piVar1 = (int *)(local_130[0] + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 - local_10c;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar40 = *(long *)(param_1 + 0x4b0);
  *(undefined8 *)(lVar40 + 0x10) = 0;
  *(undefined8 *)(lVar40 + 0x20) = 0;
  *(undefined8 *)(lVar40 + 0x38) = 0;
  *(undefined8 *)(lVar40 + 0x40) = 0;
  if ((local_1c0 != (uint *)0x0) && (local_1d8[0] != 0)) {
    if (local_1b8 == (*local_1c0 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_1d8[0] + 0x10) + (long)(int)local_1c0[1] * 8) = 0;
      *(undefined1 *)(local_1d8[0] + 0xc) = 1;
      iVar27 = *(int *)(local_1c8 + 0xb);
      lVar40 = local_1c8[1];
      *(uint **)(lVar40 + (long)iVar27 * 8) = local_1c0;
      *(int *)(local_1c8 + 0xb) = iVar27 + 1;
      if (*(int *)((long)local_1c8 + 0x5c) <= iVar27 + 1) {
        (**(code **)(*(long *)*local_1c8 + 0x28))
                  ((long *)*local_1c8,lVar40 + (long)(iVar27 + -5) * 8,6);
        *(int *)(puVar48 + 0xb) = iVar27 + -5;
      }
    }
    else {
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_1c0,0x10);
        if (bVar8) {
          *local_1c0 = *local_1c0 - local_1b8;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  if ((local_1b4 != 0) && (*(char *)(local_1d8[0] + 0xc) == '\0')) {
    piVar1 = (int *)(local_1d8[0] + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 - local_1b4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  return;
LAB_02f667d8:
  puVar53 = (uint *)local_208[1];
  plVar30 = *(long **)(param_7 + 8);
  if (*(int *)(local_200 + 0x18) < 0xf91) {
    plVar33 = (long *)(*(long *)(local_200 + 0x10) + (long)*(int *)(local_200 + 0x18) + 0x20);
    if (puVar53 == (uint *)0x0) goto LAB_02f668ac;
LAB_02f66800:
    if (plVar30 != (long *)0x0) {
      lVar40 = *plVar30;
      puVar50 = (uint *)(lVar40 + (ulong)*(ushort *)(plVar30 + 1) + 0x20);
      if (((ulong)*puVar50 & 0xffffff |
          (ulong)(*(uint *)(lVar40 + (ulong)*(ushort *)(plVar30 + 1) + 0x24) & 0xffffff) << 0x20) <=
          ((ulong)*puVar53 & 0xffffff | (ulong)(puVar53[1] & 0xffffff) << 0x20)) goto LAB_02f668c0;
    }
    lVar36 = *local_208;
    lVar40 = local_208[1];
    *plVar33 = lVar36;
    *(short *)(plVar33 + 1) = ((short)lVar40 - (short)lVar36) + -0x20;
    iVar27 = *(int *)((long)local_208 + 0x14);
    bVar58 = *(byte *)((long)puVar53 + 9);
    *(int *)((long)local_208 + 0x14) = iVar27 + -1;
    *(int *)(local_208 + 5) = (int)local_208[5] + -1;
    if (iVar27 < 2) {
      FUN_031c3900();
    }
    else {
      local_208[1] = local_208[1] + (ulong)bVar58 * 0x10;
    }
    puVar50 = puVar53;
    plVar30 = local_2c8;
  }
  else {
    plVar33 = (long *)FUN_031c36f4();
    if (puVar53 != (uint *)0x0) goto LAB_02f66800;
LAB_02f668ac:
    param_18 = local_228;
    if (plVar30 == (long *)0x0) goto LAB_02f66b90;
    lVar40 = *plVar30;
    puVar50 = (uint *)(lVar40 + (ulong)*(ushort *)(plVar30 + 1) + 0x20);
LAB_02f668c0:
    *plVar33 = lVar40;
    *(short *)(plVar33 + 1) = (short)plVar30[1];
    iVar27 = *(int *)(local_1e0 + 0x14);
    *(int *)(local_1e0 + 0x14) = iVar27 + -1;
    if (iVar27 < 2) {
      FUN_031c37e8();
      plVar30 = local_2a0;
    }
    else {
      *(long *)(local_1e0 + 8) = *(long *)(local_1e0 + 8) + 0x10;
      plVar30 = local_2a0;
    }
  }
  param_7 = local_1e0;
  puVar56 = local_1f8;
  lVar40 = local_300;
  uVar49 = (ulong)*puVar50 & 0xffffff | (ulong)(puVar50[1] & 0xffffff) << 0x20;
  if (local_68 == uVar49) {
    if (*(long *)(local_1f8 + 0x18) != 0) {
      if (*(char *)((long)local_1f8 + 0x7b) == '\0') {
        FUN_02f24e3c(local_1f8,param_1,local_1e8);
      }
      else {
        uVar82 = **(undefined8 **)(local_1f8 + 0x12);
        *(undefined4 *)(*(long *)(local_1f8 + 0x18) + 8) = 0x7777;
        plVar33 = *(long **)(local_1f8 + 0x12);
        uVar44 = *(uint *)((long)plVar33 + 0x1c);
        uVar28 = uVar44 + *(int *)(*plVar33 + 8) + local_1f8[0x17];
        if (uVar28 != 0) {
          puVar53 = *(uint **)local_288;
          if (puVar53 == (uint *)plVar33[2]) {
            uVar59 = *(ushort *)((long)local_1f8 + 0x5a);
          }
          else {
            uVar59 = *(ushort *)((long)local_1f8 + 0x5a);
            puVar37 = puVar53;
            puVar38 = (uint *)plVar33[2];
            if ((uint)uVar59 == (*puVar53 & 0xffff)) {
              puVar37 = *(uint **)(puVar53 + 2);
              local_1f8[0x16] = 0;
              uVar59 = 0;
              puVar38 = (uint *)plVar33[2];
            }
            puVar53 = puVar38;
            if (puVar37 == puVar53) {
              uVar44 = *(uint *)((long)plVar33 + 0x1c);
            }
            else {
              uVar44 = *puVar37;
              puVar53 = puVar37;
            }
          }
          *(ushort *)((long)local_1f8 + 0x5a) = (short)uVar44 - uVar59;
          *(uint **)(local_1f8 + 0x14) = puVar53;
        }
        local_1f8[0x17] = uVar28;
        FUN_031c34c8();
        FUN_031c35ac(*(undefined8 *)(puVar56 + 0x12),uVar82,local_288);
        plVar33 = *(long **)(puVar56 + 0x12);
        lVar40 = plVar33[3];
        iVar27 = *(int *)((long)plVar33 + 0x1c);
        iVar39 = *(int *)(*plVar33 + 8);
        *(long *)(puVar56 + 0x14) = plVar33[2];
        *(short *)(puVar56 + 0x16) = (short)lVar40;
        *(short *)((long)puVar56 + 0x5a) = (short)iVar27;
        puVar56[0x17] = -(iVar27 + iVar39);
        local_2d0[0] = 0;
        local_2d0[1] = 0;
        local_2d0[2] = 0;
        local_2d0[3] = 0;
      }
    }
    local_100 = CONCAT44(local_100._4_4_,puVar50[1]);
    local_108 = *puVar50;
    local_1a8[0] = 0xffffffff;
    local_1b0[0] = 0xffffffff;
    plVar33 = *(long **)(*(long *)(param_1 + 0x40) + (ulong)(byte)puVar50[2] * 8 + 0x13b8);
    (**(code **)(*plVar33 + 0x18))
              (plVar33,param_1,local_1e8,puVar50,plVar30,&local_100,&local_108,local_1a8,local_1b0);
    param_7 = local_1e0;
  }
  else {
    *(uint *)((long)plVar33 + 0xc) = local_2ec;
    *(undefined1 *)((long)plVar33 + 0xb) = 1;
    uVar55 = (ulong)puVar50[1] & 0xffffff;
    if ((((uint)uVar55 <= local_28c) &&
        (uVar47 = (ulong)*puVar50 & 0xffffff, (uint)uVar47 <= local_28c)) &&
       ((uVar59 = *(ushort *)(local_278 + uVar47 * 0xc0 + 0x58) |
                  *(ushort *)(local_278 + uVar55 * 0xc0 + 0x58), (uVar59 & 0x809) != 0 ||
        (((uVar59 >> 5 & 1) != 0 &&
         (bVar58 = *(char *)(*(long *)(local_2e0 + 0xf8) + uVar47) + 1,
         *(ushort *)
          (*(long *)PTR_DAT_047e34d8 +
           ((ulong)bVar58 * 0x20 + (ulong)bVar58 +
           (ulong)(byte)(*(char *)(*(long *)(local_2e0 + 0xf8) + uVar55) + 1)) * 2 + 0x18) !=
         local_2ec)))))) {
      *(undefined1 *)((long)plVar33 + 0xb) = 2;
    }
    uVar28 = *(uint *)(local_300 + 0x1000);
    if (uVar28 == 0x100) {
      FUN_02f63610(*(undefined8 *)(local_300 + 0x1008),local_300,0x100);
      uVar28 = 0;
      *(undefined4 *)(lVar40 + 0x1000) = 0;
    }
    puVar48 = (undefined8 *)(lVar40 + (ulong)uVar28 * 0x10);
    *(uint *)(lVar40 + 0x1000) = uVar28 + 1;
    *puVar48 = *(undefined8 *)(local_200 + 0x10);
    *(short *)(puVar48 + 1) = (short)*(undefined4 *)(local_200 + 0x18);
    *(int *)(local_200 + 0x18) = *(int *)(local_200 + 0x18) + 0x10;
    *(int *)(local_200 + 0x1c) = *(int *)(local_200 + 0x1c) + 1;
    puVar56 = local_1f8;
    local_68 = uVar49;
  }
  goto LAB_02f667d8;
LAB_02f66b90:
  if (local_320 != (long *)0x0) {
    lVar40 = *local_320;
    if (((*(byte *)(lVar40 + 0x38) & 1) == 0) || (local_320[6] == 0)) {
LAB_02f66be4:
      puVar51 = (undefined8 *)local_320[2];
    }
    else {
      puVar48 = (undefined8 *)local_320[2];
      puVar51 = (undefined8 *)((long)puVar48 + 0x17U & 0xfffffffffffffff8);
      if ((undefined8 *)local_320[3] < puVar51) goto LAB_02f66be4;
      local_320[2] = (long)puVar51;
      if (puVar48 != (undefined8 *)0x0) {
        *puVar48 = &DAT_03c4e575;
        puVar48[1] = *(undefined8 *)(local_320[6] + 8);
        goto LAB_02f66be4;
      }
    }
    uVar49 = (long)puVar51 + 0x17U & 0xfffffffffffffff8;
    if ((uVar49 <= (ulong)local_320[3]) && (local_320[2] = uVar49, puVar51 != (undefined8 *)0x0)) {
      *puVar51 = &DAT_03c2d363;
      uVar82 = nn::os::GetSystemTick();
      puVar51[1] = uVar82;
    }
    if (*(code **)(lVar40 + 0x20) != (code *)0x0) {
      (**(code **)(lVar40 + 0x20))(*(undefined8 *)(lVar40 + 0x28));
    }
  }
LAB_02f66c30:
  if (((~local_2d4 & 0xffffff) != 0) && ((char)puVar56[1] != '\0')) {
    plVar30 = *(long **)(*(long *)(param_1 + 8) + 0x658);
    (**(code **)(*plVar30 + 0x60))
              (plVar30,param_18,*(long *)(param_1 + 0x500) + ((ulong)*puVar56 & 0xffffff) * 0x20);
    *(undefined1 *)(puVar56 + 1) = 0;
  }
  goto LAB_02f66c74;
}


