/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01458730; name: FUN_01458730
 */


void FUN_01458730(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 local_248;
  undefined1 *puStack_240;
  undefined8 local_238;
  long *local_230;
  undefined1 *local_228;
  byte *pbStack_220;
  size_t local_218;
  long *local_210;
  undefined1 *local_208;
  byte *pbStack_200;
  size_t local_1f8;
  long *local_1f0;
  undefined1 *local_1e8;
  byte *pbStack_1e0;
  size_t local_1d8;
  long *local_1d0;
  undefined1 *local_1c8;
  byte *pbStack_1c0;
  size_t local_1b8;
  long *local_1b0;
  undefined1 *local_1a8;
  byte *pbStack_1a0;
  size_t local_198;
  long *local_190;
  undefined1 *local_188;
  byte *pbStack_180;
  size_t local_178;
  long *local_170;
  undefined1 *local_168;
  byte *pbStack_160;
  size_t local_158;
  long *local_150;
  undefined1 *local_148;
  byte *pbStack_140;
  size_t local_138;
  long *local_130;
  undefined1 *local_128;
  byte *pbStack_120;
  size_t local_118;
  long *local_110;
  undefined1 *local_108;
  byte *pbStack_100;
  size_t local_f8;
  long *local_f0;
  undefined1 *local_e8;
  byte *pbStack_e0;
  size_t local_d8;
  long *local_d0;
  undefined1 *local_c8;
  byte *pbStack_c0;
  size_t local_b8;
  long *local_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_0145999c(*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 0x68));
  if (((*PTR_DAT_047d8a48 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar4 != 0))
  {
    FUN_00100190(&LAB_00a2e374,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  local_98 = 0;
  uStack_90 = 0;
  uVar8 = *(undefined8 *)PTR_DAT_047d8a50;
  *(undefined8 *)PTR_DAT_047d8a58 = uVar8;
  local_68 = 0x400;
  local_88 = 0x40000000800;
  uStack_80 = 0x8000000080;
  local_64 = 0;
  local_70 = 0x40000;
  local_78 = 0x200;
  local_a8 = &PTR_LAB_04540070;
  uStack_a0 = 0;
  local_60 = 0x1000000000c;
  uStack_58 = 0x3000000;
  FUN_0145a890(uVar8,&local_a8,0);
  FUN_01459678(uVar8);
  plVar5 = (long *)FUN_0145966c();
  local_e8 = (undefined1 *)0x462237f7b07aa897;
  pbStack_e0 = &DAT_03c91c52;
  local_d8 = 4;
  local_d0 = (long *)0x0;
  pbStack_c0 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_e8,0);
  puVar3 = PTR_DAT_047d3e30;
  puVar2 = PTR_DAT_047d3e28;
  if (pbStack_c0 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_c8 = *(undefined1 **)puVar3;
    pbStack_c0 = *(byte **)(puVar3 + 8);
    local_b8 = *(size_t *)(puVar3 + 0x10);
    local_b0 = *(long **)(puVar3 + 0x18);
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x18))();
    }
  }
  else {
    local_b8 = strlen((char *)pbStack_c0);
    bVar1 = *pbStack_c0;
    local_c8 = &DAT_cbf29ce484222645;
    pbVar6 = pbStack_c0;
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar6;
    }
    local_b0 = (long *)0x0;
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_108 = (undefined1 *)0x462237f7b07aa897;
  pbStack_100 = &DAT_03c91c52;
  local_f8 = 4;
  local_f0 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_108,1);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_e8 = *(undefined1 **)puVar3;
    pbStack_e0 = *(byte **)(puVar3 + 8);
    local_d8 = *(size_t *)(puVar3 + 0x10);
    local_d0 = *(long **)(puVar3 + 0x18);
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x18))();
    }
  }
  else {
    local_d8 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_e8 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_e8 = (undefined1 *)(((ulong)local_e8 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_d0 = (long *)0x0;
    pbStack_e0 = pbVar6;
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_128 = (undefined1 *)0x462237f7b07aa897;
  pbStack_120 = &DAT_03c91c52;
  local_118 = 4;
  local_110 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_128,2);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_108 = *(undefined1 **)puVar3;
    pbStack_100 = *(byte **)(puVar3 + 8);
    local_f8 = *(size_t *)(puVar3 + 0x10);
    local_f0 = *(long **)(puVar3 + 0x18);
    if (local_f0 != (long *)0x0) {
      (**(code **)(*local_f0 + 0x18))();
    }
  }
  else {
    local_f8 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_108 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_108 = (undefined1 *)(((ulong)local_108 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_f0 = (long *)0x0;
    pbStack_100 = pbVar6;
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_148 = (undefined1 *)0x462237f7b07aa897;
  pbStack_140 = &DAT_03c91c52;
  local_138 = 4;
  local_130 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_148,3);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_128 = *(undefined1 **)puVar3;
    pbStack_120 = *(byte **)(puVar3 + 8);
    local_118 = *(size_t *)(puVar3 + 0x10);
    local_110 = *(long **)(puVar3 + 0x18);
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x18))();
    }
  }
  else {
    local_118 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_128 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_128 = (undefined1 *)(((ulong)local_128 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_110 = (long *)0x0;
    pbStack_120 = pbVar6;
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_168 = (undefined1 *)0x462237f7b07aa897;
  pbStack_160 = &DAT_03c91c52;
  local_158 = 4;
  local_150 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_168,4);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_148 = *(undefined1 **)puVar3;
    pbStack_140 = *(byte **)(puVar3 + 8);
    local_138 = *(size_t *)(puVar3 + 0x10);
    local_130 = *(long **)(puVar3 + 0x18);
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x18))();
    }
  }
  else {
    local_138 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_148 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_148 = (undefined1 *)(((ulong)local_148 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_130 = (long *)0x0;
    pbStack_140 = pbVar6;
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_188 = (undefined1 *)0x462237f7b07aa897;
  pbStack_180 = &DAT_03c91c52;
  local_178 = 4;
  local_170 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_188,5);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_168 = *(undefined1 **)puVar3;
    pbStack_160 = *(byte **)(puVar3 + 8);
    local_158 = *(size_t *)(puVar3 + 0x10);
    local_150 = *(long **)(puVar3 + 0x18);
    if (local_150 != (long *)0x0) {
      (**(code **)(*local_150 + 0x18))();
    }
  }
  else {
    local_158 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_168 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_168 = (undefined1 *)(((ulong)local_168 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_150 = (long *)0x0;
    pbStack_160 = pbVar6;
  }
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_1a8 = (undefined1 *)0x462237f7b07aa897;
  pbStack_1a0 = &DAT_03c91c52;
  local_198 = 4;
  local_190 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_1a8,6);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_188 = *(undefined1 **)puVar3;
    pbStack_180 = *(byte **)(puVar3 + 8);
    local_178 = *(size_t *)(puVar3 + 0x10);
    local_170 = *(long **)(puVar3 + 0x18);
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x18))();
    }
  }
  else {
    local_178 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_188 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_188 = (undefined1 *)(((ulong)local_188 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_170 = (long *)0x0;
    pbStack_180 = pbVar6;
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_1c8 = (undefined1 *)0x462237f7b07aa897;
  pbStack_1c0 = &DAT_03c91c52;
  local_1b8 = 4;
  local_1b0 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_1c8,7);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_1a8 = *(undefined1 **)puVar3;
    pbStack_1a0 = *(byte **)(puVar3 + 8);
    local_198 = *(size_t *)(puVar3 + 0x10);
    local_190 = *(long **)(puVar3 + 0x18);
    if (local_190 != (long *)0x0) {
      (**(code **)(*local_190 + 0x18))();
    }
  }
  else {
    local_198 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_1a8 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_1a8 = (undefined1 *)(((ulong)local_1a8 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_190 = (long *)0x0;
    pbStack_1a0 = pbVar6;
  }
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_1e8 = (undefined1 *)0x462237f7b07aa897;
  pbStack_1e0 = &DAT_03c91c52;
  local_1d8 = 4;
  local_1d0 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_1e8,8);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_1c8 = *(undefined1 **)puVar3;
    pbStack_1c0 = *(byte **)(puVar3 + 8);
    local_1b8 = *(size_t *)(puVar3 + 0x10);
    local_1b0 = *(long **)(puVar3 + 0x18);
    if (local_1b0 != (long *)0x0) {
      (**(code **)(*local_1b0 + 0x18))();
    }
  }
  else {
    local_1b8 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_1c8 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_1c8 = (undefined1 *)(((ulong)local_1c8 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_1b0 = (long *)0x0;
    pbStack_1c0 = pbVar6;
  }
  if (local_1d0 != (long *)0x0) {
    (**(code **)(*local_1d0 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_208 = (undefined1 *)0x462237f7b07aa897;
  pbStack_200 = &DAT_03c91c52;
  local_1f8 = 4;
  local_1f0 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_208,9);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_1e8 = *(undefined1 **)puVar3;
    pbStack_1e0 = *(byte **)(puVar3 + 8);
    local_1d8 = *(size_t *)(puVar3 + 0x10);
    local_1d0 = *(long **)(puVar3 + 0x18);
    if (local_1d0 != (long *)0x0) {
      (**(code **)(*local_1d0 + 0x18))();
    }
  }
  else {
    local_1d8 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_1e8 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_1e8 = (undefined1 *)(((ulong)local_1e8 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_1d0 = (long *)0x0;
    pbStack_1e0 = pbVar6;
  }
  if (local_1f0 != (long *)0x0) {
    (**(code **)(*local_1f0 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_228 = (undefined1 *)0x462237f7b07aa897;
  pbStack_220 = &DAT_03c91c52;
  local_218 = 4;
  local_210 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_228,10);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_208 = *(undefined1 **)puVar3;
    pbStack_200 = *(byte **)(puVar3 + 8);
    local_1f8 = *(size_t *)(puVar3 + 0x10);
    local_1f0 = *(long **)(puVar3 + 0x18);
    if (local_1f0 != (long *)0x0) {
      (**(code **)(*local_1f0 + 0x18))();
    }
  }
  else {
    local_1f8 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_208 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_208 = (undefined1 *)(((ulong)local_208 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_1f0 = (long *)0x0;
    pbStack_200 = pbVar6;
  }
  if (local_210 != (long *)0x0) {
    (**(code **)(*local_210 + 0x20))();
  }
  plVar5 = (long *)FUN_0145966c();
  local_248 = 0x462237f7b07aa897;
  puStack_240 = &DAT_03c91c52;
  local_238 = 4;
  local_230 = (long *)0x0;
  pbVar6 = (byte *)(**(code **)(*plVar5 + 0x50))(plVar5,&local_248,0xb);
  if (pbVar6 == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_228 = *(undefined1 **)puVar3;
    pbStack_220 = *(byte **)(puVar3 + 8);
    local_218 = *(size_t *)(puVar3 + 0x10);
    local_210 = *(long **)(puVar3 + 0x18);
    if (local_210 != (long *)0x0) {
      (**(code **)(*local_210 + 0x18))();
    }
  }
  else {
    local_218 = strlen((char *)pbVar6);
    bVar1 = *pbVar6;
    local_228 = &DAT_cbf29ce484222645;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      pbVar7 = pbVar7 + 1;
      local_228 = (undefined1 *)(((ulong)local_228 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
    }
    local_210 = (long *)0x0;
    pbStack_220 = pbVar6;
  }
  if (local_230 != (long *)0x0) {
    (**(code **)(*local_230 + 0x20))();
  }
  FUN_01459684(uVar8,&local_c8,1);
  FUN_01459684(uVar8,&local_e8,2);
  FUN_01459684(uVar8,&local_108,4);
  FUN_01459684(uVar8,&local_128,8);
  FUN_01459684(uVar8,&local_148,0x10);
  FUN_01459684(uVar8,&local_168,0x20);
  FUN_01459684(uVar8,&local_188,0x40);
  FUN_01459684(uVar8,&local_1a8,0x80);
  FUN_01459684(uVar8,&local_1c8,0x100);
  FUN_01459684(uVar8,&local_1e8,0x200);
  FUN_01459684(uVar8,&local_208,0x400);
  FUN_01459684(uVar8,&local_228,0x800);
  if (local_210 != (long *)0x0) {
    (**(code **)(*local_210 + 0x20))();
  }
  if (local_1f0 != (long *)0x0) {
    (**(code **)(*local_1f0 + 0x20))();
  }
  if (local_1d0 != (long *)0x0) {
    (**(code **)(*local_1d0 + 0x20))();
  }
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return;
}


