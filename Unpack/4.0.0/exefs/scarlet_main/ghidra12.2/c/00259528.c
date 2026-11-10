/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00259528; name: FUN_00259528
 */


void FUN_00259528(undefined8 param_1,long *param_2,char *param_3)

{
  size_t __n;
  void *__dest;
  ulong uVar1;
  long lVar2;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long local_60 [4];
  ulong *local_38;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    FUN_0026349c(param_1);
    return;
  }
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00259648 to 0025964f has its CatchHandler @ 00259650 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_78 | 1);
    if (__n == 0) goto LAB_002595d4;
  }
  else {
    uVar1 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar1);
    local_78 = uVar1 | 1;
    local_70 = __n;
    local_68 = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_002595d4:
  *(undefined1 *)((long)__dest + __n) = 0;
  local_38 = &local_78;
                    /* try { // try from 002595e4 to 002595f3 has its CatchHandler @ 00259654 */
  FUN_0025998c(local_60,*(undefined8 *)(lVar2 + 0x20),&local_38,0);
  if ((local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  if (local_60[0] == 0) {
    FUN_0026349c(param_1);
  }
  else {
    FUN_002634a4(param_1,*(long *)(local_60[0] + 8) + 0x18);
  }
  return;
}


