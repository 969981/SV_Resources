/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004adb84; name: FUN_004adb84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004adb84(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  size_t __n;
  undefined8 uVar5;
  void *__dest;
  ulong uVar6;
  ulong local_90;
  undefined8 uStack_88;
  char *local_80;
  ulong local_70;
  size_t local_68;
  void *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  
  local_58 = (undefined4 *)FUN_0049e770(PTR_FUN_047cba38,4);
  local_50 = local_58 + 1;
  *local_58 = 8;
  pbVar4 = (byte *)param_3[1];
  local_60 = (void *)0x0;
  local_70 = 0;
  local_68 = 0;
  if ((*pbVar4 & 1) == 0) {
    __n = (size_t)(*pbVar4 >> 1);
    pbVar4 = pbVar4 + 1;
  }
  else {
    __n = *(size_t *)(pbVar4 + 8);
    pbVar4 = *(byte **)(pbVar4 + 0x10);
  }
  local_48 = local_50;
  if (0xffffffffffffffef < __n + 6) {
                    /* try { // try from 004add3c to 004add43 has its CatchHandler @ 004add84 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n + 6 < 0x17) {
    local_70 = (ulong)(byte)((int)__n << 1);
    __dest = (void *)((ulong)&local_70 | 1);
    if (__n == 0) goto LAB_004adc50;
  }
  else {
    uVar6 = __n + 0x16 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    local_70 = uVar6 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,pbVar4,__n);
LAB_004adc50:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 004adc54 to 004adc67 has its CatchHandler @ 004add84 */
  FUN_0021d540(&local_70,".dummy",6);
  uVar5 = *param_3;
  local_80 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar3 = s_google_protobuf_FileOptions_03c17c42._0_8_;
  uVar1 = CONCAT53(s_google_protobuf_FileOptions_03c17c42._11_5_,
                   s_google_protobuf_FileOptions_03c17c42._8_3_);
  uStack_88 = _UNK_03caa878;
  local_90 = _DAT_03caa870;
  uVar2 = CONCAT35(s_google_protobuf_FileOptions_03c17c42._16_3_,
                   s_google_protobuf_FileOptions_03c17c42._11_5_);
  *(undefined8 *)(local_80 + 0x13) = s_google_protobuf_FileOptions_03c17c42._19_8_;
  *(undefined8 *)(local_80 + 0xb) = uVar2;
  *(undefined8 *)(local_80 + 8) = uVar1;
  *(undefined8 *)local_80 = uVar3;
  local_80[0x1b] = '\0';
                    /* try { // try from 004adca8 to 004adcc7 has its CatchHandler @ 004add44 */
  FUN_004addc0(param_1,&local_70,uVar5,param_2,param_3,&local_58,&local_90);
  if ((local_90 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_80);
  }
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
  if (local_58 != (undefined4 *)0x0) {
    local_50 = local_58;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


