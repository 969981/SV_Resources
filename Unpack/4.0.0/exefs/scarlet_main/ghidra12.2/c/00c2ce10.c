/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c2ce10; name: FUN_00c2ce10
 */


void FUN_00c2ce10(byte *param_1,char *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 auStack_2a8 [39];
  undefined8 local_170;
  size_t local_168;
  void *local_160;
  ulong local_158;
  char *local_150;
  ulong local_148;
  char local_140 [24];
  long local_128 [10];
  undefined8 local_d8;
  ulong local_d0;
  char *local_c8;
  ulong local_c0;
  char local_b8 [103];
  undefined1 local_51;
  
  uVar7 = 0;
  iVar2 = 0;
  local_128[0] = param_3;
  local_128[1] = param_4;
  local_d8 = 0;
  local_128[8] = param_11;
  local_128[9] = param_12;
  local_128[2] = param_5;
  local_128[3] = param_6;
  local_128[4] = param_7;
  local_128[5] = param_8;
  local_128[6] = param_9;
  local_128[7] = param_10;
  do {
    if (param_2[(int)uVar7] == '$') {
      uVar7 = (long)(int)uVar7 + 1;
      uVar9 = (byte)param_2[uVar7] - 0x30;
      if (9 < uVar9) {
        if ((byte)param_2[uVar7] == 0x24) goto LAB_00c2ceb0;
        local_b8[0x10] = '\0';
        local_b8[0x11] = '\0';
        local_b8[0x12] = '\0';
        local_b8[0x13] = '\0';
        local_b8[0x14] = '\0';
        local_b8[0x15] = '\0';
        local_b8[0x16] = '\0';
        local_b8[0x17] = '\0';
        local_d0 = CONCAT44(local_d0._4_4_,2);
        local_c0 = CONCAT44(local_c0._4_4_,0x62);
        local_c8 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/stubs/substitute.cc"
        ;
        local_b8[0] = '\0';
        local_b8[1] = '\0';
        local_b8[2] = '\0';
        local_b8[3] = '\0';
        local_b8[4] = '\0';
        local_b8[5] = '\0';
        local_b8[6] = '\0';
        local_b8[7] = '\0';
        local_b8[8] = '\0';
        local_b8[9] = '\0';
        local_b8[10] = '\0';
        local_b8[0xb] = '\0';
        local_b8[0xc] = '\0';
        local_b8[0xd] = '\0';
        local_b8[0xe] = '\0';
        local_b8[0xf] = '\0';
        std::string::append(local_b8);
        sVar3 = strlen(param_2);
        if (0xffffffffffffffef < sVar3) goto LAB_00c2d61c;
        if (sVar3 < 0x17) {
          local_170 = CONCAT71(local_170._1_7_,(char)((int)sVar3 << 1));
          pvVar10 = (void *)((ulong)&local_170 | 1);
          if (sVar3 != 0) goto LAB_00c2d1a4;
        }
        else {
          uVar7 = sVar3 + 0x10 & 0xfffffffffffffff0;
          lVar6 = tpidr_el0;
          plVar8 = *(long **)(lVar6 + 0x30);
          if (plVar8 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar8 = DAT_04859430;
            *(long **)(lVar6 + 0x30) = DAT_04859430;
          }
          pvVar10 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar7,8);
          local_170 = uVar7 | 1;
          local_168 = sVar3;
          local_160 = pvVar10;
LAB_00c2d1a4:
          memcpy(pvVar10,param_2,sVar3);
        }
        *(undefined1 *)((long)pvVar10 + sVar3) = 0;
        sVar3 = local_170 >> 1 & 0x7f;
        if ((local_170 & 1) == 0) {
          pvVar10 = (void *)((long)&local_170 + 1);
        }
        else {
          pvVar10 = local_160;
          sVar3 = local_168;
        }
        local_150 = (char *)0x0;
        local_148 = 0;
        local_158 = 0;
        FUN_00c0fad0(pvVar10,sVar3,&local_158);
        uVar7 = (ulong)&local_158 | 1;
        if ((local_158 & 1) != 0) {
          uVar7 = local_148;
        }
        std::string::append(local_b8,uVar7);
        std::string::append(local_b8);
        FUN_00bb0e90(&local_d0);
        uVar7 = local_148;
        if (((local_158 & 1) != 0) && (local_148 != 0)) {
          lVar6 = tpidr_el0;
          plVar8 = *(long **)(lVar6 + 0x30);
          if (plVar8 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar8 = DAT_04859430;
            *(long **)(lVar6 + 0x30) = DAT_04859430;
          }
          uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar8,uVar7,0,8);
          }
        }
        pvVar10 = local_160;
        if (((local_170 & 1) != 0) && (local_160 != (void *)0x0)) {
          lVar6 = tpidr_el0;
          plVar8 = *(long **)(lVar6 + 0x30);
          if (plVar8 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar8 = DAT_04859430;
            *(long **)(lVar6 + 0x30) = DAT_04859430;
          }
          uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,pvVar10,0,8);
          }
          else {
            FUN_00c48fe8(plVar8,pvVar10,0,8);
          }
        }
        puVar4 = &local_d0;
        goto LAB_00c2d234;
      }
      if (*(int *)(local_128[(int)uVar9] + 8) == -1) {
        local_140[0x10] = '\0';
        local_140[0x11] = '\0';
        local_140[0x12] = '\0';
        local_140[0x13] = '\0';
        local_140[0x14] = '\0';
        local_140[0x15] = '\0';
        local_140[0x16] = '\0';
        local_140[0x17] = '\0';
        local_158 = CONCAT44(local_158._4_4_,2);
        local_148 = CONCAT44(local_148._4_4_,0x55);
        local_150 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/stubs/substitute.cc"
        ;
        local_140[0] = '\0';
        local_140[1] = '\0';
        local_140[2] = '\0';
        local_140[3] = '\0';
        local_140[4] = '\0';
        local_140[5] = '\0';
        local_140[6] = '\0';
        local_140[7] = '\0';
        local_140[8] = '\0';
        local_140[9] = '\0';
        local_140[10] = '\0';
        local_140[0xb] = '\0';
        local_140[0xc] = '\0';
        local_140[0xd] = '\0';
        local_140[0xe] = '\0';
        local_140[0xf] = '\0';
        std::string::append(local_140);
        snprintf((char *)&local_d0,0x80,"%d",(ulong)uVar9);
        local_51 = 0;
        std::string::append(local_140);
        std::string::append(local_140);
        uVar7 = 0;
        goto LAB_00c2d020;
      }
      iVar2 = *(int *)(local_128[(int)uVar9] + 8) + iVar2;
    }
    else {
      if (param_2[(int)uVar7] == '\0') break;
LAB_00c2ceb0:
      iVar2 = iVar2 + 1;
    }
    uVar7 = (ulong)((int)uVar7 + 1);
  } while( true );
  if (iVar2 == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    uVar9 = (uint)(*param_1 >> 1);
  }
  else {
    uVar9 = (uint)*(undefined8 *)(param_1 + 8);
  }
  std::string::resize((ulong)param_1,(char)iVar2 + (char)uVar9);
  if ((*param_1 & 1) == 0) {
    if (1 < *param_1) {
      param_1 = param_1 + 1;
      goto LAB_00c2cf14;
    }
  }
  else if (*(long *)(param_1 + 8) != 0) {
    param_1 = *(byte **)(param_1 + 0x10);
    goto LAB_00c2cf14;
  }
  param_1 = (byte *)0x0;
LAB_00c2cf14:
  param_1 = param_1 + (int)uVar9;
  uVar9 = 0;
  do {
    bVar1 = param_2[(int)uVar9];
    if (bVar1 == 0x24) {
      uVar7 = (long)(int)uVar9 + 1;
      bVar1 = param_2[uVar7];
      if ((byte)(bVar1 - 0x30) < 10) {
        puVar11 = (undefined8 *)auStack_2a8[bVar1];
        memcpy(param_1,(void *)*puVar11,(long)*(int *)(puVar11 + 1));
        param_1 = param_1 + *(int *)(puVar11 + 1);
      }
      else if (bVar1 == 0x24) {
        *param_1 = 0x24;
        param_1 = param_1 + 1;
      }
      else {
        uVar7 = (ulong)uVar9;
      }
    }
    else {
      if (bVar1 == 0) {
        return;
      }
      uVar7 = (ulong)uVar9;
      *param_1 = bVar1;
      param_1 = param_1 + 1;
    }
    uVar9 = (int)uVar7 + 1;
  } while( true );
  while( true ) {
    param_3 = local_128[uVar7 + 1];
    uVar7 = uVar7 + 1;
    if (param_3 == 0) break;
LAB_00c2d020:
    if (*(int *)(param_3 + 8) == -1) goto LAB_00c2d040;
  }
  uVar7 = uVar7 & 0xffffffff;
LAB_00c2d040:
  snprintf((char *)&local_d0,0x80,"%d",uVar7);
  local_51 = 0;
  std::string::append(local_140);
  std::string::append(local_140);
  sVar3 = strlen(param_2);
  if (0xffffffffffffffef < sVar3) {
LAB_00c2d61c:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_170 = CONCAT71(local_170._1_7_,(char)((int)sVar3 << 1));
    pvVar10 = (void *)((ulong)&local_170 | 1);
    if (sVar3 == 0) goto LAB_00c2d0b4;
  }
  else {
    uVar7 = sVar3 + 0x10 & 0xfffffffffffffff0;
    lVar6 = tpidr_el0;
    plVar8 = *(long **)(lVar6 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    pvVar10 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar7,8);
    local_170 = uVar7 | 1;
    local_168 = sVar3;
    local_160 = pvVar10;
  }
  memcpy(pvVar10,param_2,sVar3);
LAB_00c2d0b4:
  *(undefined1 *)((long)pvVar10 + sVar3) = 0;
  sVar3 = local_170 >> 1 & 0x7f;
  if ((local_170 & 1) == 0) {
    pvVar10 = (void *)((long)&local_170 + 1);
  }
  else {
    pvVar10 = local_160;
    sVar3 = local_168;
  }
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_d0 = 0;
  FUN_00c0fad0(pvVar10,sVar3,&local_d0);
  uVar7 = (ulong)&local_d0 | 1;
  if ((local_d0 & 1) != 0) {
    uVar7 = local_c0;
  }
  std::string::append(local_140,uVar7);
  std::string::append(local_140);
  FUN_00bb0e90(&local_158);
  uVar7 = local_c0;
  if (((local_d0 & 1) != 0) && (local_c0 != 0)) {
    lVar6 = tpidr_el0;
    plVar8 = *(long **)(lVar6 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar7,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,uVar7,0,8);
    }
  }
  pvVar10 = local_160;
  if (((local_170 & 1) != 0) && (local_160 != (void *)0x0)) {
    lVar6 = tpidr_el0;
    plVar8 = *(long **)(lVar6 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,pvVar10,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,pvVar10,0,8);
    }
  }
  puVar4 = &local_158;
LAB_00c2d234:
  FUN_00bb0d74(puVar4);
  return;
}


