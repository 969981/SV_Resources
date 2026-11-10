/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01679a98; name: FUN_01679a98
 */


void FUN_01679a98(long param_1,undefined8 param_2,long *param_3)

{
  ulong *puVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  uint *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined8 local_188;
  undefined2 local_180;
  long *local_178;
  long lStack_170;
  long local_168;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  byte local_d0;
  undefined1 uStack_cf;
  byte local_c8 [3];
  char local_c5;
  uint local_bc;
  uint local_b8 [2];
  undefined8 local_b0;
  uint6 local_a8;
  undefined2 uStack_a2;
  long local_a0;
  long **pplStack_98;
  undefined1 local_90;
  long local_88;
  long **pplStack_80;
  byte *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  
  FUN_02933de4(*(undefined8 *)(param_1 + 0x38),*param_3,param_3[1],param_3[4]);
  FUN_01ad40f4(*(undefined8 *)(param_1 + 0x38),*param_3,*(undefined2 *)param_3[1],local_c8,
               (char)param_3[5]);
  local_178 = (long *)*param_3;
  lStack_170 = param_3[1];
  local_168 = param_3[4];
  FUN_0184fa60(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x820),&local_b0,&local_178);
  memset(&local_178,0,0x8f);
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_cf = 0;
  local_180 = 0xffff;
  local_188 = 0xffffffffffffffff;
  if (*(char *)(param_3[4] + 0xa6) != '\0') {
    uVar2 = *(undefined2 *)param_3[1];
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar6;
    piVar7 = (int *)FUN_00cf60cc(uVar6,uVar2);
    if (((*(ushort *)((long)piVar7 - (long)*piVar7) < 0xb) ||
        (uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[5], uVar10 == 0)) ||
       (*(char *)((long)piVar7 + uVar10) != '\t')) {
      local_bc = 0;
      if (local_c5 == '\0') {
        lVar11 = param_3[3];
        lVar14 = param_3[4];
        local_b0 = *param_3;
        lVar16 = param_3[1];
        _local_a8 = param_3[2];
        if ((*(char *)(lVar14 + 0xa7) != '\x01') || (local_c8[0] < 2)) {
          local_90 = (undefined1)param_3[5];
          pplStack_80 = &local_178;
          local_78 = local_c8;
          puStack_70 = &local_188;
          local_68 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x150);
          local_b8[0] = 0;
          local_a0 = lVar16;
          pplStack_98 = (long **)lVar11;
          local_88 = lVar14;
          FUN_01631fb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x900),local_b8,&local_b0);
          local_bc = local_b8[0];
          uVar13 = local_b8[0];
          goto LAB_01679c24;
        }
      }
      else {
        local_b0 = *param_3;
        lVar16 = param_3[1];
        lVar14 = param_3[4];
        _local_a8 = param_3[2];
        lVar11 = param_3[3];
      }
      FUN_02982be4(param_1,&local_bc,&local_188,local_c8,&local_178,local_b0,_local_a8,lVar16,lVar11
                   ,lVar14);
      uVar13 = local_bc;
      goto LAB_01679c24;
    }
    FUN_02982ba4(param_1,*param_3,param_3[1],param_3[3],param_3[4],&local_178);
  }
  uVar13 = 0;
LAB_01679c24:
  local_b0 = *param_3;
  _local_a8 = param_3[1];
  local_a0 = CONCAT44(local_a0._4_4_,uVar13);
  FUN_0186917c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x920),local_b8,&local_b0);
  _local_a8 = param_3[1];
  local_b0 = param_3[2];
  local_a0 = *param_3;
  local_90 = (undefined1)param_3[5];
  pplStack_98 = &local_178;
  FUN_016835ac(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x880),local_b8,&local_b0);
  if (local_188._2_2_ != -1) {
    lVar16 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar10 = (ulong)*(byte *)(lVar16 + 0x938);
    lVar11 = lVar16 + uVar10 * 0xc4;
    lVar14 = param_3[1];
    pcVar12 = (char *)(lVar11 + 0x20);
    if (*pcVar12 == '\0') {
      *pcVar12 = '\x01';
      *(undefined1 *)(lVar16 + uVar10 * 0xc4 + 0x21) = 1;
    }
    *(undefined1 *)(lVar16 + uVar10 * 0xc4 + 0x24) = 1;
    lVar18 = *(long *)(param_1 + 0x28);
    sVar3 = local_188._2_2_;
    if (local_188._2_2_ == -1) {
      sVar3 = FUN_01679490(*(undefined8 *)(lVar18 + 8));
    }
    lVar16 = lVar16 + uVar10 * 0xc4;
    *(short *)(lVar16 + 0x22) = sVar3;
    FUN_01679498(*(undefined8 *)(lVar18 + 0x10),lVar14,lVar11 + 0x18,&local_188);
    *(undefined1 *)(lVar16 + 0x1c) = 0;
    *(undefined1 *)(lVar16 + 0x21) = 1;
  }
  if (uVar13 != 0) {
    uVar4 = (**(code **)(*(long *)*param_3 + 0x98))();
    puVar8 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8) +
                                   0x50),uVar4);
    if (puVar8 == (uint *)0x0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *puVar8;
      if (4 < (int)uVar15) {
        uVar15 = 0;
      }
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) == 0) {
LAB_01679d4c:
      lVar11 = *(long *)(param_1 + 0x20);
      puVar1 = (ulong *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0x10) + 0x210) +
                         (ulong)uVar15 * 8 + 0x80);
      if (((int)uVar15 < 5) && (uVar10 = *puVar1, uVar10 < 3)) {
        *puVar1 = uVar10 + 1;
      }
      FUN_0129aff0(*(undefined8 *)(lVar11 + 0x18),0x2e,2,uVar15 & 0xff);
    }
    else {
      uVar10 = (**(code **)(*(long *)*param_3 + 0x4d0))((long *)*param_3,0x1c);
      if ((uVar10 & 1) == 0) {
        uVar10 = (ulong)local_d8._6_1_;
        if (local_d8._6_1_ != 0) {
          lVar11 = *param_3;
          uVar17 = 0;
          do {
            if ((uVar17 < uVar10) && ((&local_178)[uVar17] != (long *)0x0)) {
              uVar10 = FUN_018d5d98(param_1,lVar11);
              if ((uVar10 & 1) == 0) goto LAB_01679d4c;
              uVar10 = local_d8 >> 0x30 & 0xff;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar10);
        }
      }
    }
    if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (local_d8._6_1_ != '\0')) {
      FUN_016660d0(param_1,&local_178,uVar13);
    }
    local_d0 = 0;
    if (local_d8._6_1_ != '\0') {
      local_d0 = 1;
      plVar9 = local_178;
      while (plVar9 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar9 + 0x98))();
        lVar11 = _local_a8;
        local_a8._0_4_ = (int)((ulong)_local_a8 >> 0x18) << 0x18;
        uStack_a2 = SUB82(lVar11,6);
        local_a8 = (uint6)(uint)local_a8;
        local_b0 = CONCAT44(uVar4,2);
        local_b8[0] = local_b8[0] & 0xffffff00;
        FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),local_b8,&local_b0);
        uVar10 = (ulong)local_d0;
        if (local_d8._6_1_ <= local_d0) break;
        local_d0 = local_d0 + 1;
        plVar9 = (&local_178)[uVar10];
      }
    }
    lVar11 = _local_a8;
    local_a8._0_4_ = (int)((ulong)_local_a8 >> 0x18) << 0x18;
    uStack_a2 = SUB82(lVar11,6);
    local_a8 = (uint6)(uint)local_a8;
    local_b0 = 3;
    local_b8[0] = local_b8[0] & 0xffffff00;
    FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),local_b8,&local_b0);
    uVar6 = _local_a8;
    local_a8._0_4_ = (int)((ulong)_local_a8 >> 0x18) << 0x18;
    uStack_a2 = SUB82(uVar6,6);
    local_a8 = (uint6)(uint)local_a8;
    local_b0 = 0x19;
    local_b8[0] = local_b8[0] & 0xffffff00;
    FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),local_b8,&local_b0);
    lVar11 = *(long *)(param_1 + 8);
    lVar14 = *(long *)(param_1 + 0x10);
    uVar4 = (**(code **)(*(long *)*param_3 + 0x98))();
    puVar8 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x290) + 8) + 0x50),
                                  uVar4);
    if (puVar8 == (uint *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *puVar8;
      if (4 < (int)uVar13) {
        uVar13 = 0;
      }
    }
    if ((uVar13 == *(byte *)(lVar11 + 0x95)) && (local_d8._6_1_ != '\0')) {
      local_d0 = 1;
      plVar9 = local_178;
      while (plVar9 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar9 + 0x98))();
        uVar6 = _local_a8;
        local_a8._0_4_ = (int)((ulong)_local_a8 >> 0x18) << 0x18;
        uStack_a2 = SUB82(uVar6,6);
        local_a8 = (uint6)(uint)local_a8;
        local_b0 = CONCAT44(uVar4,0x1e);
        local_b8[0] = local_b8[0] & 0xffffff00;
        FUN_0131bdb0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1d40),local_b8,&local_b0);
        uVar10 = (ulong)local_d0;
        if (local_d8._6_1_ <= local_d0) {
          return;
        }
        local_d0 = local_d0 + 1;
        plVar9 = (&local_178)[uVar10];
      }
    }
  }
  return;
}


