/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00504568; name: FUN_00504568
 */


/* WARNING: Removing unreachable block (ram,0x005045b0) */

void FUN_00504568(ulong *param_1,long *param_2)

{
  void *__src;
  ulong *puVar1;
  undefined1 *__dest;
  ulong uVar2;
  ulong uVar3;
  
                    /* try { // try from 00504588 to 0050458f has its CatchHandler @ 00504640 */
  puVar1 = (ulong *)(**(code **)(*param_2 + 0x10))();
  if ((*puVar1 & 1) == 0) {
    uVar2 = puVar1[1];
    uVar3 = *puVar1;
    param_1[2] = puVar1[2];
    param_1[1] = uVar2;
    *param_1 = uVar3;
  }
  else {
    uVar3 = puVar1[1];
    __src = (void *)puVar1[2];
    if (uVar3 < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar3 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar3) {
                    /* try { // try from 00504638 to 0050463f has its CatchHandler @ 00504640 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar2 = uVar3 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
      param_1[1] = uVar3;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar2 | 1;
    }
    memcpy(__dest,__src,uVar3 + 1);
  }
  return;
}


