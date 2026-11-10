/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eef2b8; name: FUN_00eef2b8
 */


void FUN_00eef2b8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  byte bVar6;
  undefined2 uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  void *pvVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  uint *puVar18;
  code *pcVar19;
  undefined **ppuVar20;
  ushort uVar21;
  undefined1 auStack_e8 [16];
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  ushort local_ba;
  ushort local_b8;
  short local_b6;
  short local_b4;
  char local_b2;
  byte local_b1;
  undefined8 local_b0;
  undefined4 local_a8;
  short local_a4;
  short local_a2;
  short local_a0;
  short local_9e;
  short local_9c;
  short local_9a;
  uint local_98;
  byte local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined *local_88;
  ulong local_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  LightEventType aLStack_60 [12];
  undefined4 local_54;
  undefined *local_50;
  uint local_48;
  
  pvVar14 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x148,4);
  if (pvVar14 == (void *)0x0) {
    pvVar14 = (void *)0x0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = param_2;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    memset(pvVar14,0,0x148);
    *param_1 = pvVar14;
    param_1[1] = param_2;
    param_1[2] = 0x148;
    param_1[3] = 4;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
    pvVar14 = (void *)*param_1;
  }
  memset(pvVar14,0,0x148);
  memcpy(auStack_e8,param_3,0x60);
  local_78 = 0;
  local_88 = (undefined *)0xf4b17a579f18960;
  local_80 = 0x82a2b175229d6a5b;
  if (*(char *)(param_3 + 1) == '\0') {
    if (local_d8 == 0xffffffffffffffff) {
      puVar16 = (undefined *)(**(code **)(*(long *)PTR_DAT_047d90c8 + 0x238))();
      ppuVar20 = (undefined **)0x0;
      goto LAB_00eef3dc;
    }
    if (local_c8 == 0xffffffffffffffff) goto LAB_00eef3f4;
    if (local_d0 == 0x4ffffffff) goto LAB_00ef0068;
    ppuVar20 = (undefined **)0x0;
  }
  else {
    ppuVar20 = &local_88;
    FUN_00ef78bc(&local_88,*param_3);
    if (local_d8 == 0xffffffffffffffff) {
      do {
        puVar16 = local_88 + local_80;
        local_80 = (ulong)local_88 ^ local_80;
        local_88 = (undefined *)
                   (local_80 ^ ((ulong)local_88 >> 0x28 | (long)local_88 << 0x18) ^ local_80 << 0x10
                   );
        local_80 = local_80 >> 0x1b | local_80 << 0x25;
      } while ((int)puVar16 == -1);
      ppuVar20 = &local_88;
LAB_00eef3dc:
      local_d8 = (ulong)puVar16 & 0xffffffff;
    }
    if (local_c8 == 0xffffffffffffffff) {
      if (ppuVar20 == (undefined **)0x0) {
LAB_00eef3f4:
        local_c8 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x238))();
        ppuVar20 = (undefined **)0x0;
      }
      else {
        local_c8 = FUN_00ef78d8(ppuVar20,0xffffffff);
      }
      local_c8 = local_c8 & 0xffffffff;
    }
    if (local_d0 == 0x4ffffffff) {
      if (ppuVar20 == (undefined **)0x0) {
LAB_00ef0068:
        iVar13 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(2);
        ppuVar20 = (undefined **)0x0;
      }
      else {
        iVar13 = FUN_00ef78d8(ppuVar20,2);
      }
      local_d0 = 0x1ffffffff;
      if (iVar13 != 0) {
        local_d0 = 0x2ffffffff;
      }
    }
  }
  uVar5 = local_c8;
  puVar16 = PTR_DAT_047d90c8;
  if (local_d0 == 0x3ffffffff) {
    if (local_b1 != 0) {
      if (ppuVar20 == (undefined **)0x0) {
        uVar10 = 0;
        do {
          uVar9 = (**(code **)(*(long *)puVar16 + 0x238))();
          local_d0 = (ulong)uVar9;
          if ((uVar9 & 0xfff0 ^ uVar9 >> 0x10 ^ (uint)local_c8 & 0xfff0 ^ (uint)local_c8 >> 0x10) <
              0x10) break;
          uVar10 = uVar10 + 1;
        } while (uVar10 < local_b1);
      }
      else {
        uVar10 = 0;
        do {
          uVar9 = FUN_00ef78d8(ppuVar20,0xffffffff);
          local_d0 = (ulong)uVar9;
          if ((uVar9 & 0xfff0 ^ uVar9 >> 0x10 ^ (uint)local_c8 & 0xfff0 ^ (uint)local_c8 >> 0x10) <
              0x10) break;
          uVar10 = uVar10 + 1;
        } while (uVar10 < local_b1);
      }
    }
  }
  else {
    uVar10 = (uint)local_c8;
    if (local_d0 == 0x1ffffffff) {
      if (ppuVar20 == (undefined **)0x0) {
        uVar12 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x238))();
      }
      else {
        uVar12 = FUN_00ef78d8(ppuVar20,0xffffffff);
      }
      uVar9 = uVar12 ^ 0x10000000;
      if (0xf < (uVar10 & 0xfff0 ^ uVar10 >> 0x10 ^ uVar12 >> 0x10 ^ uVar12 & 0xfff0)) {
        uVar9 = uVar12;
      }
    }
    else {
      if (local_d0 != 0x2ffffffff) goto LAB_00eef490;
      if (ppuVar20 == (undefined **)0x0) {
        uVar11 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x238))();
      }
      else {
        uVar11 = FUN_00ef78d8(ppuVar20,0xffffffff);
      }
      uVar9 = FUN_00ef7a30(uVar5 & 0xffffffff,uVar11);
    }
    local_d0 = (ulong)uVar9;
  }
LAB_00eef490:
  if (local_ba == 0xff) {
    if (ppuVar20 == (undefined **)0x0) {
      sVar8 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(100);
    }
    else {
      sVar8 = FUN_00ef78d8(ppuVar20,100);
    }
    local_ba = sVar8 + 1;
  }
  puVar16 = PTR_DAT_047d90c8;
  if (100 < local_ba) {
    local_ba = 100;
  }
  if (local_94 != 0) {
    if (local_94 < 6) {
      bVar6 = 0;
      local_b0 = 0xffffffffffffffff;
      local_a8 = 0xffffffff;
      if (ppuVar20 == (undefined **)0x0) {
        do {
          do {
            uVar10 = (**(code **)(*(long *)puVar16 + 0x240))(6);
          } while (*(short *)(aLStack_60 + (ulong)(uVar10 & 0xff) * 2 + -0x50) != -1);
          *(short *)(aLStack_60 + (ulong)(uVar10 & 0xff) * 2 + -0x50) = 0x1f;
          bVar6 = bVar6 + 1;
        } while (bVar6 < local_94);
      }
      else {
        do {
          do {
            uVar10 = FUN_00ef78d8(ppuVar20,6);
          } while (*(short *)(aLStack_60 + (ulong)(uVar10 & 0xff) * 2 + -0x50) != -1);
          *(short *)(aLStack_60 + (ulong)(uVar10 & 0xff) * 2 + -0x50) = 0x1f;
          bVar6 = bVar6 + 1;
        } while (bVar6 < local_94);
      }
    }
    else {
      local_94 = 0;
      local_a8 = 0xffffffff;
      local_b0 = 0xffffffffffffffff;
    }
  }
  if (ppuVar20 == (undefined **)0x0) {
    if ((short)local_b0 == -1) {
      uVar7 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x20);
      local_b0 = CONCAT62(local_b0._2_6_,uVar7);
    }
    if (local_b0._2_2_ == -1) {
      uVar7 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x20);
      local_b0._0_4_ = CONCAT22(uVar7,(short)local_b0);
    }
    if (local_b0._4_2_ == -1) {
      uVar7 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x20);
      local_b0._0_6_ = CONCAT24(uVar7,(undefined4)local_b0);
    }
    if (local_b0._6_2_ == -1) {
      uVar7 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x20);
      local_b0 = CONCAT26(uVar7,(undefined6)local_b0);
    }
    if ((short)local_a8 == -1) {
      uVar7 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x20);
      local_a8 = CONCAT22(local_a8._2_2_,uVar7);
    }
    if (local_a8._2_2_ == -1) {
      uVar7 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x20);
      local_a8 = CONCAT22(uVar7,(short)local_a8);
    }
    if (local_a4 == -1) {
      local_a4 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0xfd);
    }
    if (local_a2 == -1) {
      local_a2 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0xfd);
    }
    if (local_a0 == -1) {
      local_a0 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0xfd);
    }
    if (local_9e == -1) {
      local_9e = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0xfd);
    }
    if (local_9c == -1) {
      local_9c = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0xfd);
    }
    if (local_9a == -1) {
      local_9a = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0xfd);
    }
  }
  else {
    if ((short)local_b0 == -1) {
      uVar7 = FUN_00ef78d8(ppuVar20,0x20);
      local_b0 = CONCAT62(local_b0._2_6_,uVar7);
    }
    if (local_b0._2_2_ == -1) {
      uVar7 = FUN_00ef78d8(ppuVar20,0x20);
      local_b0._0_4_ = CONCAT22(uVar7,(short)local_b0);
    }
    if (local_b0._4_2_ == -1) {
      uVar7 = FUN_00ef78d8(ppuVar20,0x20);
      local_b0._0_6_ = CONCAT24(uVar7,(undefined4)local_b0);
    }
    if (local_b0._6_2_ == -1) {
      uVar7 = FUN_00ef78d8(ppuVar20,0x20);
      local_b0 = CONCAT26(uVar7,(undefined6)local_b0);
    }
    if ((short)local_a8 == -1) {
      uVar7 = FUN_00ef78d8(ppuVar20,0x20);
      local_a8 = CONCAT22(local_a8._2_2_,uVar7);
    }
    if (local_a8._2_2_ == -1) {
      uVar7 = FUN_00ef78d8(ppuVar20,0x20);
      local_a8 = CONCAT22(uVar7,(short)local_a8);
    }
    if (local_a4 == -1) {
      local_a4 = FUN_00ef78d8(ppuVar20,0xfd);
    }
    if (local_a2 == -1) {
      local_a2 = FUN_00ef78d8(ppuVar20,0xfd);
    }
    if (local_a0 == -1) {
      local_a0 = FUN_00ef78d8(ppuVar20,0xfd);
    }
    if (local_9e == -1) {
      local_9e = FUN_00ef78d8(ppuVar20,0xfd);
    }
    if (local_9c == -1) {
      local_9c = FUN_00ef78d8(ppuVar20,0xfd);
    }
    if (local_9a == -1) {
      local_9a = FUN_00ef78d8(ppuVar20,0xfd);
    }
  }
  if (local_b2 == -1) {
    if (ppuVar20 == (undefined **)0x0) {
      pcVar19 = *(code **)(*(long *)PTR_DAT_047d90c8 + 0x240);
      uVar17 = 2;
LAB_00eef614:
      local_b2 = (*pcVar19)(uVar17);
      goto LAB_00eef61c;
    }
    uVar17 = 2;
  }
  else {
    if (local_b2 != -2) goto LAB_00eef61c;
    if (ppuVar20 == (undefined **)0x0) {
      pcVar19 = *(code **)(*(long *)PTR_DAT_047d90c8 + 0x240);
      uVar17 = 3;
      goto LAB_00eef614;
    }
    uVar17 = 3;
  }
  local_b2 = FUN_00ef78d8(ppuVar20,uVar17);
LAB_00eef61c:
  puVar16 = PTR_DAT_047d8ee0;
  uVar21 = local_b8;
  if (local_b8 == 0xff) {
    local_50 = PTR_DAT_047d8ee0 + 0x10;
    sVar8 = FUN_00f512a0(&local_50);
    uVar21 = sVar8 - 1;
    if (2 < (uVar21 & 0xff)) {
      if (ppuVar20 == (undefined **)0x0) {
        uVar10 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(100);
      }
      else {
        uVar10 = FUN_00ef78d8(ppuVar20,100);
      }
      local_50 = puVar16 + 0x10;
      uVar9 = FUN_00ef02d8(&local_50);
      uVar21 = (ushort)(uVar10 < (uVar9 & 0xff));
    }
    local_b8 = uVar21 & 0xff;
  }
  local_50 = puVar16 + 0x10;
  local_48 = local_c0;
  sVar8 = FUN_00f512a0(&local_50);
  uVar4 = 0;
  if ((uVar21 & 0xff) != 2) {
    uVar4 = uVar21;
  }
  local_b8 = sVar8 - 1U;
  if (2 < (sVar8 - 1U & 0xff)) {
    local_b8 = uVar4;
  }
  local_b8 = local_b8 & 0xff;
  if (local_b6 == -1) {
    if (((local_c0 & 0xffff) == 0x351) && (local_c0 >> 0x10 == 0)) {
      local_b6 = FUN_00ef7a64(ppuVar20);
    }
    else if (((local_c0 & 0xffff) == 0x351) && (local_c0 >> 0x10 == 1)) {
      local_b6 = FUN_00ef79b8(ppuVar20);
    }
    else if (ppuVar20 == (undefined **)0x0) {
      local_b6 = (**(code **)(*(long *)PTR_DAT_047d90c8 + 0x240))(0x19);
    }
    else {
      local_b6 = FUN_00ef78d8(ppuVar20,0x19);
    }
  }
  if (local_b4 == -1) {
    local_b4 = local_b6;
  }
  if (local_98 == 0xffff) {
    local_50 = puVar16 + 0x10;
    local_48 = local_c0;
    local_98 = FUN_00f78418(&local_50);
    local_98 = local_98 & 0xff;
  }
  local_90 = FUN_00ef011c(local_90,ppuVar20);
  local_92 = FUN_00ef011c(local_92,ppuVar20);
  local_8e = FUN_00ef011c(local_8e,ppuVar20);
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  puVar1 = PTR_DAT_047dda98 + 0x10;
  local_70 = 0;
  local_54 = 1;
  local_88 = puVar1;
  nn::os::InitializeLightEvent(aLStack_60,0,1);
  local_70 = local_70 & 0xffff0000;
  FUN_00ff2f38(&local_88,pvVar14,0);
  if ((short)local_c0 != 0) {
    FUN_00e677e8(&local_88);
    FUN_00ef0490(&local_88,local_d8 & 0xffffffff);
    FUN_00ef35cc(&local_88,local_c8 & 0xffffffff);
    FUN_00ef3280(&local_88,local_d0 & 0xffffffff);
    FUN_00ef2f34(&local_88,(short)local_c0);
    FUN_00ef289c(&local_88,local_c0._2_2_);
    FUN_00ef0af0(&local_88,local_bc);
    FUN_00f15150(&local_88,(undefined1)local_ba);
    FUN_00ef3918(&local_88,local_b6);
    FUN_00ef3c64(&local_88,local_b4);
    FUN_00ef644c(&local_88,(undefined1)local_b8);
    FUN_00ef4994(&local_88,(undefined1)local_ba);
    FUN_00ef2be8(&local_88,0);
    FUN_00ef7530(&local_88,local_98);
    FUN_00eeef6c(&local_88,*(undefined1 *)(*(long *)PTR_DAT_047d90c8 + 0x3d0));
    FUN_00ef3fb0(&local_88,0xff);
    FUN_00ef4ce8(&local_88,local_b0 & 0xff);
    FUN_00ef503c(&local_88,local_b0._2_1_);
    FUN_00ef5394(&local_88,local_b0._4_1_);
    FUN_00ef5a44(&local_88,local_b0._6_1_);
    FUN_00ef5d9c(&local_88,(undefined1)local_a8);
    FUN_00ef56ec(&local_88,local_a8._2_1_);
    FUN_00ef0e3c(&local_88,(undefined1)local_a4);
    FUN_00ef1188(&local_88,(undefined1)local_a2);
    FUN_00ef14d4(&local_88,(undefined1)local_a0);
    FUN_00ef1820(&local_88,(undefined1)local_9e);
    FUN_00ef1b6c(&local_88,(undefined1)local_9c);
    FUN_00ef1eb8(&local_88,(undefined1)local_9a);
    if (local_b2 == '\x01') {
      local_50 = puVar16 + 0x10;
      local_48 = local_c0;
      uVar11 = FUN_00ff54e4(&local_50);
    }
    else if (local_b2 == '\x02') {
      uVar11 = FUN_0143b808();
    }
    else {
      local_50 = puVar16 + 0x10;
      local_48 = local_c0;
      uVar11 = FUN_00ff43a0(&local_50);
    }
    FUN_00ef2550(&local_88,uVar11);
    FUN_00ef67a8(&local_88,local_b2 == '\0');
    FUN_00ef6b04(&local_88,local_b2 == '\x01');
    FUN_00ef6e68(&local_88,local_b2 == '\x02');
    FUN_00ef71cc(&local_88,local_8c);
    FUN_00ef60f4(&local_88,local_8b);
    uVar21 = local_ba;
    local_50 = puVar16 + 0x10;
    local_48 = local_c0;
    bVar6 = FUN_00c860e0(&local_50);
    if (((*PTR_DAT_047da7c0 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_047da7c0), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047da7d8,PTR_DAT_047da7c8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047da7c0);
    }
    lVar15 = *(long *)PTR_DAT_047da7c8;
    *(long *)PTR_DAT_047da7d0 = lVar15;
    puVar18 = (uint *)(**(code **)(**(long **)(lVar15 + 0x30) + 0x70))();
    if (puVar18 == (uint *)0x0) {
      uVar11 = 1;
    }
    else {
      piVar2 = (int *)((long)puVar18 + (ulong)*puVar18);
      uVar10 = (uint)uVar21;
      if (99 < (uVar10 & 0xff)) {
        uVar10 = 100;
      }
      bVar3 = 0;
      if (bVar6 < 9) {
        bVar3 = bVar6;
      }
      uVar11 = *(undefined4 *)
                ((long)piVar2 +
                ((ulong)uVar10 & 0xff) * 4 +
                (ulong)bVar3 * 0x194 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
    }
    FUN_00ef07a4(&local_88,uVar11);
    FUN_00ef42fc(&local_88,(undefined1)local_90);
    FUN_00ef4648(&local_88,(undefined1)local_92);
    FUN_00ef2204(&local_88,(undefined1)local_8e);
    FUN_00e679f0(&local_88);
  }
  local_88 = puVar1;
  nn::os::FinalizeLightEvent(aLStack_60);
  return;
}


