/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006d522c; name: FUN_006d522c
 */


void FUN_006d522c(undefined4 *param_1,long param_2)

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
  undefined4 local_218;
  undefined4 uStack_214;
  ulong uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  char local_1f0;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  undefined4 local_1c8 [2];
  ulong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined *local_190;
  undefined8 uStack_188;
  long local_180;
  undefined **local_170;
  undefined1 auStack_f0 [64];
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0024726c(auStack_a0,param_2);
  uStack_188 = FUN_01cf7e20();
  local_190 = PTR_DAT_047cfcc0 + 0x10;
  local_170 = &local_190;
                    /* try { // try from 006d5274 to 006d527f has its CatchHandler @ 006d5580 */
  local_180 = param_2 + 0x60;
  FUN_00247460(auStack_a0,&local_190);
  if (local_170 != (undefined **)0x0) {
    if (local_170 == &local_190) {
      pcVar10 = *(code **)(*local_170 + 0x10);
    }
    else {
      pcVar10 = *(code **)(*local_170 + 0x18);
    }
    (*pcVar10)();
  }
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\0') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006d5568 to 006d556b has its CatchHandler @ 006d5570 */
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
                    /* try { // try from 006d5308 to 006d5313 has its CatchHandler @ 006d5578 */
  FUN_007130e4(&local_190,0);
  local_1c8[0] = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\x01') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006d556c to 006d556f has its CatchHandler @ 006d5594 */
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
    *(undefined ***)(lVar11 + 0xd0) = &local_190;
    *(undefined4 **)(lVar11 + 0x100) = local_1c8;
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_218);
    *(ulong *)(lVar11 + 0x120) = uStack_210;
    *(ulong *)(lVar11 + 0x118) = CONCAT44(uStack_214,local_218);
    *(undefined8 *)(lVar11 + 0x130) = uStack_200;
    *(undefined8 *)(lVar11 + 0x128) = local_208;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 0x48,(undefined8 *)(lVar11 + 0x10));
  }
  else {
    *(undefined8 *)(lVar11 + 0x2d8) = local_b0;
    *(undefined ***)(lVar11 + 0x268) = &local_190;
    *(undefined1 *)(lVar11 + 0x278) = 1;
    *(long *)(lVar11 + 0x288) = *(long *)(lVar11 + 8);
    *(long *)(lVar11 + 0x290) = *(long *)(lVar11 + 8) + 0xe8;
    *(undefined4 **)(lVar11 + 0x298) = local_1c8;
                    /* try { // try from 006d5380 to 006d542b has its CatchHandler @ 006d5594 */
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_218);
    *(ulong *)(lVar11 + 0x2b8) = uStack_210;
    *(ulong *)(lVar11 + 0x2b0) = CONCAT44(uStack_214,local_218);
    *(undefined8 *)(lVar11 + 0x2c8) = uStack_200;
    *(undefined8 *)(lVar11 + 0x2c0) = local_208;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 600,(undefined8 *)(lVar11 + 0x10));
  }
  FUN_001feef4(auStack_f0);
  FUN_006cb5c8(&local_218,local_1c8);
  uVar8 = uStack_200;
  uVar7 = local_208;
  uVar6 = uStack_210;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = local_218;
  local_208 = 0;
  uStack_200 = 0;
  uStack_210 = 0;
  *(long **)(param_1 + 8) = plStack_1f8;
  *(undefined8 *)(param_1 + 6) = uVar8;
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(ulong *)(param_1 + 2) = uVar6;
  if (local_1f0 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_1d8;
    *(undefined8 *)(param_1 + 0xe) = local_1e0;
    *(undefined8 **)(param_1 + 0xc) = local_1e8;
    plVar9 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_1d0;
    if (local_1d0 == 0) {
      *(long **)(param_1 + 0xc) = plVar9;
    }
    else {
      *(long **)(*plVar9 + 0x10) = plVar9;
      local_1e8 = &local_1e0;
      local_1e0 = 0;
      local_1d0 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_006d4c4c(param_1 + 0x14,&local_190);
  if (local_1f0 != '\0') {
    FUN_01cfa44c(&local_1e8,local_1e0);
  }
  if ((uStack_210 & 1) != 0) {
    (**(code **)(*plStack_1f8 + 0x18))(plStack_1f8,uStack_200,uStack_210 & 0xfffffffffffffffe,1);
  }
  if ((local_1a8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,uStack_198);
  }
  if ((local_1c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1b0);
  }
  FUN_00713444(&local_190);
  FUN_001ff1dc(auStack_f0);
  FUN_002472b8(auStack_a0);
  return;
}


