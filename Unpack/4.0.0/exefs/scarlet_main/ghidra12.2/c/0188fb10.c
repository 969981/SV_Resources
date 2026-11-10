/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188fb10; name: FUN_0188fb10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0188fb10(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  byte bVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  bool bVar16;
  int iVar17;
  size_t sVar18;
  ushort *puVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  byte *pbVar24;
  long lVar25;
  ulong uVar26;
  uint *puVar27;
  long lVar28;
  char *pcVar29;
  ulong uVar30;
  long *plVar31;
  undefined1 *puVar32;
  ulong uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 *local_210;
  char *pcStack_208;
  size_t local_200;
  long *local_1f8;
  undefined1 local_1f0;
  undefined1 *local_1e8;
  char *pcStack_1e0;
  size_t local_1d8;
  long *local_1d0;
  undefined1 *local_1c8;
  char *pcStack_1c0;
  size_t local_1b8;
  long *local_1b0;
  undefined1 *local_1a8;
  char *pcStack_1a0;
  size_t local_198;
  long *local_190;
  undefined1 local_188;
  undefined8 local_184;
  undefined8 local_17c;
  undefined4 local_174;
  undefined1 local_170;
  undefined8 local_16c;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined8 local_130;
  ulong uStack_128;
  undefined8 local_120;
  ulong uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined1 *local_d8;
  char *pcStack_d0;
  size_t local_c8;
  long *local_c0;
  undefined1 *local_b8;
  char *local_b0;
  size_t local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined1 local_90;
  
  if ((param_1 != (int *)0x0) && (param_2 != (undefined8 *)0x0)) {
    puVar19 = (ushort *)((long)param_1 - (long)*param_1);
    if ((4 < *puVar19) && (puVar19[2] != 0)) {
      if (*puVar19 < 7) {
        bVar16 = false;
      }
      else {
        bVar16 = false;
        if ((ulong)puVar19[3] != 0) {
          bVar16 = *(char *)((long)param_1 + (ulong)puVar19[3]) != '\0';
        }
      }
      *(bool *)(param_2 + 7) = bVar16;
      if (*(ushort *)((long)param_1 - (long)*param_1) < 9) {
        piVar22 = (int *)0x0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4];
        piVar22 = (int *)0x0;
        if (uVar20 != 0) {
          puVar27 = (uint *)((long)param_1 + uVar20);
          piVar22 = (int *)((long)puVar27 + (ulong)*puVar27);
        }
      }
      if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
         (uVar20 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar20 == 0)) {
        bVar16 = false;
      }
      else {
        bVar16 = *(char *)((long)piVar22 + uVar20) != '\0';
      }
      *(bool *)((long)param_2 + 0x3c) = bVar16;
      if (*(ushort *)((long)param_1 - (long)*param_1) < 9) {
        piVar22 = (int *)0x0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[4];
        piVar22 = (int *)0x0;
        if (uVar20 != 0) {
          puVar27 = (uint *)((long)param_1 + uVar20);
          piVar22 = (int *)((long)puVar27 + (ulong)*puVar27);
        }
      }
      uVar34 = 0;
      if ((6 < *(ushort *)((long)piVar22 - (long)*piVar22)) &&
         (uVar20 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[3], uVar20 != 0)) {
        uVar34 = *(undefined4 *)((long)piVar22 + uVar20);
      }
      *(undefined4 *)(param_2 + 8) = uVar34;
      if (*(ushort *)((long)param_1 - (long)*param_1) < 0xb) {
        piVar22 = (int *)0x0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5];
        piVar22 = (int *)0x0;
        if (uVar20 != 0) {
          puVar27 = (uint *)((long)param_1 + uVar20);
          piVar22 = (int *)((long)puVar27 + (ulong)*puVar27);
        }
      }
      if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
         (uVar20 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar20 == 0)) {
        bVar16 = false;
      }
      else {
        bVar16 = *(char *)((long)piVar22 + uVar20) != '\0';
      }
      *(bool *)((long)param_2 + 0x44) = bVar16;
      if (*(ushort *)((long)param_1 - (long)*param_1) < 0xb) {
        piVar22 = (int *)0x0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5];
        piVar22 = (int *)0x0;
        if (uVar20 != 0) {
          puVar27 = (uint *)((long)param_1 + uVar20);
          piVar22 = (int *)((long)puVar27 + (ulong)*puVar27);
        }
      }
      uVar34 = 0;
      if ((6 < *(ushort *)((long)piVar22 - (long)*piVar22)) &&
         (uVar20 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[3], uVar20 != 0)) {
        uVar34 = *(undefined4 *)((long)piVar22 + uVar20);
      }
      *(undefined4 *)(param_2 + 9) = uVar34;
      if (*(ushort *)((long)param_1 - (long)*param_1) < 0xb) {
        piVar22 = (int *)0x0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5];
        piVar22 = (int *)0x0;
        if (uVar20 != 0) {
          puVar27 = (uint *)((long)param_1 + uVar20);
          piVar22 = (int *)((long)puVar27 + (ulong)*puVar27);
        }
      }
      if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 9) ||
         (uVar20 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[4], uVar20 == 0)) {
        bVar16 = false;
      }
      else {
        bVar16 = *(char *)((long)piVar22 + uVar20) != '\0';
      }
      *(bool *)((long)param_2 + 0x4c) = bVar16;
      if (*(ushort *)((long)param_1 - (long)*param_1) < 0xb) {
        piVar22 = (int *)0x0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[5];
        piVar22 = (int *)0x0;
        if (uVar20 != 0) {
          puVar27 = (uint *)((long)param_1 + uVar20);
          piVar22 = (int *)((long)puVar27 + (ulong)*puVar27);
        }
      }
      uVar34 = 0x3e800000;
      if ((10 < *(ushort *)((long)piVar22 - (long)*piVar22)) &&
         (uVar20 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[5], uVar20 != 0)) {
        uVar34 = *(undefined4 *)((long)piVar22 + uVar20);
      }
      *(undefined4 *)(param_2 + 10) = uVar34;
      uVar34 = 0;
      if ((0xc < *(ushort *)((long)param_1 - (long)*param_1)) &&
         (uVar20 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[6], uVar20 != 0)) {
        uVar34 = *(undefined4 *)((long)param_1 + uVar20);
      }
      *(undefined4 *)((long)param_2 + 0x54) = uVar34;
      FUN_018911f8(param_2,*param_2);
      puVar27 = (uint *)((long)param_1 + (ulong)*(ushort *)((long)param_1 + (4 - (long)*param_1)));
      FUN_01890ebc(param_2,*(undefined4 *)((long)puVar27 + (ulong)*puVar27));
      uVar14 = _UNK_03cac228;
      uVar13 = _DAT_03cac220;
      uVar12 = _UNK_03cabe68;
      uVar11 = _DAT_03cabe60;
      uVar10 = DAT_03cab628;
      uVar9 = DAT_03cab620;
      uVar20 = _UNK_03caa5b8;
      uVar8 = _DAT_03caa5b0;
      uVar21 = (ulong)*(ushort *)((long)param_1 + (4 - (long)*param_1));
      puVar1 = (uint *)((long)param_1 + uVar21);
      uVar23 = (ulong)*puVar1;
      puVar1 = (uint *)((long)puVar1 + uVar23);
      puVar27 = puVar1 + 1;
      uVar26 = (ulong)*puVar1;
      if (uVar26 != 0) {
        lVar28 = (long)param_1 + uVar23 + uVar21 + 9;
        puVar1 = puVar27 + uVar26;
        do {
          uVar21 = (ulong)*puVar27;
          local_210 = &DAT_cbf29ce484222645;
          pcStack_208 = "";
          local_1f0 = 0;
          local_200 = 0;
          local_1f8 = (long *)0x0;
          local_1e8 = &DAT_cbf29ce484222645;
          pcStack_1e0 = "";
          local_1d8 = 0;
          local_1d0 = (long *)0x0;
          local_1c8 = &DAT_cbf29ce484222645;
          pcStack_1c0 = "";
          piVar22 = (int *)((long)puVar27 + uVar21);
          local_1b8 = 0;
          local_1b0 = (long *)0x0;
          local_1a8 = &DAT_cbf29ce484222645;
          pcStack_1a0 = "";
          local_188 = 0;
          local_198 = 0;
          local_190 = (long *)0x0;
          local_184 = 0x40490fdb40490fdb;
          local_17c = 0x40490fdb40490fdb;
          local_174 = 0;
          local_170 = 0;
          local_16c = 0x40490fdb40490fdb;
          local_148 = 0x3f800000;
          local_140 = 0;
          local_13c = 0x3f800000;
          local_100 = 0;
          local_150 = 0x3f80000000000000;
          uStack_158 = uVar14;
          local_160 = uVar13;
          uStack_128 = uVar12;
          local_130 = uVar11;
          local_fc = 0x40490fdb40490fdb;
          local_f4 = 0x40490fdb40490fdb;
          local_e0 = 0;
          local_dc = 0x3f800000;
          local_d8 = &DAT_cbf29ce484222645;
          pcStack_d0 = "";
          local_c8 = 0;
          local_c0 = (long *)0x0;
          local_b8 = &DAT_cbf29ce484222645;
          local_b0 = "";
          local_a8 = 0;
          local_a0 = (long *)0x0;
          local_98 = 0x53a83126f;
          local_90 = 0;
          puVar19 = (ushort *)((long)piVar22 - (long)*piVar22);
          if ((6 < *puVar19) && (uVar23 = (ulong)puVar19[3], uVar23 != 0)) {
            uVar33 = (ulong)*(uint *)((long)piVar22 + uVar23);
            uVar26 = (ulong)puVar19[2];
            piVar2 = (int *)((long)((long)piVar22 + uVar23) + uVar33);
            local_110 = uVar8;
            local_120 = uVar9;
            uStack_108 = uVar20;
            uStack_118 = uVar10;
            if (uVar26 == 0) {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar17 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              puVar32 = *(undefined1 **)PTR_DAT_047d3e30;
              pcVar29 = *(char **)(PTR_DAT_047d3e30 + 8);
              sVar18 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              plVar31 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x18))(plVar31);
              }
            }
            else {
              puVar3 = (uint *)((long)piVar22 + uVar26);
              uVar30 = (ulong)*puVar3;
              pcVar29 = (char *)((long)puVar3 + uVar30 + 4);
              sVar18 = strlen(pcVar29);
              bVar6 = *(byte *)((long)puVar3 + uVar30 + 4);
              if (bVar6 == 0) {
                plVar31 = (long *)0x0;
                puVar32 = &DAT_cbf29ce484222645;
              }
              else {
                puVar32 = &DAT_cbf29ce484222645;
                pbVar24 = (byte *)(lVar28 + uVar30 + uVar26 + uVar21);
                do {
                  puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar6) * 0x100000001b3);
                  bVar6 = *pbVar24;
                  pbVar24 = pbVar24 + 1;
                } while (bVar6 != 0);
                plVar31 = (long *)0x0;
              }
            }
            plVar15 = local_1f8;
            local_1f8 = (long *)0x0;
            local_210 = puVar32;
            pcStack_208 = pcVar29;
            local_200 = sVar18;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x20))();
            }
            if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
              local_1f0 = false;
            }
            else {
              uVar26 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
              local_1f0 = false;
              if (uVar26 != 0) {
                local_1f0 = *(char *)((long)piVar2 + uVar26) != '\0';
              }
            }
            local_1f8 = plVar31;
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
               (uVar26 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar26 == 0)) {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar17 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              puVar32 = *(undefined1 **)PTR_DAT_047d3e30;
              pcVar29 = *(char **)(PTR_DAT_047d3e30 + 8);
              sVar18 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              plVar31 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x18))(plVar31);
              }
            }
            else {
              puVar3 = (uint *)((long)piVar2 + uVar26);
              uVar30 = (ulong)*puVar3;
              pcVar29 = (char *)((long)puVar3 + uVar30 + 4);
              sVar18 = strlen(pcVar29);
              bVar6 = *(byte *)((long)puVar3 + uVar30 + 4);
              if (bVar6 == 0) {
                plVar31 = (long *)0x0;
                puVar32 = &DAT_cbf29ce484222645;
              }
              else {
                lVar25 = uVar21 + uVar23 + uVar33 + uVar26 + uVar30;
                puVar32 = &DAT_cbf29ce484222645;
                do {
                  puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar6) * 0x100000001b3);
                  bVar6 = *(byte *)(lVar28 + lVar25);
                  lVar25 = lVar25 + 1;
                } while (bVar6 != 0);
                plVar31 = (long *)0x0;
              }
            }
            plVar15 = local_1d0;
            local_1d0 = (long *)0x0;
            local_1e8 = puVar32;
            pcStack_1e0 = pcVar29;
            local_1d8 = sVar18;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x20))();
            }
            local_1d0 = plVar31;
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
               (uVar26 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar26 == 0)) {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar17 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              puVar32 = *(undefined1 **)PTR_DAT_047d3e30;
              pcVar29 = *(char **)(PTR_DAT_047d3e30 + 8);
              sVar18 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              plVar31 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x18))(plVar31);
              }
            }
            else {
              puVar3 = (uint *)((long)piVar2 + uVar26);
              uVar30 = (ulong)*puVar3;
              pcVar29 = (char *)((long)puVar3 + uVar30 + 4);
              sVar18 = strlen(pcVar29);
              bVar6 = *(byte *)((long)puVar3 + uVar30 + 4);
              if (bVar6 == 0) {
                plVar31 = (long *)0x0;
                puVar32 = &DAT_cbf29ce484222645;
              }
              else {
                lVar25 = uVar21 + uVar23 + uVar33 + uVar26 + uVar30;
                puVar32 = &DAT_cbf29ce484222645;
                do {
                  puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar6) * 0x100000001b3);
                  bVar6 = *(byte *)(lVar28 + lVar25);
                  lVar25 = lVar25 + 1;
                } while (bVar6 != 0);
                plVar31 = (long *)0x0;
              }
            }
            plVar15 = local_1b0;
            local_1b0 = (long *)0x0;
            local_1c8 = puVar32;
            pcStack_1c0 = pcVar29;
            local_1b8 = sVar18;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x20))();
            }
            local_1b0 = plVar31;
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) ||
               (uVar26 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar26 == 0)) {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar17 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              puVar32 = *(undefined1 **)PTR_DAT_047d3e30;
              pcVar29 = *(char **)(PTR_DAT_047d3e30 + 8);
              sVar18 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              plVar31 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x18))(plVar31);
              }
            }
            else {
              puVar3 = (uint *)((long)piVar2 + uVar26);
              uVar30 = (ulong)*puVar3;
              pcVar29 = (char *)((long)puVar3 + uVar30 + 4);
              sVar18 = strlen(pcVar29);
              bVar6 = *(byte *)((long)puVar3 + uVar30 + 4);
              if (bVar6 == 0) {
                plVar31 = (long *)0x0;
                puVar32 = &DAT_cbf29ce484222645;
              }
              else {
                puVar32 = &DAT_cbf29ce484222645;
                lVar25 = uVar21 + uVar23 + uVar33 + uVar26 + uVar30;
                do {
                  puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar6) * 0x100000001b3);
                  bVar6 = *(byte *)(lVar28 + lVar25);
                  lVar25 = lVar25 + 1;
                } while (bVar6 != 0);
                plVar31 = (long *)0x0;
              }
            }
            plVar15 = local_190;
            local_190 = (long *)0x0;
            local_1a8 = puVar32;
            pcStack_1a0 = pcVar29;
            local_198 = sVar18;
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x20))();
            }
            local_160 = uVar8;
            uStack_158 = uVar20;
            if ((0x1e < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
               (uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xf], uVar23 != 0)) {
              puVar5 = (undefined8 *)((long)piVar2 + uVar23);
              local_160 = *puVar5;
              uStack_158 = (ulong)*(uint *)(puVar5 + 1);
            }
            uVar34 = 0;
            if (0x20 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x10];
              uVar34 = 0;
              if (uVar23 != 0) {
                uVar34 = *(undefined4 *)((long)piVar2 + uVar23);
              }
            }
            uVar35 = 0;
            if (0x22 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x11];
              uVar35 = 0;
              if (uVar23 != 0) {
                uVar35 = *(undefined4 *)((long)piVar2 + uVar23);
              }
            }
            local_150 = CONCAT44(uVar35,uVar34);
            if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xd) {
              local_188 = false;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[6];
              local_188 = false;
              if (uVar23 != 0) {
                local_188 = *(char *)((long)piVar2 + uVar23) != '\0';
              }
            }
            uVar34 = 0;
            if (0xe < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7];
              uVar34 = 0;
              if (uVar23 != 0) {
                uVar34 = *(undefined4 *)((long)piVar2 + uVar23);
              }
            }
            uVar35 = 0;
            if (0x10 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[8];
              uVar35 = 0;
              if (uVar23 != 0) {
                uVar35 = *(undefined4 *)((long)piVar2 + uVar23);
              }
            }
            local_184 = CONCAT44(uVar35,uVar34);
            uVar34 = 0;
            if (0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9];
              uVar34 = 0;
              if (uVar23 != 0) {
                uVar34 = *(undefined4 *)((long)piVar2 + uVar23);
              }
            }
            uVar35 = 0;
            if (0x14 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[10];
              uVar35 = 0;
              if (uVar23 != 0) {
                uVar35 = *(undefined4 *)((long)piVar2 + uVar23);
              }
            }
            local_17c = CONCAT44(uVar35,uVar34);
            if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x17) {
              local_174 = 0;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xb];
              local_174 = 0;
              if (uVar23 != 0) {
                local_174 = *(undefined4 *)((long)piVar2 + uVar23);
              }
            }
            if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x19) {
              local_170 = false;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xc];
              local_170 = false;
              if (uVar23 != 0) {
                local_170 = *(char *)((long)piVar2 + uVar23) != '\0';
              }
            }
            uVar34 = 0;
            if (0x1a < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xd];
              uVar34 = 0;
              if (uVar23 != 0) {
                uVar34 = *(undefined4 *)((long)piVar2 + uVar23);
              }
            }
            uVar35 = 0;
            if (0x1c < *(ushort *)((long)piVar2 - (long)*piVar2)) {
              uVar23 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xe];
              uVar35 = 0;
              if (uVar23 != 0) {
                uVar35 = *(undefined4 *)((long)piVar2 + uVar23);
              }
            }
            local_16c = CONCAT44(uVar35,uVar34);
            lVar25 = (long)*piVar2;
            uVar7 = *(ushort *)((long)piVar2 - lVar25);
            if (uVar7 < 0x25) {
LAB_018908f4:
              local_90 = false;
            }
            else {
              uVar23 = (ulong)((ushort *)((long)piVar2 - lVar25))[0x12];
              if (uVar23 != 0) {
                puVar3 = (uint *)((long)piVar2 + uVar23);
                piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
                if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
                  local_140 = false;
                }
                else {
                  uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
                  local_140 = false;
                  if (uVar23 != 0) {
                    local_140 = *(char *)((long)piVar4 + uVar23) != '\0';
                  }
                }
                local_13c = 0;
                if (6 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
                  uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
                  local_13c = 0;
                  if (uVar23 != 0) {
                    local_13c = *(undefined4 *)((long)piVar4 + uVar23);
                  }
                }
                local_130 = uVar11;
                uStack_128 = uVar12;
                if ((8 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
                   (uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar23 != 0)) {
                  puVar5 = (undefined8 *)((long)piVar4 + uVar23);
                  local_130 = *puVar5;
                  uStack_128 = (ulong)*(uint *)(puVar5 + 1);
                }
                local_120 = uVar9;
                uStack_118 = uVar10;
                if (10 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
                  uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[5];
                  if (uVar23 != 0) {
                    puVar5 = (undefined8 *)((long)piVar4 + uVar23);
                    local_120 = *puVar5;
                    uStack_118 = (ulong)*(uint *)(puVar5 + 1);
                  }
                }
                local_110 = uVar8;
                uStack_108 = uVar20;
                if (0xc < *(ushort *)((long)piVar4 - (long)*piVar4)) {
                  uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6];
                  if (uVar23 != 0) {
                    puVar5 = (undefined8 *)((long)piVar4 + uVar23);
                    local_110 = *puVar5;
                    uStack_108 = (ulong)*(uint *)(puVar5 + 1);
                  }
                }
                if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) {
                  local_100 = false;
                }
                else {
                  uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7];
                  local_100 = false;
                  if (uVar23 != 0) {
                    local_100 = *(char *)((long)piVar4 + uVar23) != '\0';
                  }
                }
                uVar34 = 0;
                if (0x10 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
                  uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[8];
                  uVar34 = 0;
                  if (uVar23 != 0) {
                    uVar34 = *(undefined4 *)((long)piVar4 + uVar23);
                  }
                }
                uVar35 = 0;
                if (0x12 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
                  uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[9];
                  uVar35 = 0;
                  if (uVar23 != 0) {
                    uVar35 = *(undefined4 *)((long)piVar4 + uVar23);
                  }
                }
                local_fc = CONCAT44(uVar35,uVar34);
                uVar34 = 0;
                if (0x14 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
                  uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[10];
                  uVar34 = 0;
                  if (uVar23 != 0) {
                    uVar34 = *(undefined4 *)((long)piVar4 + uVar23);
                  }
                }
                uVar35 = 0;
                if (0x16 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
                  uVar23 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xb];
                  uVar35 = 0;
                  if (uVar23 != 0) {
                    uVar35 = *(undefined4 *)((long)piVar4 + uVar23);
                  }
                }
                local_f4 = CONCAT44(uVar35,uVar34);
                lVar25 = (long)*piVar2;
                uVar7 = *(ushort *)((long)piVar2 - lVar25);
              }
              if (uVar7 < 0x27) goto LAB_018908f4;
              uVar23 = (ulong)*(ushort *)((long)piVar2 + (0x26 - lVar25));
              local_90 = false;
              if (uVar23 != 0) {
                local_90 = *(char *)((long)piVar2 + uVar23) != '\0';
              }
            }
            local_190 = plVar31;
            if (8 < *(ushort *)((long)piVar22 - (long)*piVar22)) {
              uVar23 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[4];
              if (uVar23 != 0) {
                uVar26 = (ulong)*(uint *)((long)piVar22 + uVar23);
                piVar22 = (int *)((long)((long)piVar22 + uVar23) + uVar26);
                if (*(ushort *)((long)piVar22 - (long)*piVar22) < 5) {
                  local_e0 = false;
                }
                else {
                  uVar33 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2];
                  local_e0 = false;
                  if (uVar33 != 0) {
                    local_e0 = *(char *)((long)piVar22 + uVar33) != '\0';
                  }
                }
                local_dc = 0x3f800000;
                if (6 < *(ushort *)((long)piVar22 - (long)*piVar22)) {
                  uVar33 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[3];
                  local_dc = 0x3f800000;
                  if (uVar33 != 0) {
                    local_dc = *(undefined4 *)((long)piVar22 + uVar33);
                  }
                }
                if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 9) ||
                   (uVar33 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[4], uVar33 == 0)) {
                  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar17 != 0)) {
                    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3e28);
                  }
                  puVar32 = *(undefined1 **)PTR_DAT_047d3e30;
                  pcVar29 = *(char **)(PTR_DAT_047d3e30 + 8);
                  sVar18 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
                  plVar31 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                  if (plVar31 != (long *)0x0) {
                    (**(code **)(*plVar31 + 0x18))(plVar31);
                  }
                }
                else {
                  puVar3 = (uint *)((long)piVar22 + uVar33);
                  uVar30 = (ulong)*puVar3;
                  pcVar29 = (char *)((long)puVar3 + uVar30 + 4);
                  sVar18 = strlen(pcVar29);
                  bVar6 = *(byte *)((long)puVar3 + uVar30 + 4);
                  if (bVar6 == 0) {
                    plVar31 = (long *)0x0;
                    puVar32 = &DAT_cbf29ce484222645;
                  }
                  else {
                    lVar25 = uVar21 + uVar23 + uVar26 + uVar33 + uVar30;
                    puVar32 = &DAT_cbf29ce484222645;
                    do {
                      puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar6) * 0x100000001b3);
                      bVar6 = *(byte *)(lVar28 + lVar25);
                      lVar25 = lVar25 + 1;
                    } while (bVar6 != 0);
                    plVar31 = (long *)0x0;
                  }
                }
                plVar15 = local_c0;
                local_c0 = (long *)0x0;
                local_d8 = puVar32;
                pcStack_d0 = pcVar29;
                local_c8 = sVar18;
                if (plVar15 != (long *)0x0) {
                  (**(code **)(*plVar15 + 0x20))();
                }
                local_c0 = plVar31;
                if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 0xb) ||
                   (uVar33 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[5], uVar33 == 0)) {
                  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar17 != 0)) {
                    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3e28);
                  }
                  puVar32 = *(undefined1 **)PTR_DAT_047d3e30;
                  pcVar29 = *(char **)(PTR_DAT_047d3e30 + 8);
                  sVar18 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
                  plVar31 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                  if (plVar31 != (long *)0x0) {
                    (**(code **)(*plVar31 + 0x18))(plVar31);
                  }
                }
                else {
                  puVar3 = (uint *)((long)piVar22 + uVar33);
                  uVar30 = (ulong)*puVar3;
                  pcVar29 = (char *)((long)puVar3 + uVar30 + 4);
                  sVar18 = strlen(pcVar29);
                  bVar6 = *(byte *)((long)puVar3 + uVar30 + 4);
                  if (bVar6 == 0) {
                    plVar31 = (long *)0x0;
                    puVar32 = &DAT_cbf29ce484222645;
                  }
                  else {
                    lVar25 = uVar21 + uVar23 + uVar26 + uVar33 + uVar30;
                    puVar32 = &DAT_cbf29ce484222645;
                    do {
                      puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar6) * 0x100000001b3);
                      bVar6 = *(byte *)(lVar28 + lVar25);
                      lVar25 = lVar25 + 1;
                    } while (bVar6 != 0);
                    plVar31 = (long *)0x0;
                  }
                }
                plVar15 = local_a0;
                local_a0 = (long *)0x0;
                local_b8 = puVar32;
                local_b0 = pcVar29;
                local_a8 = sVar18;
                if (plVar15 != (long *)0x0) {
                  (**(code **)(*plVar15 + 0x20))();
                }
                if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 0xd) ||
                   (uVar21 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[6], uVar21 == 0)) {
                  uVar34 = 0x3a83126f;
                }
                else {
                  uVar34 = *(undefined4 *)((long)piVar22 + uVar21);
                }
                if (*(ushort *)((long)piVar22 - (long)*piVar22) < 0xf) {
                  uVar35 = 5;
                }
                else {
                  uVar21 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[7];
                  uVar35 = 5;
                  if (uVar21 != 0) {
                    uVar35 = *(undefined4 *)((long)piVar22 + uVar21);
                  }
                }
                local_98 = CONCAT44(uVar35,uVar34);
                local_a0 = plVar31;
              }
            }
            FUN_01890dd8(param_2,&local_210);
            if (local_a0 != (long *)0x0) {
              (**(code **)(*local_a0 + 0x20))();
            }
            if (local_c0 != (long *)0x0) {
              (**(code **)(*local_c0 + 0x20))();
            }
            if (local_190 != (long *)0x0) {
              (**(code **)(*local_190 + 0x20))();
            }
            if (local_1b0 != (long *)0x0) {
              (**(code **)(*local_1b0 + 0x20))();
            }
            if (local_1d0 != (long *)0x0) {
              (**(code **)(*local_1d0 + 0x20))();
            }
            if (local_1f8 != (long *)0x0) {
              (**(code **)(*local_1f8 + 0x20))();
            }
          }
          puVar27 = puVar27 + 1;
          lVar28 = lVar28 + 4;
        } while (puVar27 != puVar1);
      }
    }
  }
  return;
}


