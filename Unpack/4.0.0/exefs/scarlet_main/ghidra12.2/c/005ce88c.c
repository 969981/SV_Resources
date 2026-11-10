/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005ce88c; name: FUN_005ce88c
 */


void FUN_005ce88c(undefined4 *param_1,long param_2)

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
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  ulong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  char local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long local_190;
  undefined4 local_188 [2];
  ulong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulong local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined8 uStack_148;
  long local_140;
  undefined **local_130;
  undefined1 auStack_f0 [64];
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0024726c(auStack_a0,param_2);
  uStack_148 = FUN_01cf7e20();
  local_150 = PTR_DAT_047ce818 + 0x10;
  local_130 = &local_150;
                    /* try { // try from 005ce8d4 to 005ce8df has its CatchHandler @ 005cebe0 */
  local_140 = param_2 + 0x60;
  FUN_00247460(auStack_a0,&local_150);
  if (local_130 != (undefined **)0x0) {
    if (local_130 == &local_150) {
      pcVar10 = *(code **)(*local_130 + 0x10);
    }
    else {
      pcVar10 = *(code **)(*local_130 + 0x18);
    }
    (*pcVar10)();
  }
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\0') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005cebc8 to 005cebcb has its CatchHandler @ 005cebd0 */
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
  FUN_001fed6c(auStack_f0,param_2 + 0x48);
                    /* try { // try from 005ce968 to 005ce973 has its CatchHandler @ 005cebd8 */
  FUN_00606d78(&local_150,0);
  local_188[0] = 0;
  uStack_178 = 0;
  local_180 = 0;
  local_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\x01') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005cebcc to 005cebcf has its CatchHandler @ 005cebf4 */
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
    *(undefined ***)(lVar11 + 0xd0) = &local_150;
    *(undefined4 **)(lVar11 + 0x100) = local_188;
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_1d8);
    *(ulong *)(lVar11 + 0x120) = uStack_1d0;
    *(ulong *)(lVar11 + 0x118) = CONCAT44(uStack_1d4,local_1d8);
    *(undefined8 *)(lVar11 + 0x130) = uStack_1c0;
    *(undefined8 *)(lVar11 + 0x128) = local_1c8;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 0x48,(undefined8 *)(lVar11 + 0x10));
  }
  else {
    *(undefined8 *)(lVar11 + 0x2d8) = local_b0;
    *(undefined ***)(lVar11 + 0x268) = &local_150;
    *(undefined1 *)(lVar11 + 0x278) = 1;
    *(long *)(lVar11 + 0x288) = *(long *)(lVar11 + 8);
    *(long *)(lVar11 + 0x290) = *(long *)(lVar11 + 8) + 0xe8;
    *(undefined4 **)(lVar11 + 0x298) = local_188;
                    /* try { // try from 005ce9e0 to 005cea8b has its CatchHandler @ 005cebf4 */
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_1d8);
    *(ulong *)(lVar11 + 0x2b8) = uStack_1d0;
    *(ulong *)(lVar11 + 0x2b0) = CONCAT44(uStack_1d4,local_1d8);
    *(undefined8 *)(lVar11 + 0x2c8) = uStack_1c0;
    *(undefined8 *)(lVar11 + 0x2c0) = local_1c8;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 600,(undefined8 *)(lVar11 + 0x10));
  }
  FUN_001feef4(auStack_f0);
  FUN_005cec48(&local_1d8,local_188);
  uVar8 = uStack_1c0;
  uVar7 = local_1c8;
  uVar6 = uStack_1d0;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = local_1d8;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1d0 = 0;
  *(long **)(param_1 + 8) = plStack_1b8;
  *(undefined8 *)(param_1 + 6) = uVar8;
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(ulong *)(param_1 + 2) = uVar6;
  if (local_1b0 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_198;
    *(undefined8 *)(param_1 + 0xe) = local_1a0;
    *(undefined8 **)(param_1 + 0xc) = local_1a8;
    plVar9 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_190;
    if (local_190 == 0) {
      *(long **)(param_1 + 0xc) = plVar9;
    }
    else {
      *(long **)(*plVar9 + 0x10) = plVar9;
      local_1a8 = &local_1a0;
      local_1a0 = 0;
      local_190 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_005ce2ac(param_1 + 0x14,&local_150);
  if (local_1b0 != '\0') {
    FUN_01cfa44c(&local_1a8,local_1a0);
  }
  if ((uStack_1d0 & 1) != 0) {
    (**(code **)(*plStack_1b8 + 0x18))(plStack_1b8,uStack_1c0,uStack_1d0 & 0xfffffffffffffffe,1);
  }
  if ((local_168 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,uStack_158);
  }
  if ((local_180 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_170);
  }
  FUN_00606de0(&local_150);
  FUN_001ff1dc(auStack_f0);
  FUN_002472b8(auStack_a0);
  return;
}


