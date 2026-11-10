/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03369998; name: FUN_03369998
 */


void FUN_03369998(undefined8 *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  char cVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined *puVar13;
  undefined1 auVar14 [8];
  int iVar15;
  undefined8 *puVar16;
  size_t sVar17;
  void *pvVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined2 *puVar21;
  long *plVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  undefined1 uVar27;
  uint uVar28;
  byte *pbVar29;
  long lVar30;
  ulong uVar31;
  long *plVar32;
  ulong *puVar33;
  char *pcVar34;
  undefined1 auVar35 [16];
  undefined1 local_2b0 [8];
  undefined8 local_2a8;
  ulong local_2a0;
  undefined **local_298;
  undefined *local_290;
  undefined *local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  byte *local_240;
  ulong local_238;
  undefined1 auStack_230 [40];
  undefined4 local_208;
  ulong local_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  void *local_78;
  undefined8 local_70;
  
  local_78 = (void *)0x0;
  local_70 = -0x8000000000000000;
  plVar22 = (long *)PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 6) != 0) {
    plVar32 = (long *)param_1[5];
    plVar8 = plVar32 + *(int *)(param_1 + 6);
    ppuVar3 = (undefined **)(PTR_DAT_047e5b58 + 0x10);
    puVar4 = PTR_DAT_047e5b60 + 0x10;
    puVar5 = PTR_PTR_047d1a50 + 0x20;
LAB_03369a3c:
    if (1 < *(ulong *)*plVar32) {
      if (*(int *)(*plVar32 + 0x1c) == 2) {
        *(undefined1 *)(param_1 + 0x13) = 1;
      }
      uStack_280 = 0x4000;
      local_278 = 0xffffffff;
      local_260 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_25c = 0x80000000;
      local_258 = 0;
      uStack_250 = 0x8000000000000000;
      local_248 = 0;
      local_240 = (byte *)0x0;
      local_238 = 0;
      local_120 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_11c = 0x80000000;
      local_fc = 0x80000002;
      local_c0 = 0x8000000300000000;
      local_100 = 0;
      local_d8 = 0;
      local_d0 = 0x8000000000000000;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0x8000000000000000;
      local_88 = 0;
      local_80 = 1;
      local_7e = 0;
      local_118 = 0;
      uStack_110 = 0x8000000000000000;
      local_298 = ppuVar3;
      local_290 = puVar4;
      local_288 = puVar5;
      local_108 = auStack_f8;
      local_c8 = auStack_b8;
      memset(auStack_230,0,0x100);
      local_240 = (byte *)FUN_03368740(param_1,*plVar32,*param_1);
      puVar13 = PTR_DAT_047d1a08;
      local_1b0 = *(ulong *)*plVar32 & 0xfffffffffffffffe;
      pbVar29 = local_240;
      if ((*local_240 & 1) == 0) {
        do {
          pbVar29 = *(byte **)(pbVar29 + 8);
        } while ((*pbVar29 & 1) == 0);
      }
      uVar28 = 0;
      if ((*(ulong *)(pbVar29 + 0x10) & 0x1f) == 1 && local_240 != (byte *)0x0) {
        uVar28 = 0x11;
      }
      uStack_1a8 = (ulong)((uVar28 << 0x10 | (uVar28 >> 4) << 0x15) ^ 0x200000);
      local_1a0 = param_1[10];
      local_238 = local_238 | 0xf0000;
      uStack_198 = 0;
      if ((*(byte *)(*plVar32 + 0x20) >> 1 & 1) != 0) {
        local_2b0 = (undefined1  [8])0x8;
        puVar16 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,local_2b0,0);
        if (*(code **)(puVar13 + 0x10) != (code *)0x0) {
          (**(code **)(puVar13 + 0x10))(puVar16,"FieldNameBeforeRemoval");
        }
        *puVar16 = 0;
        iVar23 = *(int *)(param_1 + 0x12);
        lVar30 = (long)iVar23;
        lVar26 = lVar30 + 1;
        if ((int)(*(uint *)((long)param_1 + 0x94) & 0x7fffffff) <= iVar23) {
          FUN_0336f908(param_1 + 0x11,lVar26);
          iVar23 = *(int *)(param_1 + 0x12);
        }
        *(undefined8 **)(param_1[0x11] + (long)iVar23 * 8) = puVar16;
        *(int *)(param_1 + 0x12) = (int)lVar26;
        puVar33 = *(ulong **)(param_1[0x11] + lVar30 * 8);
        uVar31 = *puVar33;
        pcVar34 = (char *)(*(ulong *)*plVar32 & 0xfffffffffffffffe);
        if ((char *)(uVar31 & 0xfffffffffffffffe) != pcVar34) {
          if (pcVar34 == (char *)0x0) {
            uVar25 = 0;
          }
          else {
            sVar17 = strlen(pcVar34);
            sVar17 = (size_t)((int)sVar17 + 1);
            pvVar18 = (void *)(**(code **)(*plVar22 + 0x18))(plVar22,sVar17);
            memcpy(pvVar18,pcVar34,sVar17);
            uVar25 = (ulong)pvVar18 | 1;
          }
          *puVar33 = uVar25;
          if ((uVar31 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar31 - 1,0);
          }
          plVar22 = (long *)PTR_PTR_047d1a50;
LAB_03369cec:
          auVar35._8_8_ = PTR_DAT_047e6798;
          auVar35._0_8_ = puVar33;
          local_2a0 = 0;
          local_2a8 = (undefined *)0x0;
          puVar16 = (undefined8 *)PTR_DAT_047e6798;
          do {
            uVar28 = (uint)*puVar16;
            if ((uVar28 >> 0xb & 1) != 0) {
              uVar31 = CONCAT44(uVar28,uVar28) & 0x7ff000007ff;
              if ((code *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar31) +
                                               POPCOUNT((char)(uVar31 >> 8))) + 2] != (code *)0x0) {
                auVar35 = (*(code *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar31) +
                                                         POPCOUNT((char)(uVar31 >> 8))) + 2])
                                    (puVar33);
                local_2a8 = auVar35._8_8_;
                if (local_2a8 != (undefined *)0x0) goto LAB_03369d54;
                uVar31 = 0;
                goto LAB_03369ddc;
              }
              break;
            }
            puVar16 = (undefined8 *)puVar16[1];
          } while (puVar16 != (undefined8 *)0x0);
          local_2a8 = PTR_DAT_047e6798;
LAB_03369d54:
          puVar33 = auVar35._8_8_;
          local_2b0 = auVar35._0_8_;
          auVar35._8_8_ = local_2a8;
          auVar35._0_8_ = local_2b0;
          auVar12._8_8_ = local_2a8;
          auVar12._0_8_ = local_2b0;
          uVar31 = *puVar33;
          if (((uint)uVar31 >> 2 & 1) == 0) goto code_r0x03369d5c;
          uVar31 = puVar33[(uVar31 >> 1 & 1) + (uVar31 & 1) + 2];
          if ((uVar31 & 1) != 0) {
            piVar6 = (int *)((uVar31 & 0xfffffffffffffffe) + 8);
            do {
              cVar10 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar11) {
                *piVar6 = *piVar6 + 1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if ((local_2a0 & 1) != 0) {
              plVar19 = (long *)(local_2a0 & 0xfffffffffffffffe);
              plVar7 = plVar19 + 1;
              do {
                lVar26 = *plVar7;
                cVar10 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar11) {
                  *(int *)plVar7 = (int)lVar26 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if ((plVar19 != (long *)0x0) && ((int)lVar26 == 1)) {
                local_2a0 = uVar31;
                (**(code **)(*plVar19 + 8))();
                auVar35._8_8_ = local_2a8;
                auVar35._0_8_ = local_2b0;
                uVar31 = local_2a0;
              }
            }
            goto LAB_03369de0;
          }
          goto LAB_03369ddc;
        }
        if (puVar33 != (ulong *)0x0) goto LAB_03369cec;
        uVar31 = 0;
        auVar35 = ZEXT816(0);
        goto LAB_03369ddc;
      }
      goto LAB_03369e24;
    }
    goto LAB_03369e8c;
  }
  iVar23 = 0;
LAB_03369eac:
  pvVar18 = local_78;
  plVar32 = (long *)(*(code *)**(undefined8 **)*param_1)();
  uVar31 = (ulong)(iVar23 << 3);
  puVar21 = (undefined2 *)(**(code **)(*plVar32 + 0x18))(plVar32,uVar31 + 8);
  *puVar21 = (short)iVar23;
  puVar21[1] = 0;
  puVar21[2] = (short)iVar23;
  if (pvVar18 == (void *)0x0) {
    memset(puVar21 + 4,0,uVar31 & 0xfffffff8);
  }
  else {
    memcpy(puVar21 + 4,pvVar18,uVar31);
  }
  uVar9 = *(undefined4 *)param_1[10];
  uVar31 = CONCAT44(uVar9,uVar9) & 0x7fffff007fffff;
  *(undefined2 **)
   ((undefined4 *)param_1[10] +
   (ulong)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8)) +
                POPCOUNT((char)(uVar31 >> 0x10))) * 2 + 4) = puVar21;
  if (*(int *)(param_1 + 0xe) != 0) {
    uVar25 = (long)*(int *)(param_1 + 0xe) * 0x28 - 0x28;
    lVar26 = param_1[0xd];
    uVar31 = uVar25 / 0x28 + 1;
    if (uVar25 < 0x28) {
      uVar28 = 0;
    }
    else {
      uVar28 = 0;
      lVar30 = -(uVar31 & 0xffffffffffffffe);
      do {
        pbVar29 = (byte *)(lVar26 + 0x20);
        pbVar1 = (byte *)(lVar26 + 0x48);
        lVar26 = lVar26 + 0x50;
        uVar28 = uVar28 + ((*pbVar29 >> 1 ^ 0xffffffff) & 1) + ((*pbVar1 >> 1 ^ 0xffffffff) & 1);
        lVar30 = lVar30 + 2;
      } while (lVar30 != 0);
    }
    if ((uVar31 & 1) != 0) {
      uVar28 = uVar28 + ((*(byte *)(lVar26 + 0x20) >> 1 ^ 0xffffffff) & 1);
    }
    plVar22 = (long *)(*(code *)**(undefined8 **)*param_1)();
    puVar16 = (undefined8 *)(**(code **)(*plVar22 + 0x18))(plVar22,(ulong)uVar28 * 0x10 + 0x10);
    *puVar16 = 0;
    puVar16[1] = (ulong)uVar28;
    param_1[0x14] = puVar16;
    puVar4 = PTR_DAT_047e66c8;
    if (*(int *)(param_1 + 0xe) != 0) {
      iVar23 = 0;
      lVar26 = (long)*(int *)(param_1 + 0xe) * 0x28;
      pbVar29 = (byte *)(param_1[0xd] + 0x20);
      do {
        if ((*pbVar29 >> 1 & 1) == 0) {
          local_208 = 1;
          local_290._0_4_ = 2;
          local_290 = (undefined *)0x8000008000000002;
          uVar27 = 0x74;
          if ((*pbVar29 & 1) != 0) {
            uVar27 = 0x76;
          }
          local_288 = (undefined *)
                      (CONCAT71((int7)((ulong)local_288 >> 8),uVar27) & 0xffffffffffff00ff);
          pcVar34 = (char *)(*(ulong *)(pbVar29 + -0x20) & 0xfffffffffffffffe);
          local_298 = &local_288;
          if (pcVar34 != (char *)0x0) {
            sVar17 = strlen(pcVar34);
            iVar15 = (int)sVar17;
            iVar2 = iVar15 + 2;
            if (iVar15 < 0x7f) {
              iVar24 = 2;
            }
            else {
              FUN_030b4a20(&local_298,PTR_PTR_047d1a50 + 0x20,(long)iVar2);
              iVar24 = (int)local_290;
            }
            if ((iVar24 <= (int)((long)iVar15 + 1)) || (iVar2 < iVar24)) {
              local_290 = (undefined *)CONCAT44(local_290._4_4_,iVar2);
            }
            *(undefined1 *)((long)local_298 + (long)iVar15 + 1) = 0;
            memmove((undefined *)((long)local_298 + 1),pcVar34,(long)((int)local_290 + -2));
          }
          uVar20 = FUN_03335924(*(undefined8 *)puVar4,local_298,
                                ~(uint)local_298 + (uint)local_298 + (int)local_290,1);
          *(undefined8 *)(param_1[0x14] + (long)iVar23 * 0x10 + 0x18) = uVar20;
          if ((*pbVar29 & 1) == 0) {
            uVar20 = FUN_03368740(param_1,*(undefined8 *)(pbVar29 + -0x18),*param_1);
            *(undefined8 *)(pbVar29 + -8) = uVar20;
          }
          else {
            uVar20 = *(undefined8 *)(pbVar29 + -0x10);
          }
          puVar5 = local_290;
          *(undefined8 *)(param_1[0x14] + (long)iVar23 * 0x10 + 0x10) = uVar20;
          iVar23 = iVar23 + 1;
          local_290 = (undefined *)((ulong)local_290 & 0xffffffff00000000);
          if ((-1 < (long)puVar5) && (local_298 != (undefined **)0x0)) {
            (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
          }
        }
        else if ((*pbVar29 & 1) == 0) {
          uVar20 = FUN_03368740(param_1,*(undefined8 *)(pbVar29 + -0x18),*param_1);
          *(undefined8 *)(pbVar29 + -8) = uVar20;
        }
        lVar26 = lVar26 + -0x28;
        pbVar29 = pbVar29 + 0x28;
      } while (lVar26 != 0);
      puVar16 = (undefined8 *)param_1[0x14];
    }
    uVar9 = *(undefined4 *)param_1[10];
    uVar31 = CONCAT44(uVar9,uVar9) & 0x7fff00007fff;
    *(undefined8 **)
     ((undefined4 *)param_1[10] +
     (ulong)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8))) * 2 + 4) = puVar16;
    plVar22 = (long *)PTR_PTR_047d1a50;
  }
  lVar26 = local_70;
  uVar31 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar26) && (local_78 != (void *)0x0)) {
    (**(code **)(*plVar22 + 0x20))(plVar22,local_78,uVar31 << 3);
  }
  return;
code_r0x03369d5c:
  auVar35._8_8_ = puVar33[1];
  if (puVar33[1] == 0) goto code_r0x03369d64;
  goto LAB_03369d54;
code_r0x03369d64:
  uVar31 = 0;
  auVar35 = auVar12;
LAB_03369ddc:
LAB_03369de0:
  local_2a0 = uVar31;
  _local_2b0 = auVar35;
  FUN_031d7cac(&local_298,local_2b0);
  if ((local_2a0 & 1) != 0) {
    plVar19 = (long *)(local_2a0 & 0xfffffffffffffffe);
    plVar7 = plVar19 + 1;
    do {
      lVar26 = *plVar7;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar11) {
        *(int *)plVar7 = (int)lVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((plVar19 != (long *)0x0) && ((int)lVar26 == 1)) {
      (**(code **)(*plVar19 + 8))();
    }
  }
LAB_03369e24:
  uVar20 = (*(code *)**(undefined8 **)*param_1)();
  FUN_031d8d9c(&local_298,uVar20,local_2b0);
  auVar14 = local_2b0;
  lVar26 = (long)(int)local_70;
  if ((int)(local_70._4_4_ & 0x7fffffff) <= (int)local_70) {
    FUN_033409a8(&local_78,plVar22,lVar26 + 1);
  }
  *(undefined1 (*) [8])((long)local_78 + (long)(int)local_70 * 8) = auVar14;
  local_70 = CONCAT44(local_70._4_4_,(int)(lVar26 + 1));
  FUN_031d798c(&local_298);
LAB_03369e8c:
  plVar32 = plVar32 + 1;
  if (plVar32 == plVar8) goto code_r0x03369e98;
  goto LAB_03369a3c;
code_r0x03369e98:
  iVar23 = (int)local_70;
  goto LAB_03369eac;
}


