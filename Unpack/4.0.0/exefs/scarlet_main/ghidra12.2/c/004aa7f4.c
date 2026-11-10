/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004aa7f4; name: FUN_004aa7f4
 */


void FUN_004aa7f4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 char *param_5)

{
  size_t __n;
  long *plVar1;
  undefined1 *__dest;
  ulong uVar2;
  ulong local_68;
  size_t local_60;
  undefined1 *local_58;
  
  __n = strlen(param_5);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_68 = CONCAT71(local_68._1_7_,(char)((int)__n << 1));
    __dest = (undefined1 *)((ulong)&local_68 | 1);
    if (__n == 0) {
      *__dest = 0;
      plVar1 = *(long **)(param_1 + 0x10);
      goto joined_r0x004aa8a0;
    }
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
    local_68 = uVar2 | 1;
    local_60 = __n;
    local_58 = __dest;
  }
  memcpy(__dest,param_5,__n);
  __dest[__n] = 0;
  plVar1 = *(long **)(param_1 + 0x10);
joined_r0x004aa8a0:
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 004aa8b0 to 004aa8c3 has its CatchHandler @ 004aa908 */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x38,param_2,param_3,param_4,&local_68);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if ((local_68 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_58);
  }
  return;
}


