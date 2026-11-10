/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f9348; name: FUN_030f9348
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030f9348(long param_1,long *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *__src;
  void *__dest;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  byte bVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  undefined4 *puVar33;
  uint **ppuVar34;
  uint uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  uint uVar43;
  long *plVar44;
  uint *puVar45;
  ulong uVar46;
  uint *puVar47;
  undefined1 (*pauVar48) [16];
  undefined1 (*pauVar49) [16];
  uint *puVar50;
  ulong uVar51;
  long *plVar52;
  long lVar53;
  int *piVar54;
  int *piVar55;
  long lVar56;
  undefined8 *puVar57;
  int *piVar58;
  float *pfVar59;
  undefined1 (*pauVar60) [16];
  float fVar61;
  float fVar62;
  float fVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar69;
  float fVar77;
  int iVar79;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar78;
  float fVar80;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  int iVar81;
  int iVar84;
  int iVar85;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  int iVar86;
  undefined8 uVar87;
  int iVar91;
  int iVar92;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar93;
  undefined1 auVar94 [12];
  float fVar100;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  byte bVar101;
  undefined1 auVar98 [16];
  int iVar102;
  undefined1 auVar99 [16];
  float fVar103;
  float fVar104;
  uint uVar105;
  float fVar106;
  float fVar107;
  undefined8 *local_f20;
  long local_f10;
  long local_f00;
  undefined4 local_ee8 [2];
  long local_ee0;
  long *local_ed8;
  uint *local_ed0;
  int local_ec8;
  uint local_ec4;
  uint local_ec0 [256];
  uint *local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 *local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  uint *puStack_488;
  uint *local_480;
  int local_478;
  int local_474;
  
  lVar53 = tpidr_el0;
  lVar36 = *(long *)(lVar53 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar53 + 0x1000b8) = lVar36;
  }
  plVar44 = *(long **)(lVar36 + 0x3e0);
  if (plVar44 != (long *)0x0) {
    lVar36 = *plVar44;
    if (*(code **)(lVar36 + 0x18) != (code *)0x0) {
      (**(code **)(lVar36 + 0x18))("updateOverlaps",0xe,*(undefined8 *)(lVar36 + 0x28));
    }
    puVar57 = (undefined8 *)plVar44[2];
    uVar37 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
    if ((uVar37 <= (ulong)plVar44[3]) && (plVar44[2] = uVar37, puVar57 != (undefined8 *)0x0)) {
      *puVar57 = "TtupdateOverlaps";
      uVar30 = nn::os::GetSystemTick();
      puVar57[1] = uVar30;
    }
    if (((*(byte *)(lVar36 + 0x38) & 1) != 0) && (plVar44[6] != 0)) {
      puVar57 = (undefined8 *)plVar44[2];
      uVar37 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
      if ((uVar37 <= (ulong)plVar44[3]) && (plVar44[2] = uVar37, puVar57 != (undefined8 *)0x0)) {
        *puVar57 = &DAT_03c4e575;
        puVar57[1] = *(undefined8 *)(plVar44[6] + 8);
      }
    }
  }
  puVar2 = PTR_DAT_047e4f38;
  local_ed8 = plVar44;
  if (*(char *)(param_1 + 0xc4) == '\0') goto LAB_030fb478;
  iVar81 = *(int *)PTR_DAT_047e4f38;
  lVar36 = *(long *)(lVar53 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar53 + 0x1000b8) = lVar36;
  }
  if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
    FUN_03231bdc();
    lVar36 = *(long *)(lVar53 + 0x1000b8);
  }
  fVar61 = *(float *)(param_1 + 0x184);
  local_ac0 = (uint *)&local_ab0;
  iVar81 = *(int *)puVar2;
  local_ed0 = local_ec0;
  uStack_ab8 = 0x8000010000000000;
  local_ec8 = 0;
  local_ec4 = 0x80000100;
  local_ee0 = param_1;
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar53 + 0x1000b8) = lVar36;
  }
  lVar41 = param_1 + 0x40;
  if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  plVar32 = (long *)(param_1 + 0x20);
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar56 = 0;
    lVar36 = 0;
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    uVar105 = 0;
    do {
      if (*(char *)(*plVar32 + lVar56 + 0x40) != '\0') {
        FUN_0086fc44(lVar41,*(undefined4 *)(*plVar32 + lVar56 + 0x44));
        lVar38 = (long)(int)(uint)uStack_ab8;
        if ((int)(uStack_ab8._4_4_ & 0x7fffffff) <= (int)(uint)uStack_ab8) {
          FUN_0133bb88(&local_ac0,puVar2,lVar38 + 1);
        }
        local_ac0[(int)(uint)uStack_ab8] = (uint)lVar36;
        uStack_ab8 = CONCAT44(uStack_ab8._4_4_,(int)(lVar38 + 1));
      }
      if (0xfef9db21 < uVar105) {
        iVar81 = *(int *)PTR_DAT_047e4f38;
        lVar38 = *(long *)(lVar53 + 0x1000b8);
        if (lVar38 == 0) {
          lVar38 = FUN_00e5d3b4();
          *(long *)(lVar53 + 0x1000b8) = lVar38;
        }
        if (*(long *)(lVar38 + (long)iVar81 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
      lVar36 = lVar36 + 1;
      lVar56 = lVar56 + 0x50;
      uVar105 = uVar105 + 0x10624de;
    } while (lVar36 < *(int *)(param_1 + 0x28));
  }
  iVar81 = *(int *)PTR_DAT_047e4f38;
  lVar36 = *(long *)(lVar53 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar53 + 0x1000b8) = lVar36;
  }
  lVar56 = param_1 + 0x60;
  if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar38 = 0;
    lVar36 = 0;
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    uVar105 = 0;
    do {
      lVar39 = *(long *)(param_1 + 0x30) + lVar38;
      if (*(char *)(lVar39 + 0x40) != '\0') {
        FUN_0086fc44(lVar56,*(undefined4 *)(lVar39 + 0x44));
        lVar39 = (long)local_ec8;
        if ((int)(local_ec4 & 0x7fffffff) <= local_ec8) {
          FUN_0133bb88(&local_ed0,puVar2,lVar39 + 1);
        }
        local_ed0[local_ec8] = (uint)lVar36;
        local_ec8 = (int)(lVar39 + 1);
      }
      if (0xfef9db21 < uVar105) {
        iVar81 = *(int *)PTR_DAT_047e4f38;
        lVar39 = *(long *)(lVar53 + 0x1000b8);
        if (lVar39 == 0) {
          lVar39 = FUN_00e5d3b4();
          *(long *)(lVar53 + 0x1000b8) = lVar39;
        }
        if (*(long *)(lVar39 + (long)iVar81 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
      lVar36 = lVar36 + 1;
      lVar38 = lVar38 + 0x50;
      uVar105 = uVar105 + 0x10624de;
    } while (lVar36 < *(int *)(param_1 + 0x38));
  }
  piVar55 = (int *)PTR_DAT_047e4f38;
  iVar81 = *(int *)PTR_DAT_047e4f38;
  lVar36 = *(long *)(lVar53 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar53 + 0x1000b8) = lVar36;
  }
  if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  uVar37 = uStack_ab8;
  puVar47 = local_ac0;
  iVar81 = local_ec8;
  puVar50 = local_ed0;
  iVar84 = (uint)uStack_ab8;
  lVar36 = (long)(int)(uint)uStack_ab8;
  if (((uint)uStack_ab8 != 0) && (lVar38 = (long)local_ec8, local_ec8 != 0)) {
    lVar39 = *(long *)(lVar53 + 0x1000b8);
    if (lVar39 == 0) {
      lVar39 = FUN_00e5d3b4();
      *(long *)(lVar53 + 0x1000b8) = lVar39;
    }
    uVar105 = iVar84 + 4;
    lVar39 = *(long *)(*(long *)(lVar39 + 0x3d0) + 0x10);
    if (*(long *)(lVar39 + 8) == 0) {
      puVar57 = (undefined8 *)(-(ulong)(uVar105 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar105 << 5)
      ;
      local_6b0 = puVar57;
      if (lVar39 == 0) goto LAB_030f9908;
      local_4a0 = (uint *)((long)puVar57 + 0x3fU & 0xffffffffffffffc0);
      if (*(uint **)(lVar39 + 0x28) < local_4a0) {
LAB_030f9820:
        lVar31 = FUN_031cf3b4(lVar39,&local_4a0);
      }
      else {
        lVar31 = *(long *)(lVar39 + 0x38);
        if (*(ulong *)(lVar39 + 0x40) < (ulong)((long)local_4a0 + lVar31)) goto LAB_030f9820;
        *(long *)(lVar39 + 0x38) = (long)local_4a0 + lVar31;
      }
    }
    else {
      local_6b0 = (undefined8 *)
                  (-(ulong)(uVar105 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar105 << 5);
LAB_030f9908:
      puVar57 = local_6b0;
      lVar31 = (**(code **)PTR_DAT_047d1a08)(1,&local_6b0,0x40);
      lVar39 = 0;
    }
    uVar51 = 0;
    lVar36 = lVar36 << 2;
    puVar45 = (uint *)(lVar31 + 0xc);
    do {
      puVar1 = puVar47 + uVar51;
      uVar51 = uVar51 + 1;
      pauVar48 = (undefined1 (*) [16])(*plVar32 + (long)(int)*puVar1 * 0x50);
      lVar36 = lVar36 + -4;
      auVar70 = NEON_fmax(pauVar48[1],pauVar48[3],4);
      auVar63 = NEON_fmin(*pauVar48,pauVar48[2],4);
      *puVar45 = *puVar1;
      puVar45[1] = ((((int)auVar70._0_4_ >> 0x1f | 0x80000000U) ^ auVar70._0_4_) >> 1) + 1;
      puVar45[-3] = (((int)auVar63._0_4_ >> 0x1f | 0x80000000U) ^ auVar63._0_4_) >> 1;
      puVar45[-2] = (((int)auVar63._4_4_ >> 0x1f | 0x80000000U) ^ auVar63._4_4_) >> 1;
      puVar45[-1] = (((int)auVar63._8_4_ >> 0x1f | 0x80000000U) ^ auVar63._8_4_) >> 1;
      puVar45[2] = ((((int)auVar70._4_4_ >> 0x1f | 0x80000000U) ^ auVar70._4_4_) >> 1) + 1;
      puVar45[3] = ((((int)auVar70._8_4_ >> 0x1f | 0x80000000U) ^ auVar70._8_4_) >> 1) + 1;
      puVar45 = puVar45 + 8;
    } while (lVar36 != 0);
    lVar36 = *(long *)(lVar53 + 0x1000b8);
    if (lVar36 == 0) {
      lVar36 = FUN_00e5d3b4();
      *(long *)(lVar53 + 0x1000b8) = lVar36;
    }
    uVar105 = iVar81 + 4;
    local_f00 = *(long *)(*(long *)(lVar36 + 0x3d0) + 0x10);
    if (*(long *)(local_f00 + 8) == 0) {
      local_f20 = (undefined8 *)
                  (-(ulong)(uVar105 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar105 << 5);
      local_6b0 = local_f20;
      if (local_f00 == 0) goto LAB_030f9ab4;
      local_4a0 = (uint *)((long)local_f20 + 0x3fU & 0xffffffffffffffc0);
      if (*(uint **)(local_f00 + 0x28) < local_4a0) {
LAB_030f9a6c:
        lVar36 = FUN_031cf3b4(local_f00,&local_4a0);
      }
      else {
        lVar36 = *(long *)(local_f00 + 0x38);
        if (*(ulong *)(local_f00 + 0x40) < (ulong)((long)local_4a0 + lVar36)) goto LAB_030f9a6c;
        *(long *)(local_f00 + 0x38) = (long)local_4a0 + lVar36;
      }
    }
    else {
      local_6b0 = (undefined8 *)
                  (-(ulong)(uVar105 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar105 << 5);
LAB_030f9ab4:
      local_f20 = local_6b0;
      lVar36 = (**(code **)PTR_DAT_047d1a08)(1,&local_6b0,0x40);
      local_f00 = 0;
    }
    uVar40 = 0;
    lVar38 = lVar38 << 2;
    puVar47 = (uint *)(lVar36 + 0xc);
    do {
      puVar45 = puVar50 + uVar40;
      uVar40 = uVar40 + 1;
      pauVar48 = (undefined1 (*) [16])(*(long *)(param_1 + 0x30) + (long)(int)*puVar45 * 0x50);
      lVar38 = lVar38 + -4;
      auVar70 = NEON_fmax(pauVar48[1],pauVar48[3],4);
      auVar63 = NEON_fmin(*pauVar48,pauVar48[2],4);
      *puVar47 = *puVar45;
      puVar47[1] = ((((int)auVar70._0_4_ >> 0x1f | 0x80000000U) ^ auVar70._0_4_) >> 1) + 1;
      puVar47[-3] = (((int)auVar63._0_4_ >> 0x1f | 0x80000000U) ^ auVar63._0_4_) >> 1;
      puVar47[-2] = (((int)auVar63._4_4_ >> 0x1f | 0x80000000U) ^ auVar63._4_4_) >> 1;
      puVar47[-1] = (((int)auVar63._8_4_ >> 0x1f | 0x80000000U) ^ auVar63._8_4_) >> 1;
      puVar47[2] = ((((int)auVar70._4_4_ >> 0x1f | 0x80000000U) ^ auVar70._4_4_) >> 1) + 1;
      puVar47[3] = ((((int)auVar70._8_4_ >> 0x1f | 0x80000000U) ^ auVar70._8_4_) >> 1) + 1;
      puVar47 = puVar47 + 8;
    } while (lVar38 != 0);
    puVar33 = (undefined4 *)(lVar31 + (uVar51 & 0xffffffff) * 0x20);
    puVar6 = (undefined4 *)(lVar36 + (uVar40 & 0xffffffff) * 0x20);
    *puVar33 = 0xffffffff;
    *puVar6 = 0xffffffff;
    puVar33[8] = 0xffffffff;
    puVar6[8] = 0xffffffff;
    puVar33[0x10] = 0xffffffff;
    puVar6[0x10] = 0xffffffff;
    puVar33[0x18] = 0xffffffff;
    puVar6[0x18] = 0xffffffff;
    FUN_031bf4f0(lVar31,uVar37 & 0xffffffff);
    FUN_031bf4f0(lVar36,iVar81);
    FUN_031bfbb0(&local_4a0,lVar31,uVar37 & 0xffffffff,lVar36,iVar81);
    if (0 < local_478) {
      iVar81 = local_478;
      uVar105 = (uint)(float)local_4a0;
      iVar84 = local_474;
      while (puVar50 = local_490, 0 < iVar84) {
        puVar47 = local_490;
        puVar45 = puStack_488;
        if (uVar105 != 0) {
          puVar47 = local_480;
          puVar45 = local_490;
        }
        FUN_030fea54(plVar32,CONCAT44(puVar47[3],puVar45[3]),&local_ee0);
        puVar50 = puVar50 + 8;
        local_490 = puVar50;
        puVar47 = uStack_498;
        uVar35 = uVar105;
        do {
          if (*puVar50 < puVar47[4]) {
            do {
              if (-1 < (int)(puVar50[5] - puVar47[1] | puVar47[5] - puVar50[1] |
                             puVar47[6] - puVar50[2] | puVar50[6] - puVar47[2])) {
                uVar105 = uVar35;
                uStack_498 = puVar47;
                local_490 = puVar50;
                goto LAB_030f9d48;
              }
              puVar50 = puVar50 + 8;
            } while (*puVar50 < puVar47[4]);
          }
          lVar38 = 0x18;
          if (uVar35 != 0) {
            lVar38 = 0x20;
          }
          *(long *)((long)&local_4a0 + lVar38) = *(long *)((long)&local_4a0 + lVar38) + 0x20;
          lVar38 = 0x28;
          if (uVar35 != 0) {
            lVar38 = 0x2c;
          }
          *(int *)((long)&local_4a0 + lVar38) = *(int *)((long)&local_4a0 + lVar38) + -1;
          if (local_478 < 1) {
            local_4a0 = (uint *)CONCAT44(local_4a0._4_4_,uVar105);
            goto LAB_030f9d64;
          }
          uVar35 = (uint)(*local_480 < *puStack_488);
          puVar47 = local_480;
          puVar50 = puStack_488;
          if (*puStack_488 <= *local_480) {
            puVar47 = puStack_488;
            puVar50 = local_480;
          }
          iVar81 = local_478;
          iVar84 = local_474;
        } while (0 < local_474);
LAB_030f9d48:
        if (iVar81 < 1) break;
      }
      local_4a0 = (uint *)CONCAT44(local_4a0._4_4_,uVar105);
LAB_030f9d64:
      piVar55 = (int *)PTR_DAT_047e4f38;
    }
    if (local_f00 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar36,local_f20);
    }
    else {
      uVar37 = (long)local_f20 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulong *)(local_f00 + 0x28) < uVar37) ||
         (*(long *)(local_f00 + 0x38) != uVar37 + lVar36)) {
        if (lVar36 != 0) {
          if (*(ulong *)(local_f00 + 0x28) < uVar37 + 0x40) {
            *(int *)(*(long *)(local_f00 + 0x30) + 0x20) =
                 *(int *)(*(long *)(local_f00 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(local_f00 + 0x10) + 0x18))
                      (*(long **)(local_f00 + 0x10),lVar36 - *(int *)(lVar36 + -4),uVar37 + 0x44);
          }
          else {
            if (*(long *)(local_f00 + 0x38) == uVar37 + lVar36) {
              *(long *)(local_f00 + 0x38) = lVar36;
              goto LAB_030f9e3c;
            }
            FUN_031cf778();
          }
        }
      }
      else {
        *(long *)(local_f00 + 0x38) = lVar36;
        if (*(long *)(local_f00 + 0x48) == lVar36) {
LAB_030f9e3c:
          FUN_031cf578();
        }
      }
    }
    if (lVar39 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar31,puVar57);
    }
    else {
      uVar37 = (long)puVar57 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulong *)(lVar39 + 0x28) < uVar37) || (*(long *)(lVar39 + 0x38) != uVar37 + lVar31)) {
        if (lVar31 != 0) {
          if (*(ulong *)(lVar39 + 0x28) < uVar37 + 0x40) {
            *(int *)(*(long *)(lVar39 + 0x30) + 0x20) =
                 *(int *)(*(long *)(lVar39 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(lVar39 + 0x10) + 0x18))
                      (*(long **)(lVar39 + 0x10),lVar31 - *(int *)(lVar31 + -4),uVar37 + 0x44);
          }
          else {
            if (*(long *)(lVar39 + 0x38) == uVar37 + lVar31) {
              *(long *)(lVar39 + 0x38) = lVar31;
              goto LAB_030f9f00;
            }
            FUN_031cf778(lVar39,lVar31);
          }
        }
      }
      else {
        *(long *)(lVar39 + 0x38) = lVar31;
        if (*(long *)(lVar39 + 0x48) == lVar31) {
LAB_030f9f00:
          FUN_031cf578(lVar39);
        }
      }
    }
  }
  iVar81 = *piVar55;
  lVar36 = *(long *)(lVar53 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar53 + 0x1000b8) = lVar36;
  }
  if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  lVar36 = local_ee0;
  local_f10 = *(long *)(param_1 + 0x20);
  local_f00 = *(long *)(param_1 + 0x30);
  if ((uint)uStack_ab8 != 0) {
    puVar47 = local_ac0 + (int)(uint)uStack_ab8;
    puVar50 = local_ac0;
    do {
      uVar105 = *puVar50;
      pauVar48 = (undefined1 (*) [16])(local_f10 + (long)(int)uVar105 * 0x50);
      pauVar60 = pauVar48 + 2;
      auVar63 = *pauVar60;
      auVar70 = *pauVar48;
      pauVar49 = pauVar48 + 3;
      iVar86 = -(uint)(auVar63._0_4_ <= *(float *)pauVar48[1]);
      iVar91 = -(uint)(auVar63._4_4_ <= *(float *)(pauVar48[1] + 4));
      iVar92 = -(uint)(auVar63._8_4_ <= *(float *)(pauVar48[1] + 8));
      iVar81 = -(uint)(auVar70._0_4_ <= *(float *)*pauVar49);
      iVar84 = -(uint)(auVar70._4_4_ <= *(float *)(pauVar48[3] + 4));
      iVar85 = -(uint)(auVar70._8_4_ <= *(float *)(pauVar48[3] + 8));
      local_4a0 = (uint *)&local_490;
      if (CONCAT13((byte)((uint)iVar91 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                   (byte)((uint)iVar86 >> 0x18) & (byte)((uint)iVar81 >> 0x18) &
                   (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar85 >> 0x18),
                   CONCAT12((byte)((uint)iVar91 >> 0x10) & (byte)((uint)iVar84 >> 0x10) &
                            (byte)((uint)iVar86 >> 0x10) & (byte)((uint)iVar81 >> 0x10) &
                            (byte)((uint)iVar92 >> 0x10) & (byte)((uint)iVar85 >> 0x10),
                            CONCAT11((byte)((uint)iVar91 >> 8) & (byte)((uint)iVar84 >> 8) &
                                     (byte)((uint)iVar86 >> 8) & (byte)((uint)iVar81 >> 8) &
                                     (byte)((uint)iVar92 >> 8) & (byte)((uint)iVar85 >> 8),
                                     (byte)iVar91 & (byte)iVar84 & (byte)iVar86 & (byte)iVar81 &
                                     (byte)iVar92 & (byte)iVar85))) == 0) {
        uStack_498 = (uint *)0x8000008000000000;
        uStack_6a8 = -0x7fffff8000000000;
        local_6b0 = &local_6a0;
        FUN_0087011c(lVar56,pauVar48,&local_4a0);
        FUN_0087011c(lVar56,pauVar60,&local_6b0);
        if (1 < (int)(float)uStack_498) {
          FUN_030fed80(local_4a0,0,(int)(float)uStack_498 + -1);
        }
        if ((int)uStack_6a8 + -1 != 0 && 0 < (int)uStack_6a8) {
          FUN_030fed80(local_6b0,0,(int)uStack_6a8 + -1);
        }
        iVar81 = 0;
        iVar84 = (int)uStack_6a8;
        if ((int)uStack_6a8 < 1) {
          iVar85 = 0;
        }
        else {
          iVar85 = 0;
          if (0 < (int)(float)uStack_498) {
            iVar85 = 0;
            iVar81 = 0;
            do {
              uVar35 = local_4a0[iVar85];
              uVar43 = *(uint *)((long)local_6b0 + (long)iVar81 * 4);
              if (uVar35 < uVar43) {
                uVar43 = *(uint *)(param_1 + 0x88);
                if (0 < (int)uVar43) {
                  lVar39 = *(long *)(param_1 + 0x80);
                  lVar31 = 0;
                  lVar38 = 0;
                  puVar45 = (uint *)(lVar39 + 4);
                  do {
                    if ((puVar45[-1] == uVar105) && (*puVar45 == uVar35)) {
                      if ((int)lVar31 != 1) {
                        *(uint *)(param_1 + 0x88) = uVar43 - 1;
                        if (uVar43 + (int)lVar31 != 1) {
                          *(undefined8 *)(lVar39 + (lVar38 >> 0x1d)) =
                               *(undefined8 *)(lVar39 + (long)(int)(uVar43 - 1) * 8);
                        }
                        FUN_030fcd74(lVar36,-lVar31 & 0xffffffff);
                        FUN_030fcff8(lVar36,-lVar31 & 0xffffffff);
                      }
                      break;
                    }
                    lVar31 = lVar31 + -1;
                    lVar38 = lVar38 + 0x100000000;
                    puVar45 = puVar45 + 2;
                  } while ((ulong)uVar43 + lVar31 != 0);
                }
                iVar85 = iVar85 + 1;
              }
              else {
                if (uVar43 < uVar35) {
                  pfVar59 = (float *)(local_f00 + (long)(int)uVar43 * 0x50);
                  auVar63 = *(undefined1 (*) [16])(pfVar59 + 4);
                  iVar84 = -(uint)(*pfVar59 <= *(float *)*pauVar49);
                  iVar86 = -(uint)(pfVar59[1] <= *(float *)(pauVar48[3] + 4));
                  iVar91 = -(uint)(pfVar59[2] <= *(float *)(pauVar48[3] + 8));
                  iVar92 = -(uint)(*(float *)*pauVar60 <= auVar63._0_4_);
                  iVar102 = -(uint)(*(float *)(pauVar48[2] + 4) <= auVar63._4_4_);
                  iVar79 = -(uint)(*(float *)(pauVar48[2] + 8) <= auVar63._8_4_);
                  if (CONCAT13((byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar86 >> 0x18) &
                               (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                               (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar91 >> 0x18),
                               CONCAT12((byte)((uint)iVar102 >> 0x10) & (byte)((uint)iVar86 >> 0x10)
                                        & (byte)((uint)iVar92 >> 0x10) &
                                          (byte)((uint)iVar84 >> 0x10) &
                                        (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar91 >> 0x10),
                                        CONCAT11((byte)((uint)iVar102 >> 8) &
                                                 (byte)((uint)iVar86 >> 8) &
                                                 (byte)((uint)iVar92 >> 8) &
                                                 (byte)((uint)iVar84 >> 8) &
                                                 (byte)((uint)iVar79 >> 8) &
                                                 (byte)((uint)iVar91 >> 8),
                                                 (byte)iVar102 & (byte)iVar86 &
                                                 (byte)iVar92 & (byte)iVar84 &
                                                 (byte)iVar79 & (byte)iVar91))) != 0) {
                    FUN_030fcb70(lVar36,uVar105);
                    iVar84 = *(int *)(param_1 + 0x88);
                    lVar38 = (long)iVar84;
                    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) <= iVar84) {
                      FUN_030fec08(param_1 + 0x80,lVar38 + 1);
                      iVar84 = *(int *)(param_1 + 0x88);
                    }
                    *(ulong *)(*(long *)(param_1 + 0x80) + (long)iVar84 * 8) =
                         CONCAT44(uVar43,uVar105);
                    *(int *)(param_1 + 0x88) = (int)(lVar38 + 1);
                    piVar55 = (int *)PTR_DAT_047e4f38;
                  }
                }
                else {
                  FUN_030fea54(plVar32,CONCAT44(uVar35,uVar105),&local_ee0);
                  iVar85 = iVar85 + 1;
                }
                iVar81 = iVar81 + 1;
              }
              iVar84 = (int)uStack_6a8;
            } while ((iVar85 < (int)(float)uStack_498) && (iVar81 < (int)uStack_6a8));
          }
        }
        if (iVar85 < (int)(float)uStack_498) {
          lVar38 = (long)iVar85;
          iVar84 = (int)(float)uStack_498;
          do {
            uVar35 = *(uint *)(param_1 + 0x88);
            if (0 < (int)uVar35) {
              lVar42 = 0;
              lVar39 = 0;
              lVar31 = *(long *)(param_1 + 0x80);
              puVar45 = (uint *)(lVar31 + 4);
              do {
                if ((puVar45[-1] == uVar105) && (*puVar45 == local_4a0[lVar38])) {
                  if ((int)lVar42 != 1) {
                    *(uint *)(param_1 + 0x88) = uVar35 - 1;
                    if (uVar35 + (int)lVar42 != 1) {
                      *(undefined8 *)(lVar31 + (lVar39 >> 0x1d)) =
                           *(undefined8 *)(lVar31 + (long)(int)(uVar35 - 1) * 8);
                    }
                    FUN_030fcd74(lVar36,-lVar42 & 0xffffffff);
                    FUN_030fcff8(lVar36,-lVar42 & 0xffffffff);
                    iVar84 = (int)(float)uStack_498;
                  }
                  break;
                }
                lVar42 = lVar42 + -1;
                lVar39 = lVar39 + 0x100000000;
                puVar45 = puVar45 + 2;
              } while ((ulong)uVar35 + lVar42 != 0);
            }
            lVar38 = lVar38 + 1;
          } while (lVar38 < iVar84);
          iVar84 = (int)uStack_6a8;
        }
        if (iVar81 < iVar84) {
          lVar38 = (long)iVar81;
          do {
            iVar81 = *(int *)((long)local_6b0 + lVar38 * 4);
            pfVar59 = (float *)(local_f00 + (long)iVar81 * 0x50);
            auVar63 = *(undefined1 (*) [16])(pfVar59 + 4);
            iVar85 = -(uint)(*pfVar59 <= *(float *)*pauVar49);
            iVar86 = -(uint)(pfVar59[1] <= *(float *)(pauVar48[3] + 4));
            iVar91 = -(uint)(pfVar59[2] <= *(float *)(pauVar48[3] + 8));
            iVar92 = -(uint)(*(float *)*pauVar60 <= auVar63._0_4_);
            iVar102 = -(uint)(*(float *)(pauVar48[2] + 4) <= auVar63._4_4_);
            iVar79 = -(uint)(*(float *)(pauVar48[2] + 8) <= auVar63._8_4_);
            if (CONCAT13((byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar86 >> 0x18) &
                         (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar85 >> 0x18) &
                         (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar91 >> 0x18),
                         CONCAT12((byte)((uint)iVar102 >> 0x10) & (byte)((uint)iVar86 >> 0x10) &
                                  (byte)((uint)iVar92 >> 0x10) & (byte)((uint)iVar85 >> 0x10) &
                                  (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar91 >> 0x10),
                                  CONCAT11((byte)((uint)iVar102 >> 8) & (byte)((uint)iVar86 >> 8) &
                                           (byte)((uint)iVar92 >> 8) & (byte)((uint)iVar85 >> 8) &
                                           (byte)((uint)iVar79 >> 8) & (byte)((uint)iVar91 >> 8),
                                           (byte)iVar102 & (byte)iVar86 &
                                           (byte)iVar92 & (byte)iVar85 & (byte)iVar79 & (byte)iVar91
                                          ))) != 0) {
              FUN_030fcb70(lVar36,uVar105);
              iVar84 = *(int *)(param_1 + 0x88);
              lVar39 = (long)iVar84;
              if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) <= iVar84) {
                FUN_030fec08(param_1 + 0x80,lVar39 + 1);
                iVar84 = *(int *)(param_1 + 0x88);
              }
              *(ulong *)(*(long *)(param_1 + 0x80) + (long)iVar84 * 8) = CONCAT44(iVar81,uVar105);
              *(int *)(param_1 + 0x88) = (int)(lVar39 + 1);
              iVar84 = (int)uStack_6a8;
            }
            lVar38 = lVar38 + 1;
          } while (lVar38 < iVar84);
        }
        lVar38 = uStack_6a8;
        uVar37 = (ulong)uStack_6a8._4_4_;
        uStack_6a8 = (ulong)uStack_6a8._4_4_ << 0x20;
        if ((-1 < lVar38) && (local_6b0 != (undefined8 *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_6b0,uVar37 << 2);
        }
        lVar38 = (long)uStack_498;
        uVar37 = (ulong)uStack_498._4_4_;
        uStack_498 = (uint *)((ulong)uStack_498._4_4_ << 0x20);
        if ((-1 < lVar38) && (local_4a0 != (uint *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_4a0,uVar37 << 2);
        }
      }
      else {
        auVar63 = NEON_fmin(auVar70,auVar63,4);
        uStack_6a8 = auVar63._8_8_;
        local_6b0 = auVar63._0_8_;
        auVar63 = NEON_fmax(pauVar48[1],*pauVar49,4);
        uStack_698 = auVar63._8_8_;
        local_6a0 = auVar63._0_8_;
        uStack_498 = (uint *)0x8000010000000000;
        FUN_0087011c(lVar56,&local_6b0,&local_4a0);
        if ((float)uStack_498 != 0.0) {
          lVar38 = (long)(int)(float)uStack_498 << 2;
          puVar45 = local_4a0;
          do {
            FUN_030fea54(plVar32,CONCAT44(*puVar45,uVar105),&local_ee0);
            iVar81 = *piVar55;
            lVar39 = *(long *)(lVar53 + 0x1000b8);
            if (lVar39 == 0) {
              lVar39 = FUN_00e5d3b4();
              *(long *)(lVar53 + 0x1000b8) = lVar39;
            }
            if (*(long *)(lVar39 + (long)iVar81 * 8 + 1000) != 0) {
              FUN_03231bdc();
            }
            puVar45 = puVar45 + 1;
            lVar38 = lVar38 + -4;
          } while (lVar38 != 0);
        }
        lVar38 = (long)uStack_498;
        uVar37 = (ulong)uStack_498._4_4_;
        uStack_498 = (uint *)((ulong)uStack_498._4_4_ << 0x20);
        if ((-1 < lVar38) && (local_4a0 != (uint *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_4a0,uVar37 << 2);
        }
      }
      puVar50 = puVar50 + 1;
    } while (puVar50 != puVar47);
    local_f00 = *(long *)(param_1 + 0x30);
    local_f10 = *(long *)(param_1 + 0x20);
  }
  lVar36 = local_ee0;
  if (local_ec8 != 0) {
    puVar47 = local_ed0 + local_ec8;
    puVar50 = local_ed0;
    do {
      uVar105 = *puVar50;
      pauVar48 = (undefined1 (*) [16])(local_f00 + (long)(int)uVar105 * 0x50);
      pauVar60 = pauVar48 + 2;
      auVar63 = *pauVar60;
      auVar70 = *pauVar48;
      pauVar49 = pauVar48 + 3;
      iVar86 = -(uint)(auVar63._0_4_ <= *(float *)pauVar48[1]);
      iVar91 = -(uint)(auVar63._4_4_ <= *(float *)(pauVar48[1] + 4));
      iVar92 = -(uint)(auVar63._8_4_ <= *(float *)(pauVar48[1] + 8));
      iVar81 = -(uint)(auVar70._0_4_ <= *(float *)*pauVar49);
      iVar84 = -(uint)(auVar70._4_4_ <= *(float *)(pauVar48[3] + 4));
      iVar85 = -(uint)(auVar70._8_4_ <= *(float *)(pauVar48[3] + 8));
      local_4a0 = (uint *)&local_490;
      if (CONCAT13((byte)((uint)iVar91 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                   (byte)((uint)iVar86 >> 0x18) & (byte)((uint)iVar81 >> 0x18) &
                   (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar85 >> 0x18),
                   CONCAT12((byte)((uint)iVar91 >> 0x10) & (byte)((uint)iVar84 >> 0x10) &
                            (byte)((uint)iVar86 >> 0x10) & (byte)((uint)iVar81 >> 0x10) &
                            (byte)((uint)iVar92 >> 0x10) & (byte)((uint)iVar85 >> 0x10),
                            CONCAT11((byte)((uint)iVar91 >> 8) & (byte)((uint)iVar84 >> 8) &
                                     (byte)((uint)iVar86 >> 8) & (byte)((uint)iVar81 >> 8) &
                                     (byte)((uint)iVar92 >> 8) & (byte)((uint)iVar85 >> 8),
                                     (byte)iVar91 & (byte)iVar84 & (byte)iVar86 & (byte)iVar81 &
                                     (byte)iVar92 & (byte)iVar85))) == 0) {
        uStack_498 = (uint *)0x8000008000000000;
        uStack_6a8 = -0x7fffff8000000000;
        local_6b0 = &local_6a0;
        FUN_0087011c(lVar41,pauVar48,&local_4a0);
        FUN_0087011c(lVar41,pauVar60,&local_6b0);
        if (1 < (int)(float)uStack_498) {
          FUN_030fed80(local_4a0,0,(int)(float)uStack_498 + -1);
        }
        if ((int)uStack_6a8 + -1 != 0 && 0 < (int)uStack_6a8) {
          FUN_030fed80(local_6b0,0,(int)uStack_6a8 + -1);
        }
        iVar81 = 0;
        iVar84 = (int)uStack_6a8;
        if ((int)uStack_6a8 < 1) {
          iVar85 = 0;
        }
        else {
          iVar85 = 0;
          if (0 < (int)(float)uStack_498) {
            iVar85 = 0;
            iVar81 = 0;
            do {
              uVar35 = local_4a0[iVar85];
              uVar43 = *(uint *)((long)local_6b0 + (long)iVar81 * 4);
              if (uVar35 < uVar43) {
                uVar43 = *(uint *)(param_1 + 0x88);
                if (0 < (int)uVar43) {
                  lVar39 = *(long *)(param_1 + 0x80);
                  lVar31 = 0;
                  lVar38 = 0;
                  puVar45 = (uint *)(lVar39 + 4);
                  do {
                    if ((puVar45[-1] == uVar35) && (*puVar45 == uVar105)) {
                      if ((int)lVar31 != 1) {
                        *(uint *)(param_1 + 0x88) = uVar43 - 1;
                        if (uVar43 + (int)lVar31 != 1) {
                          *(undefined8 *)(lVar39 + (lVar38 >> 0x1d)) =
                               *(undefined8 *)(lVar39 + (long)(int)(uVar43 - 1) * 8);
                        }
                        FUN_030fcd74(lVar36,-lVar31 & 0xffffffff);
                        FUN_030fcff8(lVar36,-lVar31 & 0xffffffff);
                      }
                      break;
                    }
                    lVar31 = lVar31 + -1;
                    lVar38 = lVar38 + 0x100000000;
                    puVar45 = puVar45 + 2;
                  } while ((ulong)uVar43 + lVar31 != 0);
                }
                iVar85 = iVar85 + 1;
              }
              else {
                if (uVar43 < uVar35) {
                  pfVar59 = (float *)(local_f10 + (long)(int)uVar43 * 0x50);
                  auVar63 = *(undefined1 (*) [16])(pfVar59 + 4);
                  iVar84 = -(uint)(*pfVar59 <= *(float *)*pauVar49);
                  iVar86 = -(uint)(pfVar59[1] <= *(float *)(pauVar48[3] + 4));
                  iVar91 = -(uint)(pfVar59[2] <= *(float *)(pauVar48[3] + 8));
                  iVar92 = -(uint)(*(float *)*pauVar60 <= auVar63._0_4_);
                  iVar102 = -(uint)(*(float *)(pauVar48[2] + 4) <= auVar63._4_4_);
                  iVar79 = -(uint)(*(float *)(pauVar48[2] + 8) <= auVar63._8_4_);
                  if (CONCAT13((byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar86 >> 0x18) &
                               (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                               (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar91 >> 0x18),
                               CONCAT12((byte)((uint)iVar102 >> 0x10) & (byte)((uint)iVar86 >> 0x10)
                                        & (byte)((uint)iVar92 >> 0x10) &
                                          (byte)((uint)iVar84 >> 0x10) &
                                        (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar91 >> 0x10),
                                        CONCAT11((byte)((uint)iVar102 >> 8) &
                                                 (byte)((uint)iVar86 >> 8) &
                                                 (byte)((uint)iVar92 >> 8) &
                                                 (byte)((uint)iVar84 >> 8) &
                                                 (byte)((uint)iVar79 >> 8) &
                                                 (byte)((uint)iVar91 >> 8),
                                                 (byte)iVar102 & (byte)iVar86 &
                                                 (byte)iVar92 & (byte)iVar84 &
                                                 (byte)iVar79 & (byte)iVar91))) != 0) {
                    FUN_030fcb70(lVar36,(long)(int)uVar43,uVar105);
                    iVar84 = *(int *)(param_1 + 0x88);
                    lVar38 = (long)iVar84;
                    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) <= iVar84) {
                      FUN_030fec08(param_1 + 0x80,lVar38 + 1);
                      iVar84 = *(int *)(param_1 + 0x88);
                    }
                    *(ulong *)(*(long *)(param_1 + 0x80) + (long)iVar84 * 8) =
                         CONCAT44(uVar105,uVar43);
                    *(int *)(param_1 + 0x88) = (int)(lVar38 + 1);
                    piVar55 = (int *)PTR_DAT_047e4f38;
                  }
                }
                else {
                  FUN_030fea54(plVar32,CONCAT44(uVar105,uVar35),&local_ee0);
                  iVar85 = iVar85 + 1;
                }
                iVar81 = iVar81 + 1;
              }
              iVar84 = (int)uStack_6a8;
            } while ((iVar85 < (int)(float)uStack_498) && (iVar81 < (int)uStack_6a8));
          }
        }
        if (iVar85 < (int)(float)uStack_498) {
          lVar38 = (long)iVar85;
          iVar84 = (int)(float)uStack_498;
          do {
            uVar35 = *(uint *)(param_1 + 0x88);
            if (0 < (int)uVar35) {
              lVar42 = 0;
              lVar39 = 0;
              lVar31 = *(long *)(param_1 + 0x80);
              puVar45 = (uint *)(lVar31 + 4);
              do {
                if ((puVar45[-1] == local_4a0[lVar38]) && (*puVar45 == uVar105)) {
                  if ((int)lVar42 != 1) {
                    *(uint *)(param_1 + 0x88) = uVar35 - 1;
                    if (uVar35 + (int)lVar42 != 1) {
                      *(undefined8 *)(lVar31 + (lVar39 >> 0x1d)) =
                           *(undefined8 *)(lVar31 + (long)(int)(uVar35 - 1) * 8);
                    }
                    FUN_030fcd74(lVar36,-lVar42 & 0xffffffff);
                    FUN_030fcff8(lVar36,-lVar42 & 0xffffffff);
                    iVar84 = (int)(float)uStack_498;
                  }
                  break;
                }
                lVar42 = lVar42 + -1;
                lVar39 = lVar39 + 0x100000000;
                puVar45 = puVar45 + 2;
              } while ((ulong)uVar35 + lVar42 != 0);
            }
            lVar38 = lVar38 + 1;
          } while (lVar38 < iVar84);
          iVar84 = (int)uStack_6a8;
        }
        if (iVar81 < iVar84) {
          lVar38 = (long)iVar81;
          do {
            iVar81 = *(int *)((long)local_6b0 + lVar38 * 4);
            pfVar59 = (float *)(local_f10 + (long)iVar81 * 0x50);
            auVar63 = *(undefined1 (*) [16])(pfVar59 + 4);
            iVar85 = -(uint)(*pfVar59 <= *(float *)*pauVar49);
            iVar86 = -(uint)(pfVar59[1] <= *(float *)(pauVar48[3] + 4));
            iVar91 = -(uint)(pfVar59[2] <= *(float *)(pauVar48[3] + 8));
            iVar92 = -(uint)(*(float *)*pauVar60 <= auVar63._0_4_);
            iVar102 = -(uint)(*(float *)(pauVar48[2] + 4) <= auVar63._4_4_);
            iVar79 = -(uint)(*(float *)(pauVar48[2] + 8) <= auVar63._8_4_);
            if (CONCAT13((byte)((uint)iVar102 >> 0x18) & (byte)((uint)iVar86 >> 0x18) &
                         (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar85 >> 0x18) &
                         (byte)((uint)iVar79 >> 0x18) & (byte)((uint)iVar91 >> 0x18),
                         CONCAT12((byte)((uint)iVar102 >> 0x10) & (byte)((uint)iVar86 >> 0x10) &
                                  (byte)((uint)iVar92 >> 0x10) & (byte)((uint)iVar85 >> 0x10) &
                                  (byte)((uint)iVar79 >> 0x10) & (byte)((uint)iVar91 >> 0x10),
                                  CONCAT11((byte)((uint)iVar102 >> 8) & (byte)((uint)iVar86 >> 8) &
                                           (byte)((uint)iVar92 >> 8) & (byte)((uint)iVar85 >> 8) &
                                           (byte)((uint)iVar79 >> 8) & (byte)((uint)iVar91 >> 8),
                                           (byte)iVar102 & (byte)iVar86 &
                                           (byte)iVar92 & (byte)iVar85 & (byte)iVar79 & (byte)iVar91
                                          ))) != 0) {
              FUN_030fcb70(lVar36,iVar81,uVar105);
              iVar84 = *(int *)(param_1 + 0x88);
              lVar39 = (long)iVar84;
              if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) <= iVar84) {
                FUN_030fec08(param_1 + 0x80,lVar39 + 1);
                iVar84 = *(int *)(param_1 + 0x88);
              }
              *(ulong *)(*(long *)(param_1 + 0x80) + (long)iVar84 * 8) = CONCAT44(uVar105,iVar81);
              *(int *)(param_1 + 0x88) = (int)(lVar39 + 1);
              piVar55 = (int *)PTR_DAT_047e4f38;
              iVar84 = (int)uStack_6a8;
            }
            lVar38 = lVar38 + 1;
          } while (lVar38 < iVar84);
        }
        lVar38 = uStack_6a8;
        uVar37 = (ulong)uStack_6a8._4_4_;
        uStack_6a8 = (ulong)uStack_6a8._4_4_ << 0x20;
        if ((-1 < lVar38) && (local_6b0 != (undefined8 *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_6b0,uVar37 << 2);
        }
        lVar38 = (long)uStack_498;
        uVar37 = (ulong)uStack_498._4_4_;
        uStack_498 = (uint *)((ulong)uStack_498._4_4_ << 0x20);
        if ((-1 < lVar38) && (local_4a0 != (uint *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_4a0,uVar37 << 2);
        }
      }
      else {
        auVar63 = NEON_fmin(auVar70,auVar63,4);
        uStack_6a8 = auVar63._8_8_;
        local_6b0 = auVar63._0_8_;
        auVar63 = NEON_fmax(pauVar48[1],*pauVar49,4);
        uStack_698 = auVar63._8_8_;
        local_6a0 = auVar63._0_8_;
        uStack_498 = (uint *)0x8000010000000000;
        FUN_0087011c(lVar41,&local_6b0,&local_4a0);
        if ((float)uStack_498 != 0.0) {
          lVar38 = (long)(int)(float)uStack_498 << 2;
          puVar45 = local_4a0;
          do {
            FUN_030fea54(plVar32,CONCAT44(uVar105,*puVar45),&local_ee0);
            iVar81 = *piVar55;
            lVar39 = *(long *)(lVar53 + 0x1000b8);
            if (lVar39 == 0) {
              lVar39 = FUN_00e5d3b4();
              *(long *)(lVar53 + 0x1000b8) = lVar39;
            }
            if (*(long *)(lVar39 + (long)iVar81 * 8 + 1000) != 0) {
              FUN_03231bdc();
            }
            puVar45 = puVar45 + 1;
            lVar38 = lVar38 + -4;
          } while (lVar38 != 0);
        }
        lVar38 = (long)uStack_498;
        uVar37 = (ulong)uStack_498._4_4_;
        uStack_498 = (uint *)((ulong)uStack_498._4_4_ << 0x20);
        if ((-1 < lVar38) && (local_4a0 != (uint *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_4a0,uVar37 << 2);
        }
      }
      puVar50 = puVar50 + 1;
    } while (puVar50 != puVar47);
  }
  iVar81 = *piVar55;
  lVar36 = *(long *)(lVar53 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar53 + 0x1000b8) = lVar36;
  }
  if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (0 < (int)(uint)uStack_ab8) {
    lVar36 = 0;
    uVar105 = 0;
    do {
      puVar57 = (undefined8 *)(*plVar32 + (long)(int)local_ac0[lVar36] * 0x50);
      puVar57[1] = SUB168(*(undefined1 (*) [16])(puVar57 + 4),8);
      *puVar57 = SUB168(*(undefined1 (*) [16])(puVar57 + 4),0);
      puVar57[3] = SUB168(*(undefined1 (*) [16])(puVar57 + 6),8);
      puVar57[2] = SUB168(*(undefined1 (*) [16])(puVar57 + 6),0);
      *(undefined1 *)(puVar57 + 8) = 0;
      uVar29 = FUN_0086f578(lVar41,puVar57,local_ac0[lVar36]);
      *(undefined4 *)((long)puVar57 + 0x44) = uVar29;
      if (0xfe147ae1 < uVar105) {
        iVar81 = *(int *)PTR_DAT_047e4f38;
        lVar38 = *(long *)(lVar53 + 0x1000b8);
        if (lVar38 == 0) {
          lVar38 = FUN_00e5d3b4();
          *(long *)(lVar53 + 0x1000b8) = lVar38;
        }
        if (*(long *)(lVar38 + (long)iVar81 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
      lVar36 = lVar36 + 1;
      uVar105 = uVar105 + 0x1eb851e;
    } while (lVar36 < (int)(uint)uStack_ab8);
  }
  iVar81 = *(int *)PTR_DAT_047e4f38;
  lVar36 = *(long *)(lVar53 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar53 + 0x1000b8) = lVar36;
  }
  if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (0 < local_ec8) {
    lVar36 = 0;
    uVar105 = 0;
    do {
      puVar57 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)(int)local_ed0[lVar36] * 0x50);
      puVar57[1] = SUB168(*(undefined1 (*) [16])(puVar57 + 4),8);
      *puVar57 = SUB168(*(undefined1 (*) [16])(puVar57 + 4),0);
      puVar57[3] = SUB168(*(undefined1 (*) [16])(puVar57 + 6),8);
      puVar57[2] = SUB168(*(undefined1 (*) [16])(puVar57 + 6),0);
      *(undefined1 *)(puVar57 + 8) = 0;
      uVar29 = FUN_0086f578(lVar56,puVar57,local_ed0[lVar36]);
      *(undefined4 *)((long)puVar57 + 0x44) = uVar29;
      if (0xfe147ae1 < uVar105) {
        iVar81 = *(int *)PTR_DAT_047e4f38;
        lVar41 = *(long *)(lVar53 + 0x1000b8);
        if (lVar41 == 0) {
          lVar41 = FUN_00e5d3b4();
          *(long *)(lVar53 + 0x1000b8) = lVar41;
        }
        if (*(long *)(lVar41 + (long)iVar81 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
      lVar36 = lVar36 + 1;
      uVar105 = uVar105 + 0x1eb851e;
    } while (lVar36 < local_ec8);
  }
  puVar2 = PTR_DAT_047e4f38;
  iVar81 = *(int *)PTR_DAT_047e4f38;
  lVar36 = *(long *)(lVar53 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar53 + 0x1000b8) = lVar36;
  }
  if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  local_ec8 = 0;
  if ((-1 < (int)local_ec4) && (local_ed0 != (uint *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_ed0,(ulong)local_ec4 << 2);
  }
  uVar37 = uStack_ab8;
  uVar51 = (ulong)uStack_ab8._4_4_;
  uStack_ab8 = (ulong)uStack_ab8._4_4_ << 0x20;
  if ((-1 < (long)uVar37) && (local_ac0 != (uint *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_ac0,uVar51 << 2);
  }
  iVar81 = *(int *)puVar2;
  lVar36 = *(long *)(lVar53 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar53 + 0x1000b8) = lVar36;
  }
  if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  uVar26 = _UNK_03cab148;
  uVar25 = _DAT_03cab140;
  uVar24 = _UNK_03caab38;
  uVar23 = _DAT_03caab30;
  uVar22 = _UNK_03caab28;
  uVar21 = _DAT_03caab20;
  uVar20 = _UNK_03caa778;
  uVar19 = _DAT_03caa770;
  uVar18 = _UNK_03caa6a8;
  uVar30 = _DAT_03caa6a0;
  if (0 < *(int *)(param_1 + 0xb8)) {
    lVar36 = 0;
    uVar37 = 0;
    do {
      piVar55 = (int *)(*(long *)(param_1 + 0xb0) + lVar36);
      lVar39 = *(long *)(param_1 + 0xa0);
      lVar41 = (long)*piVar55;
      lVar56 = (long)piVar55[1];
      lVar38 = *(long *)(param_1 + 0x90);
      plVar52 = (long *)(lVar39 + lVar41 * 0x60);
      puVar33 = (undefined4 *)(lVar38 + lVar56 * 0xd0);
      plVar32 = (long *)*plVar52;
      local_ee8[0] = *puVar33;
      bVar28 = (**(code **)(*plVar32 + 0x60))(plVar32,local_ee8,puVar33 + 8,param_1 + 0x150);
      if (((bVar28 ^ (char)piVar55[2] != '\0') & 1) == 0) {
        if ((bVar28 & 1) != 0) {
          if (((*(char *)(lVar39 + lVar41 * 0x60 + 0x50) != '\0') ||
              (*(char *)(lVar39 + lVar41 * 0x60 + 0x52) != '\0')) ||
             (*(char *)(lVar38 + lVar56 * 0xd0 + 0xca) != '\0')) goto LAB_030fae5c;
          if ((*(char *)(lVar39 + lVar41 * 0x60 + 0x51) != '\0') ||
             (*(char *)(lVar38 + lVar56 * 0xd0 + 0xc9) != '\0')) {
            lVar38 = lVar38 + lVar56 * 0xd0;
            auVar10._8_8_ = uVar24;
            auVar10._0_8_ = uVar23;
            auVar12._8_8_ = uVar18;
            auVar12._0_8_ = uVar30;
            auVar66._0_4_ = -*(float *)(lVar38 + 0x80);
            auVar66._4_4_ = -*(float *)(lVar38 + 0x84);
            auVar66._8_4_ = -*(float *)(lVar38 + 0x88);
            auVar66._12_4_ = *(undefined4 *)(lVar38 + 0x8c);
            lVar39 = lVar39 + lVar41 * 0x60;
            auVar14._8_8_ = uVar20;
            auVar14._0_8_ = uVar19;
            auVar16._8_8_ = uVar22;
            auVar16._0_8_ = uVar21;
            auVar70 = a64_TBL(ZEXT816(0),auVar66,auVar16);
            auVar63 = a64_TBL(ZEXT816(0),auVar66,auVar14);
            auVar90 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar39 + 0x30),auVar12);
            auVar71 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar39 + 0x30),auVar10);
            auVar96._0_4_ = auVar63._0_4_ * auVar71._0_4_ - auVar70._0_4_ * auVar90._0_4_;
            auVar96._4_4_ = auVar63._4_4_ * auVar71._4_4_ - auVar70._4_4_ * auVar90._4_4_;
            auVar96._8_4_ = auVar63._8_4_ * auVar71._8_4_ - auVar70._8_4_ * auVar90._8_4_;
            auVar96._12_4_ = auVar63._12_4_ * auVar71._12_4_ - auVar70._12_4_ * auVar90._12_4_;
            auVar8._8_8_ = uVar26;
            auVar8._0_8_ = uVar25;
            auVar82 = a64_TBL(ZEXT816(0),auVar96,auVar8);
            auVar67._12_4_ =
                 auVar82._12_4_ -
                 (auVar63._12_4_ * auVar90._12_4_ + auVar70._12_4_ * auVar71._12_4_);
            fVar68 = -(auVar82._0_4_ -
                      (auVar63._0_4_ * auVar90._0_4_ + auVar70._0_4_ * auVar71._0_4_));
            fVar69 = -(auVar82._4_4_ -
                      (auVar63._4_4_ * auVar90._4_4_ + auVar70._4_4_ * auVar71._4_4_));
            auVar67._0_8_ = (uint *)CONCAT44(fVar69,fVar68);
            auVar67._8_4_ =
                 -(auVar82._8_4_ - (auVar63._8_4_ * auVar90._8_4_ + auVar70._8_4_ * auVar71._8_4_));
            uStack_ab8 = auVar67._8_8_;
            auVar63 = *(undefined1 (*) [16])(lVar38 + 0x80);
            auVar72._0_4_ = *(float *)(lVar39 + 0x40) - *(float *)(lVar38 + 0x90);
            auVar72._4_4_ = *(float *)(lVar39 + 0x44) - *(float *)(lVar38 + 0x94);
            auVar72._8_4_ = *(float *)(lVar39 + 0x48) - *(float *)(lVar38 + 0x98);
            auVar72._12_4_ = *(float *)(lVar39 + 0x4c) - *(float *)(lVar38 + 0x9c);
            auVar70 = NEON_ext(auVar63,auVar63,8,1);
            fVar100 = auVar70._4_4_ * auVar70._4_4_;
            uVar87 = NEON_ext(auVar63._0_8_,auVar70._0_8_,4,1);
            fVar62 = auVar63._0_4_;
            fVar80 = auVar63._4_4_;
            fVar103 = auVar63._8_4_;
            fVar106 = auVar63._12_4_;
            fVar104 = fVar62 * auVar72._0_4_ + fVar80 * auVar72._4_4_ + fVar103 * auVar72._8_4_;
            fVar107 = fVar62 * auVar72._0_4_ + fVar80 * auVar72._4_4_ + fVar103 * auVar72._8_4_;
            fVar93 = fVar100 + -0.5;
            fVar100 = fVar100 + -0.5;
            auVar63 = NEON_ext(auVar72,auVar72,4,1);
            auVar73._0_4_ = auVar72._0_4_ * (float)uVar87 - fVar62 * auVar63._0_4_;
            auVar73._4_4_ = auVar72._4_4_ * (float)((ulong)uVar87 >> 0x20) - fVar80 * auVar63._4_4_;
            auVar73._8_4_ = auVar72._8_4_ * fVar62 - fVar103 * auVar72._0_4_;
            auVar73._12_4_ = auVar72._12_4_ * fVar80 - fVar106 * auVar72._4_4_;
            auVar63 = NEON_ext(auVar73,auVar73,4,1);
            fVar77 = auVar72._0_4_ * fVar93 + fVar62 * fVar104 + auVar63._0_4_ * fVar106;
            fVar78 = auVar72._4_4_ * fVar100 + fVar80 * fVar107 + auVar63._4_4_ * fVar106;
            fVar62 = auVar72._8_4_ * fVar93 + fVar103 * fVar104 + auVar73._0_4_ * fVar106;
            fVar80 = auVar72._12_4_ * fVar100 + fVar106 * fVar107 + fVar106 * 0.0;
            fVar77 = fVar77 + fVar77;
            fVar78 = fVar78 + fVar78;
            auVar83._0_8_ = CONCAT44(fVar78,fVar77);
            auVar83._8_4_ = fVar62 + fVar62;
            auVar83._12_4_ = fVar80 + fVar80;
            uStack_aa8 = auVar83._8_8_;
            auVar63 = *(undefined1 (*) [16])(piVar55 + 0xc);
            auVar70 = *(undefined1 (*) [16])(piVar55 + 0x10);
            fVar80 = auVar63._0_4_;
            auVar97._0_4_ = fVar80 * fVar68;
            fVar103 = auVar63._4_4_;
            auVar97._4_4_ = fVar103 * fVar69;
            fVar106 = auVar63._8_4_;
            auVar97._8_4_ = fVar106 * auVar67._8_4_;
            auVar74._12_4_ = auVar63._12_4_;
            auVar97._12_4_ = auVar74._12_4_ * auVar67._12_4_;
            auVar63 = NEON_ext(auVar97,auVar97,8,1);
            fVar62 = auVar63._0_4_ + auVar63._4_4_;
            bVar28 = (byte)(-(uint)(auVar97._0_4_ + auVar97._4_4_ + fVar62 < 0.0) >> 0x18);
            bVar101 = (byte)(-(uint)(auVar97._0_4_ + auVar97._4_4_ + fVar62 < 0.0) >> 0x18);
            uVar51 = CONCAT17(bVar101,(uint7)(bVar28 & 0x80) << 0x18) & 0x80ffffffffffffff;
            fVar62 = (float)CONCAT13((byte)(uVar51 >> 0x18) ^ (byte)((uint)fVar68 >> 0x18),
                                     SUB43(fVar68,0));
            auVar94._0_8_ =
                 CONCAT17((byte)(uVar51 >> 0x38) ^ (byte)((uint)fVar69 >> 0x18),
                          CONCAT16((char)((uint)fVar69 >> 0x10),
                                   CONCAT15((char)((uint)fVar69 >> 8),
                                            CONCAT14(SUB41(fVar69,0),fVar62))));
            auVar94[8] = SUB41(auVar67._8_4_,0);
            auVar94[9] = (char)((uint)auVar67._8_4_ >> 8);
            auVar94[10] = (char)((uint)auVar67._8_4_ >> 0x10);
            auVar94[0xb] = bVar28 & 0x80 ^ (byte)((uint)auVar67._8_4_ >> 0x18);
            auVar98[0xc] = SUB41(auVar67._12_4_,0);
            auVar98._0_12_ = auVar94;
            auVar98[0xd] = (char)((uint)auVar67._12_4_ >> 8);
            auVar98[0xe] = (char)((uint)auVar67._12_4_ >> 0x10);
            auVar98[0xf] = bVar101 & 0x80 ^ (byte)((uint)auVar67._12_4_ >> 0x18);
            iVar81 = -(uint)(ABS(fVar80 - fVar62) <= fVar61);
            iVar85 = -(uint)(ABS(fVar103 - (float)((ulong)auVar94._0_8_ >> 0x20)) <= fVar61);
            iVar91 = -(uint)(ABS(fVar106 - auVar94._8_4_) <= fVar61);
            iVar102 = -(uint)(ABS(auVar74._12_4_ - auVar98._12_4_) <= fVar61);
            iVar84 = -(uint)(ABS(auVar70._0_4_ - fVar77) <= fVar61);
            iVar86 = -(uint)(ABS(auVar70._4_4_ - fVar78) <= fVar61);
            iVar92 = -(uint)(ABS(auVar70._8_4_ - auVar83._8_4_) <= fVar61);
            local_ac0 = auVar67._0_8_;
            local_ab0 = auVar83._0_8_;
            if (CONCAT13((byte)((uint)iVar85 >> 0x18) & (byte)((uint)iVar81 >> 0x18) &
                         (byte)((uint)iVar91 >> 0x18) & (byte)((uint)iVar102 >> 0x18),
                         CONCAT12((byte)((uint)iVar85 >> 0x10) & (byte)((uint)iVar81 >> 0x10) &
                                  (byte)((uint)iVar91 >> 0x10) & (byte)((uint)iVar102 >> 0x10),
                                  CONCAT11((byte)((uint)iVar85 >> 8) & (byte)((uint)iVar81 >> 8) &
                                           (byte)((uint)iVar91 >> 8) & (byte)((uint)iVar102 >> 8),
                                           (byte)iVar85 & (byte)iVar81 & (byte)iVar91 &
                                           (byte)iVar102))) == 0 ||
                CONCAT13((byte)((uint)iVar86 >> 0x18) & (byte)((uint)iVar84 >> 0x18) &
                         (byte)((uint)iVar92 >> 0x18),
                         CONCAT12((byte)((uint)iVar86 >> 0x10) & (byte)((uint)iVar84 >> 0x10) &
                                  (byte)((uint)iVar92 >> 0x10),
                                  CONCAT11((byte)((uint)iVar86 >> 8) & (byte)((uint)iVar84 >> 8) &
                                           (byte)((uint)iVar92 >> 8),
                                           (byte)iVar86 & (byte)iVar84 & (byte)iVar92))) == 0) {
              fVar77 = fVar77 - auVar70._0_4_;
              fVar78 = fVar78 - auVar70._4_4_;
              fVar62 = auVar83._8_4_ - auVar70._8_4_;
              plVar52 = (long *)*plVar52;
              fVar68 = *(float *)(plVar52 + 4);
              fVar62 = SQRT(fVar77 * fVar77 + fVar78 * fVar78 + fVar62 * fVar62);
              if (fVar62 < fVar68) {
                auVar74._0_4_ = -fVar80;
                auVar74._4_4_ = -fVar103;
                auVar74._8_4_ = -fVar106;
                auVar15._8_8_ = uVar20;
                auVar15._0_8_ = uVar19;
                auVar17._8_8_ = uVar22;
                auVar17._0_8_ = uVar21;
                auVar71 = a64_TBL(ZEXT816(0),auVar74,auVar17);
                auVar70 = a64_TBL(ZEXT816(0),auVar74,auVar15);
                auVar11._8_8_ = uVar24;
                auVar11._0_8_ = uVar23;
                auVar13._8_8_ = uVar18;
                auVar13._0_8_ = uVar30;
                auVar90 = a64_TBL(ZEXT816(0),auVar67,auVar13);
                auVar63 = a64_TBL(ZEXT816(0),auVar67,auVar11);
                auVar99._0_4_ = auVar70._0_4_ * auVar63._0_4_ - auVar71._0_4_ * auVar90._0_4_;
                auVar99._4_4_ = auVar70._4_4_ * auVar63._4_4_ - auVar71._4_4_ * auVar90._4_4_;
                auVar99._8_4_ = auVar70._8_4_ * auVar63._8_4_ - auVar71._8_4_ * auVar90._8_4_;
                auVar99._12_4_ = auVar70._12_4_ * auVar63._12_4_ - auVar71._12_4_ * auVar90._12_4_;
                auVar9._8_8_ = uVar26;
                auVar9._0_8_ = uVar25;
                auVar82 = a64_TBL(ZEXT816(0),auVar99,auVar9);
                fVar78 = auVar82._12_4_ -
                         (auVar70._12_4_ * auVar90._12_4_ + auVar71._12_4_ * auVar63._12_4_);
                fVar69 = -(auVar82._0_4_ -
                          (auVar70._0_4_ * auVar90._0_4_ + auVar71._0_4_ * auVar63._0_4_));
                fVar77 = -(auVar82._4_4_ -
                          (auVar70._4_4_ * auVar90._4_4_ + auVar71._4_4_ * auVar63._4_4_));
                fVar80 = -(auVar82._8_4_ -
                          (auVar70._8_4_ * auVar90._8_4_ + auVar71._8_4_ * auVar63._8_4_));
                auVar75._0_4_ = fVar69 * fVar69;
                auVar75._4_4_ = fVar77 * fVar77;
                auVar75._8_4_ = fVar80 * fVar80;
                auVar75._12_4_ = fVar78 * fVar78;
                auVar63 = NEON_ext(auVar75,auVar75,8,1);
                fVar69 = auVar63._0_4_ + auVar63._4_4_;
                fVar77 = 0.0;
                if (auVar75._0_4_ + auVar75._4_4_ + fVar69 != 0.0) {
                  fVar77 = fVar78 / SQRT(auVar75._0_4_ + auVar75._4_4_ + fVar69);
                }
                auVar70 = NEON_fmov(0x3f800000,4);
                fVar69 = ABS(fVar77);
                auVar76._0_4_ = ABS(fVar69);
                auVar76._4_4_ = ABS(ABS(fVar77));
                auVar76._8_4_ = ABS(fVar69);
                auVar76._12_4_ = ABS(ABS(fVar77));
                auVar63 = NEON_fmin(auVar76,auVar70,4);
                fVar77 = auVar63._0_4_;
                fVar80 = (auVar70._0_4_ - fVar77) * 0.5;
                uVar105 = -(uint)(0.5 < fVar77);
                fVar78 = (float)((uint)fVar80 ^ ((uint)fVar80 ^ (uint)(fVar77 * fVar77)) & ~uVar105)
                ;
                fVar80 = (float)((uint)SQRT(fVar80) ^ ((uint)SQRT(fVar80) ^ (uint)fVar77) & ~uVar105
                                );
                fVar80 = fVar80 + fVar80 * fVar78 * (fVar78 * (fVar78 * (fVar78 * (fVar78 * 
                                                  0.0421632 + 0.024181312) + 0.045470025) +
                                                  0.074953005) + 0.16666752);
                uVar51 = auVar63._0_8_ ^
                         (auVar63._0_8_ ^
                         (ulong)((uint)fVar80 ^
                                ((uint)fVar80 ^ (uint)(1.5707964 - (fVar80 + fVar80))) & uVar105)) &
                         ~(ulong)-(uint)(fVar77 < 0.0001);
                fVar69 = 1.5707964 -
                         (float)CONCAT13((byte)(-(uint)(fVar69 < 0.0) >> 0x18) & 0x80 ^
                                         (byte)(uVar51 >> 0x18),(int3)uVar51);
                (**(code **)(*plVar52 + 0x50))(plVar52,&local_4a0);
                uVar87 = NEON_fmax(CONCAT44((float)local_4a0 * (float)local_4a0 +
                                            local_4a0._4_4_ * local_4a0._4_4_ +
                                            (float)uStack_498 * (float)uStack_498,
                                            (float)local_4a0 * (float)local_4a0 +
                                            local_4a0._4_4_ * local_4a0._4_4_ +
                                            (float)uStack_498 * (float)uStack_498),
                                   CONCAT44((float)local_490 * (float)local_490 +
                                            local_490._4_4_ * local_490._4_4_ +
                                            puStack_488._0_4_ * puStack_488._0_4_,
                                            (float)local_490 * (float)local_490 +
                                            local_490._4_4_ * local_490._4_4_ +
                                            puStack_488._0_4_ * puStack_488._0_4_),4);
                if (fVar62 + SQRT((float)uVar87) * (fVar69 + fVar69) < fVar68) goto LAB_030faf5c;
              }
              ppuVar34 = &local_ac0;
              bVar28 = 1;
              goto LAB_030faf58;
            }
          }
        }
      }
      else {
LAB_030fae5c:
        lVar38 = lVar38 + lVar56 * 0xd0;
        bVar28 = bVar28 & 1;
        auVar70._8_8_ = uVar24;
        auVar70._0_8_ = uVar23;
        auVar71._8_8_ = uVar18;
        auVar71._0_8_ = uVar30;
        ppuVar34 = (uint **)&local_4a0;
        lVar39 = lVar39 + lVar41 * 0x60;
        auVar64._0_4_ = -*(float *)(lVar38 + 0x80);
        auVar64._4_4_ = -*(float *)(lVar38 + 0x84);
        auVar64._8_4_ = -*(float *)(lVar38 + 0x88);
        auVar88 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar39 + 0x30),auVar71);
        auVar71 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar39 + 0x30),auVar70);
        auVar64._12_4_ = *(undefined4 *)(lVar38 + 0x8c);
        auVar90._8_8_ = uVar20;
        auVar90._0_8_ = uVar19;
        auVar82._8_8_ = uVar22;
        auVar82._0_8_ = uVar21;
        auVar82 = a64_TBL(ZEXT816(0),auVar64,auVar82);
        auVar70 = a64_TBL(ZEXT816(0),auVar64,auVar90);
        auVar63._8_8_ = uVar26;
        auVar63._0_8_ = uVar25;
        auVar95._0_4_ = auVar70._0_4_ * auVar71._0_4_ - auVar82._0_4_ * auVar88._0_4_;
        auVar95._4_4_ = auVar70._4_4_ * auVar71._4_4_ - auVar82._4_4_ * auVar88._4_4_;
        auVar95._8_4_ = auVar70._8_4_ * auVar71._8_4_ - auVar82._8_4_ * auVar88._8_4_;
        auVar95._12_4_ = auVar70._12_4_ * auVar71._12_4_ - auVar82._12_4_ * auVar88._12_4_;
        auVar63 = a64_TBL(ZEXT816(0),auVar95,auVar63);
        uStack_498 = (uint *)CONCAT44(auVar63._12_4_ -
                                      (auVar70._12_4_ * auVar88._12_4_ +
                                      auVar82._12_4_ * auVar71._12_4_),
                                      -(auVar63._8_4_ -
                                       (auVar70._8_4_ * auVar88._8_4_ +
                                       auVar82._8_4_ * auVar71._8_4_)));
        local_4a0 = (uint *)CONCAT44(-(auVar63._4_4_ -
                                      (auVar70._4_4_ * auVar88._4_4_ + auVar82._4_4_ * auVar71._4_4_
                                      )),-(auVar63._0_4_ -
                                          (auVar70._0_4_ * auVar88._0_4_ +
                                          auVar82._0_4_ * auVar71._0_4_)));
        auVar63 = *(undefined1 (*) [16])(lVar38 + 0x80);
        auVar88._0_4_ = *(float *)(lVar39 + 0x40) - *(float *)(lVar38 + 0x90);
        auVar88._4_4_ = *(float *)(lVar39 + 0x44) - *(float *)(lVar38 + 0x94);
        auVar88._8_4_ = *(float *)(lVar39 + 0x48) - *(float *)(lVar38 + 0x98);
        auVar88._12_4_ = *(float *)(lVar39 + 0x4c) - *(float *)(lVar38 + 0x9c);
        auVar70 = NEON_ext(auVar63,auVar63,8,1);
        uVar87 = NEON_ext(auVar63._0_8_,auVar70._0_8_,4,1);
        fVar77 = auVar70._4_4_ * auVar70._4_4_;
        auVar70 = NEON_ext(auVar88,auVar88,4,1);
        fVar69 = fVar77 + -0.5;
        fVar77 = fVar77 + -0.5;
        fVar62 = auVar63._0_4_;
        fVar68 = auVar63._4_4_;
        fVar80 = auVar63._8_4_;
        fVar78 = auVar63._12_4_;
        fVar103 = fVar62 * auVar88._0_4_ + fVar68 * auVar88._4_4_ + fVar80 * auVar88._8_4_;
        fVar106 = fVar62 * auVar88._0_4_ + fVar68 * auVar88._4_4_ + fVar80 * auVar88._8_4_;
        auVar89._0_4_ = auVar88._0_4_ * (float)uVar87 - fVar62 * auVar70._0_4_;
        auVar89._4_4_ = auVar88._4_4_ * (float)((ulong)uVar87 >> 0x20) - fVar68 * auVar70._4_4_;
        auVar89._8_4_ = auVar88._8_4_ * fVar62 - fVar80 * auVar88._0_4_;
        auVar89._12_4_ = auVar88._12_4_ * fVar68 - fVar78 * auVar88._4_4_;
        auVar63 = NEON_ext(auVar89,auVar89,4,1);
        fVar62 = auVar88._0_4_ * fVar69 + fVar62 * fVar103 + auVar63._0_4_ * fVar78;
        fVar68 = auVar88._4_4_ * fVar77 + fVar68 * fVar106 + auVar63._4_4_ * fVar78;
        fVar69 = auVar88._8_4_ * fVar69 + fVar80 * fVar103 + auVar89._0_4_ * fVar78;
        fVar77 = auVar88._12_4_ * fVar77 + fVar78 * fVar106 + fVar78 * 0.0;
        auVar65._0_8_ = (uint *)CONCAT44(fVar68 + fVar68,fVar62 + fVar62);
        auVar65._8_4_ = fVar69 + fVar69;
        auVar65._12_4_ = fVar77 + fVar77;
        puStack_488 = auVar65._8_8_;
        local_490 = auVar65._0_8_;
LAB_030faf58:
        FUN_030f703c(param_1,uVar37 & 0xffffffff,bVar28,ppuVar34);
      }
LAB_030faf5c:
      iVar81 = *(int *)PTR_DAT_047e4f38;
      lVar41 = *(long *)(lVar53 + 0x1000b8);
      if (lVar41 == 0) {
        lVar41 = FUN_00e5d3b4();
        *(long *)(lVar53 + 0x1000b8) = lVar41;
      }
      if (*(long *)(lVar41 + (long)iVar81 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      uVar37 = uVar37 + 1;
      lVar36 = lVar36 + 0x60;
    } while ((long)uVar37 < (long)*(int *)(param_1 + 0xb8));
  }
  iVar81 = *(int *)(param_1 + 0x98);
  if (iVar81 != 0) {
    uVar37 = (long)iVar81 * 0xd0 - 0xd0;
    lVar41 = *(long *)(param_1 + 0x90);
    uVar105 = ((uint)(uVar37 / 0xd0) & 0x3ffffff) + 1;
    lVar36 = lVar41;
    if ((uVar105 & 3) != 0) {
      lVar56 = -((ulong)uVar105 & 3);
      do {
        *(undefined2 *)(lVar36 + 0xc9) = 0;
        lVar36 = lVar36 + 0xd0;
        bVar27 = lVar56 != -1;
        lVar56 = lVar56 + 1;
      } while (bVar27);
    }
    if (0x26f < uVar37) {
      do {
        *(undefined2 *)(lVar36 + 0xc9) = 0;
        *(undefined2 *)(lVar36 + 0x199) = 0;
        *(undefined2 *)(lVar36 + 0x269) = 0;
        puVar3 = (undefined2 *)(lVar36 + 0x339);
        lVar36 = lVar36 + 0x340;
        *puVar3 = 0;
      } while (lVar41 + (long)iVar81 * 0xd0 != lVar36);
    }
  }
  iVar81 = *(int *)(param_1 + 0xa8);
  if (iVar81 != 0) {
    uVar37 = (long)iVar81 * 0x60 - 0x60;
    lVar41 = *(long *)(param_1 + 0xa0);
    uVar105 = ((uint)(uVar37 / 0x60) & 0x3ffffff) + 1;
    lVar36 = lVar41;
    if ((uVar105 & 3) != 0) {
      lVar56 = -((ulong)uVar105 & 3);
      do {
        *(undefined2 *)(lVar36 + 0x50) = 0;
        bVar27 = lVar56 != -1;
        lVar56 = lVar56 + 1;
        *(undefined1 *)(lVar36 + 0x52) = 0;
        lVar36 = lVar36 + 0x60;
      } while (bVar27);
    }
    if (0x11f < uVar37) {
      do {
        *(undefined2 *)(lVar36 + 0x50) = 0;
        *(undefined1 *)(lVar36 + 0x52) = 0;
        *(undefined2 *)(lVar36 + 0xb0) = 0;
        *(undefined1 *)(lVar36 + 0xb2) = 0;
        *(undefined2 *)(lVar36 + 0x110) = 0;
        *(undefined1 *)(lVar36 + 0x112) = 0;
        *(undefined2 *)(lVar36 + 0x170) = 0;
        *(undefined1 *)(lVar36 + 0x172) = 0;
        lVar36 = lVar36 + 0x180;
      } while (lVar41 + (long)iVar81 * 0x60 != lVar36);
    }
  }
  *(undefined1 *)(param_1 + 0xc4) = 0;
LAB_030fb478:
  lVar36 = *(long *)(lVar53 + 0x1000b8);
  if (*(int *)(param_1 + 0x188) < 1) {
    if (lVar36 == 0) {
      lVar36 = FUN_00e5d3b4();
      *(long *)(lVar53 + 0x1000b8) = lVar36;
    }
    puVar50 = *(uint **)(lVar36 + 0x3e0);
    if (puVar50 != (uint *)0x0) {
      lVar36 = *(long *)puVar50;
      if (*(code **)(lVar36 + 0x18) != (code *)0x0) {
        (**(code **)(lVar36 + 0x18))("applyPendingUpdates",0x13,*(undefined8 *)(lVar36 + 0x28));
      }
      puVar57 = *(undefined8 **)(puVar50 + 4);
      uVar37 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
      if ((uVar37 <= *(ulong *)(puVar50 + 6)) &&
         (*(ulong *)(puVar50 + 4) = uVar37, puVar57 != (undefined8 *)0x0)) {
        *puVar57 = "TtapplyPendingUpdates";
        uVar30 = nn::os::GetSystemTick();
        puVar57[1] = uVar30;
      }
      if (((*(byte *)(lVar36 + 0x38) & 1) != 0) && (*(long *)(puVar50 + 0xc) != 0)) {
        puVar57 = *(undefined8 **)(puVar50 + 4);
        uVar37 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
        if ((uVar37 <= *(ulong *)(puVar50 + 6)) &&
           (*(ulong *)(puVar50 + 4) = uVar37, puVar57 != (undefined8 *)0x0)) {
          *puVar57 = &DAT_03c4e575;
          puVar57[1] = *(undefined8 *)(*(long *)(puVar50 + 0xc) + 8);
        }
      }
    }
    iVar81 = *(int *)(param_1 + 0xc0);
    lVar36 = (long)iVar81;
    local_4a0 = puVar50;
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < iVar81) {
      FUN_030fee3c(param_2,PTR_PTR_047d1a50,lVar36);
    }
    iVar84 = (int)param_2[1];
    lVar41 = (long)iVar84;
    if (iVar84 < iVar81) {
      lVar36 = lVar41 * -0x38 + lVar36 * 0x38;
      puVar57 = (undefined8 *)(*param_2 + lVar41 * 0x38 + 0x20);
      *(int *)(param_2 + 1) = iVar81;
      do {
        puVar57[-3] = 0;
        puVar57[-2] = 0x8000000000000000;
        lVar36 = lVar36 + -0x38;
        puVar57[-1] = 0;
        *puVar57 = 0x8000000000000000;
        puVar57[1] = 0;
        puVar57[2] = 0x8000000000000000;
        puVar57 = puVar57 + 7;
      } while (lVar36 != 0);
    }
    else if (iVar81 < iVar84) {
      *(int *)(param_2 + 1) = iVar81;
      lVar36 = lVar41 * -0x38 + lVar36 * 0x38;
      puVar33 = (undefined4 *)(*param_2 + lVar41 * 0x38 + -0x18);
      do {
        puVar33[4] = 0;
        if ((-1 < (int)puVar33[5]) && (*(long *)(puVar33 + 2) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(puVar33 + 2),(ulong)(uint)puVar33[5] << 5);
        }
        *(undefined8 *)(puVar33 + 2) = 0;
        puVar33[5] = 0x80000000;
        *puVar33 = 0;
        if ((-1 < (int)puVar33[1]) && (*(long *)(puVar33 + -2) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(puVar33 + -2),(ulong)(uint)puVar33[1] << 2);
        }
        *(undefined8 *)(puVar33 + -2) = 0;
        puVar33[1] = 0x80000000;
        puVar33[-4] = 0;
        if ((-1 < (int)puVar33[-3]) && (*(long *)(puVar33 + -6) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(puVar33 + -6),(ulong)(uint)puVar33[-3] << 2);
        }
        *(undefined8 *)(puVar33 + -6) = 0;
        lVar36 = lVar36 + 0x38;
        puVar33[-3] = 0x80000000;
        puVar33 = puVar33 + -0xe;
      } while (lVar36 != 0);
    }
    if (0 < *(int *)(param_1 + 0xc0)) {
      lVar41 = 0;
      lVar36 = 0;
      do {
        *(int *)(*param_2 + lVar41) = (int)lVar36;
        lVar36 = lVar36 + 1;
        lVar41 = lVar41 + 0x38;
      } while (lVar36 < *(int *)(param_1 + 0xc0));
    }
    puVar50 = local_4a0;
    if (*(int *)(param_1 + 0x98) != 0) {
      piVar55 = *(int **)(param_1 + 0x90);
      piVar54 = piVar55 + (long)*(int *)(param_1 + 0x98) * 0x34;
      piVar58 = (int *)PTR_DAT_047e4f38;
      do {
        if ((char)piVar55[0x32] != '\0') {
          lVar56 = (long)*piVar55;
          lVar41 = *param_2;
          lVar36 = lVar41 + lVar56 * 0x38;
          puVar50 = (uint *)(lVar36 + 0x34);
          plVar32 = (long *)(lVar36 + 0x28);
          uVar105 = piVar55[0x30];
          if ((int)(*puVar50 & 0x7fffffff) < (int)uVar105) {
            FUN_0300996c(plVar32,PTR_PTR_047d1a50,(long)(int)uVar105);
            uVar105 = piVar55[0x30];
          }
          uVar37 = (ulong)uVar105;
          lVar36 = *(long *)(piVar55 + 0x2e);
          if (0 < (int)uVar105) {
            lVar39 = lVar41 + lVar56 * 0x38;
            lVar38 = 0;
            piVar58 = (int *)(lVar39 + 0x10);
            piVar4 = (int *)(lVar39 + 0x20);
            piVar5 = (int *)(lVar39 + 0x30);
            do {
              lVar36 = lVar36 + lVar38 * 0x40;
              if (0 < *(int *)(lVar36 + 0x38)) {
                lVar31 = 0;
                do {
                  iVar81 = *(int *)(*(long *)(lVar36 + 0x30) + lVar31 * 4);
                  if (*(int *)(*(long *)(piVar55 + 0x2a) + (long)iVar81 * 0x10 + 8) == 0) {
                    iVar84 = *piVar4;
                    lVar42 = (long)iVar84;
                    if ((int)(*(uint *)(lVar39 + 0x24) & 0x7fffffff) <= iVar84) {
                      FUN_03078498((long *)(lVar39 + 0x18),PTR_PTR_047d1a50,lVar42 + 1);
                      iVar84 = *piVar4;
                    }
                    *(int *)(*(long *)(lVar39 + 0x18) + (long)iVar84 * 4) = iVar81;
                    *piVar4 = (int)(lVar42 + 1);
                  }
                  else {
                    iVar84 = *piVar58;
                    lVar42 = (long)iVar84;
                    if ((int)(*(uint *)(lVar39 + 0x14) & 0x7fffffff) <= iVar84) {
                      FUN_03078498((long *)(lVar39 + 8),PTR_PTR_047d1a50,lVar42 + 1);
                      iVar84 = *piVar58;
                    }
                    *(int *)(*(long *)(lVar39 + 8) + (long)iVar84 * 4) = iVar81;
                    *piVar58 = (int)(lVar42 + 1);
                  }
                  lVar31 = lVar31 + 1;
                } while (lVar31 < *(int *)(lVar36 + 0x38));
              }
              iVar81 = *piVar5;
              lVar31 = (long)iVar81;
              if ((int)(*puVar50 & 0x7fffffff) <= iVar81) {
                FUN_0300996c(plVar32,PTR_PTR_047d1a50,lVar31 + 1);
                iVar81 = *piVar5;
              }
              puVar57 = (undefined8 *)(*plVar32 + (long)iVar81 * 0x20);
              uVar30 = *(undefined8 *)(lVar36 + 0x28);
              puVar57[1] = *(undefined8 *)(lVar36 + 0x18);
              puVar57[3] = uVar30;
              uVar30 = *(undefined8 *)(lVar36 + 0x10);
              puVar57[2] = *(undefined8 *)(lVar36 + 0x20);
              *puVar57 = uVar30;
              *piVar5 = (int)(lVar31 + 1);
              uVar37 = (ulong)piVar55[0x30];
              lVar36 = *(long *)(piVar55 + 0x2e);
              lVar38 = lVar38 + 1;
            } while (lVar38 < (long)uVar37);
            piVar58 = (int *)PTR_DAT_047e4f38;
          }
          if ((int)uVar37 != 0) {
            uVar37 = -(uVar37 >> 0x1f & 1) & 0xffffffc000000000 | (uVar37 & 0xffffffff) << 6;
            do {
              lVar38 = lVar36 + uVar37;
              *(undefined4 *)(lVar38 + -8) = 0;
              if ((-1 < (int)*(uint *)(lVar38 + -4)) && (*(long *)(lVar38 + -0x10) != 0)) {
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                          (PTR_PTR_047d1a50,*(long *)(lVar38 + -0x10),
                           (ulong)*(uint *)(lVar38 + -4) << 2);
              }
              uVar37 = uVar37 - 0x40;
              *(undefined8 *)(lVar38 + -0x10) = 0;
              *(undefined4 *)(lVar38 + -4) = 0x80000000;
            } while (uVar37 != 0);
          }
          piVar55[0x30] = 0;
          if ((-1 < piVar55[0x31]) && (*(long *)(piVar55 + 0x2e) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,*(long *)(piVar55 + 0x2e),(ulong)(uint)piVar55[0x31] << 6);
          }
          piVar55[0x2e] = 0;
          piVar55[0x2f] = 0;
          piVar55[0x31] = -0x80000000;
          iVar81 = *piVar58;
          lVar36 = *(long *)(lVar53 + 0x1000b8);
          if (lVar36 == 0) {
            lVar36 = FUN_00e5d3b4();
            *(long *)(lVar53 + 0x1000b8) = lVar36;
          }
          if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
            FUN_03231bdc();
          }
          lVar41 = lVar41 + lVar56 * 0x38;
          FUN_030fc690(lVar41 + 8);
          FUN_030fc690(lVar41 + 0x18);
          iVar81 = *piVar58;
          lVar36 = *(long *)(lVar53 + 0x1000b8);
          if (lVar36 == 0) {
            lVar36 = FUN_00e5d3b4();
            *(long *)(lVar53 + 0x1000b8) = lVar36;
          }
          if (*(long *)(lVar36 + (long)iVar81 * 8 + 1000) != 0) {
            FUN_03231bdc();
          }
        }
        piVar55 = piVar55 + 0x34;
        puVar50 = local_4a0;
      } while (piVar55 != piVar54);
    }
  }
  else {
    if (lVar36 == 0) {
      lVar36 = FUN_00e5d3b4();
      *(long *)(lVar53 + 0x1000b8) = lVar36;
    }
    puVar50 = *(uint **)(lVar36 + 0x3e0);
    if (puVar50 != (uint *)0x0) {
      lVar53 = *(long *)puVar50;
      if (*(code **)(lVar53 + 0x18) != (code *)0x0) {
        (**(code **)(lVar53 + 0x18))
                  ("applyPendingUpdatesLimited",0x1a,*(undefined8 *)(lVar53 + 0x28));
      }
      puVar57 = *(undefined8 **)(puVar50 + 4);
      uVar37 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
      if ((uVar37 <= *(ulong *)(puVar50 + 6)) &&
         (*(ulong *)(puVar50 + 4) = uVar37, puVar57 != (undefined8 *)0x0)) {
        *puVar57 = "TtapplyPendingUpdatesLimited";
        uVar30 = nn::os::GetSystemTick();
        puVar57[1] = uVar30;
      }
      if (((*(byte *)(lVar53 + 0x38) & 1) != 0) && (*(long *)(puVar50 + 0xc) != 0)) {
        puVar57 = *(undefined8 **)(puVar50 + 4);
        uVar37 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
        if ((uVar37 <= *(ulong *)(puVar50 + 6)) &&
           (*(ulong *)(puVar50 + 4) = uVar37, puVar57 != (undefined8 *)0x0)) {
          *puVar57 = &DAT_03c4e575;
          puVar57[1] = *(undefined8 *)(*(long *)(puVar50 + 0xc) + 8);
        }
      }
    }
    iVar81 = *(int *)(param_1 + 0xc0);
    lVar53 = (long)iVar81;
    local_ed0 = puVar50;
    if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < iVar81) {
      FUN_030fee3c(param_2,PTR_PTR_047d1a50,lVar53);
    }
    iVar84 = (int)param_2[1];
    lVar36 = (long)iVar84;
    if (iVar84 < iVar81) {
      lVar53 = lVar36 * -0x38 + lVar53 * 0x38;
      puVar57 = (undefined8 *)(*param_2 + lVar36 * 0x38 + 0x20);
      *(int *)(param_2 + 1) = iVar81;
      do {
        puVar57[-3] = 0;
        puVar57[-2] = 0x8000000000000000;
        lVar53 = lVar53 + -0x38;
        puVar57[-1] = 0;
        *puVar57 = 0x8000000000000000;
        puVar57[1] = 0;
        puVar57[2] = 0x8000000000000000;
        puVar57 = puVar57 + 7;
      } while (lVar53 != 0);
    }
    else if (iVar81 < iVar84) {
      *(int *)(param_2 + 1) = iVar81;
      lVar53 = lVar36 * -0x38 + lVar53 * 0x38;
      puVar33 = (undefined4 *)(*param_2 + lVar36 * 0x38 + -0x18);
      do {
        puVar33[4] = 0;
        if ((-1 < (int)puVar33[5]) && (*(long *)(puVar33 + 2) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(puVar33 + 2),(ulong)(uint)puVar33[5] << 5);
        }
        *(undefined8 *)(puVar33 + 2) = 0;
        puVar33[5] = 0x80000000;
        *puVar33 = 0;
        if ((-1 < (int)puVar33[1]) && (*(long *)(puVar33 + -2) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(puVar33 + -2),(ulong)(uint)puVar33[1] << 2);
        }
        *(undefined8 *)(puVar33 + -2) = 0;
        puVar33[1] = 0x80000000;
        puVar33[-4] = 0;
        if ((-1 < (int)puVar33[-3]) && (*(long *)(puVar33 + -6) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(puVar33 + -6),(ulong)(uint)puVar33[-3] << 2);
        }
        *(undefined8 *)(puVar33 + -6) = 0;
        lVar53 = lVar53 + 0x38;
        puVar33[-3] = 0x80000000;
        puVar33 = puVar33 + -0xe;
      } while (lVar53 != 0);
    }
    uStack_ab8._0_4_ = 0;
    uStack_ab8._4_4_ = 0x80000000;
    local_ac0 = (uint *)0x0;
    iVar81 = *(int *)(param_1 + 0x98);
    if (iVar81 < 1) {
      uVar37 = 0;
    }
    else {
      puVar50 = (uint *)0x0;
      uVar37 = 0;
      lVar53 = 0;
      do {
        lVar36 = *(long *)(param_1 + 0x90);
        if ((*(char *)(lVar36 + lVar53 * 0xd0 + 200) != '\0') &&
           (piVar55 = (int *)(lVar36 + lVar53 * 0xd0 + 0xc0), 0 < *piVar55)) {
          lVar41 = 0;
          uVar51 = (long)(int)uVar37;
          do {
            lVar56 = *(long *)(lVar36 + lVar53 * 0xd0 + 0xb8);
            uVar37 = uVar51 + 1;
            uVar105 = (uint)uVar51;
            if ((long)((ulong)uStack_ab8._4_4_ & 0x7fffffff) <= (long)uVar51) {
              FUN_030ff0d4(&local_ac0,uVar37);
              puVar50 = local_ac0;
              uVar105 = (uint)uStack_ab8;
            }
            puVar50[(long)(int)uVar105 * 4] = (uint)lVar53;
            *(long *)(puVar50 + (long)(int)uVar105 * 4 + 2) = lVar56 + lVar41 * 0x40;
            uStack_ab8._0_4_ = (uint)uVar37;
            if (0 < (long)uVar51) {
              do {
                iVar81 = (int)uVar51;
                uVar51 = (ulong)(uint)(iVar81 + -1 >> 1);
                if (**(float **)(puVar50 + uVar51 * 4 + 2) <
                    **(float **)(puVar50 + (long)iVar81 * 4 + 2)) break;
                puVar47 = puVar50 + (long)iVar81 * 4;
                local_4a0 = *(uint **)puVar47;
                uStack_498 = *(uint **)(puVar47 + 2);
                puVar45 = puVar50 + uVar51 * 4;
                uVar30 = *(undefined8 *)(puVar45 + 2);
                *(undefined8 *)puVar47 = *(undefined8 *)puVar45;
                *(undefined8 *)(puVar47 + 2) = uVar30;
                *(uint **)puVar45 = local_4a0;
                *(uint **)(puVar45 + 2) = uStack_498;
              } while (2 < iVar81);
            }
            lVar41 = lVar41 + 1;
            uVar51 = uVar37;
          } while (lVar41 < *piVar55);
          iVar81 = *(int *)(param_1 + 0x98);
        }
        lVar53 = lVar53 + 1;
      } while (lVar53 < iVar81);
    }
    puVar50 = local_ac0;
    iVar81 = *(int *)(param_1 + 0x188);
    if (0 < iVar81) {
      do {
        iVar84 = (int)uVar37;
        if (iVar84 == 0) {
          uVar105 = 0;
          break;
        }
        uVar35 = *puVar50;
        uVar105 = iVar84 - 1;
        pfVar59 = *(float **)(puVar50 + 2);
        if (uVar105 != 0) {
          pfVar7 = *(float **)(puVar50 + (long)(int)uVar105 * 4 + 2);
          fVar61 = *pfVar7;
          fVar62 = *pfVar59;
          *(undefined8 *)puVar50 = *(undefined8 *)(puVar50 + (long)(int)uVar105 * 4);
          *(float **)(puVar50 + 2) = pfVar7;
          if (fVar62 <= fVar61) {
            if (iVar84 < 4) {
              uVar37 = 1;
            }
            else {
              uVar43 = 2;
              if (**(float **)(puVar50 + 6) < **(float **)(puVar50 + 10)) {
                uVar43 = 1;
              }
              uVar37 = (ulong)uVar43;
            }
            if ((int)uVar37 < (int)uVar105) {
              iVar84 = 0;
              do {
                iVar85 = (int)uVar37;
                if (**(float **)(puVar50 + (long)iVar84 * 4 + 2) <=
                    **(float **)(puVar50 + (long)iVar85 * 4 + 2)) break;
                puVar47 = puVar50 + (long)iVar84 * 4;
                lVar53 = (long)iVar85;
                puVar45 = puVar50 + lVar53 * 4;
                uVar37 = lVar53 << 1 | 1;
                local_4a0 = *(uint **)puVar47;
                uStack_498 = *(uint **)(puVar47 + 2);
                uVar30 = *(undefined8 *)(puVar45 + 2);
                *(undefined8 *)puVar47 = *(undefined8 *)puVar45;
                *(undefined8 *)(puVar47 + 2) = uVar30;
                *(uint **)puVar45 = local_4a0;
                *(uint **)(puVar45 + 2) = uStack_498;
                lVar53 = (long)(int)(lVar53 << 1) + 2;
                uVar43 = (uint)lVar53;
                if ((int)uVar43 < (int)uVar105) {
                  if (**(float **)(puVar50 + uVar37 * 4 + 2) <
                      **(float **)(puVar50 + lVar53 * 4 + 2)) {
                    uVar43 = (uint)uVar37;
                  }
                  uVar37 = (ulong)uVar43;
                }
                iVar84 = iVar85;
              } while ((int)uVar37 < (int)uVar105);
            }
          }
        }
        lVar53 = *(long *)(param_1 + 0x90);
        lVar36 = (long)*(int *)(lVar53 + (long)(int)uVar35 * 0xd0);
        lVar41 = *param_2;
        if (0 < (int)pfVar59[0xe]) {
          lVar38 = lVar41 + lVar36 * 0x38;
          lVar56 = 0;
          piVar55 = (int *)(lVar38 + 0x10);
          piVar58 = (int *)(lVar38 + 0x20);
          do {
            iVar84 = *(int *)(*(long *)(pfVar59 + 0xc) + lVar56 * 4);
            if (*(int *)(*(long *)(lVar53 + (long)(int)uVar35 * 0xd0 + 0xa8) + (long)iVar84 * 0x10 +
                        8) == 0) {
              iVar85 = *piVar58;
              lVar39 = (long)iVar85;
              if ((int)(*(uint *)(lVar38 + 0x24) & 0x7fffffff) <= iVar85) {
                FUN_03078498((long *)(lVar38 + 0x18),PTR_PTR_047d1a50,lVar39 + 1);
                iVar85 = *piVar58;
              }
              *(int *)(*(long *)(lVar38 + 0x18) + (long)iVar85 * 4) = iVar84;
              *piVar58 = (int)(lVar39 + 1);
            }
            else {
              iVar85 = *piVar55;
              lVar39 = (long)iVar85;
              if ((int)(*(uint *)(lVar38 + 0x14) & 0x7fffffff) <= iVar85) {
                FUN_03078498((long *)(lVar38 + 8),PTR_PTR_047d1a50,lVar39 + 1);
                iVar85 = *piVar55;
              }
              *(int *)(*(long *)(lVar38 + 8) + (long)iVar85 * 4) = iVar84;
              *piVar55 = (int)(lVar39 + 1);
            }
            lVar56 = lVar56 + 1;
          } while (lVar56 < (int)pfVar59[0xe]);
        }
        lVar41 = lVar41 + lVar36 * 0x38;
        piVar55 = (int *)(lVar41 + 0x30);
        iVar84 = *piVar55;
        lVar53 = (long)iVar84;
        if ((int)(*(uint *)(lVar41 + 0x34) & 0x7fffffff) <= iVar84) {
          FUN_0300996c((long *)(lVar41 + 0x28),PTR_PTR_047d1a50,lVar53 + 1);
          iVar84 = *piVar55;
        }
        puVar57 = (undefined8 *)(*(long *)(lVar41 + 0x28) + (long)iVar84 * 0x20);
        uVar30 = *(undefined8 *)(pfVar59 + 10);
        puVar57[1] = *(undefined8 *)(pfVar59 + 6);
        puVar57[3] = uVar30;
        uVar30 = *(undefined8 *)(pfVar59 + 4);
        puVar57[2] = *(undefined8 *)(pfVar59 + 8);
        *puVar57 = uVar30;
        *piVar55 = (int)(lVar53 + 1);
        iVar81 = iVar81 - (int)pfVar59[0xe];
        pfVar59[0xe] = 0.0;
        if ((-1 < (int)pfVar59[0xf]) && (*(long *)(pfVar59 + 0xc) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(pfVar59 + 0xc),(ulong)(uint)pfVar59[0xf] << 2);
        }
        pfVar59[0xc] = 0.0;
        pfVar59[0xd] = 0.0;
        pfVar59[0xf] = -0.0;
        uVar37 = (ulong)uVar105;
      } while (0 < iVar81);
      uStack_ab8._0_4_ = uVar105;
    }
    if (0 < (int)param_2[1]) {
      lVar36 = 0;
      lVar53 = 0;
      do {
        *(int *)(*param_2 + lVar36) = (int)lVar53;
        FUN_030fc690(*param_2 + lVar36 + 8);
        FUN_030fc690(*param_2 + lVar36 + 0x18);
        lVar53 = lVar53 + 1;
        lVar36 = lVar36 + 0x38;
      } while (lVar53 < (int)param_2[1]);
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      piVar55 = *(int **)(param_1 + 0x90);
      piVar58 = piVar55 + (long)*(int *)(param_1 + 0x98) * 0x34;
      do {
        if (((char)piVar55[0x32] != '\0') &&
           (uVar37 = (ulong)(uint)piVar55[0x30], 0 < piVar55[0x30])) {
          do {
            uVar40 = uVar37 - 1;
            lVar36 = *param_2 + (long)*piVar55 * 0x38;
            lVar53 = *(long *)(piVar55 + 0x2e) + uVar40 * 0x40;
            lVar41 = *(long *)(lVar36 + 8);
            lVar36 = *(long *)(lVar36 + 0x18);
            puVar50 = (uint *)(lVar53 + 0x38);
            uVar51 = (ulong)*puVar50;
            if (0 < (int)*puVar50) {
              lVar56 = *param_2 + (long)*piVar55 * 0x38;
              iVar81 = *(int *)(lVar56 + 0x10);
              iVar84 = *(int *)(lVar56 + 0x20);
              plVar32 = (long *)(lVar53 + 0x30);
              if (iVar81 < 1) {
                if (0 < iVar84) {
                  do {
                    lVar53 = *plVar32;
                    uVar46 = uVar51 - 1;
                    iVar85 = *(int *)(lVar53 + uVar46 * 4);
                    iVar81 = 0;
                    iVar86 = iVar84;
                    do {
                      iVar91 = iVar86 + iVar81;
                      if (iVar91 < 0) {
                        iVar91 = iVar91 + 1;
                      }
                      iVar91 = iVar91 >> 1;
                      if (*(int *)(lVar36 + (long)iVar91 * 4) < iVar85) {
                        iVar81 = iVar91 + 1;
                      }
                      else {
                        iVar86 = iVar91;
                      }
                    } while (iVar81 < iVar86);
                    if ((iVar86 < iVar84) &&
                       (iVar86 != -1 && *(int *)(lVar36 + (long)iVar86 * 4) <= iVar85)) {
                      uVar105 = *puVar50;
                      uVar35 = uVar105 - 1;
                      *puVar50 = uVar35;
                      if (uVar105 != (uint)uVar51) {
                        *(undefined4 *)(lVar53 + uVar46 * 4) =
                             *(undefined4 *)(lVar53 + (long)(int)uVar35 * 4);
                      }
                    }
                    bVar27 = 1 < (long)uVar51;
                    uVar51 = uVar46;
                  } while (bVar27);
                }
              }
              else if (iVar84 < 1) {
                do {
                  lVar53 = *plVar32;
                  uVar46 = uVar51 - 1;
                  iVar85 = *(int *)(lVar53 + uVar46 * 4);
                  iVar84 = 0;
                  iVar86 = iVar81;
                  do {
                    iVar91 = iVar86 + iVar84;
                    if (iVar91 < 0) {
                      iVar91 = iVar91 + 1;
                    }
                    iVar91 = iVar91 >> 1;
                    if (*(int *)(lVar41 + (long)iVar91 * 4) < iVar85) {
                      iVar84 = iVar91 + 1;
                    }
                    else {
                      iVar86 = iVar91;
                    }
                  } while (iVar84 < iVar86);
                  if ((iVar86 < iVar81) &&
                     (iVar86 != -1 && *(int *)(lVar41 + (long)iVar86 * 4) <= iVar85)) {
                    uVar105 = *puVar50;
                    uVar35 = uVar105 - 1;
                    *puVar50 = uVar35;
                    if (uVar105 != (uint)uVar51) {
                      *(undefined4 *)(lVar53 + uVar46 * 4) =
                           *(undefined4 *)(lVar53 + (long)(int)uVar35 * 4);
                    }
                  }
                  bVar27 = 1 < (long)uVar51;
                  uVar51 = uVar46;
                } while (bVar27);
              }
              else {
                do {
                  lVar53 = *plVar32;
                  uVar46 = uVar51 - 1;
                  iVar86 = *(int *)(lVar53 + uVar46 * 4);
                  iVar85 = 0;
                  iVar91 = iVar81;
                  do {
                    iVar92 = iVar91 + iVar85;
                    if (iVar92 < 0) {
                      iVar92 = iVar92 + 1;
                    }
                    iVar92 = iVar92 >> 1;
                    if (*(int *)(lVar41 + (long)iVar92 * 4) < iVar86) {
                      iVar85 = iVar92 + 1;
                    }
                    else {
                      iVar91 = iVar92;
                    }
                  } while (iVar85 < iVar91);
                  if ((iVar91 < iVar81) &&
                     (iVar91 != -1 && *(int *)(lVar41 + (long)iVar91 * 4) <= iVar86)) {
LAB_030fbd64:
                    uVar105 = *puVar50;
                    uVar35 = uVar105 - 1;
                    *puVar50 = uVar35;
                    if (uVar105 != (uint)uVar51) {
                      *(undefined4 *)(lVar53 + uVar46 * 4) =
                           *(undefined4 *)(lVar53 + (long)(int)uVar35 * 4);
                    }
                  }
                  else {
                    iVar85 = 0;
                    iVar91 = iVar84;
                    do {
                      iVar92 = iVar91 + iVar85;
                      if (iVar92 < 0) {
                        iVar92 = iVar92 + 1;
                      }
                      iVar92 = iVar92 >> 1;
                      if (*(int *)(lVar36 + (long)iVar92 * 4) < iVar86) {
                        iVar85 = iVar92 + 1;
                      }
                      else {
                        iVar91 = iVar92;
                      }
                    } while (iVar85 < iVar91);
                    if ((iVar91 < iVar84) &&
                       (iVar91 != -1 && *(int *)(lVar36 + (long)iVar91 * 4) <= iVar86))
                    goto LAB_030fbd64;
                  }
                  bVar27 = 1 < (long)uVar51;
                  uVar51 = uVar46;
                } while (bVar27);
              }
            }
            lVar53 = *(long *)(piVar55 + 0x2e) + uVar40 * 0x40;
            if (*(int *)(lVar53 + 0x38) == 0) {
              *(int *)(lVar53 + 0x38) = 0;
              uVar105 = *(uint *)(lVar53 + 0x3c);
              if ((-1 < (int)uVar105) && (lVar36 = *(long *)(lVar53 + 0x30), lVar36 != 0)) {
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                          (PTR_PTR_047d1a50,lVar36,(ulong)uVar105 << 2);
              }
              *(long *)(lVar53 + 0x30) = 0;
              *(uint *)(lVar53 + 0x3c) = 0x80000000;
              iVar81 = piVar55[0x30];
              lVar53 = (long)iVar81 + -1;
              piVar55[0x30] = (int)lVar53;
              if (iVar81 != (int)uVar37) {
                __src = (void *)(*(long *)(piVar55 + 0x2e) + lVar53 * 0x40);
                __dest = (void *)(*(long *)(piVar55 + 0x2e) + uVar40 * 0x40);
                memcpy(__dest,__src,0x30);
                *(undefined8 *)((long)__dest + 0x30) = 0;
                *(undefined8 *)((long)__dest + 0x38) = 0x8000000000000000;
                FUN_030da6d0((long)__src + 0x30,PTR_PTR_047d1a50);
                *(undefined8 *)((long)__dest + 0x30) = *(undefined8 *)((long)__src + 0x30);
                uVar29 = *(undefined4 *)((long)__src + 0x3c);
                *(undefined4 *)((long)__dest + 0x38) = *(undefined4 *)((long)__src + 0x38);
                *(undefined4 *)((long)__dest + 0x3c) = uVar29;
                *(undefined8 *)((long)__src + 0x30) = 0;
                *(undefined8 *)((long)__src + 0x38) = 0;
                *(undefined4 *)((long)__src + 0x3c) = 0x80000000;
              }
            }
            bVar27 = 1 < (long)uVar37;
            uVar37 = uVar40;
          } while (bVar27);
        }
        piVar55 = piVar55 + 0x34;
      } while (piVar55 != piVar58);
    }
    uVar105 = uStack_ab8._4_4_;
    uVar37 = (ulong)uStack_ab8._4_4_;
    uStack_ab8 = (ulong)uStack_ab8._4_4_ << 0x20;
    puVar50 = local_ed0;
    if ((-1 < (int)uVar105) && (local_ac0 != (uint *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_ac0,uVar37 << 4);
      puVar50 = local_ed0;
    }
  }
  if (puVar50 != (uint *)0x0) {
    lVar53 = *(long *)puVar50;
    if (((*(byte *)(lVar53 + 0x38) & 1) != 0) && (*(long *)(puVar50 + 0xc) != 0)) {
      puVar57 = *(undefined8 **)(puVar50 + 4);
      uVar37 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
      if ((uVar37 <= *(ulong *)(puVar50 + 6)) &&
         (*(ulong *)(puVar50 + 4) = uVar37, puVar57 != (undefined8 *)0x0)) {
        *puVar57 = &DAT_03c4e575;
        puVar57[1] = *(undefined8 *)(*(long *)(puVar50 + 0xc) + 8);
      }
    }
    puVar57 = *(undefined8 **)(puVar50 + 4);
    uVar37 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
    if ((uVar37 <= *(ulong *)(puVar50 + 6)) &&
       (*(ulong *)(puVar50 + 4) = uVar37, puVar57 != (undefined8 *)0x0)) {
      *puVar57 = &DAT_03c2d363;
      uVar30 = nn::os::GetSystemTick();
      puVar57[1] = uVar30;
    }
    if (*(code **)(lVar53 + 0x20) != (code *)0x0) {
      (**(code **)(lVar53 + 0x20))(*(undefined8 *)(lVar53 + 0x28));
    }
  }
  if (plVar44 != (long *)0x0) {
    lVar53 = *plVar44;
    if (((*(byte *)(lVar53 + 0x38) & 1) != 0) && (plVar44[6] != 0)) {
      puVar57 = (undefined8 *)plVar44[2];
      uVar37 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
      if ((uVar37 <= (ulong)plVar44[3]) && (plVar44[2] = uVar37, puVar57 != (undefined8 *)0x0)) {
        *puVar57 = &DAT_03c4e575;
        puVar57[1] = *(undefined8 *)(plVar44[6] + 8);
      }
    }
    puVar57 = (undefined8 *)plVar44[2];
    uVar37 = (long)puVar57 + 0x17U & 0xfffffffffffffff8;
    if ((uVar37 <= (ulong)plVar44[3]) && (plVar44[2] = uVar37, puVar57 != (undefined8 *)0x0)) {
      *puVar57 = &DAT_03c2d363;
      uVar30 = nn::os::GetSystemTick();
      puVar57[1] = uVar30;
    }
    if (*(code **)(lVar53 + 0x20) != (code *)0x0) {
      (**(code **)(lVar53 + 0x20))(*(undefined8 *)(lVar53 + 0x28));
    }
  }
  return;
}


