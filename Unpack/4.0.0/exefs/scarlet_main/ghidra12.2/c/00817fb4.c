/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00817fb4; name: FUN_00817fb4
 */


void FUN_00817fb4(ulong *param_1,ulong param_2,ulong param_3,long param_4,size_t param_5,
                 long param_6,size_t param_7,void *param_8)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  byte *__src;
  ulong uVar2;
  
  if (-param_2 - 0x12 < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if ((*param_1 & 1) == 0) {
    __src = (byte *)((long)param_1 + 1);
  }
  else {
    __src = (byte *)param_1[2];
  }
  if (param_2 < 0x7fffffffffffffe7) {
    uVar1 = param_2 << 1;
    if (param_2 << 1 <= param_3 + param_2) {
      uVar1 = param_3 + param_2;
    }
    uVar2 = 0x17;
    if (0x16 < uVar1) {
      uVar2 = uVar1 + 0x10 & 0xfffffffffffffff0;
    }
  }
  else {
    uVar2 = 0xffffffffffffffef;
  }
  __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
  if (param_5 != 0) {
    memcpy(__dest,__src,param_5);
  }
  if (param_7 != 0) {
    memcpy((void *)((long)__dest + param_5),param_8,param_7);
  }
  __n = (param_4 - param_6) - param_5;
  if (__n != 0) {
    memcpy((void *)((long)__dest + param_7 + param_5),__src + param_6 + param_5,__n);
  }
  if (param_2 != 0x16) {
    FUN_0049e790(PTR_LAB_047cba48,__src);
  }
  uVar1 = (param_4 - param_6) + param_7;
  *param_1 = uVar2 | 1;
  param_1[1] = uVar1;
  param_1[2] = (ulong)__dest;
  *(undefined1 *)((long)__dest + uVar1) = 0;
  return;
}


