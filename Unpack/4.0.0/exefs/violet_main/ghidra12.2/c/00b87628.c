/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b87628; name: FUN_00b87628
 */


void FUN_00b87628(undefined8 *param_1,uint param_2,char *param_3,char *param_4)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  int *__n;
  long *plVar14;
  int *piVar15;
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
  undefined8 local_190;
  undefined4 local_188;
  byte *local_160;
  uint local_158;
  int *local_130;
  int *local_128;
  int *local_120;
  byte local_100 [8];
  undefined1 auStack_f8 [16];
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
  string local_80 [8];
  uint local_78;
  int *local_70;
  
  uVar13 = (ulong)param_2;
  std::string::__init((ulong)local_80,(char)(param_2 << 1));
  memset(local_e8,0,0x48);
  local_9e = param_4[2];
  local_a0 = *(undefined2 *)param_4;
  std::string::string(local_98,local_80);
  if (*param_4 == '\0') {
    bVar5 = 0;
    goto LAB_00b8799c;
  }
  local_128 = (int *)0x0;
  local_120 = (int *)0x0;
  local_130 = (int *)0x0;
  FUN_00b88e54(param_1[2],&local_130);
  piVar4 = local_130;
  uVar3 = tpidr_el0;
  if (local_128 == local_120) {
    __n = (int *)((long)local_128 - (long)local_130);
    uVar8 = ((long)__n >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_00b88158;
    uVar12 = (long)local_120 - (long)local_130 >> 1;
    if (uVar8 <= uVar12) {
      uVar8 = uVar12;
    }
    if (0x1ffffffffffffffe < (ulong)((long)local_120 - (long)local_130 >> 2)) {
      uVar8 = 0x3fffffffffffffff;
    }
    if (uVar8 == 0) {
      piVar9 = (int *)0x0;
LAB_00b87768:
      piVar1 = piVar9 + uVar8;
      piVar15 = piVar9 + ((long)__n >> 2) + 1;
      piVar9[(long)__n >> 2] = 8;
      if (0 < (long)__n) {
        memcpy(piVar9,piVar4,(size_t)__n);
      }
      local_130 = piVar9;
      local_128 = piVar15;
      local_120 = piVar1;
      if (piVar4 != (int *)0x0) {
        plVar14 = *(long **)(uVar3 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(uVar3 + 0x30) = DAT_04859430;
        }
        uVar8 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,piVar4,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,piVar4,0,8);
        }
      }
      goto LAB_00b877f0;
    }
    if (uVar8 >> 0x3e == 0) {
      plVar14 = *(long **)(uVar3 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(uVar3 + 0x30) = DAT_04859430;
      }
      piVar9 = (int *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar8 << 2,8);
      goto LAB_00b87768;
    }
LAB_00b88160:
    bVar5 = (byte)local_130;
    FUN_01f6e360();
LAB_00b88164:
    iVar7 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar7 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00b87f68:
    plVar14 = DAT_04859430;
    *(long **)(uVar13 + 0x30) = DAT_04859430;
  }
  else {
    *local_128 = 8;
    local_128 = local_128 + 1;
LAB_00b877f0:
    piVar4 = local_130;
    iVar7 = (int)((ulong)((long)param_1 - *(long *)(param_1[2] + 0x40)) >> 4) * -0x55555555;
    if (local_128 < local_120) {
      *local_128 = iVar7;
      local_128 = local_128 + 1;
    }
    else {
      __n = (int *)((long)local_128 - (long)local_130);
      uVar8 = ((long)__n >> 2) + 1;
      if (uVar8 >> 0x3e != 0) {
LAB_00b88158:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar12 = (long)local_120 - (long)local_130 >> 1;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x1ffffffffffffffe < (ulong)((long)local_120 - (long)local_130 >> 2)) {
        uVar8 = 0x3fffffffffffffff;
      }
      if (uVar8 == 0) {
        piVar9 = (int *)0x0;
      }
      else {
        if (uVar8 >> 0x3e != 0) goto LAB_00b88160;
        plVar14 = *(long **)(uVar3 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(uVar3 + 0x30) = DAT_04859430;
        }
        piVar9 = (int *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar8 << 2,8);
      }
      piVar15 = piVar9 + ((long)__n >> 2) + 1;
      piVar9[(long)__n >> 2] = iVar7;
      piVar1 = piVar9 + uVar8;
      if (0 < (long)__n) {
        memcpy(piVar9,piVar4,(size_t)__n);
      }
      local_130 = piVar9;
      local_128 = piVar15;
      local_120 = piVar1;
      if (piVar4 != (int *)0x0) {
        plVar14 = *(long **)(uVar3 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(uVar3 + 0x30) = DAT_04859430;
        }
        uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,piVar4,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,piVar4,0,8);
        }
      }
    }
    bVar5 = FUN_00b884b8(*(undefined8 *)(param_1[2] + 0x10),&local_130,auStack_f8);
    if (local_130 == (int *)0x0) goto LAB_00b8799c;
    local_128 = local_130;
    plVar14 = *(long **)(uVar3 + 0x30);
    __n = local_130;
    if (plVar14 == (long *)0x0) {
      uVar13 = uVar3;
      if ((DAT_04859438 & 1) == 0) goto LAB_00b88164;
      goto LAB_00b87f68;
    }
  }
  uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
  if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
    (**(code **)(*plVar14 + 0x18))(plVar14,__n,0,8);
  }
  else {
    FUN_00c48fe8(plVar14,__n,0,8);
  }
LAB_00b8799c:
  local_100[0] = bVar5 & 1;
  FUN_00b81e5c(local_100,param_3);
  uVar2 = (uint)((byte)local_80[0] >> 1);
  local_130 = (int *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar2 = (uint)_local_78;
    local_130 = local_70;
  }
  local_128 = (int *)CONCAT44(local_128._4_4_,uVar2);
  pbVar11 = (byte *)*param_1;
  local_160 = *(byte **)(pbVar11 + 0x10);
  if ((*pbVar11 & 1) == 0) {
    local_160 = pbVar11 + 1;
  }
  local_190 = 0;
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
  local_2e0 = 0;
  local_2d8 = 0xffffffff;
  local_158 = (uint)(*pbVar11 >> 1);
  if ((*pbVar11 & 1) != 0) {
    local_158 = (uint)*(undefined8 *)(pbVar11 + 8);
  }
  FUN_00c2ce10(param_3,"$0 oneof $1 {",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
               &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
  FUN_00b82160(param_2 + 1,param_1[5],param_3);
  if (param_4[2] == '\0') {
    if (0 < *(int *)((long)param_1 + 0x1c)) {
      lVar10 = 0;
      do {
        FUN_00b85714(*(undefined8 *)(param_1[4] + lVar10 * 8),param_2 + 1,1,param_3,param_4);
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((long)param_1 + 0x1c));
    }
    uVar2 = (uint)((byte)local_80[0] >> 1);
    local_130 = (int *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      uVar2 = local_78;
      local_130 = local_70;
    }
    local_128 = (int *)CONCAT44(local_128._4_4_,uVar2);
    local_160 = (byte *)0x0;
    local_158 = 0xffffffff;
    local_190 = 0;
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
    local_2e0 = 0;
    local_2d8 = 0xffffffff;
    FUN_00c2ce10(param_3,&DAT_03c207eb,&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                 &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
  }
  else {
    std::string::append(param_3);
  }
  if (local_100[0] != 0) {
    uVar13 = (ulong)(local_d0[0] >> 1);
    if ((local_d0[0] & 1) != 0) {
      uVar13 = local_c8;
    }
    if (uVar13 != 0) {
      FUN_00ba926c(&local_130,local_100,local_d0);
      piVar4 = (int *)((ulong)&local_130 | 1);
      if (((ulong)local_130 & 1) != 0) {
        piVar4 = local_120;
      }
      std::string::append(param_3,(ulong)piVar4);
      piVar4 = local_120;
      if ((((ulong)local_130 & 1) != 0) && (local_120 != (int *)0x0)) {
        lVar10 = tpidr_el0;
        plVar14 = *(long **)(lVar10 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,piVar4,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,piVar4,0,8);
        }
      }
    }
  }
  if ((((byte)local_98[0] & 1) != 0) && (local_88 != 0)) {
    lVar10 = tpidr_el0;
    plVar14 = *(long **)(lVar10 + 0x30);
    if (plVar14 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar14 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,local_88,0,8);
    }
    else {
      FUN_00c48fe8(plVar14,local_88,0,8);
    }
  }
  FUN_01f6e5a0(auStack_b8);
  if (((local_d0[0] & 1) != 0) && (local_c0 != 0)) {
    lVar10 = tpidr_el0;
    plVar14 = *(long **)(lVar10 + 0x30);
    if (plVar14 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar14 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,local_c0,0,8);
    }
    else {
      FUN_00c48fe8(plVar14,local_c0,0,8);
    }
  }
  if (((local_e8[0] & 1) != 0) && (local_d8 != 0)) {
    lVar10 = tpidr_el0;
    plVar14 = *(long **)(lVar10 + 0x30);
    if (plVar14 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar14 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,local_d8,0,8);
    }
    else {
      FUN_00c48fe8(plVar14,local_d8,0,8);
    }
  }
  if ((((byte)local_80[0] & 1) != 0) && (local_70 != (int *)0x0)) {
    lVar10 = tpidr_el0;
    plVar14 = *(long **)(lVar10 + 0x30);
    if (plVar14 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar14 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,local_70,0,8);
    }
    else {
      FUN_00c48fe8(plVar14,local_70,0,8);
    }
  }
  return;
}


