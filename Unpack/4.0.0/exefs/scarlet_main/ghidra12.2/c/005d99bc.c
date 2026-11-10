/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005d99bc; name: FUN_005d99bc
 */


void FUN_005d99bc(undefined4 *param_1,long param_2)

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
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  ulong uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  long *plStack_188;
  char local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  long local_160;
  undefined4 local_158 [2];
  ulong local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [48];
  undefined *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined **local_d0;
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0024726c(auStack_a0,param_2);
  uStack_e8 = FUN_01cf7e20();
  local_f0 = PTR_DAT_047ce940 + 0x10;
  local_d0 = &local_f0;
                    /* try { // try from 005d9a04 to 005d9a0f has its CatchHandler @ 005d9d10 */
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
                    /* try { // try from 005d9cf8 to 005d9cfb has its CatchHandler @ 005d9d00 */
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
                    /* try { // try from 005d9a98 to 005d9aa3 has its CatchHandler @ 005d9d08 */
  FUN_00609df4(auStack_120,0);
  local_158[0] = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\x01') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005d9cfc to 005d9cff has its CatchHandler @ 005d9d24 */
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
    *(undefined1 **)(lVar11 + 0xd0) = auStack_120;
    *(undefined4 **)(lVar11 + 0x100) = local_158;
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_1a8);
    *(ulong *)(lVar11 + 0x120) = uStack_1a0;
    *(ulong *)(lVar11 + 0x118) = CONCAT44(uStack_1a4,local_1a8);
    *(undefined8 *)(lVar11 + 0x130) = uStack_190;
    *(undefined8 *)(lVar11 + 0x128) = local_198;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 0x48,(undefined8 *)(lVar11 + 0x10));
  }
  else {
    *(undefined8 *)(lVar11 + 0x2d8) = local_b0;
    *(undefined1 **)(lVar11 + 0x268) = auStack_120;
    *(undefined1 *)(lVar11 + 0x278) = 1;
    *(long *)(lVar11 + 0x288) = *(long *)(lVar11 + 8);
    *(long *)(lVar11 + 0x290) = *(long *)(lVar11 + 8) + 0xe8;
    *(undefined4 **)(lVar11 + 0x298) = local_158;
                    /* try { // try from 005d9b10 to 005d9bbb has its CatchHandler @ 005d9d24 */
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_1a8);
    *(ulong *)(lVar11 + 0x2b8) = uStack_1a0;
    *(ulong *)(lVar11 + 0x2b0) = CONCAT44(uStack_1a4,local_1a8);
    *(undefined8 *)(lVar11 + 0x2c8) = uStack_190;
    *(undefined8 *)(lVar11 + 0x2c0) = local_198;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 600,(undefined8 *)(lVar11 + 0x10));
  }
  FUN_001feef4(&local_f0);
  FUN_005cec48(&local_1a8,local_158);
  uVar8 = uStack_190;
  uVar7 = local_198;
  uVar6 = uStack_1a0;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = local_1a8;
  local_198 = 0;
  uStack_190 = 0;
  uStack_1a0 = 0;
  *(long **)(param_1 + 8) = plStack_188;
  *(undefined8 *)(param_1 + 6) = uVar8;
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(ulong *)(param_1 + 2) = uVar6;
  if (local_180 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_168;
    *(undefined8 *)(param_1 + 0xe) = local_170;
    *(undefined8 **)(param_1 + 0xc) = local_178;
    plVar9 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_160;
    if (local_160 == 0) {
      *(long **)(param_1 + 0xc) = plVar9;
    }
    else {
      *(long **)(*plVar9 + 0x10) = plVar9;
      local_178 = &local_170;
      local_170 = 0;
      local_160 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_005d93dc(param_1 + 0x14,auStack_120);
  if (local_180 != '\0') {
    FUN_01cfa44c(&local_178,local_170);
  }
  if ((uStack_1a0 & 1) != 0) {
    (**(code **)(*plStack_188 + 0x18))(plStack_188,uStack_190,uStack_1a0 & 0xfffffffffffffffe,1);
  }
  if ((local_138 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,uStack_128);
  }
  if ((local_150 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_140);
  }
  FUN_00609e4c(auStack_120);
  FUN_001ff1dc(&local_f0);
  FUN_002472b8(auStack_a0);
  return;
}


