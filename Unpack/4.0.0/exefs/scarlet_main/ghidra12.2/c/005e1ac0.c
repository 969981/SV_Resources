/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005e1ac0; name: FUN_005e1ac0
 */


void FUN_005e1ac0(ulong *param_1,ulong *param_2)

{
  void *__src;
  undefined1 *__dest;
  ulong uVar1;
  ulong uVar2;
  
  if ((*param_2 & 1) == 0) {
    uVar1 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar1;
    *param_1 = uVar2;
  }
  else {
    uVar2 = param_2[1];
    __src = (void *)param_2[2];
    if (uVar2 < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar2 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar1 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar1);
      param_1[1] = uVar2;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 | 1;
    }
    memcpy(__dest,__src,uVar2 + 1);
  }
                    /* try { // try from 005e1b4c to 005e1b4f has its CatchHandler @ 005e1b68 */
  FUN_004eb024(param_1 + 3,param_2 + 3);
  return;
}


