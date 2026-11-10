/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b823e4; name: FUN_00b823e4
 */


void FUN_00b823e4(undefined8 *param_1,int param_2,char *param_3,char *param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  ulong uVar16;
  byte *pbVar17;
  string *psVar18;
  long lVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  byte bVar23;
  byte *pbVar24;
  long *plVar25;
  long lVar26;
  byte *pbVar27;
  byte local_390 [8];
  undefined1 auStack_388 [16];
  byte local_378 [16];
  long local_368;
  byte local_360 [8];
  ulong local_358;
  long local_350;
  undefined1 auStack_348 [24];
  undefined2 local_330;
  char local_32e;
  string local_328 [16];
  long local_318;
  string local_310 [8];
  uint local_308;
  ulong local_300;
  ulong local_2f8 [2];
  byte *local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  char *local_190;
  undefined4 local_188;
  char local_17b;
  char local_17a;
  char local_179 [25];
  byte *local_160;
  undefined8 local_158;
  ulong local_150;
  byte *local_130;
  byte *local_128;
  byte *local_120;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  byte local_e8 [16];
  long local_d8;
  byte local_d0 [8];
  ulong local_c8;
  long local_c0;
  undefined1 auStack_b8 [24];
  undefined2 local_a0;
  char local_9e;
  string local_98 [16];
  long local_88;
  string local_80 [16];
  byte *local_70;
  
  psVar18 = local_310;
  std::string::__init((ulong)local_310,(char)(param_2 << 1));
  param_2 = param_2 + 1;
  memset(local_378,0,0x48);
  local_32e = param_4[2];
  local_330 = *(undefined2 *)param_4;
  std::string::string(local_328,local_310);
  lVar13 = tpidr_el0;
  if (*param_4 == '\0') {
    bVar23 = 0;
    goto LAB_00b82508;
  }
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_00b896f4(param_1,&local_100);
  uVar7 = FUN_00b884b8(param_1[2],&local_100,auStack_388);
  pbVar24 = (byte *)(uVar7 & 0xffffffff);
  bVar23 = (byte)uVar7;
  if (local_100 == 0) goto LAB_00b82508;
  local_f8 = local_100;
  plVar25 = *(long **)(lVar13 + 0x30);
  uVar7 = local_100;
  if (plVar25 == (long *)0x0) {
    puVar20 = &DAT_04859000;
    if ((DAT_04859438 & 1) == 0) goto LAB_00b83c6c;
    goto LAB_00b83b38;
  }
LAB_00b824cc:
  bVar23 = (byte)pbVar24;
  uVar8 = (**(code **)(*plVar25 + 0xf8))(plVar25);
  if (((uVar8 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
    (**(code **)(*plVar25 + 0x18))(plVar25,uVar7,0,8);
  }
  else {
    FUN_00c48fe8(plVar25,uVar7,0,8);
  }
LAB_00b82508:
  local_390[0] = bVar23 & 1;
  FUN_00b81e5c(local_390,param_3);
  uVar8 = (ulong)psVar18 | 1;
  uVar2 = (uint)((byte)local_310[0] >> 1);
  local_100 = uVar8;
  if (((byte)local_310[0] & 1) != 0) {
    uVar2 = (uint)_local_308;
    local_100 = local_300;
  }
  local_f8 = CONCAT44(local_f8._4_4_,uVar2);
  pbVar24 = (byte *)*param_1;
  local_130 = *(byte **)(pbVar24 + 0x10);
  if ((*pbVar24 & 1) == 0) {
    local_130 = pbVar24 + 1;
  }
  local_158 = CONCAT44(local_158._4_4_,0xffffffff);
  local_188 = 0xffffffff;
  local_1b8 = 0xffffffff;
  local_1e8 = 0xffffffff;
  local_218 = 0xffffffff;
  local_248 = 0xffffffff;
  local_278 = 0xffffffff;
  local_2a8 = 0xffffffff;
  local_160 = (byte *)0x0;
  local_190 = (char *)0x0;
  local_1c0 = 0;
  local_1f0 = 0;
  local_220 = 0;
  local_250 = 0;
  local_280 = 0;
  uVar2 = (uint)(*pbVar24 >> 1);
  if ((*pbVar24 & 1) != 0) {
    uVar2 = (uint)*(undefined8 *)(pbVar24 + 8);
  }
  local_128 = (byte *)CONCAT44(local_128._4_4_,uVar2);
  local_2b0 = 0;
  FUN_00c2ce10(param_3,"$0enum $1 {\n",&local_100,&local_130,&local_160,&local_190,&local_1c0,
               &local_1f0,&local_220,&local_250,&local_280,&local_2b0);
  FUN_00b82160(param_2,param_1[4],param_3);
  if (*(int *)((long)param_1 + 0x2c) < 1) {
LAB_00b83728:
    uVar2 = (uint)((byte)local_310[0] >> 1);
    local_100 = uVar8;
    if (((byte)local_310[0] & 1) != 0) {
      uVar2 = local_308;
      local_100 = local_300;
    }
    local_f8 = CONCAT44(local_f8._4_4_,uVar2);
    local_130 = (byte *)0x0;
    local_128 = (byte *)CONCAT44(local_128._4_4_,0xffffffff);
    local_160 = (byte *)0x0;
    local_158 = CONCAT44(local_158._4_4_,0xffffffff);
    local_190 = (char *)0x0;
    local_188 = 0xffffffff;
    local_1c0 = 0;
    local_1b8 = 0xffffffff;
    local_1f0 = 0;
    local_1e8 = 0xffffffff;
    local_220 = 0;
    local_218 = 0xffffffff;
    local_250 = 0;
    local_248 = 0xffffffff;
    local_280 = 0;
    local_278 = 0xffffffff;
    local_2b0 = 0;
    local_2a8 = 0xffffffff;
    FUN_00c2ce10(param_3,&DAT_03c207eb,&local_100,&local_130,&local_160,&local_190,&local_1c0,
                 &local_1f0,&local_220,&local_250,&local_280,&local_2b0);
    if (local_390[0] != 0) {
      uVar7 = (ulong)(local_360[0] >> 1);
      if ((local_360[0] & 1) != 0) {
        uVar7 = local_358;
      }
      if (uVar7 != 0) {
        FUN_00ba926c(&local_100,local_390,local_360);
        uVar7 = (ulong)&local_100 | 1;
        if ((local_100 & 1) != 0) {
          uVar7 = local_f0;
        }
        std::string::append(param_3,uVar7);
        uVar7 = local_f0;
        if (((local_100 & 1) != 0) && (local_f0 != 0)) {
          plVar25 = *(long **)(lVar13 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar8 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,uVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar25,uVar7,0,8);
          }
        }
      }
    }
    if ((((byte)local_328[0] & 1) != 0) && (local_318 != 0)) {
      plVar25 = *(long **)(lVar13 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,local_318,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,local_318,0,8);
      }
    }
    FUN_01f6e5a0(auStack_348);
    if (((local_360[0] & 1) != 0) && (local_350 != 0)) {
      plVar25 = *(long **)(lVar13 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,local_350,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,local_350,0,8);
      }
    }
    if (((local_378[0] & 1) != 0) && (local_368 != 0)) {
      plVar25 = *(long **)(lVar13 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,local_368,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,local_368,0,8);
      }
    }
    if ((((byte)local_310[0] & 1) != 0) && (local_300 != 0)) {
      plVar25 = *(long **)(lVar13 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,local_300,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,local_300,0,8);
      }
    }
    return;
  }
  lVar26 = 0;
  do {
    pbVar24 = (byte *)0x0;
    lVar19 = param_1[6];
    puVar22 = (undefined8 *)(lVar19 + lVar26 * 0x28);
    std::string::__init((ulong)local_80,(char)param_2 * '\x02');
    memset(local_e8,0,0x48);
    local_9e = param_4[2];
    local_a0 = *(undefined2 *)param_4;
    std::string::string(local_98,local_80);
    if (*param_4 == '\0') {
      uVar4 = 0;
    }
    else {
      local_128 = (byte *)0x0;
      local_120 = (byte *)0x0;
      local_130 = (byte *)0x0;
      psVar18 = (string *)(lVar19 + lVar26 * 0x28 + 0x18);
      FUN_00b896f4(*(undefined8 *)psVar18,&local_130);
      pbVar17 = local_130;
      if (local_128 == local_120) {
        uVar7 = (long)local_128 - (long)local_130;
        puVar20 = (undefined8 *)(((long)uVar7 >> 2) + 1);
        if ((ulong)puVar20 >> 0x3e != 0) goto LAB_00b83c60;
        puVar15 = (undefined8 *)((long)local_120 - (long)local_130 >> 1);
        if (puVar20 <= puVar15) {
          puVar20 = puVar15;
        }
        if (0x1ffffffffffffffe < (ulong)((long)local_120 - (long)local_130 >> 2)) {
          puVar20 = (undefined8 *)0x3fffffffffffffff;
        }
        if (puVar20 == (undefined8 *)0x0) {
          pbVar24 = (byte *)0x0;
        }
        else {
          if ((ulong)puVar20 >> 0x3e != 0) break;
          plVar25 = *(long **)(lVar13 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          pbVar24 = (byte *)(**(code **)(*plVar25 + 0x10))(plVar25,(long)puVar20 << 2,8);
        }
        pbVar14 = pbVar24 + ((long)uVar7 >> 2) * 4;
        pbVar21 = pbVar24 + (long)puVar20 * 4;
        pbVar27 = pbVar14 + 4;
        pbVar14[0] = 2;
        pbVar14[1] = 0;
        pbVar14[2] = 0;
        pbVar14[3] = 0;
        if (0 < (long)uVar7) {
          memcpy(pbVar24,pbVar17,uVar7);
        }
        local_130 = pbVar24;
        local_128 = pbVar27;
        local_120 = pbVar21;
        if (pbVar17 != (byte *)0x0) {
          plVar25 = *(long **)(lVar13 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,pbVar17,0,8);
          }
          else {
            FUN_00c48fe8(plVar25,pbVar17,0,8);
          }
        }
      }
      else {
        local_128[0] = 2;
        local_128[1] = 0;
        local_128[2] = 0;
        local_128[3] = 0;
        local_128 = local_128 + 4;
      }
      pbVar17 = local_130;
      iVar6 = (int)((ulong)((long)puVar22 - *(long *)(*(long *)psVar18 + 0x30)) >> 3) * -0x33333333;
      if (local_128 < local_120) {
        *(int *)local_128 = iVar6;
        local_128 = local_128 + 4;
      }
      else {
        uVar7 = (long)local_128 - (long)local_130;
        puVar20 = (undefined8 *)((long)uVar7 >> 2);
        uVar11 = (long)puVar20 + 1;
        if (uVar11 >> 0x3e != 0) {
LAB_00b83c60:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar16 = (long)local_120 - (long)local_130 >> 1;
        if (uVar11 <= uVar16) {
          uVar11 = uVar16;
        }
        if (0x1ffffffffffffffe < (ulong)((long)local_120 - (long)local_130 >> 2)) {
          uVar11 = 0x3fffffffffffffff;
        }
        if (uVar11 == 0) {
          pbVar24 = (byte *)0x0;
        }
        else {
          if (uVar11 >> 0x3e != 0) break;
          plVar25 = *(long **)(lVar13 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          pbVar24 = (byte *)(**(code **)(*plVar25 + 0x10))(plVar25,uVar11 << 2,8);
        }
        pbVar21 = pbVar24 + (long)puVar20 * 4 + 4;
        *(int *)(pbVar24 + (long)puVar20 * 4) = iVar6;
        pbVar14 = pbVar24 + uVar11 * 4;
        if (0 < (long)uVar7) {
          memcpy(pbVar24,pbVar17,uVar7);
        }
        local_130 = pbVar24;
        local_128 = pbVar21;
        local_120 = pbVar14;
        if (pbVar17 != (byte *)0x0) {
          plVar25 = *(long **)(lVar13 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,pbVar17,0,8);
          }
          else {
            FUN_00c48fe8(plVar25,pbVar17,0,8);
          }
        }
      }
      uVar4 = FUN_00b884b8(*(undefined8 *)(*(long *)psVar18 + 0x10),&local_130,&local_f8);
      pbVar24 = local_130;
      if (local_130 != (byte *)0x0) {
        local_128 = local_130;
        plVar25 = *(long **)(lVar13 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(lVar13 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
        if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar25 + 0x18))(plVar25,pbVar24,0,8);
        }
        else {
          FUN_00c48fe8(plVar25,pbVar24,0,8);
        }
      }
    }
    local_100 = CONCAT71(local_100._1_7_,uVar4) & 0xffffffffffffff01;
    FUN_00b81e5c(&local_100,param_3);
    uVar2 = (uint)((byte)local_80[0] >> 1);
    pbVar24 = (byte *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      uVar2 = local_80._8_4_;
      pbVar24 = local_70;
    }
    local_128 = (byte *)CONCAT44(local_128._4_4_,uVar2);
    pbVar14 = (byte *)*puVar22;
    pbVar17 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar17 = pbVar14 + 1;
    }
    uVar2 = (uint)(*pbVar14 >> 1);
    if ((*pbVar14 & 1) != 0) {
      uVar2 = (uint)*(undefined8 *)(pbVar14 + 8);
    }
    local_158 = CONCAT44(local_158._4_4_,uVar2);
    iVar6 = *(int *)(lVar19 + lVar26 * 0x28 + 0x10);
    local_179[0] = '\0';
    if (iVar6 < 0) {
      if (iVar6 < -9) {
        iVar6 = iVar6 + 10;
        cVar3 = ((char)((ulong)((long)iVar6 * 0x66666667) >> 0x22) - (char)(iVar6 >> 0x1f)) * '\n' -
                (char)iVar6;
        iVar6 = (int)((ulong)((long)iVar6 * -0x66666667) >> 0x20);
        pcVar9 = &local_17b;
        iVar6 = ((iVar6 >> 2) - (iVar6 >> 0x1f)) + 1;
        do {
          local_190 = pcVar9 + -1;
          *pcVar9 = (char)iVar6 + (char)(iVar6 / 10) * -10 + '0';
          bVar1 = 9 < iVar6;
          pcVar9 = local_190;
          iVar6 = iVar6 / 10;
        } while (bVar1);
      }
      else {
        cVar3 = -(char)iVar6;
        local_190 = &local_17b;
      }
      local_17a = cVar3 + '0';
      *local_190 = '-';
    }
    else {
      local_190 = local_179;
      do {
        local_190 = local_190 + -1;
        *local_190 = (char)iVar6 + (char)(iVar6 / 10) * -10 + '0';
        bVar1 = 9 < iVar6;
        iVar6 = iVar6 / 10;
      } while (bVar1);
    }
    local_160 = pbVar17;
    local_130 = pbVar24;
    sVar10 = strlen(local_190);
    local_1b8 = 0xffffffff;
    local_1e8 = 0xffffffff;
    local_218 = 0xffffffff;
    local_248 = 0xffffffff;
    local_278 = 0xffffffff;
    local_2a8 = 0xffffffff;
    local_2d8 = 0xffffffff;
    local_188 = (undefined4)sVar10;
    local_1c0 = 0;
    local_1f0 = 0;
    local_220 = 0;
    local_250 = 0;
    local_280 = 0;
    local_2b0 = 0;
    local_2e0 = 0;
    FUN_00c2ce10(param_3,"$0$1 = $2",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                 &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
    local_2f8[1] = 0;
    local_2e8 = (byte *)0x0;
    local_2f8[0] = 0;
    local_128 = (byte *)0x0;
    local_120 = (byte *)0x0;
    local_130 = (byte *)0x0;
    uVar7 = FUN_00ba9500(param_2,*(undefined8 *)(lVar19 + lVar26 * 0x28 + 0x20),&local_130);
    pbVar17 = local_128;
    pbVar24 = local_130;
    if ((uVar7 & 1) != 0) {
      local_160 = (byte *)0x0;
      local_158 = 0;
      local_150 = 0;
      if (local_130 == local_128) {
        uVar7 = 0;
      }
      else {
        pbVar14 = *(byte **)(local_130 + 0x10);
        if ((*local_130 & 1) == 0) {
          pbVar14 = local_130 + 1;
        }
        std::string::append((char *)&local_160,(ulong)pbVar14);
        pbVar24 = pbVar24 + 0x18;
        if (pbVar24 != pbVar17) {
          lVar19 = -0x18;
          do {
            if (lVar19 != 0) {
              std::string::append((char *)&local_160);
            }
            pbVar14 = *(byte **)(pbVar24 + 0x10);
            if ((*pbVar24 & 1) == 0) {
              pbVar14 = pbVar24 + 1;
            }
            std::string::append((char *)&local_160,(ulong)pbVar14);
            pbVar24 = pbVar24 + 0x18;
            lVar19 = lVar19 + -0x18;
          } while (pbVar24 != pbVar17);
        }
        uVar7 = (ulong)local_160 & 0xff;
      }
      uVar11 = (ulong)&local_160 | 1;
      if ((uVar7 & 1) != 0) {
        uVar11 = local_150;
      }
      std::string::append((char *)local_2f8,uVar11);
      uVar7 = local_150;
      if ((((ulong)local_160 & 1) != 0) && (local_150 != 0)) {
        plVar25 = *(long **)(lVar13 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(lVar13 + 0x30) = DAT_04859430;
        }
        uVar11 = (**(code **)(*plVar25 + 0xf8))(plVar25);
        if (((uVar11 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
          (**(code **)(*plVar25 + 0x18))(plVar25,uVar7,0,8);
        }
        else {
          FUN_00c48fe8(plVar25,uVar7,0,8);
        }
      }
    }
    pbVar17 = local_128;
    pbVar24 = local_130;
    FUN_01f6e5a0(&local_130);
    if (pbVar24 != pbVar17) {
      local_130 = (byte *)((ulong)local_2f8 | 1);
      uVar2 = (uint)((byte)local_2f8[0] >> 1);
      if ((local_2f8[0] & 1) != 0) {
        local_130 = local_2e8;
        uVar2 = (uint)local_2f8[1];
      }
      local_128 = (byte *)CONCAT44(local_128._4_4_,uVar2);
      local_158 = CONCAT44(local_158._4_4_,0xffffffff);
      local_188 = 0xffffffff;
      local_1b8 = 0xffffffff;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_160 = (byte *)0x0;
      local_190 = (char *)0x0;
      local_1c0 = 0;
      local_220 = 0;
      local_218 = 0xffffffff;
      local_250 = 0;
      local_248 = 0xffffffff;
      local_280 = 0;
      local_278 = 0xffffffff;
      local_2b0 = 0;
      local_2a8 = 0xffffffff;
      local_2e0 = 0;
      local_2d8 = 0xffffffff;
      FUN_00c2ce10(param_3," [$0]",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,&local_220
                   ,&local_250,&local_280,&local_2b0,&local_2e0);
    }
    std::string::append(param_3);
    if ((char)local_100 != '\0') {
      uVar7 = (ulong)(local_d0[0] >> 1);
      if ((local_d0[0] & 1) != 0) {
        uVar7 = local_c8;
      }
      if (uVar7 != 0) {
        FUN_00ba926c(&local_130,&local_100,local_d0);
        pbVar24 = (byte *)((ulong)&local_130 | 1);
        if (((ulong)local_130 & 1) != 0) {
          pbVar24 = local_120;
        }
        std::string::append(param_3,(ulong)pbVar24);
        pbVar24 = local_120;
        if ((((ulong)local_130 & 1) != 0) && (local_120 != (byte *)0x0)) {
          plVar25 = *(long **)(lVar13 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar7 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,pbVar24,0,8);
          }
          else {
            FUN_00c48fe8(plVar25,pbVar24,0,8);
          }
        }
      }
    }
    pbVar24 = local_2e8;
    if (((local_2f8[0] & 1) != 0) && (local_2e8 != (byte *)0x0)) {
      plVar25 = *(long **)(lVar13 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,pbVar24,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,pbVar24,0,8);
      }
    }
    lVar19 = local_88;
    if ((((byte)local_98[0] & 1) != 0) && (local_88 != 0)) {
      plVar25 = *(long **)(lVar13 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,lVar19,0,8);
      }
    }
    FUN_01f6e5a0(auStack_b8);
    lVar19 = local_c0;
    if (((local_d0[0] & 1) != 0) && (local_c0 != 0)) {
      plVar25 = *(long **)(lVar13 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,lVar19,0,8);
      }
    }
    lVar19 = local_d8;
    if (((local_e8[0] & 1) != 0) && (local_d8 != 0)) {
      plVar25 = *(long **)(lVar13 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,lVar19,0,8);
      }
    }
    pbVar24 = local_70;
    if ((((byte)local_80[0] & 1) != 0) && (local_70 != (byte *)0x0)) {
      plVar25 = *(long **)(lVar13 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,pbVar24,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,pbVar24,0,8);
      }
    }
    lVar26 = lVar26 + 1;
    if (*(int *)((long)param_1 + 0x2c) <= lVar26) goto LAB_00b83728;
  } while( true );
  FUN_01f6e360();
LAB_00b83c6c:
  iVar6 = __cxa_guard_acquire(&DAT_04859438);
  if (iVar6 != 0) {
    puVar20[0x86] = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
LAB_00b83b38:
  plVar25 = (long *)puVar20[0x86];
  *(long **)(lVar13 + 0x30) = plVar25;
  goto LAB_00b824cc;
}


