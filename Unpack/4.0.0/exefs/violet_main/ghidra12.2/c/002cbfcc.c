/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cbfcc; name: FUN_002cbfcc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cbfcc(byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *__src;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ostream *poVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined1 *__dest;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined8 uVar16;
  byte *local_1b0;
  ulong local_1a8;
  char *local_1a0;
  byte *local_198;
  ulong uStack_190;
  byte local_188 [8];
  ulong local_180;
  char *local_178;
  byte *local_170;
  ulong uStack_168;
  undefined1 *local_160;
  byte **local_60;
  void *local_58;
  ulong local_50;
  byte *local_48;
  
  if (DAT_047ef1b0 != -1) {
    local_170 = local_188;
    local_60 = &local_170;
    std::__call_once((ulong *)&DAT_047ef1b0,&local_60,(_func_void_void_ptr *)&LAB_002ce9c0);
  }
  FUN_0026c6b8(param_1,*param_2,param_2[1]);
  pbVar15 = param_1 + 0x48;
  uVar16 = *param_3;
  uVar12 = param_3[2];
  *(undefined8 *)(param_1 + 0x20) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = uVar16;
  *(undefined8 *)(param_1 + 0x28) = uVar12;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)(param_1 + 0x38) = DAT_047ef1b8;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  if ((*pbVar15 & 1) == 0) {
    pbVar15[0] = 0;
    pbVar15[1] = 0;
    if ((param_1[0x60] & 1) == 0) goto LAB_002cc09c;
LAB_002cc074:
    **(undefined1 **)(param_1 + 0x70) = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x58) = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    if ((param_1[0x60] & 1) != 0) goto LAB_002cc074;
LAB_002cc09c:
    param_1[0x60] = 0;
    param_1[0x61] = 0;
  }
  param_1[0x78] = 0;
  pbVar13 = param_1 + 0x80;
  pbVar13[0] = 0;
  pbVar13[1] = 0;
  pbVar13[2] = 0;
  pbVar13[3] = 0;
  pbVar13[4] = 0;
  pbVar13[5] = 0;
  pbVar13[6] = 0;
  pbVar13[7] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0xff;
  param_1[0x91] = 0xff;
  param_1[0x92] = 0xff;
  param_1[0x93] = 0xff;
  param_1[0x94] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  local_60 = (byte **)((ulong)local_60 & 0xffffffff00000000);
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (byte *)0x0;
  local_170 = *(byte **)(param_1 + 0x10);
  bVar4 = (*param_1 & 1) == 0;
  if (bVar4) {
    local_170 = param_1 + 1;
  }
  uStack_168 = (ulong)(*param_1 >> 1);
  if (!bVar4) {
    uStack_168 = *(ulong *)(param_1 + 8);
  }
                    /* try { // try from 002cc0f4 to 002cc107 has its CatchHandler @ 002cc5a0 */
  uVar6 = FUN_002cc6e8(param_1 + 0x18);
  lVar7 = FUN_002e26d8(&local_170,uVar6,&local_60);
  *(long *)(param_1 + 0x30) = lVar7;
  if (lVar7 != 0) {
                    /* try { // try from 002cc114 to 002cc123 has its CatchHandler @ 002cc5a4 */
    uVar8 = FUN_002e5fa8(lVar7,param_1 + 0x60,param_1 + 0x78,&local_198);
    if ((uVar8 & 1) == 0) {
                    /* try { // try from 002cc280 to 002cc2bf has its CatchHandler @ 002cc5a4 */
      pbVar15 = (byte *)FUN_002e4590(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      pbVar15 = local_198;
    }
    lVar7 = *(ulong *)(param_1 + 0x20) << 1;
    *(byte **)(param_1 + 0x80) = pbVar15;
    lVar7 = FUN_002dcff8(pbVar15,lVar7 / 3 + (lVar7 >> 0x3f) +
                                 ((*(ulong *)(param_1 + 0x20) & 0x7fffffffffffffff) >> 0x3e));
    *(long *)(param_1 + 0x88) = lVar7;
    if (lVar7 == 0) {
      if (param_1[0x1e] != 0) {
                    /* try { // try from 002cc2d4 to 002cc2eb has its CatchHandler @ 002cc534 */
        FUN_002cc810(&local_170,"external/com_github_google_re2/re2/re2.cc",0xe0);
                    /* try { // try from 002cc2f0 to 002cc2ff has its CatchHandler @ 002cc52c */
        poVar9 = std::__put_character_sequence<char,std::char_traits<char>>
                           ((ostream *)&uStack_168,"Error compiling \'",0x11);
        bVar4 = (*param_1 & 1) != 0;
        local_1b0 = param_1 + 1;
        if (bVar4) {
          local_1b0 = *(byte **)(param_1 + 0x10);
        }
        local_1a8 = (ulong)(*param_1 >> 1);
        if (bVar4) {
          local_1a8 = *(ulong *)(param_1 + 8);
        }
                    /* try { // try from 002cc324 to 002cc333 has its CatchHandler @ 002cc524 */
        FUN_002ccab0(local_188,&local_1b0);
        uVar8 = (ulong)(local_188[0] >> 1);
        pcVar11 = (char *)((ulong)local_188 | 1);
        if ((local_188[0] & 1) != 0) {
          uVar8 = local_180;
          pcVar11 = local_178;
        }
                    /* try { // try from 002cc350 to 002cc367 has its CatchHandler @ 002cc570 */
        poVar9 = std::__put_character_sequence<char,std::char_traits<char>>(poVar9,pcVar11,uVar8);
        std::__put_character_sequence<char,std::char_traits<char>>(poVar9,"\'",1);
        if ((local_188[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_178);
        }
        FUN_002cc97c(&local_170);
      }
      puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
      if (puVar10 != (undefined8 *)0x0) {
        pcVar11 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
        uVar16 = _UNK_03cac1c8;
        uVar12 = _DAT_03cac1c0;
        puVar10[2] = pcVar11;
        puVar10[1] = uVar16;
        *puVar10 = uVar12;
        uVar3 = s_pattern_too_large___compile_fail_03be0221._24_8_;
        uVar2 = s_pattern_too_large___compile_fail_03be0221._16_8_;
        uVar16 = s_pattern_too_large___compile_fail_03be0221._8_8_;
        uVar12 = s_pattern_too_large___compile_fail_03be0221._0_8_;
        pcVar11[0x20] = 'e';
        pcVar11[0x21] = 'd';
        pcVar11[0x22] = '\0';
        *(undefined8 *)(pcVar11 + 8) = uVar16;
        *(undefined8 *)pcVar11 = uVar12;
        *(undefined8 *)(pcVar11 + 0x18) = uVar3;
        *(undefined8 *)(pcVar11 + 0x10) = uVar2;
      }
      *(undefined8 **)(param_1 + 0x38) = puVar10;
      param_1[0x40] = 0xe;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
    }
    else {
      uVar6 = FUN_002e5d48(*(undefined8 *)pbVar13);
      *(undefined4 *)(param_1 + 0x90) = uVar6;
      bVar5 = FUN_002cf658(*(undefined8 *)(param_1 + 0x88));
      param_1[0x94] = bVar5 & 1;
    }
    goto LAB_002cc474;
  }
  if (param_1[0x1e] != 0) {
                    /* try { // try from 002cc138 to 002cc14f has its CatchHandler @ 002cc56c */
    FUN_002cc810(&local_170,"external/com_github_google_re2/re2/re2.cc",0xcb);
                    /* try { // try from 002cc154 to 002cc163 has its CatchHandler @ 002cc564 */
    poVar9 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)&uStack_168,"Error parsing \'",0xf);
    bVar4 = (*param_1 & 1) != 0;
    local_198 = param_1 + 1;
    if (bVar4) {
      local_198 = *(byte **)(param_1 + 0x10);
    }
    uStack_190 = (ulong)(*param_1 >> 1);
    if (bVar4) {
      uStack_190 = *(ulong *)(param_1 + 8);
    }
                    /* try { // try from 002cc188 to 002cc197 has its CatchHandler @ 002cc55c */
    FUN_002ccab0(local_188,&local_198);
    uVar8 = (ulong)(local_188[0] >> 1);
    pcVar11 = (char *)((ulong)local_188 | 1);
    if ((local_188[0] & 1) != 0) {
      uVar8 = local_180;
      pcVar11 = local_178;
    }
                    /* try { // try from 002cc1b4 to 002cc1cb has its CatchHandler @ 002cc578 */
    poVar9 = std::__put_character_sequence<char,std::char_traits<char>>(poVar9,pcVar11,uVar8);
    poVar9 = std::__put_character_sequence<char,std::char_traits<char>>(poVar9,"\': ",3);
                    /* try { // try from 002cc1d0 to 002cc1df has its CatchHandler @ 002cc558 */
    FUN_002e5b1c(&local_1b0,&local_60);
    uVar8 = (ulong)local_1b0 >> 1 & 0x7f;
    pcVar11 = (char *)((ulong)&local_1b0 | 1);
    if (((ulong)local_1b0 & 1) != 0) {
      uVar8 = local_1a8;
      pcVar11 = local_1a0;
    }
                    /* try { // try from 002cc1fc to 002cc203 has its CatchHandler @ 002cc538 */
    std::__put_character_sequence<char,std::char_traits<char>>(poVar9,pcVar11,uVar8);
    if (((ulong)local_1b0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_1a0);
    }
    if ((local_188[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_178);
    }
    FUN_002cc97c(&local_170);
  }
                    /* try { // try from 002cc23c to 002cc247 has its CatchHandler @ 002cc574 */
  FUN_002e5b1c(&local_170,&local_60);
  puVar10 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar10 == (undefined8 *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    if (((ulong)local_170 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_160);
    }
  }
  else {
    puVar10[2] = local_160;
    puVar10[1] = uStack_168;
    *puVar10 = local_170;
    uStack_168 = 0;
    local_160 = (undefined1 *)0x0;
    local_170 = (byte *)0x0;
    *(undefined8 **)(param_1 + 0x38) = puVar10;
  }
  uVar8 = local_50;
  __src = local_58;
  uVar1 = (uint)local_60;
  if (0xd < (uint)local_60) {
    uVar1 = 1;
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  if (local_58 == (void *)0x0) {
    local_170 = (byte *)0x0;
    uStack_168 = 0;
    local_160 = (undefined1 *)0x0;
    bVar5 = *pbVar15;
  }
  else {
    if (0xffffffffffffffef < local_50) {
                    /* try { // try from 002cc518 to 002cc51f has its CatchHandler @ 002cc520 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (local_50 < 0x17) {
      local_170 = (byte *)CONCAT71(local_170._1_7_,(char)((int)local_50 << 1));
      __dest = (undefined1 *)((ulong)&local_170 | 1);
      if (local_50 == 0) {
        *__dest = 0;
        bVar5 = *pbVar15;
        goto joined_r0x002cc4c8;
      }
    }
    else {
      uVar14 = local_50 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
      local_170 = (byte *)(uVar14 | 1);
      uStack_168 = uVar8;
      local_160 = __dest;
    }
    memcpy(__dest,__src,uVar8);
    __dest[uVar8] = 0;
    bVar5 = *pbVar15;
  }
joined_r0x002cc4c8:
  if ((bVar5 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined1 **)(param_1 + 0x58) = local_160;
  *(ulong *)(param_1 + 0x50) = uStack_168;
  *(byte **)pbVar15 = local_170;
LAB_002cc474:
  pbVar15 = local_48;
  if (local_48 != (byte *)0x0) {
    if ((*local_48 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(local_48 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar15);
  }
  return;
}


