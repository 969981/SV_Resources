/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001080b0; name: FUN_001080b0
 */


uint * FUN_001080b0(uint *param_1,undefined8 *param_2,uint param_3,uint param_4,ulong param_5,
                   uint *param_6,uint *param_7,undefined8 *param_8,uint param_9,int *param_10,
                   undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined2 uVar16;
  ushort uVar17;
  undefined *puVar18;
  int iVar19;
  byte *pbVar20;
  int iVar21;
  char *pcVar22;
  uint *puVar23;
  ushort *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  undefined8 uVar29;
  char *pcVar30;
  byte *pbVar31;
  undefined8 uVar32;
  undefined8 *puVar33;
  int iVar34;
  ulong uVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  ushort *puVar39;
  long lVar40;
  long lVar41;
  int iVar42;
  undefined8 *puVar43;
  undefined1 *puVar44;
  long lVar45;
  long lVar46;
  undefined1 *puVar47;
  uint *puVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  int local_5bc;
  uint local_5a0 [2];
  uint *local_598;
  uint local_590;
  uint *local_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined2 local_540 [68];
  undefined1 auStack_4b8 [256];
  undefined1 auStack_3b8 [192];
  undefined4 local_2f8;
  byte *local_2f0;
  byte *local_2e8;
  undefined8 local_2e0;
  byte abStack_2d8 [16];
  uint local_2c8 [2];
  long local_2c0;
  uint local_2b8;
  uint local_2b4;
  byte *local_2b0;
  undefined2 *local_2a8;
  undefined2 *local_2a0;
  undefined8 local_298;
  int local_270;
  uint local_26c;
  long local_268;
  undefined2 *local_260;
  undefined2 *local_258;
  undefined8 local_250;
  int local_228;
  uint local_224;
  long local_220;
  char *local_218;
  char *local_210;
  undefined8 local_208;
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  int local_1e0;
  uint local_1dc;
  long local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  int local_198;
  uint local_194;
  long local_190;
  byte *local_188;
  byte *local_180;
  undefined8 local_178;
  byte abStack_170 [16];
  uint local_160 [2];
  long local_158;
  uint local_150;
  uint local_14c;
  byte *local_148;
  ushort *local_140;
  ushort *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  int local_108;
  uint local_104;
  long local_100;
  byte *local_f8;
  byte *local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  int local_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  int local_78;
  uint uStack_74;
  undefined8 local_70;
  
  local_590 = 0;
  local_5a0[0] = 0;
  local_598 = param_6;
  local_588 = param_6;
  iVar19 = FUN_0010c720(param_11);
  iVar21 = (int)param_5;
  if (iVar19 == 0) {
LAB_00108188:
    uVar49 = param_3 >> 3;
    local_70 = *param_8;
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_a0 = 4;
    local_1dc = uVar49 + 0x20f & 0x3ffffff0;
    local_270 = 0x20 - (int)LZCOUNT(uVar49 + 0x1ff);
    local_b8 = param_8[1];
    local_f0 = (byte *)0x0;
    uStack_e8 = 4;
    local_f8 = (byte *)0x0;
    uStack_bc = (param_3 >> 4) + 0x20f & 0x1ffffff0;
    local_c0 = 0x20 - (int)LZCOUNT((param_3 >> 4) + 0x1ff);
    local_104 = ((uVar49 & 0x7fffff) << 6 | 0xf) + 0x200 & 0x3fffffc0;
    local_14c = (param_3 & 0x1ffffff8) + 0x20f & 0x3ffffff0;
    local_100 = param_8[2];
    local_108 = 0x20 - (int)LZCOUNT(uVar49 * 0x40 + 0x1ff);
    local_130 = 8;
    local_138 = (ushort *)0x0;
    local_140 = (ushort *)0x0;
    local_148 = (byte *)param_8[3];
    local_150 = 0x20 - (int)LZCOUNT((param_3 & 0xfffffff8) + 0x1ff);
    local_178 = 8;
    local_180 = (byte *)0x0;
    local_188 = (byte *)0x0;
    puVar37 = (undefined8 *)((long)param_2 + (ulong)param_3 + (ulong)((param_4 - 8) * iVar21) + -8);
    local_190 = param_8[4];
    local_1c0 = 0x1000000005;
    local_1c8 = 0;
    local_1d0 = (char *)0x0;
    local_1d8 = param_8[5];
    local_208 = 0x1000000005;
    local_210 = (char *)0x0;
    local_218 = (char *)0x0;
    local_26c = (param_3 >> 2 & 0x1ffffffe) + 0x40f & 0x3ffffff0;
    local_220 = param_8[6];
    local_250 = 0xb;
    local_258 = (undefined2 *)0x0;
    local_260 = (undefined2 *)0x0;
    local_268 = param_8[7];
    local_298 = 0x4000000000b;
    local_2a0 = (undefined2 *)0x0;
    local_2a8 = (undefined2 *)0x0;
    local_2b0 = (byte *)param_8[8];
    local_2e0 = 4;
    local_2e8 = (byte *)0x0;
    local_2f0 = (byte *)0x0;
    local_2b8 = 0x20 - (int)LZCOUNT(uVar49 * 0x30 + 0x1ff);
    local_2b4 = (uVar49 * 0x30 & 0x1ffffff0 | 0xf) + 0x200 & 0x3ffffff0;
    local_228 = local_270;
    local_224 = local_26c;
    local_1e0 = local_270;
    local_198 = local_270;
    local_194 = local_1dc;
    local_78 = local_270;
    uStack_74 = local_1dc;
    FUN_0010a550(local_5a0,auStack_80,auStack_88,auStack_98);
    FUN_0010a550(local_5a0,auStack_c8,auStack_d0,auStack_e0);
    puVar44 = auStack_3b8;
    lVar46 = 0x140;
    puVar47 = auStack_4b8;
    do {
      FUN_0010a550(local_5a0,auStack_4b8 + lVar46,puVar44,puVar47);
      lVar46 = lVar46 + 8;
      puVar47 = puVar47 + 0x10;
      puVar44 = puVar44 + 4;
    } while (lVar46 != 0x1c0);
    pcVar5 = (code *)&LAB_00109be0;
    if ((param_9 & 0x8000) != 0) {
      pcVar5 = FUN_00109950;
    }
    FUN_0010a550(local_5a0,auStack_110,auStack_118,auStack_128);
    local_2f8 = 0;
    FUN_0010a550(local_5a0,&local_158,local_160,abStack_170);
    FUN_0010a550(local_5a0,auStack_1a0,auStack_1a8,auStack_1b8);
    FUN_0010a550(local_5a0,auStack_1e8,auStack_1f0,auStack_200);
    FUN_0010a550(local_5a0,&local_2c0,local_2c8,abStack_2d8);
    puVar18 = PTR_DAT_047cb830;
    if (param_4 != 0) {
      lVar46 = (long)(int)(iVar21 * 8 - param_3);
      local_5bc = 0;
      lVar45 = (long)iVar21;
      uVar49 = 0;
      puVar43 = param_2;
      do {
        FUN_00109e60(&local_b0,local_5a0,param_7,iVar19 != 0);
        FUN_00109e60(&local_f8,local_5a0,param_7,iVar19 != 0);
        (*pcVar5)(&local_140,local_5a0,auStack_4b8,param_7);
        if (local_188 == local_180) {
          uVar35 = (ulong)local_590;
          uVar28 = (ulong)local_5a0[0];
          puVar23 = local_598;
          if (local_590 < local_150) {
            puVar23 = local_598 + 1;
            Hint_Prefetch(local_598 + 0x100,0,0,0);
            local_590 = local_590 + 0x20;
            uVar28 = (ulong)*local_598 << (uVar35 & 0x3f) | uVar28;
          }
          uVar35 = uVar28 >> ((ulong)local_150 & 0x3f);
          local_590 = local_590 - local_150;
          uVar25 = 0xffffffffU >> (ulong)(-local_150 & 0x1f) & (uint)uVar28;
          local_598 = puVar23;
          if (uVar25 - 1 < local_14c) {
            local_180 = local_148 + uVar25;
            local_188 = local_148;
            uVar26 = 0xffffffff >> (ulong)(-local_160[0] & 0x1f);
            pbVar20 = local_148;
            pbVar31 = local_148;
            if (local_590 < local_160[0]) goto LAB_00108604;
            do {
              bVar8 = *(byte *)(local_158 + (uVar35 & uVar26));
              uVar12 = (uint)(bVar8 >> 4);
              bVar8 = abStack_170[(ulong)bVar8 & 0xf];
              uVar50 = (uint)uVar35 >> (ulong)uVar12;
              local_590 = local_590 - uVar12;
              while( true ) {
                uVar25 = uVar25 - 1;
                if (local_590 < local_160[0]) {
                  bVar9 = *(byte *)(local_158 +
                                   (ulong)((*puVar23 << (ulong)(local_590 & 0x1f) | uVar50) & uVar26
                                          ));
                  uVar12 = (uint)(bVar9 >> 4);
                  bVar9 = abStack_170[(ulong)bVar9 & 0xf];
                  local_598 = puVar23 + 1;
                  uVar6 = local_590 + 0x20;
                  local_5a0[0] = *puVar23 >> (ulong)(uVar12 - local_590 & 0x1f);
                  if (uVar12 <= local_590) {
                    local_598 = puVar23;
                    uVar6 = local_590;
                    local_5a0[0] = uVar50 >> (ulong)uVar12;
                  }
                  local_590 = uVar6 - uVar12;
                }
                else {
                  bVar9 = *(byte *)(local_158 + (ulong)(uVar50 & uVar26));
                  uVar12 = (uint)(bVar9 >> 4);
                  bVar9 = abStack_170[(ulong)bVar9 & 0xf];
                  local_5a0[0] = uVar50 >> (ulong)uVar12;
                  local_590 = local_590 - uVar12;
                  local_598 = puVar23;
                }
                uVar35 = (ulong)local_5a0[0];
                pbVar31 = pbVar20 + 1;
                *pbVar20 = bVar8 | bVar9 << 4;
                if (uVar25 == 0) goto LAB_001086d4;
                puVar23 = local_598;
                pbVar20 = pbVar31;
                if (local_160[0] <= local_590) break;
LAB_00108604:
                if (param_7 <= local_598) goto LAB_001086b8;
                bVar8 = *(byte *)(local_158 +
                                 (ulong)((*local_598 << (ulong)(local_590 & 0x1f) | (uint)uVar35) &
                                        uVar26));
                uVar12 = (uint)(bVar8 >> 4);
                bVar8 = abStack_170[(ulong)bVar8 & 0xf];
                puVar23 = local_598 + 1;
                uVar6 = local_590 + 0x20;
                uVar50 = *local_598 >> (ulong)(uVar12 - local_590 & 0x1f);
                if (uVar12 <= local_590) {
                  puVar23 = local_598;
                  uVar6 = local_590;
                  uVar50 = (uint)uVar35 >> (ulong)uVar12;
                }
                local_590 = uVar6 - uVar12;
                pbVar20 = pbVar31;
              }
            } while( true );
          }
LAB_001086b8:
          local_5a0[0] = (uint)uVar35;
          local_188 = local_148 + 4;
          local_180 = local_148;
        }
LAB_001086d4:
        FUN_0010a090(&local_1d0,local_5a0,param_7);
        FUN_0010a090(&local_218,local_5a0,param_7);
        local_1d0 = local_218 + (local_190 - local_1d8);
        FUN_0010a2c0(&local_260,local_5a0,param_7);
        FUN_0010a2c0(&local_2a8,local_5a0,param_7);
        if (local_2f0 == local_2e8) {
          uVar28 = (ulong)local_5a0[0];
          puVar23 = local_598;
          uVar25 = local_590;
          if (local_590 < local_2b8) {
            puVar23 = local_598 + 1;
            Hint_Prefetch(local_598 + 0x100,0,0,0);
            uVar25 = local_590 + 0x20;
            uVar28 = (ulong)*local_598 << ((ulong)local_590 & 0x3f) | uVar28;
          }
          uVar35 = uVar28 >> ((ulong)local_2b8 & 0x3f);
          uVar50 = (uint)uVar35;
          uVar25 = uVar25 - local_2b8;
          uVar26 = 0xffffffffU >> (ulong)(-local_2b8 & 0x1f) & (uint)uVar28;
          puVar48 = puVar23;
          if (uVar26 - 1 < local_2b4) {
            local_2e8 = local_2b0 + uVar26;
            local_2f0 = local_2b0;
            if (uVar25 == 0) {
              puVar48 = puVar23 + 1;
              uVar35 = (ulong)*puVar23;
              uVar25 = 0x20;
            }
            uVar28 = uVar35 >> 1 & 0x7fffffff;
            uVar50 = uVar25 - 1;
            uVar51 = (ulong)uVar50;
            if ((uVar35 & 1) == 0) {
              uVar12 = 0xffffffff >> (ulong)(-local_2c8[0] & 0x1f);
              pbVar20 = local_2b0;
              puVar23 = puVar48;
              uVar25 = uVar50;
              if (uVar50 < local_2c8[0]) goto LAB_00108830;
              do {
                bVar8 = *(byte *)(local_2c0 + (uVar28 & uVar12));
                uVar25 = (uint)(bVar8 >> 4);
                *pbVar20 = abStack_2d8[(ulong)bVar8 & 0xf];
                uVar50 = (uint)uVar28 >> (ulong)uVar25;
                uVar25 = (int)uVar51 - uVar25;
                while( true ) {
                  uVar51 = (ulong)uVar25;
                  uVar28 = (ulong)uVar50;
                  uVar26 = uVar26 - 1;
                  pbVar20 = pbVar20 + 1;
                  if (uVar26 == 0) goto LAB_001088f8;
                  puVar23 = puVar48;
                  if (local_2c8[0] <= uVar25) break;
LAB_00108830:
                  uVar50 = (uint)uVar28;
                  if (param_7 <= puVar23) {
                    puVar48 = puVar23;
                    goto LAB_001088e4;
                  }
                  bVar8 = *(byte *)(local_2c0 +
                                   (ulong)((*puVar23 << (ulong)(uVar25 & 0x1f) | uVar50) & uVar12));
                  uVar7 = (uint)(bVar8 >> 4);
                  uVar6 = uVar25 + 0x20;
                  if (uVar7 <= uVar25) {
                    uVar6 = uVar25;
                  }
                  uVar13 = uVar50 >> (ulong)uVar7;
                  puVar48 = puVar23 + 1;
                  uVar50 = *puVar23 >> (ulong)(uVar7 - uVar25 & 0x1f);
                  if (uVar7 <= uVar25) {
                    puVar48 = puVar23;
                    uVar50 = uVar13;
                  }
                  uVar25 = uVar6 - uVar7;
                  *pbVar20 = abStack_2d8[(ulong)bVar8 & 0xf];
                }
              } while( true );
            }
            if (uVar50 < 4) {
              Hint_Prefetch(puVar48 + 0x100,0,0,0);
              uVar50 = uVar25 + 0x1f;
              uVar28 = (ulong)*puVar48 << (uVar51 & 0x3f) | uVar28;
              puVar48 = puVar48 + 1;
            }
            uVar25 = uVar50 - 4;
            memset(local_2b0,(uint)uVar28 & 0xf,(ulong)uVar26);
            uVar50 = (uint)(uVar28 >> 4);
          }
          else {
LAB_001088e4:
            local_2f0 = local_2b0 + 4;
            local_2e8 = local_2b0;
          }
LAB_001088f8:
          local_5a0[0] = uVar50;
          local_598 = puVar48;
          local_590 = uVar25;
        }
        uVar26 = param_4 - uVar49;
        uVar25 = param_3;
        do {
          puVar44 = local_b0;
          pbVar20 = local_f8;
          puVar24 = local_140;
          if ((param_7 <= local_598) || (puStack_a8 <= local_b0)) goto switchD_0010894c_default;
          local_b0 = local_b0 + 1;
          switch(*puVar44) {
          case 0:
            puVar33 = (undefined8 *)((long)puVar43 + lVar45 + lVar45);
            uVar29 = *(undefined8 *)((long)puVar43 + lVar45);
            puVar1 = (undefined8 *)((long)puVar33 + lVar45);
            uVar38 = *puVar1;
            puVar1 = (undefined8 *)((long)puVar1 + lVar45);
            *(undefined8 *)param_1 = *puVar43;
            *(undefined8 *)((long)param_1 + lVar45) = uVar29;
            puVar3 = (undefined8 *)((long)param_1 + lVar45 + lVar45);
            puVar2 = (undefined8 *)((long)puVar1 + lVar45);
            uVar29 = *puVar1;
            uVar32 = *puVar2;
            *puVar3 = *puVar33;
            puVar3 = (undefined8 *)((long)puVar3 + lVar45);
            puVar33 = (undefined8 *)((long)puVar3 + lVar45);
            *puVar3 = uVar38;
            puVar1 = (undefined8 *)((long)puVar33 + lVar45);
            puVar2 = (undefined8 *)((long)puVar2 + lVar45);
            *puVar33 = uVar29;
            *puVar1 = uVar32;
            uVar29 = *(undefined8 *)((long)puVar2 + lVar45);
            puVar1 = (undefined8 *)((long)puVar1 + lVar45);
            *puVar1 = *puVar2;
            *(undefined8 *)((long)puVar1 + lVar45) = uVar29;
            local_5bc = local_5bc + 1;
            break;
          case 1:
            lVar36 = 8;
            if (0xf < uVar25) {
              lVar36 = 0x10;
            }
            iVar27 = -8;
            if ((0xf < uVar25) && (iVar27 = -0x10, (uVar49 >> 3 & 1) == 0)) {
              if (local_f8 < local_f0) {
                local_f8 = local_f8 + 1;
                iVar27 = -0x10;
                lVar36 = 0x10;
                switch(*pbVar20) {
                case 3:
                  if (uVar26 < 0x10) goto switchD_0010894c_default;
                  uVar35 = (ulong)local_590;
                  uVar28 = (ulong)local_5a0[0];
                  puVar23 = local_598;
                  if (local_590 < 4) {
                    puVar23 = local_598 + 1;
                    Hint_Prefetch(local_598 + 0x100,0,0,0);
                    local_590 = local_590 + 0x20;
                    uVar28 = (ulong)*local_598 << (uVar35 & 0x3f) | uVar28;
                  }
                  if (local_138 <= local_140) {
                    local_140 = (ushort *)(local_100 + 4);
                  }
                  uVar35 = uVar28 >> 4;
                  local_590 = local_590 - 4;
                  if (local_2e8 <= local_2f0) {
                    local_2f0 = local_2b0 + 4;
                  }
                  iVar27 = 0;
                  uVar28 = uVar28 & 0xf;
                  iVar34 = 0x40;
                  local_598 = puVar23;
                  puVar24 = local_140;
                  pbVar20 = local_2f0;
                  do {
                    local_2f0 = pbVar20 + 1;
                    if (iVar34 <= (int)(uint)*pbVar20) {
                      local_5a0[0] = (uint)uVar35;
                      break;
                    }
                    iVar42 = *pbVar20 + 1;
                    puVar23 = local_598;
                    uVar51 = uVar35;
                    if (local_590 == 0) {
                      puVar23 = local_598 + 1;
                      uVar51 = (ulong)*local_598;
                      local_590 = 0x20;
                    }
                    iVar34 = iVar34 - iVar42;
                    uVar35 = uVar51 >> 1 & 0x7fffffff;
                    local_5a0[0] = (uint)uVar35;
                    local_590 = local_590 - 1;
                    puVar39 = puVar24;
                    if ((uVar51 & 1) == 0) {
                      do {
                        puVar24 = (ushort *)((long)puVar39 + 1);
                        local_140 = puVar24;
                        lVar36 = (long)iVar27;
                        iVar27 = iVar27 + 1;
                        iVar42 = iVar42 + -1;
                        *(char *)((long)local_540 +
                                 ((ulong)(byte)puVar18[lVar36 + uVar28 * 0x40] - 0x40)) =
                             (char)*puVar39;
                        puVar39 = puVar24;
                      } while (iVar42 != 0);
                    }
                    else {
                      local_140 = (ushort *)((long)puVar24 + 1);
                      uVar17 = *puVar24;
                      do {
                        lVar36 = (long)iVar27;
                        iVar42 = iVar42 + -1;
                        iVar27 = iVar27 + 1;
                        *(char *)((long)local_540 +
                                 ((ulong)(byte)puVar18[lVar36 + uVar28 * 0x40] - 0x40)) =
                             (char)uVar17;
                      } while (iVar42 != 0);
                      puVar24 = (ushort *)((long)puVar24 + 1);
                    }
                    local_598 = puVar23;
                    pbVar20 = pbVar20 + 1;
                  } while (1 < iVar34);
                  if (iVar27 == 0x3f) {
                    local_140 = (ushort *)((long)puVar24 + 1);
                    *(char *)((long)local_540 + ((ulong)(byte)puVar18[uVar28 * 0x40 + 0x3f] - 0x40))
                         = (char)*puVar24;
                  }
                  lVar36 = 0;
                  puVar23 = param_1;
                  do {
                    lVar40 = lVar36 + 8;
                    uVar17 = *(ushort *)((long)local_540 + lVar36 + -0x40);
                    uVar10 = *(ushort *)((long)local_540 + lVar36 + -0x3e);
                    uVar11 = *(ushort *)((long)local_540 + lVar36 + -0x3c);
                    uVar50 = uVar17 & 0xff0000ff | (uint)uVar17 << 8 |
                             (uint)(byte)(uVar17 >> 8) << 0x18;
                    uVar17 = *(ushort *)((long)local_540 + lVar36 + -0x3a);
                    uVar12 = uVar10 & 0xff0000ff | (uint)uVar10 << 8 |
                             (uint)(byte)(uVar10 >> 8) << 0x18;
                    uVar6 = uVar11 & 0xff0000ff | (uint)uVar11 << 8 |
                            (uint)(byte)(uVar11 >> 8) << 0x18;
                    puVar48 = (uint *)((long)puVar23 + lVar45);
                    *puVar23 = uVar50;
                    *puVar48 = uVar50;
                    uVar50 = uVar17 & 0xff0000ff | (uint)uVar17 << 8 |
                             (uint)(byte)(uVar17 >> 8) << 0x18;
                    puVar23[1] = uVar12;
                    puVar48[1] = uVar12;
                    puVar23[2] = uVar6;
                    puVar48[2] = uVar6;
                    puVar23[3] = uVar50;
                    puVar23 = (uint *)((long)puVar48 + lVar45);
                    puVar48[3] = uVar50;
                    lVar36 = lVar40;
                  } while ((int)lVar40 != 0x40);
                  lVar36 = 0x10;
                  iVar27 = -0x10;
                  break;
                case 5:
                  if (uVar26 < 0x10) goto switchD_0010894c_default;
                  if (local_258 <= local_260) {
                    local_260 = (undefined2 *)(local_220 + 4);
                  }
                  local_540[0] = *local_260;
                  local_260 = local_260 + 1;
                  FUN_0010b690(local_540,local_5a0);
                  if (local_590 < 4) {
                    uVar50 = local_5a0[0] | *local_598 << (ulong)(local_590 & 0x1f);
                    local_5a0[0] = *local_598 >> (ulong)(4 - local_590 & 0x1f);
                    local_598 = local_598 + 1;
                    local_590 = local_590 + 0x1c;
                  }
                  else {
                    local_590 = local_590 - 4;
                    uVar50 = local_5a0[0];
                    local_5a0[0] = local_5a0[0] >> 4;
                  }
                  FUN_0010b010(param_1,param_5 & 0xffffffff,local_540,uVar50 & 0xf);
                  iVar27 = -0x10;
                  lVar36 = 0x10;
                  break;
                case 6:
                  if (uVar26 < 0x10) goto switchD_0010894c_default;
                  if (local_138 <= local_140) {
                    puVar24 = (ushort *)(local_100 + 4);
                  }
                  local_140 = (ushort *)((long)puVar24 + 1);
                  uVar14 = CONCAT11((char)*puVar24,(char)*puVar24);
                  uVar15 = CONCAT22(uVar14,uVar14);
                  uVar29 = CONCAT44(uVar15,uVar15);
                  puVar33 = (undefined8 *)((long)param_1 + lVar45);
                  iVar27 = 7;
                  *(undefined8 *)param_1 = uVar29;
                  *(undefined8 *)(param_1 + 2) = uVar29;
                  do {
                    puVar1 = (undefined8 *)((long)puVar33 + lVar45);
                    *puVar33 = uVar29;
                    puVar33[1] = uVar29;
                    puVar33 = (undefined8 *)((long)puVar1 + lVar45);
                    iVar27 = iVar27 + -1;
                    *puVar1 = uVar29;
                    puVar1[1] = uVar29;
                  } while (iVar27 != 0);
                  *(undefined8 *)((long)puVar1 + lVar45) = uVar29;
                  iVar27 = -0x10;
                  lVar36 = 0x10;
                  puVar33[1] = uVar29;
                  break;
                case 8:
                  if (0xf < uVar26) {
                    if (local_138 <= local_140) {
                      puVar24 = (ushort *)(local_100 + 4);
                    }
                    uVar14 = CONCAT11((char)*puVar24,(char)*puVar24);
                    local_140 = puVar24 + 1;
                    uVar16 = CONCAT11(*(undefined1 *)((long)puVar24 + 1),
                                      *(undefined1 *)((long)puVar24 + 1));
                    if (local_180 <= local_188) {
                      local_188 = local_148 + 4;
                    }
                    uVar50 = CONCAT22(uVar14,uVar14);
                    iVar27 = 7;
                    uVar12 = CONCAT22(uVar16,uVar16);
                    puVar23 = param_1;
                    pbVar20 = local_188;
                    while( true ) {
                      local_188 = pbVar20 + 1;
                      bVar8 = *pbVar20;
                      lVar36 = ((ulong)bVar8 & 3) * 4;
                      lVar40 = ((ulong)(bVar8 >> 2) & 3) * 4;
                      lVar41 = ((ulong)(bVar8 >> 4) & 3) * 4;
                      uVar28 = (ulong)(bVar8 >> 4) & 0xc;
                      uVar6 = *(uint *)(&DAT_03cab440 + lVar36) & uVar12 |
                              *(uint *)(&DAT_03cb1e70 + lVar36) & uVar50;
                      uVar7 = *(uint *)(&DAT_03cab440 + lVar40) & uVar12 |
                              *(uint *)(&DAT_03cb1e70 + lVar40) & uVar50;
                      uVar13 = *(uint *)(&DAT_03cab440 + lVar41) & uVar12 |
                               *(uint *)(&DAT_03cb1e70 + lVar41) & uVar50;
                      puVar48 = (uint *)((long)puVar23 + lVar45);
                      *puVar23 = uVar6;
                      *puVar48 = uVar6;
                      puVar23[1] = uVar7;
                      uVar6 = *(uint *)(&DAT_03cab440 + uVar28) & uVar12 |
                              *(uint *)(&DAT_03cb1e70 + uVar28) & uVar50;
                      puVar48[1] = uVar7;
                      puVar23[2] = uVar13;
                      puVar48[2] = uVar13;
                      puVar23[3] = uVar6;
                      puVar48[3] = uVar6;
                      if (iVar27 == 0) break;
                      puVar23 = (uint *)((long)puVar48 + lVar45);
                      iVar27 = iVar27 + -1;
                      pbVar20 = pbVar20 + 1;
                    }
                    goto LAB_001096a0;
                  }
                  goto switchD_0010894c_default;
                case 9:
                  if (uVar26 < 0x10) goto switchD_0010894c_default;
                  if (local_138 <= local_140) {
                    local_140 = (ushort *)(local_100 + 4);
                  }
                  iVar27 = 8;
                  puVar23 = param_1;
                  if (((ulong)local_140 & 3) == 0) {
                    do {
                      uVar17 = *local_140;
                      uVar50 = uVar17 & 0xff0000ff | (uint)uVar17 << 8 |
                               (uint)(byte)(uVar17 >> 8) << 0x18;
                      puVar48 = (uint *)((long)puVar23 + lVar45);
                      *puVar23 = uVar50;
                      *puVar48 = uVar50;
                      uVar17 = local_140[1];
                      iVar27 = iVar27 + -1;
                      uVar50 = uVar17 & 0xff0000ff | (uint)uVar17 << 8 |
                               (uint)(byte)(uVar17 >> 8) << 0x18;
                      puVar23[1] = uVar50;
                      puVar48[1] = uVar50;
                      uVar17 = local_140[2];
                      uVar50 = uVar17 & 0xff0000ff | (uint)uVar17 << 8 |
                               (uint)(byte)(uVar17 >> 8) << 0x18;
                      puVar23[2] = uVar50;
                      puVar48[2] = uVar50;
                      uVar17 = local_140[3];
                      uVar50 = uVar17 & 0xff0000ff | (uint)uVar17 << 8 |
                               (uint)(byte)(uVar17 >> 8) << 0x18;
                      local_140 = local_140 + 4;
                      puVar23[3] = uVar50;
                      puVar48[3] = uVar50;
                      puVar23 = (uint *)((long)puVar23 + (long)(iVar21 << 1));
                    } while (iVar27 != 0);
                  }
                  else {
                    do {
                      uVar50 = CONCAT13(*(undefined1 *)((long)local_140 + 1),
                                        CONCAT12(*(undefined1 *)((long)local_140 + 1),
                                                 CONCAT11((char)*local_140,(char)*local_140)));
                      puVar48 = (uint *)((long)puVar23 + lVar45);
                      iVar27 = iVar27 + -1;
                      *puVar23 = uVar50;
                      *puVar48 = uVar50;
                      uVar50 = CONCAT13(*(undefined1 *)((long)local_140 + 3),
                                        CONCAT12(*(undefined1 *)((long)local_140 + 3),
                                                 CONCAT11((char)local_140[1],(char)local_140[1])));
                      puVar23[1] = uVar50;
                      puVar48[1] = uVar50;
                      uVar50 = CONCAT13(*(undefined1 *)((long)local_140 + 5),
                                        CONCAT12(*(undefined1 *)((long)local_140 + 5),
                                                 CONCAT11((char)local_140[2],(char)local_140[2])));
                      puVar23[2] = uVar50;
                      puVar48[2] = uVar50;
                      uVar50 = CONCAT13(*(undefined1 *)((long)local_140 + 7),
                                        CONCAT12(*(undefined1 *)((long)local_140 + 7),
                                                 CONCAT11((char)local_140[3],(char)local_140[3])));
                      local_140 = local_140 + 4;
                      puVar23[3] = uVar50;
                      puVar48[3] = uVar50;
                      puVar23 = (uint *)((long)puVar23 + (long)(iVar21 << 1));
                    } while (iVar27 != 0);
                  }
                  iVar27 = -0x10;
                  lVar36 = 0x10;
                }
              }
              else {
LAB_001096a0:
                iVar27 = -0x10;
                lVar36 = 0x10;
              }
            }
            goto switchD_00108a34_caseD_4;
          case 2:
            if (local_218 < local_210) {
              pcVar22 = local_218;
              pcVar30 = local_1d0;
            }
            else {
              pcVar22 = (char *)(local_1d8 + 4);
              pcVar30 = (char *)(local_190 + 4);
            }
            local_218 = pcVar22 + 1;
            local_1d0 = pcVar30 + 1;
            puVar33 = (undefined8 *)((long)puVar43 + (long)*pcVar30 + (long)(*pcVar22 * iVar21));
            if ((param_2 <= puVar33) && (puVar33 <= puVar37)) {
              puVar1 = (undefined8 *)((long)puVar33 + lVar45 + lVar45);
              uVar29 = *(undefined8 *)((long)puVar33 + lVar45);
              puVar2 = (undefined8 *)((long)puVar1 + lVar45);
              puVar3 = (undefined8 *)((long)param_1 + lVar45 + lVar45);
              *(undefined8 *)param_1 = *puVar33;
              uVar32 = *puVar1;
              puVar4 = (undefined8 *)((long)puVar3 + lVar45);
              *(undefined8 *)((long)param_1 + lVar45) = uVar29;
              uVar29 = *puVar2;
              puVar2 = (undefined8 *)((long)puVar2 + lVar45);
              puVar33 = (undefined8 *)((long)puVar2 + lVar45);
              *puVar3 = uVar32;
              puVar1 = (undefined8 *)((long)puVar33 + lVar45);
              *puVar4 = uVar29;
              uVar29 = *puVar33;
              puVar4 = (undefined8 *)((long)puVar4 + lVar45);
              puVar33 = (undefined8 *)((long)puVar4 + lVar45);
              *puVar4 = *puVar2;
              *puVar33 = uVar29;
              uVar29 = *(undefined8 *)((long)puVar1 + lVar45);
              puVar33 = (undefined8 *)((long)puVar33 + lVar45);
              *puVar33 = *puVar1;
              *(undefined8 *)((long)puVar33 + lVar45) = uVar29;
            }
            break;
          case 3:
            uVar35 = (ulong)local_590;
            uVar28 = (ulong)local_5a0[0];
            puVar23 = local_598;
            if (local_590 < 4) {
              puVar23 = local_598 + 1;
              Hint_Prefetch(local_598 + 0x100,0,0,0);
              local_590 = local_590 + 0x20;
              uVar28 = (ulong)*local_598 << (uVar35 & 0x3f) | uVar28;
            }
            if (local_138 <= local_140) {
              local_140 = (ushort *)(local_100 + 4);
            }
            uVar35 = uVar28 >> 4;
            local_590 = local_590 - 4;
            if (local_2e8 <= local_2f0) {
              local_2f0 = local_2b0 + 4;
            }
            iVar27 = 0;
            uVar28 = uVar28 & 0xf;
            iVar34 = 0x40;
            local_598 = puVar23;
            puVar24 = local_140;
            pbVar20 = local_2f0;
            do {
              pbVar31 = pbVar20 + 1;
              local_2f0 = pbVar31;
              if (iVar34 <= (int)(uint)*pbVar20) {
                local_5a0[0] = (uint)uVar35;
                break;
              }
              iVar42 = *pbVar20 + 1;
              puVar23 = local_598;
              uVar51 = uVar35;
              if (local_590 == 0) {
                puVar23 = local_598 + 1;
                uVar51 = (ulong)*local_598;
                local_590 = 0x20;
              }
              iVar34 = iVar34 - iVar42;
              uVar35 = uVar51 >> 1 & 0x7fffffff;
              local_5a0[0] = (uint)uVar35;
              local_590 = local_590 - 1;
              puVar39 = puVar24;
              if ((uVar51 & 1) == 0) {
                do {
                  puVar24 = (ushort *)((long)puVar39 + 1);
                  local_140 = puVar24;
                  lVar36 = (long)iVar27;
                  iVar27 = iVar27 + 1;
                  iVar42 = iVar42 + -1;
                  *(char *)((long)local_540 + ((ulong)(byte)puVar18[lVar36 + uVar28 * 0x40] - 0x40))
                       = (char)*puVar39;
                  puVar39 = puVar24;
                } while (iVar42 != 0);
              }
              else {
                local_140 = (ushort *)((long)puVar24 + 1);
                uVar17 = *puVar24;
                do {
                  lVar36 = (long)iVar27;
                  iVar42 = iVar42 + -1;
                  iVar27 = iVar27 + 1;
                  *(char *)((long)local_540 + ((ulong)(byte)puVar18[lVar36 + uVar28 * 0x40] - 0x40))
                       = (char)uVar17;
                } while (iVar42 != 0);
                puVar24 = (ushort *)((long)puVar24 + 1);
              }
              local_598 = puVar23;
              pbVar20 = pbVar31;
            } while (1 < iVar34);
            if (iVar27 == 0x3f) {
              local_140 = (ushort *)((long)puVar24 + 1);
              *(char *)((long)local_540 + ((ulong)(byte)puVar18[uVar28 * 0x40 + 0x3f] - 0x40)) =
                   (char)*puVar24;
            }
            *(undefined8 *)param_1 = local_580;
            *(undefined8 *)((long)param_1 + lVar45) = uStack_578;
            puVar33 = (undefined8 *)((long)param_1 + lVar45 + lVar45);
            *puVar33 = local_570;
            puVar33 = (undefined8 *)((long)puVar33 + lVar45);
            *puVar33 = uStack_568;
            puVar33 = (undefined8 *)((long)puVar33 + lVar45);
            *puVar33 = local_560;
            puVar33 = (undefined8 *)((long)puVar33 + lVar45);
            *puVar33 = uStack_558;
            puVar33 = (undefined8 *)((long)puVar33 + lVar45);
            *puVar33 = local_550;
            *(undefined8 *)((long)puVar33 + lVar45) = uStack_548;
            iVar27 = -8;
            lVar36 = 8;
            goto switchD_00108a34_caseD_4;
          case 4:
            if (local_218 < local_210) {
              pcVar22 = local_218;
              pcVar30 = local_1d0;
            }
            else {
              pcVar22 = (char *)(local_1d8 + 4);
              pcVar30 = (char *)(local_190 + 4);
            }
            local_218 = pcVar22 + 1;
            local_1d0 = pcVar30 + 1;
            puVar33 = (undefined8 *)((long)puVar43 + (long)*pcVar30 + (long)(*pcVar22 * iVar21));
            if ((param_2 <= puVar33) && (puVar33 <= puVar37)) {
              if (local_590 < 7) {
                uVar50 = local_5a0[0] | *local_598 << (ulong)(local_590 & 0x1f);
                local_5a0[0] = *local_598 >> (ulong)(7 - local_590 & 0x1f);
                local_598 = local_598 + 1;
                local_590 = local_590 + 0x19;
              }
              else {
                local_590 = local_590 - 7;
                uVar50 = local_5a0[0];
                local_5a0[0] = local_5a0[0] >> 7;
              }
              FUN_0010c240(param_1,param_5 & 0xffffffff,local_5a0,uVar50 & 0x7f,puVar33,
                           param_5 & 0xffffffff);
              goto LAB_00109450;
            }
            break;
          case 5:
            if (local_258 <= local_260) {
              local_260 = (undefined2 *)(local_220 + 4);
            }
            local_540[0] = *local_260;
            local_260 = local_260 + 1;
            FUN_0010b690(local_540,local_5a0);
            if (local_590 < 4) {
              uVar50 = local_5a0[0] | *local_598 << (ulong)(local_590 & 0x1f);
              local_5a0[0] = *local_598 >> (ulong)(4 - local_590 & 0x1f);
              local_598 = local_598 + 1;
              local_590 = local_590 + 0x1c;
            }
            else {
              local_590 = local_590 - 4;
              uVar50 = local_5a0[0];
              local_5a0[0] = local_5a0[0] >> 4;
            }
            FUN_0010aff0(param_1,param_5 & 0xffffffff,local_540,uVar50 & 0xf);
LAB_00109450:
            iVar27 = -8;
            lVar36 = 8;
            goto switchD_00108a34_caseD_4;
          case 6:
            if (local_138 <= local_140) {
              puVar24 = (ushort *)(local_100 + 4);
            }
            local_140 = (ushort *)((long)puVar24 + 1);
            uVar14 = CONCAT11((char)*puVar24,(char)*puVar24);
            uVar15 = CONCAT22(uVar14,uVar14);
            uVar29 = CONCAT44(uVar15,uVar15);
            *(undefined8 *)param_1 = uVar29;
            *(undefined8 *)((long)param_1 + lVar45) = uVar29;
            puVar33 = (undefined8 *)((long)param_1 + lVar45 + lVar45);
            *puVar33 = uVar29;
            puVar33 = (undefined8 *)((long)puVar33 + lVar45);
            puVar1 = (undefined8 *)((long)puVar33 + lVar45);
            *puVar33 = uVar29;
            puVar33 = (undefined8 *)((long)puVar1 + lVar45);
            *puVar1 = uVar29;
            puVar1 = (undefined8 *)((long)puVar33 + lVar45);
            *puVar33 = uVar29;
            *puVar1 = uVar29;
            *(undefined8 *)((long)puVar1 + lVar45) = uVar29;
            break;
          case 7:
            if (local_218 < local_210) {
              pcVar22 = local_218;
              pcVar30 = local_1d0;
            }
            else {
              pcVar22 = (char *)(local_1d8 + 4);
              pcVar30 = (char *)(local_190 + 4);
            }
            local_218 = pcVar22 + 1;
            local_1d0 = pcVar30 + 1;
            puVar33 = (undefined8 *)((long)puVar43 + (long)*pcVar30 + (long)(*pcVar22 * iVar21));
            if ((param_2 <= puVar33) && (puVar33 <= puVar37)) {
              if (local_2a0 <= local_2a8) {
                local_2a8 = (undefined2 *)(local_268 + 4);
              }
              local_540[0] = *local_2a8;
              local_2a8 = local_2a8 + 1;
              FUN_0010b690(local_540,local_5a0);
              if (local_590 < 4) {
                uVar50 = local_5a0[0] | *local_598 << (ulong)(local_590 & 0x1f);
                local_5a0[0] = *local_598 >> (ulong)(4 - local_590 & 0x1f);
                local_598 = local_598 + 1;
                local_590 = local_590 + 0x1c;
              }
              else {
                local_590 = local_590 - 4;
                uVar50 = local_5a0[0];
                local_5a0[0] = local_5a0[0] >> 4;
              }
              FUN_0010b340(param_1,param_5,local_540,uVar50 & 0xf,puVar33,param_5 & 0xffffffff);
              goto LAB_00109450;
            }
            break;
          case 8:
            if (local_138 <= local_140) {
              puVar24 = (ushort *)(local_100 + 4);
            }
            uVar14 = CONCAT11((char)*puVar24,(char)*puVar24);
            uVar50 = CONCAT22(uVar14,uVar14);
            local_140 = puVar24 + 1;
            uVar14 = CONCAT11(*(undefined1 *)((long)puVar24 + 1),*(undefined1 *)((long)puVar24 + 1))
            ;
            uVar12 = CONCAT22(uVar14,uVar14);
            if (local_180 <= local_188) {
              local_188 = local_148 + 4;
            }
            lVar36 = ((ulong)*local_188 & 0xf) * 4;
            uVar28 = (ulong)(*local_188 >> 2) & 0x3c;
            uVar6 = *(uint *)(&DAT_03cb1e24 + uVar28);
            uVar7 = *(uint *)(&DAT_03cb22b8 + uVar28);
            *param_1 = *(uint *)(&DAT_03cb22b8 + lVar36) & uVar12 |
                       *(uint *)(&DAT_03cb1e24 + lVar36) & uVar50;
            param_1[1] = uVar7 & uVar12 | uVar6 & uVar50;
            lVar36 = ((ulong)local_188[1] & 0xf) * 4;
            uVar28 = (ulong)(local_188[1] >> 2) & 0x3c;
            puVar23 = (uint *)((long)param_1 + lVar45 * 2);
            *(uint *)((long)param_1 + lVar45) =
                 *(uint *)(&DAT_03cb22b8 + lVar36) & uVar12 |
                 *(uint *)(&DAT_03cb1e24 + lVar36) & uVar50;
            *(uint *)((long)param_1 + lVar45 + 4) =
                 *(uint *)(&DAT_03cb22b8 + uVar28) & uVar12 |
                 *(uint *)(&DAT_03cb1e24 + uVar28) & uVar50;
            lVar36 = ((ulong)local_188[2] & 0xf) * 4;
            uVar28 = (ulong)(local_188[2] >> 2) & 0x3c;
            puVar48 = (uint *)((long)puVar23 + lVar45);
            uVar6 = *(uint *)(&DAT_03cb1e24 + uVar28);
            uVar7 = *(uint *)(&DAT_03cb22b8 + uVar28);
            *puVar23 = *(uint *)(&DAT_03cb22b8 + lVar36) & uVar12 |
                       *(uint *)(&DAT_03cb1e24 + lVar36) & uVar50;
            puVar23[1] = uVar7 & uVar12 | uVar6 & uVar50;
            lVar36 = ((ulong)local_188[3] & 0xf) * 4;
            uVar28 = (ulong)(local_188[3] >> 2) & 0x3c;
            uVar6 = *(uint *)(&DAT_03cb1e24 + uVar28);
            uVar7 = *(uint *)(&DAT_03cb22b8 + uVar28);
            puVar23 = (uint *)((long)puVar48 + lVar45);
            *puVar48 = *(uint *)(&DAT_03cb22b8 + lVar36) & uVar12 |
                       *(uint *)(&DAT_03cb1e24 + lVar36) & uVar50;
            puVar48[1] = uVar7 & uVar12 | uVar6 & uVar50;
            lVar36 = ((ulong)local_188[4] & 0xf) * 4;
            uVar28 = (ulong)(local_188[4] >> 2) & 0x3c;
            uVar6 = *(uint *)(&DAT_03cb1e24 + uVar28);
            uVar7 = *(uint *)(&DAT_03cb22b8 + uVar28);
            *puVar23 = *(uint *)(&DAT_03cb22b8 + lVar36) & uVar12 |
                       *(uint *)(&DAT_03cb1e24 + lVar36) & uVar50;
            puVar23[1] = uVar7 & uVar12 | uVar6 & uVar50;
            lVar36 = ((ulong)local_188[5] & 0xf) * 4;
            puVar23 = (uint *)((long)puVar23 + lVar45);
            uVar28 = (ulong)(local_188[5] >> 2) & 0x3c;
            puVar48 = (uint *)((long)puVar23 + lVar45);
            uVar6 = *(uint *)(&DAT_03cb1e24 + uVar28);
            uVar7 = *(uint *)(&DAT_03cb22b8 + uVar28);
            *puVar23 = *(uint *)(&DAT_03cb22b8 + lVar36) & uVar12 |
                       *(uint *)(&DAT_03cb1e24 + lVar36) & uVar50;
            puVar23[1] = uVar7 & uVar12 | uVar6 & uVar50;
            lVar36 = ((ulong)local_188[6] & 0xf) * 4;
            uVar28 = (ulong)(local_188[6] >> 2) & 0x3c;
            uVar6 = *(uint *)(&DAT_03cb1e24 + uVar28);
            uVar7 = *(uint *)(&DAT_03cb22b8 + uVar28);
            *puVar48 = *(uint *)(&DAT_03cb22b8 + lVar36) & uVar12 |
                       *(uint *)(&DAT_03cb1e24 + lVar36) & uVar50;
            puVar48[1] = uVar7 & uVar12 | uVar6 & uVar50;
            lVar36 = ((ulong)local_188[7] & 0xf) * 4;
            uVar28 = (ulong)(local_188[7] >> 2) & 0x3c;
            uVar6 = *(uint *)(&DAT_03cb1e24 + uVar28);
            uVar7 = *(uint *)(&DAT_03cb22b8 + uVar28);
            *(uint *)((long)puVar48 + lVar45) =
                 *(uint *)(&DAT_03cb22b8 + lVar36) & uVar12 |
                 *(uint *)(&DAT_03cb1e24 + lVar36) & uVar50;
            ((uint *)((long)puVar48 + lVar45))[1] = uVar7 & uVar12 | uVar6 & uVar50;
            local_188 = local_188 + 8;
            break;
          case 9:
            if (local_138 <= local_140) {
              local_140 = (ushort *)(local_100 + 4);
            }
            uVar29 = *(undefined8 *)(puVar24 + 4);
            *(undefined8 *)param_1 = *(undefined8 *)puVar24;
            *(undefined8 *)((long)param_1 + lVar45) = uVar29;
            puVar33 = (undefined8 *)((long)param_1 + lVar45 + lVar45);
            uVar29 = *(undefined8 *)(puVar24 + 0xc);
            puVar1 = (undefined8 *)((long)puVar33 + lVar45);
            *puVar33 = *(undefined8 *)(puVar24 + 8);
            *puVar1 = uVar29;
            puVar1 = (undefined8 *)((long)puVar1 + lVar45);
            uVar29 = *(undefined8 *)(puVar24 + 0x14);
            puVar33 = (undefined8 *)((long)puVar1 + lVar45);
            *puVar1 = *(undefined8 *)(puVar24 + 0x10);
            *puVar33 = uVar29;
            puVar33 = (undefined8 *)((long)puVar33 + lVar45);
            uVar29 = *(undefined8 *)(puVar24 + 0x1c);
            *puVar33 = *(undefined8 *)(puVar24 + 0x18);
            *(undefined8 *)((long)puVar33 + lVar45) = uVar29;
            local_140 = local_140 + 0x20;
          }
switchD_0010894c_default:
          iVar27 = -8;
          lVar36 = 8;
switchD_00108a34_caseD_4:
          param_1 = (uint *)((long)param_1 + lVar36);
          puVar43 = (undefined8 *)((long)puVar43 + lVar36);
          uVar25 = uVar25 + iVar27;
        } while (uVar25 != 0);
        uVar49 = uVar49 + 8;
        param_1 = (uint *)((long)param_1 + lVar46);
        puVar43 = (undefined8 *)((long)puVar43 + lVar46);
      } while (uVar49 < param_4);
      goto LAB_00109914;
    }
  }
  else {
    local_598 = param_6 + 1;
    uVar49 = *param_6;
    uVar25 = uVar49 >> 1;
    local_590 = 0x1f;
    local_5a0[0] = uVar25;
    if (((param_9 >> 0x14 & 1) == 0) || ((uVar49 & 1) == 0)) goto LAB_00108188;
    local_5a0[0] = uVar49 >> 9;
    local_590 = 0x17;
    if (param_4 != 0) {
      do {
        memset(param_1,uVar25,(ulong)param_3);
        param_1 = (uint *)((long)param_1 + (long)iVar21);
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
  }
  local_5bc = 0;
LAB_00109914:
  *param_10 = local_5bc;
  return local_598;
}


