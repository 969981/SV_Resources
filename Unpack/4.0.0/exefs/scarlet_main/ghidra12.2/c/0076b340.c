/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0076b340; name: FUN_0076b340
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0076b340(int *param_1,long *param_2,long *param_3)

{
  void *pvVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  byte local_158;
  undefined7 uStack_157;
  ulong uStack_150;
  void *local_148;
  int local_140;
  undefined8 local_138;
  ulong uStack_130;
  void *local_128;
  undefined8 local_120;
  ulong uStack_118;
  void *local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  char cStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 auStack_f0 [32];
  int local_d0;
  byte local_c8;
  undefined7 uStack_c7;
  ulong uStack_c0;
  void *local_b8;
  byte local_b0;
  undefined7 uStack_af;
  ulong uStack_a8;
  void *local_a0;
  int local_98 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  
  puVar2 = PTR_DAT_047cbb08;
  uVar3 = s_No_payload_03c0104f._0_8_;
  if (param_2 == (long *)0x0) {
    *param_1 = 0xd;
    uStack_107 = (undefined7)uVar3;
    cStack_100 = SUB81(uVar3,7);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(undefined8 *)(param_1 + 6) = local_f8;
    param_1[8] = 0;
    param_1[9] = 0;
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_fc,(uint)CONCAT21(0x6461,cStack_100));
    *(ulong *)(param_1 + 2) = CONCAT71(uStack_107,0x14);
    return;
  }
  uVar3 = (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x1a0))();
  FUN_002246b8(local_98,uVar3);
  FUN_002247e0(&local_108,param_2);
  pvVar1 = local_b8;
  uVar4 = uStack_c0;
  local_140 = local_d0;
  if ((local_c8 & 1) == 0) {
    local_138 = CONCAT71(uStack_c7,local_c8);
    local_128 = local_b8;
    uStack_130 = uStack_c0;
  }
  else {
    if (uStack_c0 < 0x17) {
      pvVar5 = (void *)((long)&local_138 + 1);
      local_138 = CONCAT71(local_138._1_7_,(char)((int)uStack_c0 << 1));
    }
    else {
      if (0xffffffffffffffef < uStack_c0) goto LAB_0076b93c;
      uVar7 = uStack_c0 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_138 = uVar7 | 1;
      uStack_130 = uVar4;
      local_128 = pvVar5;
    }
    memcpy(pvVar5,pvVar1,uVar4 + 1);
  }
  pvVar1 = local_a0;
  uVar4 = uStack_a8;
  if ((local_b0 & 1) == 0) {
    local_120 = CONCAT71(uStack_af,local_b0);
    local_110 = local_a0;
    uStack_118 = uStack_a8;
    iVar8 = local_140;
    if ((local_b0 & 1) != 0) goto LAB_0076b49c;
  }
  else {
    if (uStack_a8 < 0x17) {
      pvVar5 = (void *)((long)&local_120 + 1);
      local_120 = CONCAT71(local_120._1_7_,(char)((int)uStack_a8 << 1));
    }
    else {
      if (0xffffffffffffffef < uStack_a8) goto LAB_0076b93c;
      uVar7 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_120 = uVar7 | 1;
      uStack_118 = uVar4;
      local_110 = pvVar5;
    }
    memcpy(pvVar5,pvVar1,uVar4 + 1);
    iVar8 = local_140;
    if ((local_120 & 1) != 0) {
LAB_0076b49c:
      iVar8 = local_140;
      FUN_0049e790(PTR_LAB_047cba48,local_110);
    }
  }
  uVar4 = uStack_c0;
  pvVar1 = local_b8;
  if ((local_138 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_128);
    uVar4 = uStack_c0;
    pvVar1 = local_b8;
  }
  local_b8 = pvVar1;
  if (iVar8 == 0) {
    uVar4 = FUN_0052d26c(param_3,&local_108);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*param_3 + 0x38))(&local_158,param_3);
      pvVar1 = local_148;
      local_140 = 0xd;
      if ((local_158 & 1) == 0) {
        local_138 = CONCAT71(uStack_157,local_158);
        local_128 = local_148;
        uStack_130 = uStack_150;
      }
      else {
        if (uStack_150 < 0x17) {
          pvVar5 = (void *)((long)&local_138 + 1);
          local_138 = CONCAT71(local_138._1_7_,(char)((int)uStack_150 << 1));
        }
        else {
          if (0xffffffffffffffef < uStack_150) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar4 = uStack_150 + 0x10 & 0xfffffffffffffff0;
          pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
          local_138 = uVar4 | 1;
          uStack_130 = uStack_150;
          local_128 = pvVar5;
        }
        memcpy(pvVar5,pvVar1,uStack_150 + 1);
      }
      local_120 = 0;
      uStack_118 = 0;
      local_110 = (void *)0x0;
      local_98[0] = local_140;
      if (((byte)local_90 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_80);
      }
      uVar4 = local_120;
      uStack_88 = uStack_130;
      local_90 = local_138;
      local_80 = local_128;
      local_138 = local_138 & 0xffffffffffff0000;
      if (((byte)local_78 & 1) == 0) {
        local_120 = local_120 & 0xffffffffffff0000;
        local_68 = local_110;
        uStack_70 = uStack_118;
        local_78 = uVar4;
      }
      else {
        FUN_0049e790(PTR_LAB_047cba48,local_68);
        local_78 = local_120;
        local_68 = local_110;
        local_120 = local_120 & 0xffffffffffff0000;
        uStack_70 = uStack_118;
        if ((local_138 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_128);
        }
      }
      if ((local_158 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_148);
      }
    }
    local_108 = SUB81(PTR_DAT_047cbeb0 + 0x10,0);
    uStack_107 = (undefined7)((ulong)(PTR_DAT_047cbeb0 + 0x10) >> 8);
    if (local_d0 == 0) {
      (**(code **)(**(long **)puVar2 + 0xd8))(*(long **)puVar2,auStack_f0);
    }
    if ((local_b0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_a0);
    }
    if ((local_c8 & 1) == 0) {
      lVar6 = *param_2;
    }
    else {
      FUN_0049e790(PTR_LAB_047cba48,local_b8);
      lVar6 = *param_2;
    }
    if (lVar6 != 0) {
      (**(code **)(**(long **)puVar2 + 0xc0))();
      *param_2 = 0;
    }
    *param_1 = local_98[0];
    *(ulong *)(param_1 + 4) = uStack_88;
    *(ulong *)(param_1 + 2) = local_90;
    *(void **)(param_1 + 6) = local_80;
    *(void **)(param_1 + 0xc) = local_68;
    *(ulong *)(param_1 + 10) = uStack_70;
    *(ulong *)(param_1 + 8) = local_78;
    return;
  }
  *param_1 = local_d0;
  if ((local_c8 & 1) == 0) {
    *(void **)(param_1 + 6) = pvVar1;
    *(ulong *)(param_1 + 4) = uVar4;
    *(ulong *)(param_1 + 2) = CONCAT71(uStack_c7,local_c8);
    uVar4 = uStack_a8;
    pvVar1 = local_a0;
  }
  else {
    if (uVar4 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar4 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) goto LAB_0076b93c;
      uVar7 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      *(ulong *)(param_1 + 4) = uVar4;
      *(void **)(param_1 + 6) = pvVar5;
      *(ulong *)(param_1 + 2) = uVar7 | 1;
    }
    memcpy(pvVar5,pvVar1,uVar4 + 1);
    uVar4 = uStack_a8;
    pvVar1 = local_a0;
  }
  local_a0 = pvVar1;
  if ((local_b0 & 1) == 0) {
    *(void **)(param_1 + 0xc) = pvVar1;
    *(ulong *)(param_1 + 10) = uVar4;
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_af,local_b0);
  }
  else {
    if (uVar4 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x21);
      *(char *)(param_1 + 8) = (char)((int)uVar4 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) {
LAB_0076b93c:
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar7 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      *(ulong *)(param_1 + 10) = uVar4;
      *(void **)(param_1 + 0xc) = pvVar5;
      *(ulong *)(param_1 + 8) = uVar7 | 1;
    }
    memcpy(pvVar5,pvVar1,uVar4 + 1);
  }
  local_108 = SUB81(PTR_DAT_047cbeb0 + 0x10,0);
  uStack_107 = (undefined7)((ulong)(PTR_DAT_047cbeb0 + 0x10) >> 8);
  if (local_d0 == 0) {
    (**(code **)(**(long **)puVar2 + 0xd8))(*(long **)puVar2,auStack_f0);
  }
  if ((local_b0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a0);
  }
  if ((local_c8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b8);
  }
  if (((byte)local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  if (((byte)local_90 & 1) == 0) {
    s_No_payload_03c0104f[0] = s_No_payload_03c0104f[0];
    s_No_payload_03c0104f[1] = s_No_payload_03c0104f[1];
    s_No_payload_03c0104f[2] = s_No_payload_03c0104f[2];
    s_No_payload_03c0104f[3] = s_No_payload_03c0104f[3];
    s_No_payload_03c0104f[4] = s_No_payload_03c0104f[4];
    s_No_payload_03c0104f[5] = s_No_payload_03c0104f[5];
    s_No_payload_03c0104f[6] = s_No_payload_03c0104f[6];
    s_No_payload_03c0104f[7] = s_No_payload_03c0104f[7];
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,local_80);
  return;
}


