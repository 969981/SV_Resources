/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f8078; name: FUN_015f8078
 */


void FUN_015f8078(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,uint *param_5,int param_6,undefined8 param_7)

{
  size_t sVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong __n;
  code *pcVar5;
  ushort *puVar6;
  uint *__src;
  long lVar7;
  ushort *puVar8;
  undefined8 *puVar9;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_124;
  undefined8 local_120;
  float local_118;
  undefined8 local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined2 local_f8;
  char local_f0 [8];
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  ushort local_d2;
  code *local_d0;
  code *pcStack_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  char *local_b0;
  ulong uStack_a8;
  undefined8 local_38;
  
  uVar13 = param_3._4_4_;
  uVar12 = param_3._0_4_;
  uVar11 = param_2._4_4_;
  uVar10 = param_2._0_4_;
  __src = param_5 + 1;
  local_124 = *param_5;
  uVar3 = param_6 - 4;
  __n = (ulong)uVar3;
  local_38 = param_7;
  if ((local_124 & 0xff) == 4) {
    puVar8 = *(ushort **)(param_4 + 0x4090);
    puVar6 = *(ushort **)(param_4 + 0x4098);
    if (puVar8 == puVar6) {
LAB_015f80e4:
      if (puVar8 != puVar6) {
        if ((char)puVar8[0x44] != '\x02') {
          return;
        }
        if (*(long *)(puVar8 + 4) == 0) {
          return;
        }
        if (*(long *)(*(long *)(puVar8 + 4) + 0x10) == 0) {
          return;
        }
        sVar1 = 0;
        if (uVar3 < 0x20) {
          sVar1 = 0x20 - __n;
        }
        memset(local_f0 + __n,0,sVar1);
        memcpy(local_f0,__src,__n);
        local_f8 = local_d4;
        local_118 = 0.0;
        local_10c = uStack_e8;
        local_104 = local_e0;
        local_120 = 0;
        local_fc = local_d8;
        if (*(int *)(puVar8 + 0x3c) == 5) {
          local_118 = (float)(local_d2 & 0x3f) * 0.015625 + (float)(local_d2 >> 6);
          local_120 = CONCAT44(local_118,local_118);
        }
        else if ((*(int *)(puVar8 + 0x3c) == 4) && (local_d4._1_1_ == '\0')) {
          if ((char)puVar8[0xe3] != '\0') {
            return;
          }
          if (*(long *)(puVar8 + 0x74) + 2U < 0x19) {
            puVar6 = puVar8 + 0x8c;
            if ((char)puVar8[0xa2] != '\0') {
              uStack_a8 = uStack_a8 & 0xffffffffffff0000;
              local_b8 = (undefined1 *)0x0;
              local_b0 = (char *)0x0;
              local_d0 = (code *)0x0;
              pcStack_c8 = (code *)0x0;
              local_c0 = (undefined1 *)0x0;
              FUN_01ea2fcc(puVar6,&local_120,&local_d0);
              FUN_015f8740(puVar8 + 0x50,&local_d0);
            }
            FUN_015f8740(puVar8 + 0x50,&local_120);
            if ((char)puVar8[0xa2] == '\0') {
              memcpy(puVar6,&local_120,0x2c);
              *(undefined1 *)(puVar8 + 0xa2) = 1;
            }
            else {
              memcpy(puVar6,&local_120,0x2a);
            }
          }
          if (*(long *)(puVar8 + 0x74) - 1U <= *(ulong *)(puVar8 + 200)) {
            return;
          }
          do {
            FUN_015f88cc(puVar8 + 0xa4);
          } while (*(ulong *)(puVar8 + 200) < *(long *)(puVar8 + 0x74) - 1U);
          return;
        }
        if ((char)puVar8[0xe3] != '\0') {
          return;
        }
        if (*(long *)(puVar8 + 0x74) + 1U < 0x19) {
          FUN_015f8740(puVar8 + 0x50,&local_120);
          if ((char)puVar8[0xa2] == '\0') {
            memcpy(puVar8 + 0x8c,&local_120,0x2c);
            *(undefined1 *)(puVar8 + 0xa2) = 1;
          }
          else {
            memcpy(puVar8 + 0x8c,&local_120,0x2a);
          }
        }
        if (*(long *)(puVar8 + 0x74) - 1U <= *(ulong *)(puVar8 + 200)) {
          return;
        }
        do {
          FUN_015f88cc(puVar8 + 0xa4);
        } while (*(ulong *)(puVar8 + 200) < *(long *)(puVar8 + 0x74) - 1U);
        return;
      }
    }
    else {
      do {
        if ((uint)*puVar8 == local_124 >> 0x10) goto LAB_015f80e4;
        puVar8 = puVar8 + 0xe4;
      } while (puVar6 != puVar8);
    }
    sVar1 = 0;
    if (uVar3 < 0x20) {
      sVar1 = 0x20 - __n;
    }
    memset(local_f0 + __n,0,sVar1);
    memcpy(local_f0,__src,__n);
    local_10c = uStack_e8;
    local_104 = local_e0;
    local_fc = local_d8;
    if (*(long *)(param_4 + 0x4140) == 0) {
      return;
    }
    FUN_015f86b8(&local_120);
    local_d0 = (code *)CONCAT44(extraout_var,extraout_s0);
    local_c0 = (undefined1 *)CONCAT44(uVar11,uVar10);
    local_b0 = (char *)CONCAT44(uVar13,uVar12);
    pcStack_c8 = (code *)extraout_var_00;
    (**(code **)(param_4 + 0x4140))(param_4 + 0x4160,(ulong)&local_124 | 2,&local_d0);
    return;
  }
  switch(local_124 & 0xff) {
  case 0:
    FUN_015f8a8c(param_4,(ulong)&local_124 | 2,&local_38);
    break;
  case 1:
    FUN_015fbf80(param_4,__src,__n,(ulong)&local_124 | 2);
    break;
  case 2:
    FUN_015fa600(param_4,__src,__n,(ulong)&local_124 | 2);
    break;
  case 3:
    FUN_015fb0f0(param_4,__src,__n,(ulong)&local_124 | 2);
    break;
  case 5:
    FUN_015f8b6c(param_4,__src,__n,(ulong)&local_124 | 2);
    break;
  case 6:
    FUN_015fca08(param_4,__src,__n,(ulong)&local_124 | 2);
    break;
  case 7:
    FUN_015fa10c(param_4,__src,__n,(ulong)&local_124 | 2);
    break;
  case 8:
    FUN_015f99f4(param_4,__src,__n,(ulong)&local_124 | 2);
    break;
  case 9:
    FUN_015f9b98(param_4,__src,__n,(ulong)&local_124 | 2);
    break;
  case 10:
    puVar8 = *(ushort **)(param_4 + 0x4090);
    puVar6 = *(ushort **)(param_4 + 0x4098);
    if (puVar8 == puVar6) {
LAB_015f8400:
      if (((puVar8 != puVar6) && (uVar3 == 1)) && ((char)puVar8[0x44] == '\x02')) {
        *(char *)(puVar8 + 0x40) = (char)*__src;
      }
    }
    else {
      do {
        if ((uint)*puVar8 == local_124 >> 0x10) goto LAB_015f8400;
        puVar8 = puVar8 + 0xe4;
      } while (puVar6 != puVar8);
    }
    break;
  case 0xb:
    FUN_015fb388(param_4,(ulong)&local_124 | 2);
    break;
  case 0xc:
    puVar8 = *(ushort **)(param_4 + 0x4090);
    puVar6 = *(ushort **)(param_4 + 0x4098);
    if (puVar8 != puVar6) {
      while ((uint)*puVar8 != local_124 >> 0x10) {
        puVar8 = puVar8 + 0xe4;
        if (puVar6 == puVar8) {
          return;
        }
      }
    }
    if (puVar8 == puVar6) {
      return;
    }
    if ((char)puVar8[0x44] != '\x02') {
      return;
    }
    if ((*(long *)(puVar8 + 0x14) != 0) &&
       (lVar7 = *(long *)(*(long *)(puVar8 + 0x14) + 0x10), lVar7 != 0)) {
      local_b0 = local_f0;
      uVar4 = param_5[1];
      local_f0[0] = '\0';
      local_d0 = FUN_00b1bc04;
      pcStack_c8 = FUN_00b1bc18;
      local_c0 = &LAB_00b1bc1c;
      local_b8 = &LAB_00b1bc28;
      puVar9 = *(undefined8 **)(lVar7 + 0x150);
      puVar2 = *(undefined8 **)(lVar7 + 0x158);
      pcVar5 = FUN_00b1bc18;
      if (puVar9 == puVar2) {
LAB_015f8628:
        local_c0 = (undefined1 *)0x0;
        local_b8 = (undefined1 *)0x0;
        local_d0 = (code *)0x0;
        pcStack_c8 = (code *)0x0;
        (*pcVar5)(&local_b0);
      }
      else {
        local_f0[0] = '\x01';
        if (puVar9 + 1 != puVar2) {
          local_120 = puVar9[1];
          FUN_00b1bc04(&local_b0,&local_120);
          if (puVar9 + 2 != puVar2) {
            local_120 = puVar9[2];
            (*local_d0)(&local_b0,&local_120);
            if (puVar9 + 3 != puVar2) {
              local_120 = puVar9[3];
              (*local_d0)(&local_b0,&local_120);
              for (puVar9 = puVar9 + 4; puVar9 != puVar2; puVar9 = puVar9 + 1) {
                local_120 = *puVar9;
                (*local_d0)(&local_b0,&local_120);
              }
            }
          }
        }
        pcVar5 = pcStack_c8;
        if (pcStack_c8 != (code *)0x0) goto LAB_015f8628;
      }
      if ((char)uVar4 == local_f0[0]) {
        FUN_019c5bd8(lVar7 + -0x28,(long)param_5 + 5,(ulong)uVar3 - 1);
      }
    }
    *(undefined1 *)(puVar8 + 0xe3) = 0;
  }
  return;
}


