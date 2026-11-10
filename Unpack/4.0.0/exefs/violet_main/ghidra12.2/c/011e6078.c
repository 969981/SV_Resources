/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e6078; name: FUN_011e6078
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011e6078(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  void *pvVar18;
  undefined1 local_180 [8];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char local_140;
  undefined1 auStack_130 [64];
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  
  local_d0 = *(undefined8 *)(param_1 + 8);
  local_a0 = 0;
  local_d8 = 0;
  local_180[0] = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_140 = '\0';
  local_b8 = 0;
  local_80 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_c8 = 0x666666666666666;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0x555555555555555;
  local_88 = 0;
  uStack_168 = _UNK_03caa988;
  local_170 = _DAT_03caa980;
  uStack_158 = _UNK_03cabe58;
  uStack_160 = _DAT_03cabe50;
  local_178 = param_2;
  local_98 = local_d0;
  FUN_011e68f0(param_1,local_180,param_3 & 1);
  plVar13 = *(long **)(param_1 + 0x40);
  pvVar18 = (void *)plVar13[1];
  if (pvVar18 < (void *)plVar13[2]) {
    lVar17 = plVar13[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_011e6750:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar17;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    memcpy(pvVar18,local_180,0x40);
    *(undefined1 *)((long)pvVar18 + 0x40) = 0;
    if (local_140 != '\0') {
      memcpy((void *)((long)pvVar18 + 0x50),auStack_130,0x40);
      *(undefined1 *)((long)pvVar18 + 0x40) = 1;
    }
    *(undefined8 *)((long)pvVar18 + 0x98) = 0;
    *(undefined8 *)((long)pvVar18 + 0xa0) = 0;
    *(undefined8 *)((long)pvVar18 + 0xa8) = 0;
    *(undefined1 *)((long)pvVar18 + 0x90) = local_f0;
    *(undefined8 *)((long)pvVar18 + 0xc0) = local_c0;
    *(ulong *)((long)pvVar18 + 200) = CONCAT44(uStack_b4,local_b8);
    *(undefined8 *)((long)pvVar18 + 0xb0) = local_d0;
    *(undefined8 *)((long)pvVar18 + 0xb8) = local_c8;
    *(undefined8 *)((long)pvVar18 + 0x98) = local_e8;
    *(undefined8 *)((long)pvVar18 + 0xa0) = local_e0;
    *(undefined8 *)((long)pvVar18 + 0xa8) = local_d8;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    *(undefined8 *)((long)pvVar18 + 0xd0) = 0;
    *(undefined8 *)((long)pvVar18 + 0xd8) = 0;
    *(undefined8 *)((long)pvVar18 + 0xe0) = 0;
    *(undefined8 *)((long)pvVar18 + 0xf8) = local_88;
    *(ulong *)((long)pvVar18 + 0x100) = CONCAT44(uStack_7c,local_80);
    *(undefined8 *)((long)pvVar18 + 0xe8) = local_98;
    *(undefined8 *)((long)pvVar18 + 0xf0) = local_90;
    *(undefined8 *)((long)pvVar18 + 0xd0) = local_b0;
    *(undefined8 *)((long)pvVar18 + 0xd8) = local_a8;
    *(undefined8 *)((long)pvVar18 + 0xe0) = local_a0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    plVar13[1] = (long)pvVar18 + 0x110;
  }
  else {
    uVar12 = plVar13[4];
    lVar17 = (long)pvVar18 - *plVar13 >> 4;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    uVar1 = lVar17 * -0xf0f0f0f0f0f0f0f + 1;
    if (uVar12 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = plVar13[2] - *plVar13 >> 4;
    uVar11 = lVar7 * -0x1e1e1e1e1e1e1e1e;
    if (uVar1 <= uVar11) {
      uVar1 = uVar11;
    }
    if (uVar12 >> 1 <= (ulong)(lVar7 * -0xf0f0f0f0f0f0f0f)) {
      uVar1 = uVar12;
    }
    if (uVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)plVar13[3] + 0x10))((long *)plVar13[3],uVar1 * 0x110,0x10);
      if (lVar7 == 0) {
        (**(code **)(*(long *)plVar13[3] + 0xe8))();
      }
    }
    lVar14 = plVar13[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_011e6750;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar14;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    pvVar18 = (void *)(lVar7 + lVar17 * 0x10);
    memcpy(pvVar18,local_180,0x40);
    puVar15 = (undefined1 *)(lVar7 + lVar17 * 0x10 + 0x40);
    *puVar15 = 0;
    if (local_140 != '\0') {
      memcpy((void *)(lVar7 + lVar17 * 0x10 + 0x50),auStack_130,0x40);
      *puVar15 = 1;
    }
    lVar17 = lVar7 + lVar17 * 0x10;
    *(undefined1 *)(lVar17 + 0x90) = local_f0;
    *(undefined8 *)(lVar17 + 0x98) = 0;
    *(undefined8 *)(lVar17 + 0xa0) = 0;
    *(undefined8 *)(lVar17 + 0xa8) = 0;
    *(undefined8 *)(lVar17 + 0xc0) = local_c0;
    *(ulong *)(lVar17 + 200) = CONCAT44(uStack_b4,local_b8);
    *(undefined8 *)(lVar17 + 0xb0) = local_d0;
    *(undefined8 *)(lVar17 + 0xb8) = local_c8;
    *(undefined8 *)(lVar17 + 0x98) = local_e8;
    *(undefined8 *)(lVar17 + 0xa0) = local_e0;
    *(undefined8 *)(lVar17 + 0xa8) = local_d8;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    *(undefined8 *)(lVar17 + 0xd0) = 0;
    *(undefined8 *)(lVar17 + 0xd8) = 0;
    *(undefined8 *)(lVar17 + 0xe0) = 0;
    *(undefined8 *)(lVar17 + 0xf8) = local_88;
    *(ulong *)(lVar17 + 0x100) = CONCAT44(uStack_7c,local_80);
    *(undefined8 *)(lVar17 + 0xe8) = local_98;
    *(undefined8 *)(lVar17 + 0xf0) = local_90;
    *(undefined8 *)(lVar17 + 0xd0) = local_b0;
    *(undefined8 *)(lVar17 + 0xd8) = local_a8;
    *(undefined8 *)(lVar17 + 0xe0) = local_a0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    lVar17 = *plVar13;
    lVar14 = plVar13[1];
    if (lVar14 == lVar17) {
      pvVar10 = pvVar18;
      lVar14 = lVar17;
    }
    else {
      lVar8 = 0;
      do {
        lVar16 = plVar13[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_011e6750;
          *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar16;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        lVar16 = lVar14 + lVar8;
        memcpy((void *)((long)pvVar18 + lVar8 + -0x110),(void *)(lVar16 + -0x110),0x40);
        *(undefined1 *)((long)pvVar18 + lVar8 + -0xd0) = 0;
        if (*(char *)(lVar16 + -0xd0) != '\0') {
          memcpy((void *)((long)pvVar18 + lVar8 + -0xc0),(void *)(lVar16 + -0xc0),0x40);
          *(undefined1 *)((long)pvVar18 + lVar8 + -0xd0) = 1;
        }
        uVar5 = *(undefined1 *)(lVar16 + -0x80);
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x78) = 0;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x70) = 0;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x68) = 0;
        *(undefined1 *)((long)pvVar18 + lVar8 + -0x80) = uVar5;
        uVar2 = *(undefined8 *)(lVar16 + -0x60);
        uVar3 = *(undefined8 *)(lVar16 + -0x58);
        uVar4 = *(undefined8 *)(lVar16 + -0x48);
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x50) = *(undefined8 *)(lVar16 + -0x50);
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x48) = uVar4;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x60) = uVar2;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x58) = uVar3;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x78) = *(undefined8 *)(lVar16 + -0x78);
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x70) = *(undefined8 *)(lVar16 + -0x70);
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x68) = *(undefined8 *)(lVar16 + -0x68);
        *(undefined8 *)(lVar16 + -0x78) = 0;
        *(undefined8 *)(lVar16 + -0x70) = 0;
        *(undefined8 *)(lVar16 + -0x68) = 0;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x40) = 0;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x38) = 0;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x30) = 0;
        uVar2 = *(undefined8 *)(lVar16 + -0x28);
        uVar3 = *(undefined8 *)(lVar16 + -0x20);
        uVar4 = *(undefined8 *)(lVar16 + -0x10);
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x18) = *(undefined8 *)(lVar16 + -0x18);
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x10) = uVar4;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x28) = uVar2;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x20) = uVar3;
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x40) = *(undefined8 *)(lVar16 + -0x40);
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x38) = *(undefined8 *)(lVar16 + -0x38);
        *(undefined8 *)((long)pvVar18 + lVar8 + -0x30) = *(undefined8 *)(lVar16 + -0x30);
        *(undefined8 *)(lVar16 + -0x40) = 0;
        *(undefined8 *)(lVar16 + -0x38) = 0;
        *(undefined8 *)(lVar16 + -0x30) = 0;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar8 = lVar8 + -0x110;
      } while (lVar17 - lVar14 != lVar8);
      lVar17 = *plVar13;
      pvVar10 = (void *)((long)pvVar18 + lVar8);
      lVar14 = plVar13[1];
    }
    lVar8 = plVar13[2];
    plVar13[2] = lVar7 + uVar1 * 0x110;
    *plVar13 = (long)pvVar10;
    plVar13[1] = (long)pvVar18 + 0x110;
    if (((((lVar14 != lVar17) && (FUN_011e675c(lVar14 + -0x110), lVar14 + -0x110 != lVar17)) &&
         (FUN_011e675c(lVar14 + -0x220), lVar14 + -0x220 != lVar17)) &&
        ((FUN_011e675c(lVar14 + -0x330), lVar14 + -0x330 != lVar17 &&
         (FUN_011e675c(lVar14 + -0x440), lVar14 + -0x440 != lVar17)))) &&
       (FUN_011e675c(lVar14 + -0x550), lVar14 + -0x550 != lVar17)) {
      do {
        FUN_011e675c(lVar14 + -0x660);
        lVar14 = lVar14 + -0x110;
      } while (lVar17 + 0x550 != lVar14);
    }
    if (lVar17 != 0) {
      plVar13 = (long *)plVar13[3];
      uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar12 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar17,lVar8 - lVar17,0x10);
      }
      else {
        FUN_00c48fe8(plVar13,lVar17,lVar8 - lVar17,0x10);
      }
    }
  }
  FUN_011e675c(local_180);
  return;
}


