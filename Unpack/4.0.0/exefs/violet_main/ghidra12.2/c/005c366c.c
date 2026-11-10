/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005c366c; name: FUN_005c366c
 */


void FUN_005c366c(undefined4 *param_1,long param_2)

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
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  ulong uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  char local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  undefined4 local_198 [2];
  ulong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined *local_160;
  undefined8 uStack_158;
  long local_150;
  undefined **local_140;
  undefined1 auStack_f0 [64];
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0024726c(auStack_a0,param_2);
  uStack_158 = FUN_01cf7e20();
  local_160 = PTR_DAT_047ce748 + 0x10;
  local_140 = &local_160;
                    /* try { // try from 005c36b4 to 005c36bf has its CatchHandler @ 005c39c0 */
  local_150 = param_2 + 0x60;
  FUN_00247460(auStack_a0,&local_160);
  if (local_140 != (undefined **)0x0) {
    if (local_140 == &local_160) {
      pcVar10 = *(code **)(*local_140 + 0x10);
    }
    else {
      pcVar10 = *(code **)(*local_140 + 0x18);
    }
    (*pcVar10)();
  }
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\0') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005c39a8 to 005c39ab has its CatchHandler @ 005c39b0 */
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
                    /* try { // try from 005c3748 to 005c3753 has its CatchHandler @ 005c39b8 */
  FUN_0060ab98(&local_160,0);
  local_198[0] = 0;
  uStack_188 = 0;
  local_190 = 0;
  local_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\x01') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005c39ac to 005c39af has its CatchHandler @ 005c39d4 */
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
    *(undefined ***)(lVar11 + 0xd0) = &local_160;
    *(undefined4 **)(lVar11 + 0x100) = local_198;
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_1e8);
    *(ulong *)(lVar11 + 0x120) = uStack_1e0;
    *(ulong *)(lVar11 + 0x118) = CONCAT44(uStack_1e4,local_1e8);
    *(undefined8 *)(lVar11 + 0x130) = uStack_1d0;
    *(undefined8 *)(lVar11 + 0x128) = local_1d8;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 0x48,(undefined8 *)(lVar11 + 0x10));
  }
  else {
    *(undefined8 *)(lVar11 + 0x2d8) = local_b0;
    *(undefined ***)(lVar11 + 0x268) = &local_160;
    *(undefined1 *)(lVar11 + 0x278) = 1;
    *(long *)(lVar11 + 0x288) = *(long *)(lVar11 + 8);
    *(long *)(lVar11 + 0x290) = *(long *)(lVar11 + 8) + 0xe8;
    *(undefined4 **)(lVar11 + 0x298) = local_198;
                    /* try { // try from 005c37c0 to 005c386b has its CatchHandler @ 005c39d4 */
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_1e8);
    *(ulong *)(lVar11 + 0x2b8) = uStack_1e0;
    *(ulong *)(lVar11 + 0x2b0) = CONCAT44(uStack_1e4,local_1e8);
    *(undefined8 *)(lVar11 + 0x2c8) = uStack_1d0;
    *(undefined8 *)(lVar11 + 0x2c0) = local_1d8;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 600,(undefined8 *)(lVar11 + 0x10));
  }
  FUN_001feef4(auStack_f0);
  FUN_005c3a28(&local_1e8,local_198);
  uVar8 = uStack_1d0;
  uVar7 = local_1d8;
  uVar6 = uStack_1e0;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = local_1e8;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1e0 = 0;
  *(long **)(param_1 + 8) = plStack_1c8;
  *(undefined8 *)(param_1 + 6) = uVar8;
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(ulong *)(param_1 + 2) = uVar6;
  if (local_1c0 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_1a8;
    *(undefined8 *)(param_1 + 0xe) = local_1b0;
    *(undefined8 **)(param_1 + 0xc) = local_1b8;
    plVar9 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_1a0;
    if (local_1a0 == 0) {
      *(long **)(param_1 + 0xc) = plVar9;
    }
    else {
      *(long **)(*plVar9 + 0x10) = plVar9;
      local_1b8 = &local_1b0;
      local_1b0 = 0;
      local_1a0 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_005c308c(param_1 + 0x14,&local_160);
  if (local_1c0 != '\0') {
    FUN_01cfa44c(&local_1b8,local_1b0);
  }
  if ((uStack_1e0 & 1) != 0) {
    (**(code **)(*plStack_1c8 + 0x18))(plStack_1c8,uStack_1d0,uStack_1e0 & 0xfffffffffffffffe,1);
  }
  if ((local_178 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,uStack_168);
  }
  if ((local_190 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_180);
  }
  FUN_0060ac04(&local_160);
  FUN_001ff1dc(auStack_f0);
  FUN_002472b8(auStack_a0);
  return;
}


