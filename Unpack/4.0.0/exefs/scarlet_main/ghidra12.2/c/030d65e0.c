/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d65e0; name: FUN_030d65e0
 */


void FUN_030d65e0(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined4 *puVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long *plVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  long lVar37;
  int iVar38;
  uint *puVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  undefined8 *puVar43;
  long lVar44;
  uint *puVar45;
  long local_298;
  ulong local_290;
  int local_288 [2];
  long local_280;
  undefined8 local_278;
  undefined *local_270;
  undefined4 local_268;
  long local_260;
  undefined8 local_258;
  long *local_250;
  int local_248 [2];
  ulong local_240 [3];
  long local_228;
  undefined8 local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  undefined8 local_1f8;
  long local_1f0;
  undefined8 local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  int local_148;
  undefined4 local_108;
  int local_100;
  undefined4 local_f0;
  int local_e8;
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 local_a8;
  uint local_a0;
  float local_9c;
  ulong uStack_98;
  undefined4 local_90;
  uint local_8c;
  long local_88;
  undefined8 local_80;
  long local_70 [2];
  
  lVar35 = tpidr_el0;
  lVar15 = *(long *)(lVar35 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar35 + 0x1000b8) = lVar15;
  }
  plVar32 = *(long **)(lVar15 + 0x3e0);
  if (plVar32 != (long *)0x0) {
    lVar15 = *plVar32;
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))("cutSilhouettes",0xe,*(undefined8 *)(lVar15 + 0x28));
      if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
        (**(code **)(lVar15 + 0x18))("getUpdatedFaces",0xf,*(undefined8 *)(lVar15 + 0x28));
      }
    }
    puVar43 = (undefined8 *)plVar32[2];
    uVar16 = (long)puVar43 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar32[3]) && (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
      *puVar43 = "LtcutSilhouettes";
      puVar43[2] = "StgetUpdatedFaces";
      uVar10 = nn::os::GetSystemTick();
      puVar43[1] = uVar10;
    }
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
      puVar43 = (undefined8 *)plVar32[2];
      uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar32[3]) && (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
        *puVar43 = &DAT_03c4e575;
        puVar43[1] = *(undefined8 *)(plVar32[6] + 8);
      }
    }
  }
  puVar3 = PTR_PTR_047d1a50;
  uVar12 = *(uint *)(param_1 + 0x28);
  uVar16 = (ulong)uVar12;
  local_250 = plVar32;
  if ((int)param_4[1] == 0) {
    if (0 < (int)uVar12) {
      plVar32 = *(long **)(param_1 + 0x20);
      do {
        lVar15 = *plVar32;
        if ((lVar15 != 0) && ((*(int *)(lVar15 + 0xa0) != 0 || (*(int *)(lVar15 + 0xb0) != 0))))
        goto LAB_030d6704;
        uVar16 = uVar16 - 1;
        plVar32 = plVar32 + 1;
      } while (uVar16 != 0);
    }
  }
  else {
LAB_030d6704:
    if (0 < (int)uVar12) {
      lVar15 = 0;
      do {
        lVar42 = *(long *)(*(long *)(param_1 + 0x20) + lVar15 * 8);
        if (lVar42 != 0) {
          plVar32 = (long *)(lVar42 + 0xf8);
          iVar40 = *(int *)(lVar42 + 0x100);
          lVar44 = *param_4;
          plVar33 = (long *)(lVar44 + lVar15 * 0x38 + 0x28);
          if (iVar40 == 0) {
            if (plVar33 != plVar32) {
              FUN_030da42c(plVar32,puVar3);
              FUN_030da42c(plVar33,puVar3);
              lVar25 = *(long *)(lVar42 + 0xf8);
              *(long *)(lVar42 + 0xf8) = *plVar33;
              *plVar33 = lVar25;
              lVar44 = lVar44 + lVar15 * 0x38;
              uVar4 = *(undefined4 *)(lVar42 + 0x100);
              *(undefined4 *)(lVar42 + 0x100) = *(undefined4 *)(lVar44 + 0x30);
              *(undefined4 *)(lVar44 + 0x30) = uVar4;
              uVar4 = *(undefined4 *)(lVar42 + 0x104);
              *(undefined4 *)(lVar42 + 0x104) = *(undefined4 *)(lVar44 + 0x34);
              *(undefined4 *)(lVar44 + 0x34) = uVar4;
            }
          }
          else {
            iVar26 = *(int *)(lVar44 + lVar15 * 0x38 + 0x30);
            puVar43 = (undefined8 *)*plVar33;
            iVar14 = iVar26 + iVar40;
            if ((int)(*(uint *)(lVar42 + 0x104) & 0x7fffffff) < iVar14) {
              FUN_02ebb550(plVar32,puVar3,(long)iVar14);
            }
            if (iVar26 != 0) {
              puVar23 = (undefined8 *)(*plVar32 + (long)iVar40 * 0x20);
              uVar16 = (long)iVar26 * 0x20 - 0x20;
              uVar12 = ((uint)(uVar16 >> 5) & 0x7ffffff) + 1;
              puVar17 = puVar43;
              if ((uVar12 & 3) != 0) {
                lVar44 = -((ulong)uVar12 & 3);
                puVar29 = puVar23;
                do {
                  uVar10 = puVar17[3];
                  puVar23 = puVar29 + 4;
                  bVar9 = lVar44 != -1;
                  lVar44 = lVar44 + 1;
                  puVar29[1] = puVar17[1];
                  puVar29[3] = uVar10;
                  uVar10 = *puVar17;
                  puVar29[2] = puVar17[2];
                  *puVar29 = uVar10;
                  puVar17 = puVar17 + 4;
                  puVar29 = puVar23;
                } while (bVar9);
              }
              if (0x5f < uVar16) {
                do {
                  uVar10 = puVar17[3];
                  puVar23[1] = puVar17[1];
                  puVar23[3] = uVar10;
                  uVar10 = *puVar17;
                  puVar23[2] = puVar17[2];
                  *puVar23 = uVar10;
                  uVar10 = puVar17[5];
                  puVar23[7] = puVar17[7];
                  puVar23[5] = uVar10;
                  uVar10 = puVar17[4];
                  puVar23[6] = puVar17[6];
                  puVar23[4] = uVar10;
                  uVar30 = puVar17[9];
                  puVar23[0xb] = puVar17[0xb];
                  uVar10 = puVar17[10];
                  uVar31 = puVar17[8];
                  puVar23[9] = uVar30;
                  puVar23[10] = uVar10;
                  puVar23[8] = uVar31;
                  uVar10 = puVar17[0xc];
                  uVar30 = puVar17[0xd];
                  puVar29 = puVar17 + 0xe;
                  uVar31 = puVar17[0xf];
                  puVar17 = puVar17 + 0x10;
                  puVar23[0xe] = *puVar29;
                  puVar23[0xf] = uVar31;
                  puVar23[0xc] = uVar10;
                  puVar23[0xd] = uVar30;
                  puVar23 = puVar23 + 0x10;
                } while (puVar17 != puVar43 + (long)iVar26 * 4);
              }
            }
            *(int *)(lVar42 + 0x100) = iVar14;
            lVar42 = *param_4 + lVar15 * 0x38;
            uVar12 = *(uint *)(lVar42 + 0x34);
            *(undefined4 *)(lVar42 + 0x30) = 0;
            if ((-1 < (int)uVar12) && (lVar44 = *(long *)(lVar42 + 0x28), lVar44 != 0)) {
              (**(code **)(*(long *)puVar3 + 0x20))(puVar3,lVar44,(ulong)uVar12 << 5);
            }
            *(long *)(lVar42 + 0x28) = 0;
            *(uint *)(lVar42 + 0x34) = 0x80000000;
          }
        }
        uVar12 = *(uint *)(param_1 + 0x28);
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)uVar12);
    }
    cVar5 = *(char *)(param_1 + 0x98);
    if (cVar5 == '\x02') {
      if (uVar12 != 0) {
        plVar33 = *(long **)(param_1 + 0x20);
        plVar32 = plVar33 + (int)uVar12;
        puVar3 = PTR_PTR_047d1a50 + 0x20;
        do {
          if (*plVar33 != 0) {
            iVar14 = *(int *)(*plVar33 + 0x20);
            lVar15 = *param_4;
            lVar42 = lVar15 + (long)iVar14 * 0x38;
            local_1e0 = 0;
            local_1d8 = 0x8000000000000000;
            puVar45 = (uint *)(lVar42 + 0x20);
            puVar39 = (uint *)(lVar42 + 0x10);
            uVar12 = *puVar39;
            iVar40 = *puVar45 + uVar12;
            if (iVar40 < 1) {
              iVar40 = 0;
              uVar13 = 0;
            }
            else {
              FUN_03078498(&local_1e0,puVar3,iVar40);
              uVar12 = *puVar39;
              iVar40 = (int)local_1d8;
              uVar13 = local_1d8._4_4_;
            }
            puVar28 = *(undefined4 **)(lVar15 + (long)iVar14 * 0x38 + 8);
            iVar26 = uVar12 + iVar40;
            if ((int)(uVar13 & 0x7fffffff) < iVar26) {
              FUN_0309cc54(&local_1e0,PTR_PTR_047d1a50 + 0x20,(long)iVar26);
            }
            if (0 < (int)uVar12) {
              puVar2 = (undefined4 *)(local_1e0 + (long)iVar40 * 4);
              uVar13 = uVar12 & 7;
              if (6 < uVar12 - 1) {
                iVar40 = -(uVar12 & 0xfffffff8);
                puVar24 = puVar2;
                do {
                  *puVar24 = *puVar28;
                  puVar24[1] = puVar28[1];
                  puVar24[2] = puVar28[2];
                  puVar24[3] = puVar28[3];
                  puVar24[4] = puVar28[4];
                  puVar24[5] = puVar28[5];
                  puVar24[6] = puVar28[6];
                  puVar1 = puVar28 + 7;
                  puVar2 = puVar24 + 8;
                  puVar28 = puVar28 + 8;
                  iVar40 = iVar40 + 8;
                  puVar24[7] = *puVar1;
                  puVar24 = puVar2;
                } while (iVar40 != 0);
              }
              for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar2 = *puVar28;
                puVar2 = puVar2 + 1;
                puVar28 = puVar28 + 1;
              }
            }
            puVar28 = *(undefined4 **)(lVar15 + (long)iVar14 * 0x38 + 0x18);
            uVar12 = *puVar45;
            iVar40 = uVar12 + iVar26;
            if ((int)(local_1d8._4_4_ & 0x7fffffff) < iVar40) {
              local_1d8._0_4_ = iVar26;
              FUN_0309cc54(&local_1e0,PTR_PTR_047d1a50 + 0x20,(long)iVar40);
            }
            if (0 < (int)uVar12) {
              puVar2 = (undefined4 *)(local_1e0 + (long)iVar26 * 4);
              uVar13 = uVar12 & 7;
              if (6 < uVar12 - 1) {
                iVar26 = -(uVar12 & 0xfffffff8);
                puVar24 = puVar2;
                do {
                  *puVar24 = *puVar28;
                  puVar24[1] = puVar28[1];
                  puVar24[2] = puVar28[2];
                  puVar24[3] = puVar28[3];
                  puVar24[4] = puVar28[4];
                  puVar24[5] = puVar28[5];
                  puVar24[6] = puVar28[6];
                  puVar1 = puVar28 + 7;
                  puVar2 = puVar24 + 8;
                  puVar28 = puVar28 + 8;
                  iVar26 = iVar26 + 8;
                  puVar24[7] = *puVar1;
                  puVar24 = puVar2;
                } while (iVar26 != 0);
              }
              for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar2 = *puVar28;
                puVar2 = puVar2 + 1;
                puVar28 = puVar28 + 1;
              }
            }
            local_228 = CONCAT44(local_228._4_4_,iVar14);
            local_1d8._0_4_ = iVar40;
            FUN_030f3f50(*(undefined8 *)(param_1 + 0x18),&local_228,local_1e0,
                         local_1e0 + (long)iVar40 * 4);
            uVar12 = local_1d8._4_4_;
            uVar16 = (ulong)local_1d8._4_4_;
            local_1d8 = (ulong)local_1d8._4_4_ << 0x20;
            if ((-1 < (int)uVar12) && (local_1e0 != 0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                        (PTR_PTR_047d1a50 + 0x20,local_1e0,uVar16 << 2);
            }
          }
          plVar33 = plVar33 + 1;
        } while (plVar33 != plVar32);
      }
    }
    else if (cVar5 == '\x01') {
      if (uVar12 != 0) {
        plVar32 = *(long **)(param_1 + 0x20);
        lVar15 = (long)(int)uVar12 << 3;
        do {
          lVar42 = *plVar32;
          if (lVar42 != 0) {
            local_1e0 = CONCAT44(local_1e0._4_4_,*(undefined4 *)(lVar42 + 0x20));
            FUN_030f3a40(*(undefined8 *)(param_1 + 0x18),param_1 + 0x40,&local_1e0,
                         *(long *)(lVar42 + 0xf8),
                         *(long *)(lVar42 + 0xf8) + (long)*(int *)(lVar42 + 0x100) * 0x20);
          }
          plVar32 = plVar32 + 1;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
      }
    }
    else if ((cVar5 == '\0') && (uVar12 != 0)) {
      plVar33 = *(long **)(param_1 + 0x20);
      plVar32 = plVar33 + (int)uVar12;
      do {
        lVar15 = *plVar33;
        if (lVar15 != 0) {
          lVar15 = *(long *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x38) +
                            (long)*(int *)(lVar15 + 0x20) * 0x100);
          iVar40 = *(int *)(lVar15 + 0x40);
          if (iVar40 != 0) {
            plVar36 = *(long **)(lVar15 + 0x38);
            lVar15 = (long)iVar40 * 0x18;
            do {
              if (*plVar36 != 0) {
                if ((char)plVar36[2] != '\x01') {
                  FUN_03065a74(plVar36);
                }
                FUN_03077608();
              }
              plVar36 = plVar36 + 3;
              lVar15 = lVar15 + -0x18;
            } while (lVar15 != 0);
          }
        }
        plVar33 = plVar33 + 1;
      } while (plVar33 != plVar32);
    }
    local_260 = 0;
    local_258 = -0x8000000000000000;
    iVar40 = *(int *)(param_1 + 0x28);
    if (iVar40 < 1) {
      iVar14 = 0;
    }
    else {
      FUN_030da518(&local_260,iVar40);
      iVar14 = (int)local_258;
    }
    puVar3 = PTR_PTR_047d1a50;
    if (iVar14 < iVar40) {
      local_258 = CONCAT44(local_258._4_4_,iVar40);
      puVar43 = (undefined8 *)(local_260 + (long)iVar14 * 0x10);
      do {
        puVar17 = puVar43 + 2;
        *puVar43 = 0;
        puVar43[1] = 0x8000000000000000;
        puVar43 = puVar17;
      } while (puVar17 != (undefined8 *)(local_260 + (long)iVar40 * 0x10));
    }
    else if (iVar40 < iVar14) {
      local_258 = CONCAT44(local_258._4_4_,iVar40);
      lVar15 = (long)iVar40 * 0x10 + (long)iVar14 * -0x10;
      puVar28 = (undefined4 *)(local_260 + (long)iVar14 * 0x10 + -8);
      do {
        *puVar28 = 0;
        if ((-1 < (int)puVar28[1]) && (*(long *)(puVar28 + -2) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(puVar28 + -2),(ulong)(uint)puVar28[1] << 2);
        }
        *(undefined8 *)(puVar28 + -2) = 0;
        lVar15 = lVar15 + 0x10;
        puVar28[1] = 0x80000000;
        puVar28 = puVar28 + -4;
      } while (lVar15 != 0);
    }
    puVar3 = PTR_PTR_047d1a50;
    local_280 = 0;
    local_278 = -0x8000000000000000;
    local_270 = &DAT_03d7702c;
    local_268 = 0;
    local_288[0] = 0;
    iVar40 = *(int *)(param_1 + 0x28);
    if (0 < iVar40) {
      do {
        lVar15 = *(long *)(*(long *)(param_1 + 0x20) + (long)local_288[0] * 8);
        iVar14 = local_288[0];
        if (lVar15 != 0) {
          lVar42 = *param_4;
          lVar44 = (long)local_288[0];
          if ((((*(int *)(lVar42 + lVar44 * 0x38 + 0x10) != 0) ||
               (*(int *)(lVar42 + lVar44 * 0x38 + 0x20) != 0)) ||
              (*(int *)(lVar42 + lVar44 * 0x38 + 0x30) != 0)) ||
             ((*(int *)(lVar15 + 0xa0) != 0 || (*(int *)(lVar15 + 0xb0) != 0)))) {
            FUN_030da740(&local_280,local_288);
            local_298 = 0;
            local_290 = 0x8000000000000000;
            lVar42 = *param_4;
            if ((*(int *)(lVar42 + lVar44 * 0x38 + 0x10) != 0) ||
               ((*(int *)(lVar42 + lVar44 * 0x38 + 0x20) != 0 ||
                (*(int *)(lVar42 + lVar44 * 0x38 + 0x30) != 0)))) {
              lVar42 = *(long *)(lVar35 + 0x1000b8);
              if (lVar42 == 0) {
                lVar42 = FUN_00e5d3b4();
                *(long *)(lVar35 + 0x1000b8) = lVar42;
              }
              plVar32 = *(long **)(lVar42 + 0x3e0);
              if (plVar32 != (long *)0x0) {
                lVar42 = *plVar32;
                if (((*(byte *)(lVar42 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
                  puVar43 = (undefined8 *)plVar32[2];
                  uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar16 <= (ulong)plVar32[3]) &&
                     (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                    *puVar43 = &DAT_03c4e575;
                    puVar43[1] = *(undefined8 *)(plVar32[6] + 8);
                  }
                }
                puVar43 = (undefined8 *)plVar32[2];
                uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                if ((uVar16 <= (ulong)plVar32[3]) &&
                   (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                  *puVar43 = "StintersectST";
                  uVar10 = nn::os::GetSystemTick();
                  puVar43[1] = uVar10;
                }
                if (*(code **)(lVar42 + 0x20) != (code *)0x0) {
                  (**(code **)(lVar42 + 0x20))(*(undefined8 *)(lVar42 + 0x28));
                }
                if (*(code **)(lVar42 + 0x18) != (code *)0x0) {
                  (**(code **)(lVar42 + 0x18))("intersectST",0xb,*(undefined8 *)(lVar42 + 0x28));
                }
              }
              lVar42 = *param_4;
              piVar18 = (int *)(lVar42 + lVar44 * 0x38 + 0x10);
              iVar40 = *piVar18;
              if (iVar40 < 1) {
                iVar14 = 0;
              }
              else {
                FUN_030d9f44(&local_298,iVar40);
                iVar14 = (int)local_290;
              }
              if (iVar14 < iVar40) {
                lVar27 = (long)iVar40 * 0x58;
                local_290 = CONCAT44(local_290._4_4_,iVar40);
                lVar25 = local_298;
                do {
                  lVar27 = lVar27 + -0x58;
                  lVar19 = lVar25 + (long)iVar14 * 0x58;
                  *(undefined1 *)(lVar19 + 4) = 0;
                  lVar25 = lVar25 + 0x58;
                  *(undefined8 *)(lVar19 + 8) = 0;
                  *(undefined8 *)(lVar19 + 0x10) = 0x8000000000000000;
                  *(undefined8 *)(lVar19 + 0x18) = 0;
                  *(undefined8 *)(lVar19 + 0x20) = 0x8000000000000000;
                  *(undefined8 *)(lVar19 + 0x28) = 0;
                  *(undefined8 *)(lVar19 + 0x30) = 0x8000000000000000;
                  *(undefined8 *)(lVar19 + 0x38) = 0;
                  *(undefined8 *)(lVar19 + 0x40) = 0x8000000000000000;
                  *(undefined8 *)(lVar19 + 0x48) = 0;
                  *(undefined8 *)(lVar19 + 0x50) = 0x8000000000000000;
                } while ((long)iVar14 * 0x58 != lVar27);
              }
              else if (iVar40 < iVar14) {
                lVar27 = local_298 + (long)iVar14 * 0x58;
                lVar25 = (long)iVar40 * 0x58 + (long)iVar14 * -0x58;
                local_290 = CONCAT44(local_290._4_4_,iVar40);
                do {
                  lVar27 = lVar27 + -0x58;
                  FUN_030da1a4(lVar27);
                  lVar25 = lVar25 + 0x58;
                } while (lVar25 != 0);
              }
              FUN_03168c70(&local_1e0);
              local_a0 = 0xffffffff;
              local_9c = 0.0;
              uStack_98 = uStack_98 & 0xffffffff00000000;
              local_90 = 0;
              local_8c = 0x80000000;
              local_88 = 0;
              local_80 = -0x8000000000000000;
              if (0.0 < *(float *)(param_1 + 0xa8)) {
                local_9c = *(float *)(param_1 + 0xa8);
              }
              iVar14 = *(int *)(lVar42 + lVar44 * 0x38);
              iVar40 = *(int *)(*(long *)PTR_DAT_047e4f50 + 0x18);
              lVar25 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x38) + (long)iVar14 * 0x100)
              ;
              if (0 < iVar40) {
                FUN_03056218(&local_228,*(undefined4 *)(*(long *)PTR_DAT_047e4f50 + 0x20),
                             *(undefined4 *)(*(long *)(lVar25 + 0x20) + 0x180),0);
                lVar27 = *(long *)(lVar35 + 0x1000b8);
                if (lVar27 == 0) {
                  lVar27 = FUN_00e5d3b4();
                  *(long *)(lVar35 + 0x1000b8) = lVar27;
                }
                lVar27 = *(long *)(lVar27 + 0x3e0);
                if ((lVar27 != 0) &&
                   (puVar43 = *(undefined8 **)(lVar27 + 0x10), puVar43 != (undefined8 *)0x0)) {
                  puVar28 = (undefined4 *)((long)puVar43 + 0x13U & 0xfffffffffffffffc);
                  uVar16 = (long)puVar28 + 0xbU & 0xfffffffffffffff8;
                  if (uVar16 <= *(ulong *)(lVar27 + 0x18)) {
                    *(ulong *)(lVar27 + 0x10) = uVar16;
                    *puVar43 = &DAT_03c1a9df;
                    puVar43[1] = PTR_DAT_047e48d8;
                    if (puVar28 != (undefined4 *)0x0) {
                      *puVar28 = (undefined4)local_228;
                    }
                  }
                }
              }
              if (0 < *piVar18) {
                lVar27 = 0;
                do {
                  lVar19 = *(long *)(lVar35 + 0x1000b8);
                  if (lVar19 == 0) {
                    lVar19 = FUN_00e5d3b4();
                    *(long *)(lVar35 + 0x1000b8) = lVar19;
                  }
                  plVar32 = *(long **)(lVar19 + 0x3e0);
                  if (plVar32 != (long *)0x0) {
                    lVar19 = *plVar32;
                    if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
                      (**(code **)(lVar19 + 0x18))
                                ("intersectOneFace",0x10,*(undefined8 *)(lVar19 + 0x28));
                    }
                    puVar43 = (undefined8 *)plVar32[2];
                    uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar16 <= (ulong)plVar32[3]) &&
                       (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                      *puVar43 = "TtintersectOneFace";
                      uVar10 = nn::os::GetSystemTick();
                      puVar43[1] = uVar10;
                    }
                    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
                      puVar43 = (undefined8 *)plVar32[2];
                      uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar16 <= (ulong)plVar32[3]) &&
                         (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                        *puVar43 = &DAT_03c4e575;
                        puVar43[1] = *(undefined8 *)(plVar32[6] + 8);
                      }
                    }
                    lVar19 = *(long *)(lVar35 + 0x1000b8);
                  }
                  uVar12 = *(uint *)(*(long *)(lVar42 + lVar44 * 0x38 + 8) + lVar27 * 4);
                  local_1f0 = 0;
                  local_1e8 = -0x8000000000000000;
                  uVar13 = uVar12 | iVar14 << 0x16;
                  local_200 = 0;
                  local_1f8 = -0x8000000000000000;
                  if (lVar19 == 0) {
                    lVar19 = FUN_00e5d3b4();
                    *(long *)(lVar35 + 0x1000b8) = lVar19;
                  }
                  plVar33 = *(long **)(lVar19 + 0x3e0);
                  if (plVar33 != (long *)0x0) {
                    lVar19 = *plVar33;
                    if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
                      (**(code **)(lVar19 + 0x18))
                                ("gatherSilhouettes",0x11,*(undefined8 *)(lVar19 + 0x28));
                    }
                    puVar43 = (undefined8 *)plVar33[2];
                    uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar16 <= (ulong)plVar33[3]) &&
                       (plVar33[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                      *puVar43 = "TtgatherSilhouettes";
                      uVar10 = nn::os::GetSystemTick();
                      puVar43[1] = uVar10;
                    }
                    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar33[6] != 0)) {
                      puVar43 = (undefined8 *)plVar33[2];
                      uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar16 <= (ulong)plVar33[3]) &&
                         (plVar33[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                        *puVar43 = &DAT_03c4e575;
                        puVar43[1] = *(undefined8 *)(plVar33[6] + 8);
                      }
                    }
                  }
                  (**(code **)(*param_2 + 0x18))(param_2,uVar13,&local_1f0,&local_200);
                  if (plVar33 != (long *)0x0) {
                    lVar19 = *plVar33;
                    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar33[6] != 0)) {
                      puVar43 = (undefined8 *)plVar33[2];
                      uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar16 <= (ulong)plVar33[3]) &&
                         (plVar33[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                        *puVar43 = &DAT_03c4e575;
                        puVar43[1] = *(undefined8 *)(plVar33[6] + 8);
                      }
                    }
                    puVar43 = (undefined8 *)plVar33[2];
                    uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar16 <= (ulong)plVar33[3]) &&
                       (plVar33[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                      *puVar43 = &DAT_03c2d363;
                      uVar10 = nn::os::GetSystemTick();
                      puVar43[1] = uVar10;
                    }
                    if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
                      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
                    }
                  }
                  lVar19 = local_298;
                  uVar16 = (ulong)uVar12 & 0x3fffff;
                  lVar20 = *(long *)(lVar25 + 0x20);
                  bVar6 = *(byte *)(*(long *)(lVar20 + 0x68) + 0x80);
                  iVar8 = *(int *)(lVar20 + 0x50);
                  iVar38 = (int)uVar16;
                  iVar26 = iVar38 - *(int *)(lVar20 + 0x20);
                  if (iVar38 < *(int *)(lVar20 + 0x20)) {
                    iVar26 = iVar38;
                    if ((*(int *)(lVar20 + 0x98) == 0) ||
                       (iVar26 = *(int *)(*(long *)(lVar20 + 0x90) + uVar16 * 4), iVar26 != -1)) {
                      lVar37 = *(long *)(lVar20 + 0x120) + (long)(iVar26 * iVar8) * 4;
                      lVar20 = *(long *)(lVar20 + 0xb0);
                      goto LAB_030d7340;
                    }
                    lVar37 = *(long *)(lVar20 + 0x48) + (long)(iVar8 * iVar38) * 4;
                    lVar20 = *(long *)(lVar20 + 0x18) + uVar16 * 0x10;
                    lVar41 = lVar37 + (long)iVar8 * 4;
                  }
                  else {
                    lVar37 = *(long *)(lVar20 + 0x140) + (long)(iVar8 * iVar26) * 4;
                    lVar20 = *(long *)(lVar20 + 0xd0);
LAB_030d7340:
                    lVar41 = lVar37 + (long)iVar8 * 4;
                    lVar20 = lVar20 + (long)iVar26 * 0x10;
                  }
                  sVar7 = *(short *)(lVar20 + 8);
                  local_228 = 0;
                  local_220 = 0x8000000000000000;
                  lVar20 = *(long *)(lVar35 + 0x1000b8);
                  if (lVar20 == 0) {
                    lVar20 = FUN_00e5d3b4();
                    *(long *)(lVar35 + 0x1000b8) = lVar20;
                  }
                  lVar34 = (long)sVar7 + 1;
                  local_218 = *(long *)(*(long *)(lVar20 + 0x3d0) + 0x10);
                  if (*(long *)(local_218 + 8) != 0) {
                    local_218 = 0;
                  }
                  local_208 = lVar34 * 0x10;
                  local_70[0] = local_208;
                  if (local_218 == 0) {
                    lVar20 = (**(code **)PTR_DAT_047d1a08)(1,local_70,0x40);
                  }
                  else {
                    local_240[0] = local_208 + 0x3fU & 0xffffffffffffffc0;
                    if (local_240[0] <= *(ulong *)(local_218 + 0x28)) {
                      lVar20 = *(long *)(local_218 + 0x38);
                      if (local_240[0] + lVar20 <= *(ulong *)(local_218 + 0x40)) {
                        *(ulong *)(local_218 + 0x38) = local_240[0] + lVar20;
                        goto LAB_030d73ec;
                      }
                    }
                    lVar20 = FUN_031cf3b4(local_218,local_240);
                  }
LAB_030d73ec:
                  local_220 = CONCAT44((int)lVar34,(int)local_220) | 0x8000000000000000;
                  local_d8 = 0;
                  local_108 = 0;
                  local_f0 = 0;
                  local_c8 = 0;
                  local_b8 = 0;
                  local_a8 = 0;
                  if (local_148 != 1) {
                    local_148 = 1;
                  }
                  local_100 = (int)local_1e8;
                  local_e8 = (int)local_1e8;
                  local_90 = 0;
                  local_228 = lVar20;
                  local_210 = lVar20;
                  if ((int)(local_8c & 0x7fffffff) < (int)local_1e8) {
                    FUN_030ff230(&uStack_98,puVar3,(long)(int)local_1e8);
                  }
                  local_a0 = uVar13;
                  if ((int)local_1e8 != 0) {
                    FUN_031637ac(&local_1e0,*(undefined8 *)(lVar25 + 0x20),param_1 + 0x40,bVar6 & 1,
                                 uVar13,&local_228);
                    if (0 < (int)local_1e8) {
                      lVar34 = 0;
                      lVar20 = 0;
                      do {
                        lVar11 = *(long *)(local_1f0 + lVar34);
                        FUN_03163ce4(&local_1e0,lVar11,
                                     lVar11 + (long)(int)((long *)(local_1f0 + lVar34))[1] * 0x10,
                                     *(undefined8 *)(local_200 + lVar20 * 8));
                        lVar20 = lVar20 + 1;
                        lVar34 = lVar34 + 0x10;
                      } while (lVar20 < (int)local_1e8);
                    }
                  }
                  FUN_03163eb4(*(undefined4 *)(param_1 + 0x9c),&local_1e0,lVar19 + lVar27 * 0x58,
                               lVar25,local_228,local_228 + (long)(int)local_220 * 0x10,lVar37,
                               lVar41,param_3);
                  if (0 < iVar40) {
                    local_248[0] = iVar38;
                    FUN_03096684(lVar25,local_248,local_240);
                    lVar19 = *(long *)(lVar35 + 0x1000b8);
                    if (lVar19 == 0) {
                      lVar19 = FUN_00e5d3b4();
                      *(long *)(lVar35 + 0x1000b8) = lVar19;
                    }
                    lVar19 = *(long *)(lVar19 + 0x3e0);
                    puVar43 = *(undefined8 **)(lVar19 + 0x10);
                    if (puVar43 != (undefined8 *)0x0) {
                      puVar21 = (ulong *)((long)puVar43 + 0x13U & 0xfffffffffffffffc);
                      uVar16 = (long)puVar21 + 0x13U & 0xfffffffffffffff8;
                      if (uVar16 <= *(ulong *)(lVar19 + 0x18)) {
                        *(ulong *)(lVar19 + 0x10) = uVar16;
                        *puVar43 = &DAT_03c1a9df;
                        puVar43[1] = PTR_DAT_047e4f58;
                        if (puVar21 != (ulong *)0x0) {
                          *puVar21 = local_240[0];
                          *(int *)(puVar21 + 1) = (int)local_240[1];
                        }
                      }
                    }
                  }
                  if (local_210 == local_228) {
                    local_220 = local_220 & 0xffffffff00000000;
                  }
                  if (local_218 == 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
                  }
                  else {
                    uVar16 = local_208 + 0x3fU & 0xffffffffffffffc0;
                    if ((*(ulong *)(local_218 + 0x28) < uVar16) ||
                       (*(long *)(local_218 + 0x38) != uVar16 + local_210)) {
                      if (local_210 != 0) {
                        if (*(ulong *)(local_218 + 0x28) < uVar16 + 0x40) {
                          *(int *)(*(long *)(local_218 + 0x30) + 0x20) =
                               *(int *)(*(long *)(local_218 + 0x30) + 0x20) + -1;
                          (**(code **)(**(long **)(local_218 + 0x10) + 0x18))
                                    (*(long **)(local_218 + 0x10),
                                     local_210 - *(int *)(local_210 + -4),uVar16 + 0x44);
                        }
                        else {
                          if (*(long *)(local_218 + 0x38) == uVar16 + local_210) {
                            *(long *)(local_218 + 0x38) = local_210;
                            goto LAB_030d7690;
                          }
                          FUN_031cf778();
                        }
                      }
                    }
                    else {
                      *(long *)(local_218 + 0x38) = local_210;
                      if (*(long *)(local_218 + 0x48) == local_210) {
LAB_030d7690:
                        FUN_031cf578();
                      }
                    }
                  }
                  uVar16 = local_220;
                  uVar22 = (ulong)local_220._4_4_;
                  local_220 = (ulong)local_220._4_4_ << 0x20;
                  if ((-1 < (long)uVar16) && (local_228 != 0)) {
                    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,local_228,uVar22 << 4);
                  }
                  lVar19 = local_1f8;
                  uVar16 = (ulong)local_1f8._4_4_;
                  local_1f8 = (ulong)local_1f8._4_4_ << 0x20;
                  if ((-1 < lVar19) && (local_200 != 0)) {
                    (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))
                              (puVar3 + 0x20,local_200,uVar16 << 3);
                  }
                  lVar19 = local_1f0;
                  if ((int)local_1e8 != 0) {
                    lVar20 = (long)(int)local_1e8 << 4;
                    do {
                      lVar37 = lVar19 + lVar20;
                      *(undefined4 *)(lVar37 + -8) = 0;
                      if ((-1 < (int)*(uint *)(lVar37 + -4)) && (*(long *)(lVar37 + -0x10) != 0)) {
                        (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))
                                  (puVar3 + 0x20,*(long *)(lVar37 + -0x10),
                                   (ulong)*(uint *)(lVar37 + -4) << 4);
                      }
                      lVar20 = lVar20 + -0x10;
                      *(undefined8 *)(lVar37 + -0x10) = 0;
                      *(undefined4 *)(lVar37 + -4) = 0x80000000;
                    } while (lVar20 != 0);
                  }
                  lVar19 = local_1e8;
                  uVar16 = (ulong)local_1e8._4_4_;
                  local_1e8 = (ulong)local_1e8._4_4_ << 0x20;
                  if ((-1 < lVar19) && (local_1f0 != 0)) {
                    (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))
                              (puVar3 + 0x20,local_1f0,uVar16 << 4);
                  }
                  if (plVar32 != (long *)0x0) {
                    lVar19 = *plVar32;
                    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
                      puVar43 = (undefined8 *)plVar32[2];
                      uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar16 <= (ulong)plVar32[3]) &&
                         (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                        *puVar43 = &DAT_03c4e575;
                        puVar43[1] = *(undefined8 *)(plVar32[6] + 8);
                      }
                    }
                    puVar43 = (undefined8 *)plVar32[2];
                    uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                    if ((uVar16 <= (ulong)plVar32[3]) &&
                       (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                      *puVar43 = &DAT_03c2d363;
                      uVar10 = nn::os::GetSystemTick();
                      puVar43[1] = uVar10;
                    }
                    if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
                      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
                    }
                  }
                  lVar27 = lVar27 + 1;
                } while (lVar27 < *piVar18);
              }
              lVar42 = local_80;
              uVar16 = (ulong)local_80._4_4_;
              local_80 = (ulong)local_80._4_4_ << 0x20;
              if ((-1 < lVar42) && (local_88 != 0)) {
                (**(code **)(*(long *)puVar3 + 0x20))(puVar3,local_88,uVar16 * 0x30);
              }
              local_88 = 0;
              local_80 = CONCAT44(0x80000000,(undefined4)local_80);
              local_90 = 0;
              if ((-1 < (int)local_8c) && (uStack_98 != 0)) {
                (**(code **)(*(long *)puVar3 + 0x20))(puVar3,uStack_98,(ulong)local_8c << 3);
              }
              uStack_98 = 0;
              local_8c = 0x80000000;
              FUN_030d9810(&local_1e0);
            }
            lVar42 = *(long *)(lVar35 + 0x1000b8);
            if (lVar42 == 0) {
              lVar42 = FUN_00e5d3b4();
              *(long *)(lVar35 + 0x1000b8) = lVar42;
            }
            plVar32 = *(long **)(lVar42 + 0x3e0);
            if (plVar32 != (long *)0x0) {
              lVar42 = *plVar32;
              if (((*(byte *)(lVar42 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
                puVar43 = (undefined8 *)plVar32[2];
                uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                if ((uVar16 <= (ulong)plVar32[3]) &&
                   (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                  *puVar43 = &DAT_03c4e575;
                  puVar43[1] = *(undefined8 *)(plVar32[6] + 8);
                }
              }
              puVar43 = (undefined8 *)plVar32[2];
              uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
              if ((uVar16 <= (ulong)plVar32[3]) &&
                 (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                *puVar43 = "StupdateCutConfig";
                uVar10 = nn::os::GetSystemTick();
                puVar43[1] = uVar10;
              }
              if (*(code **)(lVar42 + 0x20) != (code *)0x0) {
                (**(code **)(lVar42 + 0x20))(*(undefined8 *)(lVar42 + 0x28));
              }
              if (*(code **)(lVar42 + 0x18) != (code *)0x0) {
                (**(code **)(lVar42 + 0x18))("updateCutConfig",0xf,*(undefined8 *)(lVar42 + 0x28));
              }
            }
            iVar14 = local_288[0];
            lVar44 = local_298;
            iVar40 = (int)local_290;
            lVar42 = (long)(int)local_290;
            local_1e0 = 0;
            local_1d8 = -0x8000000000000000;
            local_1d0 = 0;
            local_1c8 = -0x8000000000000000;
            lVar19 = local_298 + lVar42 * 0x58;
            lVar27 = *param_4 + (long)local_288[0] * 0x38;
            lVar25 = *(long *)(lVar27 + 0x18);
            FUN_030dbcd0(lVar15,local_298,lVar19,lVar25,lVar25 + (long)*(int *)(lVar27 + 0x20) * 4,
                         &local_1e0);
            lVar25 = *(long *)(lVar35 + 0x1000b8);
            if (lVar25 == 0) {
              lVar25 = FUN_00e5d3b4();
              *(long *)(lVar35 + 0x1000b8) = lVar25;
            }
            plVar32 = *(long **)(lVar25 + 0x3e0);
            if (plVar32 != (long *)0x0) {
              lVar25 = *plVar32;
              if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
                puVar43 = (undefined8 *)plVar32[2];
                uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
                if ((uVar16 <= (ulong)plVar32[3]) &&
                   (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                  *puVar43 = &DAT_03c4e575;
                  puVar43[1] = *(undefined8 *)(plVar32[6] + 8);
                }
              }
              puVar43 = (undefined8 *)plVar32[2];
              uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
              if ((uVar16 <= (ulong)plVar32[3]) &&
                 (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
                *puVar43 = "StapplyCuts";
                uVar10 = nn::os::GetSystemTick();
                puVar43[1] = uVar10;
              }
              if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
                (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
              }
              if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
                (**(code **)(lVar25 + 0x18))("applyCuts",9,*(undefined8 *)(lVar25 + 0x28));
              }
            }
            FUN_030dbe0c(*(undefined4 *)(param_1 + 0x9c),lVar15,lVar44,lVar19,&local_1e0);
            lVar15 = local_1c8;
            uVar16 = (ulong)local_1c8._4_4_;
            local_1c8 = (ulong)local_1c8._4_4_ << 0x20;
            if ((-1 < lVar15) && (local_1d0 != 0)) {
              (**(code **)(*(long *)puVar3 + 0x20))(puVar3,local_1d0,uVar16 << 4);
            }
            lVar15 = local_1d8;
            uVar16 = (ulong)local_1d8._4_4_;
            local_1d0 = 0;
            local_1c8 = CONCAT44(0x80000000,(undefined4)local_1c8);
            local_1d8 = (ulong)local_1d8._4_4_ << 0x20;
            if ((-1 < lVar15) && (local_1e0 != 0)) {
              (**(code **)(*(long *)puVar3 + 0x20))(puVar3,local_1e0,uVar16 * 0xc);
            }
            if (iVar40 != 0) {
              lVar42 = lVar42 * 0x58;
              do {
                FUN_030da1a4(lVar44 + -0x58 + lVar42);
                lVar42 = lVar42 + -0x58;
              } while (lVar42 != 0);
            }
            uVar22 = local_290;
            uVar16 = local_290 >> 0x20;
            local_290 = uVar16 << 0x20;
            if ((lVar44 != 0) && (-1 < (long)uVar22)) {
              (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))(puVar3 + 0x20,lVar44,uVar16 * 0x58);
            }
            iVar40 = *(int *)(param_1 + 0x28);
          }
        }
        local_288[0] = iVar14 + 1;
      } while (local_288[0] < iVar40);
    }
    lVar15 = *(long *)(lVar35 + 0x1000b8);
    if (lVar15 == 0) {
      lVar15 = FUN_00e5d3b4();
      *(long *)(lVar35 + 0x1000b8) = lVar15;
    }
    plVar32 = *(long **)(lVar15 + 0x3e0);
    if (plVar32 != (long *)0x0) {
      lVar15 = *plVar32;
      if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
        puVar43 = (undefined8 *)plVar32[2];
        uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
        if ((uVar16 <= (ulong)plVar32[3]) && (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
          *puVar43 = &DAT_03c4e575;
          puVar43[1] = *(undefined8 *)(plVar32[6] + 8);
        }
      }
      puVar43 = (undefined8 *)plVar32[2];
      uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar32[3]) && (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
        *puVar43 = "StMatchStreaming";
        uVar10 = nn::os::GetSystemTick();
        puVar43[1] = uVar10;
      }
      if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
        (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
      }
      if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
        (**(code **)(lVar15 + 0x18))("MatchStreaming",0xe,*(undefined8 *)(lVar15 + 0x28));
      }
    }
    lVar42 = local_260;
    iVar40 = (int)local_258;
    lVar15 = (long)(int)local_258;
    FUN_030f0ac8(param_1,&local_280,local_260,local_260 + lVar15 * 0x10);
    if ((local_270 != (undefined *)0x0) && (*(int *)(local_270 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_270,0);
      local_270 = &DAT_03d7702c;
      local_268 = 0;
    }
    lVar44 = local_278;
    uVar16 = (ulong)local_278._4_4_;
    local_278 = (ulong)local_278._4_4_ << 0x20;
    if ((-1 < lVar44) && (local_280 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_280,uVar16 << 2);
    }
    puVar3 = PTR_PTR_047d1a50;
    if (iVar40 != 0) {
      lVar15 = lVar15 << 4;
      do {
        lVar44 = lVar42 + lVar15;
        *(undefined4 *)(lVar44 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar44 + -4)) && (*(long *)(lVar44 + -0x10) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar44 + -0x10),(ulong)*(uint *)(lVar44 + -4) << 2);
        }
        lVar15 = lVar15 + -0x10;
        *(undefined8 *)(lVar44 + -0x10) = 0;
        *(undefined4 *)(lVar44 + -4) = 0x80000000;
      } while (lVar15 != 0);
    }
    lVar15 = local_258;
    uVar16 = (ulong)local_258._4_4_;
    local_258 = (ulong)local_258._4_4_ << 0x20;
    if ((-1 < lVar15) && (local_260 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_260,uVar16 << 4);
    }
  }
  lVar15 = *(long *)(lVar35 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar35 + 0x1000b8) = lVar15;
  }
  plVar32 = *(long **)(lVar15 + 0x3e0);
  if (plVar32 != (long *)0x0) {
    lVar35 = *plVar32;
    if (((*(byte *)(lVar35 + 0x38) & 1) != 0) && (plVar32[6] != 0)) {
      puVar43 = (undefined8 *)plVar32[2];
      uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)plVar32[3]) && (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
        *puVar43 = &DAT_03c4e575;
        puVar43[1] = *(undefined8 *)(plVar32[6] + 8);
      }
    }
    puVar43 = (undefined8 *)plVar32[2];
    uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)plVar32[3]) && (plVar32[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
      *puVar43 = "StcompactSections";
      uVar10 = nn::os::GetSystemTick();
      puVar43[1] = uVar10;
    }
    if (*(code **)(lVar35 + 0x20) != (code *)0x0) {
      (**(code **)(lVar35 + 0x20))(*(undefined8 *)(lVar35 + 0x28));
    }
    if (*(code **)(lVar35 + 0x18) != (code *)0x0) {
      (**(code **)(lVar35 + 0x18))("compactSections",0xf,*(undefined8 *)(lVar35 + 0x28));
    }
  }
  FUN_030f08f4(param_1);
  if (local_250 != (long *)0x0) {
    lVar35 = *local_250;
    if (((*(byte *)(lVar35 + 0x38) & 1) != 0) && (local_250[6] != 0)) {
      puVar43 = (undefined8 *)local_250[2];
      uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)local_250[3]) && (local_250[2] = uVar16, puVar43 != (undefined8 *)0x0))
      {
        *puVar43 = &DAT_03c4e575;
        puVar43[1] = *(undefined8 *)(local_250[6] + 8);
      }
    }
    puVar43 = (undefined8 *)local_250[2];
    uVar16 = (long)puVar43 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)local_250[3]) && (local_250[2] = uVar16, puVar43 != (undefined8 *)0x0)) {
      *puVar43 = &DAT_03c3697b;
      uVar10 = nn::os::GetSystemTick();
      puVar43[1] = uVar10;
    }
    if (*(code **)(lVar35 + 0x20) != (code *)0x0) {
      (**(code **)(lVar35 + 0x20))(*(undefined8 *)(lVar35 + 0x28));
      if (*(code **)(lVar35 + 0x20) != (code *)0x0) {
        (**(code **)(lVar35 + 0x20))(*(undefined8 *)(lVar35 + 0x28));
      }
    }
  }
  return;
}


