/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e27ac; name: FUN_030e27ac
 */


void FUN_030e27ac(long param_1,uint *param_2,uint *param_3,uint *param_4,long param_5,int *param_6,
                 int *param_7,undefined8 param_8,uint *param_9,uint *param_10,ulong *param_11)

{
  undefined4 *puVar1;
  void *__s;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  byte bVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  long lVar16;
  undefined *puVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  void *pvVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  short sVar24;
  uint uVar25;
  long lVar26;
  uint *puVar27;
  ulong uVar28;
  ushort *puVar29;
  undefined1 *puVar30;
  uint *puVar31;
  uint *puVar32;
  long lVar33;
  ushort *puVar34;
  uint *puVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined1 *puVar38;
  undefined4 *puVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  int iVar43;
  int iVar44;
  short *psVar45;
  uint *puVar46;
  int *piVar47;
  ulong *puVar48;
  uint uVar49;
  undefined4 *puVar50;
  uint *puVar51;
  ulong uVar52;
  short *psVar53;
  short sVar54;
  int *piVar55;
  long local_148;
  uint local_140;
  ulong local_118;
  uint *local_d8;
  undefined8 local_d0;
  uint local_c8 [2];
  uint local_c0 [2];
  uint local_b8 [2];
  uint local_b0 [2];
  uint local_a8 [2];
  uint local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  uint local_78 [2];
  uint local_70 [4];
  
  iVar43 = (int)((long)param_3 - (long)param_2 >> 3) * -0x45d1745d;
  lVar16 = tpidr_el0;
  lVar26 = *(long *)(lVar16 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar26;
  }
  local_148 = *(long *)(*(long *)(lVar26 + 0x3d0) + 0x10);
  puVar27 = (uint *)(((long)iVar43 * 2 + (long)iVar43) * 0x10);
  local_d8 = puVar27;
  if ((*(long *)(local_148 + 8) == 0) && (local_148 != 0)) {
    local_98 = (long)puVar27 + 0x3fU & 0xffffffffffffffc0;
    if (local_98 <= *(ulong *)(local_148 + 0x28)) {
      puVar20 = *(uint **)(local_148 + 0x38);
      if (local_98 + (long)puVar20 <= *(ulong *)(local_148 + 0x40)) {
        *(ulong *)(local_148 + 0x38) = local_98 + (long)puVar20;
        goto LAB_030e28dc;
      }
    }
    puVar20 = (uint *)FUN_031cf3b4(local_148,&local_98);
  }
  else {
    puVar20 = (uint *)(**(code **)PTR_DAT_047d1a08)(1,&local_d8,0x40);
    local_148 = 0;
  }
LAB_030e28dc:
  local_d8 = (uint *)0x0;
  local_d0 = 0x8000000000000000;
  uVar41 = (ulong)(param_5 - (long)param_4) >> 2;
  local_140 = (uint)uVar41;
  if (0 < (int)local_140) {
    FUN_0309cc54(&local_d8,PTR_PTR_047d1a50 + 0x20,
                 (ulong)(param_5 - (long)param_4) >> 2 & 0xffffffff);
    uVar18 = local_140 & 3;
    puVar35 = local_d8;
    if (2 < local_140 - 1) {
      iVar43 = -(local_140 & 0xfffffffc);
      puVar32 = local_d8;
      do {
        *puVar32 = *param_4;
        puVar32[1] = param_4[1];
        puVar32[2] = param_4[2];
        puVar31 = param_4 + 3;
        puVar35 = puVar32 + 4;
        param_4 = param_4 + 4;
        iVar43 = iVar43 + 4;
        puVar32[3] = *puVar31;
        puVar32 = puVar35;
      } while (iVar43 != 0);
    }
    if ((uVar41 & 3) != 0) {
      do {
        uVar18 = uVar18 - 1;
        *puVar35 = *param_4;
        puVar35 = puVar35 + 1;
        param_4 = param_4 + 1;
      } while (uVar18 != 0);
    }
  }
  if (param_2 == param_3) {
    local_118._0_4_ = 0;
  }
  else {
    uVar18 = 0;
    local_118 = 0;
    local_d0._0_4_ = local_140;
    do {
      if ((param_2[1] & 1) == 0) {
        iVar43 = (int)local_118;
        lVar40 = (long)iVar43;
        lVar26 = (-(local_118 >> 0x1f) & 0xfffffffe00000000 | local_118 << 1) + (long)iVar43;
        lVar33 = (long)(int)(iVar43 + 1U) * 0x30 + lVar26 * -0x10;
        puVar35 = puVar20 + lVar26 * 4 + 4;
        do {
          *(uint **)(puVar35 + -2) = puVar35 + 2;
          puVar35[0] = 0;
          puVar35[1] = 0x80000001;
          lVar33 = lVar33 + -0x30;
          puVar35[4] = 0;
          puVar35 = puVar35 + 0xc;
        } while (lVar33 != 0);
        uVar25 = *param_2;
        puVar20[lVar26 * 4] = (uint)((ulong)uVar25 & 0x3fffff);
        puVar35 = puVar20 + lVar40 * 0xc + 8;
        uVar49 = *puVar35;
        puVar20[lVar40 * 0xc + 10] = uVar18;
        lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18) + ((ulong)uVar25 & 0x3fffff) * 0x10;
        puVar48 = (ulong *)(puVar20 + lVar40 * 0xc + 2);
        psVar53 = (short *)(lVar26 + 8);
        uVar25 = (int)*(short *)(lVar26 + 10) + (int)*psVar53;
        uVar19 = (int)(uVar25 + 0x1f) >> 5;
        *puVar35 = uVar25;
        if ((int)(puVar20[lVar40 * 0xc + 5] & 0x7fffffff) < (int)uVar19) {
          FUN_02eb1f88(puVar48,PTR_PTR_047d1a50,(long)(int)uVar19);
        }
        if (puVar20[lVar40 * 0xc + 4] != uVar19) {
          puVar20[lVar40 * 0xc + 4] = uVar19;
        }
        uVar49 = uVar49 & ((int)uVar49 >> 0x1f ^ 0xffffffffU);
        if (((int)uVar49 < (int)(*puVar35 + 0x1f & 0xffffffe0)) &&
           (uVar19 = (int)(*puVar35 + 0x1f) >> 5, uVar19 != uVar49 >> 5)) {
          uVar52 = *puVar48;
          uVar15 = uVar49 >> 5;
          uVar42 = (ulong)(uVar15 + 1);
          __s = (void *)(uVar52 + uVar42 * 4);
          iVar44 = uVar19 + ~uVar15;
          *(uint *)(uVar52 + (ulong)uVar15 * 4) =
               *(uint *)(uVar52 + (ulong)uVar15 * 4) | -1 << (ulong)(uVar49 & 0x1f);
          uVar41 = (ulong)iVar44;
          pvVar21 = __s;
          if (((ulong)__s & 0xf) == 0) {
            uVar28 = uVar41;
          }
          else {
            uVar28 = 4 - (((ulong)__s & 0xf) >> 2);
            uVar10 = uVar41;
            if (uVar28 <= uVar41) {
              uVar10 = uVar28;
            }
            uVar28 = uVar41 - uVar10;
            if (0 < (long)uVar10) {
              pvVar6 = (void *)((long)__s + uVar10 * 4);
              pvVar21 = (void *)(uVar52 + uVar42 * 4 + 4);
              pvVar7 = pvVar6;
              if (pvVar6 <= pvVar21) {
                pvVar7 = pvVar21;
              }
              memset(__s,0xff,(long)pvVar7 + ~uVar52 + uVar42 * -4 + 4 & 0xfffffffffffffffc);
              lVar26 = uVar42 - 1;
              pvVar21 = (void *)(uVar52 + 8 + lVar26 * 4);
              if (pvVar6 <= pvVar21) {
                pvVar6 = pvVar21;
              }
              pvVar21 = (void *)(uVar52 + 8 +
                                (lVar26 + ((long)pvVar6 + (-5 - (uVar52 + lVar26 * 4)) >> 2)) * 4);
            }
          }
          if ((3 < uVar28) && (0 < (long)(uVar28 & 0xfffffffffffffffc))) {
            pvVar7 = (void *)((long)pvVar21 + (uVar28 & 0xfffffffffffffffc) * 4);
            pvVar6 = (void *)((long)pvVar21 + 0x10);
            if (pvVar7 <= pvVar6) {
              pvVar7 = pvVar6;
            }
            memset(pvVar21,0xff,(long)pvVar7 + ~(ulong)pvVar21 + 0x10 & 0xfffffffffffffff0);
            pvVar21 = (void *)((long)pvVar6 + ((long)pvVar7 + ~(ulong)pvVar21 & 0xfffffffffffffff0))
            ;
          }
          if (pvVar21 < (void *)((long)__s + (long)iVar44 * 4)) {
            memset(pvVar21,0xff,
                   ((uVar52 + (uVar42 + uVar41) * 4) - (long)pvVar21) + 3 & 0xfffffffffffffffc);
          }
        }
        local_118 = (ulong)(iVar43 + 1U);
        if (param_2[4] != 0) {
          puVar29 = *(ushort **)(param_2 + 2);
          puVar34 = puVar29 + (long)(int)param_2[4] * 3;
          uVar41 = 0;
          uVar42 = 0;
          do {
            uVar52 = *puVar29 + uVar41;
            uVar13 = puVar29[1];
            if ((ulong)*puVar29 != 0) {
              uVar28 = uVar41 << 3 | 2;
              iVar43 = (int)uVar52 + -1;
              do {
                lVar26 = *(long *)(param_2 + 10);
                bVar12 = *(byte *)(lVar26 + (long)iVar43 * 8 + 2);
                if (((bVar12 & 3) == 0) && (((*(byte *)(lVar26 + uVar28) | bVar12) >> 2 & 1) == 0))
                {
                  uVar19 = *(uint *)(lVar26 + (long)iVar43 * 8 + 4);
                  iVar43 = (int)uVar19 >> 5;
                  *(uint *)(*puVar48 + (long)iVar43 * 4) =
                       *(uint *)(*puVar48 + (long)iVar43 * 4) &
                       (1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
                }
                iVar43 = (int)uVar41;
                uVar41 = uVar41 + 1;
                uVar28 = uVar28 + 8;
              } while (uVar41 < uVar52);
            }
            uVar28 = uVar13 + uVar42;
            if (uVar13 != 0) {
              lVar26 = uVar42 << 3;
              do {
                lVar33 = *(long *)(param_2 + 0xe) + lVar26;
                if ((((*(byte *)(lVar33 + 4) & 3) == 0) &&
                    (((*(byte *)(lVar33 + 5) | *(byte *)(lVar33 + 4)) >> 2 & 1) == 0)) &&
                   (uVar19 = (uint)*(ushort *)(lVar33 + 6) + (int)*psVar53,
                   (int)uVar19 < (int)uVar25)) {
                  *(uint *)(*puVar48 + (long)((int)uVar19 >> 5) * 4) =
                       *(uint *)(*puVar48 + (long)((int)uVar19 >> 5) * 4) &
                       (1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
                }
                uVar42 = uVar42 + 1;
                lVar26 = lVar26 + 8;
              } while (uVar42 < uVar28);
            }
            puVar29 = puVar29 + 3;
            uVar41 = uVar52 & 0xffffffff;
            uVar42 = uVar28 & 0xffffffff;
          } while (puVar29 != puVar34);
        }
      }
      else {
        uVar25 = *param_2;
        lVar26 = (long)(int)(uint)local_d0;
        if ((int)(local_d0._4_4_ & 0x7fffffff) <= (int)(uint)local_d0) {
          FUN_03078498(&local_d8,PTR_PTR_047d1a50 + 0x20,lVar26 + 1);
        }
        local_d8[(int)(uint)local_d0] = uVar25 & 0x3fffff;
        local_d0._0_4_ = (uint)(lVar26 + 1);
      }
      iVar43 = *(int *)PTR_DAT_047e4f38;
      lVar26 = *(long *)(lVar16 + 0x1000b8);
      if (lVar26 == 0) {
        lVar26 = FUN_00e5d3b4();
        *(long *)(lVar16 + 0x1000b8) = lVar26;
      }
      if (*(long *)(lVar26 + (long)iVar43 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      param_2 = param_2 + 0x16;
      uVar18 = uVar18 + 1;
    } while (param_2 != param_3);
    local_140 = (uint)local_d0;
  }
  puVar35 = local_d8;
  iVar43 = *(int *)PTR_DAT_047e4f38;
  lVar26 = *(long *)(lVar16 + 0x1000b8);
  local_d0._0_4_ = local_140;
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar26;
  }
  if (*(long *)(lVar26 + (long)iVar43 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (puVar20 + (long)(int)local_118 * 0xc != puVar20) {
    plVar2 = (long *)(param_1 + 0x30);
    plVar3 = (long *)(param_1 + 0x10);
    puVar48 = param_11 + 2;
    puVar32 = puVar20;
    do {
      piVar47 = (int *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)*puVar32 * 0x10);
      piVar55 = piVar47 + 2;
      psVar53 = (short *)((long)piVar47 + 10);
      if ((int)*psVar53 + (int)(short)*piVar55 < 0x17) {
        lVar26 = FUN_030e7a5c(plVar3,puVar32);
        if (lVar26 == 0) {
          uVar41 = 0;
          uVar42 = 0xffffffff;
        }
        else {
          uVar42 = (ulong)*(uint *)(lVar26 + 4);
          uVar41 = (lVar26 - *(long *)(param_1 + 0x20)) * 0x20000000;
        }
        if ((int)(uVar42 | uVar41) < 0) {
          uVar25 = *puVar32;
          local_78[0] = 0x400000;
          uVar18 = puVar32[10];
          lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)uVar25 * 0x10;
          iVar43 = (int)param_11[1];
          lVar33 = (long)iVar43;
          if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) <= iVar43) {
            FUN_030e71f8(param_11,lVar33 + 1);
            iVar43 = (int)param_11[1];
          }
          puVar30 = (undefined1 *)(*param_11 + (long)iVar43 * 0xc);
          *puVar30 = 0;
          *(uint *)(puVar30 + 4) = uVar25;
          *(uint *)(puVar30 + 8) = uVar18;
          *(int *)(param_11 + 1) = (int)(lVar33 + 1);
          uVar18 = (int)*(short *)(lVar26 + 10) + (int)*(short *)(lVar26 + 8);
          if ((int)uVar18 < 1) {
            uVar25 = 0x400000;
          }
          else {
            uVar41 = 0;
            uVar25 = 0x400000;
            do {
              uVar42 = uVar41 & 0x3f;
              iVar43 = *piVar47;
              if ((long)(short)*piVar55 <= (long)uVar41) {
                iVar43 = piVar47[1] - (int)(short)*piVar55;
              }
              uVar49 = (uint)uVar41;
              uVar19 = *(uint *)(*(long *)(puVar32 + 2) + (uVar41 >> 5 & 0x7ffffff) * 4) &
                       1 << (ulong)(uVar49 & 0x1f);
              if (uVar19 != 0) {
                lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x28);
                uVar15 = *(uint *)(lVar26 + (long)(int)(uVar49 + iVar43) * 0x14 + 0xc);
                if ((uVar15 != 0xffffffff) && (uVar15 != *puVar32)) {
                  lVar33 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)uVar15 * 0x10;
                  local_70[0] = *(uint *)(lVar26 + (long)(int)(uVar49 + iVar43) * 0x14 + 8);
                  if ((int)*(short *)(lVar33 + 10) + (int)*(short *)(lVar33 + 8) < 0x17) {
                    local_98 = CONCAT44(local_98._4_4_,uVar15);
                    FUN_030e55e0(param_1,plVar3,&local_98,local_70);
                  }
                  else {
                    local_98 = CONCAT44(local_98._4_4_,uVar15);
                    FUN_030e5750(param_1,plVar2,&local_98,local_70,param_11);
                  }
                }
              }
              uVar41 = uVar41 + 1;
              uVar25 = (uint)(uVar19 != 0) << (ulong)(uVar49 & 0x1f) |
                       uVar25 & ((uint)(1L << uVar42) ^ 0xffffffff);
            } while (uVar18 != uVar41);
            local_78[0] = uVar25;
          }
          local_c8[0] = *puVar32;
          FUN_030e6db4(param_1,local_78,local_c8,puVar48);
          uVar18 = FUN_030e96b8(plVar3,puVar32);
          if (*(uint *)(param_1 + 0x18) == uVar18) {
            iVar43 = uVar18 + 1;
            if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) <= (int)uVar18) {
              FUN_030e97b4(plVar3,(long)iVar43);
              uVar18 = *(uint *)(param_1 + 0x18);
            }
            puVar31 = (uint *)(*(long *)(param_1 + 0x10) + (long)(int)uVar18 * 8);
            *puVar31 = *puVar32;
            puVar31[1] = uVar25;
            goto LAB_030e3ad8;
          }
          *(uint *)(*plVar3 + ((long)((ulong)uVar18 << 0x20) >> 0x1d) + 4) = uVar25;
        }
        else {
          uVar19 = *(uint *)(*plVar3 + ((long)((uVar42 | uVar41) << 0x20) >> 0x1d) + 4) | 0x400000;
          iVar43 = (int)param_11[1];
          uVar18 = *puVar32;
          uVar25 = puVar32[10];
          lVar26 = (long)iVar43;
          local_a8[0] = uVar19;
          if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) <= iVar43) {
            FUN_030e71f8(param_11,lVar26 + 1);
            iVar43 = (int)param_11[1];
          }
          puVar30 = (undefined1 *)(*param_11 + (long)iVar43 * 0xc);
          *puVar30 = 0;
          *(uint *)(puVar30 + 4) = uVar18;
          *(uint *)(puVar30 + 8) = uVar25;
          *(int *)(param_11 + 1) = (int)(lVar26 + 1);
          sVar24 = (short)*piVar55;
          sVar54 = *psVar53;
          iVar43 = (int)sVar24;
          if (0 < sVar54 + iVar43) {
            uVar41 = 0;
            while( true ) {
              iVar44 = *piVar47;
              if ((long)sVar24 <= (long)uVar41) {
                iVar44 = piVar47[1] - (int)sVar24;
              }
              uVar25 = (uint)uVar41;
              uVar18 = *(uint *)(*(long *)(puVar32 + 2) + (uVar41 >> 5 & 0x7ffffff) * 4) >>
                       (ulong)(uVar25 & 0x1f) & 1;
              if ((uVar19 >> (ulong)(uVar25 & 0x1f) & 1) != uVar18) {
                lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x28);
                uVar19 = uVar18 << (ulong)(uVar25 & 0x1f) |
                         uVar19 & ((uint)(1L << (uVar41 & 0x3f)) ^ 0xffffffff);
                uVar49 = *(uint *)(lVar26 + (long)(int)(uVar25 + iVar44) * 0x14 + 0xc);
                if ((uVar49 != 0xffffffff) && (uVar49 != *puVar32)) {
                  uVar25 = *(uint *)(lVar26 + (long)(int)(uVar25 + iVar44) * 0x14 + 8);
                  if (uVar18 == 0) {
                    local_b8[0] = uVar25;
                    local_b0[0] = uVar49;
                    FUN_030e5c38(param_1,local_b0,local_b8,param_11);
                  }
                  else {
                    lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)uVar49 * 0x10;
                    if ((int)*(short *)(lVar26 + 10) + (int)*(short *)(lVar26 + 8) < 0x17) {
                      local_98 = CONCAT44(local_98._4_4_,uVar49);
                      local_70[0] = uVar25;
                      FUN_030e55e0(param_1,plVar3,&local_98,local_70);
                    }
                    else {
                      local_a0[0] = uVar25;
                      local_78[0] = uVar49;
                      FUN_030e5750(param_1,plVar2,local_78,local_a0);
                    }
                  }
                }
              }
              if ((ulong)(uint)(sVar54 + iVar43) - 1 == uVar41) break;
              sVar24 = (short)*piVar55;
              uVar41 = uVar41 + 1;
            }
            local_a8[0] = uVar19;
          }
          local_c0[0] = *puVar32;
          FUN_030e6db4(param_1,local_a8,local_c0,puVar48);
          uVar18 = FUN_030e96b8(plVar3,puVar32);
          if (*(uint *)(param_1 + 0x18) == uVar18) {
            iVar43 = uVar18 + 1;
            if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) <= (int)uVar18) {
              FUN_030e97b4(plVar3,(long)iVar43);
              uVar18 = *(uint *)(param_1 + 0x18);
            }
            puVar31 = (uint *)(*(long *)(param_1 + 0x10) + (long)(int)uVar18 * 8);
            *puVar31 = *puVar32;
            puVar31[1] = uVar19;
LAB_030e3ad8:
            *(int *)(param_1 + 0x18) = iVar43;
          }
          else {
            *(uint *)(*plVar3 + ((long)((ulong)uVar18 << 0x20) >> 0x1d) + 4) = uVar19;
          }
        }
      }
      else {
        lVar26 = FUN_030e7e50(plVar2,puVar32);
        if (lVar26 == 0) {
          uVar25 = 0;
          uVar18 = 0xffffffff;
        }
        else {
          uVar18 = *(uint *)(lVar26 + 4);
          uVar25 = ((int)lVar26 - (int)*(undefined8 *)(param_1 + 0x40)) * 0x20000000;
        }
        uVar18 = uVar18 | uVar25;
        if ((int)uVar18 < 0) {
          lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)*puVar32 * 0x10;
          psVar53 = (short *)(lVar26 + 10);
          psVar45 = (short *)(lVar26 + 8);
          local_90 = (undefined4 *)0x0;
          local_88 = 0x8000000000000000;
          local_80 = 0;
          local_98 = (ulong)local_98._6_2_ << 0x30;
          FUN_02eb1718(&local_90,0,(int)*psVar53 + (int)*psVar45,0);
          local_98._0_5_ = CONCAT14(1,(uint)local_98);
          uVar18 = *puVar32;
          uVar25 = puVar32[10];
          iVar43 = (int)param_11[1];
          lVar26 = (long)iVar43;
          if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) <= iVar43) {
            FUN_030e71f8(param_11,lVar26 + 1);
            iVar43 = (int)param_11[1];
          }
          puVar30 = (undefined1 *)(*param_11 + (long)iVar43 * 0xc);
          *puVar30 = 0;
          *(uint *)(puVar30 + 4) = uVar18;
          *(uint *)(puVar30 + 8) = uVar25;
          *(int *)(param_11 + 1) = (int)(lVar26 + 1);
          uVar18 = (int)*psVar53 + (int)*psVar45;
          if (0 < (int)uVar18) {
            uVar25 = 0;
            do {
              uVar41 = (ulong)(uVar25 >> 5);
              iVar43 = *piVar47;
              if ((int)(short)*piVar55 <= (int)uVar25) {
                iVar43 = piVar47[1] - (int)(short)*piVar55;
              }
              uVar19 = 1 << (ulong)(uVar25 & 0x1f);
              if ((*(uint *)(*(long *)(puVar32 + 2) + uVar41 * 4) & uVar19) == 0) {
                local_90[uVar41] = local_90[uVar41] & (uVar19 ^ 0xffffffff);
              }
              else {
                lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x28);
                local_90[uVar41] = local_90[uVar41] | uVar19;
                local_70[0] = *(uint *)(lVar26 + (long)(int)(iVar43 + uVar25) * 0x14 + 0xc);
                if ((local_70[0] != 0xffffffff) && (local_70[0] != *puVar32)) {
                  local_78[0] = *(uint *)(lVar26 + (long)(int)(iVar43 + uVar25) * 0x14 + 8);
                  lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)local_70[0] * 0x10;
                  if ((int)*(short *)(lVar26 + 10) + (int)*(short *)(lVar26 + 8) < 0x17) {
                    FUN_030e55e0(param_1,plVar3,local_70,local_78);
                  }
                  else {
                    FUN_030e5750(param_1,plVar2,local_70,local_78,param_11);
                  }
                }
              }
              uVar25 = uVar25 + 1;
            } while (uVar18 != uVar25);
          }
          local_70[0] = *puVar32;
          FUN_030e7398(param_1,&local_98,local_70,puVar48);
          iVar43 = FUN_030e98c8(plVar2,puVar32);
          if (*(int *)(param_1 + 0x38) != iVar43) goto LAB_030e39a8;
          iVar44 = iVar43 + 1;
          if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) <= iVar43) {
            FUN_030e99c4(plVar2,(long)iVar44);
            iVar43 = *(int *)(param_1 + 0x38);
          }
          uVar41 = local_88;
          puVar50 = local_90;
          lVar26 = *plVar2;
          puVar51 = (uint *)(lVar26 + (long)iVar43 * 0x28);
          *puVar51 = *puVar32;
          lVar33 = (long)iVar43;
          puVar46 = puVar51 + 4;
          puVar46[0] = 0;
          puVar46[1] = 0;
          puVar51[2] = (uint)local_98;
          *(undefined2 *)(puVar51 + 3) = local_98._4_2_;
          puVar31 = puVar51 + 7;
          puVar51 = puVar51 + 6;
          puVar51[0] = 0;
          puVar51[1] = 0x80000000;
          uVar18 = (uint)local_88;
          if ((int)(uint)local_88 < 1) goto LAB_030e3a44;
          puVar39 = (undefined4 *)
                    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                              (PTR_PTR_047d1a50,(local_88 & 0xffffffff) << 2);
          uVar25 = uVar18 & 7;
          *(undefined4 **)puVar46 = puVar39;
          *puVar51 = uVar18;
          *puVar31 = uVar18;
          if (6 < uVar18 - 1) {
            iVar43 = -(uVar18 & 0xfffffff8);
            puVar22 = puVar39;
            do {
              *puVar22 = *puVar50;
              puVar22[1] = puVar50[1];
              puVar22[2] = puVar50[2];
              puVar22[3] = puVar50[3];
              puVar22[4] = puVar50[4];
              puVar22[5] = puVar50[5];
              puVar22[6] = puVar50[6];
              puVar1 = puVar50 + 7;
              puVar39 = puVar22 + 8;
              puVar50 = puVar50 + 8;
              iVar43 = iVar43 + 8;
              puVar22[7] = *puVar1;
              puVar22 = puVar39;
            } while (iVar43 != 0);
          }
          if ((uVar41 & 7) != 0) {
            do {
              uVar25 = uVar25 - 1;
              *puVar39 = *puVar50;
              puVar39 = puVar39 + 1;
              puVar50 = puVar50 + 1;
            } while (uVar25 != 0);
          }
LAB_030e3c0c:
          *(undefined4 *)(lVar26 + lVar33 * 0x28 + 0x20) = local_80;
          *(int *)(param_1 + 0x38) = iVar44;
        }
        else {
          lVar33 = *plVar2;
          lVar26 = lVar33 + (long)(int)uVar18 * 0x28;
          local_98 = CONCAT44(CONCAT22(local_98._6_2_,*(undefined2 *)(lVar26 + 0xc)),
                              *(undefined4 *)(lVar26 + 8));
          local_90 = (undefined4 *)0x0;
          local_88 = 0x8000000000000000;
          uVar25 = *(uint *)(lVar26 + 0x18);
          if ((int)uVar25 < 1) {
            local_90 = (undefined4 *)0x0;
            local_88 = 0x8000000000000000;
          }
          else {
            puVar39 = *(undefined4 **)(lVar33 + (long)(int)uVar18 * 0x28 + 0x10);
            local_90 = (undefined4 *)
                       (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(ulong)uVar25 << 2);
            uVar19 = uVar25 & 7;
            local_88 = CONCAT44(uVar25,uVar25);
            puVar50 = local_90;
            if (6 < uVar25 - 1) {
              iVar43 = -(uVar25 & 0xfffffff8);
              puVar22 = local_90;
              do {
                *puVar22 = *puVar39;
                puVar22[1] = puVar39[1];
                puVar22[2] = puVar39[2];
                puVar22[3] = puVar39[3];
                puVar22[4] = puVar39[4];
                puVar22[5] = puVar39[5];
                puVar22[6] = puVar39[6];
                puVar1 = puVar39 + 7;
                puVar50 = puVar22 + 8;
                puVar39 = puVar39 + 8;
                iVar43 = iVar43 + 8;
                puVar22[7] = *puVar1;
                puVar22 = puVar50;
              } while (iVar43 != 0);
            }
            for (; uVar19 != 0; uVar19 = uVar19 - 1) {
              *puVar50 = *puVar39;
              puVar50 = puVar50 + 1;
              puVar39 = puVar39 + 1;
            }
          }
          local_80 = *(undefined4 *)(lVar33 + (long)(int)uVar18 * 0x28 + 0x20);
          local_98._0_5_ = CONCAT14(1,(uint)local_98);
          uVar18 = *puVar32;
          iVar43 = (int)param_11[1];
          uVar25 = puVar32[10];
          lVar26 = (long)iVar43;
          if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) <= iVar43) {
            FUN_030e71f8(param_11,lVar26 + 1);
            iVar43 = (int)param_11[1];
          }
          puVar30 = (undefined1 *)(*param_11 + (long)iVar43 * 0xc);
          *puVar30 = 0;
          *(uint *)(puVar30 + 4) = uVar18;
          *(uint *)(puVar30 + 8) = uVar25;
          *(int *)(param_11 + 1) = (int)(lVar26 + 1);
          sVar24 = (short)*piVar55;
          sVar54 = *psVar53;
          if (0 < (int)sVar54 + (int)sVar24) {
            iVar43 = (int)sVar24;
            uVar18 = 0;
            while( true ) {
              uVar41 = (ulong)(uVar18 >> 5);
              uVar25 = local_90[uVar41];
              iVar44 = *piVar47;
              if ((int)sVar24 <= (int)uVar18) {
                iVar44 = piVar47[1] - (int)sVar24;
              }
              uVar19 = *(uint *)(*(long *)(puVar32 + 2) + uVar41 * 4) >> (ulong)(uVar18 & 0x1f) & 1;
              if ((uVar25 >> (ulong)(uVar18 & 0x1f) & 1) != uVar19) {
                lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x28);
                uVar15 = 1 << (ulong)(uVar18 & 0x1f);
                uVar49 = uVar25 & (uVar15 ^ 0xffffffff);
                if (uVar19 != 0) {
                  uVar49 = uVar25 | uVar15;
                }
                local_90[uVar41] = uVar49;
                uVar25 = *(uint *)(lVar26 + (long)(int)(iVar44 + uVar18) * 0x14 + 0xc);
                if ((uVar25 != 0xffffffff) && (uVar25 != *puVar32)) {
                  uVar49 = *(uint *)(lVar26 + (long)(int)(iVar44 + uVar18) * 0x14 + 8);
                  if (uVar19 == 0) {
                    local_b8[0] = uVar49;
                    local_b0[0] = uVar25;
                    FUN_030e5c38(param_1,local_b0,local_b8,param_11);
                  }
                  else {
                    lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)uVar25 * 0x10;
                    if ((int)*(short *)(lVar26 + 10) + (int)*(short *)(lVar26 + 8) < 0x17) {
                      local_78[0] = uVar49;
                      local_70[0] = uVar25;
                      FUN_030e55e0(param_1,plVar3,local_70,local_78);
                    }
                    else {
                      local_a8[0] = uVar49;
                      local_a0[0] = uVar25;
                      FUN_030e5750(param_1,plVar2,local_a0,local_a8);
                    }
                  }
                }
              }
              if ((iVar43 + sVar54) - 1U == uVar18) break;
              sVar24 = (short)*piVar55;
              uVar18 = uVar18 + 1;
            }
          }
          local_70[0] = *puVar32;
          FUN_030e7398(param_1,&local_98,local_70,puVar48);
          iVar43 = FUN_030e98c8(plVar2,puVar32);
          if (*(int *)(param_1 + 0x38) == iVar43) {
            iVar44 = iVar43 + 1;
            if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) <= iVar43) {
              FUN_030e99c4(plVar2,(long)iVar44);
              iVar43 = *(int *)(param_1 + 0x38);
            }
            uVar41 = local_88;
            puVar50 = local_90;
            lVar26 = *plVar2;
            puVar51 = (uint *)(lVar26 + (long)iVar43 * 0x28);
            *puVar51 = *puVar32;
            lVar33 = (long)iVar43;
            puVar46 = puVar51 + 4;
            puVar46[0] = 0;
            puVar46[1] = 0;
            puVar51[2] = (uint)local_98;
            *(undefined2 *)(puVar51 + 3) = local_98._4_2_;
            puVar31 = puVar51 + 7;
            puVar51 = puVar51 + 6;
            puVar51[0] = 0;
            puVar51[1] = 0x80000000;
            uVar18 = (uint)local_88;
            if ((int)(uint)local_88 < 1) {
LAB_030e3a44:
              puVar46[0] = 0;
              puVar46[1] = 0;
              *puVar51 = 0;
              *puVar31 = 0x80000000;
            }
            else {
              puVar39 = (undefined4 *)
                        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                  (PTR_PTR_047d1a50,(local_88 & 0xffffffff) << 2);
              uVar25 = uVar18 & 7;
              *(undefined4 **)puVar46 = puVar39;
              *puVar51 = uVar18;
              *puVar31 = uVar18;
              if (6 < uVar18 - 1) {
                iVar43 = -(uVar18 & 0xfffffff8);
                puVar22 = puVar39;
                do {
                  *puVar22 = *puVar50;
                  puVar22[1] = puVar50[1];
                  puVar22[2] = puVar50[2];
                  puVar22[3] = puVar50[3];
                  puVar22[4] = puVar50[4];
                  puVar22[5] = puVar50[5];
                  puVar22[6] = puVar50[6];
                  puVar1 = puVar50 + 7;
                  puVar39 = puVar22 + 8;
                  puVar50 = puVar50 + 8;
                  iVar43 = iVar43 + 8;
                  puVar22[7] = *puVar1;
                  puVar22 = puVar39;
                } while (iVar43 != 0);
              }
              if ((uVar41 & 7) != 0) {
                do {
                  uVar25 = uVar25 - 1;
                  *puVar39 = *puVar50;
                  puVar39 = puVar39 + 1;
                  puVar50 = puVar50 + 1;
                } while (uVar25 != 0);
              }
            }
            goto LAB_030e3c0c;
          }
LAB_030e39a8:
          puVar50 = local_90;
          lVar33 = *plVar2;
          lVar26 = lVar33 + (long)iVar43 * 0x28;
          lVar40 = (long)iVar43;
          *(uint *)(lVar26 + 8) = (uint)local_98;
          *(undefined2 *)(lVar26 + 0xc) = local_98._4_2_;
          if ((undefined8 *)(lVar26 + 8) != &local_98) {
            iVar43 = (uint)local_88;
            lVar36 = (long)(int)(uint)local_88;
            if ((int)(*(uint *)(lVar33 + lVar40 * 0x28 + 0x1c) & 0x7fffffff) < (int)(uint)local_88)
            {
              FUN_02eb1edc((undefined8 *)(lVar26 + 0x10),PTR_PTR_047d1a50,lVar36);
            }
            memcpy(*(void **)(lVar26 + 0x10),puVar50,lVar36 << 2);
            *(int *)(lVar33 + lVar40 * 0x28 + 0x18) = iVar43;
          }
          *(undefined4 *)(lVar33 + lVar40 * 0x28 + 0x20) = local_80;
        }
        uVar18 = local_88._4_4_;
        uVar41 = (ulong)local_88._4_4_;
        local_88 = (ulong)local_88._4_4_ << 0x20;
        if ((-1 < (int)uVar18) && (local_90 != (undefined4 *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_90,uVar41 << 2);
        }
      }
      iVar43 = *(int *)PTR_DAT_047e4f38;
      lVar26 = *(long *)(lVar16 + 0x1000b8);
      if (lVar26 == 0) {
        lVar26 = FUN_00e5d3b4();
        *(long *)(lVar16 + 0x1000b8) = lVar26;
      }
      if (*(long *)(lVar26 + (long)iVar43 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      puVar32 = puVar32 + 0xc;
    } while (puVar32 != puVar20 + (long)(int)local_118 * 0xc);
  }
  if (local_140 != 0) {
    puVar32 = puVar35 + (int)local_140;
    plVar2 = (long *)(param_1 + 0x30);
    plVar3 = (long *)(param_1 + 0x10);
    puVar48 = param_11 + 2;
    plVar4 = (long *)(param_1 + 0x50);
    do {
      uVar18 = *puVar35;
      lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18);
      piVar47 = (int *)(lVar26 + (long)(int)uVar18 * 0x10);
      piVar55 = piVar47 + 2;
      psVar53 = (short *)((long)piVar47 + 10);
      if ((int)*psVar53 + (int)(short)*piVar55 < 0x17) {
        local_b8[0] = uVar18;
        lVar33 = FUN_030e7a5c(plVar3,local_b8);
        if (lVar33 == 0) {
          uVar41 = 0;
          uVar42 = 0xffffffff;
        }
        else {
          uVar42 = (ulong)*(uint *)(lVar33 + 4);
          uVar41 = (lVar33 - *(long *)(param_1 + 0x20)) * 0x20000000;
        }
        if ((-1 < (int)(uVar42 | uVar41)) &&
           (uVar25 = *(uint *)(*plVar3 + ((long)((uVar42 | uVar41) << 0x20) >> 0x1d) + 4),
           (uVar25 >> 0x16 & 1) != 0)) {
          sVar24 = (short)*piVar55;
          sVar54 = *psVar53;
          iVar43 = (int)sVar24;
          if (0 < sVar54 + iVar43) {
            uVar41 = 0;
            while( true ) {
              iVar44 = *piVar47;
              if ((long)sVar24 <= (long)uVar41) {
                iVar44 = *(int *)(lVar26 + (long)(int)uVar18 * 0x10 + 4) - (int)sVar24;
              }
              if ((uVar25 >> (ulong)((uint)uVar41 & 0x1f) & 1) != 0) {
                lVar33 = *(long *)(*(long *)(param_1 + 8) + 0x28);
                lVar40 = (long)(int)((uint)uVar41 + iVar44);
                uVar19 = *(uint *)(lVar33 + lVar40 * 0x14 + 0xc);
                if (uVar19 != 0xffffffff) {
                  if (uVar19 != local_b8[0]) {
                    local_a0[0] = *(uint *)(lVar33 + lVar40 * 0x14 + 8);
                    local_78[0] = uVar19;
                    FUN_030e5c38(param_1,local_78,local_a0);
                  }
                  uVar25 = uVar25 & ((uint)(1L << (uVar41 & 0x3f)) ^ 0xffffffff);
                }
              }
              if ((ulong)(uint)(sVar54 + iVar43) - 1 == uVar41) break;
              sVar24 = (short)*piVar55;
              uVar41 = uVar41 + 1;
            }
          }
          uVar18 = local_b8[0];
          if ((uVar25 >> 0x17 & 1) == 0) {
            if (uVar25 >> 0x18 == 0) {
              iVar43 = (int)param_11[1];
              lVar26 = (long)iVar43;
              if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) <= iVar43) {
                FUN_030e71f8(param_11,lVar26 + 1);
                iVar43 = (int)param_11[1];
              }
              puVar30 = (undefined1 *)(*param_11 + (long)iVar43 * 0xc);
              *puVar30 = 3;
              *(uint *)(puVar30 + 4) = uVar18;
              *(int *)(param_11 + 1) = (int)(lVar26 + 1);
              local_98 = CONCAT44(local_98._4_4_,local_b8[0]);
              local_70[0] = 0xffffffff;
              FUN_030e2538(param_1,&local_98,local_70,puVar48);
              lVar26 = FUN_030e7a5c(plVar3,local_b8);
              if (lVar26 != 0) {
                FUN_030e7acc(plVar3,lVar26);
              }
            }
            else {
              iVar43 = (int)param_11[1];
              lVar26 = (long)iVar43;
              if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) <= iVar43) {
                FUN_030e71f8(param_11,lVar26 + 1);
                iVar43 = (int)param_11[1];
              }
              puVar30 = (undefined1 *)(*param_11 + (long)iVar43 * 0xc);
              *puVar30 = 2;
              *(uint *)(puVar30 + 4) = uVar18;
              *(int *)(param_11 + 1) = (int)(lVar26 + 1);
              local_98 = CONCAT44(local_98._4_4_,local_b8[0]);
              local_70[0] = 0xffffffff;
              FUN_030e77e0(param_1,&local_98,local_70,puVar48);
              uVar18 = FUN_030e96b8(plVar3,local_b8);
              if (*(uint *)(param_1 + 0x18) == uVar18) {
                iVar43 = uVar18 + 1;
                if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) <= (int)uVar18) {
                  FUN_030e97b4(plVar3,(long)iVar43);
                  uVar18 = *(uint *)(param_1 + 0x18);
                }
                puVar31 = (uint *)(*(long *)(param_1 + 0x10) + (long)(int)uVar18 * 8);
                *puVar31 = local_b8[0];
                puVar31[1] = uVar25 & 0xffbfffff;
                *(int *)(param_1 + 0x18) = iVar43;
              }
              else {
                *(uint *)(*plVar3 + ((long)((ulong)uVar18 << 0x20) >> 0x1d) + 4) =
                     uVar25 & 0xffbfffff;
              }
            }
          }
          else {
            iVar43 = (int)param_11[1];
            lVar26 = (long)iVar43;
            if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) <= iVar43) {
              FUN_030e71f8(param_11,lVar26 + 1);
              iVar43 = (int)param_11[1];
            }
            puVar30 = (undefined1 *)(*param_11 + (long)iVar43 * 0xc);
            *puVar30 = 1;
            *(uint *)(puVar30 + 4) = uVar18;
            *(int *)(param_11 + 1) = (int)(lVar26 + 1);
            lVar26 = (long)(int)local_b8[0];
            local_a8[0] = local_b8[0];
            local_98 = CONCAT44(local_98._4_4_,local_b8[0]);
            local_70[0] = 0xffffffff;
            FUN_030e77e0(param_1,&local_98,local_70,puVar48);
            lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18) + lVar26 * 0x10;
            uVar13 = *(ushort *)(lVar26 + 8);
            uVar14 = *(ushort *)(lVar26 + 10);
            lVar26 = FUN_030e94b4(plVar4,local_a8);
            if (lVar26 == 0) {
              uVar19 = 0;
              uVar18 = 0xffffffff;
            }
            else {
              uVar18 = *(uint *)(lVar26 + 4);
              uVar19 = ((int)lVar26 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
            }
            lVar26 = *plVar4;
            piVar47 = (int *)(lVar26 + (long)(int)(uVar18 | uVar19) * 0x18 + 0x10);
            if (0 < *piVar47) {
              lVar40 = 0;
              lVar33 = 0;
              iVar43 = (uint)uVar14 + (uint)uVar13;
              do {
                uVar11 = local_a8[0];
                lVar36 = *(long *)(lVar26 + (long)(int)(uVar18 | uVar19) * 0x18 + 8);
                uVar49 = iVar43 + (int)lVar33;
                sVar24 = (short)uVar49;
                uVar15 = *(uint *)(lVar36 + lVar40);
                if (uVar15 == local_a8[0]) {
                  iVar44 = *(int *)(lVar36 + lVar40 + 4);
                  if (lVar33 < iVar44) {
                    uVar15 = iVar44 + iVar43;
                    sVar5 = (short)uVar15;
                    sVar54 = sVar5;
                    if ((uVar15 & 0xffff) <= (uVar49 & 0xffff)) {
                      sVar54 = sVar24;
                      sVar24 = sVar5;
                    }
                    iVar44 = (int)param_11[3];
                    lVar36 = (long)iVar44 + 1;
                    if ((int)(*(uint *)((long)param_11 + 0x1c) & 0x7fffffff) <= iVar44) {
                      FUN_030e84cc(puVar48,lVar36);
                      iVar44 = (int)param_11[3];
                    }
                    puVar31 = (uint *)(param_11[2] + (long)iVar44 * 0x10);
                    *puVar31 = uVar11;
                    puVar31[1] = uVar11;
                    *(short *)(puVar31 + 2) = sVar24;
                    goto LAB_030e48d4;
                  }
                }
                else if (-1 < (int)uVar15) {
                  uVar49 = local_a8[0];
                  uVar11 = uVar15;
                  if ((int)uVar15 <= (int)local_a8[0]) {
                    uVar49 = uVar15;
                    uVar11 = local_a8[0];
                  }
                  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (ulong)uVar15 * 0x10;
                  sVar54 = *(short *)(lVar8 + 10) + *(short *)(lVar8 + 8) +
                           (short)*(undefined4 *)(lVar36 + lVar40 + 4);
                  sVar5 = sVar24;
                  if ((int)uVar15 <= (int)local_a8[0]) {
                    sVar5 = sVar54;
                    sVar54 = sVar24;
                  }
                  iVar44 = (int)param_11[3];
                  lVar36 = (long)iVar44 + 1;
                  if ((int)(*(uint *)((long)param_11 + 0x1c) & 0x7fffffff) <= iVar44) {
                    FUN_030e84cc(puVar48,lVar36);
                    iVar44 = (int)param_11[3];
                  }
                  puVar31 = (uint *)(param_11[2] + (long)iVar44 * 0x10);
                  *puVar31 = uVar49;
                  puVar31[1] = uVar11;
                  *(short *)(puVar31 + 2) = sVar5;
LAB_030e48d4:
                  *(short *)((long)puVar31 + 10) = sVar54;
                  *(undefined1 *)(puVar31 + 3) = 3;
                  *(int *)(param_11 + 3) = (int)lVar36;
                }
                lVar33 = lVar33 + 1;
                lVar40 = lVar40 + 8;
              } while (lVar33 < *piVar47);
            }
            uVar18 = FUN_030e96b8(plVar3,local_b8);
            if (*(uint *)(param_1 + 0x18) == uVar18) {
              iVar43 = uVar18 + 1;
              if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) <= (int)uVar18) {
                FUN_030e97b4(plVar3,(long)iVar43);
                uVar18 = *(uint *)(param_1 + 0x18);
              }
              puVar31 = (uint *)(*(long *)(param_1 + 0x10) + (long)(int)uVar18 * 8);
              *puVar31 = local_b8[0];
              puVar31[1] = uVar25 & 0xffbfffff;
              *(int *)(param_1 + 0x18) = iVar43;
            }
            else {
              *(uint *)(*plVar3 + ((long)((ulong)uVar18 << 0x20) >> 0x1d) + 4) = uVar25 & 0xffbfffff
              ;
            }
          }
        }
      }
      else {
        local_c0[0] = uVar18;
        lVar33 = FUN_030e7e50(plVar2,local_c0);
        if (lVar33 == 0) {
          uVar19 = 0;
          uVar25 = 0xffffffff;
        }
        else {
          uVar25 = *(uint *)(lVar33 + 4);
          uVar19 = ((int)lVar33 - (int)*(undefined8 *)(param_1 + 0x40)) * 0x20000000;
        }
        uVar25 = uVar25 | uVar19;
        if ((-1 < (int)uVar25) &&
           (lVar33 = *plVar2, *(char *)(lVar33 + (long)(int)uVar25 * 0x28 + 0xc) != '\0')) {
          lVar36 = (long)(int)uVar25;
          lVar40 = lVar33 + lVar36 * 0x28;
          local_98 = CONCAT26(local_98._6_2_,*(undefined6 *)(lVar40 + 8));
          local_90 = (undefined4 *)0x0;
          local_88 = 0x8000000000000000;
          uVar25 = *(uint *)(lVar40 + 0x18);
          if ((int)uVar25 < 1) {
            local_90 = (undefined4 *)0x0;
            local_88 = 0x8000000000000000;
          }
          else {
            puVar39 = *(undefined4 **)(lVar33 + lVar36 * 0x28 + 0x10);
            local_90 = (undefined4 *)
                       (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(ulong)uVar25 << 2);
            uVar19 = uVar25 & 7;
            local_88 = CONCAT44(uVar25,uVar25);
            puVar50 = local_90;
            if (6 < uVar25 - 1) {
              iVar43 = -(uVar25 & 0xfffffff8);
              puVar22 = local_90;
              do {
                *puVar22 = *puVar39;
                puVar22[1] = puVar39[1];
                puVar22[2] = puVar39[2];
                puVar22[3] = puVar39[3];
                puVar22[4] = puVar39[4];
                puVar22[5] = puVar39[5];
                puVar22[6] = puVar39[6];
                puVar1 = puVar39 + 7;
                puVar50 = puVar22 + 8;
                puVar39 = puVar39 + 8;
                iVar43 = iVar43 + 8;
                puVar22[7] = *puVar1;
                puVar22 = puVar50;
              } while (iVar43 != 0);
            }
            for (; uVar19 != 0; uVar19 = uVar19 - 1) {
              *puVar50 = *puVar39;
              puVar50 = puVar50 + 1;
              puVar39 = puVar39 + 1;
            }
          }
          local_80 = *(undefined4 *)(lVar33 + lVar36 * 0x28 + 0x20);
          sVar24 = (short)*piVar55;
          sVar54 = *psVar53;
          if (0 < (int)sVar54 + (int)sVar24) {
            iVar43 = (int)sVar24;
            uVar25 = 0;
            while( true ) {
              uVar15 = uVar25 >> 5;
              uVar19 = local_90[uVar15];
              uVar49 = 1 << (ulong)(uVar25 & 0x1f);
              iVar44 = *piVar47;
              if ((int)sVar24 <= (int)uVar25) {
                iVar44 = *(int *)(lVar26 + (long)(int)uVar18 * 0x10 + 4) - (int)sVar24;
              }
              if ((uVar19 & uVar49) != 0) {
                lVar33 = *(long *)(*(long *)(param_1 + 8) + 0x28);
                uVar11 = *(uint *)(lVar33 + (long)(int)(iVar44 + uVar25) * 0x14 + 0xc);
                if (uVar11 != 0xffffffff) {
                  if (uVar11 != local_c0[0]) {
                    local_a8[0] = *(uint *)(lVar33 + (long)(int)(iVar44 + uVar25) * 0x14 + 8);
                    local_a0[0] = uVar11;
                    FUN_030e5c38(param_1,local_a0,local_a8);
                    uVar19 = local_90[uVar15];
                  }
                  local_90[uVar15] = uVar19 & (uVar49 ^ 0xffffffff);
                }
              }
              if ((iVar43 + sVar54) - 1U == uVar25) break;
              sVar24 = (short)*piVar55;
              uVar25 = uVar25 + 1;
            }
          }
          uVar18 = local_c0[0];
          bVar9 = local_98._5_1_ == '\0';
          if (bVar9) {
            if ((uint)local_98 != 0) {
              local_98._0_5_ = (uint5)(uint)local_98;
              iVar43 = (int)param_11[1];
              lVar26 = (long)iVar43;
              if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) <= iVar43) {
                FUN_030e71f8(param_11,lVar26 + 1);
                iVar43 = (int)param_11[1];
              }
              puVar30 = (undefined1 *)(*param_11 + (long)iVar43 * 0xc);
              *puVar30 = 2;
              *(uint *)(puVar30 + 4) = uVar18;
              *(int *)(param_11 + 1) = (int)(lVar26 + 1);
              local_70[0] = local_c0[0];
              local_78[0] = 0xffffffff;
              FUN_030e7bd4(param_1,local_70,local_78,puVar48);
              iVar43 = FUN_030e98c8(plVar2,local_c0);
              if (*(int *)(param_1 + 0x38) == iVar43) {
                iVar44 = iVar43 + 1;
                if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) <= iVar43) {
                  FUN_030e99c4(plVar2,(long)iVar44);
                  iVar43 = *(int *)(param_1 + 0x38);
                }
                uVar41 = local_88;
                puVar50 = local_90;
                lVar26 = *plVar2;
                puVar51 = (uint *)(lVar26 + (long)iVar43 * 0x28);
                *puVar51 = local_c0[0];
                lVar33 = (long)iVar43;
                puVar46 = puVar51 + 4;
                puVar46[0] = 0;
                puVar46[1] = 0;
                puVar51[2] = (uint)local_98;
                *(undefined2 *)(puVar51 + 3) = local_98._4_2_;
                puVar31 = puVar51 + 7;
                puVar51 = puVar51 + 6;
                puVar51[0] = 0;
                puVar51[1] = 0x80000000;
                uVar18 = (uint)local_88;
                if ((int)(uint)local_88 < 1) goto LAB_030e4768;
                puVar39 = (undefined4 *)
                          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                    (PTR_PTR_047d1a50,(local_88 & 0xffffffff) << 2);
                uVar25 = uVar18 & 7;
                *(undefined4 **)puVar46 = puVar39;
                *puVar51 = uVar18;
                *puVar31 = uVar18;
                if (6 < uVar18 - 1) {
                  iVar43 = -(uVar18 & 0xfffffff8);
                  puVar22 = puVar39;
                  do {
                    *puVar22 = *puVar50;
                    puVar22[1] = puVar50[1];
                    puVar22[2] = puVar50[2];
                    puVar22[3] = puVar50[3];
                    puVar22[4] = puVar50[4];
                    puVar22[5] = puVar50[5];
                    puVar22[6] = puVar50[6];
                    puVar1 = puVar50 + 7;
                    puVar39 = puVar22 + 8;
                    puVar50 = puVar50 + 8;
                    iVar43 = iVar43 + 8;
                    puVar22[7] = *puVar1;
                    puVar22 = puVar39;
                  } while (iVar43 != 0);
                }
                if ((uVar41 & 7) != 0) {
                  do {
                    uVar25 = uVar25 - 1;
                    *puVar39 = *puVar50;
                    puVar39 = puVar39 + 1;
                    puVar50 = puVar50 + 1;
                  } while (uVar25 != 0);
                }
                goto LAB_030e4b24;
              }
              goto LAB_030e4604;
            }
            iVar43 = (int)param_11[1];
            lVar26 = (long)iVar43;
            if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) <= iVar43) {
              FUN_030e71f8(param_11,lVar26 + 1);
              iVar43 = (int)param_11[1];
            }
            puVar30 = (undefined1 *)(*param_11 + (long)iVar43 * 0xc);
            *puVar30 = 3;
            *(uint *)(puVar30 + 4) = uVar18;
            *(int *)(param_11 + 1) = (int)(lVar26 + 1);
            local_70[0] = local_c0[0];
            local_78[0] = 0xffffffff;
            FUN_030e2538(param_1,local_70,local_78,puVar48);
            lVar26 = FUN_030e7e50(plVar2,local_c0);
            if (lVar26 != 0) {
              FUN_030e7ec4(plVar2,lVar26);
            }
          }
          else {
            local_98._0_5_ = (uint5)(uint)local_98;
            iVar43 = (int)param_11[1];
            lVar26 = (long)iVar43;
            if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) <= iVar43) {
              FUN_030e71f8(param_11,lVar26 + 1);
              iVar43 = (int)param_11[1];
            }
            puVar30 = (undefined1 *)(*param_11 + (long)iVar43 * 0xc);
            *puVar30 = 1;
            *(uint *)(puVar30 + 4) = uVar18;
            *(int *)(param_11 + 1) = (int)(lVar26 + 1);
            local_b0[0] = local_c0[0];
            local_70[0] = local_c0[0];
            local_78[0] = 0xffffffff;
            FUN_030e7bd4(param_1,local_70,local_78,puVar48);
            lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)local_b0[0] * 0x10;
            uVar13 = *(ushort *)(lVar26 + 8);
            uVar14 = *(ushort *)(lVar26 + 10);
            lVar26 = FUN_030e94b4(plVar4,local_b0);
            if (lVar26 == 0) {
              uVar25 = 0;
              uVar18 = 0xffffffff;
            }
            else {
              uVar18 = *(uint *)(lVar26 + 4);
              uVar25 = ((int)lVar26 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
            }
            lVar26 = *plVar4;
            piVar47 = (int *)(lVar26 + (long)(int)(uVar18 | uVar25) * 0x18 + 0x10);
            if (0 < *piVar47) {
              lVar40 = 0;
              lVar33 = 0;
              iVar43 = (uint)uVar14 + (uint)uVar13;
              do {
                uVar15 = local_b0[0];
                lVar36 = *(long *)(lVar26 + (long)(int)(uVar18 | uVar25) * 0x18 + 8);
                uVar19 = iVar43 + (int)lVar33;
                sVar24 = (short)uVar19;
                uVar49 = *(uint *)(lVar36 + lVar40);
                if (uVar49 == local_b0[0]) {
                  iVar44 = *(int *)(lVar36 + lVar40 + 4);
                  if (lVar33 < iVar44) {
                    uVar49 = iVar44 + iVar43;
                    sVar5 = (short)uVar49;
                    sVar54 = sVar5;
                    if ((uVar49 & 0xffff) <= (uVar19 & 0xffff)) {
                      sVar54 = sVar24;
                      sVar24 = sVar5;
                    }
                    iVar44 = (int)param_11[3];
                    lVar36 = (long)iVar44 + 1;
                    if ((int)(*(uint *)((long)param_11 + 0x1c) & 0x7fffffff) <= iVar44) {
                      FUN_030e84cc(puVar48,lVar36);
                      iVar44 = (int)param_11[3];
                    }
                    puVar31 = (uint *)(param_11[2] + (long)iVar44 * 0x10);
                    *puVar31 = uVar15;
                    puVar31[1] = uVar15;
                    *(short *)(puVar31 + 2) = sVar24;
                    goto LAB_030e4510;
                  }
                }
                else if (-1 < (int)uVar49) {
                  uVar19 = local_b0[0];
                  uVar15 = uVar49;
                  if ((int)uVar49 <= (int)local_b0[0]) {
                    uVar19 = uVar49;
                    uVar15 = local_b0[0];
                  }
                  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (ulong)uVar49 * 0x10;
                  sVar54 = *(short *)(lVar8 + 10) + *(short *)(lVar8 + 8) +
                           (short)*(undefined4 *)(lVar36 + lVar40 + 4);
                  sVar5 = sVar24;
                  if ((int)uVar49 <= (int)local_b0[0]) {
                    sVar5 = sVar54;
                    sVar54 = sVar24;
                  }
                  iVar44 = (int)param_11[3];
                  lVar36 = (long)iVar44 + 1;
                  if ((int)(*(uint *)((long)param_11 + 0x1c) & 0x7fffffff) <= iVar44) {
                    FUN_030e84cc(puVar48,lVar36);
                    iVar44 = (int)param_11[3];
                  }
                  puVar31 = (uint *)(param_11[2] + (long)iVar44 * 0x10);
                  *puVar31 = uVar19;
                  puVar31[1] = uVar15;
                  *(short *)(puVar31 + 2) = sVar5;
LAB_030e4510:
                  *(short *)((long)puVar31 + 10) = sVar54;
                  *(undefined1 *)(puVar31 + 3) = 3;
                  *(int *)(param_11 + 3) = (int)lVar36;
                }
                lVar33 = lVar33 + 1;
                lVar40 = lVar40 + 8;
              } while (lVar33 < *piVar47);
            }
            iVar43 = FUN_030e98c8(plVar2,local_c0);
            if (*(int *)(param_1 + 0x38) == iVar43) {
              iVar44 = iVar43 + 1;
              if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) <= iVar43) {
                FUN_030e99c4(plVar2,(long)iVar44);
                iVar43 = *(int *)(param_1 + 0x38);
              }
              uVar41 = local_88;
              puVar50 = local_90;
              lVar26 = *plVar2;
              puVar51 = (uint *)(lVar26 + (long)iVar43 * 0x28);
              *puVar51 = local_c0[0];
              lVar33 = (long)iVar43;
              puVar46 = puVar51 + 4;
              puVar46[0] = 0;
              puVar46[1] = 0;
              puVar51[2] = (uint)local_98;
              *(undefined2 *)(puVar51 + 3) = local_98._4_2_;
              puVar31 = puVar51 + 7;
              puVar51 = puVar51 + 6;
              puVar51[0] = 0;
              puVar51[1] = 0x80000000;
              uVar18 = (uint)local_88;
              if ((int)(uint)local_88 < 1) {
LAB_030e4768:
                puVar46[0] = 0;
                puVar46[1] = 0;
                *puVar51 = 0;
                *puVar31 = 0x80000000;
              }
              else {
                puVar39 = (undefined4 *)
                          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                    (PTR_PTR_047d1a50,(local_88 & 0xffffffff) << 2);
                uVar25 = uVar18 & 7;
                *(undefined4 **)puVar46 = puVar39;
                *puVar51 = uVar18;
                *puVar31 = uVar18;
                if (6 < uVar18 - 1) {
                  iVar43 = -(uVar18 & 0xfffffff8);
                  puVar22 = puVar39;
                  do {
                    *puVar22 = *puVar50;
                    puVar22[1] = puVar50[1];
                    puVar22[2] = puVar50[2];
                    puVar22[3] = puVar50[3];
                    puVar22[4] = puVar50[4];
                    puVar22[5] = puVar50[5];
                    puVar22[6] = puVar50[6];
                    puVar1 = puVar50 + 7;
                    puVar39 = puVar22 + 8;
                    puVar50 = puVar50 + 8;
                    iVar43 = iVar43 + 8;
                    puVar22[7] = *puVar1;
                    puVar22 = puVar39;
                  } while (iVar43 != 0);
                }
                if ((uVar41 & 7) != 0) {
                  do {
                    uVar25 = uVar25 - 1;
                    *puVar39 = *puVar50;
                    puVar39 = puVar39 + 1;
                    puVar50 = puVar50 + 1;
                  } while (uVar25 != 0);
                }
              }
LAB_030e4b24:
              *(undefined4 *)(lVar26 + lVar33 * 0x28 + 0x20) = local_80;
              *(int *)(param_1 + 0x38) = iVar44;
            }
            else {
LAB_030e4604:
              puVar50 = local_90;
              lVar33 = *plVar2;
              lVar26 = lVar33 + (long)iVar43 * 0x28;
              lVar40 = (long)iVar43;
              *(uint *)(lVar26 + 8) = (uint)local_98;
              *(undefined2 *)(lVar26 + 0xc) = local_98._4_2_;
              if ((undefined8 *)(lVar26 + 8) != &local_98) {
                iVar43 = (uint)local_88;
                lVar36 = (long)(int)(uint)local_88;
                if ((int)(*(uint *)(lVar33 + lVar40 * 0x28 + 0x1c) & 0x7fffffff) <
                    (int)(uint)local_88) {
                  FUN_02eb1edc((undefined8 *)(lVar26 + 0x10),PTR_PTR_047d1a50,lVar36);
                }
                memcpy(*(void **)(lVar26 + 0x10),puVar50,lVar36 << 2);
                *(int *)(lVar33 + lVar40 * 0x28 + 0x18) = iVar43;
              }
              *(undefined4 *)(lVar33 + lVar40 * 0x28 + 0x20) = local_80;
            }
          }
          uVar41 = local_88;
          uVar42 = (ulong)local_88._4_4_;
          local_88 = (ulong)local_88._4_4_ << 0x20;
          if ((-1 < (long)uVar41) && (local_90 != (undefined4 *)0x0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_90,uVar42 << 2);
          }
        }
      }
      iVar43 = *(int *)PTR_DAT_047e4f38;
      lVar26 = *(long *)(lVar16 + 0x1000b8);
      if (lVar26 == 0) {
        lVar26 = FUN_00e5d3b4();
        *(long *)(lVar16 + 0x1000b8) = lVar26;
      }
      if (*(long *)(lVar26 + (long)iVar43 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      puVar35 = puVar35 + 1;
    } while (puVar35 != puVar32);
  }
  if (param_6 != param_7) {
    do {
      iVar43 = *param_6;
      lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar43 * 0x10;
      if ((int)*(short *)(lVar26 + 10) + (int)*(short *)(lVar26 + 8) < 0x17) {
        local_98 = CONCAT44(local_98._4_4_,iVar43);
        local_70[0] = 0xffffffff;
        FUN_030e55e0(param_1,param_1 + 0x10,&local_98,local_70);
      }
      else {
        local_98 = CONCAT44(local_98._4_4_,iVar43);
        local_70[0] = 0xffffffff;
        FUN_030e5750(param_1,param_1 + 0x30,&local_98,local_70);
      }
      param_6 = param_6 + 1;
    } while (param_7 != param_6);
  }
  if (param_9 != param_10) {
    do {
      uVar18 = *param_9;
      lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)(int)uVar18 * 0x10;
      if ((int)*(short *)(lVar26 + 10) + (int)*(short *)(lVar26 + 8) < 0x17) {
        local_78[0] = uVar18;
        lVar26 = FUN_030e7a5c(param_1 + 0x10,local_78);
        if (lVar26 == 0) {
          uVar41 = 0xffffffff00000000;
          uVar42 = 0xffffffff;
        }
        else {
          uVar42 = (ulong)*(uint *)(lVar26 + 4);
          uVar41 = (lVar26 - *(long *)(param_1 + 0x20)) * 0x20000000;
        }
        local_98 = CONCAT44(local_98._4_4_,local_78[0]);
        local_70[0] = 0xffffffff;
        FUN_030e80bc(param_1,param_1 + 0x10,uVar42 | uVar41,&local_98,local_70,param_11);
      }
      else {
        local_a0[0] = uVar18;
        lVar26 = FUN_030e7e50(param_1 + 0x30,local_a0);
        if (lVar26 == 0) {
          uVar41 = 0xffffffff00000000;
          uVar42 = 0xffffffff;
        }
        else {
          uVar42 = (ulong)*(uint *)(lVar26 + 4);
          uVar41 = (lVar26 - *(long *)(param_1 + 0x40)) * 0x20000000;
        }
        local_98 = CONCAT44(local_98._4_4_,local_a0[0]);
        local_70[0] = 0xffffffff;
        FUN_030e81fc(param_1,param_1 + 0x30,uVar42 | uVar41,&local_98,local_70,param_11);
      }
      param_9 = param_9 + 1;
    } while (param_10 != param_9);
  }
  puVar17 = PTR_PTR_047d1a50;
  uVar18 = (uint)param_11[1];
  if (uVar18 != 0) {
    if ((int)uVar18 < 1) {
      puVar23 = (undefined8 *)0x0;
      lVar26 = 0;
      uVar25 = 0x80000000;
      uVar41 = (ulong)uVar18;
      uVar18 = 0x80000000;
    }
    else {
      puVar23 = (undefined8 *)
                (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                          (PTR_PTR_047d1a50 + 0x20,(ulong)uVar18 << 3);
      uVar25 = (uint)param_11[1];
      uVar41 = (ulong)uVar25;
      if ((int)uVar25 < 1) {
        lVar26 = 0;
        uVar25 = 0x80000000;
      }
      else {
        lVar26 = (**(code **)(*(long *)(puVar17 + 0x20) + 0x18))(puVar17 + 0x20,uVar41 << 3);
        uVar41 = (ulong)(uint)param_11[1];
      }
    }
    uVar19 = FUN_030e8620(*param_11,uVar41,puVar23,lVar26);
    local_98 = 0;
    local_90 = (undefined4 *)0x8000000000000000;
    if ((int)uVar19 < 1) {
      local_90._0_4_ = 0;
    }
    else {
      FUN_030e88dc(&local_98,uVar19);
    }
    if ((uint)local_90 != uVar19) {
      local_90 = (undefined4 *)CONCAT44(local_90._4_4_,uVar19);
    }
    iVar43 = *(int *)PTR_DAT_047e4f38;
    lVar33 = *(long *)(lVar16 + 0x1000b8);
    if (lVar33 == 0) {
      lVar33 = FUN_00e5d3b4();
      *(long *)(lVar16 + 0x1000b8) = lVar33;
    }
    if (*(long *)(lVar33 + (long)iVar43 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    if (0 < (int)uVar19) {
      lVar33 = 0;
      puVar37 = puVar23;
      do {
        puVar38 = (undefined1 *)*puVar37;
        puVar30 = (undefined1 *)(local_98 + lVar33);
        *puVar30 = *puVar38;
        *(undefined4 *)(puVar30 + 4) = *(undefined4 *)(puVar38 + 4);
        lVar33 = lVar33 + 0xc;
        *(undefined4 *)(puVar30 + 8) = *(undefined4 *)(puVar38 + 8);
        puVar37 = puVar37 + 1;
      } while ((ulong)uVar19 * 0xc != lVar33);
    }
    puVar17 = PTR_PTR_047d1a50;
    if (&local_98 != param_11) {
      FUN_030e8a7c(param_11,PTR_PTR_047d1a50);
      FUN_030e8a7c(&local_98,puVar17);
      uVar42 = *param_11;
      *param_11 = local_98;
      uVar41 = param_11[1];
      *(uint *)(param_11 + 1) = (uint)local_90;
      *(uint *)((long)param_11 + 0xc) = local_90._4_4_;
      local_98 = uVar42;
      local_90 = (undefined4 *)uVar41;
    }
    iVar43 = *(int *)PTR_DAT_047e4f38;
    lVar33 = *(long *)(lVar16 + 0x1000b8);
    if (lVar33 == 0) {
      lVar33 = FUN_00e5d3b4();
      *(long *)(lVar16 + 0x1000b8) = lVar33;
    }
    if (*(long *)(lVar33 + (long)iVar43 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    uVar41 = (ulong)local_90;
    uVar42 = (ulong)local_90._4_4_;
    local_90 = (undefined4 *)((ulong)local_90._4_4_ << 0x20);
    if ((-1 < (long)uVar41) && (local_98 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar42 * 0xc);
    }
    if ((lVar26 != 0) && (-1 < (int)uVar25)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,lVar26,(ulong)uVar25 << 3);
    }
    if ((-1 < (int)uVar18) && (puVar23 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,puVar23,(ulong)uVar18 << 3);
    }
  }
  puVar17 = PTR_PTR_047d1a50;
  uVar18 = (uint)param_11[3];
  if (uVar18 != 0) {
    puVar48 = param_11 + 2;
    if ((int)uVar18 < 1) {
      puVar23 = (undefined8 *)0x0;
      lVar26 = 0;
      uVar25 = 0x80000000;
      uVar41 = (ulong)uVar18;
      uVar18 = 0x80000000;
    }
    else {
      puVar23 = (undefined8 *)
                (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                          (PTR_PTR_047d1a50 + 0x20,(ulong)uVar18 << 3);
      uVar25 = (uint)param_11[3];
      uVar41 = (ulong)uVar25;
      if ((int)uVar25 < 1) {
        lVar26 = 0;
        uVar25 = 0x80000000;
      }
      else {
        lVar26 = (**(code **)(*(long *)(puVar17 + 0x20) + 0x18))(puVar17 + 0x20,uVar41 << 3);
        uVar41 = (ulong)(uint)param_11[3];
      }
    }
    uVar19 = FUN_030e8b70(*puVar48,uVar41,puVar23,lVar26);
    local_98 = 0;
    local_90 = (undefined4 *)0x8000000000000000;
    if ((int)uVar19 < 1) {
      local_90._0_4_ = 0;
    }
    else {
      FUN_030e8e58(&local_98,uVar19);
    }
    if ((uint)local_90 != uVar19) {
      local_90 = (undefined4 *)CONCAT44(local_90._4_4_,uVar19);
    }
    iVar43 = *(int *)PTR_DAT_047e4f38;
    lVar33 = *(long *)(lVar16 + 0x1000b8);
    if (lVar33 == 0) {
      lVar33 = FUN_00e5d3b4();
      *(long *)(lVar16 + 0x1000b8) = lVar33;
    }
    if (*(long *)(lVar33 + (long)iVar43 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    if (0 < (int)uVar19) {
      lVar33 = 0;
      puVar37 = puVar23;
      do {
        puVar39 = (undefined4 *)*puVar37;
        puVar50 = (undefined4 *)(local_98 + lVar33);
        *puVar50 = *puVar39;
        puVar50[1] = puVar39[1];
        *(undefined2 *)(puVar50 + 2) = *(undefined2 *)(puVar39 + 2);
        *(undefined2 *)((long)puVar50 + 10) = *(undefined2 *)((long)puVar39 + 10);
        lVar33 = lVar33 + 0x10;
        *(undefined1 *)(puVar50 + 3) = *(undefined1 *)(puVar39 + 3);
        puVar37 = puVar37 + 1;
      } while ((ulong)uVar19 * 0x10 != lVar33);
    }
    puVar17 = PTR_PTR_047d1a50;
    if (&local_98 != puVar48) {
      FUN_030e8fa8(puVar48,PTR_PTR_047d1a50);
      FUN_030e8fa8(&local_98,puVar17);
      uVar42 = param_11[2];
      param_11[2] = local_98;
      uVar41 = param_11[3];
      *(uint *)(param_11 + 3) = (uint)local_90;
      *(uint *)((long)param_11 + 0x1c) = local_90._4_4_;
      local_98 = uVar42;
      local_90 = (undefined4 *)uVar41;
    }
    iVar43 = *(int *)PTR_DAT_047e4f38;
    lVar33 = *(long *)(lVar16 + 0x1000b8);
    if (lVar33 == 0) {
      lVar33 = FUN_00e5d3b4();
      *(long *)(lVar16 + 0x1000b8) = lVar33;
    }
    if (*(long *)(lVar33 + (long)iVar43 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    uVar41 = (ulong)local_90;
    uVar42 = (ulong)local_90._4_4_;
    local_90 = (undefined4 *)((ulong)local_90._4_4_ << 0x20);
    if ((-1 < (long)uVar41) && (local_98 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar42 << 4);
    }
    if ((lVar26 != 0) && (-1 < (int)uVar25)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,lVar26,(ulong)uVar25 << 3);
    }
    if ((-1 < (int)uVar18) && (puVar23 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,puVar23,(ulong)uVar18 << 3);
    }
  }
  iVar43 = *(int *)PTR_DAT_047e4f38;
  lVar26 = *(long *)(lVar16 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar26;
  }
  if (*(long *)(lVar26 + (long)iVar43 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if ((int)local_118 != 0) {
    lVar26 = (long)(int)local_118 * 0x30;
    do {
      uVar18 = *(uint *)((long)puVar20 + lVar26 + -0x1c);
      *(undefined4 *)((long)puVar20 + lVar26 + -0x20) = 0;
      if ((-1 < (int)uVar18) && (lVar33 = *(long *)((long)puVar20 + lVar26 + -0x28), lVar33 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar33,(ulong)uVar18 << 2);
      }
      lVar33 = lVar26 + -0x30;
      *(undefined8 *)((long)puVar20 + lVar26 + -0x28) = 0;
      *(undefined4 *)((long)puVar20 + lVar26 + -0x1c) = 0x80000000;
      lVar26 = lVar33;
    } while (lVar33 != 0);
  }
  iVar43 = *(int *)PTR_DAT_047e4f38;
  lVar26 = *(long *)(lVar16 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar26;
  }
  if (*(long *)(lVar26 + (long)iVar43 * 8 + 1000) != 0) {
    FUN_03231bdc();
    lVar26 = *(long *)(lVar16 + 0x1000b8);
  }
  iVar43 = *(int *)PTR_DAT_047e4f38;
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar26;
  }
  if (*(long *)(lVar26 + (long)iVar43 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  uVar18 = local_d0._4_4_;
  uVar41 = (ulong)local_d0._4_4_;
  local_d0 = (ulong)local_d0._4_4_ << 0x20;
  if ((-1 < (int)uVar18) && (local_d8 != (uint *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_d8,uVar41 << 2);
  }
  local_d8 = (uint *)0x0;
  local_d0 = CONCAT44(0x80000000,(uint)local_d0);
  iVar43 = *(int *)PTR_DAT_047e4f38;
  lVar26 = *(long *)(lVar16 + 0x1000b8);
  if (lVar26 == 0) {
    lVar26 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar26;
  }
  if (*(long *)(lVar26 + (long)iVar43 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  uVar42 = local_d0;
  uVar41 = local_d0 >> 0x20;
  local_d0 = uVar41 << 0x20;
  if ((-1 < (long)uVar42) && (local_d8 != (uint *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_d8,uVar41 << 2);
  }
  if (local_148 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar20,puVar27);
    return;
  }
  uVar41 = (long)puVar27 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_148 + 0x28) < uVar41) ||
     (*(long *)(local_148 + 0x38) != uVar41 + (long)puVar20)) {
    if (puVar20 == (uint *)0x0) {
      return;
    }
    if (*(ulong *)(local_148 + 0x28) < uVar41 + 0x40) {
      *(int *)(*(long *)(local_148 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_148 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_148 + 0x10) + 0x18))
                (*(long **)(local_148 + 0x10),(long)puVar20 - (long)(int)puVar20[-1],uVar41 + 0x44);
      return;
    }
    if (*(long *)(local_148 + 0x38) != uVar41 + (long)puVar20) {
      FUN_031cf778(local_148);
      return;
    }
    *(uint **)(local_148 + 0x38) = puVar20;
  }
  else {
    *(uint **)(local_148 + 0x38) = puVar20;
    if (*(uint **)(local_148 + 0x48) != puVar20) {
      return;
    }
  }
  FUN_031cf578(local_148);
  return;
}


