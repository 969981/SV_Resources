/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ef6c0; name: FUN_002ef6c0
 */


undefined8
FUN_002ef6c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *local_268;
  ulong local_260;
  long local_258;
  undefined8 local_250;
  ulong *local_248;
  ulong local_240;
  ulong uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  ulong *local_218;
  ulong uStack_210;
  ulong local_208;
  ulong local_200;
  ulong uStack_1f8;
  void *local_1f0;
  undefined8 local_1e8;
  byte local_1e0 [8];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 local_1c0;
  undefined1 auStack_1b0 [24];
  byte local_198;
  undefined4 local_197;
  undefined8 local_188;
  undefined1 auStack_180 [8];
  byte local_178;
  undefined8 local_168;
  undefined1 auStack_160 [8];
  undefined8 local_158;
  undefined1 auStack_148 [24];
  byte local_130;
  undefined4 local_12f;
  undefined8 local_120;
  undefined4 local_118 [2];
  byte local_110 [16];
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  byte local_c8;
  undefined4 local_c7;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_a8 [16];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (DAT_047ef248 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002ef72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*DAT_047ef248)(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_200 = CONCAT35(local_200._5_3_,0x676c6106);
                    /* try { // try from 002ef750 to 002ef75f has its CatchHandler @ 002f02e0 */
  FUN_002f0544(&local_1e8,"RS256",0);
  local_198 = 6;
  local_197 = 0x707974;
                    /* try { // try from 002ef77c to 002ef78b has its CatchHandler @ 002f0234 */
  FUN_002f0544(auStack_180,&DAT_03c2bae2,0);
  local_130 = 6;
  local_12f = 0x64696b;
                    /* try { // try from 002ef7a4 to 002ef7af has its CatchHandler @ 002f0210 */
  FUN_002f0544(local_118,uVar2,0);
                    /* try { // try from 002ef7b0 to 002ef7c3 has its CatchHandler @ 002f014c */
  FUN_002f0460(&local_218,&local_200,3);
  local_268 = (long *)CONCAT44(local_268._4_4_,5);
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = local_218;
  local_240 = uStack_210;
  uStack_238 = local_208;
  if (local_208 == 0) {
    local_248 = &local_240;
  }
  else {
    *(ulong **)(uStack_210 + 0x10) = &local_240;
    local_218 = &uStack_210;
    uStack_210 = 0;
    local_208 = 0;
  }
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  FUN_0025cef0(&local_218,uStack_210);
  FUN_002f03bc(&uStack_e0);
  FUN_0025cef0(&local_f8,local_f0);
  if ((local_110[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_100);
  }
  if ((local_130 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_120);
  }
  FUN_002f03bc(auStack_148);
  FUN_0025cef0(auStack_160,local_158);
  if ((local_178 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_168);
  }
  if ((local_198 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_188);
  }
  FUN_002f03bc(auStack_1b0);
  FUN_0025cef0(auStack_1c8,local_1c0);
  if ((local_1e0[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1d0);
  }
  if ((local_200 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1f0);
  }
                    /* try { // try from 002ef8fc to 002ef90f has its CatchHandler @ 002f0120 */
  FUN_003649fc(&local_200,&local_268,0);
  uVar5 = local_200 >> 1 & 0x7f;
  pvVar9 = (void *)((ulong)&local_200 | 1);
  if ((local_200 & 1) != 0) {
    uVar5 = uStack_1f8;
    pvVar9 = local_1f0;
  }
                    /* try { // try from 002ef92c to 002ef937 has its CatchHandler @ 002f0100 */
  uVar2 = FUN_00366290(pvVar9,uVar5,1,0);
  if ((local_200 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1f0);
  }
  FUN_002f03bc(&local_230);
  FUN_0025cef0(&local_248,local_240);
  if ((local_260 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_250);
  }
  auVar11 = FUN_0038e500(1);
  uVar6 = auVar11._0_8_;
  uVar3 = FUN_0038dee0(uVar6,auVar11._8_8_,param_3,param_4);
  iVar1 = FUN_0038dcf0(param_3,param_4,0xe10,0x300000000);
  if (0 < iVar1) {
    uVar3 = FUN_0038dee0(uVar6,auVar11._8_8_,0xe10,0x300000000);
  }
  local_200 = CONCAT35(local_200._5_3_,0x73736906);
                    /* try { // try from 002ef9f8 to 002ef9ff has its CatchHandler @ 002f00fc */
  FUN_002f0838(&local_1e8,*(undefined8 *)(param_1 + 0x18),0);
  local_198 = 6;
  local_197 = 0x647561;
                    /* try { // try from 002efa14 to 002efa1f has its CatchHandler @ 002f0070 */
  FUN_002f0544(auStack_180,param_2,0);
  local_130 = 6;
  local_12f = 0x746169;
  local_118[0] = 3;
                    /* try { // try from 002efa44 to 002efa4b has its CatchHandler @ 002f004c */
  FUN_002f09c0(local_110,uVar6);
  local_f8 = &local_f0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = 6;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c7 = 0x707865;
  local_b0 = 3;
                    /* try { // try from 002efa78 to 002efa7f has its CatchHandler @ 002f0020 */
  FUN_002f09c0(local_a8,uVar3);
  local_68 = 0;
  local_90 = &local_88;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
                    /* try { // try from 002efaa0 to 002efaaf has its CatchHandler @ 002effc4 */
  FUN_002f0460(&local_268,&local_200,4);
  FUN_002f03bc(&uStack_78);
  FUN_0025cef0(&local_90,local_88);
  if ((local_a8[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_98);
  }
  if ((local_c8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b8);
  }
  FUN_002f03bc(&uStack_e0);
  FUN_0025cef0(&local_f8,local_f0);
  if ((local_110[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_100);
  }
  if ((local_130 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_120);
  }
  FUN_002f03bc(auStack_148);
  FUN_0025cef0(auStack_160,local_158);
  if ((local_178 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_168);
  }
  if ((local_198 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_188);
  }
  FUN_002f03bc(auStack_1b0);
  FUN_0025cef0(auStack_1c8,local_1c0);
  if ((local_1e0[0] & 1) == 0) {
    if ((local_200 & 1) == 0) goto LAB_002efbac;
LAB_002efc74:
    FUN_0049e790(PTR_LAB_047cba48,local_1f0);
    if (param_5 == (char *)0x0) goto LAB_002efc88;
LAB_002efbb0:
    local_218 = (ulong *)CONCAT17(local_218._7_1_,0x65706f63730a);
                    /* try { // try from 002efbcc to 002efbdb has its CatchHandler @ 002eff44 */
    puVar4 = (undefined8 *)FUN_002885a4(&local_268,&local_200,&local_218);
    puVar8 = (undefined8 *)*puVar4;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
      puVar8[6] = local_208;
      puVar8[5] = uStack_210;
      puVar8[4] = local_218;
      uStack_210 = 0;
      local_208 = 0;
      local_218 = (ulong *)0x0;
      puVar8[0xc] = 0;
      puVar8[0xb] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xb] = puVar8 + 0xc;
      puVar8[10] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[7] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[2] = local_200;
      *puVar8 = 0;
      puVar8[1] = 0;
      *puVar4 = puVar8;
      if ((long *)*local_268 == (long *)0x0) {
        puVar4 = puVar8;
      }
      else {
        puVar4 = (undefined8 *)*puVar4;
        local_268 = (long *)*local_268;
      }
      FUN_010108e0(local_260,puVar4);
      local_258 = local_258 + 1;
    }
    uVar5 = strlen(param_5);
    if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 002efd58 to 002efd5f has its CatchHandler @ 002eff44 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,local_1d0);
    if ((local_200 & 1) != 0) goto LAB_002efc74;
LAB_002efbac:
    if (param_5 != (char *)0x0) goto LAB_002efbb0;
LAB_002efc88:
    param_5 = *(char **)(param_1 + 0x18);
    local_218 = (ulong *)CONCAT35(local_218._5_3_,0x62757306);
                    /* try { // try from 002efca0 to 002efcaf has its CatchHandler @ 002eff40 */
    puVar4 = (undefined8 *)FUN_002885a4(&local_268,&local_200,&local_218);
    puVar8 = (undefined8 *)*puVar4;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
      puVar8[6] = local_208;
      puVar8[5] = uStack_210;
      puVar8[4] = local_218;
      uStack_210 = 0;
      local_208 = 0;
      local_218 = (ulong *)0x0;
      puVar8[0xc] = 0;
      puVar8[0xb] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xb] = puVar8 + 0xc;
      puVar8[10] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[7] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[2] = local_200;
      *puVar8 = 0;
      puVar8[1] = 0;
      *puVar4 = puVar8;
      if ((long *)*local_268 == (long *)0x0) {
        puVar4 = puVar8;
      }
      else {
        puVar4 = (undefined8 *)*puVar4;
        local_268 = (long *)*local_268;
      }
      FUN_010108e0(local_260,puVar4);
      local_258 = local_258 + 1;
    }
    uVar5 = strlen(param_5);
    if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 002eff38 to 002eff3f has its CatchHandler @ 002eff40 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
  }
  if (uVar5 < 0x17) {
    local_200 = CONCAT71(local_200._1_7_,(char)((int)uVar5 << 1));
    pvVar9 = (void *)((ulong)&local_200 | 1);
    if (uVar5 == 0) goto LAB_002efde4;
  }
  else {
    uVar10 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar10);
    local_200 = uVar10 | 1;
    uStack_1f8 = uVar5;
    local_1f0 = pvVar9;
  }
  memcpy(pvVar9,param_5,uVar5);
LAB_002efde4:
  *(undefined1 *)((long)pvVar9 + uVar5) = 0;
  *(undefined4 *)(puVar8 + 7) = 4;
  if ((puVar8[8] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,puVar8[10]);
  }
  puVar8[10] = local_1f0;
  puVar8[9] = uStack_1f8;
  puVar8[8] = local_200;
  if (((ulong)local_218 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_208);
  }
                    /* try { // try from 002efe34 to 002efe3f has its CatchHandler @ 002effb0 */
  FUN_002f06c0(&local_200,&local_268);
                    /* try { // try from 002efe40 to 002efe53 has its CatchHandler @ 002eff78 */
  FUN_003649fc(&local_218,&local_200,0);
  uVar5 = (ulong)local_218 >> 1 & 0x7f;
  uVar10 = (ulong)&local_218 | 1;
  if (((ulong)local_218 & 1) != 0) {
    uVar5 = uStack_210;
    uVar10 = local_208;
  }
                    /* try { // try from 002efe70 to 002efe7b has its CatchHandler @ 002eff58 */
  uVar6 = FUN_00366290(uVar10,uVar5,1,0);
  if (((ulong)local_218 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_208);
  }
  FUN_002f03bc(auStack_1c8);
  FUN_0025cef0(local_1e0,local_1d8);
  if ((uStack_1f8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_1e8);
  }
  FUN_0025cef0(&local_268,local_260);
  pvVar9 = (void *)FUN_002f0310(uVar2,uVar6);
  lVar7 = FUN_002ef550(param_1,"RS256",pvVar9);
  if (lVar7 == 0) {
    free(pvVar9);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_002f0310(pvVar9,lVar7);
  }
  return uVar2;
}


