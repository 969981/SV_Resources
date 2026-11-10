/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0020b268; name: FUN_0020b268
 */


void FUN_0020b268(undefined4 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  ulong uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  long *plStack_180;
  char local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_158;
  undefined4 local_150 [2];
  ulong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [40];
  undefined *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined **local_d0;
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0024726c(auStack_a0,param_2);
  uStack_e8 = FUN_01cf7e20();
  local_f0 = PTR_DAT_047cbc40 + 0x10;
  local_d0 = &local_f0;
                    /* try { // try from 0020b2b0 to 0020b2bb has its CatchHandler @ 0020b5bc */
  local_e0 = param_2 + 0x60;
  FUN_00247460(auStack_a0,&local_f0);
  if (local_d0 != (undefined **)0x0) {
    if (local_d0 == &local_f0) {
      pcVar10 = *(code **)(*local_d0 + 0x10);
    }
    else {
      pcVar10 = *(code **)(*local_d0 + 0x18);
    }
    (*pcVar10)();
  }
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\0') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0020b5a4 to 0020b5a7 has its CatchHandler @ 0020b5ac */
    abort();
  }
  lVar13 = *(long *)(lVar11 + 8);
  *(undefined1 *)(lVar11 + 0x40) = 1;
  bVar1 = *(byte *)(lVar13 + 1);
  bVar2 = *(byte *)(lVar13 + 3);
  bVar3 = *(byte *)(lVar13 + 4);
  bVar4 = *(byte *)(lVar13 + 2);
  bVar5 = *(byte *)(lVar13 + 0x130);
  *(undefined1 *)(lVar11 + 0x51) = 1;
  *(undefined1 *)(lVar11 + 0x70) = 0;
  *(long *)(lVar11 + 0x60) = lVar13 + 0x98;
  *(uint *)(lVar11 + 0x54) =
       (uint)bVar1 << 5 | (uint)bVar2 << 4 | (uint)bVar3 << 6 | (uint)bVar4 << 7 | (uint)bVar5 << 8;
  FUN_001fed6c(&local_f0,param_2 + 0x48);
                    /* try { // try from 0020b344 to 0020b34f has its CatchHandler @ 0020b5b4 */
  FUN_00218250(auStack_118,0);
  uStack_140 = 0;
  local_148 = 0;
  uStack_130 = 0;
  local_138 = 0;
  local_150[0] = 0;
  uStack_120 = 0;
  local_128 = 0;
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\x01') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0020b5a8 to 0020b5ab has its CatchHandler @ 0020b5d0 */
    abort();
  }
  if (*(char *)(lVar11 + 0x41) == '\0') {
    *(undefined8 *)(lVar11 + 0x140) = local_b0;
    puVar12 = *(undefined1 **)(lVar11 + 8);
    *puVar12 = 1;
    *(undefined1 *)(lVar11 + 0xe0) = 1;
    *(undefined1 **)(lVar11 + 0xc0) = puVar12 + 0xb0;
    *(undefined1 **)(lVar11 + 0xf0) = puVar12;
    *(undefined1 **)(lVar11 + 0xf8) = puVar12 + 0xe8;
    *(undefined1 **)(lVar11 + 0xd0) = auStack_118;
    *(undefined4 **)(lVar11 + 0x100) = local_150;
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_1a0);
    *(ulong *)(lVar11 + 0x120) = uStack_198;
    *(ulong *)(lVar11 + 0x118) = CONCAT44(uStack_19c,local_1a0);
    *(undefined8 *)(lVar11 + 0x130) = local_188;
    *(undefined8 *)(lVar11 + 0x128) = local_190;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 0x48,(undefined8 *)(lVar11 + 0x10));
  }
  else {
    *(undefined8 *)(lVar11 + 0x2d8) = local_b0;
    *(undefined1 **)(lVar11 + 0x268) = auStack_118;
    *(undefined1 *)(lVar11 + 0x278) = 1;
    *(long *)(lVar11 + 0x288) = *(long *)(lVar11 + 8);
    *(long *)(lVar11 + 0x290) = *(long *)(lVar11 + 8) + 0xe8;
    *(undefined4 **)(lVar11 + 0x298) = local_150;
                    /* try { // try from 0020b3c0 to 0020b463 has its CatchHandler @ 0020b5d0 */
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_1a0);
    *(ulong *)(lVar11 + 0x2b8) = uStack_198;
    *(ulong *)(lVar11 + 0x2b0) = CONCAT44(uStack_19c,local_1a0);
    *(undefined8 *)(lVar11 + 0x2c8) = local_188;
    *(undefined8 *)(lVar11 + 0x2c0) = local_190;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 600,(undefined8 *)(lVar11 + 0x10));
  }
  FUN_001feef4(&local_f0);
  FUN_001ff060(&local_1a0,local_150);
  uVar8 = local_188;
  uVar7 = local_190;
  uVar6 = uStack_198;
  *param_1 = local_1a0;
  uStack_198 = 0;
  local_190 = 0;
  local_188 = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(long **)(param_1 + 8) = plStack_180;
  *(undefined8 *)(param_1 + 6) = uVar8;
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(ulong *)(param_1 + 2) = uVar6;
  if (local_178 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_160;
    *(undefined8 *)(param_1 + 0xe) = local_168;
    *(undefined8 **)(param_1 + 0xc) = local_170;
    plVar9 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_158;
    if (local_158 == 0) {
      *(long **)(param_1 + 0xc) = plVar9;
    }
    else {
      *(long **)(*plVar9 + 0x10) = plVar9;
      local_170 = &local_168;
      local_168 = 0;
      local_158 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_0020ac8c(param_1 + 0x14,auStack_118);
  if (local_178 != '\0') {
    FUN_01cfa44c(&local_170,local_168);
  }
  if ((uStack_198 & 1) != 0) {
    (**(code **)(*plStack_180 + 0x18))(plStack_180,local_188,uStack_198 & 0xfffffffffffffffe,1);
  }
  if ((uStack_130 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,uStack_120);
  }
  if ((local_148 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_138);
  }
  FUN_002183b0(auStack_118);
  FUN_001ff1dc(&local_f0);
  FUN_002472b8(auStack_a0);
  return;
}


