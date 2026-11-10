/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00262460; name: FUN_00262460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00262460(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  size_t __n;
  void *__dest;
  ulong uVar6;
  ulong local_78;
  size_t local_70;
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  char *local_50;
  
  pcVar1 = (char *)(param_3 + 0x81);
  if ((*(byte *)(param_3 + 0x80) & 1) != 0) {
    pcVar1 = *(char **)(param_3 + 0x90);
  }
  if (*pcVar1 == '\0') goto LAB_00262598;
  local_50 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar5 = s_grpc_ssl_target_name_override_03c963d9._21_8_;
  uVar4 = s_grpc_ssl_target_name_override_03c963d9._0_8_;
  uVar3 = CONCAT53(s_grpc_ssl_target_name_override_03c963d9._16_5_,
                   s_grpc_ssl_target_name_override_03c963d9._13_3_);
  uStack_58 = _UNK_03cabb98;
  local_60 = _DAT_03cabb90;
  uVar2 = CONCAT35(s_grpc_ssl_target_name_override_03c963d9._13_3_,
                   s_grpc_ssl_target_name_override_03c963d9._8_5_);
  local_50[0x1d] = '\0';
  *(undefined8 *)(local_50 + 0x15) = uVar5;
  *(undefined8 *)(local_50 + 0xd) = uVar3;
  *(undefined8 *)(local_50 + 8) = uVar2;
  *(undefined8 *)local_50 = uVar4;
  pcVar1 = (char *)(param_3 + 0x81);
  if ((*(byte *)(param_3 + 0x80) & 1) != 0) {
    pcVar1 = *(char **)(param_3 + 0x90);
  }
  __n = strlen(pcVar1);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002625bc to 002625c3 has its CatchHandler @ 002625c4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_78 | 1);
    if (__n != 0) goto LAB_00262544;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    local_78 = uVar6 | 1;
    local_70 = __n;
    local_68 = __dest;
LAB_00262544:
    memcpy(__dest,pcVar1,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00262558 to 00262567 has its CatchHandler @ 002625d4 */
  FUN_002734c8(param_2,&local_60,&local_78);
  if ((local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  if ((local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
LAB_00262598:
                    /* try { // try from 00262598 to 002625a3 has its CatchHandler @ 00262620 */
  FUN_002736c0(param_1,param_2);
  return;
}


