/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033621c; name: FUN_0033621c
 */


void FUN_0033621c(undefined8 *param_1,void *param_2,ulong param_3,long *param_4)

{
  undefined8 uVar1;
  void *__dest;
  ulong uVar2;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  undefined1 auStack_88 [80];
  long *local_38;
  
  local_38 = param_4;
  FUN_00362c44(auStack_88);
  if (*param_4 != 0) {
    *param_1 = 0;
    goto LAB_003362e8;
  }
  if (0xffffffffffffffef < param_3) {
                    /* try { // try from 00336304 to 0033630b has its CatchHandler @ 0033630c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)param_3 << 1));
    __dest = (void *)((ulong)&local_a0 | 1);
    if (param_3 != 0) goto LAB_003362a8;
  }
  else {
    uVar2 = param_3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
    local_a0 = uVar2 | 1;
    local_98 = param_3;
    local_90 = __dest;
LAB_003362a8:
    memcpy(__dest,param_2,param_3);
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
                    /* try { // try from 003362bc to 003362cb has its CatchHandler @ 00336314 */
  uVar1 = FUN_003383e8(&local_a0,auStack_88,&local_38);
  *param_1 = uVar1;
  if ((local_a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_90);
  }
LAB_003362e8:
  FUN_00288048(auStack_88);
  return;
}


