/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b85714; name: FUN_00b85714
 */


void FUN_00b85714(undefined8 *param_1,uint param_2,int param_3,char *param_4,char *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  char *pcVar11;
  size_t sVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar16;
  byte *pbVar15;
  ulong uVar17;
  char *pcVar18;
  uint *puVar19;
  long *plVar20;
  uint *puVar21;
  long lVar22;
  char *pcVar23;
  byte local_328 [8];
  uint local_320;
  uint *local_318;
  ulong local_310;
  uint local_308;
  ulong local_300;
  ulong local_2e0;
  uint local_2d8;
  undefined4 uStack_2d4;
  ulong local_2d0;
  byte local_2c8 [16];
  long local_2b8;
  byte local_2b0 [8];
  ulong local_2a8;
  long local_2a0;
  undefined1 auStack_298 [24];
  undefined2 local_280;
  char local_27e;
  string local_278 [16];
  long local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  char *local_1a0;
  undefined4 local_198;
  char local_18b [27];
  byte *local_170;
  uint local_168;
  ulong local_140;
  undefined8 local_138;
  ulong local_130;
  ulong local_110;
  uint local_108;
  undefined4 uStack_104;
  ulong local_100;
  ulong local_e0;
  undefined8 local_d8;
  uint *local_d0;
  uint *local_c8;
  uint *local_c0;
  uint *local_b8;
  ulong local_98;
  undefined8 local_90;
  ulong local_88;
  string local_80 [8];
  uint local_78;
  uint *local_70;
  
  pcVar23 = (char *)(ulong)param_2;
  std::string::__init((ulong)local_80,(char)(param_2 << 1));
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  if ((*(int *)((long)param_1 + 0x3c) == 0xb) &&
     (*(char *)(*(long *)(param_1[0xd] + 0x20) + 0x53) != '\0')) {
    FUN_00b88344(&local_310,*(undefined8 *)(param_1[0xd] + 0x30));
    local_2d8 = (uint)((byte)local_310 >> 1);
    local_2e0 = (ulong)&local_310 | 1;
    if ((local_310 & 1) != 0) {
      local_2d8 = local_308;
      local_2e0 = local_300;
    }
    FUN_00b88344(&local_e0,*(long *)(param_1[0xd] + 0x30) + 0x90);
    local_110 = 0;
    local_140 = 0;
    uVar4 = (uint)((byte)local_e0 >> 1);
    local_c8 = (uint *)((ulong)&local_e0 | 1);
    if ((local_e0 & 1) != 0) {
      uVar4 = (uint)local_d8;
      local_c8 = local_d0;
    }
    _local_108 = CONCAT44(uStack_104,0xffffffff);
    local_138 = CONCAT44(local_138._4_4_,0xffffffff);
    local_c0 = (uint *)CONCAT44(local_c0._4_4_,uVar4);
    local_168 = 0xffffffff;
    local_198 = 0xffffffff;
    local_1c8 = 0xffffffff;
    local_1f8 = 0xffffffff;
    local_228 = 0xffffffff;
    local_258 = 0xffffffff;
    local_170 = (byte *)0x0;
    local_1a0 = (char *)0x0;
    local_1d0 = 0;
    local_200 = 0;
    local_230 = 0;
    local_260 = 0;
    FUN_00c2ce10(&local_98,"map<$0, $1>",&local_2e0,&local_c8,&local_110,&local_140,&local_170,
                 &local_1a0,&local_1d0,&local_200,&local_230,&local_260);
    if ((((byte)local_e0 & 1) != 0) && (local_d0 != (uint *)0x0)) {
      lVar22 = tpidr_el0;
      plVar20 = *(long **)(lVar22 + 0x30);
      if (plVar20 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar20 = DAT_04859430;
        *(long **)(lVar22 + 0x30) = DAT_04859430;
      }
      uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,local_d0,0,8);
      }
      else {
        FUN_00c48fe8(plVar20,local_d0,0,8);
      }
    }
    if ((((byte)local_310 & 1) != 0) && (local_300 != 0)) {
      lVar22 = tpidr_el0;
      plVar20 = *(long **)(lVar22 + 0x30);
      if (plVar20 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar20 = DAT_04859430;
        *(long **)(lVar22 + 0x30) = DAT_04859430;
      }
      uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,local_300,0,8);
      }
      else {
        FUN_00c48fe8(plVar20,local_300,0,8);
      }
    }
  }
  else {
    FUN_00b88344(&local_2e0,param_1);
    uVar8 = local_88;
    if (((local_98 & 1) != 0) && (local_88 != 0)) {
      lVar22 = tpidr_el0;
      plVar20 = *(long **)(lVar22 + 0x30);
      if (plVar20 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar20 = DAT_04859430;
        *(long **)(lVar22 + 0x30) = DAT_04859430;
      }
      uVar13 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar13 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,uVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar20,uVar8,0,8);
      }
    }
    local_90 = CONCAT44(uStack_2d4,local_2d8);
    local_98 = local_2e0;
    local_88 = local_2d0;
  }
  local_d8 = 0;
  local_d0 = (uint *)0x0;
  local_e0 = 0;
  if ((param_3 == 0) &&
     ((*(int *)((long)param_1 + 0x3c) != 0xb ||
      (*(char *)(*(long *)(param_1[0xd] + 0x20) + 0x53) == '\0')))) {
    std::string::assign((char *)&local_e0);
    std::string::push_back((char)&local_e0);
  }
  memset(local_2c8,0,0x48);
  local_27e = param_5[2];
  local_280 = *(undefined2 *)param_5;
  std::string::string(local_278,local_80);
  if (*param_5 == '\0') {
    uVar6 = 0;
  }
  else {
    local_c0 = (uint *)0x0;
    local_b8 = (uint *)0x0;
    local_c8 = (uint *)0x0;
    pcVar18 = param_5;
    pcVar11 = pcVar23;
    if (*(char *)((long)param_1 + 0x44) == '\0') {
      FUN_00b88e54(param_1[10],&local_c8);
      puVar9 = local_c8;
      if (local_c0 != local_b8) {
        *local_c0 = 2;
        local_c0 = local_c0 + 1;
LAB_00b85ce0:
        puVar9 = local_c8;
        if (*(char *)((long)param_1 + 0x44) == '\0') {
          plVar20 = (long *)(param_1[10] + 0x30);
        }
        else if (param_1[0xc] == 0) {
          plVar20 = (long *)(param_1[6] + 0x88);
        }
        else {
          plVar20 = (long *)(param_1[0xc] + 0x80);
        }
        uVar4 = (int)((ulong)((long)param_1 - *plVar20) >> 4) * 0x38e38e39;
        if (local_c0 < local_b8) {
          *local_c0 = uVar4;
          local_c0 = local_c0 + 1;
        }
        else {
          puVar19 = (uint *)((long)local_c0 - (long)local_c8);
          uVar8 = ((long)puVar19 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) {
LAB_00b8716c:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar13 = (long)local_b8 - (long)local_c8 >> 1;
          if (uVar8 <= uVar13) {
            uVar8 = uVar13;
          }
          if (0x1ffffffffffffffe < (ulong)((long)local_b8 - (long)local_c8 >> 2)) {
            uVar8 = 0x3fffffffffffffff;
          }
          if (uVar8 == 0) {
            puVar10 = (uint *)0x0;
          }
          else {
            pcVar18 = pcVar23;
            pcVar11 = (char *)(ulong)uVar4;
            if (uVar8 >> 0x3e != 0) goto LAB_00b87174;
            lVar22 = tpidr_el0;
            plVar20 = *(long **)(lVar22 + 0x30);
            if (plVar20 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar20 = DAT_04859430;
              *(long **)(lVar22 + 0x30) = DAT_04859430;
            }
            puVar10 = (uint *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar8 << 2,8);
          }
          puVar1 = puVar10 + uVar8;
          puVar21 = puVar10 + ((long)puVar19 >> 2) + 1;
          puVar10[(long)puVar19 >> 2] = uVar4;
          if (0 < (long)puVar19) {
            memcpy(puVar10,puVar9,(size_t)puVar19);
          }
          local_c8 = puVar10;
          local_c0 = puVar21;
          local_b8 = puVar1;
          if (puVar9 != (uint *)0x0) {
            lVar22 = tpidr_el0;
            plVar20 = *(long **)(lVar22 + 0x30);
            if (plVar20 != (long *)0x0) goto LAB_00b8601c;
            if (((DAT_04859438 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar20 = DAT_04859430;
            *(long **)(lVar22 + 0x30) = DAT_04859430;
            goto LAB_00b86e3c;
          }
        }
        goto LAB_00b8604c;
      }
      puVar19 = (uint *)((long)local_c0 - (long)local_c8);
      uVar8 = ((long)puVar19 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_00b8716c;
      uVar13 = (long)local_b8 - (long)local_c8 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (0x1ffffffffffffffe < (ulong)((long)local_b8 - (long)local_c8 >> 2)) {
        uVar8 = 0x3fffffffffffffff;
      }
      if (uVar8 == 0) {
        puVar10 = (uint *)0x0;
LAB_00b85c5c:
        puVar1 = puVar10 + uVar8;
        puVar21 = puVar10 + ((long)puVar19 >> 2) + 1;
        puVar10[(long)puVar19 >> 2] = 2;
        if (0 < (long)puVar19) {
          memcpy(puVar10,puVar9,(size_t)puVar19);
        }
        local_c8 = puVar10;
        local_c0 = puVar21;
        local_b8 = puVar1;
        if (puVar9 != (uint *)0x0) {
          lVar22 = tpidr_el0;
          plVar20 = *(long **)(lVar22 + 0x30);
          if (plVar20 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar20 = DAT_04859430;
            *(long **)(lVar22 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
          if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
            (**(code **)(*plVar20 + 0x18))(plVar20,puVar9,0,8);
          }
          else {
            FUN_00c48fe8(plVar20,puVar9,0,8);
          }
        }
        goto LAB_00b85ce0;
      }
      if (uVar8 >> 0x3e == 0) {
        lVar22 = tpidr_el0;
        plVar20 = *(long **)(lVar22 + 0x30);
        if (plVar20 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar20 = DAT_04859430;
          *(long **)(lVar22 + 0x30) = DAT_04859430;
        }
        puVar10 = (uint *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar8 << 2,8);
        goto LAB_00b85c5c;
      }
LAB_00b87174:
      uVar6 = SUB81(local_c8,0);
      FUN_01f6e360();
LAB_00b87178:
      iVar7 = __cxa_guard_acquire(&DAT_04859438);
      if (iVar7 != 0) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_00b86cd8:
      plVar20 = DAT_04859430;
      *(long **)(uVar8 + 0x30) = DAT_04859430;
    }
    else {
      if (param_1[0xc] == 0) {
        lVar22 = tpidr_el0;
        plVar20 = *(long **)(lVar22 + 0x30);
        if (plVar20 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar20 = DAT_04859430;
          *(long **)(lVar22 + 0x30) = DAT_04859430;
        }
        puVar9 = (uint *)(**(code **)(*plVar20 + 0x10))(plVar20,4,8);
        local_c0 = puVar9 + 1;
        *puVar9 = 7;
        if (*(char *)((long)param_1 + 0x44) == '\0') {
          plVar20 = (long *)(param_1[10] + 0x30);
        }
        else if (param_1[0xc] == 0) {
          plVar20 = (long *)(param_1[6] + 0x88);
        }
        else {
          plVar20 = (long *)(param_1[0xc] + 0x80);
        }
        lVar14 = *plVar20;
        plVar20 = *(long **)(lVar22 + 0x30);
        local_c8 = puVar9;
        local_b8 = local_c0;
        if (plVar20 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar20 = DAT_04859430;
          *(long **)(lVar22 + 0x30) = DAT_04859430;
        }
        local_c8 = (uint *)(**(code **)(*plVar20 + 0x10))(plVar20,8,8);
        local_c8[1] = (int)((ulong)((long)param_1 - lVar14) >> 4) * 0x38e38e39;
        local_c0 = local_c8 + 2;
        *local_c8 = *puVar9;
        local_b8 = local_c0;
        if (puVar9 == (uint *)0x0) goto LAB_00b8604c;
        plVar20 = *(long **)(lVar22 + 0x30);
        local_b8 = local_c0;
        if (plVar20 != (long *)0x0) goto LAB_00b8601c;
        local_b8 = local_c0;
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar20 = DAT_04859430;
        *(long **)(lVar22 + 0x30) = DAT_04859430;
LAB_00b86e3c:
LAB_00b8601c:
        uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
        if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
          (**(code **)(*plVar20 + 0x18))(plVar20,puVar9,0,8);
        }
        else {
          FUN_00c48fe8(plVar20,puVar9,0,8);
        }
      }
      else {
        FUN_00b88e54(param_1[0xc],&local_c8);
        puVar9 = local_c8;
        if (local_c0 == local_b8) {
          puVar19 = (uint *)((long)local_c0 - (long)local_c8);
          uVar8 = ((long)puVar19 >> 2) + 1;
          if (uVar8 >> 0x3e != 0) goto LAB_00b8716c;
          uVar13 = (long)local_b8 - (long)local_c8 >> 1;
          if (uVar8 <= uVar13) {
            uVar8 = uVar13;
          }
          if (0x1ffffffffffffffe < (ulong)((long)local_b8 - (long)local_c8 >> 2)) {
            uVar8 = 0x3fffffffffffffff;
          }
          if (uVar8 == 0) {
            puVar10 = (uint *)0x0;
          }
          else {
            if (uVar8 >> 0x3e != 0) goto LAB_00b87174;
            lVar22 = tpidr_el0;
            plVar20 = *(long **)(lVar22 + 0x30);
            if (plVar20 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar20 = DAT_04859430;
              *(long **)(lVar22 + 0x30) = DAT_04859430;
            }
            puVar10 = (uint *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar8 << 2,8);
          }
          puVar1 = puVar10 + uVar8;
          puVar21 = puVar10 + ((long)puVar19 >> 2) + 1;
          puVar10[(long)puVar19 >> 2] = 6;
          if (0 < (long)puVar19) {
            memcpy(puVar10,puVar9,(size_t)puVar19);
          }
          local_c8 = puVar10;
          local_c0 = puVar21;
          local_b8 = puVar1;
          if (puVar9 != (uint *)0x0) {
            lVar22 = tpidr_el0;
            plVar20 = *(long **)(lVar22 + 0x30);
            if (plVar20 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar20 = DAT_04859430;
              *(long **)(lVar22 + 0x30) = DAT_04859430;
            }
            uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
            if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
              (**(code **)(*plVar20 + 0x18))(plVar20,puVar9,0,8);
            }
            else {
              FUN_00c48fe8(plVar20,puVar9,0,8);
            }
          }
        }
        else {
          *local_c0 = 6;
          local_c0 = local_c0 + 1;
        }
        puVar9 = local_c8;
        if (*(char *)((long)param_1 + 0x44) == '\0') {
          plVar20 = (long *)(param_1[10] + 0x30);
        }
        else if (param_1[0xc] == 0) {
          plVar20 = (long *)(param_1[6] + 0x88);
        }
        else {
          plVar20 = (long *)(param_1[0xc] + 0x80);
        }
        uVar4 = (int)((ulong)((long)param_1 - *plVar20) >> 4) * 0x38e38e39;
        if (local_c0 < local_b8) {
          *local_c0 = uVar4;
          local_c0 = local_c0 + 1;
        }
        else {
          puVar19 = (uint *)((long)local_c0 - (long)local_c8);
          uVar8 = (long)puVar19 >> 2;
          uVar13 = uVar8 + 1;
          if (uVar13 >> 0x3e != 0) goto LAB_00b8716c;
          uVar17 = (long)local_b8 - (long)local_c8 >> 1;
          if (uVar13 <= uVar17) {
            uVar13 = uVar17;
          }
          if (0x1ffffffffffffffe < (ulong)((long)local_b8 - (long)local_c8 >> 2)) {
            uVar13 = 0x3fffffffffffffff;
          }
          pcVar11 = (char *)tpidr_el0;
          if (uVar13 == 0) {
            puVar10 = (uint *)0x0;
          }
          else {
            pcVar18 = pcVar23;
            if (uVar13 >> 0x3e != 0) goto LAB_00b87174;
            plVar20 = *(long **)(pcVar11 + 0x30);
            if (plVar20 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar20 = DAT_04859430;
              *(long **)(pcVar11 + 0x30) = DAT_04859430;
            }
            puVar10 = (uint *)(**(code **)(*plVar20 + 0x10))(plVar20,uVar13 << 2,8);
          }
          puVar21 = puVar10 + uVar8 + 1;
          puVar10[uVar8] = uVar4;
          puVar1 = puVar10 + uVar13;
          if (0 < (long)puVar19) {
            memcpy(puVar10,puVar9,(size_t)puVar19);
          }
          local_c8 = puVar10;
          local_c0 = puVar21;
          local_b8 = puVar1;
          if (puVar9 != (uint *)0x0) {
            plVar20 = *(long **)(pcVar11 + 0x30);
            if (plVar20 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar20 = DAT_04859430;
              *(long **)(pcVar11 + 0x30) = DAT_04859430;
              goto LAB_00b86e3c;
            }
            goto LAB_00b8601c;
          }
        }
      }
LAB_00b8604c:
      uVar6 = FUN_00b884b8(param_1[6],&local_c8,&local_2d8);
      if (local_c8 == (uint *)0x0) goto LAB_00b860c0;
      local_c0 = local_c8;
      uVar8 = tpidr_el0;
      plVar20 = *(long **)(uVar8 + 0x30);
      pcVar18 = param_5;
      puVar19 = local_c8;
      pcVar11 = pcVar23;
      if (plVar20 == (long *)0x0) {
        if ((DAT_04859438 & 1) == 0) goto LAB_00b87178;
        goto LAB_00b86cd8;
      }
    }
    uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    param_5 = pcVar18;
    pcVar23 = pcVar11;
    if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar19,0,8);
    }
    else {
      FUN_00c48fe8(plVar20,puVar19,0,8);
    }
  }
LAB_00b860c0:
  local_2e0 = CONCAT71(local_2e0._1_7_,uVar6) & 0xffffffffffffff01;
  FUN_00b81e5c(&local_2e0,param_4);
  bVar5 = ((byte)local_80[0] & 1) != 0;
  uVar4 = (uint)((byte)local_80[0] >> 1);
  if (bVar5) {
    uVar4 = local_78;
  }
  local_c8 = (uint *)((ulong)local_80 | 1);
  if (bVar5) {
    local_c8 = local_70;
  }
  bVar5 = (local_e0 & 1) != 0;
  uVar2 = (uint)((byte)local_e0 >> 1);
  if (bVar5) {
    uVar2 = (uint)local_d8;
  }
  local_110 = (ulong)&local_e0 | 1;
  if (bVar5) {
    local_110 = (ulong)local_d0;
  }
  uVar3 = (uint)((byte)local_98 >> 1);
  local_140 = (ulong)&local_98 | 1;
  if ((local_98 & 1) != 0) {
    uVar3 = (uint)local_90;
    local_140 = local_88;
  }
  if (*(int *)((long)param_1 + 0x3c) == 10) {
    puVar16 = (undefined8 *)param_1[0xd];
  }
  else {
    puVar16 = param_1;
  }
  pbVar15 = (byte *)*puVar16;
  local_170 = *(byte **)(pbVar15 + 0x10);
  if ((*pbVar15 & 1) == 0) {
    local_170 = pbVar15 + 1;
  }
  local_168 = (uint)(*pbVar15 >> 1);
  if ((*pbVar15 & 1) != 0) {
    local_168 = (uint)*(undefined8 *)(pbVar15 + 8);
  }
  iVar7 = *(int *)(param_1 + 7);
  local_18b[2] = 0;
  local_108 = uVar2;
  local_138._0_4_ = uVar3;
  local_c0._0_4_ = uVar4;
  if (iVar7 < 0) {
    if (iVar7 < -9) {
      iVar7 = iVar7 + 10;
      local_18b[1] = ((char)((ulong)((long)iVar7 * 0x66666667) >> 0x22) - (char)(iVar7 >> 0x1f)) *
                     '\n' - (char)iVar7;
      iVar7 = (int)((ulong)((long)iVar7 * -0x66666667) >> 0x20);
      pcVar11 = local_18b;
      iVar7 = ((iVar7 >> 2) - (iVar7 >> 0x1f)) + 1;
      do {
        local_1a0 = pcVar11 + -1;
        *pcVar11 = (char)iVar7 + (char)(iVar7 / 10) * -10 + '0';
        bVar5 = 9 < iVar7;
        pcVar11 = local_1a0;
        iVar7 = iVar7 / 10;
      } while (bVar5);
    }
    else {
      local_18b[1] = -(char)iVar7;
      local_1a0 = local_18b;
    }
    local_18b[1] = local_18b[1] + '0';
    *local_1a0 = '-';
  }
  else {
    local_1a0 = local_18b + 2;
    do {
      local_1a0 = local_1a0 + -1;
      *local_1a0 = (char)iVar7 + (char)(iVar7 / 10) * -10 + '0';
      bVar5 = 9 < iVar7;
      iVar7 = iVar7 / 10;
    } while (bVar5);
  }
  sVar12 = strlen(local_1a0);
  local_198 = (undefined4)sVar12;
  local_1d0 = 0;
  local_1c8 = 0xffffffff;
  local_200 = 0;
  local_1f8 = 0xffffffff;
  local_230 = 0;
  local_228 = 0xffffffff;
  local_260 = 0;
  local_258 = 0xffffffff;
  local_310 = 0;
  local_308 = 0xffffffff;
  FUN_00c2ce10(param_4,"$0$1$2 $3 = $4",&local_c8,&local_110,&local_140,&local_170,&local_1a0,
               &local_1d0,&local_200,&local_230,&local_260,&local_310);
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar5 = false;
  }
  else {
    FUN_00b7f18c(local_328,param_1,1);
    local_110 = 0;
    local_108 = 0xffffffff;
    local_c8 = (uint *)((ulong)local_328 | 1);
    uVar4 = (uint)(local_328[0] >> 1);
    if ((local_328[0] & 1) != 0) {
      local_c8 = local_318;
      uVar4 = local_320;
    }
    local_140 = 0;
    local_138 = CONCAT44(local_138._4_4_,0xffffffff);
    local_170 = (byte *)0x0;
    local_c0 = (uint *)CONCAT44(local_c0._4_4_,uVar4);
    local_168 = 0xffffffff;
    local_1a0 = (char *)0x0;
    local_198 = 0xffffffff;
    local_1d0 = 0;
    local_1c8 = 0xffffffff;
    local_200 = 0;
    local_1f8 = 0xffffffff;
    local_230 = 0;
    local_228 = 0xffffffff;
    local_260 = 0;
    local_258 = 0xffffffff;
    local_310 = 0;
    local_308 = 0xffffffff;
    FUN_00c2ce10(param_4," [default = $0",&local_c8,&local_110,&local_140,&local_170,&local_1a0,
                 &local_1d0,&local_200,&local_230,&local_260,&local_310);
    if (((local_328[0] & 1) != 0) && (local_318 != (uint *)0x0)) {
      lVar22 = tpidr_el0;
      plVar20 = *(long **)(lVar22 + 0x30);
      if (plVar20 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar20 = DAT_04859430;
        *(long **)(lVar22 + 0x30) = DAT_04859430;
      }
      uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,local_318,0,8);
      }
      else {
        FUN_00c48fe8(plVar20,local_318,0,8);
      }
    }
    bVar5 = true;
  }
  local_138 = 0;
  local_130 = 0;
  local_140 = 0;
  local_c8 = (uint *)0x0;
  local_c0 = (uint *)0x0;
  local_b8 = (uint *)0x0;
  uVar8 = FUN_00ba9500((ulong)pcVar23 & 0xffffffff,param_1[0xf],&local_c8);
  puVar19 = local_c0;
  puVar9 = local_c8;
  if ((uVar8 & 1) != 0) {
    local_110 = 0;
    local_108 = 0;
    uStack_104 = 0;
    local_100 = 0;
    if (local_c8 == local_c0) {
      uVar8 = 0;
    }
    else {
      pbVar15 = *(byte **)(local_c8 + 4);
      if ((*local_c8 & 1) == 0) {
        pbVar15 = (byte *)((long)local_c8 + 1);
      }
      std::string::append((char *)&local_110,(ulong)pbVar15);
      puVar9 = puVar9 + 6;
      if (puVar9 != puVar19) {
        lVar22 = -0x18;
        do {
          if (lVar22 != 0) {
            std::string::append((char *)&local_110);
          }
          pbVar15 = *(byte **)(puVar9 + 4);
          if ((*puVar9 & 1) == 0) {
            pbVar15 = (byte *)((long)puVar9 + 1);
          }
          std::string::append((char *)&local_110,(ulong)pbVar15);
          puVar9 = puVar9 + 6;
          lVar22 = lVar22 + -0x18;
        } while (puVar9 != puVar19);
      }
      uVar8 = local_110 & 0xff;
    }
    uVar13 = (ulong)&local_110 | 1;
    if ((uVar8 & 1) != 0) {
      uVar13 = local_100;
    }
    std::string::append((char *)&local_140,uVar13);
    uVar8 = local_100;
    if (((local_110 & 1) != 0) && (local_100 != 0)) {
      lVar22 = tpidr_el0;
      plVar20 = *(long **)(lVar22 + 0x30);
      if (plVar20 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar20 = DAT_04859430;
        *(long **)(lVar22 + 0x30) = DAT_04859430;
      }
      uVar13 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar13 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,uVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar20,uVar8,0,8);
      }
    }
  }
  puVar19 = local_c0;
  puVar9 = local_c8;
  FUN_01f6e5a0(&local_c8);
  if (puVar9 == puVar19) {
    if (!bVar5) goto LAB_00b86524;
  }
  else {
    std::string::append(param_4);
    uVar8 = (ulong)&local_140 | 1;
    if ((local_140 & 1) != 0) {
      uVar8 = local_130;
    }
    std::string::append(param_4,uVar8);
  }
  std::string::append(param_4);
LAB_00b86524:
  if ((*(int *)((long)param_1 + 0x3c) == 10) && (param_5[1] == '\0')) {
    FUN_00b83d88(param_1[0xd],(ulong)pcVar23 & 0xffffffff,param_4,param_5,0);
  }
  else {
    std::string::append(param_4);
  }
  if ((char)local_2e0 != '\0') {
    uVar8 = (ulong)(local_2b0[0] >> 1);
    if ((local_2b0[0] & 1) != 0) {
      uVar8 = local_2a8;
    }
    if (uVar8 != 0) {
      FUN_00ba926c(&local_c8,&local_2e0,local_2b0);
      puVar9 = (uint *)((ulong)&local_c8 | 1);
      if (((ulong)local_c8 & 1) != 0) {
        puVar9 = local_b8;
      }
      std::string::append(param_4,(ulong)puVar9);
      puVar9 = local_b8;
      if ((((ulong)local_c8 & 1) != 0) && (local_b8 != (uint *)0x0)) {
        lVar22 = tpidr_el0;
        plVar20 = *(long **)(lVar22 + 0x30);
        if (plVar20 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar20 = DAT_04859430;
          *(long **)(lVar22 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
        if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
          (**(code **)(*plVar20 + 0x18))(plVar20,puVar9,0,8);
        }
        else {
          FUN_00c48fe8(plVar20,puVar9,0,8);
        }
      }
    }
  }
  uVar8 = local_130;
  if (((local_140 & 1) != 0) && (local_130 != 0)) {
    lVar22 = tpidr_el0;
    plVar20 = *(long **)(lVar22 + 0x30);
    if (plVar20 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar20 = DAT_04859430;
      *(long **)(lVar22 + 0x30) = DAT_04859430;
    }
    uVar13 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar13 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,uVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar20,uVar8,0,8);
    }
  }
  if ((((byte)local_278[0] & 1) != 0) && (local_268 != 0)) {
    lVar22 = tpidr_el0;
    plVar20 = *(long **)(lVar22 + 0x30);
    if (plVar20 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar20 = DAT_04859430;
      *(long **)(lVar22 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,local_268,0,8);
    }
    else {
      FUN_00c48fe8(plVar20,local_268,0,8);
    }
  }
  FUN_01f6e5a0(auStack_298);
  if (((local_2b0[0] & 1) != 0) && (local_2a0 != 0)) {
    lVar22 = tpidr_el0;
    plVar20 = *(long **)(lVar22 + 0x30);
    if (plVar20 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar20 = DAT_04859430;
      *(long **)(lVar22 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,local_2a0,0,8);
    }
    else {
      FUN_00c48fe8(plVar20,local_2a0,0,8);
    }
  }
  if (((local_2c8[0] & 1) != 0) && (local_2b8 != 0)) {
    lVar22 = tpidr_el0;
    plVar20 = *(long **)(lVar22 + 0x30);
    if (plVar20 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar20 = DAT_04859430;
      *(long **)(lVar22 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,local_2b8,0,8);
    }
    else {
      FUN_00c48fe8(plVar20,local_2b8,0,8);
    }
  }
  puVar9 = local_d0;
  if (((local_e0 & 1) != 0) && (local_d0 != (uint *)0x0)) {
    lVar22 = tpidr_el0;
    plVar20 = *(long **)(lVar22 + 0x30);
    if (plVar20 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar20 = DAT_04859430;
      *(long **)(lVar22 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar20,puVar9,0,8);
    }
  }
  uVar8 = local_88;
  if (((local_98 & 1) != 0) && (local_88 != 0)) {
    lVar22 = tpidr_el0;
    plVar20 = *(long **)(lVar22 + 0x30);
    if (plVar20 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar20 = DAT_04859430;
      *(long **)(lVar22 + 0x30) = DAT_04859430;
    }
    uVar13 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar13 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,uVar8,0,8);
    }
    else {
      FUN_00c48fe8(plVar20,uVar8,0,8);
    }
  }
  if ((((byte)local_80[0] & 1) != 0) && (local_70 != (uint *)0x0)) {
    lVar22 = tpidr_el0;
    plVar20 = *(long **)(lVar22 + 0x30);
    if (plVar20 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar20 = DAT_04859430;
      *(long **)(lVar22 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar8 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,local_70,0,8);
    }
    else {
      FUN_00c48fe8(plVar20,local_70,0,8);
    }
  }
  return;
}


