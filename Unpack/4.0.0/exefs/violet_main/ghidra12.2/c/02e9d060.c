/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e9d060; name: FUN_02e9d060
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e9d060(long *param_1,long *param_2,undefined8 *param_3,long param_4,undefined2 *param_5,
                 undefined8 *param_6,undefined8 param_7,uint param_8,undefined8 param_9)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 local_11c0;
  uint local_11b8;
  int local_11b4;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined1 local_11a0;
  undefined4 local_119c;
  undefined4 uStack_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  uint local_1170 [2];
  long local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined1 local_1150;
  uint local_1148 [255];
  int local_d4c;
  int local_d48;
  int local_d44;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  undefined4 local_be8;
  undefined8 local_be0;
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  long local_bc0;
  undefined *local_bb0;
  long *local_ba8;
  undefined1 *local_ba0;
  undefined4 local_b98;
  undefined1 auStack_b90 [2632];
  undefined2 local_148;
  undefined1 auStack_128 [8];
  long *local_120;
  undefined2 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  long local_f0;
  undefined2 local_d8 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  undefined2 local_a0 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  long local_70;
  
  memcpy(auStack_128,param_2,0x50);
  uVar10 = _UNK_03cabe68;
  uVar9 = _DAT_03cabe60;
  uVar8 = _UNK_03cabe58;
  uVar7 = _DAT_03cabe50;
  uVar6 = DAT_03cab628;
  uVar5 = DAT_03cab620;
  uVar4 = _UNK_03caa5b8;
  uVar3 = _DAT_03caa5b0;
  local_cf0 = 0;
  local_ba0 = auStack_b90;
  local_bb0 = PTR_DAT_047d1b40 + 0x10;
  local_be0 = 0xd;
  uStack_d38 = DAT_03cab628;
  local_d40 = DAT_03cab620;
  local_be8 = 0;
  uStack_d28 = _UNK_03cabe68;
  local_d30 = _DAT_03cabe60;
  local_b98 = 0x800;
  local_ba8 = (long *)0x0;
  local_bc0 = 0;
  local_cf8 = 0;
  local_d00 = 0;
  local_148 = 0xffff;
  uStack_d18 = _UNK_03caa5b8;
  local_d20 = _DAT_03caa5b0;
  uStack_d08 = _UNK_03cabe58;
  local_d10 = _DAT_03cabe50;
  auVar15 = NEON_fmov(0x3f800000,4);
  local_1168 = param_2[7];
  uStack_1160 = 0xffffffff;
  local_1158 = 0;
  local_1150 = 0xf;
  local_1148[0] = 0xffffffff;
  local_bd0 = auVar15._0_8_;
  uStack_bc8 = auVar15._8_8_;
  local_d48 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(local_1168 + 0x18) * 0x200 +
                          0xb0))(local_1168,local_1148,0x100);
  local_d44 = 0;
  if (0 < local_d48) {
    do {
      local_be0 = 0xd;
      uStack_d38 = uVar6;
      local_d40 = uVar5;
      local_148 = 0xffff;
      uStack_d28 = uVar10;
      local_d30 = uVar9;
      uStack_d18 = uVar4;
      local_d20 = uVar3;
      local_1170[0] = local_1148[local_d44];
      local_bc0 = 0;
      uStack_d08 = uVar8;
      local_d10 = uVar7;
      local_cf0 = 0;
      local_be8 = 0;
      local_cf8 = 0;
      local_d00 = 0;
      local_bd0 = auVar15._0_8_;
      uStack_bc8 = auVar15._8_8_;
      (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_2[7] + 0x18) * 0x200 + 0xb8))
                (param_2[7],local_1170,1,&local_d40);
      if (((byte)local_be0 >> 4 & 1) == 0) {
        local_f0 = local_bc0;
      }
      else {
        local_f0 = FUN_02ef6ac4(&local_d40,0,param_1[2]);
      }
      local_11d0 = *param_3;
      uStack_11c8 = param_3[1];
      local_11c0 = param_3[2];
      iVar1 = *(int *)((long)param_3 + 0x1c);
      local_11b0 = param_3[4];
      uStack_11a8 = 0;
      local_11a0 = *(undefined1 *)(param_3 + 6);
      uStack_1188 = param_3[9];
      local_1190 = param_3[8];
      local_119c = *(undefined4 *)((long)param_3 + 0x34);
      uStack_1178 = SUB168(*(undefined1 (*) [16])(param_3 + 10),8);
      uStack_1180 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
      uStack_1198 = *(undefined4 *)(param_3 + 7);
      bVar2 = *(byte *)(param_2[7] + 0x1c);
      local_11b4 = iVar1 + (uint)bVar2;
      local_11b8 = ((local_1170[0] >> (ulong)(-(uint)bVar2 & 0x1f)) + 1 <<
                   (ulong)((0x20 - (uint)bVar2) - iVar1 & 0x1f)) - 1 |
                   *(uint *)(PTR_DAT_047d1a60 + (long)iVar1 * 4) & *(uint *)(param_3 + 3);
      plVar11 = (long *)*param_2;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x40))(plVar11,local_148,5);
      }
      lVar14 = *param_1;
      if (local_120 == (long *)0x0) {
LAB_02e9d3e0:
        (**(code **)(lVar14 + (ulong)*(byte *)(local_f0 + 0x18) * 0xf8 +
                     (ulong)*(byte *)(param_4 + 0x18) * 8 + 0xa0))
                  (param_1,auStack_128,&local_11d0,param_4,param_5,param_6,param_7,param_8 & 1,
                   param_9);
      }
      else {
        local_a0[0] = local_118;
        *(undefined4 *)((undefined8 *)((ulong)local_a0 | 4) + 1) = local_10c;
        *(undefined8 *)((ulong)local_a0 | 4) = local_114;
        local_90 = local_11d0;
        uStack_88 = uStack_11c8;
        local_80 = local_11c0;
        local_78 = local_11b8;
        local_70 = local_f0;
        local_d8[0] = *param_5;
        uVar13 = *(undefined8 *)(param_5 + 2);
        *(undefined4 *)((undefined8 *)((ulong)local_d8 | 4) + 1) = *(undefined4 *)(param_5 + 6);
        *(undefined8 *)((ulong)local_d8 | 4) = uVar13;
        local_c8 = *param_6;
        uStack_c0 = param_6[1];
        local_b8 = param_6[2];
        local_b0 = *(undefined4 *)(param_6 + 3);
        local_a8 = param_4;
        uVar12 = (**(code **)(*local_120 + 0x40))(local_120,5,(param_8 ^ 1) & 1,local_a0,local_d8);
        if ((uVar12 & 1) != 0) goto LAB_02e9d3e0;
      }
      iVar1 = local_d44;
      local_d44 = local_d44 + 1;
      if ((0xfe < iVar1) && (local_d48 == 0x100)) {
        local_1148[0] = 0xffffffff;
        local_d48 = (**(code **)(*(long *)PTR_DAT_047d19f0 +
                                 (ulong)*(byte *)(local_1168 + 0x18) * 0x200 + 0xb0))
                              (local_1168,local_1148,0x100,
                               local_d4c << (ulong)(uStack_1160._4_4_ & 0x1f) |
                               -1 << (ulong)(uStack_1160._4_4_ & 0x1f) ^ 0xffffffffU,&uStack_1160);
        local_d44 = 0;
      }
    } while (local_d44 < local_d48);
  }
  local_bb0 = PTR_DAT_047d1b30 + 0x10;
  if (local_ba8 != (long *)0x0) {
    (**(code **)(*local_ba8 + 8))();
  }
  return;
}


