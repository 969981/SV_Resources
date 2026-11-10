/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ad5520; name: FUN_01ad5520
 */


void FUN_01ad5520(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  undefined4 *puVar26;
  void *pvVar27;
  ulong uVar28;
  uint uVar29;
  ushort uVar30;
  ulong *puVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  undefined4 **ppuVar36;
  long *plVar37;
  undefined8 local_a78;
  undefined1 local_a44 [4];
  undefined1 *local_a40;
  undefined1 *local_a38;
  undefined1 *local_a30;
  ulong local_a28;
  ulong local_a20;
  undefined8 uStack_a18;
  undefined1 *local_a10;
  undefined1 *local_a08;
  undefined1 *puStack_a00;
  undefined4 *local_9f8;
  undefined4 *local_9f0;
  undefined4 *local_9e8;
  undefined4 *local_9e0;
  undefined4 *local_9d8;
  undefined4 *local_9d0;
  undefined4 *local_9c8;
  undefined4 *local_9c0;
  undefined4 *local_9b8;
  undefined1 *local_9b0;
  undefined1 *local_9a8;
  undefined1 *puStack_9a0;
  undefined1 *local_998;
  undefined1 *local_990;
  undefined1 *local_988;
  undefined4 *local_980;
  undefined4 *local_978;
  undefined4 *puStack_970;
  undefined1 *local_968;
  undefined1 *local_960;
  undefined1 *puStack_958;
  undefined4 *local_950;
  undefined4 *local_948;
  undefined4 *puStack_940;
  undefined4 *local_938;
  long *local_930;
  undefined4 *local_928;
  undefined8 uStack_920;
  undefined4 *local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  long *local_d8;
  char local_d0;
  ulong local_c8;
  long local_c0;
  ulong local_b8;
  undefined8 *local_b0;
  ulong *local_a8;
  ulong *local_a0;
  undefined8 local_98;
  long local_90;
  undefined2 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  uVar32 = *(undefined8 *)(param_2 + 8);
  lVar18 = tpidr_el0;
  if (*(long *)(lVar18 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar18 + 0x30) = DAT_04859430;
  }
  local_78 = *(undefined8 *)(lVar18 + 0x30);
  local_70 = *(undefined8 *)(lVar18 + 0x38);
  *(undefined8 *)(lVar18 + 0x30) = uVar32;
  *(undefined2 *)(lVar18 + 0x38) = 1;
  local_d8 = (long *)0x0;
  local_d0 = '\0';
  local_c8 = 0x5000;
  local_c0 = 8;
  local_a0 = (ulong *)0x0;
  local_a8 = (ulong *)0x0;
  local_b0 = (undefined8 *)0x0;
  local_b8 = 0;
  local_90 = 1;
  local_88 = 0x100;
  local_80 = 0;
  local_98 = 0x1000000000000;
  if (*(char *)(param_2 + 0x3c) != '\0') {
    local_b8 = 0x5000;
    local_b0 = operator_new__(0x5000);
    *(undefined1 *)((long)local_b0 + 0x4fff) = 1;
    local_a8 = (ulong *)((long)local_b0 + 0x4fff);
    local_a0 = local_b0 + 1;
    *local_b0 = 0x400000001;
    local_98 = CONCAT26(local_98._6_2_,0x400000001);
  }
  FUN_0187a314(&local_d8,6,*(undefined2 *)(param_2 + 0x3e),0);
  cVar2 = *(char *)(param_2 + 0x40);
  if ((char)local_88 != '\0' || cVar2 != '\0') {
    if (local_90 == 0) {
      local_90 = 1;
    }
    if (local_a8 == local_a0) {
      uVar24 = (local_b8 - (long)local_a8) + (long)local_b0;
      uVar35 = (long)local_a8 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
    }
    puVar31 = (ulong *)((long)local_a8 + -1);
    *(char *)((long)local_a8 + -1) = cVar2;
    uVar24 = (local_b8 - (long)puVar31) + (long)local_b0;
    local_a8 = puVar31;
    if ((ulong)((long)puVar31 - (long)local_a0) < 8) {
      uVar35 = (long)local_a0 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 9) {
        uVar28 = 8;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
    }
    *local_a0 = uVar24 & 0xffffffff | 0x800000000;
    local_a0 = local_a0 + 1;
    uVar30 = local_98._4_2_;
    if (local_98._4_2_ < 9) {
      uVar30 = 8;
    }
    local_98._0_6_ = CONCAT24(uVar30,(int)local_98 + 1);
  }
  cVar2 = *(char *)(param_2 + 0x41);
  cVar3 = (char)local_88;
  if (cVar2 != '\0' || (char)local_88 != '\0') {
    if (local_90 == 0) {
      local_90 = 1;
    }
    if (local_a8 == local_a0) {
      uVar24 = (local_b8 - (long)local_a8) + (long)local_b0;
      uVar35 = (long)local_a8 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
    }
    puVar31 = (ulong *)((long)local_a8 + -1);
    *(char *)((long)local_a8 + -1) = cVar2;
    uVar24 = (local_b8 - (long)puVar31) + (long)local_b0;
    local_a8 = puVar31;
    if ((ulong)((long)puVar31 - (long)local_a0) < 8) {
      uVar35 = (long)local_a0 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 9) {
        uVar28 = 8;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
    }
    *local_a0 = uVar24 & 0xffffffff | 0xa00000000;
    local_a0 = local_a0 + 1;
    uVar30 = local_98._4_2_;
    if (local_98._4_2_ < 0xb) {
      uVar30 = 10;
    }
    local_98._0_6_ = CONCAT24(uVar30,(int)local_98 + 1);
    cVar3 = (char)local_88;
  }
  cVar2 = *(char *)(param_2 + 0x42);
  if (cVar2 != '\0' || cVar3 != '\0') {
    if (local_90 == 0) {
      local_90 = 1;
    }
    if (local_a8 == local_a0) {
      uVar24 = (local_b8 - (long)local_a8) + (long)local_b0;
      uVar35 = (long)local_a8 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
    }
    puVar31 = (ulong *)((long)local_a8 + -1);
    *(char *)((long)local_a8 + -1) = cVar2;
    uVar24 = (local_b8 - (long)puVar31) + (long)local_b0;
    local_a8 = puVar31;
    if ((ulong)((long)puVar31 - (long)local_a0) < 8) {
      uVar35 = (long)local_a0 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 9) {
        uVar28 = 8;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
    }
    *local_a0 = uVar24 & 0xffffffff | 0xc00000000;
    local_a0 = local_a0 + 1;
    uVar30 = local_98._4_2_;
    if (local_98._4_2_ < 0xd) {
      uVar30 = 0xc;
    }
    local_98._0_6_ = CONCAT24(uVar30,(int)local_98 + 1);
    cVar3 = (char)local_88;
  }
  cVar2 = *(char *)(param_2 + 0x43);
  if (cVar2 != '\0' || cVar3 != '\0') {
    if (local_90 == 0) {
      local_90 = 1;
    }
    if (local_a8 == local_a0) {
      uVar24 = (local_b8 - (long)local_a8) + (long)local_b0;
      uVar35 = (long)local_a8 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
    }
    puVar31 = (ulong *)((long)local_a8 + -1);
    *(char *)((long)local_a8 + -1) = cVar2;
    uVar24 = (local_b8 - (long)puVar31) + (long)local_b0;
    local_a8 = puVar31;
    if ((ulong)((long)puVar31 - (long)local_a0) < 8) {
      uVar35 = (long)local_a0 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 9) {
        uVar28 = 8;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
    }
    *local_a0 = uVar24 & 0xffffffff | 0xe00000000;
    local_a0 = local_a0 + 1;
    uVar30 = local_98._4_2_;
    if (local_98._4_2_ < 0xf) {
      uVar30 = 0xe;
    }
    local_98._0_6_ = CONCAT24(uVar30,(int)local_98 + 1);
    cVar3 = (char)local_88;
  }
  cVar2 = *(char *)(param_2 + 0x44);
  if (cVar2 != '\0' || cVar3 != '\0') {
    if (local_90 == 0) {
      local_90 = 1;
    }
    if (local_a8 == local_a0) {
      uVar24 = (local_b8 - (long)local_a8) + (long)local_b0;
      uVar35 = (long)local_a8 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
    }
    puVar31 = (ulong *)((long)local_a8 + -1);
    *(char *)((long)local_a8 + -1) = cVar2;
    uVar24 = (local_b8 - (long)puVar31) + (long)local_b0;
    local_a8 = puVar31;
    if ((ulong)((long)puVar31 - (long)local_a0) < 8) {
      uVar35 = (long)local_a0 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 9) {
        uVar28 = 8;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
    }
    *local_a0 = uVar24 & 0xffffffff | 0x1000000000;
    local_a0 = local_a0 + 1;
    uVar30 = local_98._4_2_;
    if (local_98._4_2_ < 0x11) {
      uVar30 = 0x10;
    }
    local_98._0_6_ = CONCAT24(uVar30,(int)local_98 + 1);
    cVar3 = (char)local_88;
  }
  cVar2 = *(char *)(param_2 + 0x45);
  if (cVar2 != '\0' || cVar3 != '\0') {
    if (local_90 == 0) {
      local_90 = 1;
    }
    if (local_a8 == local_a0) {
      uVar24 = (local_b8 - (long)local_a8) + (long)local_b0;
      uVar35 = (long)local_a8 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
    }
    puVar31 = (ulong *)((long)local_a8 + -1);
    *(char *)((long)local_a8 + -1) = cVar2;
    uVar24 = (local_b8 - (long)puVar31) + (long)local_b0;
    local_a8 = puVar31;
    if ((ulong)((long)puVar31 - (long)local_a0) < 8) {
      uVar35 = (long)local_a0 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 9) {
        uVar28 = 8;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
    }
    *local_a0 = uVar24 & 0xffffffff | 0x1200000000;
    local_a0 = local_a0 + 1;
    uVar30 = local_98._4_2_;
    if (local_98._4_2_ < 0x13) {
      uVar30 = 0x12;
    }
    local_98._0_6_ = CONCAT24(uVar30,(int)local_98 + 1);
    cVar3 = (char)local_88;
  }
  cVar2 = *(char *)(param_2 + 0x46);
  if (cVar2 != '\0' || cVar3 != '\0') {
    if (local_90 == 0) {
      local_90 = 1;
    }
    if (local_a8 == local_a0) {
      uVar24 = (local_b8 - (long)local_a8) + (long)local_b0;
      uVar35 = (long)local_a8 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
    }
    puVar31 = (ulong *)((long)local_a8 + -1);
    *(char *)((long)local_a8 + -1) = cVar2;
    uVar24 = (local_b8 - (long)puVar31) + (long)local_b0;
    local_a8 = puVar31;
    if ((ulong)((long)puVar31 - (long)local_a0) < 8) {
      uVar35 = (long)local_a0 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 9) {
        uVar28 = 8;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
    }
    *local_a0 = uVar24 & 0xffffffff | 0x1400000000;
    local_a0 = local_a0 + 1;
    uVar30 = local_98._4_2_;
    if (local_98._4_2_ < 0x15) {
      uVar30 = 0x14;
    }
    local_98._0_6_ = CONCAT24(uVar30,(int)local_98 + 1);
  }
  FUN_0187a314(&local_d8,0x16,*(undefined2 *)(param_2 + 0x48),0);
  FUN_01a04714(&local_d8,0x18,*(undefined1 *)(param_2 + 0x4a),0);
  cVar2 = *(char *)(param_2 + 0x4b);
  if ((char)local_88 != '\0' || cVar2 != '\0') {
    if (local_90 == 0) {
      local_90 = 1;
    }
    if (local_a8 == local_a0) {
      uVar24 = (local_b8 - (long)local_a8) + (long)local_b0;
      uVar35 = (long)local_a8 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
    }
    puVar31 = (ulong *)((long)local_a8 + -1);
    *(char *)((long)local_a8 + -1) = cVar2;
    uVar24 = (local_b8 - (long)puVar31) + (long)local_b0;
    local_a8 = puVar31;
    if ((ulong)((long)puVar31 - (long)local_a0) < 8) {
      uVar35 = (long)local_a0 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 9) {
        uVar28 = 8;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
    }
    *local_a0 = uVar24 & 0xffffffff | 0x1a00000000;
    local_a0 = local_a0 + 1;
    uVar30 = local_98._4_2_;
    if (local_98._4_2_ < 0x1b) {
      uVar30 = 0x1a;
    }
    local_98._0_6_ = CONCAT24(uVar30,(int)local_98 + 1);
  }
  FUN_015c8088(*(undefined4 *)(param_2 + 0x4c),0,&local_d8,0x1c);
  if (*(int *)(param_2 + 0x50) == 0) {
    cVar2 = '\0';
    if ((char)local_88 != '\0') goto LAB_01ad5b14;
  }
  else {
LAB_01ad5b14:
    uVar24 = FUN_015713f8(&local_d8);
    if ((ulong)((long)local_a8 - (long)local_a0) < 8) {
      uVar28 = (local_b8 - (long)local_a8) + (long)local_b0;
      uVar34 = (long)local_a0 - (long)local_b0;
      uVar35 = local_c8;
      if (local_b8 != 0) {
        uVar35 = local_b8 >> 1;
      }
      if (uVar35 < 9) {
        uVar35 = 8;
      }
      local_b8 = (local_b8 + local_c0 + uVar35) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar28 & 0xffffffff)));
      local_a0 = (ulong *)((long)local_b0 + (uVar34 & 0xffffffff));
    }
    *local_a0 = uVar24 & 0xffffffff | 0x1e00000000;
    local_a0 = local_a0 + 1;
    uVar30 = local_98._4_2_;
    if (local_98._4_2_ < 0x1f) {
      uVar30 = 0x1e;
    }
    local_98._0_6_ = CONCAT24(uVar30,(int)local_98 + 1);
    cVar2 = (char)local_88;
  }
  cVar3 = *(char *)(param_2 + 0x54);
  if (cVar3 != '\0' || cVar2 != '\0') {
    if (local_90 == 0) {
      local_90 = 1;
    }
    if (local_a8 == local_a0) {
      uVar24 = (local_b8 - (long)local_a8) + (long)local_b0;
      uVar35 = (long)local_a8 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 2) {
        uVar28 = 1;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
    }
    puVar31 = (ulong *)((long)local_a8 + -1);
    *(char *)((long)local_a8 + -1) = cVar3;
    uVar24 = (local_b8 - (long)puVar31) + (long)local_b0;
    local_a8 = puVar31;
    if ((ulong)((long)puVar31 - (long)local_a0) < 8) {
      uVar35 = (long)local_a0 - (long)local_b0;
      uVar28 = local_c8;
      if (local_b8 != 0) {
        uVar28 = local_b8 >> 1;
      }
      if (uVar28 < 9) {
        uVar28 = 8;
      }
      local_b8 = (local_b8 + local_c0 + uVar28) - 1 & -local_c0;
      if (local_b0 == (undefined8 *)0x0) {
        if (local_d8 == (long *)0x0) {
          local_b0 = operator_new__(local_b8);
        }
        else {
          local_b0 = (undefined8 *)(**(code **)(*local_d8 + 0x10))(local_d8,local_b8);
        }
      }
      else {
        local_b0 = (undefined8 *)FUN_01572030();
      }
      local_a0 = (ulong *)((long)local_b0 + (uVar35 & 0xffffffff));
      local_a8 = (ulong *)((long)local_b0 + (local_b8 - (uVar24 & 0xffffffff)));
    }
    *local_a0 = uVar24 & 0xffffffff | 0x2000000000;
    local_a0 = local_a0 + 1;
    uVar30 = local_98._4_2_;
    if (local_98._4_2_ < 0x21) {
      uVar30 = 0x20;
    }
    local_98._0_6_ = CONCAT24(uVar30,(int)local_98 + 1);
  }
  uVar20 = FUN_01571a80(&local_d8,0);
  uVar4 = *(undefined1 *)(param_2 + 0x58);
  uVar5 = *(undefined1 *)(param_2 + 0x59);
  uVar6 = *(undefined1 *)(param_2 + 0x5a);
  uVar7 = *(undefined1 *)(param_2 + 0x5b);
  uVar8 = *(undefined1 *)(param_2 + 0x5c);
  uVar9 = *(undefined1 *)(param_2 + 0x5d);
  uVar10 = *(undefined1 *)(param_2 + 0x5e);
  uVar11 = *(undefined1 *)(param_2 + 0x5f);
  uVar12 = *(undefined1 *)(param_2 + 0x60);
  uVar13 = *(undefined1 *)(param_2 + 0x61);
  uVar14 = *(undefined1 *)(param_2 + 0x62);
  uVar15 = *(undefined1 *)(param_2 + 99);
  uVar22 = *(undefined4 *)(param_2 + 0x6c);
  uVar16 = *(undefined1 *)(param_2 + 0x71);
  uVar17 = *(undefined1 *)(param_2 + 0x70);
  uVar21 = FUN_0298f294(&local_d8,param_2 + 0x72);
  uVar22 = FUN_01a94830(&local_d8,uVar22,uVar17,uVar16,uVar21);
  uVar22 = FUN_01acc8f0(&local_d8,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                        uVar14,uVar15,uVar22);
  lVar33 = 0;
  local_e0 = (undefined4 *)0x0;
  local_e8 = (undefined4 *)0x0;
  local_f0 = (undefined4 *)0x0;
  do {
    lVar25 = *(long *)(param_2 + lVar33 * 8 + 0xa0);
    if (lVar25 == 0) {
      uVar21 = FUN_01a6d244(&local_d8,&DAT_0486a1d5,0);
      uVar21 = FUN_01914900(&local_d8,uVar21);
      local_938 = (undefined4 *)CONCAT44(local_938._4_4_,uVar21);
      if (local_e8 == local_e0) {
        FUN_0192d960(&local_f0,&local_938);
      }
      else {
        *local_e8 = uVar21;
        local_e8 = local_e8 + 1;
      }
    }
    else {
      uVar24 = FUN_02e3ef80(lVar25,&local_938);
      uVar24 = uVar24 >> 2;
      local_950 = (undefined4 *)0x0;
      local_948 = (undefined4 *)0x0;
      puStack_940 = (undefined4 *)0x0;
      if (uVar24 != 0) {
        ppuVar36 = &local_938;
        while( true ) {
          uVar24 = uVar24 - 1;
          if (local_948 == puStack_940) {
            FUN_015e763c(&local_950,ppuVar36);
          }
          else {
            *local_948 = *(undefined4 *)ppuVar36;
            local_948 = local_948 + 1;
          }
          if (uVar24 == 0) break;
          ppuVar36 = (undefined4 **)((long)ppuVar36 + 4);
        }
      }
      puVar26 = (undefined4 *)&DAT_0486a1d5;
      if ((long)local_948 - (long)local_950 != 0) {
        puVar26 = local_950;
      }
      uVar21 = FUN_01a6d244(&local_d8,puVar26,(long)local_948 - (long)local_950 >> 2);
      uVar21 = FUN_01914900(&local_d8,uVar21);
      local_968 = (undefined1 *)CONCAT44(local_968._4_4_,uVar21);
      if (local_e8 == local_e0) {
        FUN_0192d960(&local_f0,&local_968);
      }
      else {
        *local_e8 = uVar21;
        local_e8 = local_e8 + 1;
      }
      puVar26 = local_950;
      if (local_950 != (undefined4 *)0x0) {
        local_948 = local_950;
        plVar37 = *(long **)(lVar18 + 0x30);
        if (plVar37 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar37 = DAT_04859430;
          *(long **)(lVar18 + 0x30) = DAT_04859430;
        }
        uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
        if (((uVar24 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
          (**(code **)(*plVar37 + 0x18))(plVar37,puVar26,0,8);
        }
        else {
          FUN_00c48fe8(plVar37,puVar26,0,8);
        }
      }
    }
    lVar33 = lVar33 + 1;
  } while (lVar33 != 5);
  local_948 = (undefined4 *)0x0;
  puStack_940 = (undefined4 *)0x0;
  local_950 = (undefined4 *)0x0;
  uVar21 = FUN_018794f0(param_2 + 200,&local_d8,*(long *)(param_2 + 0xa0) != 0);
  local_938._0_4_ = uVar21;
  if (local_948 == puStack_940) {
    FUN_0192db4c(&local_950,&local_938);
  }
  else {
    *local_948 = uVar21;
    local_948 = local_948 + 1;
  }
  local_938._0_4_ = FUN_018794f0(param_2 + 0x188,&local_d8,*(long *)(param_2 + 0xa8) != 0);
  if (local_948 == puStack_940) {
    FUN_0192db4c(&local_950,&local_938);
  }
  else {
    *local_948 = local_938._0_4_;
    local_948 = local_948 + 1;
  }
  local_938._0_4_ = FUN_018794f0(param_2 + 0x248,&local_d8,*(long *)(param_2 + 0xb0) != 0);
  if (local_948 == puStack_940) {
    FUN_0192db4c(&local_950,&local_938);
  }
  else {
    *local_948 = local_938._0_4_;
    local_948 = local_948 + 1;
  }
  local_938._0_4_ = FUN_018794f0(param_2 + 0x308,&local_d8,*(long *)(param_2 + 0xb8) != 0);
  if (local_948 == puStack_940) {
    FUN_0192db4c(&local_950,&local_938);
  }
  else {
    *local_948 = local_938._0_4_;
    local_948 = local_948 + 1;
  }
  uVar21 = FUN_018794f0(param_2 + 0x3c8,&local_d8,*(long *)(param_2 + 0xc0) != 0);
  local_938 = (undefined4 *)CONCAT44(local_938._4_4_,uVar21);
  if (local_948 == puStack_940) {
    FUN_0192db4c(&local_950,&local_938);
  }
  else {
    *local_948 = uVar21;
    local_948 = local_948 + 1;
  }
  uVar24 = 0;
  local_960 = (undefined1 *)0x0;
  puStack_958 = (undefined1 *)0x0;
  local_968 = (undefined1 *)0x0;
  do {
    if ((*(ulong *)(param_2 + 0x498) >> (uVar24 & 0x3f) & 1) != 0) {
      local_938 = (undefined4 *)CONCAT71(local_938._1_7_,(char)uVar24);
      if (local_960 < puStack_958) {
        *local_960 = (char)uVar24;
        local_960 = local_960 + 1;
      }
      else {
        FUN_018a2a58(&local_968,&local_938);
      }
    }
    uVar24 = uVar24 + 1;
  } while (uVar24 != 0x17);
  lVar33 = 0;
  local_980 = (undefined4 *)0x0;
  local_978 = (undefined4 *)0x0;
  puStack_970 = (undefined4 *)0x0;
  while( true ) {
    uVar21 = *(undefined4 *)(param_2 + 0x4c4 + lVar33);
    local_938 = (undefined4 *)CONCAT44(local_938._4_4_,uVar21);
    if (local_978 < puStack_970) {
      *local_978 = uVar21;
      local_978 = local_978 + 1;
    }
    else {
      FUN_0192dd38(&local_980,&local_938);
    }
    if (lVar33 == 0x10) break;
    lVar33 = lVar33 + 4;
  }
  local_990 = (undefined1 *)0x0;
  local_988 = (undefined1 *)0x0;
  local_998 = (undefined1 *)0x0;
  local_938._0_1_ = *(undefined1 *)(param_2 + 0x4d8);
  FUN_018a2a58(&local_998,&local_938);
  local_938._0_1_ = *(undefined1 *)(param_2 + 0x4d9);
  if (local_990 < local_988) {
    *local_990 = local_938._0_1_;
    local_990 = local_990 + 1;
  }
  else {
    FUN_018a2a58(&local_998,&local_938);
  }
  local_938._0_1_ = *(undefined1 *)(param_2 + 0x4da);
  if (local_990 < local_988) {
    *local_990 = local_938._0_1_;
    local_990 = local_990 + 1;
  }
  else {
    FUN_018a2a58(&local_998,&local_938);
  }
  local_938._0_1_ = *(undefined1 *)(param_2 + 0x4db);
  if (local_990 < local_988) {
    *local_990 = local_938._0_1_;
    local_990 = local_990 + 1;
  }
  else {
    FUN_018a2a58(&local_998,&local_938);
  }
  local_938 = (undefined4 *)CONCAT71(local_938._1_7_,*(undefined1 *)(param_2 + 0x4dc));
  if (local_990 < local_988) {
    *local_990 = *(undefined1 *)(param_2 + 0x4dc);
    local_990 = local_990 + 1;
  }
  else {
    FUN_018a2a58(&local_998,&local_938);
  }
  local_9c0 = (undefined4 *)0x0;
  lVar33 = 0;
  local_9a8 = (undefined1 *)0x0;
  puStack_9a0 = (undefined1 *)0x0;
  local_9b8 = (undefined4 *)0x0;
  local_9b0 = (undefined1 *)0x0;
  local_9c8 = (undefined4 *)0x0;
  while( true ) {
    uVar4 = *(undefined1 *)(param_2 + 0x4e4 + lVar33 + -7);
    local_938 = (undefined4 *)CONCAT71(local_938._1_7_,uVar4);
    if (local_9a8 < puStack_9a0) {
      *local_9a8 = uVar4;
      local_9a8 = local_9a8 + 1;
    }
    else {
      FUN_018a2a58(&local_9b0,&local_938);
    }
    uVar21 = *(undefined4 *)(param_2 + 0x4e4 + lVar33 * 4);
    local_938 = (undefined4 *)CONCAT44(local_938._4_4_,uVar21);
    if (local_9c0 < local_9b8) {
      *local_9c0 = uVar21;
      local_9c0 = local_9c0 + 1;
    }
    else {
      FUN_0192df24(&local_9c8,&local_938);
    }
    if (lVar33 == 4) break;
    lVar33 = lVar33 + 1;
  }
  local_9d0 = (undefined4 *)0x0;
  local_9d8 = (undefined4 *)0x0;
  local_9e0 = (undefined4 *)0x0;
  local_938._0_4_ = *(undefined4 *)(param_2 + 0x6dc);
  FUN_0298f4ec(&local_9e0,&local_938);
  local_938._0_4_ = *(undefined4 *)(param_2 + 0x6e0);
  if (local_9d8 < local_9d0) {
    *local_9d8 = local_938._0_4_;
    local_9d8 = local_9d8 + 1;
  }
  else {
    FUN_0298f4ec(&local_9e0,&local_938);
  }
  local_938._0_4_ = *(undefined4 *)(param_2 + 0x6e4);
  if (local_9d8 < local_9d0) {
    *local_9d8 = local_938._0_4_;
    local_9d8 = local_9d8 + 1;
  }
  else {
    FUN_0298f4ec(&local_9e0,&local_938);
  }
  local_938._0_4_ = *(undefined4 *)(param_2 + 0x6e8);
  if (local_9d8 < local_9d0) {
    *local_9d8 = local_938._0_4_;
    local_9d8 = local_9d8 + 1;
  }
  else {
    FUN_0298f4ec(&local_9e0,&local_938);
  }
  local_938._0_4_ = *(undefined4 *)(param_2 + 0x6ec);
  if (local_9d8 < local_9d0) {
    *local_9d8 = local_938._0_4_;
    local_9d8 = local_9d8 + 1;
  }
  else {
    FUN_0298f4ec(&local_9e0,&local_938);
  }
  local_9e8 = (undefined4 *)0x0;
  local_9f8 = (undefined4 *)0x0;
  local_9f0 = (undefined4 *)0x0;
  local_938._0_4_ = *(undefined4 *)(param_2 + 0x6f0);
  FUN_0298f4ec(&local_9f8,&local_938);
  local_938._0_4_ = *(undefined4 *)(param_2 + 0x6f4);
  if (local_9f0 < local_9e8) {
    *local_9f0 = local_938._0_4_;
    local_9f0 = local_9f0 + 1;
  }
  else {
    FUN_0298f4ec(&local_9f8,&local_938);
  }
  local_938._0_4_ = *(undefined4 *)(param_2 + 0x6f8);
  if (local_9f0 < local_9e8) {
    *local_9f0 = local_938._0_4_;
    local_9f0 = local_9f0 + 1;
  }
  else {
    FUN_0298f4ec(&local_9f8,&local_938);
  }
  local_938._0_4_ = *(undefined4 *)(param_2 + 0x6fc);
  if (local_9f0 < local_9e8) {
    *local_9f0 = local_938._0_4_;
    local_9f0 = local_9f0 + 1;
  }
  else {
    FUN_0298f4ec(&local_9f8,&local_938);
  }
  local_938 = (undefined4 *)CONCAT44(local_938._4_4_,*(undefined4 *)(param_2 + 0x700));
  if (local_9f0 < local_9e8) {
    *local_9f0 = *(undefined4 *)(param_2 + 0x700);
    local_9f0 = local_9f0 + 1;
  }
  else {
    FUN_0298f4ec(&local_9f8,&local_938);
  }
  local_a08 = (undefined1 *)0x0;
  puStack_a00 = (undefined1 *)0x0;
  local_a10 = (undefined1 *)0x0;
  uVar29 = (uint)*(undefined8 *)(param_2 + 0x498);
  if ((uVar29 >> 10 & 1) != 0) {
    FUN_0298fbc8(&local_938,param_2 + 0x510,&local_a28,*(undefined8 *)(param_2 + 8));
    uVar24 = local_a28 & 0xffffffff;
    if ((int)local_a28 != 0) {
      puVar26 = local_938;
      do {
        if (local_a08 == puStack_a00) {
          FUN_0298fa44(&local_a10,puVar26);
        }
        else {
          *local_a08 = *(undefined1 *)puVar26;
          local_a08 = local_a08 + 1;
        }
        uVar24 = uVar24 - 1;
        puVar26 = (undefined4 *)((long)puVar26 + 1);
      } while (uVar24 != 0);
    }
    FUN_0298f678(&local_938);
    uVar29 = (uint)*(undefined8 *)(param_2 + 0x498);
  }
  local_a20 = 0;
  uStack_a18 = 0;
  local_a30 = (undefined1 *)0x0;
  local_a28 = 0;
  local_a40 = (undefined1 *)0x0;
  local_a38 = (undefined1 *)0x0;
  if ((uVar29 >> 0xb & 1) != 0) {
    plVar37 = *(long **)(param_2 + 8);
    puVar26 = (undefined4 *)(**(code **)(*plVar37 + 0x10))(plVar37,6,1);
    if (puVar26 == (undefined4 *)0x0) {
      local_928 = (undefined4 *)0x0;
      uStack_920 = 0;
      local_938 = (undefined4 *)0x0;
      local_930 = (long *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04865a38), iVar23 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar33 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar33 + 0x80)) goto LAB_01ad8188;
      *(long **)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = plVar37;
      *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
      *(undefined2 *)(puVar26 + 1) = 0;
      *puVar26 = 0;
      local_928 = (undefined4 *)0x6;
      uStack_920 = 1;
      *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
      local_938 = puVar26;
      local_930 = plVar37;
    }
    uVar24 = (**(code **)(*(long *)(param_2 + 0x500) + 0x10))(param_2 + 0x500);
    memcpy(puVar26,(void *)(param_2 + 0x508),uVar24 & 0xffffffff);
    local_a44[0] = *(undefined1 *)puVar26;
    if (local_a38 < local_a30) {
      *local_a38 = local_a44[0];
      local_a38 = local_a38 + 1;
    }
    else {
      FUN_018a2a58(&local_a40,local_a44);
    }
    local_a44[0] = *(undefined1 *)((long)puVar26 + 1);
    if (local_a38 < local_a30) {
      *local_a38 = local_a44[0];
      local_a38 = local_a38 + 1;
    }
    else {
      FUN_018a2a58(&local_a40,local_a44);
    }
    local_a44[0] = *(undefined1 *)((long)puVar26 + 2);
    if (local_a38 < local_a30) {
      *local_a38 = local_a44[0];
      local_a38 = local_a38 + 1;
    }
    else {
      FUN_018a2a58(&local_a40,local_a44);
    }
    local_a44[0] = *(undefined1 *)((long)puVar26 + 3);
    if (local_a38 < local_a30) {
      *local_a38 = local_a44[0];
      local_a38 = local_a38 + 1;
    }
    else {
      FUN_018a2a58(&local_a40,local_a44);
    }
    local_a44[0] = *(undefined1 *)(puVar26 + 1);
    if (local_a38 < local_a30) {
      *local_a38 = local_a44[0];
      local_a38 = local_a38 + 1;
    }
    else {
      FUN_018a2a58(&local_a40,local_a44);
    }
    local_a44[0] = *(undefined1 *)((long)puVar26 + 5);
    if (local_a38 < local_a30) {
      *local_a38 = local_a44[0];
      local_a38 = local_a38 + 1;
    }
    else {
      FUN_018a2a58(&local_a40,local_a44);
    }
    FUN_0298ecb8(&local_938);
  }
  lVar33 = *(long *)(param_2 + 0x720);
  if ((lVar33 == 0) || (**(char **)(lVar33 + 0x38) == '\0')) {
    puVar1 = (undefined8 *)PTR_PTR_047d4508;
    if (lVar33 != 0) {
      puVar1 = (undefined8 *)(lVar33 + 0x38);
    }
    local_a78 = *puVar1;
  }
  else {
    local_a78 = 0;
  }
  local_930 = (long *)0x0;
  local_928 = (undefined4 *)0x0;
  local_938 = (undefined4 *)0x0;
  local_a44[0] = *(undefined1 *)(param_2 + 0x99);
  FUN_018a2a58(&local_938,local_a44);
  local_a44[0] = *(undefined1 *)(param_2 + 0x9a);
  if (local_930 < local_928) {
    *(undefined1 *)local_930 = local_a44[0];
    local_930 = (long *)((long)local_930 + 1);
  }
  else {
    FUN_018a2a58(&local_938,local_a44);
  }
  local_a44[0] = *(undefined1 *)(param_2 + 0x9b);
  if (local_930 < local_928) {
    *(undefined1 *)local_930 = local_a44[0];
    local_930 = (long *)((long)local_930 + 1);
  }
  else {
    FUN_018a2a58(&local_938,local_a44);
  }
  local_a44[0] = *(undefined1 *)(param_2 + 0x9c);
  if (local_930 < local_928) {
    *(undefined1 *)local_930 = local_a44[0];
    local_930 = (long *)((long)local_930 + 1);
  }
  else {
    FUN_018a2a58(&local_938,local_a44);
  }
  local_a44[0] = *(undefined1 *)(param_2 + 0x9d);
  if (local_930 < local_928) {
    *(undefined1 *)local_930 = local_a44[0];
    local_930 = (long *)((long)local_930 + 1);
  }
  else {
    FUN_018a2a58(&local_938,local_a44);
  }
  cVar2 = *(char *)(param_2 + 0x8d) + '\x06';
  if (*(int *)(param_2 + 0x34) != 2) {
    cVar2 = *(char *)(param_2 + 0x8d);
  }
  uVar32 = FUN_01a6cbf0(*(undefined4 *)(param_2 + 0x4a0),*(undefined4 *)(param_2 + 0x4bc),
                        *(undefined4 *)(param_2 + 0x4c0),&local_d8,*(undefined4 *)(param_2 + 0x2c),
                        *(undefined4 *)(param_2 + 0x30),*(int *)(param_2 + 0x34),uVar20,uVar22,
                        *(undefined1 *)(param_2 + 0x38),*(undefined1 *)(param_2 + 0x8c),cVar2,
                        (char)*(undefined4 *)(param_2 + 0x90),(char)*(undefined4 *)(param_2 + 0x94),
                        &local_938,*(undefined1 *)(param_2 + 0x98),*(undefined1 *)(param_2 + 0x488),
                        *(undefined1 *)(param_2 + 0x489),*(undefined2 *)(param_2 + 0x48a),
                        *(undefined2 *)(param_2 + 0x48c),*(undefined2 *)(param_2 + 0x48e),
                        *(undefined2 *)(param_2 + 0x490),*(undefined1 *)(param_2 + 0x492),&local_968
                        ,*(undefined1 *)(param_2 + 0x4a4),*(undefined1 *)(param_2 + 0x4a5),
                        *(undefined4 *)(param_2 + 0x4a8),*(undefined4 *)(param_2 + 0x4ac),
                        *(undefined4 *)(param_2 + 0x4b0),*(undefined4 *)(param_2 + 0x4b4),
                        *(undefined1 *)(param_2 + 0x4b8),*(undefined1 *)(param_2 + 0x704),
                        *(undefined1 *)(param_2 + 0x705),*(undefined1 *)(param_2 + 0x706),
                        *(undefined1 *)(param_2 + 0x707),*(undefined1 *)(param_2 + 0x710),
                        *(undefined1 *)(param_2 + 0x711),*(undefined1 *)(param_2 + 0x712),
                        *(undefined1 *)(param_2 + 0x713),&local_9b0,&local_9c8,&local_9e0,&local_9f8
                        ,*(undefined1 *)(param_2 + 0x714),*(undefined8 *)(param_2 + 0x718),
                        &local_950,&local_f0,&local_980,&local_998,local_a78,
                        *(undefined2 *)(param_2 + 0x4f8),&local_a28,&local_a40,&local_a10);
  FUN_01692868(&local_d8,uVar32,0,0);
  puVar31 = local_a8;
  uVar24 = (local_b8 - (long)local_a8) + (long)local_b0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = (int)uVar24;
  }
  uVar24 = uVar24 & 0xffffffff;
  plVar37 = *(long **)(param_2 + 8);
  pvVar27 = (void *)(**(code **)(*plVar37 + 0x10))(plVar37,uVar24,1);
  if (pvVar27 == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pvVar27 = (void *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04865a38), iVar23 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar33 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar33 + 0x80)) {
LAB_01ad8188:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = plVar37;
    lVar25 = *(long *)(lVar33 + 0x80) + 1;
    *(long *)(lVar33 + 0x80) = lVar25;
    if (uVar24 != 0) {
      memset(pvVar27,0,uVar24);
      lVar25 = *(long *)(lVar33 + 0x80);
    }
    *param_1 = pvVar27;
    param_1[1] = plVar37;
    param_1[2] = uVar24;
    param_1[3] = 1;
    *(long *)(lVar33 + 0x80) = lVar25 + -1;
    pvVar27 = (void *)*param_1;
  }
  memcpy(pvVar27,puVar31,uVar24);
  puVar26 = local_938;
  if (local_938 != (undefined4 *)0x0) {
    local_930 = (long *)local_938;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar26,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar26,0,8);
    }
  }
  puVar19 = local_a40;
  if (local_a40 != (undefined1 *)0x0) {
    local_a38 = local_a40;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar19,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar19,0,8);
    }
  }
  uVar24 = local_a28;
  if (local_a28 != 0) {
    local_a20 = local_a28;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar28 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar28 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,uVar24,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,uVar24,0,8);
    }
  }
  puVar19 = local_a10;
  if (local_a10 != (undefined1 *)0x0) {
    local_a08 = local_a10;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar19,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar19,0,8);
    }
  }
  puVar26 = local_9f8;
  if (local_9f8 != (undefined4 *)0x0) {
    local_9f0 = local_9f8;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar26,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar26,0,8);
    }
  }
  puVar26 = local_9e0;
  if (local_9e0 != (undefined4 *)0x0) {
    local_9d8 = local_9e0;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar26,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar26,0,8);
    }
  }
  puVar26 = local_9c8;
  if (local_9c8 != (undefined4 *)0x0) {
    local_9c0 = local_9c8;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar26,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar26,0,8);
    }
  }
  puVar19 = local_9b0;
  if (local_9b0 != (undefined1 *)0x0) {
    local_9a8 = local_9b0;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar19,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar19,0,8);
    }
  }
  puVar19 = local_998;
  if (local_998 != (undefined1 *)0x0) {
    local_990 = local_998;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar19,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar19,0,8);
    }
  }
  puVar26 = local_980;
  if (local_980 != (undefined4 *)0x0) {
    local_978 = local_980;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar26,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar26,0,8);
    }
  }
  puVar19 = local_968;
  if (local_968 != (undefined1 *)0x0) {
    local_960 = local_968;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar19,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar19,0,8);
    }
  }
  puVar26 = local_950;
  if (local_950 != (undefined4 *)0x0) {
    local_948 = local_950;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar26,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar26,0,8);
    }
  }
  puVar26 = local_f0;
  if (local_f0 != (undefined4 *)0x0) {
    local_e8 = local_f0;
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,puVar26,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,puVar26,0,8);
    }
  }
  lVar33 = local_80;
  if (local_80 != 0) {
    FUN_01f2d540(local_80,*(undefined8 *)(local_80 + 8));
    plVar37 = *(long **)(lVar18 + 0x30);
    if (plVar37 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar23 = __cxa_guard_acquire(&DAT_04859438), iVar23 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar37 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar24 = (**(code **)(*plVar37 + 0xf8))(plVar37);
    if (((uVar24 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
      (**(code **)(*plVar37 + 0x18))(plVar37,lVar33,0,8);
    }
    else {
      FUN_00c48fe8(plVar37,lVar33,0,8);
    }
  }
  if (local_b0 != (undefined8 *)0x0) {
    if (local_d8 == (long *)0x0) {
      operator_delete__(local_b0);
    }
    else {
      (**(code **)(*local_d8 + 0x18))(local_d8,local_b0,local_b8);
    }
  }
  local_b0 = (undefined8 *)0x0;
  if ((local_d0 != '\0') && (local_d8 != (long *)0x0)) {
    (**(code **)(*local_d8 + 8))();
  }
  *(undefined8 *)(lVar18 + 0x30) = local_78;
  *(undefined2 *)(lVar18 + 0x38) = (undefined2)local_70;
  return;
}


