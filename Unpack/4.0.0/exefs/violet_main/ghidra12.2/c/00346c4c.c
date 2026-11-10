/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00346c4c; name: FUN_00346c4c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00346c4c(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  void *__src;
  uint uVar2;
  void *__dest;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  byte local_210;
  undefined7 uStack_20f;
  char local_208;
  undefined2 uStack_207;
  undefined5 uStack_205;
  long local_200;
  undefined4 local_1f8;
  ulong local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 *puStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  long local_1a0;
  long local_198;
  ulong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178 [2];
  undefined8 local_170;
  ulong uStack_168;
  void *local_160;
  long *local_158;
  long local_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  byte local_128;
  undefined4 local_127;
  undefined1 local_123;
  undefined8 local_118;
  undefined4 local_110;
  ulong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long *local_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined1 auStack_70 [24];
  long *local_58;
  long local_50;
  long local_48;
  
  local_190 = 0x7465677261740c;
  local_178[0] = 4;
  if ((*(byte *)(param_2 + 0x38) & 1) == 0) {
    uStack_168 = *(ulong *)(param_2 + 0x40);
    local_170 = *(ulong *)(param_2 + 0x38);
    local_160 = *(void **)(param_2 + 0x48);
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x40);
    __src = *(void **)(param_2 + 0x48);
    if (uVar1 < 0x17) {
      __dest = (void *)((long)&local_170 + 1);
      local_170 = CONCAT71(local_170._1_7_,(char)((int)uVar1 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0034735c to 0034735f has its CatchHandler @ 00347360 */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar8 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
      local_170 = uVar8 | 1;
      uStack_168 = uVar1;
      local_160 = __dest;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  local_158 = &local_150;
  local_148 = 0;
  local_140 = 0;
  local_150 = 0;
  local_138 = 0;
  local_130 = 0;
                    /* try { // try from 00346d20 to 00346d2f has its CatchHandler @ 003475c0 */
  FUN_00347670(&local_58,&local_190,1);
  FUN_003481a8(&local_140);
  FUN_0025cef0(&local_158,local_150);
  if ((local_170 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_160);
  }
  if ((local_190 & 1) == 0) {
    uVar2 = *(uint *)(param_2 + 0x100);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,local_180);
    uVar2 = *(uint *)(param_2 + 0x100);
  }
  if ((uVar2 & 1) != 0) {
    local_a8._7_1_ = (undefined1)(local_a8 >> 0x38);
                    /* try { // try from 00346d94 to 00346d9b has its CatchHandler @ 003473e0 */
    uVar3 = FUN_00374fc0((int)uVar2 >> 1);
    local_190 = CONCAT17(local_190._7_1_,0x65746174730a);
                    /* try { // try from 00346dc0 to 00346dc7 has its CatchHandler @ 003473cc */
    FUN_002f0544(local_178,uVar3,0);
                    /* try { // try from 00346dc8 to 00346dd7 has its CatchHandler @ 00347394 */
    FUN_00347670(&local_210,&local_190,1);
    local_a8 = CONCAT17(local_a8._7_1_,0x65746174730a);
                    /* try { // try from 00346de4 to 00346df3 has its CatchHandler @ 00347368 */
    puVar4 = (undefined8 *)FUN_002885a4(&local_58,&local_c0,&local_a8);
    puVar7 = (undefined8 *)*puVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
      puVar7[6] = local_98;
      puVar7[5] = uStack_a0;
      puVar7[4] = local_a8;
      uStack_a0 = 0;
      local_98 = 0;
      local_a8 = 0;
      puVar7[0xc] = 0;
      puVar7[0xb] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar7[0xb] = puVar7 + 0xc;
      puVar7[10] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[2] = local_c0;
      *puVar7 = 0;
      puVar7[1] = 0;
      *puVar4 = puVar7;
      if ((long *)*local_58 == (long *)0x0) {
        puVar4 = puVar7;
      }
      else {
        puVar4 = (undefined8 *)*puVar4;
        local_58 = (long *)*local_58;
      }
      FUN_010108e0(local_50,puVar4);
      local_48 = local_48 + 1;
    }
    puVar4 = puVar7 + 0xc;
    *(undefined4 *)(puVar7 + 7) = 5;
    FUN_0025cef0(puVar7 + 0xb,*puVar4);
    lVar5 = CONCAT53(uStack_205,CONCAT21(uStack_207,local_208));
    puVar7[0xb] = CONCAT71(uStack_20f,local_210);
    puVar7[0xc] = lVar5;
    puVar7[0xd] = local_200;
    if (local_200 == 0) {
      puVar7[0xb] = puVar4;
    }
    else {
      *(undefined8 **)(lVar5 + 0x10) = puVar4;
      lVar5 = 0;
      local_210 = (byte)&local_208;
      uStack_20f = (undefined7)((ulong)&local_208 >> 8);
      local_208 = '\0';
      uStack_207 = 0;
      uStack_205 = 0;
    }
    local_200 = 0;
    if ((local_a8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_98);
      lVar5 = CONCAT53(uStack_205,CONCAT21(uStack_207,local_208));
    }
    FUN_0025cef0(&local_210,lVar5);
    FUN_003481a8(&local_140);
    FUN_0025cef0(&local_158,local_150);
    if ((local_170 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_160);
    }
    if ((local_190 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_180);
    }
  }
                    /* try { // try from 00346f44 to 00346f4b has its CatchHandler @ 003475b8 */
  FUN_003455e0(&local_a8,param_2 + 0xa0);
  if ((int)local_a8 != 0) {
    local_190 = CONCAT17(local_190._7_1_,0x65636172740a);
                    /* try { // try from 00346f70 to 00347033 has its CatchHandler @ 00347610 */
    puVar4 = (undefined8 *)FUN_002885a4(&local_58,&local_210,&local_190);
    puVar7 = (undefined8 *)*puVar4;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
      puVar7[6] = local_180;
      puVar7[5] = uStack_188;
      puVar7[4] = local_190;
      uStack_188 = 0;
      local_180 = 0;
      local_190 = 0;
      puVar7[0xc] = 0;
      puVar7[0xb] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar7[0xb] = puVar7 + 0xc;
      puVar7[10] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[2] = CONCAT71(uStack_20f,local_210);
      *puVar7 = 0;
      puVar7[1] = 0;
      *puVar4 = puVar7;
      if ((long *)*local_58 == (long *)0x0) {
        puVar4 = puVar7;
      }
      else {
        puVar4 = (undefined8 *)*puVar4;
        local_58 = (long *)*local_58;
      }
      FUN_010108e0(local_50,puVar4);
      local_48 = local_48 + 1;
    }
    FUN_002f17c8(puVar7 + 7,&local_a8);
    if ((local_190 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_180);
    }
  }
                    /* try { // try from 00347050 to 00347057 has its CatchHandler @ 003475b0 */
  FUN_0034635c(param_2 + 0x50,&local_58);
                    /* try { // try from 0034705c to 00347063 has its CatchHandler @ 00347530 */
  FUN_002f09c0(&local_228,*(undefined8 *)(param_2 + 0x18));
  local_1e0 = local_218;
  uStack_1e8 = uStack_220;
  local_1f0 = local_228;
  local_210 = 0x12;
  local_1d0 = 0;
  uStack_1c8 = 0;
  uStack_207 = 100;
  local_1f8 = 4;
  local_218 = 0;
  uStack_20f = s_channelId_03c25106._0_7_;
  local_208 = s_channelId_03c25106[7];
  local_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1d8 = &local_1d0;
  local_1b0 = 0;
  local_228 = 0;
  uStack_220 = 0;
                    /* try { // try from 003470b8 to 003470c7 has its CatchHandler @ 003474a4 */
  FUN_00347670(&local_1a8,&local_210,1);
  local_190 = CONCAT35(local_190._5_3_,0x66657206);
  local_170 = 0;
  uStack_168 = 0;
  local_178[0] = 5;
  local_160 = (void *)0x0;
  local_158 = local_1a8;
  local_150 = local_1a0;
  local_148 = local_198;
  if (local_198 == 0) {
    local_158 = &local_150;
  }
  else {
    *(long **)(local_1a0 + 0x10) = &local_150;
    local_1a8 = &local_1a0;
    local_1a0 = 0;
    local_198 = 0;
  }
  local_128 = 8;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_127 = 0x61746164;
  local_123 = 0;
  local_110 = 5;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = local_58;
  local_e8 = local_50;
  lStack_e0 = local_48;
  if (local_48 == 0) {
    local_f0 = &local_e8;
  }
  else {
    *(long **)(local_50 + 0x10) = &local_e8;
    local_58 = &local_50;
    local_50 = 0;
    local_48 = 0;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
                    /* try { // try from 00347188 to 0034719b has its CatchHandler @ 003473fc */
  FUN_00347670(&local_c0,&local_190,2);
  FUN_003481a8(&local_d8);
  FUN_0025cef0(&local_f0,local_e8);
  if ((local_108 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_f8);
  }
  if ((local_128 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_118);
  }
  FUN_003481a8(&local_140);
  FUN_0025cef0(&local_158,local_150);
  if ((local_170 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_160);
  }
  if ((local_190 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_180);
  }
  FUN_0025cef0(&local_1a8,local_1a0);
  FUN_003481a8(&local_1c0);
  FUN_0025cef0(&puStack_1d8,local_1d0);
  if ((local_1f0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1e0);
  }
  if ((local_210 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_200);
  }
  if ((local_228 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_218);
  }
                    /* try { // try from 00347274 to 0034727f has its CatchHandler @ 003473e8 */
  FUN_00347754(param_2,&local_c0);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 5;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = local_c0;
  plVar6 = (long *)(param_1 + 10);
  *plVar6 = local_b8;
  *(long *)(param_1 + 0xc) = local_b0;
  if (local_b0 == 0) {
    *(long **)(param_1 + 8) = plVar6;
  }
  else {
    *(long **)(local_b8 + 0x10) = plVar6;
    local_c0 = &local_b8;
    local_b8 = 0;
    local_b0 = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  FUN_0025cef0(&local_c0,local_b8);
  FUN_003481a8(auStack_70);
  FUN_0025cef0(auStack_88,local_80);
  if ((uStack_a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_90);
  }
  FUN_0025cef0(&local_58,local_50);
  return;
}


