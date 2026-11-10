/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00532c80; name: FUN_00532c80
 */


void FUN_00532c80(ulong *param_1,byte *param_2)

{
  uint uVar1;
  void *__src;
  byte *pbVar2;
  undefined1 *__dest;
  size_t __n;
  ulong uVar3;
  
  uVar3 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  __src = (void *)FUN_0049e7b0(PTR_FUN_047cba38,uVar3 + 1);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  uVar1 = FUN_00532a70(pbVar2,__src);
  if (0xffffffef < uVar1) {
                    /* try { // try from 00532d70 to 00532d77 has its CatchHandler @ 00532d78 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __n = (size_t)(int)uVar1;
  if (uVar1 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)(uVar1 << 1);
    if (uVar1 == 0) {
      *__dest = 0;
      goto joined_r0x00532d5c;
    }
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
  }
  memcpy(__dest,__src,__n);
  __dest[__n] = 0;
joined_r0x00532d5c:
  if (__src == (void *)0x0) {
    return;
  }
  FUN_0049e800(__src);
  FUN_0049e7e0(PTR_LAB_047cba48,__src);
  return;
}


