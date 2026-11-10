/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006cb20c; name: FUN_006cb20c
 */


void FUN_006cb20c(undefined4 *param_1,long param_2)

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
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  ulong uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  long *plStack_298;
  char local_290;
  undefined8 *local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  long local_270;
  undefined4 local_268 [2];
  ulong local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  ulong local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined *local_230;
  undefined8 uStack_228;
  long local_220;
  undefined **local_210;
  undefined1 auStack_f0 [64];
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0024726c(auStack_a0,param_2);
  uStack_228 = FUN_01cf7e20();
  local_230 = PTR_DAT_047cfba8 + 0x10;
  local_210 = &local_230;
                    /* try { // try from 006cb254 to 006cb25f has its CatchHandler @ 006cb560 */
  local_220 = param_2 + 0x60;
  FUN_00247460(auStack_a0,&local_230);
  if (local_210 != (undefined **)0x0) {
    if (local_210 == &local_230) {
      pcVar10 = *(code **)(*local_210 + 0x10);
    }
    else {
      pcVar10 = *(code **)(*local_210 + 0x18);
    }
    (*pcVar10)();
  }
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\0') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006cb548 to 006cb54b has its CatchHandler @ 006cb550 */
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
                    /* try { // try from 006cb2e8 to 006cb2f3 has its CatchHandler @ 006cb558 */
  FUN_0070c620(&local_230,0);
  local_268[0] = 0;
  uStack_258 = 0;
  local_260 = 0;
  local_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar11 + 0x40) != '\x01') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006cb54c to 006cb54f has its CatchHandler @ 006cb574 */
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
    *(undefined ***)(lVar11 + 0xd0) = &local_230;
    *(undefined4 **)(lVar11 + 0x100) = local_268;
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_2b8);
    *(ulong *)(lVar11 + 0x120) = uStack_2b0;
    *(ulong *)(lVar11 + 0x118) = CONCAT44(uStack_2b4,local_2b8);
    *(undefined8 *)(lVar11 + 0x130) = uStack_2a0;
    *(undefined8 *)(lVar11 + 0x128) = local_2a8;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 0x48,(undefined8 *)(lVar11 + 0x10));
  }
  else {
    *(undefined8 *)(lVar11 + 0x2d8) = local_b0;
    *(undefined ***)(lVar11 + 0x268) = &local_230;
    *(undefined1 *)(lVar11 + 0x278) = 1;
    *(long *)(lVar11 + 0x288) = *(long *)(lVar11 + 8);
    *(long *)(lVar11 + 0x290) = *(long *)(lVar11 + 8) + 0xe8;
    *(undefined4 **)(lVar11 + 0x298) = local_268;
                    /* try { // try from 006cb360 to 006cb40b has its CatchHandler @ 006cb574 */
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x138))(&local_2b8);
    *(ulong *)(lVar11 + 0x2b8) = uStack_2b0;
    *(ulong *)(lVar11 + 0x2b0) = CONCAT44(uStack_2b4,local_2b8);
    *(undefined8 *)(lVar11 + 0x2c8) = uStack_2a0;
    *(undefined8 *)(lVar11 + 0x2c0) = local_2a8;
    plVar9 = *(long **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x10))(plVar9,lVar11 + 600,(undefined8 *)(lVar11 + 0x10));
  }
  FUN_001feef4(auStack_f0);
  FUN_006cb5c8(&local_2b8,local_268);
  uVar8 = uStack_2a0;
  uVar7 = local_2a8;
  uVar6 = uStack_2b0;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = local_2b8;
  local_2a8 = 0;
  uStack_2a0 = 0;
  uStack_2b0 = 0;
  *(long **)(param_1 + 8) = plStack_298;
  *(undefined8 *)(param_1 + 6) = uVar8;
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(ulong *)(param_1 + 2) = uVar6;
  if (local_290 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_278;
    *(undefined8 *)(param_1 + 0xe) = local_280;
    *(undefined8 **)(param_1 + 0xc) = local_288;
    plVar9 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_270;
    if (local_270 == 0) {
      *(long **)(param_1 + 0xc) = plVar9;
    }
    else {
      *(long **)(*plVar9 + 0x10) = plVar9;
      local_288 = &local_280;
      local_280 = 0;
      local_270 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_006cac30(param_1 + 0x14,&local_230);
  if (local_290 != '\0') {
    FUN_01cfa44c(&local_288,local_280);
  }
  if ((uStack_2b0 & 1) != 0) {
    (**(code **)(*plStack_298 + 0x18))(plStack_298,uStack_2a0,uStack_2b0 & 0xfffffffffffffffe,1);
  }
  if ((local_248 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,uStack_238);
  }
  if ((local_260 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_250);
  }
  FUN_0070ce20(&local_230);
  FUN_001ff1dc(auStack_f0);
  FUN_002472b8(auStack_a0);
  return;
}


