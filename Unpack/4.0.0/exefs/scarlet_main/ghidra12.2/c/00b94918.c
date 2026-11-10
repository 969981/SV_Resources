/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b94918; name: FUN_00b94918
 */


void FUN_00b94918(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  string *psVar12;
  void *pvVar13;
  size_t sVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  void *pvVar29;
  undefined8 uVar30;
  long *plVar31;
  long *plVar32;
  long lVar33;
  undefined8 *puVar34;
  long local_2b0;
  ulong local_298;
  undefined8 local_290;
  long local_288;
  undefined8 *local_280;
  undefined8 local_278;
  long local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_168;
  undefined4 local_160;
  char *local_138;
  undefined4 local_130;
  char local_123;
  char local_122;
  char local_121 [25];
  byte *local_108;
  uint local_100;
  byte local_f3;
  char local_f2;
  byte local_f1 [25];
  char *local_d8;
  undefined4 local_d0;
  char local_c3;
  char local_c2;
  char local_c1 [25];
  byte *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  string local_90 [16];
  long local_80;
  long local_78;
  long *plStack_70;
  
  lVar17 = param_3;
  if (param_3 == 0) {
    lVar17 = *(long *)(param_1 + 0x50);
  }
  pbVar9 = (byte *)FUN_00b7a414(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar17 + 8));
  if ((*pbVar9 & 1) == 0) {
    if (*pbVar9 >> 1 != 0) {
LAB_00b94988:
      std::string::append((ulong)pbVar9,'\x01');
    }
  }
  else if (*(long *)(pbVar9 + 8) != 0) goto LAB_00b94988;
  pbVar18 = *(byte **)(param_2 + 0x18);
  pbVar19 = *(byte **)(pbVar18 + 0x10);
  if ((*pbVar18 & 1) == 0) {
    pbVar19 = pbVar18 + 1;
  }
  std::string::append((char *)pbVar9,(ulong)pbVar19);
  FUN_00b8c44c(param_1,*(undefined8 *)(param_2 + 0x18),pbVar9,param_2);
  uVar10 = FUN_00b7a414(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar10;
  param_4[1] = pbVar9;
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  *(undefined2 *)(param_4 + 5) = 0;
  param_4[2] = uVar10;
  param_4[3] = param_3;
  *(undefined4 *)(param_4 + 7) = *(undefined4 *)(param_2 + 0xa0);
  lVar11 = FUN_00b7a704(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0xa0) * 0x30);
  param_4[8] = lVar11;
  lVar17 = tpidr_el0;
  if (0 < *(int *)(param_2 + 0xa0)) {
    lVar25 = 0x28;
    lVar28 = 1;
    puVar2 = PTR_DAT_047dac28 + 0x10;
    while( true ) {
      lVar20 = lVar11 + lVar25;
      lVar33 = *(long *)(*(long *)(param_2 + 0xa8) + lVar28 * 8);
      psVar12 = (string *)FUN_00b7a414(*(undefined8 *)(param_1 + 8),param_4[1]);
      std::string::append((ulong)psVar12,'\x01');
      pbVar19 = *(byte **)(lVar33 + 0x18);
      pbVar9 = *(byte **)(pbVar19 + 0x10);
      if ((*pbVar19 & 1) == 0) {
        pbVar9 = pbVar19 + 1;
      }
      std::string::append((char *)psVar12,(ulong)pbVar9);
      FUN_00b8c44c(param_1,*(undefined8 *)(lVar33 + 0x18),psVar12,lVar33);
      uVar10 = FUN_00b7a414(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar33 + 0x18));
      *(undefined8 *)(lVar20 + -0x28) = uVar10;
      *(string **)(lVar20 + -0x20) = psVar12;
      *(undefined8 **)(lVar20 + -0x18) = param_4;
      *(undefined4 *)(lVar20 + -0xc) = 0;
      *(undefined8 *)(lVar20 + -8) = 0;
      if ((*(byte *)(lVar33 + 0x10) >> 1 & 1) == 0) {
        *(undefined8 *)(lVar11 + lVar25) = 0;
      }
      else {
        local_2b0 = *(long *)(lVar33 + 0x20);
        if (local_2b0 == 0) {
          local_2b0 = *(long *)(*(long *)PTR_DAT_047daca0 + 0x20);
        }
        lVar26 = *(long *)(param_1 + 8);
        plVar31 = *(long **)(lVar17 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar17 + 0x30) = DAT_04859430;
        }
        plVar31 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x50,8);
        plVar31[2] = 0;
        plVar31[3] = 0;
        plVar31[4] = 0;
        plVar31[9] = 0;
        *plVar31 = (long)puVar2;
        plVar31[1] = (long)(plVar31 + 2);
        plVar31[5] = 0;
        plVar31[6] = 0;
        plVar31[7] = 0;
        plVar31[8] = 0;
        puVar34 = *(undefined8 **)(lVar26 + 0xb0);
        if (puVar34 < *(undefined8 **)(lVar26 + 0xb8)) {
          *puVar34 = plVar31;
          *(undefined8 **)(lVar26 + 0xb0) = puVar34 + 1;
        }
        else {
          pvVar29 = *(void **)(lVar26 + 0xa8);
          sVar14 = (long)puVar34 - (long)pvVar29;
          uVar15 = ((long)sVar14 >> 3) + 1;
          if (uVar15 >> 0x3d != 0) goto LAB_00b97a94;
          lVar23 = (long)*(undefined8 **)(lVar26 + 0xb8) - (long)pvVar29;
          uVar22 = lVar23 >> 2;
          if (uVar15 <= uVar22) {
            uVar15 = uVar22;
          }
          if (0xffffffffffffffe < (ulong)(lVar23 >> 3)) {
            uVar15 = 0x1fffffffffffffff;
          }
          if (uVar15 == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            if (uVar15 >> 0x3d != 0) goto LAB_00b97a98;
            plVar32 = *(long **)(lVar17 + 0x30);
            if (plVar32 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar32 = DAT_04859430;
              *(long **)(lVar17 + 0x30) = DAT_04859430;
            }
            pvVar13 = (void *)(**(code **)(*plVar32 + 0x10))(plVar32,uVar15 << 3,8);
          }
          puVar34 = (undefined8 *)((long)pvVar13 + ((long)sVar14 >> 3) * 8);
          *puVar34 = plVar31;
          if (0 < (long)sVar14) {
            memcpy(pvVar13,pvVar29,sVar14);
          }
          *(void **)(lVar26 + 0xa8) = pvVar13;
          *(undefined8 **)(lVar26 + 0xb0) = puVar34 + 1;
          *(void **)(lVar26 + 0xb8) = (void *)((long)pvVar13 + uVar15 * 8);
          if (pvVar29 != (void *)0x0) {
            plVar32 = *(long **)(lVar17 + 0x30);
            if (plVar32 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar32 = DAT_04859430;
              *(long **)(lVar17 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar32 + 0xf8))(plVar32);
            if (((uVar15 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
              (**(code **)(*plVar32 + 0x18))(plVar32,pvVar29,0,8);
            }
            else {
              FUN_00c48fe8(plVar32,pvVar29,0,8);
            }
          }
        }
        local_a8 = (byte *)0x0;
        local_a0 = 0;
        local_98 = (undefined1 *)0x0;
        uVar15 = FUN_00c11da8(local_2b0,&local_a8);
        if ((uVar15 & 1) == 0) {
          if (((ulong)local_a8 & 1) == 0) {
            local_a8 = (byte *)((ulong)local_a8 & 0xffffffffffff0000);
          }
          else {
            *local_98 = 0;
            local_a0 = 0;
          }
        }
        FUN_00c10f68(plVar31,&local_a8);
        puVar7 = local_98;
        if ((((ulong)local_a8 & 1) != 0) && (local_98 != (undefined1 *)0x0)) {
          plVar32 = *(long **)(lVar17 + 0x30);
          if (plVar32 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar32 = DAT_04859430;
            *(long **)(lVar17 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar32 + 0xf8))(plVar32);
          if (((uVar15 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
            (**(code **)(*plVar32 + 0x18))(plVar32,puVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar32,puVar7,0,8);
          }
        }
        *(long **)(lVar11 + lVar25) = plVar31;
        if (0 < (int)plVar31[8]) {
          std::string::string((string *)&local_a8,psVar12);
          std::string::string(local_90,psVar12);
          local_78 = local_2b0;
          plStack_70 = plVar31;
          FUN_00bae78c(param_1 + 0x18,&local_a8);
          lVar11 = local_80;
          if ((((byte)local_90[0] & 1) != 0) && (local_80 != 0)) {
            plVar31 = *(long **)(lVar17 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar17 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,lVar11,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,lVar11,0,8);
            }
          }
          puVar7 = local_98;
          if ((((ulong)local_a8 & 1) != 0) && (local_98 != (undefined1 *)0x0)) {
            plVar31 = *(long **)(lVar17 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar17 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,puVar7,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,puVar7,0,8);
            }
          }
        }
        uVar10 = *(undefined8 *)(lVar20 + -0x28);
        psVar12 = *(string **)(lVar20 + -0x20);
      }
      FUN_00b9a504(param_1,psVar12,param_4,uVar10,lVar33,3,(undefined8 *)(lVar20 + -0x28));
      if (*(int *)(param_2 + 0xa0) <= lVar28) break;
      lVar11 = param_4[8];
      lVar25 = lVar25 + 0x30;
      lVar28 = lVar28 + 1;
    }
  }
  *(undefined4 *)((long)param_4 + 0x2c) = *(undefined4 *)(param_2 + 0x28);
  uVar10 = FUN_00b7a704(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x28) * 0x90);
  param_4[6] = uVar10;
  if ((0 < *(int *)(param_2 + 0x28)) &&
     (FUN_00b9b1e8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x30) + 8),param_4,uVar10,0),
     1 < *(int *)(param_2 + 0x28))) {
    lVar11 = 0x90;
    lVar25 = 2;
    do {
      FUN_00b9b1e8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x30) + lVar25 * 8),param_4,
                   param_4[6] + lVar11,0);
      lVar11 = lVar11 + 0x90;
      bVar1 = lVar25 < *(int *)(param_2 + 0x28);
      lVar25 = lVar25 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_4 + 9) = *(undefined4 *)(param_2 + 0x58);
  uVar10 = FUN_00b7a704(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x58) * 0xa8);
  param_4[10] = uVar10;
  if ((0 < *(int *)(param_2 + 0x58)) &&
     (FUN_00b94918(param_1,*(undefined8 *)(*(long *)(param_2 + 0x60) + 8),param_4,uVar10),
     1 < *(int *)(param_2 + 0x58))) {
    lVar11 = 0xa8;
    lVar25 = 2;
    do {
      FUN_00b94918(param_1,*(undefined8 *)(*(long *)(param_2 + 0x60) + lVar25 * 8),param_4,
                   param_4[10] + lVar11);
      lVar11 = lVar11 + 0xa8;
      bVar1 = lVar25 < *(int *)(param_2 + 0x58);
      lVar25 = lVar25 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_4 + 0xb) = *(undefined4 *)(param_2 + 0x70);
  uVar10 = FUN_00b7a704(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x70) * 0x38);
  param_4[0xc] = uVar10;
  if ((0 < *(int *)(param_2 + 0x70)) &&
     (FUN_00b97bec(param_1,*(undefined8 *)(*(long *)(param_2 + 0x78) + 8),param_4,uVar10),
     1 < *(int *)(param_2 + 0x70))) {
    lVar11 = 0x38;
    lVar25 = 2;
    do {
      FUN_00b97bec(param_1,*(undefined8 *)(*(long *)(param_2 + 0x78) + lVar25 * 8),param_4,
                   param_4[0xc] + lVar11);
      lVar11 = lVar11 + 0x38;
      bVar1 = lVar25 < *(int *)(param_2 + 0x70);
      lVar25 = lVar25 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_4 + 0xd) = *(undefined4 *)(param_2 + 0x88);
  lVar11 = FUN_00b7a704(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x88) << 3);
  param_4[0xe] = lVar11;
  if (0 < *(int *)(param_2 + 0x88)) {
    lVar25 = 0;
    while( true ) {
      lVar28 = *(long *)(*(long *)(param_2 + 0x90) + lVar25 * 8 + 8);
      iVar8 = *(int *)(lVar28 + 0x18);
      piVar3 = (int *)(lVar11 + lVar25 * 8);
      *piVar3 = iVar8;
      iVar21 = *(int *)(lVar28 + 0x1c);
      piVar3[1] = iVar21;
      if (iVar8 < 1) {
        FUN_00b8a120(param_1,param_4[1],lVar28,1,"Extension numbers must be positive integers.");
        iVar8 = *piVar3;
        iVar21 = piVar3[1];
      }
      if (iVar21 <= iVar8) {
        FUN_00b8a120(param_1,param_4[1],lVar28,1,
                     "Extension range end number must be greater than start number.");
      }
      lVar25 = lVar25 + 1;
      if (*(int *)(param_2 + 0x88) <= lVar25) break;
      lVar11 = param_4[0xe];
    }
  }
  *(undefined4 *)(param_4 + 0xf) = *(undefined4 *)(param_2 + 0x40);
  uVar10 = FUN_00b7a704(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x40) * 0x90);
  param_4[0x10] = uVar10;
  if ((0 < *(int *)(param_2 + 0x40)) &&
     (FUN_00b9b1e8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + 8),param_4,uVar10,1),
     1 < *(int *)(param_2 + 0x40))) {
    lVar11 = 0x90;
    lVar25 = 2;
    do {
      FUN_00b9b1e8(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + lVar25 * 8),param_4,
                   param_4[0x10] + lVar11,1);
      lVar11 = lVar11 + 0x90;
      bVar1 = lVar25 < *(int *)(param_2 + 0x40);
      lVar25 = lVar25 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_4 + 0x11) = *(undefined4 *)(param_2 + 0xc0);
  lVar11 = FUN_00b7a704(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0xc0) << 3);
  param_4[0x12] = lVar11;
  if (0 < *(int *)(param_2 + 0xc0)) {
    lVar25 = 0;
    while( true ) {
      lVar28 = *(long *)(*(long *)(param_2 + 200) + lVar25 * 8 + 8);
      iVar8 = *(int *)(lVar28 + 0x18);
      piVar3 = (int *)(lVar11 + lVar25 * 8);
      *piVar3 = iVar8;
      piVar3[1] = *(int *)(lVar28 + 0x1c);
      if (iVar8 < 1) {
        FUN_00b8a120(param_1,param_4[1],lVar28,1,"Reserved numbers must be positive integers.");
      }
      lVar25 = lVar25 + 1;
      if (*(int *)(param_2 + 0xc0) <= lVar25) break;
      lVar11 = param_4[0x12];
    }
  }
  uVar4 = *(uint *)(param_2 + 0xd8);
  *(uint *)(param_4 + 0x13) = uVar4;
  uVar10 = FUN_00b7a704(*(undefined8 *)(param_1 + 8),uVar4 << 3);
  param_4[0x14] = uVar10;
  if (0 < (int)uVar4) {
    lVar11 = 0;
    do {
      uVar10 = FUN_00b7a414(*(undefined8 *)(param_1 + 8),
                            *(undefined8 *)(*(long *)(param_2 + 0xe0) + lVar11 + 8));
      *(undefined8 *)(param_4[0x14] + lVar11) = uVar10;
      lVar11 = lVar11 + 8;
    } while ((ulong)uVar4 * 8 != lVar11);
  }
  if (*(char *)(param_2 + 0x10) < '\0') {
    lVar11 = *(long *)(param_2 + 0xb0);
    if (lVar11 == 0) {
      lVar11 = *(long *)(*(long *)PTR_DAT_047daca8 + 0xb0);
    }
    psVar12 = (string *)param_4[1];
    lVar25 = *(long *)(param_1 + 8);
    plVar31 = *(long **)(lVar17 + 0x30);
    if (plVar31 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar31 = DAT_04859430;
      *(long **)(lVar17 + 0x30) = DAT_04859430;
    }
    plVar31 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x58,8);
    puVar2 = PTR_DAT_047dac38 + 0x10;
    plVar31[2] = 0;
    plVar31[3] = 0;
    plVar31[4] = 0;
    plVar31[9] = 0;
    *plVar31 = (long)puVar2;
    plVar31[1] = (long)(plVar31 + 2);
    *(undefined4 *)(plVar31 + 10) = 0;
    plVar31[5] = 0;
    plVar31[6] = 0;
    plVar31[7] = 0;
    plVar31[8] = 0;
    puVar34 = *(undefined8 **)(lVar25 + 0xb0);
    if (puVar34 < *(undefined8 **)(lVar25 + 0xb8)) {
      *puVar34 = plVar31;
      *(undefined8 **)(lVar25 + 0xb0) = puVar34 + 1;
LAB_00b95728:
      local_a8 = (byte *)0x0;
      local_a0 = 0;
      local_98 = (undefined1 *)0x0;
      uVar15 = FUN_00c11da8(lVar11,&local_a8);
      if ((uVar15 & 1) == 0) {
        if (((ulong)local_a8 & 1) == 0) {
          local_a8 = (byte *)((ulong)local_a8 & 0xffffffffffff0000);
        }
        else {
          *local_98 = 0;
          local_a0 = 0;
        }
      }
      FUN_00c10f68(plVar31,&local_a8);
      puVar7 = local_98;
      if ((((ulong)local_a8 & 1) != 0) && (local_98 != (undefined1 *)0x0)) {
        plVar32 = *(long **)(lVar17 + 0x30);
        if (plVar32 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar32 = DAT_04859430;
          *(long **)(lVar17 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar32 + 0xf8))(plVar32);
        if (((uVar15 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
          (**(code **)(*plVar32 + 0x18))(plVar32,puVar7,0,8);
        }
        else {
          FUN_00c48fe8(plVar32,puVar7,0,8);
        }
      }
      param_4[4] = plVar31;
      if (0 < (int)plVar31[8]) {
        std::string::string((string *)&local_a8,psVar12);
        std::string::string(local_90,psVar12);
        local_78 = lVar11;
        plStack_70 = plVar31;
        FUN_00bae78c(param_1 + 0x18,&local_a8);
        if ((((byte)local_90[0] & 1) != 0) && (local_80 != 0)) {
          plVar31 = *(long **)(lVar17 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar17 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar15 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,local_80,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,local_80,0,8);
          }
        }
        puVar7 = local_98;
        if ((((ulong)local_a8 & 1) != 0) && (local_98 != (undefined1 *)0x0)) {
          plVar31 = *(long **)(lVar17 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar17 + 0x30) = DAT_04859430;
          }
          uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar15 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,puVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,puVar7,0,8);
          }
        }
      }
      goto LAB_00b957c8;
    }
    pvVar29 = *(void **)(lVar25 + 0xa8);
    sVar14 = (long)puVar34 - (long)pvVar29;
    uVar15 = ((long)sVar14 >> 3) + 1;
    if (uVar15 >> 0x3d != 0) {
LAB_00b97a94:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar28 = (long)*(undefined8 **)(lVar25 + 0xb8) - (long)pvVar29;
    uVar22 = lVar28 >> 2;
    if (uVar15 <= uVar22) {
      uVar15 = uVar22;
    }
    if (0xffffffffffffffe < (ulong)(lVar28 >> 3)) {
      uVar15 = 0x1fffffffffffffff;
    }
    if (uVar15 == 0) {
      pvVar13 = (void *)0x0;
LAB_00b956a4:
      puVar34 = (undefined8 *)((long)pvVar13 + ((long)sVar14 >> 3) * 8);
      *puVar34 = plVar31;
      if (0 < (long)sVar14) {
        memcpy(pvVar13,pvVar29,sVar14);
      }
      *(void **)(lVar25 + 0xa8) = pvVar13;
      *(undefined8 **)(lVar25 + 0xb0) = puVar34 + 1;
      *(void **)(lVar25 + 0xb8) = (void *)((long)pvVar13 + uVar15 * 8);
      if (pvVar29 != (void *)0x0) {
        plVar32 = *(long **)(lVar17 + 0x30);
        if (plVar32 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar32 = DAT_04859430;
          *(long **)(lVar17 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar32 + 0xf8))(plVar32);
        if (((uVar15 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
          (**(code **)(*plVar32 + 0x18))(plVar32,pvVar29,0,8);
        }
        else {
          FUN_00c48fe8(plVar32,pvVar29,0,8);
        }
      }
      goto LAB_00b95728;
    }
    if (uVar15 >> 0x3d == 0) {
      plVar32 = *(long **)(lVar17 + 0x30);
      if (plVar32 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar32 = DAT_04859430;
        *(long **)(lVar17 + 0x30) = DAT_04859430;
      }
      pvVar13 = (void *)(**(code **)(*plVar32 + 0x10))(plVar32,uVar15 << 3,8);
      goto LAB_00b956a4;
    }
LAB_00b97a98:
    FUN_01f6e360();
LAB_00b97a9c:
    iVar8 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar8 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  else {
    param_4[4] = 0;
LAB_00b957c8:
    FUN_00b9a504(param_1,param_4[1],param_3,*param_4,param_2,1,param_4);
    iVar8 = *(int *)(param_2 + 0xc0);
    if (0 < iVar8) {
      lVar11 = 1;
      lVar25 = 0;
      do {
        lVar28 = lVar25 + 1;
        if (lVar28 < iVar8) {
          lVar33 = *(long *)(param_2 + 200);
          lVar26 = *(long *)(lVar33 + lVar25 * 8 + 8);
          lVar20 = lVar11;
          while( true ) {
            lVar23 = *(long *)(lVar33 + lVar20 * 8 + 8);
            iVar21 = *(int *)(lVar23 + 0x18);
            if ((iVar21 < *(int *)(lVar26 + 0x1c)) &&
               (*(int *)(lVar26 + 0x18) < *(int *)(lVar23 + 0x1c))) {
              uVar10 = param_4[1];
              uVar30 = *(undefined8 *)(lVar33 + lVar25 * 8 + 8);
              local_98 = (undefined1 *)((ulong)local_98 & 0xffffffffffffff);
              if (iVar21 < 0) {
                if (iVar21 < -9) {
                  iVar21 = iVar21 + 10;
                  cVar6 = ((char)((ulong)((long)iVar21 * 0x66666667) >> 0x22) -
                          (char)(iVar21 >> 0x1f)) * '\n' - (char)iVar21;
                  iVar8 = (int)((ulong)((long)iVar21 * -0x66666667) >> 0x20);
                  pbVar9 = (byte *)((long)&local_98 + 5);
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_a8 = pbVar9 + -1;
                    *pbVar9 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                    bVar1 = 9 < iVar8;
                    pbVar9 = local_a8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)iVar21;
                  local_a8 = (byte *)((long)&local_98 + 5);
                }
                local_98 = (undefined1 *)(ulong)CONCAT16(cVar6 + '0',(undefined6)local_98);
                *local_a8 = 0x2d;
              }
              else {
                local_a8 = (byte *)((long)&local_98 + 7);
                do {
                  local_a8 = local_a8 + -1;
                  *local_a8 = (char)iVar21 + (char)(iVar21 / 10) * -10 + 0x30;
                  bVar1 = 9 < iVar21;
                  iVar21 = iVar21 / 10;
                } while (bVar1);
              }
              sVar14 = strlen((char *)local_a8);
              local_a0 = CONCAT44(local_a0._4_4_,(int)sVar14);
              iVar8 = *(int *)(lVar23 + 0x1c);
              local_c1[0] = '\0';
              if (iVar8 < 1) {
                if (iVar8 < -8) {
                  iVar8 = iVar8 + 9;
                  cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) - (char)(iVar8 >> 0x1f)
                          ) * '\n' - (char)iVar8;
                  iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                  pcVar16 = &local_c3;
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_d8 = pcVar16 + -1;
                    *pcVar16 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                    bVar1 = 9 < iVar8;
                    pcVar16 = local_d8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)(iVar8 + -1);
                  local_d8 = &local_c3;
                }
                local_c2 = cVar6 + '0';
                *local_d8 = '-';
              }
              else {
                local_d8 = local_c1;
                iVar8 = iVar8 + -1;
                do {
                  local_d8 = local_d8 + -1;
                  *local_d8 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                  bVar1 = 9 < iVar8;
                  iVar8 = iVar8 / 10;
                } while (bVar1);
              }
              sVar14 = strlen(local_d8);
              iVar8 = *(int *)(lVar26 + 0x18);
              local_f1[0] = 0;
              if (iVar8 < 0) {
                if (iVar8 < -9) {
                  iVar8 = iVar8 + 10;
                  cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) - (char)(iVar8 >> 0x1f)
                          ) * '\n' - (char)iVar8;
                  iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                  pbVar9 = &local_f3;
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_108 = pbVar9 + -1;
                    *pbVar9 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                    bVar1 = 9 < iVar8;
                    pbVar9 = local_108;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)iVar8;
                  local_108 = &local_f3;
                }
                local_f2 = cVar6 + '0';
                *local_108 = 0x2d;
              }
              else {
                local_108 = local_f1;
                do {
                  local_108 = local_108 + -1;
                  *local_108 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                  bVar1 = 9 < iVar8;
                  iVar8 = iVar8 / 10;
                } while (bVar1);
              }
              local_d0 = (int)sVar14;
              sVar14 = strlen((char *)local_108);
              iVar8 = *(int *)(lVar26 + 0x1c);
              local_121[0] = '\0';
              if (iVar8 < 1) {
                if (iVar8 < -8) {
                  iVar8 = iVar8 + 9;
                  cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) - (char)(iVar8 >> 0x1f)
                          ) * '\n' - (char)iVar8;
                  iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                  pcVar16 = &local_123;
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_138 = pcVar16 + -1;
                    *pcVar16 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                    bVar1 = 9 < iVar8;
                    pcVar16 = local_138;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)(iVar8 + -1);
                  local_138 = &local_123;
                }
                local_122 = cVar6 + '0';
                *local_138 = '-';
              }
              else {
                local_138 = local_121;
                iVar8 = iVar8 + -1;
                do {
                  local_138 = local_138 + -1;
                  *local_138 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                  bVar1 = 9 < iVar8;
                  iVar8 = iVar8 / 10;
                } while (bVar1);
              }
              local_100 = (uint)sVar14;
              sVar14 = strlen(local_138);
              local_278 = 0;
              local_270 = 0;
              local_130 = (undefined4)sVar14;
              local_168 = 0;
              local_160 = 0xffffffff;
              local_198 = 0;
              local_190 = 0xffffffff;
              local_1c8 = 0;
              local_1c0 = 0xffffffff;
              local_1f8 = 0;
              local_1f0 = 0xffffffff;
              local_228 = 0;
              local_220 = 0xffffffff;
              local_258 = 0;
              local_250 = 0xffffffff;
              local_280 = (undefined8 *)0x0;
              FUN_00c2ce10(&local_280,
                           "Reserved range $0 to $1 overlaps with already-defined range $2 to $3.",
                           &local_a8,&local_d8,&local_108,&local_138,&local_168,&local_198,
                           &local_1c8,&local_1f8,&local_228,&local_258);
              FUN_00b89f94(param_1,uVar10,uVar30,1,&local_280);
              lVar33 = local_270;
              if ((((ulong)local_280 & 1) != 0) && (local_270 != 0)) {
                plVar31 = *(long **)(lVar17 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar17 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar15 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,lVar33,0,8);
                }
                else {
                  FUN_00c48fe8(plVar31,lVar33,0,8);
                }
              }
              iVar8 = *(int *)(param_2 + 0xc0);
            }
            lVar20 = lVar20 + 1;
            if (iVar8 <= (int)lVar20) break;
            lVar33 = *(long *)(param_2 + 200);
          }
        }
        lVar11 = lVar11 + 1;
        lVar25 = lVar28;
      } while (lVar28 < iVar8);
    }
    local_270 = 0;
    uStack_268 = 0;
    local_260 = 0x3f800000;
    local_280 = (undefined8 *)0x0;
    local_278 = 0;
    if (0 < *(int *)(param_2 + 0xd8)) {
      lVar11 = 0;
      do {
        pbVar9 = *(byte **)(*(long *)(param_2 + 0xe0) + lVar11 * 8 + 8);
        lVar25 = FUN_00baec68(&local_280,pbVar9);
        if (lVar25 == 0) {
          FUN_00b7e9c0(&local_280,pbVar9);
        }
        else {
          local_a8 = *(byte **)(pbVar9 + 0x10);
          if ((*pbVar9 & 1) == 0) {
            local_a8 = pbVar9 + 1;
          }
          local_d8 = (char *)0x0;
          local_d0 = 0xffffffff;
          local_108 = (byte *)0x0;
          local_100 = 0xffffffff;
          local_138 = (char *)0x0;
          local_130 = 0xffffffff;
          local_168 = 0;
          uVar4 = (uint)(*pbVar9 >> 1);
          if ((*pbVar9 & 1) != 0) {
            uVar4 = (uint)*(undefined8 *)(pbVar9 + 8);
          }
          local_160 = 0xffffffff;
          local_198 = 0;
          local_190 = 0xffffffff;
          local_1c8 = 0;
          local_1c0 = 0xffffffff;
          local_1f8 = 0;
          local_1f0 = 0xffffffff;
          local_228 = 0;
          local_220 = 0xffffffff;
          local_258 = 0;
          local_a0 = CONCAT44(local_a0._4_4_,uVar4);
          local_250 = 0xffffffff;
          local_298 = 0;
          local_290 = 0;
          local_288 = 0;
          FUN_00c2ce10(&local_298,"Field name \"$0\" is reserved multiple times.",&local_a8,
                       &local_d8,&local_108,&local_138,&local_168,&local_198,&local_1c8,&local_1f8,
                       &local_228,&local_258);
          FUN_00b89f94(param_1,pbVar9,param_2,0,&local_298);
          lVar25 = local_288;
          if (((local_298 & 1) != 0) && (local_288 != 0)) {
            plVar31 = *(long **)(lVar17 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar17 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,lVar25,0,8);
            }
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_2 + 0xd8));
    }
    if (0 < *(int *)((long)param_4 + 0x2c)) {
      lVar11 = 0;
      do {
        lVar25 = param_4[6];
        puVar34 = (undefined8 *)(lVar25 + lVar11 * 0x90);
        iVar8 = *(int *)(param_4 + 0xd);
        if (0 < iVar8) {
          lVar28 = 0;
          lVar20 = lVar25 + lVar11 * 0x90;
          piVar3 = (int *)(lVar20 + 0x38);
          do {
            iVar5 = *piVar3;
            iVar21 = *(int *)(param_4[0xe] + lVar28 * 8);
            if ((iVar21 <= iVar5) &&
               (piVar24 = (int *)(param_4[0xe] + lVar28 * 8 + 4), iVar5 < *piVar24)) {
              uVar10 = *(undefined8 *)(lVar20 + 8);
              uVar30 = *(undefined8 *)(*(long *)(param_2 + 0x90) + lVar28 * 8 + 8);
              local_98 = (undefined1 *)((ulong)local_98 & 0xffffffffffffff);
              if (iVar21 < 0) {
                if (iVar21 < -9) {
                  iVar21 = iVar21 + 10;
                  cVar6 = ((char)((ulong)((long)iVar21 * 0x66666667) >> 0x22) -
                          (char)(iVar21 >> 0x1f)) * '\n' - (char)iVar21;
                  iVar8 = (int)((ulong)((long)iVar21 * -0x66666667) >> 0x20);
                  pbVar9 = (byte *)((long)&local_98 + 5);
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_a8 = pbVar9 + -1;
                    *pbVar9 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                    bVar1 = 9 < iVar8;
                    pbVar9 = local_a8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)iVar21;
                  local_a8 = (byte *)((long)&local_98 + 5);
                }
                local_98 = (undefined1 *)(ulong)CONCAT16(cVar6 + '0',(undefined6)local_98);
                *local_a8 = 0x2d;
              }
              else {
                local_a8 = (byte *)((long)&local_98 + 7);
                do {
                  local_a8 = local_a8 + -1;
                  *local_a8 = (char)iVar21 + (char)(iVar21 / 10) * -10 + 0x30;
                  bVar1 = 9 < iVar21;
                  iVar21 = iVar21 / 10;
                } while (bVar1);
              }
              sVar14 = strlen((char *)local_a8);
              local_a0 = CONCAT44(local_a0._4_4_,(int)sVar14);
              iVar8 = *piVar24;
              local_c1[0] = '\0';
              if (iVar8 < 1) {
                if (iVar8 < -8) {
                  iVar8 = iVar8 + 9;
                  cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) - (char)(iVar8 >> 0x1f)
                          ) * '\n' - (char)iVar8;
                  iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                  pcVar16 = &local_c3;
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_d8 = pcVar16 + -1;
                    *pcVar16 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                    bVar1 = 9 < iVar8;
                    pcVar16 = local_d8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)(iVar8 + -1);
                  local_d8 = &local_c3;
                }
                local_c2 = cVar6 + '0';
                *local_d8 = '-';
              }
              else {
                local_d8 = local_c1;
                iVar8 = iVar8 + -1;
                do {
                  local_d8 = local_d8 + -1;
                  *local_d8 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                  bVar1 = 9 < iVar8;
                  iVar8 = iVar8 / 10;
                } while (bVar1);
              }
              sVar14 = strlen(local_d8);
              pbVar19 = (byte *)*puVar34;
              pbVar9 = *(byte **)(pbVar19 + 0x10);
              if ((*pbVar19 & 1) == 0) {
                pbVar9 = pbVar19 + 1;
              }
              uVar4 = (uint)(*pbVar19 >> 1);
              if ((*pbVar19 & 1) != 0) {
                uVar4 = (uint)*(undefined8 *)(pbVar19 + 8);
              }
              iVar8 = *piVar3;
              local_121[0] = '\0';
              if (iVar8 < 0) {
                if (iVar8 < -9) {
                  iVar8 = iVar8 + 10;
                  cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) - (char)(iVar8 >> 0x1f)
                          ) * '\n' - (char)iVar8;
                  iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                  pcVar16 = &local_123;
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_138 = pcVar16 + -1;
                    *pcVar16 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                    bVar1 = 9 < iVar8;
                    pcVar16 = local_138;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)iVar8;
                  local_138 = &local_123;
                }
                local_122 = cVar6 + '0';
                *local_138 = '-';
              }
              else {
                local_138 = local_121;
                do {
                  local_138 = local_138 + -1;
                  *local_138 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                  bVar1 = 9 < iVar8;
                  iVar8 = iVar8 / 10;
                } while (bVar1);
              }
              local_108 = pbVar9;
              local_100 = uVar4;
              local_d0 = (int)sVar14;
              sVar14 = strlen(local_138);
              local_290 = 0;
              local_288 = 0;
              local_130 = (undefined4)sVar14;
              local_168 = 0;
              local_160 = 0xffffffff;
              local_198 = 0;
              local_190 = 0xffffffff;
              local_1c8 = 0;
              local_1c0 = 0xffffffff;
              local_1f8 = 0;
              local_1f0 = 0xffffffff;
              local_228 = 0;
              local_220 = 0xffffffff;
              local_258 = 0;
              local_250 = 0xffffffff;
              local_298 = 0;
              FUN_00c2ce10(&local_298,"Extension range $0 to $1 includes field \"$2\" ($3).",
                           &local_a8,&local_d8,&local_108,&local_138,&local_168,&local_198,
                           &local_1c8,&local_1f8,&local_228,&local_258);
              FUN_00b89f94(param_1,uVar10,uVar30,1,&local_298);
              lVar33 = local_288;
              if (((local_298 & 1) != 0) && (local_288 != 0)) {
                plVar31 = *(long **)(lVar17 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar17 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar15 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,lVar33,0,8);
                }
                else {
                  FUN_00c48fe8(plVar31,lVar33,0,8);
                }
              }
              iVar8 = *(int *)(param_4 + 0xd);
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 < iVar8);
        }
        iVar8 = *(int *)(param_4 + 0x11);
        if (0 < iVar8) {
          lVar28 = 0;
          lVar20 = lVar25 + lVar11 * 0x90;
          piVar3 = (int *)(lVar20 + 0x38);
          do {
            iVar21 = *piVar3;
            if ((*(int *)(param_4[0x12] + lVar28 * 8) <= iVar21) &&
               (iVar21 < *(int *)(param_4[0x12] + lVar28 * 8 + 4))) {
              uVar10 = *(undefined8 *)(*(long *)(param_2 + 200) + lVar28 * 8 + 8);
              pbVar19 = (byte *)*puVar34;
              pbVar9 = *(byte **)(pbVar19 + 0x10);
              if ((*pbVar19 & 1) == 0) {
                pbVar9 = pbVar19 + 1;
              }
              uVar30 = *(undefined8 *)(lVar20 + 8);
              uVar4 = (uint)(*pbVar19 >> 1);
              if ((*pbVar19 & 1) != 0) {
                uVar4 = (uint)*(undefined8 *)(pbVar19 + 8);
              }
              local_a0 = CONCAT44(local_a0._4_4_,uVar4);
              iVar8 = *piVar3;
              local_c1[0] = '\0';
              if (iVar8 < 0) {
                if (iVar8 < -9) {
                  iVar8 = iVar8 + 10;
                  cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) - (char)(iVar8 >> 0x1f)
                          ) * '\n' - (char)iVar8;
                  iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                  pcVar16 = &local_c3;
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_d8 = pcVar16 + -1;
                    *pcVar16 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                    bVar1 = 9 < iVar8;
                    pcVar16 = local_d8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)iVar8;
                  local_d8 = &local_c3;
                }
                local_c2 = cVar6 + '0';
                *local_d8 = '-';
              }
              else {
                local_d8 = local_c1;
                do {
                  local_d8 = local_d8 + -1;
                  *local_d8 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                  bVar1 = 9 < iVar8;
                  iVar8 = iVar8 / 10;
                } while (bVar1);
              }
              local_a8 = pbVar9;
              sVar14 = strlen(local_d8);
              local_290 = 0;
              local_288 = 0;
              local_d0 = (undefined4)sVar14;
              local_108 = (byte *)0x0;
              local_100 = 0xffffffff;
              local_138 = (char *)0x0;
              local_130 = 0xffffffff;
              local_168 = 0;
              local_160 = 0xffffffff;
              local_198 = 0;
              local_190 = 0xffffffff;
              local_1c8 = 0;
              local_1c0 = 0xffffffff;
              local_1f8 = 0;
              local_1f0 = 0xffffffff;
              local_228 = 0;
              local_220 = 0xffffffff;
              local_258 = 0;
              local_250 = 0xffffffff;
              local_298 = 0;
              FUN_00c2ce10(&local_298,"Field \"$0\" uses reserved number $1.",&local_a8,&local_d8,
                           &local_108,&local_138,&local_168,&local_198,&local_1c8,&local_1f8,
                           &local_228,&local_258);
              FUN_00b89f94(param_1,uVar30,uVar10,1,&local_298);
              lVar33 = local_288;
              if (((local_298 & 1) != 0) && (local_288 != 0)) {
                plVar31 = *(long **)(lVar17 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar17 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar15 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,lVar33,0,8);
                }
                else {
                  FUN_00c48fe8(plVar31,lVar33,0,8);
                }
              }
              iVar8 = *(int *)(param_4 + 0x11);
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 < iVar8);
        }
        pbVar9 = (byte *)*puVar34;
        lVar28 = FUN_00baec68(&local_280,pbVar9);
        if (lVar28 != 0) {
          local_a8 = *(byte **)(pbVar9 + 0x10);
          if ((*pbVar9 & 1) == 0) {
            local_a8 = pbVar9 + 1;
          }
          uVar30 = *(undefined8 *)(*(long *)(param_2 + 0x30) + lVar11 * 8 + 8);
          uVar10 = *(undefined8 *)(lVar25 + lVar11 * 0x90 + 8);
          local_d8 = (char *)0x0;
          local_d0 = 0xffffffff;
          local_108 = (byte *)0x0;
          local_100 = 0xffffffff;
          local_138 = (char *)0x0;
          local_130 = 0xffffffff;
          local_168 = 0;
          local_160 = 0xffffffff;
          local_198 = 0;
          local_190 = 0xffffffff;
          local_1c8 = 0;
          local_1c0 = 0xffffffff;
          local_1f8 = 0;
          local_1f0 = 0xffffffff;
          local_228 = 0;
          uVar4 = (uint)(*pbVar9 >> 1);
          if ((*pbVar9 & 1) != 0) {
            uVar4 = (uint)*(undefined8 *)(pbVar9 + 8);
          }
          local_a0 = CONCAT44(local_a0._4_4_,uVar4);
          local_290 = 0;
          local_288 = 0;
          local_220 = 0xffffffff;
          local_258 = 0;
          local_250 = 0xffffffff;
          local_298 = 0;
          FUN_00c2ce10(&local_298,"Field name \"$0\" is reserved.",&local_a8,&local_d8,&local_108,
                       &local_138,&local_168,&local_198,&local_1c8,&local_1f8,&local_228,&local_258)
          ;
          FUN_00b89f94(param_1,uVar10,uVar30,0,&local_298);
          lVar25 = local_288;
          if (((local_298 & 1) != 0) && (local_288 != 0)) {
            plVar31 = *(long **)(lVar17 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar17 + 0x30) = DAT_04859430;
            }
            uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar15 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,lVar25,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,lVar25,0,8);
            }
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)((long)param_4 + 0x2c));
    }
    iVar8 = *(int *)(param_4 + 0xd);
    puVar34 = local_280;
    plVar31 = (long *)local_270;
    if (0 < iVar8) {
      pbVar9 = (byte *)((long)&local_98 + 5);
      lVar11 = 0;
      lVar25 = 1;
      do {
        piVar3 = (int *)(param_4[0xe] + lVar11 * 8);
        iVar21 = *(int *)(param_4 + 0x11);
        if (0 < iVar21) {
          lVar28 = 0;
          do {
            piVar24 = (int *)(param_4[0x12] + lVar28 * 8);
            if (*piVar24 < piVar3[1]) {
              iVar8 = *piVar3;
              if (iVar8 < piVar24[1]) {
                uVar10 = param_4[1];
                uVar30 = *(undefined8 *)(*(long *)(param_2 + 0x90) + lVar28 * 8 + 8);
                local_98 = (undefined1 *)((ulong)local_98 & 0xffffffffffffff);
                if (iVar8 < 0) {
                  if (iVar8 < -9) {
                    iVar8 = iVar8 + 10;
                    cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) -
                            (char)(iVar8 >> 0x1f)) * '\n' - (char)iVar8;
                    iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                    pbVar19 = pbVar9;
                    iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                    do {
                      local_a8 = pbVar19 + -1;
                      *pbVar19 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                      bVar1 = 9 < iVar8;
                      pbVar19 = local_a8;
                      iVar8 = iVar8 / 10;
                    } while (bVar1);
                  }
                  else {
                    cVar6 = -(char)iVar8;
                    local_a8 = pbVar9;
                  }
                  local_98 = (undefined1 *)(ulong)CONCAT16(cVar6 + '0',(undefined6)local_98);
                  *local_a8 = 0x2d;
                }
                else {
                  local_a8 = (byte *)((long)&local_98 + 7);
                  do {
                    local_a8 = local_a8 + -1;
                    *local_a8 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                    bVar1 = 9 < iVar8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                sVar14 = strlen((char *)local_a8);
                local_a0 = CONCAT44(local_a0._4_4_,(int)sVar14);
                iVar8 = piVar3[1];
                local_c1[0] = '\0';
                if (iVar8 < 1) {
                  if (iVar8 < -8) {
                    iVar8 = iVar8 + 9;
                    cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) -
                            (char)(iVar8 >> 0x1f)) * '\n' - (char)iVar8;
                    iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                    pcVar16 = &local_c3;
                    iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                    do {
                      local_d8 = pcVar16 + -1;
                      *pcVar16 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                      bVar1 = 9 < iVar8;
                      pcVar16 = local_d8;
                      iVar8 = iVar8 / 10;
                    } while (bVar1);
                  }
                  else {
                    cVar6 = -(char)(iVar8 + -1);
                    local_d8 = &local_c3;
                  }
                  local_c2 = cVar6 + '0';
                  *local_d8 = '-';
                }
                else {
                  local_d8 = local_c1;
                  iVar8 = iVar8 + -1;
                  do {
                    local_d8 = local_d8 + -1;
                    *local_d8 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                    bVar1 = 9 < iVar8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                sVar14 = strlen(local_d8);
                iVar8 = *piVar24;
                local_f1[0] = 0;
                if (iVar8 < 0) {
                  if (iVar8 < -9) {
                    iVar8 = iVar8 + 10;
                    cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) -
                            (char)(iVar8 >> 0x1f)) * '\n' - (char)iVar8;
                    iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                    pbVar19 = &local_f3;
                    iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                    do {
                      local_108 = pbVar19 + -1;
                      *pbVar19 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                      bVar1 = 9 < iVar8;
                      pbVar19 = local_108;
                      iVar8 = iVar8 / 10;
                    } while (bVar1);
                  }
                  else {
                    cVar6 = -(char)iVar8;
                    local_108 = &local_f3;
                  }
                  local_f2 = cVar6 + '0';
                  *local_108 = 0x2d;
                }
                else {
                  local_108 = local_f1;
                  do {
                    local_108 = local_108 + -1;
                    *local_108 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                    bVar1 = 9 < iVar8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                local_d0 = (int)sVar14;
                sVar14 = strlen((char *)local_108);
                iVar8 = piVar24[1];
                local_121[0] = '\0';
                if (iVar8 < 1) {
                  if (iVar8 < -8) {
                    iVar8 = iVar8 + 9;
                    cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) -
                            (char)(iVar8 >> 0x1f)) * '\n' - (char)iVar8;
                    iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                    pcVar16 = &local_123;
                    iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                    do {
                      local_138 = pcVar16 + -1;
                      *pcVar16 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                      bVar1 = 9 < iVar8;
                      pcVar16 = local_138;
                      iVar8 = iVar8 / 10;
                    } while (bVar1);
                  }
                  else {
                    cVar6 = -(char)(iVar8 + -1);
                    local_138 = &local_123;
                  }
                  local_122 = cVar6 + '0';
                  *local_138 = '-';
                }
                else {
                  local_138 = local_121;
                  iVar8 = iVar8 + -1;
                  do {
                    local_138 = local_138 + -1;
                    *local_138 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                    bVar1 = 9 < iVar8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                local_100 = (uint)sVar14;
                sVar14 = strlen(local_138);
                local_290 = 0;
                local_288 = 0;
                local_130 = (undefined4)sVar14;
                local_168 = 0;
                local_160 = 0xffffffff;
                local_198 = 0;
                local_190 = 0xffffffff;
                local_1c8 = 0;
                local_1c0 = 0xffffffff;
                local_1f8 = 0;
                local_1f0 = 0xffffffff;
                local_228 = 0;
                local_220 = 0xffffffff;
                local_258 = 0;
                local_250 = 0xffffffff;
                local_298 = 0;
                FUN_00c2ce10(&local_298,
                             "Extension range $0 to $1 overlaps with reserved range $2 to $3.",
                             &local_a8,&local_d8,&local_108,&local_138,&local_168,&local_198,
                             &local_1c8,&local_1f8,&local_228,&local_258);
                FUN_00b89f94(param_1,uVar10,uVar30,1,&local_298);
                lVar20 = local_288;
                if (((local_298 & 1) != 0) && (local_288 != 0)) {
                  plVar31 = *(long **)(lVar17 + 0x30);
                  if (plVar31 == (long *)0x0) {
                    if (((DAT_04859438 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                      DAT_04859430 = DAT_04859418;
                      __cxa_guard_release(&DAT_04859438);
                    }
                    plVar31 = DAT_04859430;
                    *(long **)(lVar17 + 0x30) = DAT_04859430;
                  }
                  uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                  if (((uVar15 & 1) == 0) ||
                     (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
                    (**(code **)(*plVar31 + 0x18))(plVar31,lVar20,0,8);
                  }
                  else {
                    FUN_00c48fe8(plVar31,lVar20,0,8);
                  }
                }
                iVar21 = *(int *)(param_4 + 0x11);
              }
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 < iVar21);
          iVar8 = *(int *)(param_4 + 0xd);
        }
        lVar11 = lVar11 + 1;
        if (lVar11 < iVar8) {
          lVar28 = lVar25;
          do {
            iVar21 = *(int *)(param_4[0xe] + lVar28 * 8);
            if ((iVar21 < piVar3[1]) &&
               (piVar24 = (int *)(param_4[0xe] + lVar28 * 8 + 4), *piVar3 < *piVar24)) {
              uVar10 = param_4[1];
              uVar30 = *(undefined8 *)(*(long *)(param_2 + 0x90) + lVar28 * 8 + 8);
              local_98 = (undefined1 *)((ulong)local_98 & 0xffffffffffffff);
              if (iVar21 < 0) {
                if (iVar21 < -9) {
                  iVar21 = iVar21 + 10;
                  cVar6 = ((char)((ulong)((long)iVar21 * 0x66666667) >> 0x22) -
                          (char)(iVar21 >> 0x1f)) * '\n' - (char)iVar21;
                  iVar8 = (int)((ulong)((long)iVar21 * -0x66666667) >> 0x20);
                  pbVar19 = pbVar9;
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_a8 = pbVar19 + -1;
                    *pbVar19 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                    bVar1 = 9 < iVar8;
                    pbVar19 = local_a8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)iVar21;
                  local_a8 = pbVar9;
                }
                local_98 = (undefined1 *)(ulong)CONCAT16(cVar6 + '0',(undefined6)local_98);
                *local_a8 = 0x2d;
              }
              else {
                local_a8 = (byte *)((long)&local_98 + 7);
                do {
                  local_a8 = local_a8 + -1;
                  *local_a8 = (char)iVar21 + (char)(iVar21 / 10) * -10 + 0x30;
                  bVar1 = 9 < iVar21;
                  iVar21 = iVar21 / 10;
                } while (bVar1);
              }
              sVar14 = strlen((char *)local_a8);
              local_a0 = CONCAT44(local_a0._4_4_,(int)sVar14);
              iVar8 = *piVar24;
              local_c1[0] = '\0';
              if (iVar8 < 1) {
                if (iVar8 < -8) {
                  iVar8 = iVar8 + 9;
                  cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) - (char)(iVar8 >> 0x1f)
                          ) * '\n' - (char)iVar8;
                  iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                  pcVar16 = &local_c3;
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_d8 = pcVar16 + -1;
                    *pcVar16 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                    bVar1 = 9 < iVar8;
                    pcVar16 = local_d8;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)(iVar8 + -1);
                  local_d8 = &local_c3;
                }
                local_c2 = cVar6 + '0';
                *local_d8 = '-';
              }
              else {
                local_d8 = local_c1;
                iVar8 = iVar8 + -1;
                do {
                  local_d8 = local_d8 + -1;
                  *local_d8 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                  bVar1 = 9 < iVar8;
                  iVar8 = iVar8 / 10;
                } while (bVar1);
              }
              sVar14 = strlen(local_d8);
              iVar8 = *piVar3;
              local_f1[0] = 0;
              if (iVar8 < 0) {
                if (iVar8 < -9) {
                  iVar8 = iVar8 + 10;
                  cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) - (char)(iVar8 >> 0x1f)
                          ) * '\n' - (char)iVar8;
                  iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                  pbVar19 = &local_f3;
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_108 = pbVar19 + -1;
                    *pbVar19 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                    bVar1 = 9 < iVar8;
                    pbVar19 = local_108;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)iVar8;
                  local_108 = &local_f3;
                }
                local_f2 = cVar6 + '0';
                *local_108 = 0x2d;
              }
              else {
                local_108 = local_f1;
                do {
                  local_108 = local_108 + -1;
                  *local_108 = (char)iVar8 + (char)(iVar8 / 10) * -10 + 0x30;
                  bVar1 = 9 < iVar8;
                  iVar8 = iVar8 / 10;
                } while (bVar1);
              }
              local_d0 = (int)sVar14;
              sVar14 = strlen((char *)local_108);
              iVar8 = piVar3[1];
              local_121[0] = '\0';
              if (iVar8 < 1) {
                if (iVar8 < -8) {
                  iVar8 = iVar8 + 9;
                  cVar6 = ((char)((ulong)((long)iVar8 * 0x66666667) >> 0x22) - (char)(iVar8 >> 0x1f)
                          ) * '\n' - (char)iVar8;
                  iVar8 = (int)((ulong)((long)iVar8 * -0x66666667) >> 0x20);
                  pcVar16 = &local_123;
                  iVar8 = ((iVar8 >> 2) - (iVar8 >> 0x1f)) + 1;
                  do {
                    local_138 = pcVar16 + -1;
                    *pcVar16 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                    bVar1 = 9 < iVar8;
                    pcVar16 = local_138;
                    iVar8 = iVar8 / 10;
                  } while (bVar1);
                }
                else {
                  cVar6 = -(char)(iVar8 + -1);
                  local_138 = &local_123;
                }
                local_122 = cVar6 + '0';
                *local_138 = '-';
              }
              else {
                local_138 = local_121;
                iVar8 = iVar8 + -1;
                do {
                  local_138 = local_138 + -1;
                  *local_138 = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
                  bVar1 = 9 < iVar8;
                  iVar8 = iVar8 / 10;
                } while (bVar1);
              }
              local_100 = (uint)sVar14;
              sVar14 = strlen(local_138);
              local_290 = 0;
              local_288 = 0;
              local_130 = (undefined4)sVar14;
              local_168 = 0;
              local_160 = 0xffffffff;
              local_198 = 0;
              local_190 = 0xffffffff;
              local_1c8 = 0;
              local_1c0 = 0xffffffff;
              local_1f8 = 0;
              local_1f0 = 0xffffffff;
              local_228 = 0;
              local_220 = 0xffffffff;
              local_258 = 0;
              local_250 = 0xffffffff;
              local_298 = 0;
              FUN_00c2ce10(&local_298,
                           "Extension range $0 to $1 overlaps with already-defined range $2 to $3.",
                           &local_a8,&local_d8,&local_108,&local_138,&local_168,&local_198,
                           &local_1c8,&local_1f8,&local_228,&local_258);
              FUN_00b89f94(param_1,uVar10,uVar30,1,&local_298);
              lVar20 = local_288;
              if (((local_298 & 1) != 0) && (local_288 != 0)) {
                plVar31 = *(long **)(lVar17 + 0x30);
                if (plVar31 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar31 = DAT_04859430;
                  *(long **)(lVar17 + 0x30) = DAT_04859430;
                }
                uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
                if (((uVar15 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar31 + 0x18))(plVar31,lVar20,0,8);
                }
                else {
                  FUN_00c48fe8(plVar31,lVar20,0,8);
                }
              }
              iVar8 = *(int *)(param_4 + 0xd);
            }
            lVar28 = lVar28 + 1;
          } while ((int)lVar28 < iVar8);
        }
        lVar25 = lVar25 + 1;
        puVar34 = local_280;
        plVar31 = (long *)local_270;
      } while (lVar11 < iVar8);
    }
    while (param_4 = puVar34, plVar31 != (long *)0x0) {
      plVar32 = (long *)*plVar31;
      local_280 = param_4;
      if (((*(byte *)(plVar31 + 2) & 1) != 0) && (lVar11 = plVar31[4], lVar11 != 0)) {
        plVar27 = *(long **)(lVar17 + 0x30);
        if (plVar27 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar27 = DAT_04859430;
          *(long **)(lVar17 + 0x30) = DAT_04859430;
        }
        uVar15 = (**(code **)(*plVar27 + 0xf8))(plVar27);
        if (((uVar15 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,lVar11,0,8);
        }
        else {
          FUN_00c48fe8(plVar27,lVar11,0,8);
        }
      }
      plVar27 = *(long **)(lVar17 + 0x30);
      if (plVar27 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar27 = DAT_04859430;
        *(long **)(lVar17 + 0x30) = DAT_04859430;
      }
      uVar15 = (**(code **)(*plVar27 + 0xf8))(plVar27);
      if (((uVar15 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar27 + 0x18))(plVar27,plVar31,0,8);
        puVar34 = local_280;
        plVar31 = plVar32;
      }
      else {
        FUN_00c48fe8(plVar27,plVar31,0,8);
        puVar34 = local_280;
        plVar31 = plVar32;
      }
    }
    local_280 = (undefined8 *)0x0;
    if (param_4 == (undefined8 *)0x0) {
      return;
    }
    plVar31 = *(long **)(lVar17 + 0x30);
    if (plVar31 != (long *)0x0) goto LAB_00b97704;
    if ((DAT_04859438 & 1) == 0) goto LAB_00b97a9c;
  }
  plVar31 = DAT_04859430;
  *(long **)(lVar17 + 0x30) = DAT_04859430;
LAB_00b97704:
  uVar15 = (**(code **)(*plVar31 + 0xf8))(plVar31);
  if (((uVar15 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
    (**(code **)(*plVar31 + 0x18))(plVar31,param_4,0,8);
  }
  else {
    FUN_00c48fe8(plVar31,param_4,0,8);
  }
  return;
}


