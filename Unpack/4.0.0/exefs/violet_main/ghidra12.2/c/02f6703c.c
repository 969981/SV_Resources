/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f6703c; name: FUN_02f6703c
 */


void FUN_02f6703c(long param_1,long *param_2,long *param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  int iVar23;
  bool bVar24;
  uint **ppuVar25;
  uint5 uVar26;
  undefined *puVar27;
  uint *puVar28;
  int iVar29;
  long *plVar30;
  ulong *puVar31;
  uint uVar32;
  int iVar33;
  long *plVar34;
  ulong uVar35;
  uint *puVar36;
  undefined4 *puVar37;
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  long lVar40;
  long lVar41;
  uint *puVar42;
  undefined1 *puVar43;
  uint *puVar44;
  ulong uVar45;
  uint uVar46;
  uint uVar47;
  short sVar48;
  uint uVar49;
  ulong uVar50;
  ulong uVar51;
  long *plVar52;
  undefined4 *puVar53;
  long lVar54;
  ulong uVar55;
  long lVar56;
  undefined8 *puVar57;
  uint *puVar58;
  undefined8 *puVar59;
  undefined1 (*pauVar60) [16];
  long lVar61;
  uint *puVar62;
  byte bVar63;
  ushort uVar64;
  int iVar65;
  float fVar66;
  undefined8 uVar67;
  int iVar72;
  int iVar74;
  undefined1 auVar68 [16];
  float fVar73;
  float fVar75;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined4 uVar86;
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  long local_328;
  long local_2c0;
  uint *local_2a8;
  uint *puStack_2a0;
  long local_298;
  uint *local_290;
  uint local_284;
  long *local_280;
  long *local_278;
  undefined4 *local_270;
  ulong *local_268;
  uint *local_260;
  long local_258;
  long local_250;
  uint local_244;
  ulong local_240;
  undefined8 uStack_238;
  long local_228;
  ulong *local_220;
  long local_218;
  undefined1 (*local_210) [16];
  undefined1 (*local_208) [16];
  long local_200;
  long local_1f8;
  ulong local_1f0;
  long local_1e8;
  ulong *local_1e0;
  long local_1d8;
  uint local_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  long *local_1b8;
  long local_1b0;
  undefined4 local_1a8 [2];
  uint local_1a0 [2];
  undefined1 (*local_198) [16];
  long local_190;
  long local_188;
  uint local_180;
  long local_178;
  long local_170;
  undefined1 (*local_168) [16];
  undefined1 (*local_160) [16];
  long local_158;
  long local_150;
  uint local_148;
  long local_140;
  long local_138;
  undefined1 (*local_130) [16];
  long local_128 [2];
  undefined8 *local_118;
  uint *local_110;
  uint local_108;
  int local_104;
  ulong local_100;
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
  long *local_90;
  uint local_68;
  undefined4 uStack_64;
  
  local_118 = *(undefined8 **)(param_1 + 0x4e0);
  local_128[0] = *param_2;
  local_110 = (uint *)0x0;
  local_104 = 0;
  local_244 = *(uint *)(*(long *)(param_1 + 8) + 0x5c);
  puVar62 = *(uint **)(param_1 + 0x4b0);
  *(undefined1 (***) [16])(puVar62 + 10) = &local_160;
  *(undefined1 (***) [16])(puVar62 + 0xc) = &local_198;
  local_1e8 = param_2[2];
  lVar56 = param_3[0x10];
  uVar49 = *(int *)*param_3 + 1;
  plVar34 = *(long **)(*(long *)(param_1 + 8) + 0x4b8);
  puVar31 = (ulong *)(*(long *)(lVar56 + 0x5c0) +
                     (long)*(int *)(*(long *)(lVar56 + 0x170) +
                                   (-(ulong)(uVar49 >> 0x1f) & 0xffffffc000000000 |
                                   (ulong)uVar49 << 6)) * 0x40);
  do {
    uVar35 = *puVar31;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar31,0x10);
    if (bVar11) {
      *puVar31 = uVar35 + 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  local_298 = param_7;
  local_228 = param_8;
  local_1b8 = param_2;
  local_1b0 = param_6;
  if ((uint)uVar35 < (uint)(uVar35 >> 0x20)) {
    local_100 = CONCAT44(local_100._4_4_,(uint)uVar35);
LAB_02f67124:
    lVar56 = lVar56 + (ulong)*(uint *)(lVar56 + 0x128) * 0x10;
    uVar49 = (uint)uVar35;
    lVar61 = lVar56 + 0x18;
    if (*(uint *)(lVar56 + 0x30) <= uVar49) {
      lVar61 = lVar56 + 0x28;
    }
    plVar30 = (long *)(lVar61 + 0x10);
    do {
      puVar36 = (uint *)(plVar30 + -1);
      plVar30 = plVar30 + -2;
    } while (uVar49 < *puVar36);
    if (*plVar30 == 0) {
      pauVar60 = (undefined1 (*) [16])0x0;
      uVar49 = 0xffffffff;
    }
    else {
      plVar30 = (long *)(*plVar30 + (ulong)(uVar49 - *puVar36) * 0x10);
      lVar56 = *plVar30 + (ulong)*(ushort *)(plVar30 + 1);
      param_3[0xfd] = lVar56 + 0x20;
      cVar10 = *(char *)(lVar56 + 0x2b);
      if (cVar10 == '\x01') {
        uVar49 = 0xffffffff;
        lVar61 = *(long *)(*(long *)(*param_3 + 8) + 0x500) + 0x20;
        *(int *)(param_3 + 0x12) = (int)param_3[0x12] + 1;
      }
      else {
        if (cVar10 == '\0') {
          lVar61 = *(long *)(*(long *)(*param_3 + 8) + 0x500) + 0x540;
        }
        else {
          lVar61 = *(long *)(*(long *)(*param_3 + 8) + 0x500);
          if (cVar10 == '\x02') {
            lVar61 = lVar61 + 0x20;
            uVar49 = 0xffffffff;
            *(int *)((long)param_3 + 0x94) = *(int *)((long)param_3 + 0x94) + 1;
            goto LAB_02f67224;
          }
          lVar61 = *(long *)(lVar61 + 0x950);
        }
        uVar49 = 0;
        *(int *)(param_3 + 0x13) = (int)param_3[0x13] + 1;
      }
LAB_02f67224:
      puVar58 = *(uint **)(lVar56 + 0x20);
      uVar64 = *(ushort *)(lVar56 + 0x28);
      puVar36 = (uint *)param_3[6];
      uVar4 = *(uint *)(param_3 + 7);
      if (puVar36 == puVar58) {
        *(uint *)(param_3 + 7) = uVar4 + 1;
      }
      else {
        if (uVar4 != 0) {
          if (uVar4 == (*puVar36 & 0xffff)) {
            lVar56 = param_3[5];
            puVar59 = (undefined8 *)param_3[8];
            *(undefined8 *)(*(long *)(lVar56 + 0x10) + (long)(int)puVar36[1] * 8) = 0;
            *(undefined1 *)(lVar56 + 0xc) = 1;
            iVar29 = *(int *)(puVar59 + 0xb);
            lVar56 = puVar59[1];
            *(uint **)(lVar56 + (long)iVar29 * 8) = puVar36;
            *(int *)(puVar59 + 0xb) = iVar29 + 1;
            if (*(int *)((long)puVar59 + 0x5c) <= iVar29 + 1) {
              (**(code **)(*(long *)*puVar59 + 0x28))
                        ((long *)*puVar59,lVar56 + (long)(iVar29 + -5) * 8,6);
              *(int *)(puVar59 + 0xb) = iVar29 + -5;
            }
          }
          else {
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar36,0x10);
              if (bVar11) {
                *puVar36 = *puVar36 - uVar4;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          *(undefined4 *)(param_3 + 7) = 0;
          *(undefined1 *)(param_3[5] + 0xc) = 1;
        }
        *(undefined4 *)(param_3 + 7) = 1;
        param_3[5] = lVar61;
        param_3[6] = (long)puVar58;
      }
      lVar56 = param_3[0xc];
      param_3[2] = (long)puVar58;
      param_3[3] = (long)puVar58 + (ulong)uVar64 + 0x20;
      param_3[4] = 0x100000000;
      if (lVar56 != lVar61 + 0x100) {
        uVar4 = *(uint *)(param_3 + 0xe);
        if (uVar4 != 0) {
          puVar36 = (uint *)param_3[0xd];
          if (uVar4 == (*puVar36 & 0xffff)) {
            puVar59 = (undefined8 *)param_3[0xf];
            *(undefined8 *)(*(long *)(lVar56 + 0x10) + (long)(int)puVar36[1] * 8) = 0;
            *(undefined1 *)(lVar56 + 0xc) = 1;
            iVar29 = *(int *)(puVar59 + 0xb);
            lVar56 = puVar59[1];
            *(uint **)(lVar56 + (long)iVar29 * 8) = puVar36;
            *(int *)(puVar59 + 0xb) = iVar29 + 1;
            if (*(int *)((long)puVar59 + 0x5c) <= iVar29 + 1) {
              (**(code **)(*(long *)*puVar59 + 0x28))
                        ((long *)*puVar59,lVar56 + (long)(iVar29 + -5) * 8,6);
              *(int *)(puVar59 + 0xb) = iVar29 + -5;
            }
          }
          else {
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar36,0x10);
              if (bVar11) {
                *puVar36 = *puVar36 - uVar4;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          *(undefined4 *)(param_3 + 0xe) = 0;
          *(undefined1 *)(param_3[0xc] + 0xc) = 1;
        }
        param_3[0xc] = lVar61 + 0x100;
      }
      *(undefined4 *)(param_3 + 0x10f) = *(undefined4 *)((long)puVar58 + (ulong)uVar64 + 0x24);
      pauVar60 = (undefined1 (*) [16])((long)puVar58 + (ulong)uVar64 + 0x20);
      lVar56 = *param_3;
      *(undefined4 *)((long)param_3 + 0x87c) = *(undefined4 *)*pauVar60;
      puVar37 = *(undefined4 **)
                 (*(long *)(lVar56 + 0x540) + (long)*(int *)(lVar56 + 0x548) * 8 + -8);
      uVar86 = *puVar37;
      uVar5 = *puVar37;
      *(undefined4 **)(lVar56 + 0x740) = puVar37;
      *(short *)(lVar56 + 0x748) = (short)((uint)uVar86 >> 0x10);
      *(short *)(lVar56 + 0x74a) = (short)uVar5;
      *(int *)(lVar56 + 0x74c) = -*(int *)(lVar56 + 0x538);
    }
  }
  else {
    iVar29 = FUN_03232ac8(lVar56 + 0x130,(ulong)uVar49,1,&local_100);
    if (iVar29 != 0) {
      uVar35 = local_100 & 0xffffffff;
      goto LAB_02f67124;
    }
    pauVar60 = (undefined1 (*) [16])0x0;
    uVar49 = 0xffffffff;
  }
  local_218 = param_1;
  local_1d8 = param_4;
  if (*(int *)(param_1 + 0x770) == 0) {
    local_278 = (long *)0x0;
LAB_02f6741c:
    local_284 = 0;
  }
  else {
    lVar56 = tpidr_el0;
    lVar61 = *(long *)(lVar56 + 0x1000b8);
    if (lVar61 == 0) {
      lVar61 = FUN_00e5d3b4();
      *(long *)(lVar56 + 0x1000b8) = lVar61;
    }
    puVar27 = PTR_DAT_047e48d8;
    local_278 = *(long **)(lVar61 + 0x3e0);
    puVar59 = (undefined8 *)local_278[2];
    if ((undefined8 *)local_278[4] <= puVar59) goto LAB_02f6741c;
    if (*(int *)(param_1 + 0x770) == 0) {
LAB_02f69e08:
      local_284 = 1;
    }
    else {
      if (local_278 == (long *)0x0) {
        local_278 = (long *)0x0;
        goto LAB_02f69e08;
      }
      lVar56 = (long)*(int *)(param_1 + 0x770) * 4;
      puVar37 = *(undefined4 **)(param_1 + 0x768);
      while( true ) {
        lVar56 = lVar56 + -4;
        if (puVar59 != (undefined8 *)0x0) {
          puVar53 = (undefined4 *)((long)puVar59 + 0x13U & 0xfffffffffffffffc);
          uVar35 = (long)puVar53 + 0xbU & 0xfffffffffffffff8;
          if (uVar35 <= (ulong)local_278[3]) {
            uVar86 = *puVar37;
            local_278[2] = uVar35;
            *puVar59 = &DAT_03c1a9df;
            puVar59[1] = puVar27;
            if (puVar53 != (undefined4 *)0x0) {
              *puVar53 = uVar86;
            }
          }
        }
        if (lVar56 == 0) break;
        puVar37 = puVar37 + 1;
        puVar59 = (undefined8 *)local_278[2];
      }
      local_284 = 1;
      param_1 = local_218;
      param_4 = local_1d8;
    }
  }
  if (pauVar60 != (undefined1 (*) [16])0x0) {
    local_280 = param_3 + 9;
    local_260 = puVar62 + 0x18;
    local_290 = puVar62 + 0x14;
    local_2a8 = puVar62 + 0x10;
    puStack_2a0 = puVar62 + 0xe;
    uVar4 = local_284 & local_278 != (long *)0x0;
    local_268 = (ulong *)(param_3 + 0x100);
    local_270 = (undefined4 *)((long)param_3 + 0x81c);
    local_220 = (ulong *)(param_3 + 0xfe);
    local_1e0 = (ulong *)(param_3 + 0x10a);
    local_250 = local_1b0 + 0x10;
    do {
      lVar56 = local_1e8;
      if (*(int *)(param_4 + 0x18) < 0xec1) {
        puVar36 = (uint *)(*(long *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x18) + 0x20);
      }
      else {
        puVar36 = (uint *)FUN_031c36f4(param_4);
      }
      param_1 = local_218;
      pauVar39 = pauVar60;
      pauVar38 = pauVar60;
      puVar58 = puVar36;
      puVar42 = puVar36;
      switch((*pauVar60)[9]) {
      case 0xe:
        pauVar39 = pauVar60 + 1;
        uVar87 = *(undefined8 *)*pauVar60;
        puVar58 = puVar36 + 4;
        *(undefined8 *)(puVar36 + 2) = *(undefined8 *)(*pauVar60 + 8);
        *(undefined8 *)puVar36 = uVar87;
      case 0xd:
        pauVar38 = pauVar39 + 1;
        uVar87 = *(undefined8 *)*pauVar39;
        puVar42 = puVar58 + 4;
        *(undefined8 *)(puVar58 + 2) = *(undefined8 *)(*pauVar39 + 8);
        *(undefined8 *)puVar58 = uVar87;
      case 0xc:
        pauVar39 = pauVar38 + 1;
        uVar87 = *(undefined8 *)*pauVar38;
        puVar58 = puVar42 + 4;
        *(undefined8 *)(puVar42 + 2) = *(undefined8 *)(*pauVar38 + 8);
        *(undefined8 *)puVar42 = uVar87;
      case 0xb:
        pauVar38 = pauVar39 + 1;
        uVar87 = *(undefined8 *)*pauVar39;
        puVar42 = puVar58 + 4;
        *(undefined8 *)(puVar58 + 2) = *(undefined8 *)(*pauVar39 + 8);
        *(undefined8 *)puVar58 = uVar87;
      case 10:
        pauVar39 = pauVar38 + 1;
        uVar87 = *(undefined8 *)*pauVar38;
        puVar58 = puVar42 + 4;
        *(undefined8 *)(puVar42 + 2) = *(undefined8 *)(*pauVar38 + 8);
        *(undefined8 *)puVar42 = uVar87;
      case 9:
        pauVar38 = pauVar39 + 1;
        uVar87 = *(undefined8 *)*pauVar39;
        puVar42 = puVar58 + 4;
        *(undefined8 *)(puVar58 + 2) = *(undefined8 *)(*pauVar39 + 8);
        *(undefined8 *)puVar58 = uVar87;
      case 8:
        pauVar39 = pauVar38 + 1;
        uVar87 = *(undefined8 *)*pauVar38;
        puVar58 = puVar42 + 4;
        *(undefined8 *)(puVar42 + 2) = *(undefined8 *)(*pauVar38 + 8);
        *(undefined8 *)puVar42 = uVar87;
      case 7:
        pauVar38 = pauVar39 + 1;
        uVar87 = *(undefined8 *)*pauVar39;
        puVar42 = puVar58 + 4;
        *(undefined8 *)(puVar58 + 2) = *(undefined8 *)(*pauVar39 + 8);
        *(undefined8 *)puVar58 = uVar87;
      case 6:
        pauVar39 = pauVar38 + 1;
        uVar87 = *(undefined8 *)*pauVar38;
        puVar58 = puVar42 + 4;
        *(undefined8 *)(puVar42 + 2) = *(undefined8 *)(*pauVar38 + 8);
        *(undefined8 *)puVar42 = uVar87;
      case 5:
        pauVar38 = pauVar39 + 1;
        uVar87 = *(undefined8 *)*pauVar39;
        puVar42 = puVar58 + 4;
        *(undefined8 *)(puVar58 + 2) = *(undefined8 *)(*pauVar39 + 8);
        *(undefined8 *)puVar58 = uVar87;
      case 4:
        pauVar39 = pauVar38 + 1;
        uVar87 = *(undefined8 *)*pauVar38;
        puVar58 = puVar42 + 4;
        *(undefined8 *)(puVar42 + 2) = *(undefined8 *)(*pauVar38 + 8);
        *(undefined8 *)puVar42 = uVar87;
      case 3:
        pauVar38 = pauVar39 + 1;
        uVar87 = *(undefined8 *)*pauVar39;
        puVar42 = puVar58 + 4;
        *(undefined8 *)(puVar58 + 2) = *(undefined8 *)(*pauVar39 + 8);
        *(undefined8 *)puVar58 = uVar87;
      case 2:
        pauVar39 = pauVar38 + 1;
        uVar87 = *(undefined8 *)*pauVar38;
        puVar58 = puVar42 + 4;
        *(undefined8 *)(puVar42 + 2) = *(undefined8 *)(*pauVar38 + 8);
        *(undefined8 *)puVar42 = uVar87;
      case 1:
        auVar71 = *pauVar39;
        *(long *)(puVar58 + 2) = auVar71._8_8_;
        *(long *)puVar58 = auVar71._0_8_;
      }
      local_68 = puVar36[1];
      uVar35 = (ulong)local_68 & 0xffffff;
      local_1a0[0] = *puVar36;
      if ((local_244 < (uint)uVar35) ||
         (uVar50 = (ulong)local_1a0[0] & 0xffffff, local_244 < (uint)uVar50)) {
LAB_02f67684:
        if (*(long *)(puVar62 + 0x18) != 0) {
          if (*(char *)((long)puVar62 + 0x7b) == '\0') {
            FUN_02f24e3c(puVar62,local_218,local_1b8);
          }
          else {
            uVar87 = **(undefined8 **)(puVar62 + 0x12);
            *(undefined4 *)(*(long *)(puVar62 + 0x18) + 8) = 0x7777;
            plVar30 = *(long **)(puVar62 + 0x12);
            uVar46 = *(uint *)((long)plVar30 + 0x1c);
            uVar49 = uVar46 + *(int *)(*plVar30 + 8) + puVar62[0x17];
            if (uVar49 != 0) {
              puVar58 = *(uint **)local_290;
              if (puVar58 == (uint *)plVar30[2]) {
                uVar64 = *(ushort *)((long)puVar62 + 0x5a);
              }
              else {
                uVar64 = *(ushort *)((long)puVar62 + 0x5a);
                puVar42 = puVar58;
                puVar44 = (uint *)plVar30[2];
                if ((uint)uVar64 == (*puVar58 & 0xffff)) {
                  puVar42 = *(uint **)(puVar58 + 2);
                  puVar62[0x16] = 0;
                  uVar64 = 0;
                  puVar44 = (uint *)plVar30[2];
                }
                puVar58 = puVar44;
                if (puVar42 == puVar58) {
                  uVar46 = *(uint *)((long)plVar30 + 0x1c);
                }
                else {
                  uVar46 = *puVar42;
                  puVar58 = puVar42;
                }
              }
              *(ushort *)((long)puVar62 + 0x5a) = (short)uVar46 - uVar64;
              *(uint **)(puVar62 + 0x14) = puVar58;
            }
            puVar62[0x17] = uVar49;
            FUN_031c34c8();
            FUN_031c35ac(*(undefined8 *)(puVar62 + 0x12),uVar87,local_290);
            plVar30 = *(long **)(puVar62 + 0x12);
            lVar56 = plVar30[3];
            iVar29 = *(int *)((long)plVar30 + 0x1c);
            iVar33 = *(int *)(*plVar30 + 8);
            *(long *)(puVar62 + 0x14) = plVar30[2];
            *(short *)(puVar62 + 0x16) = (short)lVar56;
            *(short *)((long)puVar62 + 0x5a) = (short)iVar29;
            puVar62[0x17] = -(iVar29 + iVar33);
            local_260[0] = 0;
            local_260[1] = 0;
            local_260[2] = 0;
            local_260[3] = 0;
          }
        }
        local_100 = CONCAT44(local_100._4_4_,0xffffffff);
        local_1a8[0] = 0xffffffff;
        plVar30 = *(long **)(*(long *)(param_1 + 0x40) + (ulong)(byte)puVar36[2] * 8 + 0x13b8);
        (**(code **)(*plVar30 + 0x18))
                  (plVar30,param_1,local_1b8,puVar36,local_280,&local_68,local_1a0,&local_100,
                   local_1a8);
      }
      else {
        local_208 = (undefined1 (*) [16])(lVar56 + uVar35 * 0xc0);
        uVar32 = *(uint *)local_208[8];
        local_210 = (undefined1 (*) [16])(lVar56 + uVar50 * 0xc0);
        uVar47 = *(uint *)local_210[8];
        local_200 = local_1b8[3] + (ulong)uVar32 * 0x80;
        local_1f8 = local_1b8[3] + (ulong)uVar47 * 0x80;
        Hint_Prefetch(local_200,0,0,0);
        Hint_Prefetch(local_200 + 0x40,0,0,0);
        Hint_Prefetch(local_1f8,0,0,0);
        Hint_Prefetch(local_1f8 + 0x40,0,0,0);
        uVar64 = *(ushort *)(local_210[5] + 8) | *(ushort *)(local_208[5] + 8);
        uVar8 = (uint)uVar64;
        pauVar39 = local_208 + 5;
        uVar6 = *(uint *)(*pauVar39 + 4);
        pauVar38 = local_210 + 5;
        local_1d0 = *(uint *)(*pauVar38 + 4);
        uVar46 = local_1d0 & uVar6;
        local_1d0 = local_1d0 | uVar6;
        lVar61 = local_228;
        if ((uVar64 & 0xfbfd) == 0) {
          local_258 = CONCAT44(local_258._4_4_,uVar8);
          local_2c0 = local_1d8;
          local_240 = uVar50;
          local_1f0 = uVar35;
          if ((uVar46 >> 1 & 1) != 0) {
            lVar61 = local_298;
            if ((*(byte *)((long)puVar36 + 0xf) >> 1 & 1) != 0) {
              puVar59 = *(undefined8 **)(local_218 + 0x4e0);
              puVar42 = *(uint **)(*(long *)(local_1b0 + 0x10) +
                                   (long)*(int *)(local_1b0 + 0x18) * 8 + -8);
              uVar49 = *puVar42;
              lVar61 = local_1b0;
              puVar58 = puVar42;
              if (uVar49 >> 0x13 < 499) {
              }
              else {
                do {
                  uVar49 = *(int *)(puVar59 + 0xb) - 1;
                  if (*(int *)(puVar59 + 0xb) < 1) {
                    lVar61 = puVar59[1];
                    (**(code **)(*(long *)*puVar59 + 0x20))((long *)*puVar59,lVar61,6);
                    *(undefined4 *)(puVar59 + 0xb) = 5;
                    puVar57 = (undefined8 *)(lVar61 + 0x28);
                    lVar61 = local_1b0;
                  }
                  else {
                    *(uint *)(puVar59 + 0xb) = uVar49;
                    puVar57 = (undefined8 *)(puVar59[1] + (ulong)uVar49 * 8);
                  }
                  puVar42 = (uint *)*puVar57;
                  puVar42[4] = 0;
                  puVar42[5] = 0;
                  puVar42[6] = 0;
                  puVar42[7] = 0;
                  puVar42[0] = 0;
                  puVar42[1] = 0;
                  puVar42[2] = 0;
                  puVar42[3] = 0;
                  puVar42[1] = *(uint *)(lVar61 + 0x18);
                  iVar29 = *(int *)(lVar61 + 0x18);
                  lVar40 = (long)iVar29;
                  if ((int)(*(uint *)(lVar61 + 0x1c) & 0x7fffffff) <= iVar29) {
                    FUN_031c25b4(local_250,PTR_PTR_047d1a50,lVar40 + 1);
                    iVar29 = *(int *)(local_1b0 + 0x18);
                    lVar61 = local_1b0;
                  }
                  *(uint **)(*(long *)(lVar61 + 0x10) + (long)iVar29 * 8) = puVar42;
                  *(int *)(lVar61 + 0x18) = (int)(lVar40 + 1);
                  *(uint **)(puVar58 + 2) = puVar42;
                  uVar49 = *puVar42;
                  puVar58 = puVar42;
                } while (0x1f2 < uVar49 >> 0x13);
              }
              do {
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(puVar42,0x10);
                if (bVar11) {
                  *puVar42 = *puVar42 + 0x80001;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              *(int *)(lVar61 + 8) = *(int *)(lVar61 + 8) + 1;
              *(uint *)((long)puVar42 + (ulong)(uVar49 >> 0x10) + 0x20) = uVar32;
              *(uint *)((long)puVar42 + (ulong)(uVar49 >> 0x10) + 0x24) = uVar47;
              lVar61 = local_298;
              local_2c0 = local_1d8;
            }
          }
LAB_02f67b30:
          uVar35 = local_240;
          param_1 = local_218;
          uVar50 = local_1f0;
          if ((ushort)puVar36[3] == 0) {
            goto LAB_02f67c70;
          }
          if (((char)puVar36[2] == '\x02') && ((puVar36[6] & 0xffffff) != 0x7f7f7f)) {
            uVar87 = *(undefined8 *)(puVar36 + 6);
            fVar66 = (float)((ulong)*(undefined8 *)(local_1f8 + 0x30) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(local_200 + 0x30) >> 0x20);
            bVar63 = (byte)((ulong)uVar87 >> 8);
            auVar88._0_4_ = (CONCAT12(bVar63,(ushort)(byte)uVar87) & 0xffff) - 0x7f;
            auVar88._4_4_ = bVar63 - 0x7f;
            auVar88._8_4_ = (byte)((ulong)uVar87 >> 0x10) - 0x7f;
            auVar88._12_4_ = (byte)((ulong)uVar87 >> 0x18) - 0x7f;
            lVar40 = local_1b8[1];
            auVar71 = NEON_scvtf(auVar88,4);
            fVar73 = auVar71._0_4_ * 0.007874016;
            fVar75 = auVar71._4_4_ * 0.007874016;
            fVar83 = auVar71._8_4_ * 0.007874016;
            fVar85 = auVar71._12_4_ * 0.007874016;
            auVar70._0_4_ =
                 ((float)*(undefined8 *)(local_1f8 + 0x38) -
                 (float)*(undefined8 *)(local_200 + 0x38)) * fVar73;
            auVar70._4_4_ =
                 ((float)((ulong)*(undefined8 *)(local_1f8 + 0x38) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(local_200 + 0x38) >> 0x20)) * fVar75;
            auVar70._8_4_ = fVar66 * fVar83;
            auVar70._12_4_ = fVar66 * fVar85;
            auVar90 = NEON_ext(auVar70,auVar70,8,1);
            fVar66 = (float)*(undefined8 *)(lVar40 + 0x48);
            lVar41 = lVar56 + local_1f0 * 0xc0;
            lVar54 = lVar56 + local_240 * 0xc0;
            auVar71._0_4_ = fVar73 * (*(float *)(local_1f8 + 0x60) - *(float *)(local_200 + 0x60));
            auVar71._4_4_ = fVar75 * (*(float *)(local_1f8 + 100) - *(float *)(local_200 + 100));
            auVar71._8_4_ = fVar83 * (*(float *)(local_1f8 + 0x68) - *(float *)(local_200 + 0x68));
            auVar71._12_4_ = fVar85 * (*(float *)(local_1f8 + 0x6c) - *(float *)(local_200 + 0x6c));
            auVar88 = NEON_ext(auVar71,auVar71,8,1);
            iVar29 = (uint)*(ushort *)(lVar54 + 0x5e) + (uint)*(ushort *)(lVar41 + 0x5e) +
                     (int)((float)*(undefined8 *)(lVar40 + 0x20) * fVar66 *
                          (auVar70._0_4_ + auVar70._4_4_ + auVar90._0_4_));
            uVar49 = (uint)*(ushort *)(lVar54 + 0x92) + (uint)*(ushort *)(lVar41 + 0x92);
            uVar46 = (uint)((float)*(undefined8 *)(lVar40 + 0x10) *
                            (auVar71._0_4_ + auVar71._4_4_ + auVar88._0_4_) * fVar66);
          }
          else {
            lVar40 = lVar56 + local_1f0 * 0xc0;
            lVar41 = lVar56 + local_240 * 0xc0;
            uVar46 = (uint)*(ushort *)(lVar40 + 0x90);
            uVar49 = (uint)*(ushort *)(lVar41 + 0x90);
            iVar29 = (uint)*(ushort *)(lVar41 + 0x5c) + (uint)*(ushort *)(lVar40 + 0x5c);
          }
          iVar29 = ((uint)(ushort)puVar36[3] - iVar29) - ((uint)local_258 >> 10 & 1);
          if (iVar29 <= (int)(uVar49 + uVar46)) {
            goto LAB_02f67c70;
          }
          *(short *)(puVar36 + 3) = (short)iVar29;
        }
        else {
          lVar40 = lVar56 + uVar35 * 0xc0;
          lVar41 = lVar56 + uVar50 * 0xc0;
          uVar87 = *(undefined8 *)(lVar41 + 0x70);
          auVar71 = *(undefined1 (*) [16])(lVar41 + 0x60);
          iVar29 = -(uint)((float)*(undefined8 *)(lVar40 + 0x70) <= auVar71._0_4_);
          iVar33 = -(uint)((float)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20) <= auVar71._4_4_);
          iVar23 = -(uint)(*(float *)(lVar40 + 0x6c) <= auVar71._8_4_);
          iVar65 = -(uint)((float)uVar87 <= *(float *)(lVar40 + 0x60));
          iVar72 = -(uint)((float)((ulong)uVar87 >> 0x20) <= *(float *)(lVar40 + 100));
          iVar74 = -(uint)(auVar71._12_4_ <= *(float *)(lVar40 + 0x68));
          if ((uVar49 & uVar8 & 1) != 0 ||
              CONCAT13((byte)((uint)iVar72 >> 0x18) & (byte)((uint)iVar33 >> 0x18) &
                       (byte)((uint)iVar65 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                       (byte)((uint)iVar74 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                       CONCAT12((byte)((uint)iVar72 >> 0x10) & (byte)((uint)iVar33 >> 0x10) &
                                (byte)((uint)iVar65 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                                (byte)((uint)iVar74 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                                CONCAT11((byte)((uint)iVar72 >> 8) & (byte)((uint)iVar33 >> 8) &
                                         (byte)((uint)iVar65 >> 8) & (byte)((uint)iVar29 >> 8) &
                                         (byte)((uint)iVar74 >> 8) & (byte)((uint)iVar23 >> 8),
                                         (byte)iVar72 & (byte)iVar33 & (byte)iVar65 & (byte)iVar29 &
                                         (byte)iVar74 & (byte)iVar23))) == 0) goto LAB_02f67684;
          if ((local_1d0 >> 3 & 1) == 0) {
            if (-1 < *(short *)((long)puVar36 + 10)) {
              lVar56 = *(long *)(local_218 + 0x40);
              if (((ulong)(byte)puVar36[2] == 2) && (2 < *(byte *)((long)puVar36 + 9))) {
                if (*(long *)(puVar36 + 8) != 0) {
                  *(byte *)((long)puVar36 + 0xf) = *(byte *)((long)puVar36 + 0xf) | 8;
                }
                puVar36[8] = 0;
                puVar36[9] = 0;
                *(undefined2 *)(puVar36 + 10) = 0;
              }
              plVar30 = *(long **)(lVar56 + (ulong)(byte)puVar36[2] * 8 + 0x13b8);
              local_240 = uVar50;
              local_1f0 = uVar35;
              if ((int)plVar30[1] != 0) {
                (**(code **)(*plVar30 + 0x30))(plVar30,puVar36,local_280,param_5 + 0x28);
              }
              bVar63 = *(byte *)((long)puVar36 + 9);
              if ((int)(*(int *)(param_5 + 0x18) + (uint)bVar63 * 0x10) < 0xfa1) {
                puVar59 = (undefined8 *)
                          (*(long *)(param_5 + 0x10) + (long)*(int *)(param_5 + 0x18) + 0x20);
              }
              else {
                puVar59 = (undefined8 *)FUN_031c36f4();
              }
              iVar29 = bVar63 + 1;
              do {
                iVar29 = iVar29 + -1;
                uVar49 = puVar36[2];
                uVar46 = puVar36[3];
                *puVar59 = *(undefined8 *)puVar36;
                *(uint *)(puVar59 + 1) = uVar49;
                *(uint *)((long)puVar59 + 0xc) = uVar46;
                puVar36 = puVar36 + 4;
                puVar59 = puVar59 + 2;
              } while (1 < iVar29);
              *(uint *)(param_5 + 0x18) = *(int *)(param_5 + 0x18) + (uint)bVar63 * 0x10;
              *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
              goto LAB_02f688f4;
            }
            if (*(int *)(param_5 + 0x18) < 0xec1) {
              puVar36 = (uint *)(*(long *)(param_5 + 0x10) + (long)*(int *)(param_5 + 0x18) + 0x20);
              local_240 = uVar50;
              local_1f0 = uVar35;
            }
            else {
              local_240 = uVar50;
              local_1f0 = uVar35;
              puVar36 = (uint *)FUN_031c36f4(param_5);
            }
            iVar29 = (byte)(*pauVar60)[9] + 1;
            local_258 = CONCAT44(local_258._4_4_,uVar8);
            puVar58 = puVar36;
            do {
              iVar29 = iVar29 + -1;
              uVar49 = *(uint *)(*pauVar60 + 8);
              uVar46 = *(uint *)(*pauVar60 + 0xc);
              *(undefined8 *)puVar58 = *(undefined8 *)*pauVar60;
              puVar58[2] = uVar49;
              puVar58[3] = uVar46;
              pauVar60 = pauVar60 + 1;
              puVar58 = puVar58 + 4;
            } while (1 < iVar29);
            lVar61 = 0;
            lVar56 = local_1e8;
            local_2c0 = param_5;
          }
          else {
            local_2c0 = local_1d8;
            local_258 = CONCAT44(local_258._4_4_,uVar8);
            local_240 = uVar50;
            local_1f0 = uVar35;
            if ((uVar46 >> 1 & 1) != 0) {
              lVar61 = local_298;
              if (((byte)(*pauVar60)[0xf] >> 1 & 1) != 0) {
                puVar59 = *(undefined8 **)(local_218 + 0x4e0);
                puVar42 = *(uint **)(*(long *)(local_1b0 + 0x10) +
                                     (long)*(int *)(local_1b0 + 0x18) * 8 + -8);
                uVar49 = *puVar42;
                lVar56 = local_1b0;
                puVar58 = puVar42;
                if (uVar49 >> 0x13 < 499) {
                }
                else {
                  do {
                    uVar49 = *(int *)(puVar59 + 0xb) - 1;
                    if (*(int *)(puVar59 + 0xb) < 1) {
                      lVar56 = puVar59[1];
                      (**(code **)(*(long *)*puVar59 + 0x20))((long *)*puVar59,lVar56,6);
                      *(undefined4 *)(puVar59 + 0xb) = 5;
                      puVar57 = (undefined8 *)(lVar56 + 0x28);
                      lVar56 = local_1b0;
                    }
                    else {
                      *(uint *)(puVar59 + 0xb) = uVar49;
                      puVar57 = (undefined8 *)(puVar59[1] + (ulong)uVar49 * 8);
                    }
                    puVar42 = (uint *)*puVar57;
                    puVar42[4] = 0;
                    puVar42[5] = 0;
                    puVar42[6] = 0;
                    puVar42[7] = 0;
                    puVar42[0] = 0;
                    puVar42[1] = 0;
                    puVar42[2] = 0;
                    puVar42[3] = 0;
                    puVar42[1] = *(uint *)(lVar56 + 0x18);
                    iVar29 = *(int *)(lVar56 + 0x18);
                    lVar61 = (long)iVar29;
                    if ((int)(*(uint *)(lVar56 + 0x1c) & 0x7fffffff) <= iVar29) {
                      FUN_031c25b4(local_250,PTR_PTR_047d1a50,lVar61 + 1);
                      iVar29 = *(int *)(local_1b0 + 0x18);
                      lVar56 = local_1b0;
                    }
                    *(uint **)(*(long *)(lVar56 + 0x10) + (long)iVar29 * 8) = puVar42;
                    *(int *)(lVar56 + 0x18) = (int)(lVar61 + 1);
                    *(uint **)(puVar58 + 2) = puVar42;
                    uVar49 = *puVar42;
                    puVar58 = puVar42;
                  } while (0x1f2 < uVar49 >> 0x13);
                }
                do {
                  cVar10 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(puVar42,0x10);
                  if (bVar11) {
                    *puVar42 = *puVar42 + 0x80001;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                } while (cVar10 != '\0');
                *(int *)(lVar56 + 8) = *(int *)(lVar56 + 8) + 1;
                *(uint *)((long)puVar42 + (ulong)(uVar49 >> 0x10) + 0x20) = uVar32;
                *(uint *)((long)puVar42 + (ulong)(uVar49 >> 0x10) + 0x24) = uVar47;
                local_2c0 = local_1d8;
                lVar61 = local_298;
                lVar56 = local_1e8;
              }
            }
          }
          if (((uint)local_258 >> 6 & 1) == 0) {
            goto LAB_02f67b30;
          }
          if (plVar34 == (long *)0x0) {
            uVar49 = 0x24;
          }
          else {
            uVar49 = (**(code **)(*plVar34 + 0x48))(plVar34,local_208,local_210);
          }
          param_1 = local_218;
          uVar46 = uVar49 >> 5 & 7;
          if (uVar46 == *(byte *)((long)puVar36 + 0xe) >> 5) {
            if (((*(byte *)((long)puVar36 + 0xe) ^ uVar49) & 0x1c) == 0) goto LAB_02f67b30;
          }
          local_258 = lVar61;
          if (*(long *)(puVar62 + 0x18) != 0) {
            if (*(char *)((long)puVar62 + 0x7b) == '\0') {
              FUN_02f24e3c(puVar62,local_218,local_1b8);
            }
            else {
              uVar87 = **(undefined8 **)(puVar62 + 0x12);
              *(undefined4 *)(*(long *)(puVar62 + 0x18) + 8) = 0x7777;
              plVar30 = *(long **)(puVar62 + 0x12);
              uVar47 = *(uint *)((long)plVar30 + 0x1c);
              uVar32 = uVar47 + *(int *)(*plVar30 + 8) + puVar62[0x17];
              if (uVar32 != 0) {
                puVar58 = *(uint **)local_290;
                if (puVar58 == (uint *)plVar30[2]) {
                  uVar64 = *(ushort *)((long)puVar62 + 0x5a);
                }
                else {
                  uVar64 = *(ushort *)((long)puVar62 + 0x5a);
                  puVar42 = puVar58;
                  puVar44 = (uint *)plVar30[2];
                  if ((uint)uVar64 == (*puVar58 & 0xffff)) {
                    puVar42 = *(uint **)(puVar58 + 2);
                    puVar62[0x16] = 0;
                    uVar64 = 0;
                    puVar44 = (uint *)plVar30[2];
                  }
                  puVar58 = puVar44;
                  if (puVar42 == puVar58) {
                    uVar47 = *(uint *)((long)plVar30 + 0x1c);
                  }
                  else {
                    uVar47 = *puVar42;
                    puVar58 = puVar42;
                  }
                  lVar56 = local_1e8;
                }
                *(ushort *)((long)puVar62 + 0x5a) = (short)uVar47 - uVar64;
                *(uint **)(puVar62 + 0x14) = puVar58;
              }
              puVar62[0x17] = uVar32;
              FUN_031c34c8();
              FUN_031c35ac(*(undefined8 *)(puVar62 + 0x12),uVar87,local_290);
              plVar30 = *(long **)(puVar62 + 0x12);
              lVar61 = plVar30[3];
              iVar29 = *(int *)((long)plVar30 + 0x1c);
              iVar33 = *(int *)(*plVar30 + 8);
              *(long *)(puVar62 + 0x14) = plVar30[2];
              *(short *)(puVar62 + 0x16) = (short)lVar61;
              *(short *)((long)puVar62 + 0x5a) = (short)iVar29;
              puVar62[0x17] = -(iVar29 + iVar33);
              local_260[0] = 0;
              local_260[1] = 0;
              local_260[2] = 0;
              local_260[3] = 0;
            }
          }
          local_100 = CONCAT44(local_100._4_4_,0xffffffff);
          local_1a8[0] = 0xffffffff;
          plVar30 = *(long **)(*(long *)(param_1 + 0x40) + (ulong)(byte)puVar36[2] * 8 + 0x13b8);
          (**(code **)(*plVar30 + 0x18))
                    (plVar30,param_1,local_1b8,puVar36,local_280,&local_68,local_1a0,&local_100,
                     local_1a8);
          lVar61 = local_1d8;
          uVar50 = local_1f0;
          uVar35 = local_240;
          local_160 = local_208;
          local_140 = *(long *)(lVar56 + local_1f0 * 0xc0 + 0x78);
          if ((local_140 == 0) || (*(char *)(local_140 + 0x18) != '\x15')) {
            local_148 = 0xffffffff;
          }
          else {
            plVar30 = (long *)(local_140 + (ulong)uVar46 * 8 + 0x48);
            lVar40 = *plVar30;
            local_148 = (uVar49 >> 5) << 0x1d | 0x1fffffff;
            local_140 = 0;
            if (lVar40 != 0) {
              local_140 = lVar40 + (long)plVar30;
            }
          }
          local_198 = local_210;
          local_178 = *(long *)(lVar56 + local_240 * 0xc0 + 0x78);
          if ((local_178 == 0) || (*(char *)(local_178 + 0x18) != '\x15')) {
            local_180 = 0xffffffff;
          }
          else {
            plVar30 = (long *)(local_178 + (ulong)(uVar49 >> 2 & 7) * 8 + 0x48);
            lVar56 = *plVar30;
            local_180 = (uVar49 >> 2) << 0x1d | 0x1fffffff;
            local_178 = 0;
            if (lVar56 != 0) {
              local_178 = lVar56 + (long)plVar30;
            }
          }
          lStack_e8 = *(long *)(param_1 + 8);
          local_100 = *(ulong *)(lStack_e8 + 0x8b8);
          uStack_f8 = *(undefined8 *)(lStack_e8 + 0x8a8);
          local_f0 = *(long *)(lStack_e8 + 0x508);
          lStack_e8 = lStack_e8 + 0x530;
          bVar9 = (byte)uVar49;
          uStack_d8 = local_208;
          local_d0 = local_210;
          local_e0 = (float)CONCAT31(local_e0._1_3_,1);
          bVar63 = *(byte *)(local_140 + 0x19);
          uVar46 = (uint)bVar63;
          bVar7 = *(byte *)(local_178 + 0x19);
          uVar26 = CONCAT14(bVar7,uVar46);
          if (((*(uint *)(*pauVar39 + 4) & 1) == 0) &&
             (((uint)local_1f0 <= (uint)local_240 || ((*(uint *)(*pauVar38 + 4) >> 1 & 1) == 0)))) {
            local_c0 = local_140;
            uStack_b8 = local_178;
          }
          else {
            uVar26 = CONCAT14(bVar63,(uint)bVar7);
            bVar9 = (byte)(uVar49 >> 3) & 0x1c | bVar9 & 3 | (byte)((uVar49 >> 2 & 7) << 5);
            uStack_d8 = local_210;
            local_d0 = local_208;
            uVar46 = (uint)bVar7;
            local_c0 = local_178;
            uStack_b8 = local_140;
            bVar7 = bVar63;
          }
          local_b0 = (ulong)uVar26;
          fStack_c8 = (float)CONCAT31(fStack_c8._1_3_,bVar9);
          puVar36 = (uint *)(**(code **)(local_f0 + (ulong)uVar46 * 0x68 + (ulong)bVar7 * 8 + 8))
                                      (&local_100,local_1d8);
          if (puVar36 == (uint *)0x0) goto LAB_02f688f4;
          if (*(byte *)((long)puVar36 + 9) != 0) {
            *(uint *)(lVar61 + 0x18) =
                 *(int *)(lVar61 + 0x18) + (uint)*(byte *)((long)puVar36 + 9) * -0x10;
            *(int *)(lVar61 + 0x1c) = *(int *)(lVar61 + 0x1c) + -1;
          }
          *(undefined2 *)(puVar36 + 3) = 0;
          lVar61 = local_258;
          lVar56 = local_1e8;
LAB_02f67c70:
          uVar51 = (ulong)*(ushort *)(lVar56 + uVar50 * 0xc0 + 0x8a);
          uVar55 = (ulong)*(ushort *)(lVar56 + uVar35 * 0xc0 + 0x8a);
          lVar56 = *(long *)(param_1 + 0x20);
          if (*(long *)local_260 != 0) {
            if (*(char *)((long)puVar62 + 0x7b) == '\0') {
              local_1f0 = uVar50;
              FUN_02f24e3c(puVar62,param_1,local_1b8);
              uVar50 = local_1f0;
            }
            else {
              uVar87 = **(undefined8 **)(puVar62 + 0x12);
              *(undefined4 *)(*(long *)local_260 + 8) = 0x7777;
              plVar30 = *(long **)(puVar62 + 0x12);
              uVar46 = *(uint *)((long)plVar30 + 0x1c);
              uVar49 = uVar46 + *(int *)(*plVar30 + 8) + puVar62[0x17];
              if (uVar49 != 0) {
                puVar58 = *(uint **)local_290;
                if (puVar58 == (uint *)plVar30[2]) {
                  uVar64 = *(ushort *)((long)puVar62 + 0x5a);
                }
                else {
                  uVar64 = *(ushort *)((long)puVar62 + 0x5a);
                  puVar42 = puVar58;
                  puVar44 = (uint *)plVar30[2];
                  if ((uint)uVar64 == (*puVar58 & 0xffff)) {
                    puVar42 = *(uint **)(puVar58 + 2);
                    puVar62[0x16] = 0;
                    uVar64 = 0;
                    puVar44 = (uint *)plVar30[2];
                  }
                  puVar58 = puVar44;
                  if (puVar42 == puVar58) {
                    uVar46 = *(uint *)((long)plVar30 + 0x1c);
                  }
                  else {
                    uVar46 = *puVar42;
                    puVar58 = puVar42;
                  }
                }
                *(ushort *)((long)puVar62 + 0x5a) = (short)uVar46 - uVar64;
                *(uint **)(puVar62 + 0x14) = puVar58;
              }
              puVar62[0x17] = uVar49;
              local_258 = lVar61;
              local_240 = uVar51;
              local_1f0 = uVar55;
              FUN_031c34c8();
              FUN_031c35ac(*(undefined8 *)(puVar62 + 0x12),uVar87,local_290);
              plVar30 = *(long **)(puVar62 + 0x12);
              lVar61 = plVar30[3];
              iVar29 = *(int *)((long)plVar30 + 0x1c);
              iVar33 = *(int *)(*plVar30 + 8);
              *(long *)(puVar62 + 0x14) = plVar30[2];
              *(short *)(puVar62 + 0x16) = (short)lVar61;
              *(short *)((long)puVar62 + 0x5a) = (short)iVar29;
              puVar62[0x17] = -(iVar29 + iVar33);
              local_260[0] = 0;
              local_260[1] = 0;
              local_260[2] = 0;
              local_260[3] = 0;
              uVar51 = local_240;
              uVar55 = local_1f0;
              lVar61 = local_258;
            }
          }
          *(long *)(puVar62 + 6) = lVar61;
          *(bool *)((long)puVar62 + 5) = lVar61 == local_228;
          ppuVar25 = &puStack_2a0;
          if (lVar61 != local_228) {
            ppuVar25 = &local_2a8;
          }
          plVar30 = *(long **)*ppuVar25;
          *(long **)(puVar62 + 0x12) = plVar30;
          if ((puVar62[2] & local_1d0) == 0) {
            if (lVar61 == local_228) {
              *(bool *)(puVar62 + 0x1e) = (*(ushort *)((long)puVar36 + 10) & 0x90) != 0;
              goto LAB_02f67f40;
            }
            *(undefined1 *)(puVar62 + 0x1e) = 0;
LAB_02f67f1c:
            *(undefined1 *)((long)puVar62 + 0x79) = 0;
            bVar63 = *(byte *)((long)puVar36 + 0xb) >> 6 & 1;
          }
          else {
            *(undefined1 *)(puVar62 + 0x1e) = 1;
            if (lVar61 != local_228) goto LAB_02f67f1c;
LAB_02f67f40:
            bVar63 = 0;
            *(byte *)((long)puVar62 + 0x79) = *(byte *)((long)puVar36 + 10) >> 4 & 1;
          }
          *(byte *)((long)puVar62 + 0x7a) = bVar63;
          iVar33 = *(int *)(*plVar30 + 8);
          lVar40 = plVar30[3];
          iVar29 = *(int *)((long)plVar30 + 0x1c);
          *(long *)(puVar62 + 0x14) = plVar30[2];
          *(short *)(puVar62 + 0x16) = (short)lVar40;
          *(short *)((long)puVar62 + 0x5a) = (short)iVar29;
          puVar62[0x17] = -(iVar29 + iVar33);
          if ((int)plVar30[3] < 0xe91) {
            lVar40 = plVar30[2] + (long)(int)plVar30[3] + 0x20;
          }
          else {
            lVar40 = FUN_031c36f4();
            plVar30 = *(long **)(puVar62 + 0x12);
          }
          *(long *)(puVar62 + 0x18) = lVar40;
          *(int *)(plVar30 + 3) = (int)plVar30[3] + 0x10;
          *(int *)((long)plVar30 + 0x1c) = *(int *)((long)plVar30 + 0x1c) + 1;
          *(uint *)(*(long *)(puVar62 + 0x18) + 4) = puVar36[1];
          **(uint **)(puVar62 + 0x18) = *puVar36;
          *(undefined4 *)(*(long *)(puVar62 + 0x18) + 8) = 0;
          *(undefined1 *)(*(long *)(puVar62 + 0x18) + 0xe) = 0;
          *(undefined2 *)(*(long *)(puVar62 + 0x18) + 0xc) = *(undefined2 *)((long)puVar36 + 10);
          puVar62[0x1c] = 0;
          uVar49 = *puVar62;
          if (uVar49 != puVar36[1]) {
            if ((char)puVar62[1] == '\0') {
              uVar49 = puVar36[1];
            }
            else {
              plVar30 = *(long **)(*(long *)(param_1 + 8) + 0x658);
              local_1f0 = uVar50;
              (**(code **)(*plVar30 + 0x60))
                        (plVar30,local_228,
                         *(long *)(param_1 + 0x500) + ((ulong)uVar49 & 0xffffff) * 0x20);
              *(undefined1 *)(puVar62 + 1) = 0;
              uVar50 = local_1f0;
              uVar49 = puVar36[1];
            }
          }
          *puVar62 = uVar49;
          puVar62[0x1d] = local_1d0;
          if (local_284 != 0) {
            if (local_278 != (long *)0x0) {
              lVar40 = local_1e8 + uVar50 * 0xc0;
              uStack_1c8 = *(undefined8 *)(lVar40 + 0x68);
              local_1d0 = (uint)*(undefined8 *)(lVar40 + 0x60);
              uStack_1cc = (undefined4)((ulong)*(undefined8 *)(lVar40 + 0x60) >> 0x20);
              local_240 = *(ulong *)(lVar40 + 0x70);
              lVar40 = local_1e8 + uVar35 * 0xc0;
              lVar41 = *local_278;
              uStack_238 = 0;
              auVar71 = *(undefined1 (*) [16])(lVar40 + 0x60);
              auVar90._0_8_ = *(undefined8 *)(lVar40 + 0x70);
              local_1f0 = uVar50;
              if (*(code **)(lVar41 + 0x18) != (code *)0x0) {
                (**(code **)(lVar41 + 0x18))(&DAT_03c7fb74,0,*(undefined8 *)(lVar41 + 0x28));
              }
              puVar59 = (undefined8 *)local_278[2];
              uVar50 = (long)puVar59 + 0x17U & 0xfffffffffffffff8;
              if (uVar50 <= (ulong)local_278[3]) {
                local_278[2] = uVar50;
                if (puVar59 != (undefined8 *)0x0) {
                  *puVar59 = &DAT_03c7fb72;
                  local_258 = lVar61;
                  uVar87 = nn::os::GetSystemTick();
                  puVar59[1] = uVar87;
                  lVar61 = local_258;
                }
              }
              if (((*(byte *)(lVar41 + 0x38) & 1) == 0) || (local_278[6] == 0)) {
LAB_02f69660:
                puVar57 = (undefined8 *)local_278[2];
              }
              else {
                puVar59 = (undefined8 *)local_278[2];
                puVar57 = (undefined8 *)((long)puVar59 + 0x17U & 0xfffffffffffffff8);
                if ((undefined8 *)local_278[3] < puVar57) goto LAB_02f69660;
                local_278[2] = (long)puVar57;
                if (puVar59 != (undefined8 *)0x0) {
                  *puVar59 = &DAT_03c4e575;
                  puVar59[1] = *(undefined8 *)(local_278[6] + 8);
                  goto LAB_02f69660;
                }
              }
              uVar50 = local_1f0;
              param_1 = local_218;
              if (puVar57 != (undefined8 *)0x0) {
                puVar59 = (undefined8 *)((long)puVar57 + 0x13U & 0xfffffffffffffffc);
                uVar45 = (long)puVar59 + 0x1fU & 0xfffffffffffffff8;
                if (uVar45 <= (ulong)local_278[3]) {
                  local_278[2] = uVar45;
                  *puVar57 = &DAT_03c1a9df;
                  puVar57[1] = PTR_DAT_047e48d0;
                  if (puVar59 != (undefined8 *)0x0) {
                    auVar91._4_4_ = uStack_1cc;
                    auVar91._0_4_ = local_1d0;
                    auVar91._8_8_ = uStack_1c8;
                    uVar86 = (undefined4)((ulong)uStack_1c8 >> 0x20);
                    auVar89._12_4_ = uVar86;
                    auVar89._8_4_ = uVar86;
                    auVar89._0_8_ = local_240;
                    auVar90[0xc] = auVar71[0xc];
                    auVar90._8_4_ = auVar71._12_4_;
                    auVar90[0xd] = auVar71[0xd];
                    auVar90[0xe] = auVar71[0xe];
                    auVar90[0xf] = auVar71[0xf];
                    auVar70 = NEON_fmax(auVar89,auVar90,4);
                    *puVar59 = auVar70._0_8_;
                    *(int *)(puVar59 + 1) = auVar70._8_4_;
                    auVar71 = NEON_fmin(auVar91,auVar71,4);
                    *(long *)((long)puVar59 + 0xc) = auVar71._0_8_;
                    *(int *)((long)puVar59 + 0x14) = auVar71._8_4_;
                  }
                }
              }
            }
          }
          local_150 = lVar56 + uVar51 * 0x50;
          Hint_Prefetch(local_208 + 8,0,0,0);
          Hint_Prefetch(local_208 + 0xc,0,0,0);
          Hint_Prefetch(local_210 + 8,0,0,0);
          Hint_Prefetch(local_210 + 0xc,0,0,0);
          local_160 = local_208;
          local_140 = *(long *)(local_1e8 + uVar50 * 0xc0 + 0x78);
          if ((local_140 == 0) || (*(char *)(local_140 + 0x18) != '\x15')) {
            local_148 = 0xffffffff;
          }
          else {
            bVar63 = *(byte *)((long)puVar36 + 0xe) >> 5;
            plVar30 = (long *)(local_140 + (ulong)bVar63 * 8 + 0x48);
            lVar40 = *plVar30;
            local_140 = 0;
            if (lVar40 != 0) {
              local_140 = lVar40 + (long)plVar30;
            }
            local_148 = (uint)bVar63 << 0x1d | 0x1fffffff;
          }
          local_188 = lVar56 + uVar55 * 0x50;
          local_198 = local_210;
          local_178 = *(long *)(local_1e8 + uVar35 * 0xc0 + 0x78);
          if ((local_178 == 0) || (*(char *)(local_178 + 0x18) != '\x15')) {
            local_180 = 0xffffffff;
          }
          else {
            uVar49 = (uint)(*(byte *)((long)puVar36 + 0xe) >> 2);
            plVar30 = (long *)(local_178 + (ulong)(uVar49 & 7) * 8 + 0x48);
            lVar56 = *plVar30;
            local_178 = 0;
            if (lVar56 != 0) {
              local_178 = lVar56 + (long)plVar30;
            }
            local_180 = uVar49 << 0x1d | 0x1fffffff;
          }
          local_158 = local_200;
          local_130 = local_208;
          local_190 = local_1f8;
          local_168 = local_210;
          if ((ulong)(byte)puVar36[2] == 2) {
            lVar56 = *(long *)(*(long *)(param_1 + 0x40) + 0x13c8);
            iVar29 = (int)param_3[0xfb];
            local_170 = local_178;
            local_138 = local_140;
            if (iVar29 != 0) {
              local_328 = nn::os::GetSystemTick();
            }
            if ((((2 < *(byte *)((long)puVar36 + 9)) &&
                 (lVar61 = *(long *)(puVar62 + 6), lVar61 != 0)) && (*(long *)(puVar36 + 8) != 0))
               && ((*(byte *)((long)puVar36 + 0xb) >> 2 & 1) != 0)) {
              uVar46 = (uint)*(byte *)((long)puVar36 + 0x96) * 0x100;
              uVar49 = (uint)(ushort)puVar36[0x25];
              if (uVar46 <= (ushort)puVar36[0x25]) {
                uVar49 = uVar46;
              }
              iVar33 = uVar49 - ((uint)*(ushort *)(local_198[5] + 10) +
                                (uint)*(ushort *)(local_160[5] + 10));
              if (iVar33 < 1) {
                *(int *)(param_3 + 0x1a) = (int)param_3[0x1a] + 1;
              }
              else {
                uVar64 = *(ushort *)(local_198[5] + 8) | *(ushort *)(local_160[5] + 8);
                if ((uVar64 >> 2 & 1) == 0) {
                  lVar40 = local_1b8[1];
                  if (((uVar64 >> 10 & 1) != 0) &&
                     (((short)puVar36[0xf] != 0x3f80 ||
                      ((*(byte *)((long)puVar36 + 0x2e) >> 5 & 1) != 0)))) {
                    uVar64 = *(ushort *)((long)puVar36 + 0x86);
                    fVar83 = (float)*(undefined8 *)(local_158 + 0x38) -
                             (float)*(undefined8 *)(local_190 + 0x38);
                    fVar85 = (float)((ulong)*(undefined8 *)(local_158 + 0x38) >> 0x20) -
                             (float)((ulong)*(undefined8 *)(local_190 + 0x38) >> 0x20);
                    fVar73 = (float)((ulong)*(undefined8 *)(local_158 + 0x30) >> 0x20) -
                             (float)((ulong)*(undefined8 *)(local_190 + 0x30) >> 0x20);
                    fVar66 = *(float *)(lVar40 + 0x20);
                    fVar75 = (float)*(undefined8 *)(lVar40 + 0x48);
                    if (uVar64 == 0) {
                      fVar22 = *(float *)(*(long *)(param_1 + 0x10) +
                                          (ulong)(byte)local_160[8][9] * 0x50 + 0x24) *
                               (float)((uint)*(ushort *)(local_160[9] + 4) << 0x10);
                      fVar84 = *(float *)(*(long *)(param_1 + 0x10) +
                                          (ulong)(byte)local_198[8][9] * 0x50 + 0x24) *
                               (float)((uint)*(ushort *)(local_198[9] + 4) << 0x10);
                      uVar87 = NEON_fmin(CONCAT17((char)((uint)fVar22 >> 0x18),
                                                  CONCAT16((char)((uint)fVar22 >> 0x10),
                                                           CONCAT15((char)((uint)fVar22 >> 8),
                                                                    CONCAT14(SUB41(fVar22,0),fVar22)
                                                                   ))),CONCAT44(fVar84,fVar84),4);
                      auVar68._0_8_ =
                           CONCAT44((int)((float)((ulong)*(undefined8 *)(lVar40 + 0x48) >> 0x20) *
                                         (float)((ulong)uVar87 >> 0x20)),
                                    (int)(fVar75 * (float)uVar87));
                      auVar68._8_8_ = auVar68._0_8_;
                      uVar87 = NEON_sqxtun(auVar68._0_8_,auVar68,4);
                      uVar64 = (ushort)uVar87;
                      *(ushort *)((long)puVar36 + 0x86) = uVar64;
                    }
                    iVar23 = ~(int)(fVar66 * fVar75 * 1.03 *
                                   (float)(((int)(fVar83 * fVar83 + fVar85 * fVar85 +
                                                 fVar73 * fVar73) >> 1) + 0x1fbb4000)) +
                             (uint)uVar64;
                    if (iVar23 < 1) {
                      *(int *)((long)param_3 + 0xd4) = *(int *)((long)param_3 + 0xd4) + 1;
                      goto LAB_02f68474;
                    }
                    *(short *)((long)puVar36 + 0x86) = (short)iVar23;
                  }
                  *(short *)(puVar36 + 0x25) = (short)iVar33;
                  if ((*(char *)((long)puVar62 + 0x79) == '\0') &&
                     ((*(char *)((long)puVar62 + 0x7a) == '\0' ||
                      (*(short *)((long)puVar36 + 0x9a) == -1)))) {
                    plVar30 = *(long **)(*(long *)(param_1 + 8) + 0x658);
                    (**(code **)(*plVar30 + 0x68))
                              (plVar30,param_1,lVar40,puVar36,&local_160,&local_198,0,
                               *(undefined8 *)(puVar62 + 4),lVar61);
                  }
                  else {
                    puVar57 = *(undefined8 **)local_260;
                    puVar59 = puVar57;
                    if (*(char *)((long)puVar57 + 0xe) == '\0') {
                      if (*(int *)(puVar57 + 1) != 0) {
                        lVar56 = *(long *)(puVar62 + 0x12);
                        if (*(int *)(lVar56 + 0x18) < 0xf91) {
                          puVar59 = (undefined8 *)
                                    (*(long *)(lVar56 + 0x10) + (long)*(int *)(lVar56 + 0x18) + 0x20
                                    );
                        }
                        else {
                          puVar59 = (undefined8 *)FUN_031c36f4(lVar56);
                        }
                        uVar87 = puVar57[1];
                        *puVar59 = *puVar57;
                        puVar59[1] = uVar87;
                        *(undefined8 **)local_260 = puVar59;
                        *(int *)(lVar56 + 0x18) = *(int *)(lVar56 + 0x18) + 0x10;
                        *(int *)(lVar56 + 0x1c) = *(int *)(lVar56 + 0x1c) + 1;
                      }
                      iVar33 = 1;
                      *(undefined1 *)((long)puVar59 + 0xe) = 1;
                    }
                    else {
                      iVar33 = *(int *)(puVar57 + 1) + 1;
                    }
                    *(int *)(puVar59 + 1) = iVar33;
                    *(undefined1 *)((long)puVar62 + 0x7b) = 0;
                    lVar56 = local_150 - *(long *)(param_1 + 0x20);
                    lVar40 = *(long *)(puVar62 + 0x12);
                    lVar61 = local_188 - *(long *)(param_1 + 0x20);
                    if (*(int *)(lVar40 + 0x18) < 0xf91) {
                      puVar59 = (undefined8 *)
                                (*(long *)(lVar40 + 0x10) + (long)*(int *)(lVar40 + 0x18) + 0x20);
                    }
                    else {
                      puVar59 = (undefined8 *)FUN_031c36f4(lVar40);
                    }
                    *puVar59 = puVar36;
                    *(short *)(puVar59 + 1) = (short)(lVar56 >> 4) * -0x3333;
                    *(short *)((long)puVar59 + 10) = (short)(lVar61 >> 4) * -0x3333;
                    *(int *)(lVar40 + 0x18) = *(int *)(lVar40 + 0x18) + 0x10;
                    *(int *)(lVar40 + 0x1c) = *(int *)(lVar40 + 0x1c) + 1;
                  }
                  if (iVar29 != 0) {
                    lVar56 = nn::os::GetSystemTick();
                    param_3[0x15] = param_3[0x15] + (lVar56 - local_328);
                    param_3[0x1c] = param_3[0x1c] + (lVar56 - local_328);
                    *(int *)(param_3 + 0x16) = (int)param_3[0x16] + 1;
                    *(int *)(param_3 + 0x1d) = (int)param_3[0x1d] + 1;
                  }
                  goto LAB_02f68848;
                }
              }
LAB_02f68474:
              *(undefined2 *)((long)puVar36 + 0x86) = 0;
            }
            puVar59 = *(undefined8 **)(puVar62 + 0x18);
            lVar61 = *(long *)(puVar62 + 0x12);
            iVar33 = *(int *)(lVar61 + 0x18);
            if (*(char *)((long)puVar59 + 0xe) != '\0') {
              if (iVar33 < 0xf91) {
                puVar57 = (undefined8 *)(*(long *)(lVar61 + 0x10) + (long)iVar33 + 0x20);
              }
              else {
                puVar57 = (undefined8 *)FUN_031c36f4(lVar61);
              }
              uVar87 = puVar59[1];
              *puVar57 = *puVar59;
              puVar57[1] = uVar87;
              *(undefined8 **)local_260 = puVar57;
              *(undefined4 *)(puVar57 + 1) = 0;
              *(undefined1 *)((long)puVar57 + 0xe) = 0;
              iVar33 = *(int *)(lVar61 + 0x18) + 0x10;
              *(int *)(lVar61 + 0x18) = iVar33;
              *(int *)(lVar61 + 0x1c) = *(int *)(lVar61 + 0x1c) + 1;
            }
            if (iVar33 < 0xda1) {
              lVar40 = *(long *)(lVar61 + 0x10) + (long)iVar33 + 0x20;
            }
            else {
              lVar40 = FUN_031c36f4(lVar61);
            }
            if ((int)param_3[0xfb] != 0) {
              nn::os::GetSystemTick();
            }
            uVar64 = *(ushort *)local_198[9];
            uVar67 = NEON_scvtf((ulong)CONCAT24(*(ushort *)local_160[9],
                                                (uint)*(ushort *)local_160[9]),4);
            uVar87 = NEON_scvtf((ulong)CONCAT15((char)(uVar64 >> 8),
                                                CONCAT14((char)uVar64,(uint)uVar64)),4);
            lStack_e8 = CONCAT44((float)((ulong)*(undefined8 *)(local_1b8[1] + 0x50) >> 0x20) *
                                 ((float)((ulong)uVar67 >> 0x20) + (float)((ulong)uVar87 >> 0x20)),
                                 (float)*(undefined8 *)(local_1b8[1] + 0x50) *
                                 ((float)uVar67 + (float)uVar87));
            fVar66 = *(float *)(local_138 + 0x20);
            local_100 = CONCAT44(fVar66,fVar66);
            fVar73 = *(float *)(local_170 + 0x20);
            uStack_f8 = CONCAT17((char)((uint)fVar73 >> 0x18),
                                 CONCAT16((char)((uint)fVar73 >> 0x10),
                                          CONCAT15((char)((uint)fVar73 >> 8),
                                                   CONCAT14(SUB41(fVar73,0),fVar73))));
            local_f0 = CONCAT44(fVar66 + fVar73,fVar66 + fVar73);
            uVar87 = *(undefined8 *)(local_168[1] + 8);
            uVar76 = (undefined1)((ulong)uVar87 >> 8);
            uVar77 = (undefined1)((ulong)uVar87 >> 0x10);
            uVar78 = (undefined1)((ulong)uVar87 >> 0x18);
            uVar79 = (undefined1)((ulong)uVar87 >> 0x20);
            uVar80 = (undefined1)((ulong)uVar87 >> 0x28);
            uVar81 = (undefined1)((ulong)uVar87 >> 0x30);
            uVar82 = (undefined1)((ulong)uVar87 >> 0x38);
            auVar12[9] = uVar76;
            auVar12._0_9_ = *(unkbyte9 *)local_168[1];
            auVar12[10] = uVar77;
            auVar12[0xb] = uVar78;
            auVar12[0xc] = uVar79;
            auVar12[0xd] = uVar80;
            auVar12[0xe] = uVar81;
            auVar12[0xf] = uVar82;
            auVar13[9] = uVar76;
            auVar13._0_9_ = *(unkbyte9 *)local_168[1];
            auVar13[10] = uVar77;
            auVar13[0xb] = uVar78;
            auVar13[0xc] = uVar79;
            auVar13[0xd] = uVar80;
            auVar13[0xe] = uVar81;
            auVar13[0xf] = uVar82;
            NEON_ext(auVar12,auVar13,8,1);
            NEON_ext(*local_168,*local_168,8,1);
            NEON_ext(local_168[2],local_168[2],8,1);
            auVar71 = local_168[2];
            auVar70 = *local_168;
            pauVar60 = local_168 + 1;
            uVar87 = *(undefined8 *)(local_168[1] + 8);
            uVar76 = (undefined1)((ulong)uVar87 >> 8);
            uVar77 = (undefined1)((ulong)uVar87 >> 0x10);
            uVar78 = (undefined1)((ulong)uVar87 >> 0x18);
            uVar79 = (undefined1)((ulong)uVar87 >> 0x20);
            uVar80 = (undefined1)((ulong)uVar87 >> 0x28);
            uVar81 = (undefined1)((ulong)uVar87 >> 0x30);
            uVar82 = (undefined1)((ulong)uVar87 >> 0x38);
            auVar14[9] = uVar76;
            auVar14._0_9_ = *(unkbyte9 *)*pauVar60;
            auVar14[10] = uVar77;
            auVar14[0xb] = uVar78;
            auVar14[0xc] = uVar79;
            auVar14[0xd] = uVar80;
            auVar14[0xe] = uVar81;
            auVar14[0xf] = uVar82;
            auVar15[9] = uVar76;
            auVar15._0_9_ = *(unkbyte9 *)*pauVar60;
            auVar15[10] = uVar77;
            auVar15[0xb] = uVar78;
            auVar15[0xc] = uVar79;
            auVar15[0xd] = uVar80;
            auVar15[0xe] = uVar81;
            auVar15[0xf] = uVar82;
            auVar90 = NEON_ext(auVar14,auVar15,8,1);
            auVar88 = NEON_ext(auVar70,auVar70,8,1);
            auVar91 = NEON_ext(auVar71,auVar71,8,1);
            fVar66 = (float)*(undefined8 *)local_130[2];
            fVar73 = (float)((ulong)*(undefined8 *)local_130[2] >> 0x20);
            fVar75 = (float)*(undefined8 *)(local_130[2] + 8);
            uStack_b8 = CONCAT44(auVar91._4_4_ * fVar75 +
                                 auVar71._4_4_ * fVar66 + auVar91._4_4_ * fVar73,
                                 auVar91._0_4_ * fVar75 +
                                 auVar71._0_4_ * fVar66 + auVar71._4_4_ * fVar73);
            local_c0 = CONCAT44(auVar90._0_4_ * fVar75 +
                                (float)*(undefined8 *)*pauVar60 * fVar66 +
                                (float)((ulong)*(undefined8 *)*pauVar60 >> 0x20) * fVar73,
                                auVar88._0_4_ * fVar75 +
                                auVar70._0_4_ * fVar66 + auVar70._4_4_ * fVar73);
            auVar71 = local_168[2];
            auVar70 = *local_168;
            pauVar60 = local_168 + 1;
            uVar87 = *(undefined8 *)(local_168[1] + 8);
            uVar76 = (undefined1)((ulong)uVar87 >> 8);
            uVar77 = (undefined1)((ulong)uVar87 >> 0x10);
            uVar78 = (undefined1)((ulong)uVar87 >> 0x18);
            uVar79 = (undefined1)((ulong)uVar87 >> 0x20);
            uVar80 = (undefined1)((ulong)uVar87 >> 0x28);
            uVar81 = (undefined1)((ulong)uVar87 >> 0x30);
            uVar82 = (undefined1)((ulong)uVar87 >> 0x38);
            auVar16[9] = uVar76;
            auVar16._0_9_ = *(unkbyte9 *)*pauVar60;
            auVar16[10] = uVar77;
            auVar16[0xb] = uVar78;
            auVar16[0xc] = uVar79;
            auVar16[0xd] = uVar80;
            auVar16[0xe] = uVar81;
            auVar16[0xf] = uVar82;
            auVar17[9] = uVar76;
            auVar17._0_9_ = *(unkbyte9 *)*pauVar60;
            auVar17[10] = uVar77;
            auVar17[0xb] = uVar78;
            auVar17[0xc] = uVar79;
            auVar17[0xd] = uVar80;
            auVar17[0xe] = uVar81;
            auVar17[0xf] = uVar82;
            auVar90 = NEON_ext(auVar16,auVar17,8,1);
            auVar88 = NEON_ext(auVar70,auVar70,8,1);
            auVar91 = NEON_ext(auVar71,auVar71,8,1);
            fVar66 = (float)*(undefined8 *)local_130[1];
            fVar73 = (float)((ulong)*(undefined8 *)local_130[1] >> 0x20);
            fVar75 = (float)*(undefined8 *)(local_130[1] + 8);
            fStack_c8 = auVar91._0_4_ * fVar75 + auVar71._0_4_ * fVar66 + auVar71._4_4_ * fVar73;
            fStack_c4 = auVar91._4_4_ * fVar75 + auVar71._4_4_ * fVar66 + auVar91._4_4_ * fVar73;
            local_d0 = (undefined1 (*) [16])
                       CONCAT44(auVar90._0_4_ * fVar75 +
                                (float)*(undefined8 *)*pauVar60 * fVar66 +
                                (float)((ulong)*(undefined8 *)*pauVar60 >> 0x20) * fVar73,
                                auVar88._0_4_ * fVar75 +
                                auVar70._0_4_ * fVar66 + auVar70._4_4_ * fVar73);
            auVar71 = local_168[2];
            auVar70 = *local_168;
            pauVar60 = local_168 + 1;
            uVar87 = *(undefined8 *)(local_168[1] + 8);
            uVar76 = (undefined1)((ulong)uVar87 >> 8);
            uVar77 = (undefined1)((ulong)uVar87 >> 0x10);
            uVar78 = (undefined1)((ulong)uVar87 >> 0x18);
            uVar79 = (undefined1)((ulong)uVar87 >> 0x20);
            uVar80 = (undefined1)((ulong)uVar87 >> 0x28);
            uVar81 = (undefined1)((ulong)uVar87 >> 0x30);
            uVar82 = (undefined1)((ulong)uVar87 >> 0x38);
            auVar18[9] = uVar76;
            auVar18._0_9_ = *(unkbyte9 *)*pauVar60;
            auVar18[10] = uVar77;
            auVar18[0xb] = uVar78;
            auVar18[0xc] = uVar79;
            auVar18[0xd] = uVar80;
            auVar18[0xe] = uVar81;
            auVar18[0xf] = uVar82;
            auVar19[9] = uVar76;
            auVar19._0_9_ = *(unkbyte9 *)*pauVar60;
            auVar19[10] = uVar77;
            auVar19[0xb] = uVar78;
            auVar19[0xc] = uVar79;
            auVar19[0xd] = uVar80;
            auVar19[0xe] = uVar81;
            auVar19[0xf] = uVar82;
            auVar90 = NEON_ext(auVar18,auVar19,8,1);
            auVar88 = NEON_ext(auVar70,auVar70,8,1);
            auVar91 = NEON_ext(auVar71,auVar71,8,1);
            fVar66 = (float)*(undefined8 *)*local_130;
            fVar73 = (float)((ulong)*(undefined8 *)*local_130 >> 0x20);
            fVar75 = (float)*(undefined8 *)(*local_130 + 8);
            local_e0 = auVar88._0_4_ * fVar75 + auVar70._0_4_ * fVar66 + auVar70._4_4_ * fVar73;
            fStack_dc = auVar90._0_4_ * fVar75 +
                        (float)*(undefined8 *)*pauVar60 * fVar66 +
                        (float)((ulong)*(undefined8 *)*pauVar60 >> 0x20) * fVar73;
            uStack_d8 = (undefined1 (*) [16])
                        CONCAT44(auVar91._4_4_ * fVar75 +
                                 auVar71._4_4_ * fVar66 + auVar91._4_4_ * fVar73,
                                 auVar91._0_4_ * fVar75 +
                                 auVar71._0_4_ * fVar66 + auVar71._4_4_ * fVar73);
            auVar71 = local_168[2];
            fVar66 = (*(float *)local_130[3] - *(float *)local_168[3]) +
                     ((float)*(undefined8 *)local_130[4] - *(float *)local_168[4]);
            fVar73 = (*(float *)(local_130[3] + 4) - *(float *)(local_168[3] + 4)) +
                     ((float)((ulong)*(undefined8 *)local_130[4] >> 0x20) -
                     *(float *)(local_168[4] + 4));
            fVar75 = (*(float *)(local_130[3] + 8) - *(float *)(local_168[3] + 8)) +
                     ((float)*(undefined8 *)(local_130[4] + 8) - *(float *)(local_168[4] + 8));
            uVar87 = *(undefined8 *)(*local_168 + 8);
            uVar76 = (undefined1)((ulong)uVar87 >> 8);
            uVar77 = (undefined1)((ulong)uVar87 >> 0x10);
            uVar78 = (undefined1)((ulong)uVar87 >> 0x18);
            uVar79 = (undefined1)((ulong)uVar87 >> 0x20);
            uVar80 = (undefined1)((ulong)uVar87 >> 0x28);
            uVar81 = (undefined1)((ulong)uVar87 >> 0x30);
            uVar82 = (undefined1)((ulong)uVar87 >> 0x38);
            auVar70 = local_168[1];
            auVar90 = NEON_ext(auVar70,auVar70,8,1);
            auVar20[9] = uVar76;
            auVar20._0_9_ = *(unkbyte9 *)*local_168;
            auVar20[10] = uVar77;
            auVar20[0xb] = uVar78;
            auVar20[0xc] = uVar79;
            auVar20[0xd] = uVar80;
            auVar20[0xe] = uVar81;
            auVar20[0xf] = uVar82;
            auVar21[9] = uVar76;
            auVar21._0_9_ = *(unkbyte9 *)*local_168;
            auVar21[10] = uVar77;
            auVar21[0xb] = uVar78;
            auVar21[0xc] = uVar79;
            auVar21[0xd] = uVar80;
            auVar21[0xe] = uVar81;
            auVar21[0xf] = uVar82;
            auVar88 = NEON_ext(auVar20,auVar21,8,1);
            auVar91 = NEON_ext(auVar71,auVar71,8,1);
            auVar69._0_8_ =
                 CONCAT44(auVar90._0_4_ * fVar75 + auVar70._0_4_ * fVar66 + auVar70._4_4_ * fVar73,
                          auVar88._0_4_ * fVar75 +
                          (float)*(undefined8 *)*local_168 * fVar66 +
                          (float)((ulong)*(undefined8 *)*local_168 >> 0x20) * fVar73);
            auVar69._8_4_ = auVar91._0_4_ * fVar75 + auVar71._0_4_ * fVar66 + auVar71._4_4_ * fVar73
            ;
            auVar69._12_4_ =
                 auVar91._4_4_ * fVar75 + auVar71._4_4_ * fVar66 + auVar91._4_4_ * fVar73;
            uStack_a8 = auVar69._8_8_;
            local_98 = *(undefined8 *)(puVar62 + 4);
            plVar30 = *(long **)(lVar56 + (ulong)*(byte *)(local_138 + 0x18) * 0xf8 +
                                 (ulong)*(byte *)(local_170 + 0x18) * 8 + 0x10);
            local_b0 = auVar69._0_8_;
            local_a0 = puVar36;
            local_90 = param_3 + 0x1f;
            uVar49 = (**(code **)(*plVar30 + 0x20))
                               (plVar30,param_1,local_1b8,&local_100,&local_160,&local_198,puVar36,
                                lVar40,&local_68);
            if (iVar29 != 0) {
              lVar56 = CONCAT44(uStack_64,local_68);
              lVar40 = nn::os::GetSystemTick();
              *(long *)(lVar56 + 8) = (lVar40 - local_328) + *(long *)(lVar56 + 8);
              *(int *)(lVar56 + 0x10) = *(int *)(lVar56 + 0x10) + 1;
            }
            if (0 < (int)uVar49) {
              lVar56 = *(long *)(lVar61 + 0x10);
              if (*(long *)(puVar62 + 0x1a) == 0) {
                iVar33 = *(int *)(lVar61 + 0x18);
                *(long *)(puVar62 + 0x1a) = lVar56 + iVar33 + 0x20;
              }
              else {
                iVar33 = *(int *)(lVar61 + 0x18);
              }
              uVar46 = puVar62[0x1c];
              lVar56 = lVar56 + iVar33;
              if (uVar49 == 1) {
                uVar35 = 0;
              }
              else {
                uVar35 = 0;
                plVar30 = (long *)(lVar56 + 0x1c8);
                do {
                  plVar52 = plVar30 + -0x20;
                  plVar2 = plVar30 + -0x1f;
                  uVar35 = uVar35 + 2;
                  lVar40 = *plVar30;
                  plVar3 = plVar30 + 1;
                  plVar30 = plVar30 + 0x40;
                  uVar46 = *(uint *)(lVar40 + 0x14) |
                           *(uint *)(*plVar52 + 0x14) | uVar46 | *(uint *)(*plVar2 + 0x14) |
                           *(uint *)(*plVar3 + 0x14);
                } while (((ulong)uVar49 & 0xfffffffe) != uVar35);
              }
              if ((uVar49 & 1) != 0) {
                lVar56 = lVar56 + 0x20 + uVar35 * 0x100;
                uVar46 = *(uint *)(*(long *)(lVar56 + 0xa8) + 0x14) | uVar46 |
                         *(uint *)(*(long *)(lVar56 + 0xb0) + 0x14);
              }
              puVar62[0x1c] = uVar46;
              *(uint *)(lVar61 + 0x18) = iVar33 + uVar49 * 0x100;
              *(int *)(lVar61 + 0x1c) = *(int *)(lVar61 + 0x1c) + 1;
              *(uint *)(*(long *)(puVar62 + 0x18) + 8) =
                   *(int *)(*(long *)(puVar62 + 0x18) + 8) + uVar49;
              *(undefined1 *)((long)puVar62 + 0x7b) = 0;
              if (1 < (int)uVar49) {
                *(uint *)(lVar61 + 0x1c) = uVar49 + *(int *)(lVar61 + 0x1c) + -1;
              }
            }
            *(byte *)((long)puVar36 + 0xf) =
                 *(byte *)((long)puVar36 + 0xf) & 0xf7 | (0 < (int)uVar49) << 3;
            if (iVar29 != 0) {
              lVar56 = nn::os::GetSystemTick();
              param_3[0x15] = (lVar56 - local_328) + param_3[0x15];
              *(int *)(param_3 + 0x16) = (int)param_3[0x16] + 1;
            }
          }
          else {
            plVar30 = *(long **)(*(long *)(param_1 + 0x40) + (ulong)(byte)puVar36[2] * 8 + 0x13b8);
            if ((int)plVar30[1] == 0) {
              (**(code **)(*plVar30 + 0x10))
                        (plVar30,param_1,local_1b8,&local_160,local_140,&local_198,local_178,puVar36
                         ,lVar61);
            }
            else {
              plVar52 = (long *)(local_2c0 + 0x28);
              uVar86 = *(undefined4 *)(local_2c0 + 0x40);
              uVar49 = *(uint *)(local_2c0 + 0x44);
              iVar29 = uVar49 + *(int *)(*plVar52 + 8);
              puVar58 = *(uint **)(local_2c0 + 0x38);
              (**(code **)(*plVar30 + 0x28))
                        (plVar30,param_1,local_1b8,&local_160,&local_198,puVar36,local_280,plVar52,
                         local_128,lVar61,puVar62,param_3 + 0x14,0);
              *(uint **)(puVar36 + 8) = puVar58;
              *(short *)(puVar36 + 10) = (short)uVar86;
              *(short *)((long)puVar36 + 0x2a) = (short)uVar49;
              puVar36[0xb] = -iVar29;
              uVar46 = *(uint *)(local_2c0 + 0x44);
              uVar32 = (uVar46 + *(int *)(*plVar52 + 8)) - iVar29;
              if (uVar32 != 0) {
                puVar42 = puVar58;
                if (*(uint **)(local_2c0 + 0x38) != puVar58) {
                  if ((uVar49 & 0xffff) == (*puVar58 & 0xffff)) {
                    puVar58 = *(uint **)(puVar58 + 2);
                    puVar36[10] = 0;
                    uVar49 = 0;
                    puVar42 = *(uint **)(local_2c0 + 0x38);
                  }
                  else {
                    puVar42 = *(uint **)(local_2c0 + 0x38);
                  }
                  if (puVar58 == puVar42) {
                    uVar46 = *(uint *)(local_2c0 + 0x44);
                  }
                  else {
                    uVar46 = *puVar58;
                    puVar42 = puVar58;
                  }
                }
                *(short *)((long)puVar36 + 0x2a) = (short)uVar46 - (short)uVar49;
                *(uint **)(puVar36 + 8) = puVar42;
              }
              puVar36[0xb] = uVar32;
              param_1 = local_218;
            }
          }
LAB_02f68848:
          if (uVar4 != 0) {
            lVar56 = *local_278;
            if (((*(byte *)(lVar56 + 0x38) & 1) == 0) || (local_278[6] == 0)) {
LAB_02f6889c:
              puVar57 = (undefined8 *)local_278[2];
            }
            else {
              puVar59 = (undefined8 *)local_278[2];
              puVar57 = (undefined8 *)((long)puVar59 + 0x17U & 0xfffffffffffffff8);
              if ((undefined8 *)local_278[3] < puVar57) goto LAB_02f6889c;
              local_278[2] = (long)puVar57;
              if (puVar59 != (undefined8 *)0x0) {
                *puVar59 = &DAT_03c4e575;
                puVar59[1] = *(undefined8 *)(local_278[6] + 8);
                goto LAB_02f6889c;
              }
            }
            uVar35 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
            if ((uVar35 <= (ulong)local_278[3]) &&
               (local_278[2] = uVar35, puVar57 != (undefined8 *)0x0)) {
              *puVar57 = &DAT_03c2d363;
              uVar87 = nn::os::GetSystemTick();
              puVar57[1] = uVar87;
            }
            if (*(code **)(lVar56 + 0x20) != (code *)0x0) {
              (**(code **)(lVar56 + 0x20))(*(undefined8 *)(lVar56 + 0x28));
            }
          }
        }
        *(uint *)(local_2c0 + 0x18) =
             *(int *)(local_2c0 + 0x18) + (uint)*(byte *)((long)puVar36 + 9) * 0x10;
        *(int *)(local_2c0 + 0x1c) = *(int *)(local_2c0 + 0x1c) + 1;
      }
LAB_02f688f4:
      lVar61 = param_3[0x10e];
      uVar87 = **(undefined8 **)(lVar61 + 0x48);
      lVar56 = *(long *)(lVar61 + 0x60);
      if (lVar56 != 0) {
        if (*(char *)(lVar61 + 0x7b) == '\0') {
          FUN_02f24e3c(lVar61,*param_3,param_3[1]);
        }
        else {
          *(undefined4 *)(lVar56 + 8) = 0x7777;
          plVar30 = *(long **)(lVar61 + 0x48);
          iVar33 = *(int *)((long)plVar30 + 0x1c);
          puVar59 = (undefined8 *)(lVar61 + 0x50);
          iVar29 = iVar33 + *(int *)(*plVar30 + 8) + *(int *)(lVar61 + 0x5c);
          if (iVar29 != 0) {
            puVar36 = (uint *)*puVar59;
            if (puVar36 == (uint *)plVar30[2]) {
              uVar64 = *(ushort *)(lVar61 + 0x5a);
LAB_02f689a4:
              sVar48 = (short)iVar33;
            }
            else {
              uVar64 = *(ushort *)(lVar61 + 0x5a);
              puVar58 = puVar36;
              puVar42 = (uint *)plVar30[2];
              if ((uint)uVar64 == (*puVar36 & 0xffff)) {
                puVar58 = *(uint **)(puVar36 + 2);
                *(undefined4 *)(lVar61 + 0x58) = 0;
                uVar64 = 0;
                puVar42 = (uint *)plVar30[2];
              }
              puVar36 = puVar42;
              if (puVar58 == puVar36) {
                iVar33 = *(int *)((long)plVar30 + 0x1c);
                goto LAB_02f689a4;
              }
              sVar48 = (short)*puVar58;
              puVar36 = puVar58;
            }
            *(ushort *)(lVar61 + 0x5a) = sVar48 - uVar64;
            *puVar59 = puVar36;
          }
          *(int *)(lVar61 + 0x5c) = iVar29;
          FUN_031c34c8();
          FUN_031c35ac(*(undefined8 *)(lVar61 + 0x48),uVar87,puVar59);
          plVar30 = *(long **)(lVar61 + 0x48);
          lVar56 = plVar30[3];
          iVar29 = *(int *)((long)plVar30 + 0x1c);
          iVar33 = *(int *)(*plVar30 + 8);
          *(long *)(lVar61 + 0x50) = plVar30[2];
          *(short *)(lVar61 + 0x58) = (short)lVar56;
          *(short *)(lVar61 + 0x5a) = (short)iVar29;
          *(int *)(lVar61 + 0x5c) = -(iVar29 + iVar33);
          *(long *)(lVar61 + 0x60) = 0;
          *(undefined8 *)(lVar61 + 0x68) = 0;
        }
      }
      param_4 = local_1d8;
      plVar30 = (long *)param_3[0x11];
      uVar49 = *(uint *)((long)plVar30 + 0xbc);
      iVar29 = uVar49 + *(int *)(plVar30[0x14] + 8) + *(int *)((long)param_3 + 0x80c);
      if (iVar29 < 1) {
        uVar49 = *(uint *)((long)plVar30 + 0xec);
        iVar29 = uVar49 + *(int *)(plVar30[0x1a] + 8) + *(int *)((long)param_3 + 0x82c);
        if (0 < iVar29) {
          puVar36 = (uint *)param_3[0x104];
          if (puVar36 == (uint *)plVar30[0x1c]) {
            uVar64 = *(ushort *)((long)param_3 + 0x82a);
          }
          else {
            uVar64 = *(ushort *)((long)param_3 + 0x82a);
            puVar58 = puVar36;
            puVar42 = (uint *)plVar30[0x1c];
            if ((uint)uVar64 == (*puVar36 & 0xffff)) {
              puVar58 = *(uint **)(puVar36 + 2);
              *(undefined4 *)(param_3 + 0x105) = 0;
              uVar64 = 0;
              puVar42 = (uint *)plVar30[0x1c];
            }
            puVar36 = puVar42;
            if (puVar58 == puVar36) {
              uVar49 = *(uint *)((long)plVar30 + 0xec);
            }
            else {
              uVar49 = *puVar58;
              puVar36 = puVar58;
            }
          }
          param_3[0x104] = (long)puVar36;
          bVar11 = false;
          *(ushort *)((long)param_3 + 0x82a) = (short)uVar49 - uVar64;
          plVar52 = plVar30 + 0x1f;
          *(int *)((long)param_3 + 0x82c) = iVar29;
          puVar37 = (undefined4 *)((long)param_3 + 0x83c);
          goto LAB_02f68b34;
        }
        bVar11 = false;
        bVar24 = true;
      }
      else {
        puVar36 = (uint *)*local_268;
        if (puVar36 == (uint *)plVar30[0x16]) {
          uVar64 = *(ushort *)((long)param_3 + 0x80a);
        }
        else {
          uVar64 = *(ushort *)((long)param_3 + 0x80a);
          puVar58 = puVar36;
          puVar42 = (uint *)plVar30[0x16];
          if ((uint)uVar64 == (*puVar36 & 0xffff)) {
            puVar58 = *(uint **)(puVar36 + 2);
            *(undefined4 *)(param_3 + 0x101) = 0;
            uVar64 = 0;
            puVar42 = (uint *)plVar30[0x16];
          }
          puVar36 = puVar42;
          if (puVar58 == puVar36) {
            uVar49 = *(uint *)((long)plVar30 + 0xbc);
          }
          else {
            uVar49 = *puVar58;
            puVar36 = puVar58;
          }
        }
        *(ushort *)((long)param_3 + 0x80a) = (short)uVar49 - uVar64;
        param_3[0x100] = (long)puVar36;
        plVar52 = plVar30 + 0x19;
        bVar11 = true;
        *(int *)((long)param_3 + 0x80c) = iVar29;
        puVar37 = local_270;
LAB_02f68b34:
        bVar24 = false;
        *puVar37 = (int)*plVar52;
      }
      plVar52 = *(long **)(param_3[0x10e] + 0x48);
      uVar49 = *(uint *)((long)plVar52 + 0x1c);
      iVar29 = uVar49 + *(int *)(*plVar52 + 8) + *(int *)((long)param_3 + 0x7fc);
      if (iVar29 != 0) {
        puVar36 = (uint *)*local_220;
        if (puVar36 == (uint *)plVar52[2]) {
          uVar64 = *(ushort *)((long)param_3 + 0x7fa);
        }
        else {
          uVar64 = *(ushort *)((long)param_3 + 0x7fa);
          puVar58 = puVar36;
          puVar42 = (uint *)plVar52[2];
          if ((uint)uVar64 == (*puVar36 & 0xffff)) {
            puVar58 = *(uint **)(puVar36 + 2);
            *(undefined4 *)(param_3 + 0xff) = 0;
            uVar64 = 0;
            puVar42 = (uint *)plVar52[2];
          }
          puVar36 = puVar42;
          if (puVar58 == puVar36) {
            uVar49 = *(uint *)((long)plVar52 + 0x1c);
          }
          else {
            uVar49 = *puVar58;
            puVar36 = puVar58;
          }
        }
        *(ushort *)((long)param_3 + 0x7fa) = (short)uVar49 - uVar64;
        param_3[0xfe] = (long)puVar36;
      }
      *(int *)((long)param_3 + 0x7fc) = iVar29;
      uVar49 = *(uint *)((long)plVar30 + 0x1c);
      iVar29 = uVar49 + *(int *)(*plVar30 + 8) + *(int *)((long)param_3 + 0x84c);
      if (iVar29 != 0) {
        puVar36 = (uint *)param_3[0x108];
        if (puVar36 == (uint *)plVar30[2]) {
          uVar64 = *(ushort *)((long)param_3 + 0x84a);
        }
        else {
          uVar64 = *(ushort *)((long)param_3 + 0x84a);
          puVar58 = puVar36;
          puVar42 = (uint *)plVar30[2];
          if ((uint)uVar64 == (*puVar36 & 0xffff)) {
            puVar58 = *(uint **)(puVar36 + 2);
            *(undefined4 *)(param_3 + 0x109) = 0;
            uVar64 = 0;
            puVar42 = (uint *)plVar30[2];
          }
          puVar36 = puVar42;
          if (puVar58 == puVar36) {
            uVar49 = *(uint *)((long)plVar30 + 0x1c);
          }
          else {
            uVar49 = *puVar58;
            puVar36 = puVar58;
          }
        }
        *(ushort *)((long)param_3 + 0x84a) = (short)uVar49 - uVar64;
        param_3[0x108] = (long)puVar36;
      }
      lVar56 = *param_3;
      *(int *)((long)param_3 + 0x84c) = iVar29;
      iVar29 = *(int *)(lVar56 + 0x74c) + *(int *)(lVar56 + 0x538);
      if (iVar29 != 0) {
        puVar36 = *(uint **)(lVar56 + 0x740);
        if ((puVar36 !=
             *(uint **)(*(long *)(lVar56 + 0x540) + (long)*(int *)(lVar56 + 0x548) * 8 + -8)) &&
           ((uint)*(ushort *)(lVar56 + 0x74a) == (*puVar36 & 0xffff))) {
          puVar36 = *(uint **)(puVar36 + 2);
          *(undefined4 *)(lVar56 + 0x748) = 0;
        }
        *(short *)(lVar56 + 0x74a) = (short)*puVar36 - *(short *)(lVar56 + 0x74a);
        *(uint **)(lVar56 + 0x740) = puVar36;
      }
      *(int *)(lVar56 + 0x74c) = iVar29;
      local_1e0[1] = *(ulong *)(lVar56 + 0x748);
      uVar35 = *(ulong *)(lVar56 + 0x740);
      local_1e0[2] = *(ulong *)(lVar56 + 0x750);
      *local_1e0 = uVar35;
      puVar37 = *(undefined4 **)
                 (*(long *)(lVar56 + 0x540) + (long)*(int *)(lVar56 + 0x548) * 8 + -8);
      uVar86 = *puVar37;
      uVar5 = *puVar37;
      *(undefined4 **)(lVar56 + 0x740) = puVar37;
      *(short *)(lVar56 + 0x748) = (short)((uint)uVar86 >> 0x10);
      *(short *)(lVar56 + 0x74a) = (short)uVar5;
      *(int *)(lVar56 + 0x74c) = -*(int *)(lVar56 + 0x538);
      if (*(int *)((long)param_3 + 0x85c) != 0 || *(int *)((long)param_3 + 0x84c) != 0) {
        iVar29 = *(int *)(param_3[0xfc] + 0x18);
        if (iVar29 < 0xf31) {
          puVar31 = (ulong *)(*(long *)(param_3[0xfc] + 0x10) + (long)iVar29 + 0x20);
        }
        else {
          puVar31 = (ulong *)FUN_031c36f4();
        }
        lVar56 = *(long *)(*(long *)(*param_3 + 8) + 0xf8);
        bVar63 = *(byte *)(lVar56 + ((ulong)*(uint *)(param_3 + 0x10f) & 0xffffff));
        bVar7 = *(byte *)(lVar56 + ((ulong)*(uint *)((long)param_3 + 0x87c) & 0xffffff));
        *(undefined1 *)(puVar31 + 0xc) = *(undefined1 *)(param_3[0xfd] + 0xb);
        puVar31[0xb] = local_1e0[1];
        puVar31[10] = *local_1e0;
        *(byte *)((long)puVar31 + 0x12) = bVar63;
        *(byte *)((long)puVar31 + 0x13) = bVar7;
        sVar48 = (short)*(undefined4 *)(param_3[0xfd] + 0xc);
        *(short *)((long)puVar31 + 0x14) = sVar48;
        *(bool *)((long)puVar31 + 0x16) = *(char *)(param_3[0x10e] + 5) != '\0';
        uVar46 = (uint)bVar63;
        uVar49 = (uint)bVar7;
        if ((bVar7 & bVar63) == 0xff) {
          uVar32 = (uint)sVar48;
          if (bVar24) goto LAB_02f68dd0;
LAB_02f68e20:
          if (bVar11) {
            uVar35 = local_268[3];
            puVar31[5] = local_268[1];
            puVar31[7] = uVar35;
            uVar35 = *local_268;
            puVar31[6] = local_268[2];
            puVar31[4] = uVar35;
            lVar56 = param_3[0x11];
            uVar86 = *(undefined4 *)(lVar56 + 0xb8);
            iVar29 = *(int *)(lVar56 + 0xbc);
            iVar33 = *(int *)(*(long *)(lVar56 + 0xa0) + 8);
            param_3[0x100] = *(long *)(lVar56 + 0xb0);
            *(short *)(param_3 + 0x101) = (short)uVar86;
            *(short *)((long)param_3 + 0x80a) = (short)iVar29;
            *(int *)((long)param_3 + 0x80c) = -(iVar29 + iVar33);
            *(undefined4 *)(lVar56 + 200) = 0;
            lVar56 = *(long *)(*(long *)(*(long *)(*param_3 + 8) + 0x4a8) + 0x10);
            if ((uVar46 == 0xff) || (uVar49 == 0xff)) goto LAB_02f68f0c;
LAB_02f68e9c:
            puVar43 = (undefined1 *)(*(long *)(lVar56 + 0x30) + (long)(int)uVar32);
          }
          else {
            uVar35 = param_3[0x107];
            puVar31[5] = param_3[0x105];
            puVar31[7] = uVar35;
            uVar35 = param_3[0x104];
            puVar31[6] = param_3[0x106];
            puVar31[4] = uVar35;
            lVar56 = param_3[0x11];
            iVar33 = *(int *)(*(long *)(lVar56 + 0xd0) + 8);
            uVar86 = *(undefined4 *)(lVar56 + 0xe8);
            iVar29 = *(int *)(lVar56 + 0xec);
            param_3[0x104] = *(long *)(lVar56 + 0xe0);
            *(short *)(param_3 + 0x105) = (short)uVar86;
            *(short *)((long)param_3 + 0x82a) = (short)iVar29;
            *(int *)((long)param_3 + 0x82c) = -(iVar29 + iVar33);
            *(undefined4 *)(lVar56 + 0xf8) = 0;
            lVar56 = *(long *)(*(long *)(*(long *)(*param_3 + 8) + 0x4a8) + 0x10);
LAB_02f68f0c:
            puVar43 = (undefined1 *)
                      (*(long *)(lVar56 + 0x80) + (ulong)(byte)(bVar63 ^ bVar7 ^ 0xff));
          }
LAB_02f68f18:
          *puVar43 = 1;
        }
        else {
          uVar32 = (uint)*(ushort *)
                          (*(long *)PTR_DAT_047e34d8 +
                           (((ulong)(uVar49 + 1) & 0xff) * 0x20 + (ulong)(byte)(uVar49 + 1) +
                           (ulong)(byte)(bVar63 + 1)) * 2 + 0x18);
          if (!bVar24) goto LAB_02f68e20;
LAB_02f68dd0:
          puVar31[4] = 0;
          *(undefined4 *)((long)puVar31 + 0x2c) = 0;
          puVar31[6] = 0;
          *(undefined4 *)((long)puVar31 + 0x3c) = 0;
          if (*(int *)((long)param_3 + 0x7fc) != 0) {
            lVar56 = *(long *)(*(long *)(*(long *)(*param_3 + 8) + 0x4a8) + 0x10);
            if (*(char *)(param_3[0x10e] + 5) == '\0') goto LAB_02f68e9c;
            if (uVar46 != 0xff) {
              uVar49 = uVar46;
            }
            puVar43 = (undefined1 *)(*(long *)(lVar56 + 0x80) + (ulong)uVar49);
            goto LAB_02f68f18;
          }
        }
        puVar31[9] = local_220[1];
        puVar31[8] = *local_220;
        if (*(int *)((long)param_3 + 0x84c) == 0) {
          uVar32 = (uint)*(short *)((long)puVar31 + 0x14);
          puVar31[1] = 0;
          *(undefined1 *)(puVar31 + 0xc) = 1;
        }
        else {
          puVar31[1] = param_3[0x108];
          *(short *)(puVar31 + 2) = (short)param_3[0x109];
        }
        piVar1 = (int *)(*(long *)(param_3[0x10] + 0x2ab8) + (long)(int)uVar32 * 4);
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = *piVar1 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        *puVar31 = ((ulong)*(uint *)(param_3 + 0x10f) & 0xffffff) << 0x19 |
                   (long)(int)uVar32 << 0x30 |
                   (ulong)(uint)(*(int *)((long)param_3 + 0x87c) << 2) & 0x3fffffc |
                   (ulong)*(byte *)(param_3[0xfd] + 0xb) & 3;
        lVar56 = param_3[0xfc];
        *(int *)(lVar56 + 0x18) = *(int *)(lVar56 + 0x18) + 0x70;
        *(int *)(lVar56 + 0x1c) = *(int *)(lVar56 + 0x1c) + 1;
      }
      plVar30 = *(long **)(param_3[0x10e] + 0x38);
      lVar56 = plVar30[3];
      iVar29 = *(int *)((long)plVar30 + 0x1c);
      iVar33 = *(int *)(*plVar30 + 8);
      param_3[0xfe] = plVar30[2];
      *(short *)(param_3 + 0xff) = (short)lVar56;
      *(short *)((long)param_3 + 0x7fa) = (short)iVar29;
      *(int *)((long)param_3 + 0x7fc) = -(iVar29 + iVar33);
      lVar56 = param_3[0x10];
      plVar30 = (long *)param_3[0x11];
      lVar61 = plVar30[3];
      iVar29 = *(int *)((long)plVar30 + 0x1c);
      iVar33 = *(int *)(*plVar30 + 8);
      param_3[0x108] = plVar30[2];
      *(short *)(param_3 + 0x109) = (short)lVar61;
      *(short *)((long)param_3 + 0x84a) = (short)iVar29;
      *(int *)((long)param_3 + 0x84c) = -(iVar29 + iVar33);
      uVar49 = *(int *)*param_3 + 1;
      puVar31 = (ulong *)(*(long *)(lVar56 + 0x5c0) +
                         (long)*(int *)(*(long *)(lVar56 + 0x170) +
                                       (-(ulong)(uVar49 >> 0x1f) & 0xffffffc000000000 |
                                       (ulong)uVar49 << 6)) * 0x40);
      do {
        uVar35 = *puVar31;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar31,0x10);
        if (bVar11) {
          *puVar31 = uVar35 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uint)uVar35 < (uint)(uVar35 >> 0x20)) {
        local_100 = CONCAT44(local_100._4_4_,(uint)uVar35);
      }
      else {
        iVar29 = FUN_03232ac8(lVar56 + 0x130,(ulong)uVar49,1,&local_100);
        if (iVar29 == 0) break;
        uVar35 = local_100 & 0xffffffff;
      }
      lVar56 = lVar56 + (ulong)*(uint *)(lVar56 + 0x128) * 0x10;
      uVar49 = (uint)uVar35;
      lVar61 = lVar56 + 0x18;
      if (*(uint *)(lVar56 + 0x30) <= uVar49) {
        lVar61 = lVar56 + 0x28;
      }
      plVar30 = (long *)(lVar61 + 0x10);
      do {
        puVar36 = (uint *)(plVar30 + -1);
        plVar30 = plVar30 + -2;
      } while (uVar49 < *puVar36);
      if (*plVar30 == 0) break;
      plVar30 = (long *)(*plVar30 + (ulong)(uVar49 - *puVar36) * 0x10);
      lVar56 = *plVar30 + (ulong)*(ushort *)(plVar30 + 1);
      param_3[0xfd] = lVar56 + 0x20;
      cVar10 = *(char *)(lVar56 + 0x2b);
      if (cVar10 == '\x01') {
        uVar49 = 0xffffffff;
        lVar61 = *(long *)(*(long *)(*param_3 + 8) + 0x500) + 0x20;
        *(int *)(param_3 + 0x12) = (int)param_3[0x12] + 1;
      }
      else {
        if (cVar10 == '\0') {
          lVar61 = *(long *)(*(long *)(*param_3 + 8) + 0x500) + 0x540;
        }
        else {
          lVar61 = *(long *)(*(long *)(*param_3 + 8) + 0x500);
          if (cVar10 == '\x02') {
            lVar61 = lVar61 + 0x20;
            uVar49 = 0xffffffff;
            *(int *)((long)param_3 + 0x94) = *(int *)((long)param_3 + 0x94) + 1;
            goto LAB_02f6915c;
          }
          lVar61 = *(long *)(lVar61 + 0x950);
        }
        uVar49 = 0;
        *(int *)(param_3 + 0x13) = (int)param_3[0x13] + 1;
      }
LAB_02f6915c:
      puVar58 = *(uint **)(lVar56 + 0x20);
      uVar64 = *(ushort *)(lVar56 + 0x28);
      puVar36 = (uint *)param_3[6];
      uVar46 = *(uint *)(param_3 + 7);
      if (puVar36 == puVar58) {
        *(uint *)(param_3 + 7) = uVar46 + 1;
      }
      else {
        if (uVar46 != 0) {
          if (uVar46 == (*puVar36 & 0xffff)) {
            lVar56 = param_3[5];
            puVar59 = (undefined8 *)param_3[8];
            *(undefined8 *)(*(long *)(lVar56 + 0x10) + (long)(int)puVar36[1] * 8) = 0;
            *(undefined1 *)(lVar56 + 0xc) = 1;
            iVar29 = *(int *)(puVar59 + 0xb);
            lVar56 = puVar59[1];
            *(uint **)(lVar56 + (long)iVar29 * 8) = puVar36;
            *(int *)(puVar59 + 0xb) = iVar29 + 1;
            if (*(int *)((long)puVar59 + 0x5c) <= iVar29 + 1) {
              (**(code **)(*(long *)*puVar59 + 0x28))
                        ((long *)*puVar59,lVar56 + (long)(iVar29 + -5) * 8,6);
              *(int *)(puVar59 + 0xb) = iVar29 + -5;
            }
          }
          else {
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar36,0x10);
              if (bVar11) {
                *puVar36 = *puVar36 - uVar46;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          *(undefined4 *)(param_3 + 7) = 0;
          *(undefined1 *)(param_3[5] + 0xc) = 1;
        }
        *(undefined4 *)(param_3 + 7) = 1;
        param_3[5] = lVar61;
        param_3[6] = (long)puVar58;
      }
      lVar56 = param_3[0xc];
      param_3[2] = (long)puVar58;
      param_3[3] = (long)puVar58 + (ulong)uVar64 + 0x20;
      param_3[4] = 0x100000000;
      if (lVar56 != lVar61 + 0x100) {
        uVar46 = *(uint *)(param_3 + 0xe);
        if (uVar46 != 0) {
          puVar36 = (uint *)param_3[0xd];
          if (uVar46 == (*puVar36 & 0xffff)) {
            puVar59 = (undefined8 *)param_3[0xf];
            *(undefined8 *)(*(long *)(lVar56 + 0x10) + (long)(int)puVar36[1] * 8) = 0;
            *(undefined1 *)(lVar56 + 0xc) = 1;
            iVar29 = *(int *)(puVar59 + 0xb);
            lVar56 = puVar59[1];
            *(uint **)(lVar56 + (long)iVar29 * 8) = puVar36;
            *(int *)(puVar59 + 0xb) = iVar29 + 1;
            if (*(int *)((long)puVar59 + 0x5c) <= iVar29 + 1) {
              (**(code **)(*(long *)*puVar59 + 0x28))
                        ((long *)*puVar59,lVar56 + (long)(iVar29 + -5) * 8,6);
              *(int *)(puVar59 + 0xb) = iVar29 + -5;
            }
          }
          else {
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar36,0x10);
              if (bVar11) {
                *puVar36 = *puVar36 - uVar46;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
          }
          *(undefined4 *)(param_3 + 0xe) = 0;
          *(undefined1 *)(param_3[0xc] + 0xc) = 1;
        }
        param_3[0xc] = lVar61 + 0x100;
      }
      *(undefined4 *)(param_3 + 0x10f) = *(undefined4 *)((long)puVar58 + (ulong)uVar64 + 0x24);
      pauVar60 = (undefined1 (*) [16])((long)puVar58 + (ulong)uVar64 + 0x20);
      lVar56 = *param_3;
      *(undefined4 *)((long)param_3 + 0x87c) = *(undefined4 *)*pauVar60;
      puVar37 = *(undefined4 **)
                 (*(long *)(lVar56 + 0x540) + (long)*(int *)(lVar56 + 0x548) * 8 + -8);
      uVar86 = *puVar37;
      uVar5 = *puVar37;
      *(undefined4 **)(lVar56 + 0x740) = puVar37;
      *(short *)(lVar56 + 0x748) = (short)((uint)uVar86 >> 0x10);
      *(short *)(lVar56 + 0x74a) = (short)uVar5;
      *(int *)(lVar56 + 0x74c) = -*(int *)(lVar56 + 0x538);
    } while (pauVar60 != (undefined1 (*) [16])0x0);
  }
  puVar36 = puVar62 + 0x18;
  if (*(long *)puVar36 == 0) goto LAB_02f69c44;
  if (*(char *)((long)puVar62 + 0x7b) == '\0') {
    FUN_02f24e3c(puVar62,param_1,local_1b8);
    goto LAB_02f69c44;
  }
  puVar58 = puVar62 + 0x14;
  uVar87 = **(undefined8 **)(puVar62 + 0x12);
  *(undefined4 *)(*(long *)puVar36 + 8) = 0x7777;
  plVar34 = *(long **)(puVar62 + 0x12);
  iVar29 = *(int *)((long)plVar34 + 0x1c);
  uVar49 = iVar29 + *(int *)(*plVar34 + 8) + puVar62[0x17];
  if (uVar49 != 0) {
    puVar42 = *(uint **)puVar58;
    if (puVar42 == (uint *)plVar34[2]) {
      uVar64 = *(ushort *)((long)puVar62 + 0x5a);
LAB_02f69bec:
      sVar48 = (short)iVar29;
    }
    else {
      uVar64 = *(ushort *)((long)puVar62 + 0x5a);
      puVar44 = puVar42;
      puVar28 = (uint *)plVar34[2];
      if ((uint)uVar64 == (*puVar42 & 0xffff)) {
        puVar44 = *(uint **)(puVar42 + 2);
        puVar62[0x16] = 0;
        uVar64 = 0;
        puVar28 = (uint *)plVar34[2];
      }
      puVar42 = puVar28;
      if (puVar44 == puVar42) {
        iVar29 = *(int *)((long)plVar34 + 0x1c);
        goto LAB_02f69bec;
      }
      sVar48 = (short)*puVar44;
      puVar42 = puVar44;
    }
    *(ushort *)((long)puVar62 + 0x5a) = sVar48 - uVar64;
    *(uint **)puVar58 = puVar42;
  }
  puVar62[0x17] = uVar49;
  FUN_031c34c8();
  FUN_031c35ac(*(undefined8 *)(puVar62 + 0x12),uVar87,puVar58);
  plVar34 = *(long **)(puVar62 + 0x12);
  lVar56 = plVar34[3];
  iVar29 = *(int *)((long)plVar34 + 0x1c);
  iVar33 = *(int *)(*plVar34 + 8);
  *(long *)(puVar62 + 0x14) = plVar34[2];
  *(short *)(puVar62 + 0x16) = (short)lVar56;
  *(short *)((long)puVar62 + 0x5a) = (short)iVar29;
  puVar62[0x17] = -(iVar29 + iVar33);
  puVar36[0] = 0;
  puVar36[1] = 0;
  puVar62[0x1a] = 0;
  puVar62[0x1b] = 0;
LAB_02f69c44:
  puVar59 = local_118;
  if ((local_110 != (uint *)0x0) && (local_128[0] != 0)) {
    if (local_108 == (*local_110 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_128[0] + 0x10) + (long)(int)local_110[1] * 8) = 0;
      *(undefined1 *)(local_128[0] + 0xc) = 1;
      iVar29 = *(int *)(local_118 + 0xb);
      lVar56 = local_118[1];
      *(uint **)(lVar56 + (long)iVar29 * 8) = local_110;
      *(int *)(local_118 + 0xb) = iVar29 + 1;
      if (*(int *)((long)local_118 + 0x5c) <= iVar29 + 1) {
        (**(code **)(*(long *)*local_118 + 0x28))
                  ((long *)*local_118,lVar56 + (long)(iVar29 + -5) * 8,6);
        *(int *)(puVar59 + 0xb) = iVar29 + -5;
      }
    }
    else {
      do {
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(local_110,0x10);
        if (bVar11) {
          *local_110 = *local_110 - local_108;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
  }
  if ((local_104 != 0) && (*(char *)(local_128[0] + 0xc) == '\0')) {
    piVar1 = (int *)(local_128[0] + 8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = *piVar1 - local_104;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  return;
}


