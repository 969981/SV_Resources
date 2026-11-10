/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b0ba4; name: FUN_030b0ba4
 */


void FUN_030b0ba4(ulong *param_1,int param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  void *pvVar2;
  int *piVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  ushort uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [14];
  void *pvVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  uint *puVar23;
  ulong uVar24;
  long lVar25;
  void *pvVar26;
  long *plVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  int *piVar35;
  ulong uVar36;
  long lVar37;
  uint *puVar38;
  undefined8 uVar39;
  float *pfVar40;
  short *psVar41;
  int *piVar42;
  undefined8 *puVar43;
  uint *puVar44;
  long lVar45;
  uint *puVar46;
  undefined4 *puVar47;
  undefined4 *puVar48;
  int *piVar49;
  undefined8 *puVar50;
  uint uVar51;
  long lVar52;
  undefined8 *puVar53;
  uint uVar54;
  uint uVar55;
  int iVar56;
  ulong uVar57;
  ulong uVar58;
  uint *puVar59;
  undefined8 *puVar60;
  long lVar61;
  int iVar62;
  uint uVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  ulong uVar67;
  long lVar68;
  long lVar69;
  short sVar70;
  ulong uVar71;
  uint uVar72;
  uint uVar73;
  long lVar74;
  bool bVar75;
  long *plVar76;
  long lVar77;
  int iVar78;
  undefined4 *puVar79;
  ulong *puVar80;
  int *piVar81;
  long lVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  float fVar102;
  float fVar106;
  float fVar107;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar113;
  float fVar114;
  float fVar115;
  undefined1 auVar112 [16];
  float fVar118;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar122;
  float fVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 uVar126;
  undefined1 uVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar134;
  int iVar135;
  undefined1 auVar133 [16];
  ulong uVar136;
  undefined1 auVar137 [16];
  float fVar138;
  ulong uVar139;
  int iVar140;
  undefined4 uVar141;
  float fVar142;
  undefined1 auVar143 [16];
  int iVar144;
  float fVar145;
  int iVar148;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  float fVar149;
  float fVar150;
  long local_2b0;
  long *local_248;
  float local_230 [2];
  long local_228;
  undefined8 local_220;
  uint local_218;
  undefined8 local_210;
  long local_208;
  undefined8 local_200;
  long local_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  int *local_1e0;
  undefined8 local_1d8;
  int *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  uint local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  long local_198;
  long local_190;
  uint *local_178;
  undefined8 local_170;
  int *local_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  uint **ppuStack_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128 [2];
  uint *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  uint local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  int *local_a0;
  ulong uStack_98;
  
  iVar62 = *(int *)(param_1[1] + 0x20);
  iVar78 = 0;
  if (param_2 != 0) {
    iVar78 = iVar62 / param_2;
  }
  if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < iVar78) {
    FUN_03078498(param_4,PTR_PTR_047d1a50,(long)iVar78);
  }
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) < iVar62) {
    FUN_0309cc54(param_3,PTR_PTR_047d1a50,(long)iVar62);
  }
  uVar72 = *(uint *)(param_3 + 1);
  if ((int)uVar72 < iVar62) {
    *(int *)(param_3 + 1) = iVar62;
    memset((void *)(*param_3 + (long)(int)uVar72 * 4),0xff,(ulong)(iVar62 + ~uVar72) * 4 + 4);
  }
  else if (iVar62 < (int)uVar72) {
    *(int *)(param_3 + 1) = iVar62;
  }
  lVar77 = tpidr_el0;
  lVar30 = *(long *)(lVar77 + 0x1000b8);
  if (lVar30 == 0) {
    lVar30 = FUN_00e5d3b4();
    *(long *)(lVar77 + 0x1000b8) = lVar30;
  }
  plVar76 = *(long **)(lVar30 + 0x3e0);
  if (plVar76 != (long *)0x0) {
    lVar30 = *plVar76;
    if (*(code **)(lVar30 + 0x18) != (code *)0x0) {
      (**(code **)(lVar30 + 0x18))("generateClusters",0x10,*(undefined8 *)(lVar30 + 0x28));
      if (*(code **)(lVar30 + 0x18) != (code *)0x0) {
        (**(code **)(lVar30 + 0x18))("regionCount",0xb,*(undefined8 *)(lVar30 + 0x28));
      }
    }
    puVar60 = (undefined8 *)plVar76[2];
    uVar31 = (long)puVar60 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar31 <= (ulong)plVar76[3]) && (plVar76[2] = uVar31, puVar60 != (undefined8 *)0x0)) {
      *puVar60 = "LtgenerateClusters";
      puVar60[2] = "StregionCount";
      uVar22 = nn::os::GetSystemTick();
      puVar60[1] = uVar22;
    }
    if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar76[6] != 0)) {
      puVar60 = (undefined8 *)plVar76[2];
      uVar31 = (long)puVar60 + 0x17U & 0xfffffffffffffff8;
      if ((uVar31 <= (ulong)plVar76[3]) && (plVar76[2] = uVar31, puVar60 != (undefined8 *)0x0)) {
        *puVar60 = &DAT_03c4e575;
        puVar60[1] = *(undefined8 *)(plVar76[6] + 8);
      }
    }
  }
  local_200 = -0x8000000000000000;
  local_1f8 = 0;
  local_208 = 0;
  local_1f0 = 0x8000000000000000;
  uVar31 = param_1[1];
  plVar27 = (long *)param_1[2];
  local_1e8 = plVar76;
  if (plVar27 == (long *)0x0) {
    local_120 = (uint *)0x0;
    local_118 = (uint *)0x8000000000000000;
    FUN_0309b83c(uVar31,&local_120,&local_1f8,&local_208);
    lVar30 = (long)local_118;
    uVar31 = (ulong)local_118._4_4_;
    local_118 = (uint *)((ulong)local_118._4_4_ << 0x20);
    if ((-1 < lVar30) && (local_120 != (uint *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_120,uVar31 << 3);
    }
    goto LAB_030b1420;
  }
  lVar30 = *(long *)(lVar77 + 0x1000b8);
  if (lVar30 == 0) {
    lVar30 = FUN_00e5d3b4();
    *(long *)(lVar77 + 0x1000b8) = lVar30;
  }
  plVar76 = *(long **)(lVar30 + 0x3e0);
  if (plVar76 != (long *)0x0) {
    lVar30 = *plVar76;
    if (*(code **)(lVar30 + 0x18) != (code *)0x0) {
      (**(code **)(lVar30 + 0x18))("computeRegions",0xe,*(undefined8 *)(lVar30 + 0x28));
    }
    puVar60 = (undefined8 *)plVar76[2];
    uVar32 = (long)puVar60 + 0x17U & 0xfffffffffffffff8;
    if ((uVar32 <= (ulong)plVar76[3]) && (plVar76[2] = uVar32, puVar60 != (undefined8 *)0x0)) {
      *puVar60 = "TtcomputeRegions";
      uVar22 = nn::os::GetSystemTick();
      puVar60[1] = uVar22;
    }
    if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar76[6] != 0)) {
      puVar60 = (undefined8 *)plVar76[2];
      uVar32 = (long)puVar60 + 0x17U & 0xfffffffffffffff8;
      if ((uVar32 <= (ulong)plVar76[3]) && (plVar76[2] = uVar32, puVar60 != (undefined8 *)0x0)) {
        *puVar60 = &DAT_03c4e575;
        puVar60[1] = *(undefined8 *)(plVar76[6] + 8);
      }
    }
    lVar30 = *(long *)(lVar77 + 0x1000b8);
  }
  uVar72 = *(uint *)(uVar31 + 0x20);
  uVar32 = (ulong)(int)uVar72;
  local_158 = plVar76;
  if (lVar30 == 0) {
    lVar30 = FUN_00e5d3b4();
    *(long *)(lVar77 + 0x1000b8) = lVar30;
  }
  piVar81 = (int *)(uVar32 * 4);
  lVar30 = *(long *)(*(long *)(lVar30 + 0x3d0) + 0x10);
  local_1e0 = piVar81;
  if ((*(long *)(lVar30 + 8) == 0) && (lVar30 != 0)) {
    local_120 = (uint *)((long)piVar81 + 0x3fU & 0xffffffffffffffc0);
    if (local_120 <= *(uint **)(lVar30 + 0x28)) {
      puVar23 = *(uint **)(lVar30 + 0x38);
      if ((ulong)((long)local_120 + (long)puVar23) <= *(ulong *)(lVar30 + 0x40)) {
        *(long *)(lVar30 + 0x38) = (long)local_120 + (long)puVar23;
        goto LAB_030b0fa0;
      }
    }
    puVar23 = (uint *)FUN_031cf3b4(lVar30,&local_120);
  }
  else {
    puVar23 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_1e0,0x40);
    lVar30 = 0;
  }
LAB_030b0fa0:
  local_118 = puVar23 + uVar32;
  local_120 = puVar23;
  local_110._0_4_ = uVar72;
  if (0 < (int)uVar72) {
    *puVar23 = 0xffffffff;
    uVar32 = (ulong)uVar72;
    if (1 < (int)uVar72) {
      memset(puVar23 + 1,0xff,uVar32 * 4 - 4);
    }
  }
  puVar38 = local_120;
  iVar62 = *(int *)(uVar31 + 0x20);
  iVar78 = (int)uVar32;
  if (iVar62 < 1) {
    if (iVar78 == 0) goto LAB_030b1208;
LAB_030b1174:
    lVar25 = (long)iVar78;
    puVar44 = local_120;
    do {
      if (-1 < (int)*puVar44) {
        uVar32 = (ulong)((int)uVar32 - 1);
        for (uVar72 = local_120[*puVar44]; -1 < (int)uVar72; uVar72 = local_120[uVar72]) {
          *puVar44 = uVar72;
        }
      }
      iVar78 = (int)uVar32;
      puVar44 = puVar44 + 1;
    } while (puVar44 != local_120 + lVar25);
    local_110._4_4_ = 1;
    uVar72 = local_1f0._4_4_ & 0x7fffffff;
    uStack_108._0_4_ = iVar78;
    if ((int)uVar72 < iVar78) {
      FUN_0133bb88(&local_1f8,PTR_PTR_047d1a50,(long)iVar78);
      uVar72 = local_1f0._4_4_ & 0x7fffffff;
    }
    if ((int)uVar72 < iVar78) {
      FUN_02e9b320(&local_1f8,PTR_PTR_047d1a50,(long)iVar78);
    }
  }
  else {
    uVar33 = 0;
    do {
      puVar44 = (uint *)(*(long *)(uVar31 + 0x18) + uVar33 * 0x10);
      sVar70 = *(short *)((long)puVar44 + 10);
      puVar46 = puVar44 + 1;
      if (sVar70 < 1) {
        puVar46 = puVar44;
      }
      uVar72 = *puVar46;
      if (uVar72 != 0xffffffff) {
        puVar46 = (uint *)((long)local_120 + ((long)(uVar33 << 0x20) >> 0x1e));
        do {
          if ((((*(byte *)(*(long *)(uVar31 + 0x28) + (long)(int)uVar72 * 0x14 + 0x10) >> 6 & 1) ==
                0) && ((*(uint *)(*plVar27 + (long)((int)uVar72 >> 5) * 4) >> (ulong)(uVar72 & 0x1f)
                       & 1) != 0)) &&
             (uVar73 = *(uint *)(*(long *)(uVar31 + 0x28) + (long)(int)uVar72 * 0x14 + 0xc),
             uVar73 != 0xffffffff)) {
            uVar71 = uVar33 & 0xffffffff;
            do {
              uVar20 = (uint)uVar71;
              uVar71 = (ulong)local_120[(int)uVar20];
            } while (-1 < (int)local_120[(int)uVar20]);
            uVar21 = *puVar46;
            uVar71 = (ulong)uVar73 & 0x3fffff;
            uVar73 = (uint)uVar33;
            if (-1 < (int)uVar21) {
              puVar59 = puVar46;
              do {
                uVar73 = uVar21;
                *puVar59 = uVar20;
                puVar59 = local_120 + uVar73;
                uVar21 = *puVar59;
              } while (-1 < (int)*puVar59);
            }
            uVar24 = uVar71;
            do {
              uVar20 = (uint)uVar24;
              uVar24 = (ulong)local_120[(int)uVar20];
            } while (-1 < (int)local_120[(int)uVar20]);
            while( true ) {
              uVar21 = local_120[uVar71];
              if ((int)uVar21 < 0) break;
              local_120[uVar71] = uVar20;
              uVar71 = (ulong)uVar21;
            }
            uVar20 = (uint)uVar71;
            if (uVar73 != uVar20) {
              if ((int)uVar73 < (int)uVar20) {
                local_120[(int)uVar73] = local_120[(int)uVar20] + local_120[(int)uVar73];
                local_120[(int)uVar20] = uVar73;
              }
              else {
                local_120[(int)uVar20] = local_120[(int)uVar20] + local_120[(int)uVar73];
                local_120[(int)uVar73] = uVar20;
              }
            }
            sVar70 = *(short *)((long)puVar44 + 10);
          }
          uVar73 = puVar44[1];
          uVar20 = (uVar73 + (int)sVar70) - 1;
          if (((int)uVar72 < (int)uVar73) || ((int)uVar20 <= (int)uVar72)) {
            uVar73 = *puVar44;
            if (uVar20 != uVar72) {
              if (((int)uVar73 <= (int)uVar72) &&
                 ((int)uVar72 < (int)(uVar73 + (int)(short)puVar44[2] + -1))) goto LAB_030b1154;
              break;
            }
          }
          else {
LAB_030b1154:
            uVar73 = uVar72 + 1;
          }
          uVar72 = uVar73;
        } while (uVar72 != 0xffffffff);
        iVar62 = *(int *)(uVar31 + 0x20);
      }
      uVar33 = uVar33 + 1;
    } while ((long)uVar33 < (long)iVar62);
    if (iVar78 != 0) goto LAB_030b1174;
LAB_030b1208:
    local_110._4_4_ = 1;
    uStack_108._0_4_ = 0;
  }
  uVar72 = (uint)local_110;
  lVar25 = local_1f8;
  iVar62 = (int)local_1f0;
  if ((int)local_1f0 != iVar78) {
    local_1f0 = CONCAT44(local_1f0._4_4_,iVar78);
    iVar62 = iVar78;
  }
  uVar31 = (ulong)(uint)local_110;
  if (0 < (int)(uint)local_110) {
    uVar73 = 0;
    puVar44 = puVar38;
    do {
      uVar20 = *puVar44;
      if ((int)uVar20 < 0) {
        *(uint *)(local_1f8 + (long)(int)uVar73 * 4) = -uVar20;
        uVar20 = uVar73;
        uVar73 = uVar73 + 1;
      }
      else {
        uVar20 = puVar38[uVar20];
      }
      uVar31 = uVar31 - 1;
      *puVar44 = uVar20;
      puVar44 = puVar44 + 1;
    } while (uVar31 != 0);
    iVar62 = (int)local_1f0;
  }
  lVar34 = local_1f8 + (long)iVar62 * 4;
  if ((int)(local_200._4_4_ & 0x7fffffff) < (int)(uint)local_110) {
    FUN_02e9b320(&local_208,PTR_PTR_047d1a50,(long)(int)(uint)local_110);
  }
  uVar73 = (uint)local_200;
  if ((uint)local_200 != uVar72) {
    local_200 = CONCAT44(local_200._4_4_,uVar72);
    uVar73 = uVar72;
  }
  FUN_031c1d04(&local_120,lVar25,lVar34,local_208,local_208 + (long)(int)uVar73 * 4);
  if (lVar30 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar23,piVar81);
  }
  else {
    uVar31 = (long)piVar81 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar30 + 0x28) < uVar31) || (*(long *)(lVar30 + 0x38) != uVar31 + (long)puVar23)
       ) {
      if (puVar23 != (uint *)0x0) {
        if (*(ulong *)(lVar30 + 0x28) < uVar31 + 0x40) {
          *(int *)(*(long *)(lVar30 + 0x30) + 0x20) = *(int *)(*(long *)(lVar30 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar30 + 0x10) + 0x18))
                    (*(long **)(lVar30 + 0x10),(long)puVar23 - (long)(int)puVar23[-1],uVar31 + 0x44)
          ;
        }
        else {
          if (*(long *)(lVar30 + 0x38) == uVar31 + (long)puVar23) {
            *(uint **)(lVar30 + 0x38) = puVar23;
            goto LAB_030b138c;
          }
          FUN_031cf778(lVar30,puVar23);
        }
      }
    }
    else {
      *(uint **)(lVar30 + 0x38) = puVar23;
      if (*(uint **)(lVar30 + 0x48) == puVar23) {
LAB_030b138c:
        FUN_031cf578(lVar30);
      }
    }
  }
  if (plVar76 != (long *)0x0) {
    lVar30 = *plVar76;
    if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar76[6] != 0)) {
      puVar60 = (undefined8 *)plVar76[2];
      uVar31 = (long)puVar60 + 0x17U & 0xfffffffffffffff8;
      if ((uVar31 <= (ulong)plVar76[3]) && (plVar76[2] = uVar31, puVar60 != (undefined8 *)0x0)) {
        *puVar60 = &DAT_03c4e575;
        puVar60[1] = *(undefined8 *)(plVar76[6] + 8);
      }
    }
    puVar60 = (undefined8 *)plVar76[2];
    uVar31 = (long)puVar60 + 0x17U & 0xfffffffffffffff8;
    if ((uVar31 <= (ulong)plVar76[3]) && (plVar76[2] = uVar31, puVar60 != (undefined8 *)0x0)) {
      *puVar60 = &DAT_03c2d363;
      uVar22 = nn::os::GetSystemTick();
      puVar60[1] = uVar22;
    }
    if (*(code **)(lVar30 + 0x20) != (code *)0x0) {
      (**(code **)(lVar30 + 0x20))(*(undefined8 *)(lVar30 + 0x28));
    }
  }
LAB_030b1420:
  uVar31 = local_1f0;
  uVar32 = local_1f0 & 0xffffffff;
  local_210 = 0x19d0000019d;
  lVar30 = *(long *)(lVar77 + 0x1000b8);
  if (lVar30 == 0) {
    lVar30 = FUN_00e5d3b4();
    *(long *)(lVar77 + 0x1000b8) = lVar30;
  }
  plVar76 = *(long **)(lVar30 + 0x3e0);
  if (plVar76 != (long *)0x0) {
    lVar30 = *plVar76;
    if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar76[6] != 0)) {
      puVar60 = (undefined8 *)plVar76[2];
      uVar33 = (long)puVar60 + 0x17U & 0xfffffffffffffff8;
      if ((uVar33 <= (ulong)plVar76[3]) && (plVar76[2] = uVar33, puVar60 != (undefined8 *)0x0)) {
        *puVar60 = &DAT_03c4e575;
        puVar60[1] = *(undefined8 *)(plVar76[6] + 8);
      }
    }
    puVar60 = (undefined8 *)plVar76[2];
    uVar33 = (long)puVar60 + 0x17U & 0xfffffffffffffff8;
    if ((uVar33 <= (ulong)plVar76[3]) && (plVar76[2] = uVar33, puVar60 != (undefined8 *)0x0)) {
      *puVar60 = "Stregions";
      uVar22 = nn::os::GetSystemTick();
      puVar60[1] = uVar22;
    }
    if (*(code **)(lVar30 + 0x20) != (code *)0x0) {
      (**(code **)(lVar30 + 0x20))(*(undefined8 *)(lVar30 + 0x28));
    }
    if (*(code **)(lVar30 + 0x18) != (code *)0x0) {
      (**(code **)(lVar30 + 0x18))("regions",7,*(undefined8 *)(lVar30 + 0x28));
    }
  }
  if (0 < (int)uVar31) {
    puVar60 = (undefined8 *)((ulong)&local_120 | 8);
    puVar1 = param_1 + 3;
    uVar22 = NEON_fmov(0x3f800000,4);
    uVar31 = 0;
    iVar62 = 0;
    do {
      lVar30 = local_208;
      uVar73 = *(uint *)(local_1f8 + uVar31 * 4);
      uVar71 = (ulong)uVar73;
      local_228 = 0;
      local_220 = -0x8000000000000000;
      lVar25 = nn::os::GetSystemTick();
      uVar72 = *(uint *)(param_1[1] + 0x20);
      uVar33 = (ulong)uVar72;
      if ((int)uVar72 < 1) {
        iVar78 = 0;
      }
      else {
        FUN_030b4d98(&local_228,uVar33);
        iVar78 = (int)local_220;
      }
      if (iVar78 < (int)uVar72) {
        local_220 = CONCAT44(local_220._4_4_,uVar72);
        puVar43 = (undefined8 *)(local_228 + (long)iVar78 * 0x10);
        do {
          puVar50 = puVar43 + 2;
          *puVar43 = 0;
          puVar43[1] = 0x8000000000000000;
          puVar43 = puVar50;
        } while (puVar50 != (undefined8 *)(local_228 + (long)(int)uVar72 * 0x10));
      }
      else if ((int)uVar72 < iVar78) {
        lVar34 = (long)(int)uVar72 * 0x10 + (long)iVar78 * -0x10;
        local_220 = CONCAT44(local_220._4_4_,uVar72);
        puVar79 = (undefined4 *)(local_228 + (long)iVar78 * 0x10 + -8);
        do {
          *puVar79 = 0;
          if ((-1 < (int)puVar79[1]) && (*(long *)(puVar79 + -2) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,*(long *)(puVar79 + -2),(ulong)(uint)puVar79[1] << 3);
          }
          *(undefined8 *)(puVar79 + -2) = 0;
          lVar34 = lVar34 + 0x10;
          puVar79[1] = 0x80000000;
          puVar79 = puVar79 + -4;
        } while (lVar34 != 0);
      }
      puVar79 = (undefined4 *)(lVar30 + (long)iVar62 * 4);
      local_230[0] = 1e+06;
      local_218 = uVar72;
      if (0 < (int)uVar72) {
        puVar23 = (uint *)(local_228 + 0xc);
        do {
          puVar23[-1] = 0;
          if ((-1 < (int)*puVar23) && (*(long *)(puVar23 + -3) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,*(long *)(puVar23 + -3),(ulong)*puVar23 << 3);
          }
          puVar23[-3] = 0;
          puVar23[-2] = 0;
          uVar33 = uVar33 - 1;
          *puVar23 = 0x80000000;
          puVar23 = puVar23 + 4;
        } while (uVar33 != 0);
      }
      lVar34 = (long)(int)uVar73;
      if (0 < (int)uVar73) {
        uVar33 = (ulong)uVar73;
        puVar47 = puVar79;
        do {
          FUN_030b09b8(local_230,*puVar47,*puVar47);
          uVar33 = uVar33 - 1;
          puVar47 = puVar47 + 1;
        } while (uVar33 != 0);
      }
      local_168 = (int *)0x0;
      local_160 = 0x8000000000000000;
      local_178 = (uint *)0x0;
      local_170 = 0x8000000000000000;
      FUN_030b4a20(&local_168,PTR_PTR_047d1a50 + 0x20,0xb00);
      if ((uint)local_160 != 0xb00) {
        local_160 = CONCAT44(local_160._4_4_,0xb00);
      }
      if ((local_170 & 0x7ffffc0000000000) == 0) {
        FUN_030b4a20(&local_178,PTR_PTR_047d1a50 + 0x20,0x400);
      }
      if ((uint)local_170 != 0x400) {
        local_170 = CONCAT44(local_170._4_4_,0x400);
      }
      fVar122 = (float)uVar22;
      fVar123 = (float)((ulong)uVar22 >> 0x20);
      if (0 < (int)uVar73) {
        uVar33 = 0;
        iVar78 = 0x400;
        do {
          piVar81 = local_168;
          puVar23 = local_178;
          uVar72 = puVar79[uVar33];
          uVar96 = ((undefined8 *)param_1[0x10])[1];
          uVar39 = *(undefined8 *)param_1[0x10];
          local_1a4 = 0x3f800000;
          local_1b0 = 0xffffffff;
          local_1d0 = (int *)0x0;
          local_1c8 = 0;
          local_1e0 = (int *)0x0;
          local_1d8 = (void *)0x0;
          local_1ac = 0x7f7fffee7f7fffee;
          local_1c0 = 0x7f7fffee7f7fffee;
          uStack_1b8 = 0xffffffffffff;
          if (0x200 < (int)(uint)local_160) {
            uVar20 = ((uint)local_160 - 0x200) / 0x12;
            if (0x7fff < uVar20) {
              uVar20 = 0x8000;
            }
            piVar42 = local_168 + 0x80;
            local_1e0 = piVar42;
            local_1c8 = (ulong)uVar20;
            local_1d8 = (void *)((long)piVar42 + (ulong)(uVar20 << 4));
            local_1d0 = local_168;
            if (local_168 != (int *)0x0) {
              piVar49 = local_168;
              if (((ulong)local_168 & 0xf) == 0) {
                piVar35 = piVar42;
              }
              else {
                if (local_168 < local_168 + (4 - (((ulong)local_168 & 0xf) >> 2))) {
                  uVar24 = (ulong)~(uint)local_168 & 0xc;
                  memset(local_168,0xff,uVar24 + 4);
                  piVar49 = (int *)((long)piVar81 + uVar24 + 4);
                }
                piVar35 = piVar49 + 0x7c;
              }
              piVar3 = piVar49 + 4;
              if (piVar35 <= piVar3) {
                piVar35 = piVar3;
              }
              memset(piVar49,0xff,(long)piVar35 + (0xf - (long)piVar49) & 0xfffffffffffffff0);
              piVar3 = (int *)((long)piVar3 +
                              ((long)piVar35 + (-1 - (long)piVar49) & 0xfffffffffffffff0U));
              if (piVar3 < piVar42) {
                memset(piVar3,0xff,(long)piVar81 + (0x203 - (long)piVar3) & 0xfffffffffffffffc);
              }
              pvVar19 = local_1d8;
              uVar24 = (ulong)(uVar20 >> 1);
              pvVar26 = local_1d8;
              if (((ulong)local_1d8 & 0xf) == 0) {
                uVar36 = uVar24;
              }
              else {
                uVar36 = 4 - (((ulong)local_1d8 & 0xf) >> 2);
                uVar57 = uVar24;
                if (uVar36 <= uVar24) {
                  uVar57 = uVar36;
                }
                uVar36 = uVar24 - uVar57;
                if (local_1d8 < (void *)((long)local_1d8 + uVar57 * 4)) {
                  memset(local_1d8,0xff,uVar57 * 4);
                  pvVar26 = (void *)((long)pvVar19 + uVar57 * 4);
                }
              }
              if ((3 < uVar36) && (0 < (long)(uVar36 & 0xfffffffffffffffc))) {
                pvVar4 = (void *)((long)pvVar26 + (uVar36 & 0xfffffffffffffffc) * 4);
                pvVar2 = (void *)((long)pvVar26 + 0x10);
                if (pvVar4 <= pvVar2) {
                  pvVar4 = pvVar2;
                }
                memset(pvVar26,0xff,(long)pvVar4 + (0xf - (long)pvVar26) & 0xfffffffffffffff0);
                pvVar26 = (void *)((long)pvVar2 +
                                  ((long)pvVar4 + (-1 - (long)pvVar26) & 0xfffffffffffffff0U));
              }
              if (pvVar26 < (void *)((long)pvVar19 + uVar24 * 4)) {
                memset(pvVar26,0xff,
                       (long)pvVar19 + (uVar24 * 4 - (long)pvVar26) + 3 & 0xfffffffffffffffc);
              }
            }
          }
          uVar24 = local_1c8;
          local_1a4 = 0;
          uVar36 = (ulong)(uVar72 * -0x61c8864f >> 0x18);
          for (uVar9 = *(ushort *)((long)local_1d0 + uVar36 * 2); -1 < (short)uVar9;
              uVar9 = *(ushort *)((long)local_1d8 + (ulong)uVar9 * 2)) {
            if (local_1e0[(ulong)uVar9 * 4 + 2] == uVar72) {
              piVar81 = local_1e0 + (ulong)uVar9 * 4;
              goto LAB_030b1a6c;
            }
          }
          piVar81 = local_1e0 + (long)local_1c8._4_4_ * 4;
          local_1c8 = CONCAT44(local_1c8._4_4_ + 1,(int)local_1c8);
          piVar81[0] = 0x7f7fffee;
          piVar81[1] = 0x7f7fffee;
          piVar81[2] = uVar72;
          piVar81[3] = 0xffff;
          sVar70 = (short)(uVar24 >> 0x20);
          *(undefined2 *)((long)local_1d8 + (long)sVar70 * 2) =
               *(undefined2 *)((long)local_1d0 + uVar36 * 2);
          *(short *)((long)local_1d0 + uVar36 * 2) = sVar70;
LAB_030b1a6c:
          *piVar81 = 0;
          pfVar40 = (float *)(param_1[0x10] + ((ulong)uVar72 & 0x3fffff) * 0x10);
          lVar37 = (long)(int)uVar72;
          fVar83 = *pfVar40 - (float)uVar39;
          fVar88 = pfVar40[1] - (float)((ulong)uVar39 >> 0x20);
          fVar91 = pfVar40[2] - (float)uVar96;
          fVar83 = SQRT(fVar83 * fVar83 + fVar88 * fVar88 + fVar91 * fVar91);
          piVar81[1] = (int)fVar83;
          *(ushort *)((long)piVar81 + 0xe) = *(ushort *)((long)piVar81 + 0xe) | 5;
          if (fVar83 < (float)local_1ac) {
            local_1ac = CONCAT44(local_1ac._4_4_,fVar83);
            local_1b0 = uVar72;
          }
          param_1[8] = (ulong)&local_1e0;
          puVar43 = (undefined8 *)(local_228 + lVar37 * 0x10);
          puVar38 = (uint *)*puVar43;
          uVar20 = uVar72 & 0x3fffff;
          if (*puVar38 == uVar20) {
            uVar21 = 0;
LAB_030b1b70:
            pfVar40 = (float *)(puVar38 + (long)(int)uVar21 * 2 + 1);
          }
          else {
            iVar140 = *(int *)(puVar43 + 1);
            uVar21 = iVar140 - 1;
            uVar24 = (ulong)uVar21;
            uVar54 = *(uint *)((long)puVar38 +
                              (-(ulong)(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
            if (uVar54 == uVar20) {
LAB_030b1b68:
              if (uVar21 != 0xffffffff) goto LAB_030b1b70;
            }
            else {
              pfVar40 = local_230;
              if (((iVar140 < 3) || ((int)uVar20 < (int)*puVar38)) || ((int)uVar54 < (int)uVar20))
              goto LAB_030b1b80;
              uVar54 = 0;
              do {
                iVar140 = uVar54 + (uint)uVar24;
                if (iVar140 < 0) {
                  iVar140 = iVar140 + 1;
                }
                uVar21 = iVar140 >> 1;
                uVar63 = *(uint *)((long)puVar38 +
                                  (-(ulong)(uVar21 >> 0x1f) & 0xfffffff800000000 |
                                  (ulong)uVar21 << 3));
                if (uVar63 == uVar20) goto LAB_030b1b68;
                uVar51 = uVar21;
                if ((int)uVar63 < (int)uVar20) {
                  uVar51 = (uint)uVar24;
                  uVar54 = uVar21;
                }
                uVar24 = (ulong)uVar51;
              } while (1 < (int)(uVar51 - uVar54));
            }
            pfVar40 = local_230;
          }
LAB_030b1b80:
          fVar83 = *pfVar40;
          *puVar23 = uVar72;
          puVar23[1] = (uint)fVar83;
          if (0xf < iVar78 && 0 < param_2) {
            uVar20 = 1;
            while( true ) {
              if ((int)local_1c8 <= local_1c8._4_4_) break;
              uVar54 = uVar20 - 1;
              uVar39 = *(undefined8 *)(puVar23 + (long)(int)uVar54 * 2);
              uVar21 = *puVar23;
              *(undefined8 *)puVar23 = uVar39;
              if ((int)uVar20 < 4) {
                uVar24 = 1;
              }
              else {
                uVar20 = 1;
                if ((int)puVar23[5] < (int)puVar23[3]) {
                  uVar20 = 2;
                }
                uVar24 = (ulong)uVar20;
              }
              if (((int)uVar24 < (int)uVar54) &&
                 (puVar38 = puVar23 + uVar24 * 2 + 1, (int)*puVar38 < (int)((ulong)uVar39 >> 0x20)))
              {
                uVar36 = uVar24;
                iVar140 = 0;
                do {
                  iVar135 = (int)uVar24;
                  uVar57 = (long)iVar135 << 1 | 1;
                  *(undefined8 *)(puVar23 + (long)iVar140 * 2) =
                       *(undefined8 *)(puVar23 + uVar36 * 2);
                  *(undefined8 *)(puVar23 + uVar36 * 2) = uVar39;
                  lVar45 = (long)(int)(uVar24 << 1) + 2;
                  if ((int)lVar45 < (int)uVar54) {
                    uVar20 = (uint)uVar57;
                    if ((int)puVar23[lVar45 * 2 + 1] < (int)puVar23[uVar57 * 2 + 1]) {
                      uVar20 = uVar20 + 1;
                    }
                    uVar57 = (ulong)uVar20;
                  }
                  iVar140 = (int)uVar57;
                  if ((int)uVar54 <= iVar140) break;
                  uVar20 = *puVar38;
                  uVar36 = (ulong)iVar140;
                  puVar38 = puVar23 + (long)iVar140 * 2 + 1;
                  uVar24 = uVar57 & 0xffffffff;
                  iVar140 = iVar135;
                } while ((int)*puVar38 < (int)uVar20);
              }
              plVar76 = (long *)param_1[8];
              uVar24 = (ulong)(uVar21 * -0x61c8864f >> 0x18);
              lVar45 = *plVar76;
              for (uVar9 = *(ushort *)(plVar76[2] + uVar24 * 2); -1 < (short)uVar9;
                  uVar9 = *(ushort *)(plVar76[1] + (ulong)uVar9 * 2)) {
                if (*(uint *)(lVar45 + (ulong)uVar9 * 0x10 + 8) == uVar21) {
                  puVar43 = (undefined8 *)(lVar45 + (ulong)uVar9 * 0x10);
                  goto LAB_030b1cf4;
                }
              }
              iVar140 = *(int *)((long)plVar76 + 0x1c);
              puVar43 = (undefined8 *)(lVar45 + (long)iVar140 * 0x10);
              *(int *)((long)plVar76 + 0x1c) = iVar140 + 1;
              *puVar43 = 0x7f7fffee7f7fffee;
              *(uint *)(puVar43 + 1) = uVar21;
              *(undefined4 *)((long)puVar43 + 0xc) = 0xffff;
              *(undefined2 *)(plVar76[1] + (long)(short)iVar140 * 2) =
                   *(undefined2 *)(plVar76[2] + uVar24 * 2);
              *(short *)(plVar76[2] + uVar24 * 2) = (short)iVar140;
              lVar45 = *plVar76;
LAB_030b1cf4:
              *(int *)(plVar76 + 8) = ((int)puVar43 - (int)lVar45) * 0x1000 >> 0x10;
              plVar76[9] = (long)puVar43;
              plVar76[10] = (long)puVar43;
              puVar43 = (undefined8 *)(local_228 + lVar37 * 0x10);
              puVar38 = (uint *)*puVar43;
              uVar24 = (ulong)uVar21 & 0x3fffff;
              uVar63 = (uint)uVar24;
              if (*puVar38 == uVar63) {
                uVar20 = 0;
LAB_030b1da0:
                pfVar40 = (float *)(puVar38 + (long)(int)uVar20 * 2 + 1);
              }
              else {
                iVar140 = *(int *)(puVar43 + 1);
                uVar20 = iVar140 - 1;
                uVar36 = (ulong)uVar20;
                uVar51 = *(uint *)((long)puVar38 +
                                  (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar36 << 3));
                if (uVar51 == uVar63) {
LAB_030b1d98:
                  if (uVar20 != 0xffffffff) goto LAB_030b1da0;
                }
                else if ((2 < iVar140 && (int)*puVar38 <= (int)uVar63) && (int)uVar63 <= (int)uVar51
                        ) {
                  uVar51 = 0;
                  do {
                    iVar140 = uVar51 + (uint)uVar36;
                    if (iVar140 < 0) {
                      iVar140 = iVar140 + 1;
                    }
                    uVar20 = iVar140 >> 1;
                    uVar55 = *(uint *)((long)puVar38 +
                                      (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar20 << 3));
                    if (uVar55 == uVar63) goto LAB_030b1d98;
                    uVar28 = uVar20;
                    if ((int)uVar55 < (int)uVar63) {
                      uVar28 = (uint)uVar36;
                      uVar51 = uVar20;
                    }
                    uVar36 = (ulong)uVar28;
                  } while (1 < (int)(uVar28 - uVar51));
                }
                pfVar40 = local_230;
              }
              fVar83 = *pfVar40;
              uVar36 = (ulong)uVar21 & 0x3fffff;
              lVar45 = *(long *)(param_1[1] + 0x18) + uVar36 * 0x10;
              sVar70 = *(short *)(lVar45 + 8);
              sVar8 = *(short *)(lVar45 + 10);
              lVar45 = *(long *)(lVar77 + 0x1000b8);
              if (lVar45 == 0) {
                lVar45 = FUN_00e5d3b4();
                *(long *)(lVar77 + 0x1000b8) = lVar45;
              }
              uVar20 = (int)sVar8 + (int)sVar70;
              lVar45 = *(long *)(*(long *)(lVar45 + 0x3d0) + 0x10);
              if (*(long *)(lVar45 + 8) == 0) {
                local_248 = (long *)(-(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 |
                                    (ulong)uVar20 << 2);
                local_158 = local_248;
                if (lVar45 == 0) goto LAB_030b1ea4;
                local_120 = (uint *)((long)local_248 + 0x3fU & 0xffffffffffffffc0);
                if (*(uint **)(lVar45 + 0x28) < local_120) {
LAB_030b1e38:
                  puVar38 = (uint *)FUN_031cf3b4(lVar45,&local_120);
                }
                else {
                  puVar38 = *(uint **)(lVar45 + 0x38);
                  if (*(ulong *)(lVar45 + 0x40) < (ulong)((long)local_120 + (long)puVar38))
                  goto LAB_030b1e38;
                  *(long *)(lVar45 + 0x38) = (long)local_120 + (long)puVar38;
                }
              }
              else {
                local_158 = (long *)(-(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 |
                                    (ulong)uVar20 << 2);
LAB_030b1ea4:
                local_248 = local_158;
                puVar38 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_158,0x40);
                lVar45 = 0;
              }
              piVar81 = (int *)(*(long *)(param_1[1] + 0x18) + uVar36 * 0x10);
              lVar61 = (long)(short)piVar81[2];
              psVar41 = (short *)((long)piVar81 + 10);
              sVar70 = *psVar41;
              lVar64 = (long)sVar70;
              if (lVar61 < 1) {
                puVar44 = puVar38;
              }
              else {
                iVar140 = 0;
                puVar46 = puVar38;
                do {
                  uVar20 = iVar140 + *piVar81;
                  iVar140 = iVar140 + 1;
                  puVar44 = puVar46 + 1;
                  *puVar46 = uVar20 | uVar21 & 0xffc00000;
                  puVar46 = puVar44;
                } while (iVar140 < (short)piVar81[2]);
                sVar70 = *psVar41;
              }
              if (0 < sVar70) {
                lVar65 = 0;
                do {
                  puVar44[lVar65] = (int)lVar65 + piVar81[1] | uVar21 & 0xffc00000;
                  lVar65 = lVar65 + 1;
                } while ((int)lVar65 < (int)*psVar41);
              }
              uVar20 = uVar54;
              if (puVar38 < puVar38 + lVar64 + lVar61) {
                puVar44 = puVar38;
LAB_030b1fa0:
                if ((int)local_1c8 <= local_1c8._4_4_) goto LAB_030b3220;
                uVar54 = *puVar44;
                uVar57 = (ulong)uVar54 & 0x3fffff;
                iVar140 = *(int *)(*(long *)(param_1[1] + 0x28) + uVar57 * 0x14 + 0xc);
                plVar76 = (long *)param_1[8];
                if (iVar140 == -1) {
                  puVar43 = (undefined8 *)0x0;
                }
                else {
                  uVar58 = (ulong)((uint)(iVar140 * -0x61c8864f) >> 0x18);
                  lVar65 = *plVar76;
                  for (uVar9 = *(ushort *)(plVar76[2] + uVar58 * 2); -1 < (short)uVar9;
                      uVar9 = *(ushort *)(plVar76[1] + (ulong)uVar9 * 2)) {
                    if (*(int *)(lVar65 + (ulong)uVar9 * 0x10 + 8) == iVar140) {
                      puVar43 = (undefined8 *)(lVar65 + (ulong)uVar9 * 0x10);
                      goto LAB_030b2050;
                    }
                  }
                  iVar135 = *(int *)((long)plVar76 + 0x1c);
                  puVar43 = (undefined8 *)(lVar65 + (long)iVar135 * 0x10);
                  *(int *)((long)plVar76 + 0x1c) = iVar135 + 1;
                  *puVar43 = 0x7f7fffee7f7fffee;
                  *(int *)(puVar43 + 1) = iVar140;
                  *(undefined4 *)((long)puVar43 + 0xc) = 0xffff;
                  *(undefined2 *)(plVar76[1] + (long)(short)iVar135 * 2) =
                       *(undefined2 *)(plVar76[2] + uVar58 * 2);
                  *(short *)(plVar76[2] + uVar58 * 2) = (short)iVar135;
                }
LAB_030b2050:
                plVar76[9] = (long)puVar43;
                uVar58 = param_1[1];
                lVar65 = *(long *)(uVar58 + 0x28);
                uVar51 = *(uint *)(lVar65 + uVar57 * 0x14 + 0xc);
                if ((uVar51 == 0xffffffff) ||
                   (((long *)param_1[2] != (long *)0x0 &&
                    ((*(uint *)(*(long *)param_1[2] + ((ulong)(uVar54 >> 5) & 0x1ffff) * 4) >>
                      (ulong)(uVar54 & 0x1f) & 1) == 0)))) goto LAB_030b3208;
                plVar76 = (long *)*param_1;
                lVar82 = (ulong)(uVar54 >> 0x16) * 0x100;
                lVar66 = plVar76[7];
                lVar52 = *(long *)(lVar66 + lVar82);
                lVar68 = *(long *)(lVar52 + 0x20);
                iVar140 = *(int *)(lVar68 + 0x30);
                uVar57 = (ulong)uVar54 & 0x3fffff;
                iVar29 = (int)uVar57;
                iVar135 = iVar29 - iVar140;
                if (iVar29 < iVar140) {
                  iVar135 = iVar29;
                  if ((*(int *)(lVar68 + 0x78) == 0) ||
                     (iVar135 = *(int *)(*(long *)(lVar68 + 0x70) + uVar57 * 4), iVar135 != -1)) {
                    lVar74 = *(long *)(lVar68 + 0xc0);
                    goto LAB_030b20dc;
                  }
                  lVar74 = *(long *)(lVar68 + 0x28) + uVar57 * 0x14;
                }
                else {
                  lVar74 = *(long *)(lVar68 + 0xe0);
LAB_030b20dc:
                  lVar74 = lVar74 + (long)iVar135 * 0x14;
                }
                if ((*(int *)(lVar74 + 8) == -1) || ((*(byte *)(lVar74 + 0x10) >> 5 & 1) != 0))
                goto LAB_030b3208;
                if (((*(byte *)(lVar74 + 0x10) >> 4 & 1) != 0) && ((char)param_1[5] == '\0')) {
                  iVar135 = iVar29 - iVar140;
                  if (iVar29 < iVar140) {
                    iVar135 = iVar29;
                    if ((*(int *)(lVar68 + 0x78) == 0) ||
                       (iVar135 = *(int *)(*(long *)(lVar68 + 0x70) + uVar57 * 4), iVar135 != -1)) {
                      lVar69 = *(long *)(lVar68 + 0xc0);
                      goto LAB_030b2138;
                    }
                    lVar69 = *(long *)(lVar68 + 0x28) + uVar57 * 0x14;
                  }
                  else {
                    lVar69 = *(long *)(lVar68 + 0xe0);
LAB_030b2138:
                    lVar69 = lVar69 + (long)iVar135 * 0x14;
                  }
                  uVar28 = *(uint *)(lVar69 + 8);
                  uVar55 = 0xffffffff;
                  if (uVar28 != 0xffffffff) {
                    uVar55 = uVar28 & 0x3fffff | *(int *)(lVar68 + 0x17c) << 0x16;
                  }
                  if ((*(byte *)(lVar69 + 0x10) & 0x40) == 0) {
                    uVar28 = uVar55;
                  }
                  uVar55 = uVar28 & 0x3fffff;
                  lVar66 = *(long *)(*(long *)(lVar66 + (ulong)(uVar28 >> 0x16) * 0x100) + 0x20);
                  uVar28 = uVar55 - *(int *)(lVar66 + 0x30);
                  if ((int)uVar55 < *(int *)(lVar66 + 0x30)) {
                    if (*(int *)(lVar66 + 0x78) == 0) {
                      uVar28 = uVar55;
LAB_030b21b4:
                      lVar66 = *(long *)(lVar66 + 0xc0);
                      goto LAB_030b21b8;
                    }
                    uVar28 = *(uint *)(*(long *)(lVar66 + 0x70) + (ulong)uVar55 * 4);
                    if (uVar28 != 0xffffffff) goto LAB_030b21b4;
                    lVar66 = *(long *)(lVar66 + 0x28) + (ulong)uVar55 * 0x14;
                  }
                  else {
                    lVar66 = *(long *)(lVar66 + 0xe0);
LAB_030b21b8:
                    lVar66 = lVar66 + (long)(int)uVar28 * 0x14;
                  }
                  if ((*(byte *)(lVar66 + 0x10) >> 5 & 1) != 0) goto LAB_030b3208;
                }
                if ((*(uint *)(lVar74 + 0xc) & 0x3fffff) == uVar63) goto LAB_030b3208;
                piVar81 = (int *)(lVar65 + uVar57 * 0x14);
                fVar88 = (float)param_1[0xe];
                puVar43 = (undefined8 *)(*(long *)(uVar58 + 0x38) + (long)piVar81[1] * 0x10);
                uVar96 = puVar43[1];
                uVar39 = *puVar43;
                auVar103 = *(undefined1 (*) [16])(*(long *)(uVar58 + 0x38) + (long)*piVar81 * 0x10);
                fVar91 = auVar103._0_4_;
                fVar90 = auVar103._4_4_;
                fVar93 = auVar103._8_4_;
                fVar85 = auVar103._12_4_;
                fVar84 = (float)uVar39;
                fVar89 = (float)((ulong)uVar39 >> 0x20);
                fVar92 = (float)uVar96;
                fVar94 = (float)((ulong)uVar96 >> 0x20);
                if (0.0 <= fVar88) {
                  fVar102 = fVar91 - fVar84;
                  fVar106 = fVar90 - fVar89;
                  fVar107 = fVar93 - fVar92;
                  fVar108 = fVar91 - (float)param_1[10];
                  fVar109 = fVar90 - (float)(param_1[10] >> 0x20);
                  fVar110 = fVar93 - (float)param_1[0xb];
                  fVar111 = fVar102 * fVar108;
                  fVar113 = fVar106 * fVar109;
                  fVar115 = fVar107 * fVar110;
                  uVar39 = NEON_fminnm(CONCAT44((fVar111 + fVar113 + fVar115) /
                                                (fVar107 * fVar107 +
                                                fVar102 * fVar102 + fVar106 * fVar106),
                                                (fVar111 + fVar113 + fVar115) /
                                                (fVar107 * fVar107 +
                                                fVar102 * fVar102 + fVar106 * fVar106)),uVar22,4);
                  uVar39 = NEON_fmax(uVar39,0,4);
                  fVar111 = (float)((ulong)uVar39 >> 0x20);
                  fVar108 = fVar108 - fVar102 * (float)uVar39;
                  fVar109 = fVar109 - fVar106 * fVar111;
                  fVar110 = fVar110 - fVar107 * (float)uVar39;
                  fVar102 = (fVar85 - (float)(param_1[0xb] >> 0x20)) - (fVar85 - fVar94) * fVar111;
                  auVar103._0_4_ = fVar108 * fVar108;
                  auVar103._4_4_ = fVar109 * fVar109;
                  auVar103._8_4_ = fVar110 * fVar110;
                  auVar103._12_4_ = fVar102 * fVar102;
                  auVar104 = NEON_ext(auVar103,auVar103,8,1);
                  if (!(bool)(~(fVar88 * fVar88 < auVar103._0_4_ + auVar103._4_4_ + auVar104._0_4_)
                             & 1)) goto LAB_030b3208;
                }
                fVar88 = (float)param_1[0xf];
                if (0.0 <= fVar88) {
                  uVar55 = (uint)param_1[0xd];
                  if ((int)uVar55 < 1) {
                    uVar67 = 0;
LAB_030b2434:
                    if ((uint)uVar67 != uVar55) goto LAB_030b243c;
                  }
                  else {
                    auVar103 = *(undefined1 (*) [16])(param_1 + 10);
                    fVar102 = fVar84 - fVar91;
                    fVar108 = fVar89 - fVar90;
                    uVar98 = SUB41(fVar108,0);
                    uVar99 = (undefined1)((uint)fVar108 >> 8);
                    uVar100 = (undefined1)((uint)fVar108 >> 0x10);
                    uVar101 = (undefined1)((uint)fVar108 >> 0x18);
                    fVar106 = fVar92 - fVar93;
                    fVar109 = fVar94 - fVar85;
                    auVar147._0_4_ = fVar102 * fVar102;
                    auVar147._4_4_ = fVar108 * fVar108;
                    auVar147._8_4_ = fVar106 * fVar106;
                    auVar147._12_4_ = fVar109 * fVar109;
                    auVar104[4] = uVar98;
                    auVar104._0_4_ = fVar102;
                    auVar104[5] = uVar99;
                    auVar104[6] = uVar100;
                    auVar104[7] = uVar101;
                    auVar104._8_4_ = fVar106;
                    auVar104._12_4_ = fVar109;
                    auVar116[4] = uVar98;
                    auVar116._0_4_ = fVar102;
                    auVar116[5] = uVar99;
                    auVar116[6] = uVar100;
                    auVar116[7] = uVar101;
                    auVar116._8_4_ = fVar106;
                    auVar116._12_4_ = fVar109;
                    auVar104 = NEON_ext(auVar104,auVar116,4,1);
                    fVar107 = fVar91 - auVar103._0_4_;
                    fVar110 = fVar90 - auVar103._4_4_;
                    fVar111 = fVar93 - auVar103._8_4_;
                    fVar113 = fVar85 - auVar103._12_4_;
                    auVar119._0_4_ = fVar102 * fVar107;
                    auVar119._4_4_ = fVar108 * fVar110;
                    auVar119._8_4_ = fVar106 * fVar111;
                    auVar119._12_4_ = fVar109 * fVar113;
                    auVar116 = NEON_ext(auVar147,auVar147,8,1);
                    auVar120 = NEON_ext(auVar119,auVar119,8,1);
                    fVar115 = auVar116._0_4_ + auVar147._0_4_ + auVar147._4_4_;
                    fVar118 = auVar120._0_4_ + auVar119._0_4_ + auVar119._4_4_;
                    uVar67 = 0;
                    do {
                      puVar43 = (undefined8 *)(param_1[0xc] + uVar67 * 0x10);
                      uVar96 = puVar43[1];
                      uVar39 = *puVar43;
                      fVar114 = (float)uVar39 - auVar103._0_4_;
                      fVar129 = (float)((ulong)uVar39 >> 0x20) - auVar103._4_4_;
                      uVar124 = SUB41(fVar129,0);
                      uVar125 = (undefined1)((uint)fVar129 >> 8);
                      uVar126 = (undefined1)((uint)fVar129 >> 0x10);
                      uVar127 = (undefined1)((uint)fVar129 >> 0x18);
                      fVar128 = (float)uVar96 - auVar103._8_4_;
                      fVar130 = (float)((ulong)uVar96 >> 0x20) - auVar103._12_4_;
                      auVar120[4] = uVar124;
                      auVar120._0_4_ = fVar114;
                      auVar120[5] = uVar125;
                      auVar120[6] = uVar126;
                      auVar120[7] = uVar127;
                      auVar120._8_4_ = fVar128;
                      auVar120._12_4_ = fVar130;
                      auVar15[4] = uVar124;
                      auVar15._0_4_ = fVar114;
                      auVar15[5] = uVar125;
                      auVar15[6] = uVar126;
                      auVar15[7] = uVar127;
                      auVar15._8_4_ = fVar128;
                      auVar15._12_4_ = fVar130;
                      auVar116 = NEON_ext(auVar120,auVar15,4,1);
                      fVar138 = (float)(CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14(
                                                  uVar98,fVar102)))) >> 0x20);
                      fVar131 = fVar102 * auVar116._0_4_ - auVar104._0_4_ * fVar114;
                      auVar133._0_8_ =
                           CONCAT44(fVar108 * auVar116._4_4_ - auVar104._4_4_ * fVar129,fVar131);
                      auVar133._8_4_ = fVar106 * fVar114 - fVar102 * fVar128;
                      auVar133._12_4_ =
                           fVar109 * (float)(CONCAT17(uVar127,CONCAT16(uVar126,CONCAT15(uVar125,
                                                  CONCAT14(uVar124,fVar114)))) >> 0x20) -
                           fVar138 * fVar130;
                      auVar116 = NEON_ext(auVar133,auVar133,4,1);
                      uVar39 = NEON_ext(auVar116._0_8_,auVar133._0_8_,4,1);
                      fVar142 = auVar116._0_4_;
                      fVar145 = auVar116._4_4_;
                      fVar132 = fVar142 * fVar142 + fVar145 * fVar145 + fVar131 * fVar131;
                      fVar134 = fVar142 * fVar142 + fVar145 * fVar145 + fVar131 * fVar131;
                      iVar140 = -(uint)(fVar132 == 0.0);
                      auVar143._0_4_ = fVar114 * fVar114;
                      auVar143._4_4_ = fVar129 * fVar129;
                      auVar143._8_4_ = fVar128 * fVar128;
                      auVar143._12_4_ = fVar130 * fVar130;
                      uVar141 = CONCAT13(~(byte)((uint)iVar140 >> 0x18),
                                         CONCAT12(~(byte)((uint)iVar140 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar140 >> 8),
                                                           ~(byte)iVar140)));
                      auVar137._0_4_ = auVar104._0_4_ * fVar142 - fVar102 * (float)uVar39;
                      auVar137._4_4_ =
                           auVar104._4_4_ * fVar145 - fVar108 * (float)((ulong)uVar39 >> 0x20);
                      auVar137._8_4_ = fVar102 * fVar131 - fVar106 * fVar142;
                      auVar137._12_4_ = fVar138 * 0.0 - fVar109 * fVar145;
                      auVar116 = NEON_ext(auVar137,auVar137,4,1);
                      auVar146._0_4_ = fVar107 * fVar114;
                      auVar146._4_4_ = fVar110 * fVar129;
                      auVar146._8_4_ = fVar111 * fVar128;
                      auVar146._12_4_ = fVar113 * fVar130;
                      fVar138 = fVar107 * auVar116._0_4_;
                      fVar131 = fVar110 * auVar116._4_4_;
                      iVar140 = -(uint)(fVar132 == 0.0);
                      iVar135 = -(uint)(fVar134 == 0.0);
                      uVar136 = CONCAT44(fVar123 / fVar134,fVar122 / fVar132) &
                                CONCAT44(uVar141,uVar141);
                      uVar39 = NEON_fminnm(CONCAT44((float)(uVar136 >> 0x20) *
                                                    (fVar138 + fVar131 + fVar111 * auVar137._0_4_),
                                                    (float)uVar136 *
                                                    (fVar138 + fVar131 + fVar111 * auVar137._0_4_)),
                                           uVar22,4);
                      fVar138 = fVar106 * fVar128 + fVar102 * fVar114 + fVar108 * fVar129;
                      fVar131 = fVar106 * fVar128 + fVar102 * fVar114 + fVar108 * fVar129;
                      auVar116 = NEON_ext(auVar143,auVar143,8,1);
                      auVar147 = NEON_ext(auVar146,auVar146,8,1);
                      fVar132 = auVar116._0_4_ + auVar143._0_4_ + auVar143._4_4_;
                      fVar134 = auVar147._0_4_ + auVar146._0_4_ + auVar146._4_4_;
                      auVar116 = NEON_fmov(0x3f800000,4);
                      iVar144 = -(uint)(fVar132 == 0.0);
                      iVar148 = -(uint)(fVar115 == 0.0);
                      uVar136 = NEON_fmax(uVar39,0,4);
                      fVar132 = auVar116._0_4_ / fVar132;
                      fVar142 = auVar116._8_4_ / fVar115;
                      fVar132 = (float)CONCAT13((byte)((uint)fVar132 >> 0x18) &
                                                ~(byte)((uint)iVar144 >> 0x18),
                                                CONCAT12((byte)((uint)fVar132 >> 0x10) &
                                                         ~(byte)((uint)iVar144 >> 0x10),
                                                         CONCAT11((byte)((uint)fVar132 >> 8) &
                                                                  ~(byte)((uint)iVar144 >> 8),
                                                                  SUB41(fVar132,0) & ~(byte)iVar144)
                                                        ));
                      fVar142 = (float)CONCAT13((byte)((uint)fVar142 >> 0x18) &
                                                ~(byte)((uint)iVar148 >> 0x18),
                                                CONCAT12((byte)((uint)fVar142 >> 0x10) &
                                                         ~(byte)((uint)iVar148 >> 0x10),
                                                         CONCAT11((byte)((uint)fVar142 >> 8) &
                                                                  ~(byte)((uint)iVar148 >> 8),
                                                                  SUB41(fVar142,0) & ~(byte)iVar148)
                                                        ));
                      fVar145 = ((float)uVar136 * fVar138 - fVar118) * fVar142;
                      fVar142 = ((float)(uVar136 >> 0x20) * fVar131 - fVar118) * fVar142;
                      uVar39 = NEON_fminnm(CONCAT44(fVar142,fVar145),uVar22,4);
                      uVar39 = NEON_fmax(uVar39,0,4);
                      fVar149 = (float)uVar39;
                      fVar150 = (float)((ulong)uVar39 >> 0x20);
                      iVar144 = -(uint)(fVar149 == fVar145);
                      iVar148 = -(uint)(fVar150 == fVar142);
                      uVar39 = NEON_fminnm(CONCAT44((fVar150 * fVar131 + fVar134) * fVar132,
                                                    (fVar149 * fVar138 + fVar134) * fVar132),uVar22,
                                           4);
                      uVar139 = NEON_fmax(uVar39,0,4);
                      uVar136 = uVar136 ^ (uVar136 ^ uVar139) &
                                          CONCAT17(~(byte)((uint)iVar148 >> 0x18) |
                                                   (byte)((uint)iVar135 >> 0x18),
                                                   CONCAT16(~(byte)((uint)iVar148 >> 0x10) |
                                                            (byte)((uint)iVar135 >> 0x10),
                                                            CONCAT15(~(byte)((uint)iVar148 >> 8) |
                                                                     (byte)((uint)iVar135 >> 8),
                                                                     CONCAT14(~(byte)iVar148 |
                                                                              (byte)iVar135,
                                                                              CONCAT13(~(byte)((uint
                                                  )iVar144 >> 0x18) | (byte)((uint)iVar140 >> 0x18),
                                                  CONCAT12(~(byte)((uint)iVar144 >> 0x10) |
                                                           (byte)((uint)iVar140 >> 0x10),
                                                           CONCAT11(~(byte)((uint)iVar144 >> 8) |
                                                                    (byte)((uint)iVar140 >> 8),
                                                                    ~(byte)iVar144 | (byte)iVar140))
                                                  )))));
                      fVar138 = (float)uVar136;
                      fVar131 = (float)(uVar136 >> 0x20);
                      fVar114 = fVar102 * fVar149 + (fVar107 - fVar114 * fVar138);
                      fVar129 = fVar108 * fVar150 + (fVar110 - fVar129 * fVar131);
                      fVar138 = fVar106 * fVar149 + (fVar111 - fVar128 * fVar138);
                      fVar128 = fVar109 * fVar150 + (fVar113 - fVar130 * fVar131);
                      fVar114 = fVar114 * fVar114;
                      fVar129 = fVar129 * fVar129;
                      uVar124 = (undefined1)((uint)fVar129 >> 8);
                      uVar125 = (undefined1)((uint)fVar129 >> 0x10);
                      uVar126 = (undefined1)((uint)fVar129 >> 0x18);
                      fVar138 = fVar138 * fVar138;
                      fVar128 = fVar128 * fVar128;
                      auVar16[4] = SUB41(fVar129,0);
                      auVar16._0_4_ = fVar114;
                      auVar16[5] = uVar124;
                      auVar16[6] = uVar125;
                      auVar16[7] = uVar126;
                      auVar16._8_4_ = fVar138;
                      auVar16._12_4_ = fVar128;
                      auVar17[4] = SUB41(fVar129,0);
                      auVar17._0_4_ = fVar114;
                      auVar17[5] = uVar124;
                      auVar17[6] = uVar125;
                      auVar17[7] = uVar126;
                      auVar17._8_4_ = fVar138;
                      auVar17._12_4_ = fVar128;
                      auVar116 = NEON_ext(auVar16,auVar17,8,1);
                      if (!(bool)(~(fVar114 + fVar129 + auVar116._0_4_ <= fVar88 * fVar88) & 1))
                      goto LAB_030b2434;
                      uVar67 = uVar67 + 1;
                    } while (uVar55 != uVar67);
                  }
                  goto LAB_030b3208;
                }
LAB_030b243c:
                plVar27 = (long *)param_1[7];
                if (plVar27 != (long *)0x0) {
                  local_120 = (uint *)CONCAT44(local_120._4_4_,0xffffffff);
                  puVar60[1] = 0;
                  puVar60[2] = 0;
                  *puVar60 = 0;
                  lVar65 = *(long *)(lVar52 + 0x20);
                  iVar140 = uVar63 - *(int *)(lVar65 + 0x20);
                  if ((int)uVar63 < *(int *)(lVar65 + 0x20)) {
                    if (*(int *)(lVar65 + 0x98) == 0) {
                      local_b8 = *(long *)(lVar65 + 0xb0) + uVar24 * 0x10;
                      uVar55 = uVar63;
                    }
                    else {
                      uVar55 = *(uint *)(*(long *)(lVar65 + 0x90) + uVar24 * 4);
                      if (uVar55 == 0xffffffff) {
                        local_b8 = *(long *)(lVar65 + 0x18) + uVar24 * 0x10;
                        iVar135 = *(int *)(lVar65 + 0x50);
                        local_b0 = *(long *)(lVar65 + 0x48);
                        iVar140 = iVar135 * uVar63;
                        goto LAB_030b2504;
                      }
                      local_b8 = *(long *)(lVar65 + 0xb0) + (long)(int)uVar55 * 0x10;
                    }
                    iVar135 = *(int *)(lVar65 + 0x50);
                    iVar140 = iVar135 * uVar55;
                    local_b0 = *(long *)(lVar65 + 0x120);
                  }
                  else {
                    local_b8 = *(long *)(lVar65 + 0xd0) + (long)iVar140 * 0x10;
                    iVar135 = *(int *)(lVar65 + 0x50);
                    local_b0 = *(long *)(lVar65 + 0x140);
                    iVar140 = iVar135 * iVar140;
                  }
LAB_030b2504:
                  local_b0 = local_b0 + (long)iVar140 * 4;
                  local_a8 = local_b0 + (long)iVar135 * 4;
                  auVar86._0_8_ =
                       CONCAT44(fVar90 + (fVar89 - fVar90) * 0.5,fVar91 + (fVar84 - fVar91) * 0.5);
                  auVar86._8_4_ = fVar93 + (fVar92 - fVar93) * 0.5;
                  auVar86._12_4_ = fVar85 + (fVar94 - fVar85) * 0.5;
                  lVar65 = *(long *)(lVar52 + 0x20);
                  iVar140 = iVar29 - *(int *)(lVar65 + 0x30);
                  if (iVar29 < *(int *)(lVar65 + 0x30)) {
                    if (*(int *)(lVar65 + 0x78) == 0) {
                      local_e8 = *(long *)(lVar65 + 0xc0) + uVar57 * 0x14;
                      uVar58 = uVar57;
                    }
                    else {
                      uVar55 = *(uint *)(*(long *)(lVar65 + 0x70) + uVar57 * 4);
                      if (uVar55 == 0xffffffff) {
                        local_e8 = *(long *)(lVar65 + 0x28) + uVar57 * 0x14;
                        iVar135 = *(int *)(lVar65 + 0x60);
                        local_e0 = *(long *)(lVar65 + 0x58);
                        iVar140 = iVar135 * iVar29;
                        goto LAB_030b25a8;
                      }
                      local_e8 = *(long *)(lVar65 + 0xc0) + (long)(int)uVar55 * 0x14;
                      uVar58 = (ulong)uVar55;
                    }
                    iVar135 = *(int *)(lVar65 + 0x60);
                    iVar140 = iVar135 * (int)uVar58;
                    local_e0 = *(long *)(lVar65 + 0x130);
                  }
                  else {
                    local_e8 = *(long *)(lVar65 + 0xe0) + (long)iVar140 * 0x14;
                    iVar135 = *(int *)(lVar65 + 0x60);
                    local_e0 = *(long *)(lVar65 + 0x150);
                    iVar140 = iVar135 * iVar140;
                  }
LAB_030b25a8:
                  local_e0 = local_e0 + (long)iVar140 * 4;
                  ppuStack_148 = &local_120;
                  local_d8 = local_e0 + (long)iVar135 * 4;
                  uStack_c8 = auVar86._8_8_;
                  local_140 = 0x21;
                  local_158 = plVar76;
                  local_150 = puVar1;
                  local_f0 = uVar54;
                  local_d0 = auVar86._0_8_;
                  local_c0 = uVar21;
                  uVar58 = (**(code **)(*plVar27 + 0x20))(plVar27,&local_158);
                  if ((uVar58 & 1) != 0) {
                    uVar58 = param_1[1];
                    lVar65 = *(long *)(uVar58 + 0x28);
                    goto LAB_030b2614;
                  }
                  goto LAB_030b320c;
                }
LAB_030b2614:
                if ((*(byte *)(lVar65 + uVar57 * 0x14 + 0x10) >> 4 & 1) == 0) {
                  puVar43 = (undefined8 *)(param_1[0x10] + uVar36 * 0x10);
                  uVar96 = puVar43[1];
                  fVar106 = (float)uVar96;
                  uVar39 = *puVar43;
                  puVar43 = (undefined8 *)(param_1[0x10] + ((ulong)uVar51 & 0x3fffff) * 0x10);
                  uVar97 = puVar43[1];
                  uVar95 = *puVar43;
                  piVar81 = (int *)(lVar65 + uVar57 * 0x14);
                  fVar94 = (float)uVar95;
                  fVar88 = (float)uVar39;
                  fVar109 = fVar94 - fVar88;
                  fVar102 = (float)((ulong)uVar95 >> 0x20);
                  fVar91 = (float)((ulong)uVar39 >> 0x20);
                  fVar107 = fVar102 - fVar91;
                  fVar108 = (float)uVar97;
                  fVar110 = fVar108 - fVar106;
                  fVar90 = (float)((ulong)uVar97 >> 0x20) - (float)((ulong)uVar96 >> 0x20);
                  auVar103 = *(undefined1 (*) [16])
                              (*(long *)(uVar58 + 0x38) + (long)piVar81[1] * 0x10);
                  auVar87 = *(undefined1 (*) [16])(*(long *)(uVar58 + 0x38) + (long)*piVar81 * 0x10)
                  ;
                  auVar12._4_4_ = fVar107;
                  auVar12._0_4_ = fVar109;
                  auVar12._8_4_ = fVar110;
                  auVar12._12_4_ = fVar90;
                  auVar13._4_4_ = fVar107;
                  auVar13._0_4_ = fVar109;
                  auVar13._8_4_ = fVar110;
                  auVar13._12_4_ = fVar90;
                  auVar147 = NEON_ext(auVar12,auVar13,4,1);
                  auVar104 = *(undefined1 (*) [16])(param_1[0x12] + uVar24 * 0x10);
                  auVar116 = NEON_ext(auVar104,auVar104,8,1);
                  uVar39 = NEON_ext(auVar104._0_8_,auVar116._0_8_,4,1);
                  auVar117._0_4_ = auVar147._0_4_ * auVar104._0_4_ - fVar109 * (float)uVar39;
                  auVar117._4_4_ =
                       auVar147._4_4_ * auVar104._4_4_ - fVar107 * (float)((ulong)uVar39 >> 0x20);
                  auVar117._8_4_ = fVar109 * auVar104._8_4_ - fVar110 * auVar104._0_4_;
                  auVar117._12_4_ = fVar107 * auVar104._12_4_ - fVar90 * auVar104._4_4_;
                  auVar104 = NEON_ext(auVar117,auVar117,4,1);
                  fVar111 = auVar104._0_4_;
                  fVar113 = auVar104._4_4_;
                  fVar115 = -(fVar88 * fVar111 + fVar91 * fVar113 + fVar106 * auVar117._0_4_);
                  fVar85 = auVar87._0_4_;
                  auVar121._0_4_ = fVar85 * fVar111;
                  fVar84 = auVar87._4_4_;
                  auVar121._4_4_ = fVar84 * fVar113;
                  fVar89 = auVar87._8_4_;
                  auVar121._8_4_ = fVar89 * auVar117._0_4_;
                  fVar92 = auVar87._12_4_;
                  auVar121._12_4_ = fVar92 * fVar115;
                  auVar104 = NEON_ext(auVar121,auVar121,8,1);
                  fVar93 = auVar104._0_4_ + fVar115;
                  fVar90 = auVar121._0_4_ + auVar121._4_4_ + fVar93;
                  if (0.0 < fVar90) {
LAB_030b277c:
                    uVar58 = CONCAT44(-(uint)(0.0 < auVar121._0_4_ + auVar121._4_4_ + fVar93),
                                      -(uint)(0.0 < fVar90)) & 0x100000001;
                    iVar140 = (int)uVar58;
                    iVar135 = (int)(uVar58 >> 0x20);
                    auVar14._4_4_ = (iVar135 << 0x1f) >> 0x1f;
                    auVar14._0_4_ = (iVar140 << 0x1f) >> 0x1f;
                    auVar14._8_4_ = (iVar140 << 0x1f) >> 0x1f;
                    auVar14._12_4_ = (iVar135 << 0x1f) >> 0x1f;
                    auVar87 = auVar87 ^ (auVar87 ^ auVar103) & ~auVar14;
                    fVar88 = fVar88 - auVar87._0_4_;
                    fVar91 = fVar91 - auVar87._4_4_;
                    fVar106 = fVar106 - auVar87._8_4_;
                    fVar94 = auVar87._0_4_ - fVar94;
                    fVar102 = auVar87._4_4_ - fVar102;
                    fVar108 = auVar87._8_4_ - fVar108;
                    fVar88 = fVar88 * fVar88;
                    fVar91 = fVar91 * fVar91;
                    fVar106 = fVar106 * fVar106;
                    fVar94 = fVar94 * fVar94;
                    fVar102 = fVar102 * fVar102;
                    fVar108 = fVar108 * fVar108;
                    uVar39 = CONCAT44(SQRT(fVar106 + fVar88 + fVar91) +
                                      SQRT(fVar108 + fVar94 + fVar102),
                                      SQRT(fVar106 + fVar88 + fVar91) +
                                      SQRT(fVar108 + fVar94 + fVar102));
                  }
                  else {
                    auVar112._0_4_ = auVar103._0_4_ * fVar111;
                    auVar112._4_4_ = auVar103._4_4_ * fVar113;
                    auVar112._8_4_ = auVar103._8_4_ * auVar117._0_4_;
                    auVar112._12_4_ = auVar103._12_4_ * fVar115;
                    auVar104 = NEON_ext(auVar112,auVar112,8,1);
                    if (auVar112._0_4_ + auVar112._4_4_ + auVar104._0_4_ + fVar115 < 0.0)
                    goto LAB_030b277c;
                    uVar39 = CONCAT44(SQRT(fVar110 * fVar110 + fVar109 * fVar109 + fVar107 * fVar107
                                          ),SQRT(fVar110 * fVar110 +
                                                 fVar109 * fVar109 + fVar107 * fVar107));
                    auVar87._0_4_ = fVar85 + (auVar103._0_4_ - fVar85) * 0.5;
                    auVar87._4_4_ = fVar84 + (auVar103._4_4_ - fVar84) * 0.5;
                    auVar87._8_4_ = fVar89 + (auVar103._8_4_ - fVar89) * 0.5;
                    auVar87._12_4_ = fVar92 + (auVar103._12_4_ - fVar92) * 0.5;
                  }
                  plVar76 = (long *)param_1[6];
                  if (plVar76 == (long *)0x0) {
                    fVar85 = fVar83 + (float)uVar39;
                  }
                  else {
                    local_158 = (long *)*param_1;
                    lVar65 = *(long *)(local_158[7] + lVar82);
                    local_120 = (uint *)CONCAT44(local_120._4_4_,0xffffffff);
                    puVar60[1] = 0;
                    puVar60[2] = 0;
                    *puVar60 = 0;
                    lVar52 = *(long *)(lVar65 + 0x20);
                    iVar140 = uVar63 - *(int *)(lVar52 + 0x20);
                    if ((int)uVar63 < *(int *)(lVar52 + 0x20)) {
                      if (*(int *)(lVar52 + 0x98) == 0) {
                        local_b8 = *(long *)(lVar52 + 0xb0) + uVar24 * 0x10;
                        uVar55 = uVar63;
                      }
                      else {
                        uVar55 = *(uint *)(*(long *)(lVar52 + 0x90) + uVar24 * 4);
                        if (uVar55 == 0xffffffff) {
                          local_b8 = *(long *)(lVar52 + 0x18) + uVar24 * 0x10;
                          iVar135 = *(int *)(lVar52 + 0x50);
                          local_b0 = *(long *)(lVar52 + 0x48);
                          iVar140 = iVar135 * uVar63;
                          goto LAB_030b2c50;
                        }
                        local_b8 = *(long *)(lVar52 + 0xb0) + (long)(int)uVar55 * 0x10;
                      }
                      iVar135 = *(int *)(lVar52 + 0x50);
                      iVar140 = iVar135 * uVar55;
                      local_b0 = *(long *)(lVar52 + 0x120);
                    }
                    else {
                      local_b8 = *(long *)(lVar52 + 0xd0) + (long)iVar140 * 0x10;
                      iVar135 = *(int *)(lVar52 + 0x50);
                      local_b0 = *(long *)(lVar52 + 0x140);
                      iVar140 = iVar135 * iVar140;
                    }
LAB_030b2c50:
                    local_b0 = local_b0 + (long)iVar140 * 4;
                    local_a8 = local_b0 + (long)iVar135 * 4;
                    lVar65 = *(long *)(lVar65 + 0x20);
                    iVar140 = iVar29 - *(int *)(lVar65 + 0x30);
                    if (iVar29 < *(int *)(lVar65 + 0x30)) {
                      if (*(int *)(lVar65 + 0x78) == 0) {
                        local_e8 = *(long *)(lVar65 + 0xc0) + uVar57 * 0x14;
LAB_030b2cc8:
                        iVar135 = *(int *)(lVar65 + 0x60);
                        local_e0 = *(long *)(lVar65 + 0x130);
                      }
                      else {
                        uVar55 = *(uint *)(*(long *)(lVar65 + 0x70) + uVar57 * 4);
                        if (uVar55 != 0xffffffff) {
                          local_e8 = *(long *)(lVar65 + 0xc0) + (long)(int)uVar55 * 0x14;
                          uVar57 = (ulong)uVar55;
                          goto LAB_030b2cc8;
                        }
                        iVar135 = *(int *)(lVar65 + 0x60);
                        local_e8 = *(long *)(lVar65 + 0x28) + uVar57 * 0x14;
                        local_e0 = *(long *)(lVar65 + 0x58);
                      }
                      iVar140 = iVar135 * (int)uVar57;
                    }
                    else {
                      iVar135 = *(int *)(lVar65 + 0x60);
                      local_e8 = *(long *)(lVar65 + 0xe0) + (long)iVar140 * 0x14;
                      local_e0 = *(long *)(lVar65 + 0x150);
                      iVar140 = iVar135 * iVar140;
                    }
                    local_e0 = local_e0 + (long)iVar140 * 4;
                    ppuStack_148 = &local_120;
                    local_d8 = local_e0 + (long)iVar135 * 4;
                    uStack_c8 = auVar87._8_8_;
                    local_140 = 0x21;
                    local_150 = puVar1;
                    local_138 = CONCAT44(fVar83,fVar83);
                    uStack_130 = uVar39;
                    local_f0 = uVar54;
                    local_d0 = auVar87._0_8_;
                    local_c0 = uVar21;
                    fVar85 = (float)(**(code **)(*plVar76 + 0x20))(plVar76,&local_158);
                    fVar85 = fVar83 + fVar85;
                  }
                }
                else {
                  uVar9 = *(ushort *)(*(long *)(uVar58 + 0x18) + uVar24 * 0x10 + 8);
                  uVar55 = (uint)(short)uVar9;
                  if ((short)uVar9 < 1) {
                    fVar88 = 0.0;
                    fVar91 = 0.0;
                    fVar90 = 0.0;
                  }
                  else {
                    lVar52 = *(long *)(uVar58 + 0x38);
                    uVar55 = (uint)uVar9;
                    lVar66 = (long)*(int *)(*(long *)(uVar58 + 0x18) + uVar24 * 0x10);
                    uVar28 = (uint)uVar9;
                    if (uVar9 < 2) {
                      uVar28 = 1;
                    }
                    uVar67 = (ulong)uVar28;
                    uVar58 = uVar67 & 3;
                    if (uVar67 - 1 < 3) {
                      uVar136 = 0;
                      fVar88 = 0.0;
                      fVar91 = 0.0;
                      fVar90 = 0.0;
                    }
                    else {
                      fVar88 = 0.0;
                      fVar91 = 0.0;
                      fVar90 = 0.0;
                      uVar136 = 0;
                      piVar81 = (int *)(lVar65 + lVar66 * 0x14 + 0x28);
                      do {
                        uVar136 = uVar136 + 4;
                        puVar43 = (undefined8 *)(lVar52 + (long)piVar81[-10] * 0x10);
                        uVar39 = *puVar43;
                        puVar50 = (undefined8 *)(lVar52 + (long)piVar81[-5] * 0x10);
                        uVar96 = *puVar50;
                        puVar53 = (undefined8 *)(lVar52 + (long)*piVar81 * 0x10);
                        uVar95 = *puVar53;
                        piVar42 = piVar81 + 5;
                        piVar81 = piVar81 + 0x14;
                        puVar10 = (undefined8 *)(lVar52 + (long)*piVar42 * 0x10);
                        uVar97 = *puVar10;
                        fVar88 = fVar88 + (float)uVar39 + (float)uVar96 + (float)uVar95 +
                                 (float)uVar97;
                        fVar91 = fVar91 + (float)((ulong)uVar39 >> 0x20) +
                                 (float)((ulong)uVar96 >> 0x20) + (float)((ulong)uVar95 >> 0x20) +
                                 (float)((ulong)uVar97 >> 0x20);
                        fVar90 = fVar90 + (float)puVar43[1] + (float)puVar50[1] + (float)puVar53[1]
                                 + (float)puVar10[1];
                      } while ((uVar67 & 0xfffc) != uVar136);
                    }
                    if ((uVar28 & 3) != 0) {
                      piVar81 = (int *)(lVar65 + (uVar136 + lVar66) * 0x14);
                      do {
                        uVar58 = uVar58 - 1;
                        puVar43 = (undefined8 *)(lVar52 + (long)*piVar81 * 0x10);
                        uVar39 = *puVar43;
                        fVar88 = fVar88 + (float)uVar39;
                        fVar91 = fVar91 + (float)((ulong)uVar39 >> 0x20);
                        fVar90 = fVar90 + (float)puVar43[1];
                        piVar81 = piVar81 + 5;
                      } while (uVar58 != 0);
                    }
                  }
                  uVar39 = NEON_scvtf(CONCAT44(uVar55,uVar55),4);
                  fVar93 = fVar122 / (float)uVar39;
                  fVar88 = fVar88 * fVar93;
                  fVar91 = fVar91 * (fVar123 / (float)((ulong)uVar39 >> 0x20));
                  fVar90 = fVar90 * fVar93;
                  local_128[0] = uVar51 & 0x3fffff;
                  FUN_03096684(*(undefined8 *)
                                (*(long *)(*param_1 + 0x38) + ((ulong)(uVar51 >> 0xe) & 0x3ff00)),
                               local_128,&local_a0);
                  plVar76 = (long *)*param_1;
                  lVar65 = *(long *)(param_1[1] + 0x28);
                  puVar59 = (uint *)(lVar65 + uVar57 * 0x14);
                  puVar46 = puVar59 + 2;
                  uVar55 = *puVar46;
                  uVar58 = (ulong)uVar55 & 0x3fffff;
                  lVar52 = *(long *)(plVar76[7] + ((ulong)(uVar55 >> 0xe) & 0x3ff00));
                  lVar66 = *(long *)(lVar52 + 0x20);
                  iVar140 = *(int *)(lVar66 + 0x30);
                  iVar144 = (int)uVar58;
                  iVar135 = iVar144 - iVar140;
                  if (iVar144 < iVar140) {
                    iVar135 = iVar144;
                    if ((*(int *)(lVar66 + 0x78) == 0) ||
                       (iVar135 = *(int *)(*(long *)(lVar66 + 0x70) + uVar58 * 4), iVar135 != -1)) {
                      lVar68 = *(long *)(lVar66 + 0xc0);
                      goto LAB_030b2974;
                    }
                    lVar68 = *(long *)(lVar66 + 0x28) + uVar58 * 0x14;
                  }
                  else {
                    lVar68 = *(long *)(lVar66 + 0xe0);
LAB_030b2974:
                    lVar68 = lVar68 + (long)iVar135 * 0x14;
                  }
                  piVar81 = (int *)(lVar65 + uVar57 * 0x14);
                  lVar74 = *(long *)(param_1[1] + 0x38);
                  puVar43 = (undefined8 *)(lVar74 + (long)piVar81[1] * 0x10);
                  uVar39 = *puVar43;
                  pfVar40 = (float *)(lVar74 + (long)*piVar81 * 0x10);
                  fVar93 = *pfVar40 - (float)uVar39;
                  fVar85 = pfVar40[1] - (float)((ulong)uVar39 >> 0x20);
                  fVar106 = pfVar40[2] - (float)puVar43[1];
                  fVar84 = *pfVar40 - fVar88;
                  fVar89 = pfVar40[1] - fVar91;
                  fVar92 = pfVar40[2] - fVar90;
                  fVar94 = fVar84 * fVar93;
                  fVar102 = fVar89 * fVar85;
                  fVar108 = fVar92 * fVar106;
                  uVar39 = NEON_fminnm(CONCAT44((fVar94 + fVar102 + fVar108) /
                                                (fVar93 * fVar93 + fVar85 * fVar85 +
                                                fVar106 * fVar106),
                                                (fVar94 + fVar102 + fVar108) /
                                                (fVar93 * fVar93 + fVar85 * fVar85 +
                                                fVar106 * fVar106)),uVar22,4);
                  uVar39 = NEON_fmax(uVar39,0,4);
                  fVar94 = (float)uVar39;
                  fVar84 = fVar84 - fVar93 * fVar94;
                  fVar89 = fVar89 - fVar85 * (float)((ulong)uVar39 >> 0x20);
                  fVar92 = fVar92 - fVar106 * fVar94;
                  if (iVar144 < iVar140) {
                    if ((*(int *)(lVar66 + 0x78) == 0) ||
                       (iVar144 = *(int *)(*(long *)(lVar66 + 0x70) + uVar58 * 4), iVar144 != -1)) {
                      piVar81 = (int *)(*(long *)(lVar66 + 0xc0) + (long)iVar144 * 0x14);
                    }
                    else {
                      piVar81 = (int *)(*(long *)(lVar66 + 0x28) + uVar58 * 0x14);
                    }
                  }
                  else {
                    piVar81 = (int *)(*(long *)(lVar66 + 0xe0) + (long)(iVar144 - iVar140) * 0x14);
                  }
                  iVar144 = *(int *)(lVar66 + 0x40);
                  iVar140 = *piVar81;
                  iVar135 = piVar81[1];
                  lVar74 = 0x38;
                  if (iVar144 <= iVar140) {
                    lVar74 = 0xf0;
                  }
                  iVar148 = 0;
                  if (iVar144 <= iVar140) {
                    iVar148 = iVar144;
                  }
                  puVar43 = (undefined8 *)
                            (*(long *)(lVar66 + lVar74) + (long)(iVar140 - iVar148) * 0x10);
                  fVar93 = (float)puVar43[1];
                  uVar39 = *puVar43;
                  lVar74 = 0x38;
                  if (iVar144 <= iVar135) {
                    lVar74 = 0xf0;
                  }
                  iVar140 = 0;
                  if (iVar144 <= iVar135) {
                    iVar140 = iVar144;
                  }
                  puVar43 = (undefined8 *)
                            (*(long *)(lVar66 + lVar74) + (long)(iVar135 - iVar140) * 0x10);
                  fVar115 = (float)puVar43[1];
                  uVar96 = *puVar43;
                  fVar111 = (float)uVar96;
                  fVar113 = (float)((ulong)uVar96 >> 0x20);
                  fVar85 = (float)uVar39;
                  fVar102 = (float)((ulong)uVar39 >> 0x20);
                  fVar129 = (float)*(undefined8 *)(lVar52 + 0x98);
                  fVar109 = (float)*(undefined8 *)(lVar52 + 0x90);
                  fVar108 = fVar109 + *(float *)(lVar52 + 0x80) * fVar93 +
                                      *(float *)(lVar52 + 0x60) * fVar85 +
                                      *(float *)(lVar52 + 0x70) * fVar102;
                  fVar107 = (float)((ulong)*(undefined8 *)(lVar52 + 0x90) >> 0x20);
                  fVar106 = fVar107 + *(float *)(lVar52 + 0x84) * fVar93 +
                                      *(float *)(lVar52 + 100) * fVar85 +
                                      *(float *)(lVar52 + 0x74) * fVar102;
                  fVar110 = fVar129 + *(float *)(lVar52 + 0x88) * fVar93 +
                                      *(float *)(lVar52 + 0x68) * fVar85 +
                                      *(float *)(lVar52 + 0x78) * fVar102;
                  fVar118 = fVar108 - (fVar109 +
                                      *(float *)(lVar52 + 0x80) * fVar115 +
                                      *(float *)(lVar52 + 0x60) * fVar111 +
                                      *(float *)(lVar52 + 0x70) * fVar113);
                  fVar114 = fVar106 - (fVar107 +
                                      *(float *)(lVar52 + 0x84) * fVar115 +
                                      *(float *)(lVar52 + 100) * fVar111 +
                                      *(float *)(lVar52 + 0x74) * fVar113);
                  fVar111 = fVar110 - (fVar129 +
                                      *(float *)(lVar52 + 0x88) * fVar115 +
                                      *(float *)(lVar52 + 0x68) * fVar111 +
                                      *(float *)(lVar52 + 0x78) * fVar113);
                  fVar107 = (float)((ulong)local_a0 >> 0x20);
                  fVar108 = fVar108 - SUB84(local_a0,0);
                  fVar106 = fVar106 - fVar107;
                  fVar110 = fVar110 - (float)uStack_98;
                  fVar93 = fVar108 * fVar118;
                  fVar85 = fVar106 * fVar114;
                  fVar109 = fVar110 * fVar111;
                  fVar102 = (fVar93 + fVar85 + fVar109) /
                            (fVar118 * fVar118 + fVar114 * fVar114 + fVar111 * fVar111);
                  uVar39 = NEON_fminnm(CONCAT17((char)((uint)fVar102 >> 0x18),
                                                CONCAT16((char)((uint)fVar102 >> 0x10),
                                                         CONCAT15((char)((uint)fVar102 >> 8),
                                                                  CONCAT14(SUB41(fVar102,0),
                                                                           (fVar93 + fVar85 +
                                                                           fVar109) /
                                                                           (fVar118 * fVar118 +
                                                                            fVar114 * fVar114 +
                                                                           fVar111 * fVar111))))),
                                       uVar22,4);
                  uVar39 = NEON_fmax(uVar39,0,4);
                  fVar102 = (float)uVar39;
                  fVar108 = fVar108 - fVar118 * fVar102;
                  fVar106 = fVar106 - fVar114 * (float)((ulong)uVar39 >> 0x20);
                  fVar110 = fVar110 - fVar111 * fVar102;
                  fVar85 = 0.0;
                  fVar93 = 0.0;
                  if ((*(byte *)(lVar65 + uVar57 * 0x14 + 0x10) >> 4 & 1) != 0) {
                    uVar9 = *(ushort *)(lVar65 + uVar57 * 0x14 + 0x12);
                    fVar93 = (float)((uint)uVar9 << 0x10);
                    auVar18._2_12_ = SUB1612(ZEXT816(0),4);
                    auVar18._0_2_ = uVar9;
                    fVar85 = (float)(auVar18._0_4_ << 0x10);
                  }
                  fVar85 = SQRT(fVar84 * fVar84 + fVar89 * fVar89 + fVar92 * fVar92) +
                           SQRT(fVar108 * fVar108 + fVar106 * fVar106 + fVar110 * fVar110) + fVar85;
                  plVar27 = (long *)param_1[6];
                  if (plVar27 == (long *)0x0) {
                    fVar85 = fVar83 + fVar85;
                  }
                  else {
                    lVar65 = *(long *)(plVar76[7] + lVar82);
                    auVar105._0_8_ = CONCAT44(fVar91 + fVar89,fVar88 + fVar84);
                    auVar105._8_4_ = fVar90 + fVar92;
                    *puVar60 = 0;
                    puVar60[1] = 0;
                    puVar60[2] = 0;
                    lVar52 = *(long *)(lVar65 + 0x20);
                    iVar140 = uVar63 - *(int *)(lVar52 + 0x20);
                    if ((int)uVar63 < *(int *)(lVar52 + 0x20)) {
                      if (*(int *)(lVar52 + 0x98) == 0) {
                        local_b8 = *(long *)(lVar52 + 0xb0) + uVar24 * 0x10;
                        uVar55 = uVar63;
                      }
                      else {
                        uVar55 = *(uint *)(*(long *)(lVar52 + 0x90) + uVar24 * 4);
                        if (uVar55 == 0xffffffff) {
                          local_b8 = *(long *)(lVar52 + 0x18) + uVar24 * 0x10;
                          iVar135 = *(int *)(lVar52 + 0x50);
                          local_b0 = *(long *)(lVar52 + 0x48);
                          iVar140 = iVar135 * uVar63;
                          goto LAB_030b2cf0;
                        }
                        local_b8 = *(long *)(lVar52 + 0xb0) + (long)(int)uVar55 * 0x10;
                      }
                      iVar135 = *(int *)(lVar52 + 0x50);
                      iVar140 = iVar135 * uVar55;
                      local_b0 = *(long *)(lVar52 + 0x120);
                    }
                    else {
                      local_b8 = *(long *)(lVar52 + 0xd0) + (long)iVar140 * 0x10;
                      iVar135 = *(int *)(lVar52 + 0x50);
                      local_b0 = *(long *)(lVar52 + 0x140);
                      iVar140 = iVar135 * iVar140;
                    }
LAB_030b2cf0:
                    local_b0 = local_b0 + (long)iVar140 * 4;
                    local_a8 = local_b0 + (long)iVar135 * 4;
                    auVar105._12_4_ = fVar94;
                    lVar65 = *(long *)(lVar65 + 0x20);
                    iVar140 = iVar29 - *(int *)(lVar65 + 0x30);
                    if (iVar29 < *(int *)(lVar65 + 0x30)) {
                      if ((*(int *)(lVar65 + 0x78) == 0) ||
                         (uVar55 = *(uint *)(*(long *)(lVar65 + 0x70) + uVar57 * 4),
                         uVar57 = (ulong)uVar55, uVar55 != 0xffffffff)) {
                        iVar140 = (int)uVar57;
                        local_110 = *(long *)(lVar65 + 0x130);
                      }
                      else {
                        local_110 = *(long *)(lVar65 + 0x58);
                        iVar140 = iVar29;
                      }
                    }
                    else {
                      local_110 = *(long *)(lVar65 + 0x150);
                    }
                    local_110 = local_110 + (long)(*(int *)(lVar65 + 0x60) * iVar140) * 4;
                    local_120 = (uint *)CONCAT44((int)((ulong)local_120 >> 0x20),uVar54);
                    uStack_108 = local_110 + (long)*(int *)(lVar65 + 0x60) * 4;
                    uStack_f8 = auVar105._8_8_;
                    uVar55 = *puVar46;
                    uVar57 = (ulong)uVar55 & 0x3fffff;
                    lVar65 = *(long *)(*(long *)(plVar76[7] + ((ulong)(uVar55 >> 0xe) & 0x3ff00)) +
                                      0x20);
                    iVar135 = (int)uVar57;
                    iVar140 = iVar135 - *(int *)(lVar65 + 0x30);
                    if (iVar135 < *(int *)(lVar65 + 0x30)) {
                      if (*(int *)(lVar65 + 0x78) == 0) {
                        iVar140 = iVar135;
                      }
                      else {
                        iVar140 = *(int *)(*(long *)(lVar65 + 0x70) + uVar57 * 4);
                        if (iVar140 == -1) {
                          local_e0 = *(long *)(lVar65 + 0x58);
                          iVar140 = iVar135;
                          goto LAB_030b2df0;
                        }
                      }
                      local_e0 = *(long *)(lVar65 + 0x130);
                    }
                    else {
                      local_e0 = *(long *)(lVar65 + 0x150);
                    }
LAB_030b2df0:
                    local_e0 = local_e0 + (long)(*(int *)(lVar65 + 0x60) * iVar140) * 4;
                    ppuStack_148 = &local_120;
                    local_d8 = local_e0 + (long)*(int *)(lVar65 + 0x60) * 4;
                    uStack_c8 = CONCAT44(fVar102,(float)uStack_98 + fVar110);
                    local_d0 = CONCAT44(fVar107 + fVar106,SUB84(local_a0,0) + fVar108);
                    local_140 = 0x21;
                    local_158 = plVar76;
                    local_150 = puVar1;
                    local_138 = CONCAT44(fVar83,fVar83);
                    uStack_130 = CONCAT44(SQRT(fVar84 * fVar84 + fVar89 * fVar89 + fVar92 * fVar92)
                                          + SQRT(fVar108 * fVar108 + fVar106 * fVar106 +
                                                 fVar110 * fVar110) + fVar93,fVar85);
                    local_118 = puVar59;
                    local_100 = auVar105._0_8_;
                    local_f0 = uVar54;
                    local_e8 = lVar68;
                    local_c0 = uVar21;
                    fVar85 = (float)(**(code **)(*plVar27 + 0x20))(plVar27,&local_158);
                    fVar85 = fVar83 + fVar85;
                  }
                }
                uVar54 = uVar51 & 0x3fffff;
                puVar43 = (undefined8 *)(local_228 + lVar37 * 0x10);
                iVar140 = *(int *)(puVar43 + 1);
                puVar46 = (uint *)*puVar43;
                if (*puVar46 == uVar54) {
                  uVar55 = 0;
LAB_030b2f9c:
                  pfVar40 = (float *)(puVar46 + (long)(int)uVar55 * 2 + 1);
                }
                else {
                  uVar55 = iVar140 - 1;
                  uVar57 = (ulong)uVar55;
                  uVar28 = *(uint *)((long)puVar46 +
                                    (-(ulong)(uVar55 >> 0x1f) & 0xfffffff800000000 | uVar57 << 3));
                  if (uVar28 == uVar54) {
LAB_030b2f94:
                    if (uVar55 != 0xffffffff) goto LAB_030b2f9c;
                  }
                  else {
                    pfVar40 = local_230;
                    if (((iVar140 < 3) || ((int)uVar54 < (int)*puVar46)) ||
                       ((int)uVar28 < (int)uVar54)) goto joined_r0x030b2fd0;
                    uVar28 = 0;
                    do {
                      iVar140 = uVar28 + (uint)uVar57;
                      if (iVar140 < 0) {
                        iVar140 = iVar140 + 1;
                      }
                      uVar55 = iVar140 >> 1;
                      uVar6 = *(uint *)((long)puVar46 +
                                       (-(ulong)(uVar55 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar55 << 3));
                      if (uVar6 == uVar54) goto LAB_030b2f94;
                      uVar5 = uVar55;
                      if ((int)uVar6 < (int)uVar54) {
                        uVar5 = (uint)uVar57;
                        uVar28 = uVar55;
                      }
                      uVar57 = (ulong)uVar5;
                    } while (1 < (int)(uVar5 - uVar28));
                  }
                  pfVar40 = local_230;
                }
joined_r0x030b2fd0:
                if (((*(ushort *)(local_198 + 0xe) & 3) == 0) || (fVar85 < *pfVar40)) {
                  FUN_030b09b8(local_230,(ulong)uVar72,uVar54);
                  puVar46 = (uint *)*puVar43;
                  uVar9 = *(ushort *)(local_198 + 0xe);
                  if (*puVar46 == uVar54) {
                    uVar55 = 0;
LAB_030b30f0:
                    pfVar40 = (float *)(puVar46 + (long)(int)uVar55 * 2 + 1);
                  }
                  else {
                    iVar140 = *(int *)(puVar43 + 1);
                    uVar55 = iVar140 - 1;
                    uVar57 = (ulong)uVar55;
                    uVar28 = *(uint *)((long)puVar46 +
                                      (-(ulong)(uVar55 >> 0x1f) & 0xfffffff800000000 | uVar57 << 3))
                    ;
                    if (uVar28 == uVar54) {
LAB_030b30e8:
                      if (uVar55 != 0xffffffff) goto LAB_030b30f0;
                    }
                    else {
                      pfVar40 = local_230;
                      if (((iVar140 < 3) || ((int)uVar54 < (int)*puVar46)) ||
                         ((int)uVar28 < (int)uVar54)) goto LAB_030b3100;
                      uVar28 = 0;
                      do {
                        iVar140 = uVar28 + (uint)uVar57;
                        if (iVar140 < 0) {
                          iVar140 = iVar140 + 1;
                        }
                        uVar55 = iVar140 >> 1;
                        uVar6 = *(uint *)((long)puVar46 +
                                         (-(ulong)(uVar55 >> 0x1f) & 0xfffffff800000000 |
                                         (ulong)uVar55 << 3));
                        if (uVar6 == uVar54) goto LAB_030b30e8;
                        uVar5 = uVar55;
                        if ((int)uVar6 < (int)uVar54) {
                          uVar5 = (uint)uVar57;
                          uVar28 = uVar55;
                        }
                        uVar57 = (ulong)uVar5;
                      } while (1 < (int)(uVar5 - uVar28));
                    }
                    pfVar40 = local_230;
                  }
LAB_030b3100:
                  fVar88 = *pfVar40;
                  *(ushort *)(local_198 + 0xe) = uVar9 & 0xfffc | 1;
                  if ((uVar9 & 1) != 0) {
                    if (0 < (int)uVar20) {
                      uVar57 = 0;
                      puVar46 = puVar23;
                      do {
                        if (*puVar46 == uVar51) {
                          puVar46[1] = (uint)fVar88;
                          uVar54 = *puVar46;
                          if ((int)uVar57 == 0) goto LAB_030b3200;
                          uVar58 = uVar57 & 0xffffffff;
                          goto LAB_030b31c0;
                        }
                        uVar57 = uVar57 + 1;
                        puVar46 = puVar46 + 2;
                      } while (uVar20 != uVar57);
                    }
                    goto LAB_030b3208;
                  }
                  if (iVar78 >> 3 <= (int)uVar20) goto LAB_030b3220;
                  uVar54 = uVar20 + 1;
                  puVar23[(long)(int)uVar20 * 2] = uVar51;
                  (puVar23 + (long)(int)uVar20 * 2)[1] = (uint)fVar88;
                  if ((int)uVar20 < 1) {
LAB_030b319c:
                    uVar57 = (ulong)(int)uVar20;
                  }
                  else {
                    do {
                      uVar55 = uVar20;
                      if (-1 < (int)(uVar20 - 1)) {
                        uVar55 = uVar20 - 1;
                      }
                      uVar57 = (ulong)(uint)((int)uVar55 >> 1);
                      if ((int)puVar23[uVar57 * 2 + 1] <= (int)fVar88) goto LAB_030b319c;
                      *(undefined8 *)(puVar23 + (ulong)uVar20 * 2) =
                           *(undefined8 *)(puVar23 + uVar57 * 2);
                      bVar75 = 2 < (int)uVar20;
                      uVar20 = (int)uVar55 >> 1;
                    } while (bVar75);
                  }
                  puVar23[uVar57 * 2] = uVar51;
                  (puVar23 + uVar57 * 2)[1] = (uint)fVar88;
                  uVar20 = uVar54;
                }
                else {
                }
                goto LAB_030b320c;
              }
LAB_030b3220:
              *(ushort *)(local_190 + 0xe) = *(ushort *)(local_190 + 0xe) & 0xfffc | 2;
              if (lVar45 == 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar38,local_248);
              }
              else {
                uVar24 = (long)local_248 + 0x3fU & 0xffffffffffffffc0;
                if ((*(ulong *)(lVar45 + 0x28) < uVar24) ||
                   (*(long *)(lVar45 + 0x38) != uVar24 + (long)puVar38)) {
                  if (puVar38 != (uint *)0x0) {
                    if (*(ulong *)(lVar45 + 0x28) < uVar24 + 0x40) {
                      *(int *)(*(long *)(lVar45 + 0x30) + 0x20) =
                           *(int *)(*(long *)(lVar45 + 0x30) + 0x20) + -1;
                      (**(code **)(**(long **)(lVar45 + 0x10) + 0x18))
                                (*(long **)(lVar45 + 0x10),(long)puVar38 - (long)(int)puVar38[-1],
                                 uVar24 + 0x44);
                    }
                    else if (*(long *)(lVar45 + 0x38) == uVar24 + (long)puVar38) {
                      *(uint **)(lVar45 + 0x38) = puVar38;
                      FUN_031cf578(lVar45);
                    }
                    else {
                      FUN_031cf778(lVar45);
                    }
                  }
                }
                else {
                  *(uint **)(lVar45 + 0x38) = puVar38;
                  if (*(uint **)(lVar45 + 0x48) == puVar38) {
                    FUN_031cf578(lVar45);
                  }
                }
              }
              if (((iVar78 >> 3 <= (int)uVar20) || (param_2 < 1)) || (uVar20 == 0)) break;
            }
          }
          uVar33 = uVar33 + 1;
          if (uVar33 == uVar73) break;
          iVar78 = (uint)local_170;
        } while( true );
      }
      uVar33 = local_170;
      local_170 = local_170 & 0xffffffff00000000;
      if ((-1 < (long)uVar33) && (local_178 != (uint *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      uVar33 = local_160;
      local_160 = local_160 & 0xffffffff00000000;
      if ((-1 < (long)uVar33) && (local_168 != (int *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
      lVar37 = nn::os::GetSystemTick();
      local_168 = (int *)0x0;
      local_160 = 0x8000000000000000;
      lVar45 = nn::os::GetSystemTick();
      if ((int)(local_160._4_4_ & 0x7fffffff) < (int)uVar73) {
        FUN_030b4b10(&local_168,PTR_PTR_047d1a50,lVar34);
      }
      uVar72 = 0;
      if (param_2 != 0) {
        uVar72 = (int)((uVar73 - 1) + param_2) / param_2;
      }
      uVar33 = (ulong)uVar72;
      memcpy(local_168,puVar79,lVar34 << 2);
      piVar81 = local_168;
      local_160._0_4_ = uVar73;
      if (1 < uVar73) {
        iVar78 = 0;
        do {
          uVar20 = uVar73 - iVar78;
          do {
            uVar21 = FUN_031c0408(&local_210);
            uVar21 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
            uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
            uVar54 = 0;
            if (uVar20 != 0) {
              uVar54 = uVar21 / uVar20;
            }
          } while (-uVar20 < uVar54 * uVar20);
          iVar135 = piVar81[iVar78];
          iVar140 = (uVar21 - uVar54 * uVar20) + iVar78;
          piVar81[iVar78] = piVar81[iVar140];
          iVar78 = iVar78 + 1;
          piVar81[iVar140] = iVar135;
        } while (iVar78 != uVar73 - 1);
      }
      if ((int)(local_160._4_4_ & 0x7fffffff) < (int)uVar72) {
        FUN_0309cc54(&local_168,PTR_PTR_047d1a50,(long)(int)uVar72);
      }
      if ((uint)local_160 != uVar72) {
        local_160._0_4_ = uVar72;
      }
      lVar61 = nn::os::GetSystemTick();
      local_178 = (uint *)0x0;
      local_170 = -0x8000000000000000;
      if ((int)uVar73 < 1) {
        local_170._0_4_ = 0;
LAB_030b354c:
        if ((int)uVar73 < (int)(uint)local_170) {
          local_170 = CONCAT44(local_170._4_4_,uVar73);
        }
      }
      else {
        FUN_02e9b320(&local_178,PTR_PTR_047d1a50,lVar34);
        if ((int)uVar73 <= (int)(uint)local_170) goto LAB_030b354c;
        lVar34 = (long)(int)(uint)local_170;
        uVar20 = ~(uint)local_170;
        local_170 = CONCAT44(local_170._4_4_,uVar73);
        memset(local_178 + lVar34,0xff,(ulong)(uVar73 + uVar20) * 4 + 4);
      }
      lVar34 = nn::os::GetSystemTick();
      piVar81 = (int *)(-(ulong)(uVar72 >> 0x1f) & 0xfffffff800000000 | uVar33 << 3);
      puVar23 = (uint *)((long)piVar81 + 0x3fU & 0xffffffffffffffc0);
      iVar78 = uVar73 * 10;
      if ((int)uVar73 < 1) {
        iVar78 = 0;
      }
      lVar64 = 0;
      local_248 = (long *)0x0;
      iVar135 = 0;
      iVar140 = 0;
      do {
        lVar65 = *(long *)(lVar77 + 0x1000b8);
        if (lVar65 == 0) {
          lVar65 = FUN_00e5d3b4();
          *(long *)(lVar77 + 0x1000b8) = lVar65;
        }
        local_2b0 = *(long *)(*(long *)(lVar65 + 0x3d0) + 0x10);
        local_1e0 = piVar81;
        if (*(long *)(local_2b0 + 8) == 0) {
          if (local_2b0 == 0) goto LAB_030b3694;
          local_120 = puVar23;
          if (*(uint **)(local_2b0 + 0x28) < puVar23) {
LAB_030b364c:
            lVar65 = FUN_031cf3b4(local_2b0,&local_120);
            goto LAB_030b36b0;
          }
          lVar65 = *(long *)(local_2b0 + 0x38);
          if (*(ulong *)(local_2b0 + 0x40) < (ulong)((long)puVar23 + lVar65)) goto LAB_030b364c;
          *(long *)(local_2b0 + 0x38) = (long)puVar23 + lVar65;
        }
        else {
          local_2b0 = 0;
LAB_030b3694:
          lVar65 = (**(code **)PTR_DAT_047d1a08)(1,&local_1e0,0x40);
LAB_030b36b0:
        }
        if (0 < (int)uVar72) {
          if (uVar33 - 1 < 3) {
            uVar24 = 0;
          }
          else {
            uVar24 = 0;
            piVar42 = (int *)(lVar65 + 0x10);
            do {
              iVar29 = (int)uVar24;
              piVar42[-4] = local_168[uVar24];
              piVar42[-3] = iVar29;
              piVar42[-2] = local_168[uVar24 + 1];
              piVar42[-1] = iVar29 + 1;
              *piVar42 = local_168[uVar24 + 2];
              piVar42[1] = iVar29 + 2;
              lVar52 = uVar24 + 3;
              uVar24 = uVar24 + 4;
              piVar42[2] = local_168[lVar52];
              piVar42[3] = iVar29 + 3;
              piVar42 = piVar42 + 8;
            } while ((uVar33 & 0xfffffffc) != uVar24);
          }
          if ((uVar72 & 3) != 0) {
            puVar47 = (undefined4 *)(lVar65 + uVar24 * 8 + 4);
            uVar36 = uVar33 & 3;
            do {
              uVar36 = uVar36 - 1;
              puVar47[-1] = local_168[uVar24];
              *puVar47 = (int)uVar24;
              uVar24 = uVar24 + 1;
              puVar47 = puVar47 + 2;
            } while (uVar36 != 0);
          }
          if (1 < (int)uVar72) {
            FUN_030b4bc0(lVar65,0,uVar72 - 1);
          }
        }
        lVar52 = local_228;
        fVar83 = local_230[0];
        if (0 < (int)uVar73) {
          uVar24 = 0;
          do {
            lVar66 = nn::os::GetSystemTick();
            uVar20 = puVar79[uVar24];
            puVar38 = (uint *)(lVar65 + 4);
            uVar36 = uVar33;
            if (0 < (int)uVar72) {
              do {
                if (puVar38[-1] == uVar20) {
                  uVar21 = *puVar38;
                  goto LAB_030b3900;
                }
                puVar38 = puVar38 + 2;
                uVar36 = uVar36 - 1;
              } while (uVar36 != 0);
            }
            plVar76 = (long *)(lVar52 + (long)(int)uVar20 * 0x10);
            iVar29 = (int)plVar76[1];
            fVar88 = fVar83;
            if (iVar29 < 1) {
LAB_030b3868:
              if ((int)(uint)local_160 < 1) {
                uVar21 = 0xffffffff;
              }
              else {
                lVar68 = 0;
                uVar21 = 0xffffffff;
                do {
                  puVar43 = (undefined8 *)(param_1[0x10] + ((ulong)uVar20 & 0x3fffff) * 0x10);
                  uVar39 = *puVar43;
                  pfVar40 = (float *)(param_1[0x10] +
                                     ((ulong)(uint)local_168[lVar68] & 0x3fffff) * 0x10);
                  fVar91 = *pfVar40 - (float)uVar39;
                  fVar90 = pfVar40[1] - (float)((ulong)uVar39 >> 0x20);
                  fVar93 = pfVar40[2] - (float)puVar43[1];
                  fVar91 = SQRT(fVar91 * fVar91 + fVar90 * fVar90 + fVar93 * fVar93);
                  FUN_030b09b8(local_230,(ulong)(uint)local_168[lVar68],(ulong)uVar20);
                  uVar54 = (uint)lVar68;
                  if (fVar88 <= fVar91) {
                    fVar91 = fVar88;
                    uVar54 = uVar21;
                  }
                  uVar21 = uVar54;
                  lVar68 = lVar68 + 1;
                  fVar88 = fVar91;
                } while (lVar68 < (int)(uint)local_160);
              }
            }
            else {
              uVar36 = 0;
              uVar57 = 0;
              uVar21 = 0xffffffff;
              do {
                iVar144 = (int)uVar57;
                if ((int)uVar72 <= iVar144) break;
                lVar68 = *plVar76;
                iVar148 = *(int *)(lVar68 + (-(uVar36 >> 0x1f) & 0xfffffff800000000 | uVar36 << 3));
                iVar7 = *(int *)(lVar65 + (-(uVar57 >> 0x1f) & 0xfffffff800000000 | uVar57 << 3));
                iVar56 = (int)uVar36;
                if (iVar148 == iVar7) {
                  fVar91 = *(float *)(lVar68 + (long)iVar56 * 8 + 4);
                  if (fVar91 < fVar88) {
                    uVar21 = *(uint *)(lVar65 + (long)iVar144 * 8 + 4);
                    fVar88 = fVar91;
                  }
                  uVar36 = (ulong)(iVar56 + 1);
LAB_030b3854:
                  uVar57 = (ulong)(iVar144 + 1);
                }
                else {
                  if (iVar7 <= iVar148) goto LAB_030b3854;
                  uVar36 = (ulong)(iVar56 + 1);
                }
              } while ((int)uVar36 < iVar29);
              if (uVar21 == 0xffffffff) goto LAB_030b3868;
            }
LAB_030b3900:
            local_178[uVar24] = uVar21;
            lVar68 = nn::os::GetSystemTick();
            uVar24 = uVar24 + 1;
            local_248 = (long *)((lVar68 - lVar66) + (long)local_248);
          } while (uVar24 != uVar71);
          iVar135 = uVar73 + iVar135;
        }
        lVar52 = nn::os::GetSystemTick();
        uVar20 = (uint)local_160;
        uVar24 = (ulong)(uint)local_160;
        local_120 = (uint *)0x0;
        local_118 = (uint *)0x8000000000000000;
        local_1e0 = (int *)0x0;
        local_1d8 = (void *)0x8000000000000000;
        if ((int)(uint)local_160 < 1) {
          local_118._0_4_ = 0;
LAB_030b39b0:
          if ((int)uVar20 < (int)(uint)local_118) {
            local_118 = (uint *)CONCAT44(local_118._4_4_,uVar20);
          }
        }
        else {
          FUN_02e9b320(&local_120,PTR_PTR_047d1a50,uVar24);
          if ((int)uVar20 <= (int)(uint)local_118) goto LAB_030b39b0;
          lVar66 = (long)(int)(uint)local_118;
          uVar21 = ~(uint)local_118;
          local_118 = (uint *)CONCAT44(local_118._4_4_,uVar20);
          memset(local_120 + lVar66,0,(ulong)(uVar20 + uVar21) * 4 + 4);
        }
        if ((int)(local_1d8._4_4_ & 0x7fffffff) < (int)uVar20) {
          FUN_02e8df28(&local_1e0,PTR_PTR_047d1a50,(long)(int)uVar20);
        }
        lVar66 = (long)(int)(uint)local_1d8;
        if ((int)(uint)local_1d8 < (int)uVar20) {
          uVar21 = ~(uint)local_1d8;
          local_1d8 = (void *)CONCAT44(local_1d8._4_4_,uVar20);
          memset(local_1e0 + lVar66 * 4,0,(ulong)(uVar20 + uVar21) * 0x10 + 0x10);
        }
        else if ((int)uVar20 < (int)(uint)local_1d8) {
          local_1d8 = (void *)CONCAT44(local_1d8._4_4_,uVar20);
        }
        uVar21 = (uint)local_160;
        if (0 < (int)uVar73) {
          uVar36 = 0;
          uVar57 = uVar36;
          if (uVar73 != 1) {
            do {
              lVar66 = (long)(int)local_178[uVar57];
              pfVar40 = (float *)(param_1[0x10] + ((ulong)(uint)puVar79[uVar57] & 0x3fffff) * 0x10);
              fVar83 = *pfVar40;
              fVar88 = pfVar40[1];
              fVar91 = pfVar40[3];
              uVar96 = *(undefined8 *)(local_1e0 + lVar66 * 4 + 2);
              uVar39 = *(undefined8 *)(local_1e0 + lVar66 * 4);
              pfVar11 = (float *)(local_1e0 + lVar66 * 4);
              pfVar11[2] = pfVar40[2] + (float)uVar96;
              pfVar11[3] = fVar91 + (float)((ulong)uVar96 >> 0x20);
              *pfVar11 = fVar83 + (float)uVar39;
              pfVar11[1] = fVar88 + (float)((ulong)uVar39 >> 0x20);
              local_120[lVar66] = local_120[lVar66] + 1;
              pfVar40 = (float *)(param_1[0x10] +
                                 ((ulong)(uint)(puVar79 + uVar57)[1] & 0x3fffff) * 0x10);
              fVar83 = *pfVar40;
              fVar88 = pfVar40[1];
              fVar91 = pfVar40[3];
              uVar36 = uVar57 + 2;
              lVar66 = (long)(int)local_178[uVar57 + 1];
              uVar96 = *(undefined8 *)(local_1e0 + lVar66 * 4 + 2);
              uVar39 = *(undefined8 *)(local_1e0 + lVar66 * 4);
              pfVar11 = (float *)(local_1e0 + lVar66 * 4);
              pfVar11[2] = pfVar40[2] + (float)uVar96;
              pfVar11[3] = fVar91 + (float)((ulong)uVar96 >> 0x20);
              *pfVar11 = fVar83 + (float)uVar39;
              pfVar11[1] = fVar88 + (float)((ulong)uVar39 >> 0x20);
              local_120[lVar66] = local_120[lVar66] + 1;
              uVar57 = uVar36;
            } while ((uVar71 & 0xfffffffe) != uVar36);
          }
          if ((uVar73 & 1) != 0) {
            lVar66 = (long)(int)local_178[uVar36];
            pfVar40 = (float *)(param_1[0x10] + ((ulong)(uint)puVar79[uVar36] & 0x3fffff) * 0x10);
            fVar83 = *pfVar40;
            fVar88 = pfVar40[1];
            fVar91 = pfVar40[3];
            uVar96 = *(undefined8 *)(local_1e0 + lVar66 * 4 + 2);
            uVar39 = *(undefined8 *)(local_1e0 + lVar66 * 4);
            pfVar11 = (float *)(local_1e0 + lVar66 * 4);
            pfVar11[2] = pfVar40[2] + (float)uVar96;
            pfVar11[3] = fVar91 + (float)((ulong)uVar96 >> 0x20);
            *pfVar11 = fVar83 + (float)uVar39;
            pfVar11[1] = fVar88 + (float)((ulong)uVar39 >> 0x20);
            local_120[lVar66] = local_120[lVar66] + 1;
          }
        }
        if (0 < (int)uVar20) {
          uVar36 = 0;
          if (uVar20 != 1) {
            uVar57 = uVar36;
            do {
              uVar95 = *(undefined8 *)(local_1e0 + uVar57 * 4 + 2);
              uVar96 = *(undefined8 *)(local_1e0 + uVar57 * 4);
              uVar39 = NEON_scvtf(CONCAT44(local_120[uVar57],local_120[uVar57]),4);
              fVar83 = fVar122 / (float)uVar39;
              fVar88 = fVar123 / (float)((ulong)uVar39 >> 0x20);
              pfVar40 = (float *)(local_1e0 + uVar57 * 4);
              pfVar40[2] = (float)uVar95 * fVar83;
              pfVar40[3] = (float)((ulong)uVar95 >> 0x20) * fVar88;
              *pfVar40 = (float)uVar96 * fVar83;
              pfVar40[1] = (float)((ulong)uVar96 >> 0x20) * fVar88;
              uVar36 = uVar57 + 2;
              uVar95 = *(undefined8 *)(local_1e0 + uVar57 * 4 + 6);
              uVar96 = *(undefined8 *)(local_1e0 + uVar57 * 4 + 4);
              uVar39 = NEON_scvtf(CONCAT44(local_120[uVar57 + 1],local_120[uVar57 + 1]),4);
              fVar83 = fVar122 / (float)uVar39;
              fVar88 = fVar123 / (float)((ulong)uVar39 >> 0x20);
              local_1e0[uVar57 * 4 + 6] = (int)((float)uVar95 * fVar83);
              local_1e0[uVar57 * 4 + 7] = (int)((float)((ulong)uVar95 >> 0x20) * fVar88);
              local_1e0[uVar57 * 4 + 4] = (int)((float)uVar96 * fVar83);
              local_1e0[uVar57 * 4 + 5] = (int)((float)((ulong)uVar96 >> 0x20) * fVar88);
              uVar57 = uVar36;
            } while ((uVar24 & 0xfffffffe) != uVar36);
          }
          if ((uVar20 & 1) != 0) {
            uVar95 = *(undefined8 *)(local_1e0 + uVar36 * 4 + 2);
            uVar96 = *(undefined8 *)(local_1e0 + uVar36 * 4);
            uVar39 = NEON_scvtf(CONCAT44(local_120[uVar36],local_120[uVar36]),4);
            fVar83 = fVar122 / (float)uVar39;
            fVar88 = fVar123 / (float)((ulong)uVar39 >> 0x20);
            pfVar40 = (float *)(local_1e0 + uVar36 * 4);
            pfVar40[2] = (float)uVar95 * fVar83;
            pfVar40[3] = (float)((ulong)uVar95 >> 0x20) * fVar88;
            *pfVar40 = (float)uVar96 * fVar83;
            pfVar40[1] = (float)((ulong)uVar96 >> 0x20) * fVar88;
          }
        }
        local_158 = (long *)0x0;
        local_150 = (ulong *)0x8000000000000000;
        if ((int)(uint)local_160 < 1) {
          local_150._0_4_ = 0;
LAB_030b3c40:
          if ((int)uVar21 < (int)(uint)local_150) {
            local_150 = (ulong *)CONCAT44(local_150._4_4_,uVar21);
          }
        }
        else {
          FUN_00cb59d4(&local_158,PTR_PTR_047d1a50 + 0x20,(uint)local_160);
          uVar54 = uVar21 - (uint)local_150;
          if (uVar54 == 0 || (int)uVar21 < (int)(uint)local_150) goto LAB_030b3c40;
          uVar51 = ~(uint)local_150;
          puVar47 = (undefined4 *)((long)local_158 + (long)(int)(uint)local_150 * 4);
          uVar63 = uVar54 & 7;
          local_150 = (ulong *)CONCAT44(local_150._4_4_,uVar21);
          if (6 < uVar21 + uVar51) {
            iVar29 = -(uVar54 & 0xfffffff8);
            puVar48 = puVar47;
            do {
              puVar47 = puVar48 + 8;
              *puVar48 = 0x7f7fffee;
              puVar48[1] = 0x7f7fffee;
              iVar29 = iVar29 + 8;
              puVar48[2] = 0x7f7fffee;
              puVar48[3] = 0x7f7fffee;
              puVar48[4] = 0x7f7fffee;
              puVar48[5] = 0x7f7fffee;
              puVar48[6] = 0x7f7fffee;
              puVar48[7] = 0x7f7fffee;
              puVar48 = puVar47;
            } while (iVar29 != 0);
          }
          for (; uVar63 != 0; uVar63 = uVar63 - 1) {
            *puVar47 = 0x7f7fffee;
            puVar47 = puVar47 + 1;
          }
        }
        piVar42 = local_168;
        lVar66 = (long)(int)(uint)local_160;
        local_a0 = (int *)0x0;
        uStack_98 = 0x8000000000000000;
        if (0 < (int)(uint)local_160) {
          FUN_030b4b10(&local_a0,PTR_PTR_047d1a50 + 0x20,lVar66);
        }
        memcpy(local_a0,piVar42,lVar66 << 2);
        uVar57 = uStack_98;
        uVar36 = uStack_98 >> 0x20;
        if (0 < (int)uVar73) {
          lVar66 = 0;
          do {
            lVar68 = (long)*(int *)((long)local_178 + lVar66);
            if (*(int *)((long)local_178 + lVar66) != -1) {
              pfVar40 = (float *)(local_1e0 + lVar68 * 4);
              puVar43 = (undefined8 *)
                        (param_1[0x10] +
                        ((ulong)*(uint *)((long)puVar79 + lVar66) & 0x3fffff) * 0x10);
              uVar39 = *puVar43;
              fVar83 = *pfVar40 - (float)uVar39;
              fVar88 = pfVar40[1] - (float)((ulong)uVar39 >> 0x20);
              fVar91 = pfVar40[2] - (float)puVar43[1];
              fVar83 = SQRT(fVar83 * fVar83 + fVar88 * fVar88 + fVar91 * fVar91);
              if (fVar83 < *(float *)((long)local_158 + lVar68 * 4)) {
                local_168[lVar68] = *(uint *)((long)puVar79 + lVar66);
                *(float *)((long)local_158 + lVar68 * 4) = fVar83;
              }
            }
            lVar66 = lVar66 + 4;
          } while (uVar71 << 2 != lVar66);
        }
        if (0 < (int)uVar20) {
          piVar42 = local_168;
          piVar49 = local_a0;
          do {
            if (*piVar42 != *piVar49) {
              bVar75 = false;
              goto LAB_030b3d58;
            }
            uVar24 = uVar24 - 1;
            piVar42 = piVar42 + 1;
            piVar49 = piVar49 + 1;
          } while (uVar24 != 0);
        }
        bVar75 = true;
LAB_030b3d58:
        uStack_98 = uVar36 << 0x20;
        if ((-1 < (long)uVar57) && (local_a0 != (int *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_a0,uVar36 << 2);
        }
        lVar66 = (long)local_150;
        uVar24 = (ulong)local_150._4_4_;
        local_150 = (ulong *)((ulong)local_150._4_4_ << 0x20);
        if ((-1 < lVar66) && (local_158 != (long *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_158,uVar24 << 2);
        }
        lVar66 = (long)local_1d8;
        uVar24 = (ulong)local_1d8._4_4_;
        local_1d8 = (void *)((ulong)local_1d8._4_4_ << 0x20);
        if ((-1 < lVar66) && (local_1e0 != (int *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1e0,uVar24 << 4);
        }
        lVar66 = (long)local_118;
        uVar24 = (ulong)local_118._4_4_;
        local_118 = (uint *)((ulong)local_118._4_4_ << 0x20);
        if ((-1 < lVar66) && (local_120 != (uint *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_120,uVar24 << 2);
        }
        lVar66 = nn::os::GetSystemTick();
        iVar140 = iVar140 + 1;
        if (local_2b0 == 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar65,piVar81);
        }
        else if ((*(uint **)(local_2b0 + 0x28) < puVar23) ||
                (*(long *)(local_2b0 + 0x38) != (long)puVar23 + lVar65)) {
          if (lVar65 != 0) {
            if (*(uint **)(local_2b0 + 0x28) < puVar23 + 0x10) {
              *(int *)(*(long *)(local_2b0 + 0x30) + 0x20) =
                   *(int *)(*(long *)(local_2b0 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(local_2b0 + 0x10) + 0x18))
                        (*(long **)(local_2b0 + 0x10),lVar65 - *(int *)(lVar65 + -4),puVar23 + 0x11)
              ;
            }
            else {
              if (*(long *)(local_2b0 + 0x38) == (long)puVar23 + lVar65) {
                *(long *)(local_2b0 + 0x38) = lVar65;
                goto LAB_030b3ee0;
              }
              FUN_031cf778(local_2b0,lVar65,puVar23);
            }
          }
        }
        else {
          *(long *)(local_2b0 + 0x38) = lVar65;
          if (*(long *)(local_2b0 + 0x48) == lVar65) {
LAB_030b3ee0:
            FUN_031cf578();
          }
        }
        lVar64 = (lVar66 - lVar52) + lVar64;
        if (bVar75) goto LAB_030b3f10;
      } while (iVar140 != 10);
      iVar135 = iVar78;
LAB_030b3f10:
      lVar52 = nn::os::GetSystemTick();
      uVar72 = (uint)local_160;
      piVar81 = local_168;
      iVar78 = (int)param_4[1];
      lVar65 = (long)(int)(uint)local_160 + (long)iVar78;
      iVar29 = (int)lVar65;
      if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < iVar29) {
        FUN_0309cc54(param_4,PTR_PTR_047d1a50,lVar65);
      }
      lVar65 = local_170;
      if (0 < (int)uVar72) {
        piVar42 = (int *)(*param_4 + (long)iVar78 * 4);
        uVar20 = uVar72 & 7;
        if (6 < uVar72 - 1) {
          iVar144 = -(uVar72 & 0xfffffff8);
          piVar49 = piVar42;
          do {
            *piVar49 = *piVar81;
            piVar49[1] = piVar81[1];
            piVar49[2] = piVar81[2];
            piVar49[3] = piVar81[3];
            piVar49[4] = piVar81[4];
            piVar49[5] = piVar81[5];
            piVar49[6] = piVar81[6];
            piVar35 = piVar81 + 7;
            piVar42 = piVar49 + 8;
            piVar81 = piVar81 + 8;
            iVar144 = iVar144 + 8;
            piVar49[7] = *piVar35;
            piVar49 = piVar42;
          } while (iVar144 != 0);
        }
        for (; uVar20 != 0; uVar20 = uVar20 - 1) {
          *piVar42 = *piVar81;
          piVar42 = piVar42 + 1;
          piVar81 = piVar81 + 1;
        }
      }
      *(int *)(param_4 + 1) = iVar29;
      if (0 < (int)uVar73) {
        uVar33 = uVar71 & 3;
        if (uVar71 - 1 < 3) {
          uVar36 = 0;
        }
        else {
          piVar81 = (int *)(lVar30 + (long)iVar62 * 4 + 8);
          uVar24 = 0;
          do {
            *(uint *)(*param_3 + (long)piVar81[-2] * 4) = local_178[uVar24] + iVar78;
            *(uint *)(*param_3 + (long)piVar81[-1] * 4) = local_178[uVar24 + 1] + iVar78;
            *(uint *)(*param_3 + (long)*piVar81 * 4) = local_178[uVar24 + 2] + iVar78;
            uVar36 = uVar24 + 4;
            piVar42 = piVar81 + 1;
            piVar81 = piVar81 + 4;
            *(uint *)(*param_3 + (long)*piVar42 * 4) = local_178[uVar24 + 3] + iVar78;
            uVar24 = uVar36;
          } while ((uVar71 & 0xfffffffc) != uVar36);
        }
        if ((uVar73 & 3) != 0) {
          lVar30 = uVar36 << 2;
          do {
            uVar33 = uVar33 - 1;
            piVar81 = (int *)((long)local_178 + lVar30);
            piVar42 = (int *)((long)puVar79 + lVar30);
            lVar30 = lVar30 + 4;
            *(int *)(*param_3 + (long)*piVar42 * 4) = *piVar81 + iVar78;
          } while (uVar33 != 0);
        }
      }
      uVar33 = (ulong)local_170._4_4_;
      local_170 = (ulong)local_170._4_4_ << 0x20;
      if ((-1 < lVar65) && (local_178 != (uint *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_178,uVar33 << 2);
      }
      uVar72 = local_160._4_4_;
      uVar33 = (ulong)local_160._4_4_;
      local_160 = (ulong)local_160._4_4_ << 0x20;
      if ((-1 < (int)uVar72) && (local_168 != (int *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_168,uVar33 << 2);
      }
      lVar30 = local_228;
      if ((int)local_220 != 0) {
        lVar65 = (long)(int)local_220 << 4;
        do {
          lVar66 = lVar30 + lVar65;
          *(undefined4 *)(lVar66 + -8) = 0;
          if ((-1 < (int)*(uint *)(lVar66 + -4)) && (*(long *)(lVar66 + -0x10) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,*(long *)(lVar66 + -0x10),(ulong)*(uint *)(lVar66 + -4) << 3
                      );
          }
          lVar65 = lVar65 + -0x10;
          *(undefined8 *)(lVar66 + -0x10) = 0;
          *(undefined4 *)(lVar66 + -4) = 0x80000000;
        } while (lVar65 != 0);
      }
      lVar30 = local_220;
      uVar33 = (ulong)local_220._4_4_;
      local_220 = (ulong)local_220._4_4_ << 0x20;
      if ((-1 < lVar30) && (local_228 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_228,uVar33 << 4);
      }
      lVar30 = *(long *)(lVar77 + 0x1000b8);
      if (lVar30 == 0) {
        lVar30 = FUN_00e5d3b4();
        *(long *)(lVar77 + 0x1000b8) = lVar30;
      }
      plVar76 = *(long **)(lVar30 + 0x3e0);
      iVar62 = uVar73 + iVar62;
      if (plVar76 != (long *)0x0) {
        lVar30 = *plVar76;
        if (*(code **)(lVar30 + 0x18) != (code *)0x0) {
          (**(code **)(lVar30 + 0x18))("nearestNeighbors",0x10,*(undefined8 *)(lVar30 + 0x28));
        }
        puVar80 = (ulong *)(plVar76 + 2);
        puVar43 = (undefined8 *)*puVar80;
        uVar33 = (long)puVar43 + 0xfU & 0xfffffffffffffff8;
        if ((uVar33 <= (ulong)plVar76[3]) && (*puVar80 = uVar33, puVar43 != (undefined8 *)0x0)) {
          *puVar43 = "YtnearestNeighbors";
        }
        if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar76[6] != 0)) {
          puVar43 = (undefined8 *)plVar76[2];
          uVar33 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
          if ((uVar33 <= (ulong)plVar76[3]) && (*puVar80 = uVar33, puVar43 != (undefined8 *)0x0)) {
            *puVar43 = &DAT_03c4e575;
            puVar43[1] = *(undefined8 *)(plVar76[6] + 8);
          }
        }
        lVar30 = *plVar76;
        if (((*(byte *)(lVar30 + 0x38) & 1) == 0) || (plVar76[6] == 0)) {
LAB_030b429c:
          puVar50 = (undefined8 *)plVar76[2];
          puVar53 = (undefined8 *)plVar76[3];
        }
        else {
          puVar43 = (undefined8 *)plVar76[2];
          puVar53 = (undefined8 *)plVar76[3];
          puVar50 = (undefined8 *)((long)puVar43 + 0x17U & 0xfffffffffffffff8);
          if (puVar53 < puVar50) goto LAB_030b429c;
          *puVar80 = (ulong)puVar50;
          if (puVar43 != (undefined8 *)0x0) {
            *puVar43 = &DAT_03c4e575;
            puVar43[1] = *(undefined8 *)(plVar76[6] + 8);
            goto LAB_030b429c;
          }
        }
        puVar43 = (undefined8 *)((long)puVar50 + 0x1fU & 0xfffffffffffffff8);
        if ((puVar43 <= puVar53) && (*puVar80 = (ulong)puVar43, puVar50 != (undefined8 *)0x0)) {
          *(undefined4 *)(puVar50 + 2) = 1;
          *puVar50 = &DAT_03c65669;
          puVar50[1] = lVar37 - lVar25;
        }
        if (*(code **)(lVar30 + 0x20) != (code *)0x0) {
          (**(code **)(lVar30 + 0x20))(*(undefined8 *)(lVar30 + 0x28));
        }
        lVar30 = *plVar76;
        if (*(code **)(lVar30 + 0x18) != (code *)0x0) {
          (**(code **)(lVar30 + 0x18))("initSeeding",0xb,*(undefined8 *)(lVar30 + 0x28));
        }
        puVar43 = (undefined8 *)plVar76[2];
        uVar33 = (long)puVar43 + 0xfU & 0xfffffffffffffff8;
        if ((uVar33 <= (ulong)plVar76[3]) && (*puVar80 = uVar33, puVar43 != (undefined8 *)0x0)) {
          *puVar43 = "YtinitSeeding";
        }
        if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar76[6] != 0)) {
          puVar43 = (undefined8 *)plVar76[2];
          uVar33 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
          if ((uVar33 <= (ulong)plVar76[3]) && (*puVar80 = uVar33, puVar43 != (undefined8 *)0x0)) {
            *puVar43 = &DAT_03c4e575;
            puVar43[1] = *(undefined8 *)(plVar76[6] + 8);
          }
        }
        lVar30 = *plVar76;
        if (((*(byte *)(lVar30 + 0x38) & 1) == 0) || (plVar76[6] == 0)) {
LAB_030b43b4:
          puVar50 = (undefined8 *)plVar76[2];
          puVar53 = (undefined8 *)plVar76[3];
        }
        else {
          puVar43 = (undefined8 *)plVar76[2];
          puVar53 = (undefined8 *)plVar76[3];
          puVar50 = (undefined8 *)((long)puVar43 + 0x17U & 0xfffffffffffffff8);
          if (puVar53 < puVar50) goto LAB_030b43b4;
          *puVar80 = (ulong)puVar50;
          if (puVar43 != (undefined8 *)0x0) {
            *puVar43 = &DAT_03c4e575;
            puVar43[1] = *(undefined8 *)(plVar76[6] + 8);
            goto LAB_030b43b4;
          }
        }
        puVar43 = (undefined8 *)((long)puVar50 + 0x1fU & 0xfffffffffffffff8);
        if ((puVar43 <= puVar53) && (*puVar80 = (ulong)puVar43, puVar50 != (undefined8 *)0x0)) {
          *(undefined4 *)(puVar50 + 2) = 1;
          *puVar50 = &DAT_03c65669;
          puVar50[1] = lVar61 - lVar45;
        }
        if (*(code **)(lVar30 + 0x20) != (code *)0x0) {
          (**(code **)(lVar30 + 0x20))(*(undefined8 *)(lVar30 + 0x28));
        }
        lVar30 = *plVar76;
        if (*(code **)(lVar30 + 0x18) != (code *)0x0) {
          (**(code **)(lVar30 + 0x18))("kMeans",6,*(undefined8 *)(lVar30 + 0x28));
        }
        puVar43 = (undefined8 *)plVar76[2];
        uVar33 = (long)puVar43 + 0xfU & 0xfffffffffffffff8;
        if ((uVar33 <= (ulong)plVar76[3]) && (*puVar80 = uVar33, puVar43 != (undefined8 *)0x0)) {
          *puVar43 = "YtkMeans";
        }
        if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar76[6] != 0)) {
          puVar43 = (undefined8 *)plVar76[2];
          uVar33 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
          if ((uVar33 <= (ulong)plVar76[3]) && (*puVar80 = uVar33, puVar43 != (undefined8 *)0x0)) {
            *puVar43 = &DAT_03c4e575;
            puVar43[1] = *(undefined8 *)(plVar76[6] + 8);
          }
        }
        if (iVar135 != 0) {
          lVar30 = *plVar76;
          if (*(code **)(lVar30 + 0x18) != (code *)0x0) {
            (**(code **)(lVar30 + 0x18))("closestRep",10,*(undefined8 *)(lVar30 + 0x28));
          }
          puVar43 = (undefined8 *)plVar76[2];
          uVar33 = (long)puVar43 + 0xfU & 0xfffffffffffffff8;
          if ((uVar33 <= (ulong)plVar76[3]) && (*puVar80 = uVar33, puVar43 != (undefined8 *)0x0)) {
            *puVar43 = "YtclosestRep";
          }
          if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar76[6] != 0)) {
            puVar43 = (undefined8 *)plVar76[2];
            uVar33 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
            if ((uVar33 <= (ulong)plVar76[3]) && (*puVar80 = uVar33, puVar43 != (undefined8 *)0x0))
            {
              *puVar43 = &DAT_03c4e575;
              puVar43[1] = *(undefined8 *)(plVar76[6] + 8);
            }
          }
          lVar30 = *plVar76;
          if (((*(byte *)(lVar30 + 0x38) & 1) == 0) || (plVar76[6] == 0)) {
LAB_030b455c:
            puVar50 = (undefined8 *)plVar76[2];
            puVar53 = (undefined8 *)plVar76[3];
          }
          else {
            puVar43 = (undefined8 *)plVar76[2];
            puVar53 = (undefined8 *)plVar76[3];
            puVar50 = (undefined8 *)((long)puVar43 + 0x17U & 0xfffffffffffffff8);
            if (puVar53 < puVar50) goto LAB_030b455c;
            *puVar80 = (ulong)puVar50;
            if (puVar43 != (undefined8 *)0x0) {
              *puVar43 = &DAT_03c4e575;
              puVar43[1] = *(undefined8 *)(plVar76[6] + 8);
              goto LAB_030b455c;
            }
          }
          puVar43 = (undefined8 *)((long)puVar50 + 0x1fU & 0xfffffffffffffff8);
          if ((puVar43 <= puVar53) && (*puVar80 = (ulong)puVar43, puVar50 != (undefined8 *)0x0)) {
            *(int *)(puVar50 + 2) = iVar135;
            *puVar50 = &DAT_03c65669;
            puVar50[1] = local_248;
          }
          if (*(code **)(lVar30 + 0x20) != (code *)0x0) {
            (**(code **)(lVar30 + 0x20))(*(undefined8 *)(lVar30 + 0x28));
          }
        }
        lVar30 = *plVar76;
        if (*(code **)(lVar30 + 0x18) != (code *)0x0) {
          (**(code **)(lVar30 + 0x18))("updateRep",9,*(undefined8 *)(lVar30 + 0x28));
        }
        puVar43 = (undefined8 *)plVar76[2];
        uVar33 = (long)puVar43 + 0xfU & 0xfffffffffffffff8;
        if ((uVar33 <= (ulong)plVar76[3]) && (*puVar80 = uVar33, puVar43 != (undefined8 *)0x0)) {
          *puVar43 = "YtupdateRep";
        }
        if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar76[6] != 0)) {
          puVar43 = (undefined8 *)plVar76[2];
          uVar33 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
          if ((uVar33 <= (ulong)plVar76[3]) && (*puVar80 = uVar33, puVar43 != (undefined8 *)0x0)) {
            *puVar43 = &DAT_03c4e575;
            puVar43[1] = *(undefined8 *)(plVar76[6] + 8);
          }
        }
        lVar30 = *plVar76;
        if (((*(byte *)(lVar30 + 0x38) & 1) == 0) || (plVar76[6] == 0)) {
LAB_030b4670:
          puVar50 = (undefined8 *)plVar76[2];
          puVar53 = (undefined8 *)plVar76[3];
        }
        else {
          puVar43 = (undefined8 *)plVar76[2];
          puVar53 = (undefined8 *)plVar76[3];
          puVar50 = (undefined8 *)((long)puVar43 + 0x17U & 0xfffffffffffffff8);
          if (puVar53 < puVar50) goto LAB_030b4670;
          *puVar80 = (ulong)puVar50;
          if (puVar43 != (undefined8 *)0x0) {
            *puVar43 = &DAT_03c4e575;
            puVar43[1] = *(undefined8 *)(plVar76[6] + 8);
            goto LAB_030b4670;
          }
        }
        puVar43 = (undefined8 *)((long)puVar50 + 0x1fU & 0xfffffffffffffff8);
        if ((puVar43 <= puVar53) && (*puVar80 = (ulong)puVar43, puVar50 != (undefined8 *)0x0)) {
          *(int *)(puVar50 + 2) = iVar140;
          *puVar50 = &DAT_03c65669;
          puVar50[1] = lVar64;
        }
        if (*(code **)(lVar30 + 0x20) != (code *)0x0) {
          (**(code **)(lVar30 + 0x20))(*(undefined8 *)(lVar30 + 0x28));
        }
        lVar30 = *plVar76;
        if (((*(byte *)(lVar30 + 0x38) & 1) == 0) || (plVar76[6] == 0)) {
LAB_030b46f8:
          puVar50 = (undefined8 *)plVar76[2];
          puVar53 = (undefined8 *)plVar76[3];
        }
        else {
          puVar43 = (undefined8 *)plVar76[2];
          puVar53 = (undefined8 *)plVar76[3];
          puVar50 = (undefined8 *)((long)puVar43 + 0x17U & 0xfffffffffffffff8);
          if (puVar53 < puVar50) goto LAB_030b46f8;
          *puVar80 = (ulong)puVar50;
          if (puVar43 != (undefined8 *)0x0) {
            *puVar43 = &DAT_03c4e575;
            puVar43[1] = *(undefined8 *)(plVar76[6] + 8);
            goto LAB_030b46f8;
          }
        }
        puVar43 = (undefined8 *)((long)puVar50 + 0x1fU & 0xfffffffffffffff8);
        if ((puVar43 <= puVar53) && (*puVar80 = (ulong)puVar43, puVar50 != (undefined8 *)0x0)) {
          *(undefined4 *)(puVar50 + 2) = 1;
          puVar50[1] = lVar52 - lVar34;
          *puVar50 = &DAT_03c65669;
        }
        if (*(code **)(lVar30 + 0x20) != (code *)0x0) {
          (**(code **)(lVar30 + 0x20))(*(undefined8 *)(lVar30 + 0x28));
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar32);
  }
  lVar77 = local_200;
  uVar31 = (ulong)local_200._4_4_;
  local_200 = (ulong)local_200._4_4_ << 0x20;
  if ((-1 < lVar77) && (local_208 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_208,uVar31 << 2);
  }
  uVar31 = local_1f0;
  uVar32 = (ulong)local_1f0._4_4_;
  local_1f0 = (ulong)local_1f0._4_4_ << 0x20;
  if ((-1 < (long)uVar31) && (local_1f8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1f8,uVar32 << 2);
  }
  if (local_1e8 != (long *)0x0) {
    lVar77 = *local_1e8;
    if (((*(byte *)(lVar77 + 0x38) & 1) != 0) && (local_1e8[6] != 0)) {
      puVar60 = (undefined8 *)local_1e8[2];
      uVar31 = (long)puVar60 + 0x17U & 0xfffffffffffffff8;
      if ((uVar31 <= (ulong)local_1e8[3]) && (local_1e8[2] = uVar31, puVar60 != (undefined8 *)0x0))
      {
        *puVar60 = &DAT_03c4e575;
        puVar60[1] = *(undefined8 *)(local_1e8[6] + 8);
      }
    }
    puVar60 = (undefined8 *)local_1e8[2];
    uVar31 = (long)puVar60 + 0x17U & 0xfffffffffffffff8;
    if ((uVar31 <= (ulong)local_1e8[3]) && (local_1e8[2] = uVar31, puVar60 != (undefined8 *)0x0)) {
      *puVar60 = &DAT_03c3697b;
      uVar22 = nn::os::GetSystemTick();
      puVar60[1] = uVar22;
    }
    if (*(code **)(lVar77 + 0x20) != (code *)0x0) {
      (**(code **)(lVar77 + 0x20))(*(undefined8 *)(lVar77 + 0x28));
      if (*(code **)(lVar77 + 0x20) != (code *)0x0) {
        (**(code **)(lVar77 + 0x20))(*(undefined8 *)(lVar77 + 0x28));
      }
    }
  }
  return;
  while( true ) {
    uVar57 = (long)((ulong)uVar51 << 0x20) >> 0x21;
    *(undefined8 *)(puVar23 + uVar58 * 2) = *(undefined8 *)(puVar23 + uVar57 * 2);
    uVar58 = (ulong)(uint)((int)uVar51 >> 1);
    if ((int)uVar55 < 3) break;
LAB_030b31c0:
    uVar55 = (uint)uVar58;
    uVar51 = uVar55;
    if (-1 < (int)(uVar55 - 1)) {
      uVar51 = uVar55 - 1;
    }
    if ((int)puVar23[(long)((int)uVar51 >> 1) * 2 + 1] <= (int)fVar88) {
      uVar57 = (ulong)(int)uVar55;
      break;
    }
  }
LAB_030b3200:
  puVar23[uVar57 * 2] = uVar54;
  (puVar23 + uVar57 * 2)[1] = (uint)fVar88;
LAB_030b3208:
LAB_030b320c:
  puVar44 = puVar44 + 1;
  if (puVar38 + lVar64 + lVar61 <= puVar44) goto LAB_030b3220;
  goto LAB_030b1fa0;
}


